package WSMan::WSBasic;
use strict;

#=========================<Imports>==================================#
use SOAP::Lite;
use UUID;
#use MIME::Base64;
#=========================</Imports>=================================#


#=========================<Defaults>=================================#
my %namespaces = ('wsa' => "http://schemas.xmlsoap.org/ws/2004/08/addressing",
                  'wsen'=> "http://schemas.xmlsoap.org/ws/2004/09/enumeration",
                  'wsman'=> "http://schemas.dmtf.org/wbem/wsman/1/wsman.xsd",
                  'soap' => "http://www.w3.org/2003/05/soap-envelope",
                  'wsmid' => "http://schemas.dmtf.org/wbem/wsman/".
                            "identity/1/wsmanidentity.xsd",
                  'wsmb' =>  "http://schemas.dmtf.org/wbem/wsman/1/cimbinding.xsd"
                  );
#=========================<Defaults>=================================#

#    Constructor.
sub new {
    my ($class, %arg) = @_;
    
    my $ns;
    
    my $self = bless {
        client => SOAP::Lite->new(),
        serializer => SOAP::Serializer->new(),
        default_class_ns => {'CIM' => 'http://schemas.dmtf.org/wbem/wscim/1/cim-schema/2',
                             '*' => 'http://schemas.dmtf.org/wbem/wscim/1'},
        address => $arg{address},
        port => $arg{port},
        path => $arg{path},
        username => $arg{username},
        password => $arg{password},
        namespace => $arg{namespace}
        }, $class;
    
    #Clean up the input by the user, if there is any need to!!
    if ($self->{address}!~m/^(http|https):\/\//){
        $self->{address}="http://".$self->{address};
    }
    $self->{address}=~s/\/$//;
    
    $self->{path}=~s/^\///;
    $self->{path}=~s/\/$//;
    #========================================================
    
    $self->{client}->proxy($self->{address}.":".$self->{port}."/".$self->{path});
    
    $self->{client}->transport->http_request
    ->header('Content-Type' => 'application/soap+xml');
    
    $self->{client}->transport->http_request
    ->header('Accept' => 'application/soap+xml');
    
    #Changed from the submitted one.
    $self->{client}->transport->http_request->
    authorization_basic($self->{username},$self->{password});
    #->header('Authorization' => 'Basic '.encode_base64($self->{username}.":".
    #                                                $self->{password}));
    
    #HACK: amother hack to accomodate the slow providers.
    if($arg{timeout}){
    $self->{client}->transport->timeout($arg{timeout});
    }
    
        foreach $ns (keys %namespaces){
        $self->{serializer}->register_ns($namespaces{$ns}, $ns);
    }
    return $self;
}

# Method to register extra namespaces. 
sub register_xml_ns(%){
    my($self, %arg) = @_;
    
    foreach  (keys %arg){
        $self->{serializer}->register_ns($arg{$_}, $_);
    }
}

#Method to register urns. The new URNs with the same keys will overwrite the
#old ones.
sub register_class_ns(%){
    my($self, %arg) = @_;
    %{$self->{default_class_ns}} = (%{$self->{default_class_ns}}, %arg);
}

#Method to generate UUIDs.
sub _get_uuid{
    my ($uuid, $string);
    UUID::generate($uuid);
    UUID::unparse($uuid, $string);
    return $string;
}

#Identify Method.
sub Identify{
    my $self =  shift;
    return $self->{client}->serializer($self->{serializer})
            ->readable(1)->call(SOAP::Data
                                ->name('Identify')
                                ->prefix('wsmid')
                               );
}


