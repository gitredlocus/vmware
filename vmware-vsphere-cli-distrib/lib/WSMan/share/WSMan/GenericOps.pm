package WSMan::GenericOps;
use strict;
use WSMan::WSBasic;
use Data::Dump qw(dump);

#=========Wrapper classes for methods in the WSBasic class======================
sub new {
    my ($class, %arg) = @_;
    
    my $self = bless{
        client => WSMan::WSBasic->new(%arg),
        }, $class;
    return $self;
}

sub register_xml_ns(%){
    my ($self, %args) = @_;
    $self->{client}->register_xml_ns(%args);
}

sub register_class_ns(%){
    my ($self, %args) = @_;
    $self->{client}->register_class_ns(%args);
}
#===============================================================================


#====================Result Parsing methods=====================================
sub parse_ResourceURI{
    my $self = shift;
    my $string = shift;
    $string =~m/(.*)\/(.*)_/;
    my $clsns = $1;
    my $cls = $2;
    $self->register_class_ns($2 => $1);
    while($string=~m/(.*\/)/){
        $string=~s/$1//;
        return $string;
    }
}
    
sub parse_EPR{
    my $self = shift;
    my $hash = shift;
    my $hash2 = shift;
    foreach my $key1 (keys %{$hash}){
        if ($key1 eq 'EndpointReference'){
            my $key2 = parse_ResourceURI($self, $hash->{$key1}->
                                         {ReferenceParameters}->{ResourceURI});
            $hash2->{$key2} = parse_EPR($self, $hash->{EndpointReference}
                                        ->{ReferenceParameters}
                                        ->{SelectorSet}
                                        ->{Selector}, $hash2->{$key2});
        }
        elsif ($key1 eq 'Address'){
            if (exists { map { $_ => 1 } (keys %{$hash}) }->{ReferenceParameters})
            {
               my $key2 = parse_ResourceURI($self, $hash->
                                         {ReferenceParameters}->{ResourceURI});
                $hash2->{$key2} = parse_EPR($self, $hash
                                        ->{ReferenceParameters}
                                        ->{SelectorSet}
                                        ->{Selector}, $hash2->{$key2});
            }
        }
        elsif ( $key1 eq 'ReferenceParameters'){
            if (exists { map { $_ => 1 } (keys %{$hash}) }->{Address})
            {}
        }
        elsif( ref $hash->{$key1}){
            $hash2->{$key1} = parse_EPR($self, $hash->{$key1}, $hash2->{$key1});
        }
        else{
            $hash2->{$key1}= $hash->{$key1};
        }
    }
    return $hash2;
}

sub parse{
    my ($self, $som, $string, $hash, $count) = @_;
    foreach ($som->dataof($string."*")){
        if($_->uri=~m/(.*)\/(.*)_/){
            $self->register_class_ns($2 => $1);
        }
        #If the value is not a reference and the attribute value is empty,
        #It is a simple value like <somethin>value<\something>
        if (!(ref $_->value) && !(keys %{$_->attr})){
            $hash->{$_->name} = $_->value;
        }
        
        #If the value is a reference and the attribute value is empty,
        #recurse again.
        if (ref $_->value && !(keys %{$_->attr})){
            $string.=$_->name."/";
            my $name = $_->name."/";
            $hash->{$_->name} = parse($self, $som, $string, $hash->{$_->name});
            $string=~s/$name$//;
        }
        
        #if the value is not a reference and the attribute value is not empty,
        # then it is a selector.
        if (!(ref $_->value) && (keys %{$_->attr})){
            #HACK: Assumption is that each TAG will have only one attribute.
            foreach my $key (keys %{$_->attr}){
                #check to see if the Value is NIL.
                if ($key=~m/:nil/){
                    $hash->{$_->name} = undef;
                    last;
                }
                else{
                    $hash->{$_->name}->{$_->attr->{$key}} = $_->value;
                }
            }
        }
        
        #If the value is a reference and the attribute value is not empty
        #Recurse again.
        elsif (ref $_->value && (keys %{$_->attr})){
            if (!$count){
                $count = 1;
            }
            
            #HACK: Again the assumption is that there is only one reference key.
            foreach my $key (keys %{$_->attr}){
                my $attribute = $_->attr->{$key};
                my $backupstring = $string;
                $string.="[$count]/";
                my $name = "[$count]/";
                $count++;
                if($som->dataof($backupstring."[$count]/*")){
                    $hash->{$_->name}->{$attribute} =
                    parse($self, $som, $string, $hash->{$_->name}->{$attribute},$count);
                }
                else{
                    $hash->{$_->name}->{$attribute} =
                    parse($self, $som, $string, $hash->{$_->name}->{$attribute},undef);
                }
                $name=~s/\//\\\//g;
                $name=~s/\[/\\\[/g;
                $name=~s/\]/\\\]/g;
                $string=~s/$name$//;
            }
        }
    }
    return $hash;
}

#===============================================================================


#====================Methods to create filters for Enumerations=================
#==============Need to be changed for association classes======================#
sub _create_filterbody{
    my $self = shift;
    my $type = shift;
    my %args = @_;
    my $classname = $args{class_name};
    my ($class_ns) = split /_/,$classname;
    $args{class_name}="*";
    
    my ($selection, $filterbody);
    
     foreach (keys %{$args{selectors}}){
        $selection .= '<wsman:Selector Name="'.$_.'">'.$args{selectors}->{$_}.
                '</wsman:Selector>';
    }
    $filterbody ='<wsmb:'.$type.'>'.
    '<wsmb:Object>'.
    '<wsa:Address>'.
    'http://schemas.xmlsoap.org/ws/2004/08/addressing/role/anonymous'.
    '</wsa:Address>'.
    '<wsa:ReferenceParameters>'.
    '<wsman:ResourceURI>'.
    ${$self->{client}->{default_class_ns}}{$class_ns}.'/'.$classname.
    '</wsman:ResourceURI>'.
    '<wsman:SelectorSet>'.
    $selection.
    '</wsman:SelectorSet>'.
    '</wsa:ReferenceParameters>'.
    '</wsmb:Object>';
    
    #Check to see if the user has passed in an associationclassname
    if($args{associationclassname}){
        $filterbody.= '<wsmb:AssociationClassName>'.
        $args{associationclassname}.
        '</wsmb:AssociationClassName>';
    }
    else{
       #$filterbody.= '<wsmb:AssociationClassName/>'; 
    }
    
    #check to see if the user has entered a Role
    if($args{role}){
        $filterbody.= '<wsmb:Role>'.
        $args{role}.
        '</wsmb:Role>';
    }
    else{
        #$filterbody.= '<wsmb:Role/>'
    }
    
    #check to see if the user has entered a resultclassname
    if($args{resultclassname}){
        $filterbody.='<wsmb:ResultClassName>'.
        $args{resultclassname}.
        '</wsmb:ResultClassName>';
    }
    else{
        #$filterbody.='<wsmb:ResultClassName/>';
    }
    
    #check to see if the user has entered a resultrole
    if($args{resultrole}){
        $filterbody.='<wsmb:ResultRole>'.
        $args{resultrole}.
        '</wsmb:ResultRole>';
    }
    else{
        #$filterbody.='<wsmb:ResultRole/>';
    }
    
    #check to see if the user has entered an includeresult
    if($args{includeresult}){
        foreach (@{$args{includeresult}}){
            $filterbody.='<wsmb:IncludeResultProperty>'.
            $_.
            '</wsmb:IncludeResultProperty>';
        }
    }
    else{
        #$filterbody.='<wsmb:IncludeResultProperty/>';
    }
    
    $filterbody.='</wsmb:'.$type.'>';
    
    return $filterbody;
}

#===============================================================================

#====Generic Operations defined in the WS-CIM specs=============================
sub Identify{
    my $self = shift;
    my $response = $self->{client}->Identify;
    if($response->faultcode){
        die "IdentifyError: ",$response->fault->{Reason}->{Text};
    }
    else{
        my $resulthash;
        $resulthash = parse($self,$response, "//Body/IdentifyResponse/",
                            $resulthash);
        my $resulthash2;
        return parse_EPR($self, $resulthash, $resulthash2);
    }
}