#Generic Enumerate method
sub Enumerate{
    my $self = shift;
    my %args = @_;
    $args{uuid} = _get_uuid;
    ($args{class_ns}) = split /_/,$args{class_name};
    if(!$args{header}){
        $args{header}=
        '<wsa:Action soap:mustUnderstand="true">'.
        'http://schemas.xmlsoap.org/ws/2004/09/enumeration/Enumerate'.
        '</wsa:Action>'.
        '<wsa:To soap:mustUnderstand="true">'.
        $self->{address}.":".$self->{port}."/".$self->{path}.
        '</wsa:To>'.
        '<wsman:ResourceURI soap:mustUnderstand="true">'.
        $self->{default_class_ns}{$args{class_ns}}."/".$args{class_name}.
        '</wsman:ResourceURI>'.
        '<wsa:MessageID soap:mustUnderstand="true">'.
        $args{uuid}.
        '</wsa:MessageID>'.
        '<wsa:ReplyTo>'.
        '<wsa:Address>'.
        'http://schemas.xmlsoap.org/ws/2004/08/addressing/role/anonymous'.
        '</wsa:Address>'.
        '</wsa:ReplyTo>';
    }
    
    #Check to see if the user has passed in a namespace
    if($args{namespace}){
        $args{header}.=
        '<wsman:SelectorSet>'.
        '<wsman:Selector Name="__cimnamespace">'.
        $args{namespace}.
        '</wsman:Selector>'.
        '</wsman:SelectorSet>';
    }
        
    #Check to see if there is a default namespace to be used.
    elsif($self->{namespace}){
        $args{header}.=
        '<wsman:SelectorSet>'.
        '<wsman:Selector Name="__cimnamespace">'.
        $self->{namespace}.
        '</wsman:Selector>'.
        '</wsman:SelectorSet>';
    }
    
    if($args{headeradditions}){
        $args{header}.=$args{headeradditions};
    }
    
    #check to see if the user has passed in an EnumerationMode
    if($args{enummode}){
        $args{body}.=
        '<wsman:EnumerationMode>'.$args{enummode}.'</wsman:EnumerationMode>';
    }
    
    #check to see if the user has passed in a PolymorphismMode
    if($args{polymorphism}){
        $args{body}.=
        '<wsmb:PolymorphismMode>'.$args{polymorphism}.'</wsmb:PolymorphismMode>';
    }
    
    #check to see if the user has passed in a Filter.
    if($args{filter}){
        $args{body}.=
        '<wsman:Filter Dialect="'.$args{filter}.'">'.
        $args{filterbody}.
        '</wsman:Filter>';        
    }
    
    #HACK: delete this if everything works out.
    #$args{bodyaddition}.="<wsen:Expires>P5M</wsen:Expires>";
    #check to see if the user has passed in a body addition.
    if($args{bodyaddition}){
        $args{body}.= $args{bodyaddition};
    }
    
    if($args{body}){
        return $self->{client}->serializer($self->{serializer})->readable(1)
                            ->call(SOAP::Header->type('xml' => $args{header}),
                                    SOAP::Data->name('Enumerate')
                                    ->prefix('wsen')
                                    => SOAP::Data->type('xml' => $args{body})
                                    );
    }
    
    else{
       return $self->{client}->serializer($self->{serializer})->readable(1)
                            ->call(SOAP::Header->type('xml' => $args{header}),
                                    SOAP::Data->name('Enumerate')
                                    ->prefix('wsen')
                                  );
    }  
}

sub PullRelease{
    my $self = shift;
    my %args = @_;
    $args{uuid} = _get_uuid;
    ($args{class_ns}) = split /_/,$args{class_name};
    
    if(!$args{header}){
        $args{header}=
        '<wsa:Action soap:mustUnderstand="true">'.
        'http://schemas.xmlsoap.org/ws/2004/09/enumeration/'.$args{action}.
        '</wsa:Action>'.
        '<wsa:To soap:mustUnderstand="true">'.
        $self->{address}.":".$self->{port}."/".$self->{path}.
        '</wsa:To>'.
        '<wsman:ResourceURI soap:mustUnderstand="true">'.
        $self->{default_class_ns}{$args{class_ns}}."/".$args{class_name}.
        '</wsman:ResourceURI>'.
        '<wsa:MessageID soap:mustUnderstand="true">'.
        $args{uuid}.
        '</wsa:MessageID>'.
        '<wsa:ReplyTo>'.
        '<wsa:Address>'.
        'http://schemas.xmlsoap.org/ws/2004/08/addressing/role/anonymous'.
        '</wsa:Address>'.
        '</wsa:ReplyTo>';
    }
    
    #Check to see if the user has passed in a namespace
    if($args{namespace}){
        $args{header}.=
        '<wsman:SelectorSet>'.
        '<wsman:Selector Name="__cimnamespace">'.
        $args{namespace}.
        '</wsman:Selector>'.
        '</wsman:SelectorSet>';
    }
        
    #Check to see if there is a default namespace to be used.
    elsif($self->{namespace}){
        $args{header}.=
        '<wsman:SelectorSet>'.
        '<wsman:Selector Name="__cimnamespace">'.
        $self->{namespace}.
        '</wsman:Selector>'.
        '</wsman:SelectorSet>';
    }
    
    if(!$args{body}){
        return $self->{client}->serializer($self->{serializer})->readable(1)
                            ->call(SOAP::Header->type('xml' => $args{header}),
                                    SOAP::Data->name($args{action})
                                    ->prefix('wsen')=>
                                    SOAP::Data->name('EnumerationContext')
                                    ->prefix('wsen')
                                    ->value($args{enumid})
                                    );
    }
    else{
        return $self->{client}->serializer($self->{serializer})->readable(1)
                            ->call(SOAP::Header->type('xml' => $args{header}),
                                    SOAP::Data->name($args{action})
                                    ->prefix('wsen')=>
                                    SOAP::Data->type('xml'=>$args{body})
                                    );
    }
    
}