sub EnumerateInstances{
    my $self = shift;
    my %args = @_;
    my @results;
    
    
    
    my $response = $self->{client}->Enumerate(%args);
    if($response->fault){
        die "EnumerateInstanceFault: ",$response->fault->{Reason}->{Text};
    }
    
    $args{enumid} = $response->result;
    while($args{enumid}){
        
        $response = $self->{client}->PullRelease(%args, action => 'Pull');
    
        if($response->fault){
        die "EnumerateInstanceFault: ",$response->fault->{Reason}->{Text};
        }
        my $resulthash;
        my $string="//PullResponse/Items/";
        $resulthash = parse($self, $response, $string, $resulthash);
        my $resulthash2;
        #print scalar(dump $resulthash);
        $resulthash2 = parse_EPR($self, $resulthash, $resulthash2);
        #print scalar(dump $resulthash2);
        if($resulthash2){
        	push @results, $resulthash2;
	}
        
        $args{enumid} = $response->dataof('//PullResponse/EnumerationContext');
        if($args{enumid}){
            $args{enumid} = $args{enumid}->value;
        }
    }
    if(@results){
    	return @results;
    }
    else{
	return ();
	}
}

sub EnumerateInstanceNames{
    return EnumerateInstances(@_, enummode => 'EnumerateEPR');
}

sub EnumerateAssociations{
    my $self = shift;
    my %args = @_;
    my $associationtype = $args{associationtype};
    delete $args{associationtype}; 
    my $enummode = $args{enummode};
    delete $args{enummode};
    my $filterbody = _create_filterbody($self, $associationtype, %args);
    my $classname = $args{class_name};
    my ($class_ns) = split /_/,$classname;
    $args{class_name}="*";
    
    my @results;
    my $response;
    if ($enummode){
        $response =
        $self->{client}->Enumerate(class_name => $args{class_name},
                               namespace => $args{namespace},
                                filter => 'http://schemas.dmtf.org/wbem/wsman/'.
                                '1/cimbinding/associationFilter',
                                filterbody => $filterbody,
                                enummode => $enummode);
    }
    else{
    $response =
    $self->{client}->Enumerate(class_name => $args{class_name},
                               namespace => $args{namespace},
                                filter => 'http://schemas.dmtf.org/wbem/wsman/'.
                                '1/cimbinding/associationFilter',
                                filterbody => $filterbody);
    }
    
    if($response->fault){
        die "EnumerateAssociationsFault: ",$response->fault->{Reason}->{Text};
        }
    
    my $enumid = $response->result;
    while($enumid){
        $response = $self->{client}->PullRelease(class_name => '*'
                                          ,enumid => $enumid,
                                          action => 'Pull');
        
        if($response->fault){
        die "EnumerateAssociationsFault: ",$response->fault->{Reason}->{Text};
        }
        
        my $resulthash;
        my $string="//PullResponse/Items/";
        $resulthash = parse($self, $response, $string, $resulthash);
        my $resulthash2;
        #print scalar(dump $resulthash);
        $resulthash2 = parse_EPR($self, $resulthash, $resulthash2);
        #print scalar(dump $resulthash2);
        if($resulthash2){
        	push @results, $resulthash2;
	}
        
        $enumid = $response->dataof('//PullResponse/EnumerationContext');
        if($enumid){
            $enumid = $enumid->value;
        }
    }
    if(@results){
    	return @results;
    }
    else{
	return ();
    }
}

sub EnumerateAssociatedInstances{
    return EnumerateAssociations(@_, associationtype => 'AssociatedInstances');
}

sub EnumerateAssociatedInstanceNames{
    return EnumerateAssociations(@_, associationtype => 'AssociatedInstances',
                                 enummode => 'EnumerateEPR');
}

sub EnumerateAssociationInstances{
    return EnumerateAssociations(@_, associationtype => 'AssociationInstances');
}

sub EnumerateAssociationInstanceNames{
    return EnumerateAssociations(@_, associationtype => 'AssociationInstances',
                                 enummode => 'EnumerateEPR');
}

sub GetInstance{
    my $self = shift;
    my %args = @_;
    my $response=
    $self->{client}->Get(%args);
    
    if($response->fault){
        die "GetInstanceFault: ",$response->fault->{Reason}->{Text};
        }
    my $string = "//Body/";
    my $resulthash;
    $resulthash = parse($self,$response, $string, $resulthash);
    my $resulthash2;
    return parse_EPR($self, $resulthash, $resulthash2);
    
}
#===============================================================================

1;