#===============================================================================
sub Get{
    my $self = shift;
    my %args = @_;
    $args{uuid} = _get_uuid;
    ($args{class_ns}) = split /_/,$args{class_name};
    my $xml;
    
    if(ref $args{options}){
            $xml = '<wsa:Action soap:mustUnderstand="true">'.
        'http://schemas.xmlsoap.org/ws/2004/09/transfer/Get'.
        '</wsa:Action>'.
        '<wsa:To soap:mustUnderstand="true">'.
        $self->{address}.":".$self->{port}."/".$self->{path}.
        '</wsa:To>'.
        '<wsman:ResourceURI soap:mustUnderstand="true">'.
        $self->{default_class_ns}{$args{class_ns}}."/".$args{class_name}.
        '</wsman:ResourceURI>'.
        '<wsa:MessageID soap:mustUnderstand="true">'.
        $args{uuid}.
        '</wsa:MessageID>'.
        '<wsa:ReplyTo>'.
        '<wsa:Address>'.
        'http://schemas.xmlsoap.org/ws/2004/08/addressing/role/anonymous'.
        '</wsa:Address>'.
        '</wsa:ReplyTo>';
            
        $xml = _create_selectorset($self, $xml, $args{options});
        if($args{namespace}){
        $xml.=
        '<wsman:Selector Name="__cimnamespace">'.
        $args{namespace}.
        '</wsman:Selector>';
        }
        
        #Check to see if there is a default namespace to be used.
        elsif($self->{namespace}){
            $xml.=
            '<wsman:Selector Name="__cimnamespace">'.
            $self->{namespace}.
            '</wsman:Selector>';
        }
        
            $xml.='</wsman:SelectorSet>';
            
    }
    else{
        $xml = $args{options};
    }
    
    return  $self->{client}->serializer($self->{serializer})->readable(1)
                            ->call(SOAP::Header->type('xml' => $xml));
    
}

sub _create_selectorset{
    my $self = shift;
    my $xml = shift;
    my $options = shift;
    
    $xml.='<wsman:SelectorSet>';
    foreach my $key (keys %{$options}){
        if( ref $options->{$key}){
            $xml.= '<wsman:Selector Name="'.$key.'">';
            foreach my $key2 (keys %{$options->{$key}}){
                #my $key2 = (keys %{$options->{$key}})[0];
                $xml.='<wsa:EndpointReference>'.
                        '<wsa:Address>'.
                        'http://schemas.xmlsoap.org/ws/2004/08/addressing/role/anonymous'.
                        '</wsa:Address>'.
                        '<wsa:ReferenceParameters>'.
                        '<wsman:ResourceURI>';
                $key2=~m/(.*)_(.*)/;
                $xml.="$self->{default_class_ns}{$1}"."/"."$key2";
                $xml.="</wsman:ResourceURI>";
                $xml = _create_selectorset($self,$xml, $options->{$key}->{$key2});
                $xml.= '</wsman:SelectorSet></wsa:ReferenceParameters>'.
                        '</wsa:EndpointReference>'.
                        '</wsman:Selector>';
            }
        }
        else{
            $xml.='<wsman:Selector Name="'.$key.'">'.$options->{$key}.
            '</wsman:Selector>';
        }
    }
    return $xml;
}
#===============================================================================



1;
