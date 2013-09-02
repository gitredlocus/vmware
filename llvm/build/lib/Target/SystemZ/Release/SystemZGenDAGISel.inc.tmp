/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*DAG Instruction Selector for the SystemZ target                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

// *** NOTE: This file is #included into the middle of the target
// *** instruction selector class.  These functions are really methods.

// The main instruction selector code.
SDNode *SelectCode(SDNode *N) {
  // Some target values are emitted as 2 bytes, TARGET_VAL handles
  // this.
  #define TARGET_VAL(X) X & 255, unsigned(X) >> 8
  static const unsigned char MatcherTable[] = {
/*0*/     OPC_SwitchOpcode /*99 cases */, 55|128,24/*3127*/,  TARGET_VAL(ISD::STORE),// ->3132
/*5*/       OPC_RecordMemRef,
/*6*/       OPC_RecordNode,   // #0 = 'st' chained node
/*7*/       OPC_Scope, 25|128,19/*2457*/, /*->2467*/ // 2 children in Scope
/*10*/        OPC_MoveChild, 1,
/*12*/        OPC_SwitchOpcode /*7 cases */, 3|128,11/*1411*/,  TARGET_VAL(SystemZISD::SELECT_CCMASK),// ->1428
/*17*/          OPC_CaptureGlueInput,
/*18*/          OPC_Scope, 79, /*->99*/ // 18 children in Scope
/*20*/            OPC_RecordChild0, // #1 = $new
/*21*/            OPC_MoveChild, 1,
/*23*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*26*/            OPC_RecordMemRef,
/*27*/            OPC_RecordNode, // #2 = 'ld' chained node
/*28*/            OPC_CheckFoldableChainNode,
/*29*/            OPC_RecordChild1, // #3 = $addr
/*30*/            OPC_CheckChild1Type, MVT::i64,
/*32*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*34*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*36*/            OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*38*/            OPC_CheckPredicate, 3, // Predicate_nonvolatile_anyextloadi8
/*40*/            OPC_MoveParent,
/*41*/            OPC_RecordChild2, // #4 = $valid
/*42*/            OPC_MoveChild, 2,
/*44*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*47*/            OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*49*/            OPC_MoveParent,
/*50*/            OPC_RecordChild3, // #5 = $cc
/*51*/            OPC_MoveChild, 3,
/*53*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*56*/            OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*58*/            OPC_MoveParent,
/*59*/            OPC_CheckType, MVT::i32,
/*61*/            OPC_MoveParent,
/*62*/            OPC_MoveChild, 2,
/*64*/            OPC_CheckSame, 3,
/*66*/            OPC_MoveParent,
/*67*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*69*/            OPC_CheckPredicate, 6, // Predicate_truncstore
/*71*/            OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*73*/            OPC_CheckPredicate, 8, // Predicate_nonvolatile_truncstorei8
/*75*/            OPC_CheckComplexPat, /*CP*/0, /*#*/3, // selectBDXAddr20Only:$addr #6 #7 #8
/*78*/            OPC_EmitMergeInputChains, 2, 0, 2, 
/*82*/            OPC_EmitConvertToTarget, 4,
/*84*/            OPC_EmitConvertToTarget, 5,
/*86*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore8_32), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 1, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:i32 GR32:i32:$new, (ld:i32 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>><<P:Predicate_nonvolatile_anyextloadi8>>, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>><<P:Predicate_nonvolatile_truncstorei8>> - Complexity = 43
                  // Dst: (CondStore8_32:i32 GR32:i32:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*99*/          /*Scope*/ 79, /*->179*/
/*100*/           OPC_MoveChild, 0,
/*102*/           OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*105*/           OPC_RecordMemRef,
/*106*/           OPC_RecordNode, // #1 = 'ld' chained node
/*107*/           OPC_CheckFoldableChainNode,
/*108*/           OPC_RecordChild1, // #2 = $addr
/*109*/           OPC_CheckChild1Type, MVT::i64,
/*111*/           OPC_CheckPredicate, 0, // Predicate_unindexedload
/*113*/           OPC_CheckPredicate, 1, // Predicate_anyextload
/*115*/           OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*117*/           OPC_CheckPredicate, 3, // Predicate_nonvolatile_anyextloadi8
/*119*/           OPC_MoveParent,
/*120*/           OPC_RecordChild1, // #3 = $new
/*121*/           OPC_RecordChild2, // #4 = $valid
/*122*/           OPC_MoveChild, 2,
/*124*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*127*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*129*/           OPC_MoveParent,
/*130*/           OPC_RecordChild3, // #5 = $cc
/*131*/           OPC_MoveChild, 3,
/*133*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*136*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*138*/           OPC_MoveParent,
/*139*/           OPC_CheckType, MVT::i32,
/*141*/           OPC_MoveParent,
/*142*/           OPC_MoveChild, 2,
/*144*/           OPC_CheckSame, 2,
/*146*/           OPC_MoveParent,
/*147*/           OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*149*/           OPC_CheckPredicate, 6, // Predicate_truncstore
/*151*/           OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*153*/           OPC_CheckPredicate, 8, // Predicate_nonvolatile_truncstorei8
/*155*/           OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$addr #6 #7 #8
/*158*/           OPC_EmitMergeInputChains, 2, 0, 1, 
/*162*/           OPC_EmitConvertToTarget, 4,
/*164*/           OPC_EmitConvertToTarget, 5,
/*166*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore8_32Inv), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 3, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:i32 (ld:i32 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>><<P:Predicate_nonvolatile_anyextloadi8>>, GR32:i32:$new, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>><<P:Predicate_nonvolatile_truncstorei8>> - Complexity = 43
                  // Dst: (CondStore8_32Inv:i32 GR32:i32:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*179*/         /*Scope*/ 79, /*->259*/
/*180*/           OPC_RecordChild0, // #1 = $new
/*181*/           OPC_MoveChild, 1,
/*183*/           OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*186*/           OPC_RecordMemRef,
/*187*/           OPC_RecordNode, // #2 = 'ld' chained node
/*188*/           OPC_CheckFoldableChainNode,
/*189*/           OPC_RecordChild1, // #3 = $addr
/*190*/           OPC_CheckChild1Type, MVT::i64,
/*192*/           OPC_CheckPredicate, 0, // Predicate_unindexedload
/*194*/           OPC_CheckPredicate, 1, // Predicate_anyextload
/*196*/           OPC_CheckPredicate, 9, // Predicate_anyextloadi16
/*198*/           OPC_CheckPredicate, 10, // Predicate_nonvolatile_anyextloadi16
/*200*/           OPC_MoveParent,
/*201*/           OPC_RecordChild2, // #4 = $valid
/*202*/           OPC_MoveChild, 2,
/*204*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*207*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*209*/           OPC_MoveParent,
/*210*/           OPC_RecordChild3, // #5 = $cc
/*211*/           OPC_MoveChild, 3,
/*213*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*216*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*218*/           OPC_MoveParent,
/*219*/           OPC_CheckType, MVT::i32,
/*221*/           OPC_MoveParent,
/*222*/           OPC_MoveChild, 2,
/*224*/           OPC_CheckSame, 3,
/*226*/           OPC_MoveParent,
/*227*/           OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*229*/           OPC_CheckPredicate, 6, // Predicate_truncstore
/*231*/           OPC_CheckPredicate, 11, // Predicate_truncstorei16
/*233*/           OPC_CheckPredicate, 12, // Predicate_nonvolatile_truncstorei16
/*235*/           OPC_CheckComplexPat, /*CP*/0, /*#*/3, // selectBDXAddr20Only:$addr #6 #7 #8
/*238*/           OPC_EmitMergeInputChains, 2, 0, 2, 
/*242*/           OPC_EmitConvertToTarget, 4,
/*244*/           OPC_EmitConvertToTarget, 5,
/*246*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore16_32), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 1, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:i32 GR32:i32:$new, (ld:i32 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi16>><<P:Predicate_nonvolatile_anyextloadi16>>, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_nonvolatile_truncstorei16>> - Complexity = 43
                  // Dst: (CondStore16_32:i32 GR32:i32:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*259*/         /*Scope*/ 79, /*->339*/
/*260*/           OPC_MoveChild, 0,
/*262*/           OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*265*/           OPC_RecordMemRef,
/*266*/           OPC_RecordNode, // #1 = 'ld' chained node
/*267*/           OPC_CheckFoldableChainNode,
/*268*/           OPC_RecordChild1, // #2 = $addr
/*269*/           OPC_CheckChild1Type, MVT::i64,
/*271*/           OPC_CheckPredicate, 0, // Predicate_unindexedload
/*273*/           OPC_CheckPredicate, 1, // Predicate_anyextload
/*275*/           OPC_CheckPredicate, 9, // Predicate_anyextloadi16
/*277*/           OPC_CheckPredicate, 10, // Predicate_nonvolatile_anyextloadi16
/*279*/           OPC_MoveParent,
/*280*/           OPC_RecordChild1, // #3 = $new
/*281*/           OPC_RecordChild2, // #4 = $valid
/*282*/           OPC_MoveChild, 2,
/*284*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*287*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*289*/           OPC_MoveParent,
/*290*/           OPC_RecordChild3, // #5 = $cc
/*291*/           OPC_MoveChild, 3,
/*293*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*296*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*298*/           OPC_MoveParent,
/*299*/           OPC_CheckType, MVT::i32,
/*301*/           OPC_MoveParent,
/*302*/           OPC_MoveChild, 2,
/*304*/           OPC_CheckSame, 2,
/*306*/           OPC_MoveParent,
/*307*/           OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*309*/           OPC_CheckPredicate, 6, // Predicate_truncstore
/*311*/           OPC_CheckPredicate, 11, // Predicate_truncstorei16
/*313*/           OPC_CheckPredicate, 12, // Predicate_nonvolatile_truncstorei16
/*315*/           OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$addr #6 #7 #8
/*318*/           OPC_EmitMergeInputChains, 2, 0, 1, 
/*322*/           OPC_EmitConvertToTarget, 4,
/*324*/           OPC_EmitConvertToTarget, 5,
/*326*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore16_32Inv), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 3, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:i32 (ld:i32 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi16>><<P:Predicate_nonvolatile_anyextloadi16>>, GR32:i32:$new, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_nonvolatile_truncstorei16>> - Complexity = 43
                  // Dst: (CondStore16_32Inv:i32 GR32:i32:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*339*/         /*Scope*/ 75, /*->415*/
/*340*/           OPC_RecordChild0, // #1 = $new
/*341*/           OPC_MoveChild, 1,
/*343*/           OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*346*/           OPC_RecordMemRef,
/*347*/           OPC_RecordNode, // #2 = 'ld' chained node
/*348*/           OPC_CheckFoldableChainNode,
/*349*/           OPC_RecordChild1, // #3 = $addr
/*350*/           OPC_CheckChild1Type, MVT::i64,
/*352*/           OPC_CheckPredicate, 0, // Predicate_unindexedload
/*354*/           OPC_CheckPredicate, 13, // Predicate_load
/*356*/           OPC_CheckPredicate, 14, // Predicate_nonvolatile_load
/*358*/           OPC_MoveParent,
/*359*/           OPC_RecordChild2, // #4 = $valid
/*360*/           OPC_MoveChild, 2,
/*362*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*365*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*367*/           OPC_MoveParent,
/*368*/           OPC_RecordChild3, // #5 = $cc
/*369*/           OPC_MoveChild, 3,
/*371*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*374*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*376*/           OPC_MoveParent,
/*377*/           OPC_CheckType, MVT::i32,
/*379*/           OPC_MoveParent,
/*380*/           OPC_MoveChild, 2,
/*382*/           OPC_CheckSame, 3,
/*384*/           OPC_MoveParent,
/*385*/           OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*387*/           OPC_CheckPredicate, 15, // Predicate_store
/*389*/           OPC_CheckPredicate, 16, // Predicate_nonvolatile_store
/*391*/           OPC_CheckComplexPat, /*CP*/0, /*#*/3, // selectBDXAddr20Only:$addr #6 #7 #8
/*394*/           OPC_EmitMergeInputChains, 2, 0, 2, 
/*398*/           OPC_EmitConvertToTarget, 4,
/*400*/           OPC_EmitConvertToTarget, 5,
/*402*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore32_32), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 1, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:i32 GR32:i32:$new, (ld:i32 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_nonvolatile_load>>, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_nonvolatile_store>> - Complexity = 43
                  // Dst: (CondStore32_32:i32 GR32:i32:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*415*/         /*Scope*/ 75, /*->491*/
/*416*/           OPC_MoveChild, 0,
/*418*/           OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*421*/           OPC_RecordMemRef,
/*422*/           OPC_RecordNode, // #1 = 'ld' chained node
/*423*/           OPC_CheckFoldableChainNode,
/*424*/           OPC_RecordChild1, // #2 = $addr
/*425*/           OPC_CheckChild1Type, MVT::i64,
/*427*/           OPC_CheckPredicate, 0, // Predicate_unindexedload
/*429*/           OPC_CheckPredicate, 13, // Predicate_load
/*431*/           OPC_CheckPredicate, 14, // Predicate_nonvolatile_load
/*433*/           OPC_MoveParent,
/*434*/           OPC_RecordChild1, // #3 = $new
/*435*/           OPC_RecordChild2, // #4 = $valid
/*436*/           OPC_MoveChild, 2,
/*438*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*441*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*443*/           OPC_MoveParent,
/*444*/           OPC_RecordChild3, // #5 = $cc
/*445*/           OPC_MoveChild, 3,
/*447*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*450*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*452*/           OPC_MoveParent,
/*453*/           OPC_CheckType, MVT::i32,
/*455*/           OPC_MoveParent,
/*456*/           OPC_MoveChild, 2,
/*458*/           OPC_CheckSame, 2,
/*460*/           OPC_MoveParent,
/*461*/           OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*463*/           OPC_CheckPredicate, 15, // Predicate_store
/*465*/           OPC_CheckPredicate, 16, // Predicate_nonvolatile_store
/*467*/           OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$addr #6 #7 #8
/*470*/           OPC_EmitMergeInputChains, 2, 0, 1, 
/*474*/           OPC_EmitConvertToTarget, 4,
/*476*/           OPC_EmitConvertToTarget, 5,
/*478*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore32_32Inv), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 3, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:i32 (ld:i32 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_nonvolatile_load>>, GR32:i32:$new, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_nonvolatile_store>> - Complexity = 43
                  // Dst: (CondStore32_32Inv:i32 GR32:i32:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*491*/         /*Scope*/ 79, /*->571*/
/*492*/           OPC_RecordChild0, // #1 = $new
/*493*/           OPC_MoveChild, 1,
/*495*/           OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*498*/           OPC_RecordMemRef,
/*499*/           OPC_RecordNode, // #2 = 'ld' chained node
/*500*/           OPC_CheckFoldableChainNode,
/*501*/           OPC_RecordChild1, // #3 = $addr
/*502*/           OPC_CheckChild1Type, MVT::i64,
/*504*/           OPC_CheckPredicate, 0, // Predicate_unindexedload
/*506*/           OPC_CheckPredicate, 1, // Predicate_anyextload
/*508*/           OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*510*/           OPC_CheckPredicate, 3, // Predicate_nonvolatile_anyextloadi8
/*512*/           OPC_MoveParent,
/*513*/           OPC_RecordChild2, // #4 = $valid
/*514*/           OPC_MoveChild, 2,
/*516*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*519*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*521*/           OPC_MoveParent,
/*522*/           OPC_RecordChild3, // #5 = $cc
/*523*/           OPC_MoveChild, 3,
/*525*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*528*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*530*/           OPC_MoveParent,
/*531*/           OPC_CheckType, MVT::i64,
/*533*/           OPC_MoveParent,
/*534*/           OPC_MoveChild, 2,
/*536*/           OPC_CheckSame, 3,
/*538*/           OPC_MoveParent,
/*539*/           OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*541*/           OPC_CheckPredicate, 6, // Predicate_truncstore
/*543*/           OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*545*/           OPC_CheckPredicate, 8, // Predicate_nonvolatile_truncstorei8
/*547*/           OPC_CheckComplexPat, /*CP*/0, /*#*/3, // selectBDXAddr20Only:$addr #6 #7 #8
/*550*/           OPC_EmitMergeInputChains, 2, 0, 2, 
/*554*/           OPC_EmitConvertToTarget, 4,
/*556*/           OPC_EmitConvertToTarget, 5,
/*558*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 1, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:i64 GR64:i64:$new, (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>><<P:Predicate_nonvolatile_anyextloadi8>>, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>><<P:Predicate_nonvolatile_truncstorei8>> - Complexity = 43
                  // Dst: (CondStore8:i32 GR64:i64:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*571*/         /*Scope*/ 79, /*->651*/
/*572*/           OPC_MoveChild, 0,
/*574*/           OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*577*/           OPC_RecordMemRef,
/*578*/           OPC_RecordNode, // #1 = 'ld' chained node
/*579*/           OPC_CheckFoldableChainNode,
/*580*/           OPC_RecordChild1, // #2 = $addr
/*581*/           OPC_CheckChild1Type, MVT::i64,
/*583*/           OPC_CheckPredicate, 0, // Predicate_unindexedload
/*585*/           OPC_CheckPredicate, 1, // Predicate_anyextload
/*587*/           OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*589*/           OPC_CheckPredicate, 3, // Predicate_nonvolatile_anyextloadi8
/*591*/           OPC_MoveParent,
/*592*/           OPC_RecordChild1, // #3 = $new
/*593*/           OPC_RecordChild2, // #4 = $valid
/*594*/           OPC_MoveChild, 2,
/*596*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*599*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*601*/           OPC_MoveParent,
/*602*/           OPC_RecordChild3, // #5 = $cc
/*603*/           OPC_MoveChild, 3,
/*605*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*608*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*610*/           OPC_MoveParent,
/*611*/           OPC_CheckType, MVT::i64,
/*613*/           OPC_MoveParent,
/*614*/           OPC_MoveChild, 2,
/*616*/           OPC_CheckSame, 2,
/*618*/           OPC_MoveParent,
/*619*/           OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*621*/           OPC_CheckPredicate, 6, // Predicate_truncstore
/*623*/           OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*625*/           OPC_CheckPredicate, 8, // Predicate_nonvolatile_truncstorei8
/*627*/           OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$addr #6 #7 #8
/*630*/           OPC_EmitMergeInputChains, 2, 0, 1, 
/*634*/           OPC_EmitConvertToTarget, 4,
/*636*/           OPC_EmitConvertToTarget, 5,
/*638*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore8Inv), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 3, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:i64 (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>><<P:Predicate_nonvolatile_anyextloadi8>>, GR64:i64:$new, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>><<P:Predicate_nonvolatile_truncstorei8>> - Complexity = 43
                  // Dst: (CondStore8Inv:i32 GR64:i64:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*651*/         /*Scope*/ 79, /*->731*/
/*652*/           OPC_RecordChild0, // #1 = $new
/*653*/           OPC_MoveChild, 1,
/*655*/           OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*658*/           OPC_RecordMemRef,
/*659*/           OPC_RecordNode, // #2 = 'ld' chained node
/*660*/           OPC_CheckFoldableChainNode,
/*661*/           OPC_RecordChild1, // #3 = $addr
/*662*/           OPC_CheckChild1Type, MVT::i64,
/*664*/           OPC_CheckPredicate, 0, // Predicate_unindexedload
/*666*/           OPC_CheckPredicate, 1, // Predicate_anyextload
/*668*/           OPC_CheckPredicate, 9, // Predicate_anyextloadi16
/*670*/           OPC_CheckPredicate, 10, // Predicate_nonvolatile_anyextloadi16
/*672*/           OPC_MoveParent,
/*673*/           OPC_RecordChild2, // #4 = $valid
/*674*/           OPC_MoveChild, 2,
/*676*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*679*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*681*/           OPC_MoveParent,
/*682*/           OPC_RecordChild3, // #5 = $cc
/*683*/           OPC_MoveChild, 3,
/*685*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*688*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*690*/           OPC_MoveParent,
/*691*/           OPC_CheckType, MVT::i64,
/*693*/           OPC_MoveParent,
/*694*/           OPC_MoveChild, 2,
/*696*/           OPC_CheckSame, 3,
/*698*/           OPC_MoveParent,
/*699*/           OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*701*/           OPC_CheckPredicate, 6, // Predicate_truncstore
/*703*/           OPC_CheckPredicate, 11, // Predicate_truncstorei16
/*705*/           OPC_CheckPredicate, 12, // Predicate_nonvolatile_truncstorei16
/*707*/           OPC_CheckComplexPat, /*CP*/0, /*#*/3, // selectBDXAddr20Only:$addr #6 #7 #8
/*710*/           OPC_EmitMergeInputChains, 2, 0, 2, 
/*714*/           OPC_EmitConvertToTarget, 4,
/*716*/           OPC_EmitConvertToTarget, 5,
/*718*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore16), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 1, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:i64 GR64:i64:$new, (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi16>><<P:Predicate_nonvolatile_anyextloadi16>>, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_nonvolatile_truncstorei16>> - Complexity = 43
                  // Dst: (CondStore16:i32 GR64:i64:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*731*/         /*Scope*/ 79, /*->811*/
/*732*/           OPC_MoveChild, 0,
/*734*/           OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*737*/           OPC_RecordMemRef,
/*738*/           OPC_RecordNode, // #1 = 'ld' chained node
/*739*/           OPC_CheckFoldableChainNode,
/*740*/           OPC_RecordChild1, // #2 = $addr
/*741*/           OPC_CheckChild1Type, MVT::i64,
/*743*/           OPC_CheckPredicate, 0, // Predicate_unindexedload
/*745*/           OPC_CheckPredicate, 1, // Predicate_anyextload
/*747*/           OPC_CheckPredicate, 9, // Predicate_anyextloadi16
/*749*/           OPC_CheckPredicate, 10, // Predicate_nonvolatile_anyextloadi16
/*751*/           OPC_MoveParent,
/*752*/           OPC_RecordChild1, // #3 = $new
/*753*/           OPC_RecordChild2, // #4 = $valid
/*754*/           OPC_MoveChild, 2,
/*756*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*759*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*761*/           OPC_MoveParent,
/*762*/           OPC_RecordChild3, // #5 = $cc
/*763*/           OPC_MoveChild, 3,
/*765*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*768*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*770*/           OPC_MoveParent,
/*771*/           OPC_CheckType, MVT::i64,
/*773*/           OPC_MoveParent,
/*774*/           OPC_MoveChild, 2,
/*776*/           OPC_CheckSame, 2,
/*778*/           OPC_MoveParent,
/*779*/           OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*781*/           OPC_CheckPredicate, 6, // Predicate_truncstore
/*783*/           OPC_CheckPredicate, 11, // Predicate_truncstorei16
/*785*/           OPC_CheckPredicate, 12, // Predicate_nonvolatile_truncstorei16
/*787*/           OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$addr #6 #7 #8
/*790*/           OPC_EmitMergeInputChains, 2, 0, 1, 
/*794*/           OPC_EmitConvertToTarget, 4,
/*796*/           OPC_EmitConvertToTarget, 5,
/*798*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore16Inv), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 3, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:i64 (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi16>><<P:Predicate_nonvolatile_anyextloadi16>>, GR64:i64:$new, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_nonvolatile_truncstorei16>> - Complexity = 43
                  // Dst: (CondStore16Inv:i32 GR64:i64:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*811*/         /*Scope*/ 79, /*->891*/
/*812*/           OPC_RecordChild0, // #1 = $new
/*813*/           OPC_MoveChild, 1,
/*815*/           OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*818*/           OPC_RecordMemRef,
/*819*/           OPC_RecordNode, // #2 = 'ld' chained node
/*820*/           OPC_CheckFoldableChainNode,
/*821*/           OPC_RecordChild1, // #3 = $addr
/*822*/           OPC_CheckChild1Type, MVT::i64,
/*824*/           OPC_CheckPredicate, 0, // Predicate_unindexedload
/*826*/           OPC_CheckPredicate, 1, // Predicate_anyextload
/*828*/           OPC_CheckPredicate, 17, // Predicate_anyextloadi32
/*830*/           OPC_CheckPredicate, 18, // Predicate_nonvolatile_anyextloadi32
/*832*/           OPC_MoveParent,
/*833*/           OPC_RecordChild2, // #4 = $valid
/*834*/           OPC_MoveChild, 2,
/*836*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*839*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*841*/           OPC_MoveParent,
/*842*/           OPC_RecordChild3, // #5 = $cc
/*843*/           OPC_MoveChild, 3,
/*845*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*848*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*850*/           OPC_MoveParent,
/*851*/           OPC_CheckType, MVT::i64,
/*853*/           OPC_MoveParent,
/*854*/           OPC_MoveChild, 2,
/*856*/           OPC_CheckSame, 3,
/*858*/           OPC_MoveParent,
/*859*/           OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*861*/           OPC_CheckPredicate, 6, // Predicate_truncstore
/*863*/           OPC_CheckPredicate, 19, // Predicate_truncstorei32
/*865*/           OPC_CheckPredicate, 20, // Predicate_nonvolatile_truncstorei32
/*867*/           OPC_CheckComplexPat, /*CP*/0, /*#*/3, // selectBDXAddr20Only:$addr #6 #7 #8
/*870*/           OPC_EmitMergeInputChains, 2, 0, 2, 
/*874*/           OPC_EmitConvertToTarget, 4,
/*876*/           OPC_EmitConvertToTarget, 5,
/*878*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore32), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 1, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:i64 GR64:i64:$new, (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi32>><<P:Predicate_nonvolatile_anyextloadi32>>, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>><<P:Predicate_nonvolatile_truncstorei32>> - Complexity = 43
                  // Dst: (CondStore32:i32 GR64:i64:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*891*/         /*Scope*/ 79, /*->971*/
/*892*/           OPC_MoveChild, 0,
/*894*/           OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*897*/           OPC_RecordMemRef,
/*898*/           OPC_RecordNode, // #1 = 'ld' chained node
/*899*/           OPC_CheckFoldableChainNode,
/*900*/           OPC_RecordChild1, // #2 = $addr
/*901*/           OPC_CheckChild1Type, MVT::i64,
/*903*/           OPC_CheckPredicate, 0, // Predicate_unindexedload
/*905*/           OPC_CheckPredicate, 1, // Predicate_anyextload
/*907*/           OPC_CheckPredicate, 17, // Predicate_anyextloadi32
/*909*/           OPC_CheckPredicate, 18, // Predicate_nonvolatile_anyextloadi32
/*911*/           OPC_MoveParent,
/*912*/           OPC_RecordChild1, // #3 = $new
/*913*/           OPC_RecordChild2, // #4 = $valid
/*914*/           OPC_MoveChild, 2,
/*916*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*919*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*921*/           OPC_MoveParent,
/*922*/           OPC_RecordChild3, // #5 = $cc
/*923*/           OPC_MoveChild, 3,
/*925*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*928*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*930*/           OPC_MoveParent,
/*931*/           OPC_CheckType, MVT::i64,
/*933*/           OPC_MoveParent,
/*934*/           OPC_MoveChild, 2,
/*936*/           OPC_CheckSame, 2,
/*938*/           OPC_MoveParent,
/*939*/           OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*941*/           OPC_CheckPredicate, 6, // Predicate_truncstore
/*943*/           OPC_CheckPredicate, 19, // Predicate_truncstorei32
/*945*/           OPC_CheckPredicate, 20, // Predicate_nonvolatile_truncstorei32
/*947*/           OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$addr #6 #7 #8
/*950*/           OPC_EmitMergeInputChains, 2, 0, 1, 
/*954*/           OPC_EmitConvertToTarget, 4,
/*956*/           OPC_EmitConvertToTarget, 5,
/*958*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore32Inv), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 3, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:i64 (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi32>><<P:Predicate_nonvolatile_anyextloadi32>>, GR64:i64:$new, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>><<P:Predicate_nonvolatile_truncstorei32>> - Complexity = 43
                  // Dst: (CondStore32Inv:i32 GR64:i64:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*971*/         /*Scope*/ 75, /*->1047*/
/*972*/           OPC_RecordChild0, // #1 = $new
/*973*/           OPC_MoveChild, 1,
/*975*/           OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*978*/           OPC_RecordMemRef,
/*979*/           OPC_RecordNode, // #2 = 'ld' chained node
/*980*/           OPC_CheckFoldableChainNode,
/*981*/           OPC_RecordChild1, // #3 = $addr
/*982*/           OPC_CheckChild1Type, MVT::i64,
/*984*/           OPC_CheckPredicate, 0, // Predicate_unindexedload
/*986*/           OPC_CheckPredicate, 13, // Predicate_load
/*988*/           OPC_CheckPredicate, 14, // Predicate_nonvolatile_load
/*990*/           OPC_MoveParent,
/*991*/           OPC_RecordChild2, // #4 = $valid
/*992*/           OPC_MoveChild, 2,
/*994*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*997*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*999*/           OPC_MoveParent,
/*1000*/          OPC_RecordChild3, // #5 = $cc
/*1001*/          OPC_MoveChild, 3,
/*1003*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1006*/          OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*1008*/          OPC_MoveParent,
/*1009*/          OPC_CheckType, MVT::i64,
/*1011*/          OPC_MoveParent,
/*1012*/          OPC_MoveChild, 2,
/*1014*/          OPC_CheckSame, 3,
/*1016*/          OPC_MoveParent,
/*1017*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1019*/          OPC_CheckPredicate, 15, // Predicate_store
/*1021*/          OPC_CheckPredicate, 16, // Predicate_nonvolatile_store
/*1023*/          OPC_CheckComplexPat, /*CP*/0, /*#*/3, // selectBDXAddr20Only:$addr #6 #7 #8
/*1026*/          OPC_EmitMergeInputChains, 2, 0, 2, 
/*1030*/          OPC_EmitConvertToTarget, 4,
/*1032*/          OPC_EmitConvertToTarget, 5,
/*1034*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore64), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 1, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:i64 GR64:i64:$new, (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_nonvolatile_load>>, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_nonvolatile_store>> - Complexity = 43
                  // Dst: (CondStore64:i32 GR64:i64:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*1047*/        /*Scope*/ 75, /*->1123*/
/*1048*/          OPC_MoveChild, 0,
/*1050*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1053*/          OPC_RecordMemRef,
/*1054*/          OPC_RecordNode, // #1 = 'ld' chained node
/*1055*/          OPC_CheckFoldableChainNode,
/*1056*/          OPC_RecordChild1, // #2 = $addr
/*1057*/          OPC_CheckChild1Type, MVT::i64,
/*1059*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1061*/          OPC_CheckPredicate, 13, // Predicate_load
/*1063*/          OPC_CheckPredicate, 14, // Predicate_nonvolatile_load
/*1065*/          OPC_MoveParent,
/*1066*/          OPC_RecordChild1, // #3 = $new
/*1067*/          OPC_RecordChild2, // #4 = $valid
/*1068*/          OPC_MoveChild, 2,
/*1070*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1073*/          OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*1075*/          OPC_MoveParent,
/*1076*/          OPC_RecordChild3, // #5 = $cc
/*1077*/          OPC_MoveChild, 3,
/*1079*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1082*/          OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*1084*/          OPC_MoveParent,
/*1085*/          OPC_CheckType, MVT::i64,
/*1087*/          OPC_MoveParent,
/*1088*/          OPC_MoveChild, 2,
/*1090*/          OPC_CheckSame, 2,
/*1092*/          OPC_MoveParent,
/*1093*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1095*/          OPC_CheckPredicate, 15, // Predicate_store
/*1097*/          OPC_CheckPredicate, 16, // Predicate_nonvolatile_store
/*1099*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$addr #6 #7 #8
/*1102*/          OPC_EmitMergeInputChains, 2, 0, 1, 
/*1106*/          OPC_EmitConvertToTarget, 4,
/*1108*/          OPC_EmitConvertToTarget, 5,
/*1110*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore64Inv), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 3, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:i64 (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_nonvolatile_load>>, GR64:i64:$new, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_nonvolatile_store>> - Complexity = 43
                  // Dst: (CondStore64Inv:i32 GR64:i64:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*1123*/        /*Scope*/ 75, /*->1199*/
/*1124*/          OPC_RecordChild0, // #1 = $new
/*1125*/          OPC_MoveChild, 1,
/*1127*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1130*/          OPC_RecordMemRef,
/*1131*/          OPC_RecordNode, // #2 = 'ld' chained node
/*1132*/          OPC_CheckFoldableChainNode,
/*1133*/          OPC_RecordChild1, // #3 = $addr
/*1134*/          OPC_CheckChild1Type, MVT::i64,
/*1136*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1138*/          OPC_CheckPredicate, 13, // Predicate_load
/*1140*/          OPC_CheckPredicate, 14, // Predicate_nonvolatile_load
/*1142*/          OPC_MoveParent,
/*1143*/          OPC_RecordChild2, // #4 = $valid
/*1144*/          OPC_MoveChild, 2,
/*1146*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1149*/          OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*1151*/          OPC_MoveParent,
/*1152*/          OPC_RecordChild3, // #5 = $cc
/*1153*/          OPC_MoveChild, 3,
/*1155*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1158*/          OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*1160*/          OPC_MoveParent,
/*1161*/          OPC_CheckType, MVT::f32,
/*1163*/          OPC_MoveParent,
/*1164*/          OPC_MoveChild, 2,
/*1166*/          OPC_CheckSame, 3,
/*1168*/          OPC_MoveParent,
/*1169*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1171*/          OPC_CheckPredicate, 15, // Predicate_store
/*1173*/          OPC_CheckPredicate, 16, // Predicate_nonvolatile_store
/*1175*/          OPC_CheckComplexPat, /*CP*/0, /*#*/3, // selectBDXAddr20Only:$addr #6 #7 #8
/*1178*/          OPC_EmitMergeInputChains, 2, 0, 2, 
/*1182*/          OPC_EmitConvertToTarget, 4,
/*1184*/          OPC_EmitConvertToTarget, 5,
/*1186*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStoreF32), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 1, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:f32 FP32:f32:$new, (ld:f32 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_nonvolatile_load>>, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_nonvolatile_store>> - Complexity = 43
                  // Dst: (CondStoreF32:i32 FP32:f32:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*1199*/        /*Scope*/ 75, /*->1275*/
/*1200*/          OPC_MoveChild, 0,
/*1202*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1205*/          OPC_RecordMemRef,
/*1206*/          OPC_RecordNode, // #1 = 'ld' chained node
/*1207*/          OPC_CheckFoldableChainNode,
/*1208*/          OPC_RecordChild1, // #2 = $addr
/*1209*/          OPC_CheckChild1Type, MVT::i64,
/*1211*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1213*/          OPC_CheckPredicate, 13, // Predicate_load
/*1215*/          OPC_CheckPredicate, 14, // Predicate_nonvolatile_load
/*1217*/          OPC_MoveParent,
/*1218*/          OPC_RecordChild1, // #3 = $new
/*1219*/          OPC_RecordChild2, // #4 = $valid
/*1220*/          OPC_MoveChild, 2,
/*1222*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1225*/          OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*1227*/          OPC_MoveParent,
/*1228*/          OPC_RecordChild3, // #5 = $cc
/*1229*/          OPC_MoveChild, 3,
/*1231*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1234*/          OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*1236*/          OPC_MoveParent,
/*1237*/          OPC_CheckType, MVT::f32,
/*1239*/          OPC_MoveParent,
/*1240*/          OPC_MoveChild, 2,
/*1242*/          OPC_CheckSame, 2,
/*1244*/          OPC_MoveParent,
/*1245*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1247*/          OPC_CheckPredicate, 15, // Predicate_store
/*1249*/          OPC_CheckPredicate, 16, // Predicate_nonvolatile_store
/*1251*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$addr #6 #7 #8
/*1254*/          OPC_EmitMergeInputChains, 2, 0, 1, 
/*1258*/          OPC_EmitConvertToTarget, 4,
/*1260*/          OPC_EmitConvertToTarget, 5,
/*1262*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStoreF32Inv), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 3, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:f32 (ld:f32 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_nonvolatile_load>>, FP32:f32:$new, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_nonvolatile_store>> - Complexity = 43
                  // Dst: (CondStoreF32Inv:i32 FP32:f32:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*1275*/        /*Scope*/ 75, /*->1351*/
/*1276*/          OPC_RecordChild0, // #1 = $new
/*1277*/          OPC_MoveChild, 1,
/*1279*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1282*/          OPC_RecordMemRef,
/*1283*/          OPC_RecordNode, // #2 = 'ld' chained node
/*1284*/          OPC_CheckFoldableChainNode,
/*1285*/          OPC_RecordChild1, // #3 = $addr
/*1286*/          OPC_CheckChild1Type, MVT::i64,
/*1288*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1290*/          OPC_CheckPredicate, 13, // Predicate_load
/*1292*/          OPC_CheckPredicate, 14, // Predicate_nonvolatile_load
/*1294*/          OPC_MoveParent,
/*1295*/          OPC_RecordChild2, // #4 = $valid
/*1296*/          OPC_MoveChild, 2,
/*1298*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1301*/          OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*1303*/          OPC_MoveParent,
/*1304*/          OPC_RecordChild3, // #5 = $cc
/*1305*/          OPC_MoveChild, 3,
/*1307*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1310*/          OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*1312*/          OPC_MoveParent,
/*1313*/          OPC_CheckType, MVT::f64,
/*1315*/          OPC_MoveParent,
/*1316*/          OPC_MoveChild, 2,
/*1318*/          OPC_CheckSame, 3,
/*1320*/          OPC_MoveParent,
/*1321*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1323*/          OPC_CheckPredicate, 15, // Predicate_store
/*1325*/          OPC_CheckPredicate, 16, // Predicate_nonvolatile_store
/*1327*/          OPC_CheckComplexPat, /*CP*/0, /*#*/3, // selectBDXAddr20Only:$addr #6 #7 #8
/*1330*/          OPC_EmitMergeInputChains, 2, 0, 2, 
/*1334*/          OPC_EmitConvertToTarget, 4,
/*1336*/          OPC_EmitConvertToTarget, 5,
/*1338*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStoreF64), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 1, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:f64 FP64:f64:$new, (ld:f64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_nonvolatile_load>>, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_nonvolatile_store>> - Complexity = 43
                  // Dst: (CondStoreF64:i32 FP64:f64:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*1351*/        /*Scope*/ 75, /*->1427*/
/*1352*/          OPC_MoveChild, 0,
/*1354*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1357*/          OPC_RecordMemRef,
/*1358*/          OPC_RecordNode, // #1 = 'ld' chained node
/*1359*/          OPC_CheckFoldableChainNode,
/*1360*/          OPC_RecordChild1, // #2 = $addr
/*1361*/          OPC_CheckChild1Type, MVT::i64,
/*1363*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1365*/          OPC_CheckPredicate, 13, // Predicate_load
/*1367*/          OPC_CheckPredicate, 14, // Predicate_nonvolatile_load
/*1369*/          OPC_MoveParent,
/*1370*/          OPC_RecordChild1, // #3 = $new
/*1371*/          OPC_RecordChild2, // #4 = $valid
/*1372*/          OPC_MoveChild, 2,
/*1374*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1377*/          OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*1379*/          OPC_MoveParent,
/*1380*/          OPC_RecordChild3, // #5 = $cc
/*1381*/          OPC_MoveChild, 3,
/*1383*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1386*/          OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*1388*/          OPC_MoveParent,
/*1389*/          OPC_CheckType, MVT::f64,
/*1391*/          OPC_MoveParent,
/*1392*/          OPC_MoveChild, 2,
/*1394*/          OPC_CheckSame, 2,
/*1396*/          OPC_MoveParent,
/*1397*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1399*/          OPC_CheckPredicate, 15, // Predicate_store
/*1401*/          OPC_CheckPredicate, 16, // Predicate_nonvolatile_store
/*1403*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$addr #6 #7 #8
/*1406*/          OPC_EmitMergeInputChains, 2, 0, 1, 
/*1410*/          OPC_EmitConvertToTarget, 4,
/*1412*/          OPC_EmitConvertToTarget, 5,
/*1414*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStoreF64Inv), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 3, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:f64 (ld:f64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_nonvolatile_load>>, FP64:f64:$new, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_nonvolatile_store>> - Complexity = 43
                  // Dst: (CondStoreF64Inv:i32 FP64:f64:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*1427*/        0, /*End of Scope*/
              /*SwitchOpcode*/ 100,  TARGET_VAL(ISD::ADD),// ->1531
/*1431*/        OPC_MoveChild, 0,
/*1433*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1436*/        OPC_RecordMemRef,
/*1437*/        OPC_RecordNode, // #1 = 'ld' chained node
/*1438*/        OPC_CheckFoldableChainNode,
/*1439*/        OPC_RecordChild1, // #2 = $BD1
/*1440*/        OPC_CheckChild1Type, MVT::i64,
/*1442*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1444*/        OPC_CheckPredicate, 13, // Predicate_load
/*1446*/        OPC_MoveParent,
/*1447*/        OPC_RecordChild1, // #3 = $I2
/*1448*/        OPC_MoveChild, 1,
/*1450*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1453*/        OPC_Scope, 37, /*->1492*/ // 2 children in Scope
/*1455*/          OPC_CheckPredicate, 21, // Predicate_imm32sx8
/*1457*/          OPC_MoveParent,
/*1458*/          OPC_CheckType, MVT::i32,
/*1460*/          OPC_MoveParent,
/*1461*/          OPC_MoveChild, 2,
/*1463*/          OPC_CheckSame, 2,
/*1465*/          OPC_MoveParent,
/*1466*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1468*/          OPC_CheckPredicate, 15, // Predicate_store
/*1470*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr20Only:$BD1 #4 #5
/*1473*/          OPC_EmitMergeInputChains, 2, 0, 1, 
/*1477*/          OPC_EmitConvertToTarget, 3,
/*1479*/          OPC_EmitNodeXForm, 0, 6, // SIMM8
/*1482*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::ASI), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                  // Src: (st (add:i32 (ld:i32 bdaddr20only:i64:$BD1)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i32)<<P:Predicate_imm32sx8>><<X:SIMM8>>:$I2), bdaddr20only:i64:$BD1)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 33
                  // Dst: (ASI:i32 bdaddr20only:i64:$BD1, (SIMM8:i32 (imm:i32):$I2))
/*1492*/        /*Scope*/ 37, /*->1530*/
/*1493*/          OPC_CheckPredicate, 22, // Predicate_imm64sx8
/*1495*/          OPC_MoveParent,
/*1496*/          OPC_CheckType, MVT::i64,
/*1498*/          OPC_MoveParent,
/*1499*/          OPC_MoveChild, 2,
/*1501*/          OPC_CheckSame, 2,
/*1503*/          OPC_MoveParent,
/*1504*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1506*/          OPC_CheckPredicate, 15, // Predicate_store
/*1508*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr20Only:$BD1 #4 #5
/*1511*/          OPC_EmitMergeInputChains, 2, 0, 1, 
/*1515*/          OPC_EmitConvertToTarget, 3,
/*1517*/          OPC_EmitNodeXForm, 0, 6, // SIMM8
/*1520*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGSI), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                  // Src: (st (add:i64 (ld:i64 bdaddr20only:i64:$BD1)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i64)<<P:Predicate_imm64sx8>><<X:SIMM8>>:$I2), bdaddr20only:i64:$BD1)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 33
                  // Dst: (AGSI:i32 bdaddr20only:i64:$BD1, (SIMM8:i64 (imm:i64):$I2))
/*1530*/        0, /*End of Scope*/
              /*SwitchOpcode*/ 23|128,1/*151*/,  TARGET_VAL(ISD::AND),// ->1686
/*1535*/        OPC_MoveChild, 0,
/*1537*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1540*/        OPC_RecordMemRef,
/*1541*/        OPC_RecordNode, // #1 = 'ld' chained node
/*1542*/        OPC_CheckFoldableChainNode,
/*1543*/        OPC_RecordChild1, // #2 = $addr
/*1544*/        OPC_CheckChild1Type, MVT::i64,
/*1546*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1548*/        OPC_CheckPredicate, 1, // Predicate_anyextload
/*1550*/        OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*1552*/        OPC_MoveParent,
/*1553*/        OPC_RecordChild1, // #3 = $src
/*1554*/        OPC_MoveChild, 1,
/*1556*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1559*/        OPC_MoveParent,
/*1560*/        OPC_SwitchType /*2 cases */, 60,  MVT::i32,// ->1623
/*1563*/          OPC_MoveParent,
/*1564*/          OPC_MoveChild, 2,
/*1566*/          OPC_CheckSame, 2,
/*1568*/          OPC_MoveParent,
/*1569*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1571*/          OPC_CheckPredicate, 6, // Predicate_truncstore
/*1573*/          OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*1575*/          OPC_Scope, 22, /*->1599*/ // 2 children in Scope
/*1577*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*1580*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1584*/            OPC_EmitConvertToTarget, 3,
/*1586*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1589*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::NI), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (and:i32 (ld:i32 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (imm:i32):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (NI:i32 bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
/*1599*/          /*Scope*/ 22, /*->1622*/
/*1600*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*1603*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1607*/            OPC_EmitConvertToTarget, 3,
/*1609*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1612*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::NIY), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (and:i32 (ld:i32 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (imm:i32):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (NIY:i32 bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
/*1622*/          0, /*End of Scope*/
                /*SwitchType*/ 60,  MVT::i64,// ->1685
/*1625*/          OPC_MoveParent,
/*1626*/          OPC_MoveChild, 2,
/*1628*/          OPC_CheckSame, 2,
/*1630*/          OPC_MoveParent,
/*1631*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1633*/          OPC_CheckPredicate, 6, // Predicate_truncstore
/*1635*/          OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*1637*/          OPC_Scope, 22, /*->1661*/ // 2 children in Scope
/*1639*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*1642*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1646*/            OPC_EmitConvertToTarget, 3,
/*1648*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1651*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::NI), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (and:i64 (ld:i64 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (imm:i64):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (NI:i32 bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
/*1661*/          /*Scope*/ 22, /*->1684*/
/*1662*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*1665*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1669*/            OPC_EmitConvertToTarget, 3,
/*1671*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1674*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::NIY), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (and:i64 (ld:i64 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (imm:i64):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (NIY:i32 bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
/*1684*/          0, /*End of Scope*/
                0, // EndSwitchType
              /*SwitchOpcode*/ 23|128,1/*151*/,  TARGET_VAL(ISD::OR),// ->1841
/*1690*/        OPC_MoveChild, 0,
/*1692*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1695*/        OPC_RecordMemRef,
/*1696*/        OPC_RecordNode, // #1 = 'ld' chained node
/*1697*/        OPC_CheckFoldableChainNode,
/*1698*/        OPC_RecordChild1, // #2 = $addr
/*1699*/        OPC_CheckChild1Type, MVT::i64,
/*1701*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1703*/        OPC_CheckPredicate, 1, // Predicate_anyextload
/*1705*/        OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*1707*/        OPC_MoveParent,
/*1708*/        OPC_RecordChild1, // #3 = $src
/*1709*/        OPC_MoveChild, 1,
/*1711*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1714*/        OPC_MoveParent,
/*1715*/        OPC_SwitchType /*2 cases */, 60,  MVT::i32,// ->1778
/*1718*/          OPC_MoveParent,
/*1719*/          OPC_MoveChild, 2,
/*1721*/          OPC_CheckSame, 2,
/*1723*/          OPC_MoveParent,
/*1724*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1726*/          OPC_CheckPredicate, 6, // Predicate_truncstore
/*1728*/          OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*1730*/          OPC_Scope, 22, /*->1754*/ // 2 children in Scope
/*1732*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*1735*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1739*/            OPC_EmitConvertToTarget, 3,
/*1741*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1744*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OI), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (or:i32 (ld:i32 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (imm:i32):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (OI:i32 bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
/*1754*/          /*Scope*/ 22, /*->1777*/
/*1755*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*1758*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1762*/            OPC_EmitConvertToTarget, 3,
/*1764*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1767*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OIY), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (or:i32 (ld:i32 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (imm:i32):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (OIY:i32 bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
/*1777*/          0, /*End of Scope*/
                /*SwitchType*/ 60,  MVT::i64,// ->1840
/*1780*/          OPC_MoveParent,
/*1781*/          OPC_MoveChild, 2,
/*1783*/          OPC_CheckSame, 2,
/*1785*/          OPC_MoveParent,
/*1786*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1788*/          OPC_CheckPredicate, 6, // Predicate_truncstore
/*1790*/          OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*1792*/          OPC_Scope, 22, /*->1816*/ // 2 children in Scope
/*1794*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*1797*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1801*/            OPC_EmitConvertToTarget, 3,
/*1803*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1806*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OI), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (or:i64 (ld:i64 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (imm:i64):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (OI:i32 bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
/*1816*/          /*Scope*/ 22, /*->1839*/
/*1817*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*1820*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1824*/            OPC_EmitConvertToTarget, 3,
/*1826*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1829*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OIY), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (or:i64 (ld:i64 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (imm:i64):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (OIY:i32 bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
/*1839*/          0, /*End of Scope*/
                0, // EndSwitchType
              /*SwitchOpcode*/ 23|128,1/*151*/,  TARGET_VAL(ISD::XOR),// ->1996
/*1845*/        OPC_MoveChild, 0,
/*1847*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1850*/        OPC_RecordMemRef,
/*1851*/        OPC_RecordNode, // #1 = 'ld' chained node
/*1852*/        OPC_CheckFoldableChainNode,
/*1853*/        OPC_RecordChild1, // #2 = $addr
/*1854*/        OPC_CheckChild1Type, MVT::i64,
/*1856*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1858*/        OPC_CheckPredicate, 1, // Predicate_anyextload
/*1860*/        OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*1862*/        OPC_MoveParent,
/*1863*/        OPC_RecordChild1, // #3 = $src
/*1864*/        OPC_MoveChild, 1,
/*1866*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1869*/        OPC_MoveParent,
/*1870*/        OPC_SwitchType /*2 cases */, 60,  MVT::i32,// ->1933
/*1873*/          OPC_MoveParent,
/*1874*/          OPC_MoveChild, 2,
/*1876*/          OPC_CheckSame, 2,
/*1878*/          OPC_MoveParent,
/*1879*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1881*/          OPC_CheckPredicate, 6, // Predicate_truncstore
/*1883*/          OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*1885*/          OPC_Scope, 22, /*->1909*/ // 2 children in Scope
/*1887*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*1890*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1894*/            OPC_EmitConvertToTarget, 3,
/*1896*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1899*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XI), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (xor:i32 (ld:i32 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (imm:i32):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (XI:i32 bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
/*1909*/          /*Scope*/ 22, /*->1932*/
/*1910*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*1913*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1917*/            OPC_EmitConvertToTarget, 3,
/*1919*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1922*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XIY), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (xor:i32 (ld:i32 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (imm:i32):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (XIY:i32 bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
/*1932*/          0, /*End of Scope*/
                /*SwitchType*/ 60,  MVT::i64,// ->1995
/*1935*/          OPC_MoveParent,
/*1936*/          OPC_MoveChild, 2,
/*1938*/          OPC_CheckSame, 2,
/*1940*/          OPC_MoveParent,
/*1941*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1943*/          OPC_CheckPredicate, 6, // Predicate_truncstore
/*1945*/          OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*1947*/          OPC_Scope, 22, /*->1971*/ // 2 children in Scope
/*1949*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*1952*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1956*/            OPC_EmitConvertToTarget, 3,
/*1958*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1961*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XI), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (xor:i64 (ld:i64 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (imm:i64):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (XI:i32 bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
/*1971*/          /*Scope*/ 22, /*->1994*/
/*1972*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*1975*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1979*/            OPC_EmitConvertToTarget, 3,
/*1981*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1984*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XIY), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (xor:i64 (ld:i64 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (imm:i64):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (XIY:i32 bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
/*1994*/          0, /*End of Scope*/
                0, // EndSwitchType
              /*SwitchOpcode*/ 24|128,3/*408*/,  TARGET_VAL(ISD::LOAD),// ->2408
/*2000*/        OPC_RecordMemRef,
/*2001*/        OPC_RecordNode, // #1 = 'ld' chained node
/*2002*/        OPC_CheckFoldableChainNode,
/*2003*/        OPC_RecordChild1, // #2 = $src
/*2004*/        OPC_CheckChild1Type, MVT::i64,
/*2006*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2008*/        OPC_Scope, 84, /*->2094*/ // 4 children in Scope
/*2010*/          OPC_CheckPredicate, 1, // Predicate_anyextload
/*2012*/          OPC_CheckType, MVT::i32,
/*2014*/          OPC_Scope, 38, /*->2054*/ // 2 children in Scope
/*2016*/            OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*2018*/            OPC_MoveParent,
/*2019*/            OPC_RecordChild2, // #3 = $dest
/*2020*/            OPC_CheckChild2Type, MVT::i64,
/*2022*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2024*/            OPC_CheckPredicate, 6, // Predicate_truncstore
/*2026*/            OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*2028*/            OPC_CheckPredicate, 23, // Predicate_LoadStore8_32Pat
/*2030*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectBDAddr12Only:$src #4 #5
/*2033*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // selectBDAddr12Only:$dest #6 #7
/*2036*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*2040*/            OPC_EmitInteger, MVT::i64, 1, 
/*2043*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 6, 7, 4, 5, 8, 
                    // Src: (st (ld:i32 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>><<P:Predicate_LoadStore8_32Pat>> - Complexity = 26
                    // Dst: (MVCSequence bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 1:i64)
/*2054*/          /*Scope*/ 38, /*->2093*/
/*2055*/            OPC_CheckPredicate, 9, // Predicate_anyextloadi16
/*2057*/            OPC_MoveParent,
/*2058*/            OPC_RecordChild2, // #3 = $dest
/*2059*/            OPC_CheckChild2Type, MVT::i64,
/*2061*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2063*/            OPC_CheckPredicate, 6, // Predicate_truncstore
/*2065*/            OPC_CheckPredicate, 11, // Predicate_truncstorei16
/*2067*/            OPC_CheckPredicate, 24, // Predicate_LoadStore16_32Pat
/*2069*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectBDAddr12Only:$src #4 #5
/*2072*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // selectBDAddr12Only:$dest #6 #7
/*2075*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*2079*/            OPC_EmitInteger, MVT::i64, 2, 
/*2082*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 6, 7, 4, 5, 8, 
                    // Src: (st (ld:i32 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi16>>, bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_LoadStore16_32Pat>> - Complexity = 26
                    // Dst: (MVCSequence bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 2:i64)
/*2093*/          0, /*End of Scope*/
/*2094*/        /*Scope*/ 38, /*->2133*/
/*2095*/          OPC_CheckPredicate, 13, // Predicate_load
/*2097*/          OPC_CheckType, MVT::i32,
/*2099*/          OPC_MoveParent,
/*2100*/          OPC_RecordChild2, // #3 = $dest
/*2101*/          OPC_CheckChild2Type, MVT::i64,
/*2103*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2105*/          OPC_CheckPredicate, 15, // Predicate_store
/*2107*/          OPC_CheckPredicate, 25, // Predicate_LoadStore32_32Pat
/*2109*/          OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectBDAddr12Only:$src #4 #5
/*2112*/          OPC_CheckComplexPat, /*CP*/4, /*#*/3, // selectBDAddr12Only:$dest #6 #7
/*2115*/          OPC_EmitMergeInputChains, 2, 0, 1, 
/*2119*/          OPC_EmitInteger, MVT::i64, 4, 
/*2122*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 5/*#Ops*/, 6, 7, 4, 5, 8, 
                  // Src: (st (ld:i32 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_LoadStore32_32Pat>> - Complexity = 26
                  // Dst: (MVCSequence bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 4:i64)
/*2133*/        /*Scope*/ 123, /*->2257*/
/*2134*/          OPC_CheckPredicate, 1, // Predicate_anyextload
/*2136*/          OPC_CheckType, MVT::i64,
/*2138*/          OPC_Scope, 38, /*->2178*/ // 3 children in Scope
/*2140*/            OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*2142*/            OPC_MoveParent,
/*2143*/            OPC_RecordChild2, // #3 = $dest
/*2144*/            OPC_CheckChild2Type, MVT::i64,
/*2146*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2148*/            OPC_CheckPredicate, 6, // Predicate_truncstore
/*2150*/            OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*2152*/            OPC_CheckPredicate, 26, // Predicate_LoadStore8Pat
/*2154*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectBDAddr12Only:$src #4 #5
/*2157*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // selectBDAddr12Only:$dest #6 #7
/*2160*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*2164*/            OPC_EmitInteger, MVT::i64, 1, 
/*2167*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 6, 7, 4, 5, 8, 
                    // Src: (st (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>><<P:Predicate_LoadStore8Pat>> - Complexity = 26
                    // Dst: (MVCSequence bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 1:i64)
/*2178*/          /*Scope*/ 38, /*->2217*/
/*2179*/            OPC_CheckPredicate, 9, // Predicate_anyextloadi16
/*2181*/            OPC_MoveParent,
/*2182*/            OPC_RecordChild2, // #3 = $dest
/*2183*/            OPC_CheckChild2Type, MVT::i64,
/*2185*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2187*/            OPC_CheckPredicate, 6, // Predicate_truncstore
/*2189*/            OPC_CheckPredicate, 11, // Predicate_truncstorei16
/*2191*/            OPC_CheckPredicate, 27, // Predicate_LoadStore16Pat
/*2193*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectBDAddr12Only:$src #4 #5
/*2196*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // selectBDAddr12Only:$dest #6 #7
/*2199*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*2203*/            OPC_EmitInteger, MVT::i64, 2, 
/*2206*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 6, 7, 4, 5, 8, 
                    // Src: (st (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi16>>, bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_LoadStore16Pat>> - Complexity = 26
                    // Dst: (MVCSequence bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 2:i64)
/*2217*/          /*Scope*/ 38, /*->2256*/
/*2218*/            OPC_CheckPredicate, 17, // Predicate_anyextloadi32
/*2220*/            OPC_MoveParent,
/*2221*/            OPC_RecordChild2, // #3 = $dest
/*2222*/            OPC_CheckChild2Type, MVT::i64,
/*2224*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2226*/            OPC_CheckPredicate, 6, // Predicate_truncstore
/*2228*/            OPC_CheckPredicate, 19, // Predicate_truncstorei32
/*2230*/            OPC_CheckPredicate, 28, // Predicate_LoadStore32Pat
/*2232*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectBDAddr12Only:$src #4 #5
/*2235*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // selectBDAddr12Only:$dest #6 #7
/*2238*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*2242*/            OPC_EmitInteger, MVT::i64, 4, 
/*2245*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 6, 7, 4, 5, 8, 
                    // Src: (st (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi32>>, bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>><<P:Predicate_LoadStore32Pat>> - Complexity = 26
                    // Dst: (MVCSequence bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 4:i64)
/*2256*/          0, /*End of Scope*/
/*2257*/        /*Scope*/ 20|128,1/*148*/, /*->2407*/
/*2259*/          OPC_CheckPredicate, 13, // Predicate_load
/*2261*/          OPC_SwitchType /*4 cases */, 34,  MVT::i64,// ->2298
/*2264*/            OPC_MoveParent,
/*2265*/            OPC_RecordChild2, // #3 = $dest
/*2266*/            OPC_CheckChild2Type, MVT::i64,
/*2268*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2270*/            OPC_CheckPredicate, 15, // Predicate_store
/*2272*/            OPC_CheckPredicate, 29, // Predicate_LoadStore64Pat
/*2274*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectBDAddr12Only:$src #4 #5
/*2277*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // selectBDAddr12Only:$dest #6 #7
/*2280*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*2284*/            OPC_EmitInteger, MVT::i64, 8, 
/*2287*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 6, 7, 4, 5, 8, 
                    // Src: (st (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_LoadStore64Pat>> - Complexity = 26
                    // Dst: (MVCSequence bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 8:i64)
                  /*SwitchType*/ 34,  MVT::f32,// ->2334
/*2300*/            OPC_MoveParent,
/*2301*/            OPC_RecordChild2, // #3 = $dest
/*2302*/            OPC_CheckChild2Type, MVT::i64,
/*2304*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2306*/            OPC_CheckPredicate, 15, // Predicate_store
/*2308*/            OPC_CheckPredicate, 30, // Predicate_LoadStoreF32Pat
/*2310*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectBDAddr12Only:$src #4 #5
/*2313*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // selectBDAddr12Only:$dest #6 #7
/*2316*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*2320*/            OPC_EmitInteger, MVT::i64, 4, 
/*2323*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 6, 7, 4, 5, 8, 
                    // Src: (st (ld:f32 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_LoadStoreF32Pat>> - Complexity = 26
                    // Dst: (MVCSequence bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 4:i64)
                  /*SwitchType*/ 34,  MVT::f64,// ->2370
/*2336*/            OPC_MoveParent,
/*2337*/            OPC_RecordChild2, // #3 = $dest
/*2338*/            OPC_CheckChild2Type, MVT::i64,
/*2340*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2342*/            OPC_CheckPredicate, 15, // Predicate_store
/*2344*/            OPC_CheckPredicate, 31, // Predicate_LoadStoreF64Pat
/*2346*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectBDAddr12Only:$src #4 #5
/*2349*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // selectBDAddr12Only:$dest #6 #7
/*2352*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*2356*/            OPC_EmitInteger, MVT::i64, 8, 
/*2359*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 6, 7, 4, 5, 8, 
                    // Src: (st (ld:f64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_LoadStoreF64Pat>> - Complexity = 26
                    // Dst: (MVCSequence bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 8:i64)
                  /*SwitchType*/ 34,  MVT::f128,// ->2406
/*2372*/            OPC_MoveParent,
/*2373*/            OPC_RecordChild2, // #3 = $dest
/*2374*/            OPC_CheckChild2Type, MVT::i64,
/*2376*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2378*/            OPC_CheckPredicate, 15, // Predicate_store
/*2380*/            OPC_CheckPredicate, 32, // Predicate_LoadStoreF128Pat
/*2382*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectBDAddr12Only:$src #4 #5
/*2385*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // selectBDAddr12Only:$dest #6 #7
/*2388*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*2392*/            OPC_EmitInteger, MVT::i64, 16, 
/*2395*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 6, 7, 4, 5, 8, 
                    // Src: (st (ld:f128 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_LoadStoreF128Pat>> - Complexity = 26
                    // Dst: (MVCSequence bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 16:i64)
                  0, // EndSwitchType
/*2407*/        0, /*End of Scope*/
              /*SwitchOpcode*/ 55,  TARGET_VAL(ISD::BSWAP),// ->2466
/*2411*/        OPC_RecordChild0, // #1 = $R1
/*2412*/        OPC_SwitchType /*2 cases */, 24,  MVT::i32,// ->2439
/*2415*/          OPC_MoveParent,
/*2416*/          OPC_RecordChild2, // #2 = $XBD2
/*2417*/          OPC_CheckChild2Type, MVT::i64,
/*2419*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2421*/          OPC_CheckPredicate, 15, // Predicate_store
/*2423*/          OPC_CheckPredicate, 16, // Predicate_nonvolatile_store
/*2425*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*2428*/          OPC_EmitMergeInputChains1_0,
/*2429*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::STRV), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st (bswap:i32 GR32:i32:$R1), bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_nonvolatile_store>> - Complexity = 19
                  // Dst: (STRV GR32:i32:$R1, bdxaddr20only:i64:$XBD2)
                /*SwitchType*/ 24,  MVT::i64,// ->2465
/*2441*/          OPC_MoveParent,
/*2442*/          OPC_RecordChild2, // #2 = $XBD2
/*2443*/          OPC_CheckChild2Type, MVT::i64,
/*2445*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2447*/          OPC_CheckPredicate, 15, // Predicate_store
/*2449*/          OPC_CheckPredicate, 16, // Predicate_nonvolatile_store
/*2451*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*2454*/          OPC_EmitMergeInputChains1_0,
/*2455*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::STRVG), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st (bswap:i64 GR64:i64:$R1), bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_nonvolatile_store>> - Complexity = 19
                  // Dst: (STRVG GR64:i64:$R1, bdxaddr20only:i64:$XBD2)
                0, // EndSwitchType
              0, // EndSwitchOpcode
/*2467*/    /*Scope*/ 22|128,5/*662*/, /*->3131*/
/*2469*/      OPC_RecordChild1, // #1 = $R1
/*2470*/      OPC_Scope, 23, /*->2495*/ // 12 children in Scope
/*2472*/        OPC_CheckChild1Type, MVT::i32,
/*2474*/        OPC_RecordChild2, // #2 = $I2
/*2475*/        OPC_CheckChild2Type, MVT::i64,
/*2477*/        OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2479*/        OPC_CheckPredicate, 15, // Predicate_store
/*2481*/        OPC_CheckPredicate, 33, // Predicate_aligned_store
/*2483*/        OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*2486*/        OPC_EmitMergeInputChains1_0,
/*2487*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::STRL32), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                // Src: (st GR32:i32:$R1, pcrel32:i64:$I2)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_aligned_store>> - Complexity = 17
                // Dst: (STRL32 GR32:i32:$R1, pcrel32:i64:$I2)
/*2495*/      /*Scope*/ 23, /*->2519*/
/*2496*/        OPC_CheckChild1Type, MVT::i64,
/*2498*/        OPC_RecordChild2, // #2 = $I2
/*2499*/        OPC_CheckChild2Type, MVT::i64,
/*2501*/        OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2503*/        OPC_CheckPredicate, 15, // Predicate_store
/*2505*/        OPC_CheckPredicate, 33, // Predicate_aligned_store
/*2507*/        OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*2510*/        OPC_EmitMergeInputChains1_0,
/*2511*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::STGRL), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                // Src: (st GR64:i64:$R1, pcrel32:i64:$I2)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_aligned_store>> - Complexity = 17
                // Dst: (STGRL GR64:i64:$R1, pcrel32:i64:$I2)
/*2519*/      /*Scope*/ 67, /*->2587*/
/*2520*/        OPC_MoveChild, 1,
/*2522*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2525*/        OPC_SwitchType /*2 cases */, 28,  MVT::i32,// ->2556
/*2528*/          OPC_CheckPredicate, 34, // Predicate_imm32sx16
/*2530*/          OPC_MoveParent,
/*2531*/          OPC_RecordChild2, // #2 = $BD1
/*2532*/          OPC_CheckChild2Type, MVT::i64,
/*2534*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2536*/          OPC_CheckPredicate, 15, // Predicate_store
/*2538*/          OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectMVIAddr12Pair:$BD1 #3 #4
/*2541*/          OPC_EmitMergeInputChains1_0,
/*2542*/          OPC_EmitConvertToTarget, 1,
/*2544*/          OPC_EmitNodeXForm, 2, 5, // SIMM16
/*2547*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVHI), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (st (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$I2, mviaddr12pair:i64:$BD1)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 17
                  // Dst: (MVHI mviaddr12pair:i64:$BD1, (SIMM16:i32 (imm:i32):$I2))
                /*SwitchType*/ 28,  MVT::i64,// ->2586
/*2558*/          OPC_CheckPredicate, 35, // Predicate_imm64sx16
/*2560*/          OPC_MoveParent,
/*2561*/          OPC_RecordChild2, // #2 = $BD1
/*2562*/          OPC_CheckChild2Type, MVT::i64,
/*2564*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2566*/          OPC_CheckPredicate, 15, // Predicate_store
/*2568*/          OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectMVIAddr12Pair:$BD1 #3 #4
/*2571*/          OPC_EmitMergeInputChains1_0,
/*2572*/          OPC_EmitConvertToTarget, 1,
/*2574*/          OPC_EmitNodeXForm, 2, 5, // SIMM16
/*2577*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVGHI), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (st (imm:i64)<<P:Predicate_imm64sx16>><<X:SIMM16>>:$I2, mviaddr12pair:i64:$BD1)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 17
                  // Dst: (MVGHI mviaddr12pair:i64:$BD1, (SIMM16:i64 (imm:i64):$I2))
                0, // EndSwitchType
/*2587*/      /*Scope*/ 63, /*->2651*/
/*2588*/        OPC_CheckChild1Type, MVT::i32,
/*2590*/        OPC_RecordChild2, // #2 = $I2
/*2591*/        OPC_CheckChild2Type, MVT::i64,
/*2593*/        OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2595*/        OPC_Scope, 18, /*->2615*/ // 2 children in Scope
/*2597*/          OPC_CheckPredicate, 6, // Predicate_truncstore
/*2599*/          OPC_CheckPredicate, 11, // Predicate_truncstorei16
/*2601*/          OPC_CheckPredicate, 36, // Predicate_aligned_truncstorei16
/*2603*/          OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*2606*/          OPC_EmitMergeInputChains1_0,
/*2607*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::STHRL32), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (st GR32:i32:$R1, pcrel32:i64:$I2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_aligned_truncstorei16>> - Complexity = 17
                  // Dst: (STHRL32 GR32:i32:$R1, pcrel32:i64:$I2)
/*2615*/        /*Scope*/ 34, /*->2650*/
/*2616*/          OPC_CheckPredicate, 15, // Predicate_store
/*2618*/          OPC_Scope, 14, /*->2634*/ // 2 children in Scope
/*2620*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*2623*/            OPC_EmitMergeInputChains1_0,
/*2624*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::ST32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR32:i32:$R1, bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                    // Dst: (ST32 GR32:i32:$R1, bdxaddr12pair:i64:$XBD2)
/*2634*/          /*Scope*/ 14, /*->2649*/
/*2635*/            OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*2638*/            OPC_EmitMergeInputChains1_0,
/*2639*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::ST32Y), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR32:i32:$R1, bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                    // Dst: (ST32Y GR32:i32:$R1, bdxaddr20pair:i64:$XBD2)
/*2649*/          0, /*End of Scope*/
/*2650*/        0, /*End of Scope*/
/*2651*/      /*Scope*/ 65, /*->2717*/
/*2652*/        OPC_CheckChild1Type, MVT::i64,
/*2654*/        OPC_RecordChild2, // #2 = $I2
/*2655*/        OPC_CheckChild2Type, MVT::i64,
/*2657*/        OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2659*/        OPC_Scope, 38, /*->2699*/ // 2 children in Scope
/*2661*/          OPC_CheckPredicate, 6, // Predicate_truncstore
/*2663*/          OPC_Scope, 16, /*->2681*/ // 2 children in Scope
/*2665*/            OPC_CheckPredicate, 11, // Predicate_truncstorei16
/*2667*/            OPC_CheckPredicate, 36, // Predicate_aligned_truncstorei16
/*2669*/            OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*2672*/            OPC_EmitMergeInputChains1_0,
/*2673*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STHRL), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                    // Src: (st GR64:i64:$R1, pcrel32:i64:$I2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_aligned_truncstorei16>> - Complexity = 17
                    // Dst: (STHRL GR64:i64:$R1, pcrel32:i64:$I2)
/*2681*/          /*Scope*/ 16, /*->2698*/
/*2682*/            OPC_CheckPredicate, 19, // Predicate_truncstorei32
/*2684*/            OPC_CheckPredicate, 37, // Predicate_aligned_truncstorei32
/*2686*/            OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*2689*/            OPC_EmitMergeInputChains1_0,
/*2690*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STRL), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                    // Src: (st GR64:i64:$R1, pcrel32:i64:$I2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>><<P:Predicate_aligned_truncstorei32>> - Complexity = 17
                    // Dst: (STRL GR64:i64:$R1, pcrel32:i64:$I2)
/*2698*/          0, /*End of Scope*/
/*2699*/        /*Scope*/ 16, /*->2716*/
/*2700*/          OPC_CheckPredicate, 15, // Predicate_store
/*2702*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*2705*/          OPC_EmitMergeInputChains1_0,
/*2706*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::STG), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st GR64:i64:$R1, bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (STG GR64:i64:$R1, bdxaddr20only:i64:$XBD2)
/*2716*/        0, /*End of Scope*/
/*2717*/      /*Scope*/ 23, /*->2741*/
/*2718*/        OPC_CheckChild1Type, MVT::Untyped,
/*2720*/        OPC_RecordChild2, // #2 = $dst
/*2721*/        OPC_CheckChild2Type, MVT::i64,
/*2723*/        OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2725*/        OPC_CheckPredicate, 15, // Predicate_store
/*2727*/        OPC_CheckComplexPat, /*CP*/9, /*#*/2, // selectBDXAddr20Only128:$dst #3 #4 #5
/*2730*/        OPC_EmitMergeInputChains1_0,
/*2731*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ST128), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                // Src: (st GR128:Untyped:$src, bdxaddr20only128:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                // Dst: (ST128 GR128:Untyped:$src, bdxaddr20only128:i64:$dst)
/*2741*/      /*Scope*/ 81, /*->2823*/
/*2742*/        OPC_MoveChild, 1,
/*2744*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2747*/        OPC_CheckType, MVT::i32,
/*2749*/        OPC_MoveParent,
/*2750*/        OPC_RecordChild2, // #2 = $BD1
/*2751*/        OPC_CheckChild2Type, MVT::i64,
/*2753*/        OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2755*/        OPC_CheckPredicate, 6, // Predicate_truncstore
/*2757*/        OPC_Scope, 42, /*->2801*/ // 2 children in Scope
/*2759*/          OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*2761*/          OPC_Scope, 18, /*->2781*/ // 2 children in Scope
/*2763*/            OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectMVIAddr12Pair:$BD1 #3 #4
/*2766*/            OPC_EmitMergeInputChains1_0,
/*2767*/            OPC_EmitConvertToTarget, 1,
/*2769*/            OPC_EmitNodeXForm, 1, 5, // UIMM8
/*2772*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                    // Src: (st (imm:i32)<<X:UIMM8>>:$I2, mviaddr12pair:i64:$BD1)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                    // Dst: (MVI mviaddr12pair:i64:$BD1, (UIMM8:i32 (imm:i32):$I2))
/*2781*/          /*Scope*/ 18, /*->2800*/
/*2782*/            OPC_CheckComplexPat, /*CP*/10, /*#*/2, // selectMVIAddr20Pair:$BD1 #3 #4
/*2785*/            OPC_EmitMergeInputChains1_0,
/*2786*/            OPC_EmitConvertToTarget, 1,
/*2788*/            OPC_EmitNodeXForm, 1, 5, // UIMM8
/*2791*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVIY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                    // Src: (st (imm:i32)<<X:UIMM8>>:$I2, mviaddr20pair:i64:$BD1)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                    // Dst: (MVIY mviaddr20pair:i64:$BD1, (UIMM8:i32 (imm:i32):$I2))
/*2800*/          0, /*End of Scope*/
/*2801*/        /*Scope*/ 20, /*->2822*/
/*2802*/          OPC_CheckPredicate, 11, // Predicate_truncstorei16
/*2804*/          OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectMVIAddr12Pair:$BD1 #3 #4
/*2807*/          OPC_EmitMergeInputChains1_0,
/*2808*/          OPC_EmitConvertToTarget, 1,
/*2810*/          OPC_EmitNodeXForm, 2, 5, // SIMM16
/*2813*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVHHI), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (st (imm:i32)<<X:SIMM16>>:$I2, mviaddr12pair:i64:$BD1)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 16
                  // Dst: (MVHHI mviaddr12pair:i64:$BD1, (SIMM16:i32 (imm:i32):$I2))
/*2822*/        0, /*End of Scope*/
/*2823*/      /*Scope*/ 81, /*->2905*/
/*2824*/        OPC_CheckChild1Type, MVT::i32,
/*2826*/        OPC_RecordChild2, // #2 = $XBD2
/*2827*/        OPC_CheckChild2Type, MVT::i64,
/*2829*/        OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2831*/        OPC_CheckPredicate, 6, // Predicate_truncstore
/*2833*/        OPC_Scope, 34, /*->2869*/ // 2 children in Scope
/*2835*/          OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*2837*/          OPC_Scope, 14, /*->2853*/ // 2 children in Scope
/*2839*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*2842*/            OPC_EmitMergeInputChains1_0,
/*2843*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STC32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR32:i32:$R1, bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                    // Dst: (STC32 GR32:i32:$R1, bdxaddr12pair:i64:$XBD2)
/*2853*/          /*Scope*/ 14, /*->2868*/
/*2854*/            OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*2857*/            OPC_EmitMergeInputChains1_0,
/*2858*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STC32Y), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR32:i32:$R1, bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                    // Dst: (STC32Y GR32:i32:$R1, bdxaddr20pair:i64:$XBD2)
/*2868*/          0, /*End of Scope*/
/*2869*/        /*Scope*/ 34, /*->2904*/
/*2870*/          OPC_CheckPredicate, 11, // Predicate_truncstorei16
/*2872*/          OPC_Scope, 14, /*->2888*/ // 2 children in Scope
/*2874*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*2877*/            OPC_EmitMergeInputChains1_0,
/*2878*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STH32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR32:i32:$R1, bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 16
                    // Dst: (STH32 GR32:i32:$R1, bdxaddr12pair:i64:$XBD2)
/*2888*/          /*Scope*/ 14, /*->2903*/
/*2889*/            OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*2892*/            OPC_EmitMergeInputChains1_0,
/*2893*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STH32Y), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR32:i32:$R1, bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 16
                    // Dst: (STH32Y GR32:i32:$R1, bdxaddr20pair:i64:$XBD2)
/*2903*/          0, /*End of Scope*/
/*2904*/        0, /*End of Scope*/
/*2905*/      /*Scope*/ 116, /*->3022*/
/*2906*/        OPC_CheckChild1Type, MVT::i64,
/*2908*/        OPC_RecordChild2, // #2 = $XBD2
/*2909*/        OPC_CheckChild2Type, MVT::i64,
/*2911*/        OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2913*/        OPC_CheckPredicate, 6, // Predicate_truncstore
/*2915*/        OPC_Scope, 34, /*->2951*/ // 3 children in Scope
/*2917*/          OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*2919*/          OPC_Scope, 14, /*->2935*/ // 2 children in Scope
/*2921*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*2924*/            OPC_EmitMergeInputChains1_0,
/*2925*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STC), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR64:i64:$R1, bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                    // Dst: (STC GR64:i64:$R1, bdxaddr12pair:i64:$XBD2)
/*2935*/          /*Scope*/ 14, /*->2950*/
/*2936*/            OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*2939*/            OPC_EmitMergeInputChains1_0,
/*2940*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STCY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR64:i64:$R1, bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                    // Dst: (STCY GR64:i64:$R1, bdxaddr20pair:i64:$XBD2)
/*2950*/          0, /*End of Scope*/
/*2951*/        /*Scope*/ 34, /*->2986*/
/*2952*/          OPC_CheckPredicate, 11, // Predicate_truncstorei16
/*2954*/          OPC_Scope, 14, /*->2970*/ // 2 children in Scope
/*2956*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*2959*/            OPC_EmitMergeInputChains1_0,
/*2960*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STH), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR64:i64:$R1, bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 16
                    // Dst: (STH GR64:i64:$R1, bdxaddr12pair:i64:$XBD2)
/*2970*/          /*Scope*/ 14, /*->2985*/
/*2971*/            OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*2974*/            OPC_EmitMergeInputChains1_0,
/*2975*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STHY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR64:i64:$R1, bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 16
                    // Dst: (STHY GR64:i64:$R1, bdxaddr20pair:i64:$XBD2)
/*2985*/          0, /*End of Scope*/
/*2986*/        /*Scope*/ 34, /*->3021*/
/*2987*/          OPC_CheckPredicate, 19, // Predicate_truncstorei32
/*2989*/          OPC_Scope, 14, /*->3005*/ // 2 children in Scope
/*2991*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*2994*/            OPC_EmitMergeInputChains1_0,
/*2995*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::ST), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR64:i64:$R1, bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 16
                    // Dst: (ST GR64:i64:$R1, bdxaddr12pair:i64:$XBD2)
/*3005*/          /*Scope*/ 14, /*->3020*/
/*3006*/            OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*3009*/            OPC_EmitMergeInputChains1_0,
/*3010*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR64:i64:$R1, bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 16
                    // Dst: (STY GR64:i64:$R1, bdxaddr20pair:i64:$XBD2)
/*3020*/          0, /*End of Scope*/
/*3021*/        0, /*End of Scope*/
/*3022*/      /*Scope*/ 41, /*->3064*/
/*3023*/        OPC_CheckChild1Type, MVT::f32,
/*3025*/        OPC_RecordChild2, // #2 = $XBD2
/*3026*/        OPC_CheckChild2Type, MVT::i64,
/*3028*/        OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*3030*/        OPC_CheckPredicate, 15, // Predicate_store
/*3032*/        OPC_Scope, 14, /*->3048*/ // 2 children in Scope
/*3034*/          OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*3037*/          OPC_EmitMergeInputChains1_0,
/*3038*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::STE), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st FP32:f32:$R1, bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (STE FP32:f32:$R1, bdxaddr12pair:i64:$XBD2)
/*3048*/        /*Scope*/ 14, /*->3063*/
/*3049*/          OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*3052*/          OPC_EmitMergeInputChains1_0,
/*3053*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::STEY), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st FP32:f32:$R1, bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (STEY FP32:f32:$R1, bdxaddr20pair:i64:$XBD2)
/*3063*/        0, /*End of Scope*/
/*3064*/      /*Scope*/ 41, /*->3106*/
/*3065*/        OPC_CheckChild1Type, MVT::f64,
/*3067*/        OPC_RecordChild2, // #2 = $XBD2
/*3068*/        OPC_CheckChild2Type, MVT::i64,
/*3070*/        OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*3072*/        OPC_CheckPredicate, 15, // Predicate_store
/*3074*/        OPC_Scope, 14, /*->3090*/ // 2 children in Scope
/*3076*/          OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*3079*/          OPC_EmitMergeInputChains1_0,
/*3080*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::STD), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st FP64:f64:$R1, bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (STD FP64:f64:$R1, bdxaddr12pair:i64:$XBD2)
/*3090*/        /*Scope*/ 14, /*->3105*/
/*3091*/          OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*3094*/          OPC_EmitMergeInputChains1_0,
/*3095*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::STDY), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st FP64:f64:$R1, bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (STDY FP64:f64:$R1, bdxaddr20pair:i64:$XBD2)
/*3105*/        0, /*End of Scope*/
/*3106*/      /*Scope*/ 23, /*->3130*/
/*3107*/        OPC_CheckChild1Type, MVT::f128,
/*3109*/        OPC_RecordChild2, // #2 = $dst
/*3110*/        OPC_CheckChild2Type, MVT::i64,
/*3112*/        OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*3114*/        OPC_CheckPredicate, 15, // Predicate_store
/*3116*/        OPC_CheckComplexPat, /*CP*/9, /*#*/2, // selectBDXAddr20Only128:$dst #3 #4 #5
/*3119*/        OPC_EmitMergeInputChains1_0,
/*3120*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::STX), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                // Src: (st FP128:f128:$src, bdxaddr20only128:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                // Dst: (STX FP128:f128:$src, bdxaddr20only128:i64:$dst)
/*3130*/      0, /*End of Scope*/
/*3131*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 122|128,1/*250*/,  TARGET_VAL(ISD::SRA),// ->3386
/*3136*/    OPC_Scope, 79|128,1/*207*/, /*->3346*/ // 2 children in Scope
/*3139*/      OPC_MoveChild, 0,
/*3141*/      OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*3144*/      OPC_MoveChild, 0,
/*3146*/      OPC_SwitchOpcode /*2 cases */, 98,  TARGET_VAL(ISD::ANY_EXTEND),// ->3248
/*3150*/        OPC_MoveChild, 0,
/*3152*/        OPC_CheckOpcode, TARGET_VAL(SystemZISD::SELECT_CCMASK),
/*3155*/        OPC_CaptureGlueInput,
/*3156*/        OPC_MoveChild, 0,
/*3158*/        OPC_CheckInteger, 1, 
/*3160*/        OPC_MoveParent,
/*3161*/        OPC_MoveChild, 1,
/*3163*/        OPC_CheckInteger, 0, 
/*3165*/        OPC_MoveParent,
/*3166*/        OPC_RecordChild2, // #0 = $valid
/*3167*/        OPC_MoveChild, 2,
/*3169*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3172*/        OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*3174*/        OPC_MoveParent,
/*3175*/        OPC_RecordChild3, // #1 = $cc
/*3176*/        OPC_MoveChild, 3,
/*3178*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3181*/        OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*3183*/        OPC_MoveParent,
/*3184*/        OPC_MoveParent,
/*3185*/        OPC_MoveParent,
/*3186*/        OPC_MoveChild, 1,
/*3188*/        OPC_CheckInteger, 63, 
/*3190*/        OPC_CheckType, MVT::i32,
/*3192*/        OPC_MoveParent,
/*3193*/        OPC_MoveParent,
/*3194*/        OPC_MoveChild, 1,
/*3196*/        OPC_CheckInteger, 63, 
/*3198*/        OPC_CheckType, MVT::i32,
/*3200*/        OPC_MoveParent,
/*3201*/        OPC_EmitInteger, MVT::i64, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3213*/        OPC_EmitNode, TARGET_VAL(SystemZ::LGHI), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2,  // Results = #3
/*3221*/        OPC_EmitInteger, MVT::i64, 0, 
/*3224*/        OPC_EmitNode, TARGET_VAL(SystemZ::LGHI), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 4,  // Results = #5
/*3232*/        OPC_EmitConvertToTarget, 0,
/*3234*/        OPC_EmitConvertToTarget, 1,
/*3236*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::Select64), 0|OPFL_GlueInput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 3, 5, 6, 7, 
                // Src: (sra:i64 (shl:i64 (anyext:i64 (z_select_ccmask:i32 1:i32, 0:i32, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc)), 63:i32), 63:i32) - Complexity = 40
                // Dst: (Select64:i64:i32 (LGHI:i64 -1:i64), (LGHI:i64 0:i64), (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc)
              /*SwitchOpcode*/ 94,  TARGET_VAL(SystemZISD::SELECT_CCMASK),// ->3345
/*3251*/        OPC_CaptureGlueInput,
/*3252*/        OPC_MoveChild, 0,
/*3254*/        OPC_CheckInteger, 1, 
/*3256*/        OPC_MoveParent,
/*3257*/        OPC_MoveChild, 1,
/*3259*/        OPC_CheckInteger, 0, 
/*3261*/        OPC_MoveParent,
/*3262*/        OPC_RecordChild2, // #0 = $valid
/*3263*/        OPC_MoveChild, 2,
/*3265*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3268*/        OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*3270*/        OPC_MoveParent,
/*3271*/        OPC_RecordChild3, // #1 = $cc
/*3272*/        OPC_MoveChild, 3,
/*3274*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3277*/        OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*3279*/        OPC_MoveParent,
/*3280*/        OPC_MoveParent,
/*3281*/        OPC_MoveChild, 1,
/*3283*/        OPC_CheckInteger, 31, 
/*3285*/        OPC_CheckType, MVT::i32,
/*3287*/        OPC_MoveParent,
/*3288*/        OPC_MoveParent,
/*3289*/        OPC_MoveChild, 1,
/*3291*/        OPC_CheckInteger, 31, 
/*3293*/        OPC_CheckType, MVT::i32,
/*3295*/        OPC_MoveParent,
/*3296*/        OPC_CheckType, MVT::i32,
/*3298*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3310*/        OPC_EmitNode, TARGET_VAL(SystemZ::LHI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*3318*/        OPC_EmitInteger, MVT::i32, 0, 
/*3321*/        OPC_EmitNode, TARGET_VAL(SystemZ::LHI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 4,  // Results = #5
/*3329*/        OPC_EmitConvertToTarget, 0,
/*3331*/        OPC_EmitConvertToTarget, 1,
/*3333*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::Select32), 0|OPFL_GlueInput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 3, 5, 6, 7, 
                // Src: (sra:i32 (shl:i32 (z_select_ccmask:i32 1:i32, 0:i32, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), 31:i32), 31:i32) - Complexity = 37
                // Dst: (Select32:i32:i32 (LHI:i32 -1:i32), (LHI:i32 0:i32), (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc)
              0, // EndSwitchOpcode
/*3346*/    /*Scope*/ 38, /*->3385*/
/*3347*/      OPC_RecordChild0, // #0 = $R1src
/*3348*/      OPC_RecordChild1, // #1 = $BD2
/*3349*/      OPC_CheckChild1Type, MVT::i32,
/*3351*/      OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->3368
/*3354*/        OPC_CheckComplexPat, /*CP*/11, /*#*/1, // selectBDAddr12Only:$BD2 #2 #3
/*3357*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SRA), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 0, 2, 3, 
                // Src: (sra:i32 GR32:i32:$R1src, shift12only:i32:$BD2) - Complexity = 12
                // Dst: (SRA:i32:i32 GR32:i32:$R1src, shift12only:i32:$BD2)
              /*SwitchType*/ 14,  MVT::i64,// ->3384
/*3370*/        OPC_CheckComplexPat, /*CP*/12, /*#*/1, // selectBDAddr20Only:$BD2 #2 #3
/*3373*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SRAG), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 0, 2, 3, 
                // Src: (sra:i64 GR64:i64:$R3, shift20only:i32:$BD2) - Complexity = 12
                // Dst: (SRAG:i64:i32 GR64:i64:$R3, shift20only:i32:$BD2)
              0, // EndSwitchType
/*3385*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 17|128,11/*1425*/,  TARGET_VAL(ISD::SUB),// ->4815
/*3390*/    OPC_Scope, 82|128,7/*978*/, /*->4371*/ // 7 children in Scope
/*3393*/      OPC_MoveChild, 0,
/*3395*/      OPC_CheckInteger, 0, 
/*3397*/      OPC_MoveParent,
/*3398*/      OPC_MoveChild, 1,
/*3400*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*3403*/      OPC_MoveChild, 0,
/*3405*/      OPC_SwitchOpcode /*2 cases */, 117|128,3/*501*/,  TARGET_VAL(ISD::ADD),// ->3911
/*3410*/        OPC_Scope, 56|128,2/*312*/, /*->3725*/ // 3 children in Scope
/*3413*/          OPC_MoveChild, 0,
/*3415*/          OPC_SwitchOpcode /*3 cases */, 61,  TARGET_VAL(ISD::SIGN_EXTEND),// ->3480
/*3419*/            OPC_RecordChild0, // #0 = $src
/*3420*/            OPC_MoveParent,
/*3421*/            OPC_MoveChild, 1,
/*3423*/            OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*3426*/            OPC_MoveChild, 0,
/*3428*/            OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*3431*/            OPC_MoveChild, 0,
/*3433*/            OPC_CheckSame, 0,
/*3435*/            OPC_MoveParent,
/*3436*/            OPC_MoveParent,
/*3437*/            OPC_MoveChild, 1,
/*3439*/            OPC_CheckInteger, 63, 
/*3441*/            OPC_CheckType, MVT::i32,
/*3443*/            OPC_MoveParent,
/*3444*/            OPC_MoveParent,
/*3445*/            OPC_MoveParent,
/*3446*/            OPC_MoveChild, 1,
/*3448*/            OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*3451*/            OPC_MoveChild, 0,
/*3453*/            OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*3456*/            OPC_MoveChild, 0,
/*3458*/            OPC_CheckSame, 0,
/*3460*/            OPC_MoveParent,
/*3461*/            OPC_MoveParent,
/*3462*/            OPC_MoveChild, 1,
/*3464*/            OPC_CheckInteger, 63, 
/*3466*/            OPC_CheckType, MVT::i32,
/*3468*/            OPC_MoveParent,
/*3469*/            OPC_MoveParent,
/*3470*/            OPC_MoveParent,
/*3471*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNGFR), 0,
                        2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                    // Src: (sub:i64 0:i64, (xor:i64 (add:i64 (sext:i64 GR32:i32:$src), (sra:i64 (sext:i64 GR32:i32:$src), 63:i32)), (sra:i64 (sext:i64 GR32:i32:$src), 63:i32))) - Complexity = 39
                    // Dst: (LNGFR:i64:i32 GR32:i32:$src)
                  /*SwitchOpcode*/ 21|128,1/*149*/,  TARGET_VAL(ISD::SRA),// ->3633
/*3484*/            OPC_MoveChild, 0,
/*3486*/            OPC_SwitchOpcode /*2 cases */, 56,  TARGET_VAL(ISD::SIGN_EXTEND),// ->3546
/*3490*/              OPC_RecordChild0, // #0 = $src
/*3491*/              OPC_MoveParent,
/*3492*/              OPC_MoveChild, 1,
/*3494*/              OPC_CheckInteger, 63, 
/*3496*/              OPC_CheckType, MVT::i32,
/*3498*/              OPC_MoveParent,
/*3499*/              OPC_MoveParent,
/*3500*/              OPC_MoveChild, 1,
/*3502*/              OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*3505*/              OPC_MoveChild, 0,
/*3507*/              OPC_CheckSame, 0,
/*3509*/              OPC_MoveParent,
/*3510*/              OPC_MoveParent,
/*3511*/              OPC_MoveParent,
/*3512*/              OPC_MoveChild, 1,
/*3514*/              OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*3517*/              OPC_MoveChild, 0,
/*3519*/              OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*3522*/              OPC_MoveChild, 0,
/*3524*/              OPC_CheckSame, 0,
/*3526*/              OPC_MoveParent,
/*3527*/              OPC_MoveParent,
/*3528*/              OPC_MoveChild, 1,
/*3530*/              OPC_CheckInteger, 63, 
/*3532*/              OPC_CheckType, MVT::i32,
/*3534*/              OPC_MoveParent,
/*3535*/              OPC_MoveParent,
/*3536*/              OPC_MoveParent,
/*3537*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNGFR), 0,
                          2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                      // Src: (sub:i64 0:i64, (xor:i64 (add:i64 (sra:i64 (sext:i64 GR32:i32:$src), 63:i32), (sext:i64 GR32:i32:$src)), (sra:i64 (sext:i64 GR32:i32:$src), 63:i32))) - Complexity = 39
                      // Dst: (LNGFR:i64:i32 GR32:i32:$src)
                    /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->3632
/*3549*/              OPC_RecordChild0, // #0 = $src
/*3550*/              OPC_MoveChild, 1,
/*3552*/              OPC_CheckValueType, MVT::i32,
/*3554*/              OPC_MoveParent,
/*3555*/              OPC_MoveParent,
/*3556*/              OPC_MoveChild, 1,
/*3558*/              OPC_CheckInteger, 63, 
/*3560*/              OPC_CheckType, MVT::i32,
/*3562*/              OPC_MoveParent,
/*3563*/              OPC_MoveParent,
/*3564*/              OPC_MoveChild, 1,
/*3566*/              OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
/*3569*/              OPC_MoveChild, 0,
/*3571*/              OPC_CheckSame, 0,
/*3573*/              OPC_MoveParent,
/*3574*/              OPC_MoveChild, 1,
/*3576*/              OPC_CheckValueType, MVT::i32,
/*3578*/              OPC_MoveParent,
/*3579*/              OPC_MoveParent,
/*3580*/              OPC_MoveParent,
/*3581*/              OPC_MoveChild, 1,
/*3583*/              OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*3586*/              OPC_MoveChild, 0,
/*3588*/              OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
/*3591*/              OPC_MoveChild, 0,
/*3593*/              OPC_CheckSame, 0,
/*3595*/              OPC_MoveParent,
/*3596*/              OPC_MoveChild, 1,
/*3598*/              OPC_CheckValueType, MVT::i32,
/*3600*/              OPC_MoveParent,
/*3601*/              OPC_MoveParent,
/*3602*/              OPC_MoveChild, 1,
/*3604*/              OPC_CheckInteger, 63, 
/*3606*/              OPC_CheckType, MVT::i32,
/*3608*/              OPC_MoveParent,
/*3609*/              OPC_MoveParent,
/*3610*/              OPC_MoveParent,
/*3611*/              OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*3614*/              OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*3623*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNGFR), 0,
                          2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 2, 
                      // Src: (sub:i64 0:i64, (xor:i64 (add:i64 (sra:i64 (sext_inreg:i64 GR64:i64:$src, i32:Other), 63:i32), (sext_inreg:i64 GR64:i64:$src, i32:Other)), (sra:i64 (sext_inreg:i64 GR64:i64:$src, i32:Other), 63:i32))) - Complexity = 39
                      // Dst: (LNGFR:i64:i32 (EXTRACT_SUBREG:i32 GR64:i64:$src, subreg_32bit:i32))
                    0, // EndSwitchOpcode
                  /*SwitchOpcode*/ 88,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->3724
/*3636*/            OPC_RecordChild0, // #0 = $src
/*3637*/            OPC_MoveChild, 1,
/*3639*/            OPC_CheckValueType, MVT::i32,
/*3641*/            OPC_MoveParent,
/*3642*/            OPC_MoveParent,
/*3643*/            OPC_MoveChild, 1,
/*3645*/            OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*3648*/            OPC_MoveChild, 0,
/*3650*/            OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
/*3653*/            OPC_MoveChild, 0,
/*3655*/            OPC_CheckSame, 0,
/*3657*/            OPC_MoveParent,
/*3658*/            OPC_MoveChild, 1,
/*3660*/            OPC_CheckValueType, MVT::i32,
/*3662*/            OPC_MoveParent,
/*3663*/            OPC_MoveParent,
/*3664*/            OPC_MoveChild, 1,
/*3666*/            OPC_CheckInteger, 63, 
/*3668*/            OPC_CheckType, MVT::i32,
/*3670*/            OPC_MoveParent,
/*3671*/            OPC_MoveParent,
/*3672*/            OPC_MoveParent,
/*3673*/            OPC_MoveChild, 1,
/*3675*/            OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*3678*/            OPC_MoveChild, 0,
/*3680*/            OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
/*3683*/            OPC_MoveChild, 0,
/*3685*/            OPC_CheckSame, 0,
/*3687*/            OPC_MoveParent,
/*3688*/            OPC_MoveChild, 1,
/*3690*/            OPC_CheckValueType, MVT::i32,
/*3692*/            OPC_MoveParent,
/*3693*/            OPC_MoveParent,
/*3694*/            OPC_MoveChild, 1,
/*3696*/            OPC_CheckInteger, 63, 
/*3698*/            OPC_CheckType, MVT::i32,
/*3700*/            OPC_MoveParent,
/*3701*/            OPC_MoveParent,
/*3702*/            OPC_MoveParent,
/*3703*/            OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*3706*/            OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*3715*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNGFR), 0,
                        2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 2, 
                    // Src: (sub:i64 0:i64, (xor:i64 (add:i64 (sext_inreg:i64 GR64:i64:$src, i32:Other), (sra:i64 (sext_inreg:i64 GR64:i64:$src, i32:Other), 63:i32)), (sra:i64 (sext_inreg:i64 GR64:i64:$src, i32:Other), 63:i32))) - Complexity = 39
                    // Dst: (LNGFR:i64:i32 (EXTRACT_SUBREG:i32 GR64:i64:$src, subreg_32bit:i32))
                  0, // EndSwitchOpcode
/*3725*/        /*Scope*/ 89, /*->3815*/
/*3726*/          OPC_RecordChild0, // #0 = $R2
/*3727*/          OPC_MoveChild, 1,
/*3729*/          OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*3732*/          OPC_MoveChild, 0,
/*3734*/          OPC_CheckSame, 0,
/*3736*/          OPC_MoveParent,
/*3737*/          OPC_MoveChild, 1,
/*3739*/          OPC_CheckType, MVT::i32,
/*3741*/          OPC_Scope, 35, /*->3778*/ // 2 children in Scope
/*3743*/            OPC_CheckInteger, 31, 
/*3745*/            OPC_MoveParent,
/*3746*/            OPC_MoveParent,
/*3747*/            OPC_MoveParent,
/*3748*/            OPC_MoveChild, 1,
/*3750*/            OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*3753*/            OPC_MoveChild, 0,
/*3755*/            OPC_CheckSame, 0,
/*3757*/            OPC_MoveParent,
/*3758*/            OPC_MoveChild, 1,
/*3760*/            OPC_CheckInteger, 31, 
/*3762*/            OPC_CheckType, MVT::i32,
/*3764*/            OPC_MoveParent,
/*3765*/            OPC_MoveParent,
/*3766*/            OPC_MoveParent,
/*3767*/            OPC_CheckType, MVT::i32,
/*3769*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNR), 0,
                        2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                    // Src: (sub:i32 0:i32, (xor:i32 (add:i32 GR32:i32:$R2, (sra:i32 GR32:i32:$R2, 31:i32)), (sra:i32 GR32:i32:$R2, 31:i32))) - Complexity = 30
                    // Dst: (LNR:i32:i32 GR32:i32:$R2)
/*3778*/          /*Scope*/ 35, /*->3814*/
/*3779*/            OPC_CheckInteger, 63, 
/*3781*/            OPC_MoveParent,
/*3782*/            OPC_MoveParent,
/*3783*/            OPC_MoveParent,
/*3784*/            OPC_MoveChild, 1,
/*3786*/            OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*3789*/            OPC_MoveChild, 0,
/*3791*/            OPC_CheckSame, 0,
/*3793*/            OPC_MoveParent,
/*3794*/            OPC_MoveChild, 1,
/*3796*/            OPC_CheckInteger, 63, 
/*3798*/            OPC_CheckType, MVT::i32,
/*3800*/            OPC_MoveParent,
/*3801*/            OPC_MoveParent,
/*3802*/            OPC_MoveParent,
/*3803*/            OPC_CheckType, MVT::i64,
/*3805*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNGR), 0,
                        2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                    // Src: (sub:i64 0:i64, (xor:i64 (add:i64 GR64:i64:$R2, (sra:i64 GR64:i64:$R2, 63:i32)), (sra:i64 GR64:i64:$R2, 63:i32))) - Complexity = 30
                    // Dst: (LNGR:i64:i32 GR64:i64:$R2)
/*3814*/          0, /*End of Scope*/
/*3815*/        /*Scope*/ 94, /*->3910*/
/*3816*/          OPC_MoveChild, 0,
/*3818*/          OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*3821*/          OPC_RecordChild0, // #0 = $R2
/*3822*/          OPC_MoveChild, 1,
/*3824*/          OPC_CheckType, MVT::i32,
/*3826*/          OPC_Scope, 40, /*->3868*/ // 2 children in Scope
/*3828*/            OPC_CheckInteger, 31, 
/*3830*/            OPC_MoveParent,
/*3831*/            OPC_MoveParent,
/*3832*/            OPC_MoveChild, 1,
/*3834*/            OPC_CheckSame, 0,
/*3836*/            OPC_MoveParent,
/*3837*/            OPC_MoveParent,
/*3838*/            OPC_MoveChild, 1,
/*3840*/            OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*3843*/            OPC_MoveChild, 0,
/*3845*/            OPC_CheckSame, 0,
/*3847*/            OPC_MoveParent,
/*3848*/            OPC_MoveChild, 1,
/*3850*/            OPC_CheckInteger, 31, 
/*3852*/            OPC_CheckType, MVT::i32,
/*3854*/            OPC_MoveParent,
/*3855*/            OPC_MoveParent,
/*3856*/            OPC_MoveParent,
/*3857*/            OPC_CheckType, MVT::i32,
/*3859*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNR), 0,
                        2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                    // Src: (sub:i32 0:i32, (xor:i32 (add:i32 (sra:i32 GR32:i32:$R2, 31:i32), GR32:i32:$R2), (sra:i32 GR32:i32:$R2, 31:i32))) - Complexity = 30
                    // Dst: (LNR:i32:i32 GR32:i32:$R2)
/*3868*/          /*Scope*/ 40, /*->3909*/
/*3869*/            OPC_CheckInteger, 63, 
/*3871*/            OPC_MoveParent,
/*3872*/            OPC_MoveParent,
/*3873*/            OPC_MoveChild, 1,
/*3875*/            OPC_CheckSame, 0,
/*3877*/            OPC_MoveParent,
/*3878*/            OPC_MoveParent,
/*3879*/            OPC_MoveChild, 1,
/*3881*/            OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*3884*/            OPC_MoveChild, 0,
/*3886*/            OPC_CheckSame, 0,
/*3888*/            OPC_MoveParent,
/*3889*/            OPC_MoveChild, 1,
/*3891*/            OPC_CheckInteger, 63, 
/*3893*/            OPC_CheckType, MVT::i32,
/*3895*/            OPC_MoveParent,
/*3896*/            OPC_MoveParent,
/*3897*/            OPC_MoveParent,
/*3898*/            OPC_CheckType, MVT::i64,
/*3900*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNGR), 0,
                        2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                    // Src: (sub:i64 0:i64, (xor:i64 (add:i64 (sra:i64 GR64:i64:$R2, 63:i32), GR64:i64:$R2), (sra:i64 GR64:i64:$R2, 63:i32))) - Complexity = 30
                    // Dst: (LNGR:i64:i32 GR64:i64:$R2)
/*3909*/          0, /*End of Scope*/
/*3910*/        0, /*End of Scope*/
              /*SwitchOpcode*/ 71|128,3/*455*/,  TARGET_VAL(ISD::SRA),// ->4370
/*3915*/        OPC_Scope, 18|128,2/*274*/, /*->4192*/ // 2 children in Scope
/*3918*/          OPC_MoveChild, 0,
/*3920*/          OPC_SwitchOpcode /*2 cases */, 107,  TARGET_VAL(ISD::SIGN_EXTEND),// ->4031
/*3924*/            OPC_RecordChild0, // #0 = $src
/*3925*/            OPC_MoveParent,
/*3926*/            OPC_MoveChild, 1,
/*3928*/            OPC_CheckInteger, 63, 
/*3930*/            OPC_CheckType, MVT::i32,
/*3932*/            OPC_MoveParent,
/*3933*/            OPC_MoveParent,
/*3934*/            OPC_MoveChild, 1,
/*3936*/            OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*3939*/            OPC_MoveChild, 0,
/*3941*/            OPC_SwitchOpcode /*2 cases */, 41,  TARGET_VAL(ISD::SIGN_EXTEND),// ->3986
/*3945*/              OPC_MoveChild, 0,
/*3947*/              OPC_CheckSame, 0,
/*3949*/              OPC_MoveParent,
/*3950*/              OPC_MoveParent,
/*3951*/              OPC_MoveChild, 1,
/*3953*/              OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*3956*/              OPC_MoveChild, 0,
/*3958*/              OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*3961*/              OPC_MoveChild, 0,
/*3963*/              OPC_CheckSame, 0,
/*3965*/              OPC_MoveParent,
/*3966*/              OPC_MoveParent,
/*3967*/              OPC_MoveChild, 1,
/*3969*/              OPC_CheckInteger, 63, 
/*3971*/              OPC_CheckType, MVT::i32,
/*3973*/              OPC_MoveParent,
/*3974*/              OPC_MoveParent,
/*3975*/              OPC_MoveParent,
/*3976*/              OPC_MoveParent,
/*3977*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNGFR), 0,
                          2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                      // Src: (sub:i64 0:i64, (xor:i64 (sra:i64 (sext:i64 GR32:i32:$src), 63:i32), (add:i64 (sext:i64 GR32:i32:$src), (sra:i64 (sext:i64 GR32:i32:$src), 63:i32)))) - Complexity = 39
                      // Dst: (LNGFR:i64:i32 GR32:i32:$src)
                    /*SwitchOpcode*/ 41,  TARGET_VAL(ISD::SRA),// ->4030
/*3989*/              OPC_MoveChild, 0,
/*3991*/              OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*3994*/              OPC_MoveChild, 0,
/*3996*/              OPC_CheckSame, 0,
/*3998*/              OPC_MoveParent,
/*3999*/              OPC_MoveParent,
/*4000*/              OPC_MoveChild, 1,
/*4002*/              OPC_CheckInteger, 63, 
/*4004*/              OPC_CheckType, MVT::i32,
/*4006*/              OPC_MoveParent,
/*4007*/              OPC_MoveParent,
/*4008*/              OPC_MoveChild, 1,
/*4010*/              OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*4013*/              OPC_MoveChild, 0,
/*4015*/              OPC_CheckSame, 0,
/*4017*/              OPC_MoveParent,
/*4018*/              OPC_MoveParent,
/*4019*/              OPC_MoveParent,
/*4020*/              OPC_MoveParent,
/*4021*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNGFR), 0,
                          2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                      // Src: (sub:i64 0:i64, (xor:i64 (sra:i64 (sext:i64 GR32:i32:$src), 63:i32), (add:i64 (sra:i64 (sext:i64 GR32:i32:$src), 63:i32), (sext:i64 GR32:i32:$src)))) - Complexity = 39
                      // Dst: (LNGFR:i64:i32 GR32:i32:$src)
                    0, // EndSwitchOpcode
                  /*SwitchOpcode*/ 28|128,1/*156*/,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->4191
/*4035*/            OPC_RecordChild0, // #0 = $src
/*4036*/            OPC_MoveChild, 1,
/*4038*/            OPC_CheckValueType, MVT::i32,
/*4040*/            OPC_MoveParent,
/*4041*/            OPC_MoveParent,
/*4042*/            OPC_MoveChild, 1,
/*4044*/            OPC_CheckInteger, 63, 
/*4046*/            OPC_CheckType, MVT::i32,
/*4048*/            OPC_MoveParent,
/*4049*/            OPC_MoveParent,
/*4050*/            OPC_MoveChild, 1,
/*4052*/            OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*4055*/            OPC_MoveChild, 0,
/*4057*/            OPC_SwitchOpcode /*2 cases */, 63,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->4124
/*4061*/              OPC_MoveChild, 0,
/*4063*/              OPC_CheckSame, 0,
/*4065*/              OPC_MoveParent,
/*4066*/              OPC_MoveChild, 1,
/*4068*/              OPC_CheckValueType, MVT::i32,
/*4070*/              OPC_MoveParent,
/*4071*/              OPC_MoveParent,
/*4072*/              OPC_MoveChild, 1,
/*4074*/              OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*4077*/              OPC_MoveChild, 0,
/*4079*/              OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
/*4082*/              OPC_MoveChild, 0,
/*4084*/              OPC_CheckSame, 0,
/*4086*/              OPC_MoveParent,
/*4087*/              OPC_MoveChild, 1,
/*4089*/              OPC_CheckValueType, MVT::i32,
/*4091*/              OPC_MoveParent,
/*4092*/              OPC_MoveParent,
/*4093*/              OPC_MoveChild, 1,
/*4095*/              OPC_CheckInteger, 63, 
/*4097*/              OPC_CheckType, MVT::i32,
/*4099*/              OPC_MoveParent,
/*4100*/              OPC_MoveParent,
/*4101*/              OPC_MoveParent,
/*4102*/              OPC_MoveParent,
/*4103*/              OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*4106*/              OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*4115*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNGFR), 0,
                          2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 2, 
                      // Src: (sub:i64 0:i64, (xor:i64 (sra:i64 (sext_inreg:i64 GR64:i64:$src, i32:Other), 63:i32), (add:i64 (sext_inreg:i64 GR64:i64:$src, i32:Other), (sra:i64 (sext_inreg:i64 GR64:i64:$src, i32:Other), 63:i32)))) - Complexity = 39
                      // Dst: (LNGFR:i64:i32 (EXTRACT_SUBREG:i32 GR64:i64:$src, subreg_32bit:i32))
                    /*SwitchOpcode*/ 63,  TARGET_VAL(ISD::SRA),// ->4190
/*4127*/              OPC_MoveChild, 0,
/*4129*/              OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
/*4132*/              OPC_MoveChild, 0,
/*4134*/              OPC_CheckSame, 0,
/*4136*/              OPC_MoveParent,
/*4137*/              OPC_MoveChild, 1,
/*4139*/              OPC_CheckValueType, MVT::i32,
/*4141*/              OPC_MoveParent,
/*4142*/              OPC_MoveParent,
/*4143*/              OPC_MoveChild, 1,
/*4145*/              OPC_CheckInteger, 63, 
/*4147*/              OPC_CheckType, MVT::i32,
/*4149*/              OPC_MoveParent,
/*4150*/              OPC_MoveParent,
/*4151*/              OPC_MoveChild, 1,
/*4153*/              OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
/*4156*/              OPC_MoveChild, 0,
/*4158*/              OPC_CheckSame, 0,
/*4160*/              OPC_MoveParent,
/*4161*/              OPC_MoveChild, 1,
/*4163*/              OPC_CheckValueType, MVT::i32,
/*4165*/              OPC_MoveParent,
/*4166*/              OPC_MoveParent,
/*4167*/              OPC_MoveParent,
/*4168*/              OPC_MoveParent,
/*4169*/              OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*4172*/              OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*4181*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNGFR), 0,
                          2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 2, 
                      // Src: (sub:i64 0:i64, (xor:i64 (sra:i64 (sext_inreg:i64 GR64:i64:$src, i32:Other), 63:i32), (add:i64 (sra:i64 (sext_inreg:i64 GR64:i64:$src, i32:Other), 63:i32), (sext_inreg:i64 GR64:i64:$src, i32:Other)))) - Complexity = 39
                      // Dst: (LNGFR:i64:i32 (EXTRACT_SUBREG:i32 GR64:i64:$src, subreg_32bit:i32))
                    0, // EndSwitchOpcode
                  0, // EndSwitchOpcode
/*4192*/        /*Scope*/ 47|128,1/*175*/, /*->4369*/
/*4194*/          OPC_RecordChild0, // #0 = $R2
/*4195*/          OPC_MoveChild, 1,
/*4197*/          OPC_CheckType, MVT::i32,
/*4199*/          OPC_Scope, 83, /*->4284*/ // 2 children in Scope
/*4201*/            OPC_CheckInteger, 31, 
/*4203*/            OPC_MoveParent,
/*4204*/            OPC_MoveParent,
/*4205*/            OPC_MoveChild, 1,
/*4207*/            OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*4210*/            OPC_MoveChild, 0,
/*4212*/            OPC_Scope, 34, /*->4248*/ // 2 children in Scope
/*4214*/              OPC_CheckSame, 0,
/*4216*/              OPC_MoveParent,
/*4217*/              OPC_MoveChild, 1,
/*4219*/              OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*4222*/              OPC_MoveChild, 0,
/*4224*/              OPC_CheckSame, 0,
/*4226*/              OPC_MoveParent,
/*4227*/              OPC_MoveChild, 1,
/*4229*/              OPC_CheckInteger, 31, 
/*4231*/              OPC_CheckType, MVT::i32,
/*4233*/              OPC_MoveParent,
/*4234*/              OPC_MoveParent,
/*4235*/              OPC_MoveParent,
/*4236*/              OPC_MoveParent,
/*4237*/              OPC_CheckType, MVT::i32,
/*4239*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNR), 0,
                          2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                      // Src: (sub:i32 0:i32, (xor:i32 (sra:i32 GR32:i32:$R2, 31:i32), (add:i32 GR32:i32:$R2, (sra:i32 GR32:i32:$R2, 31:i32)))) - Complexity = 30
                      // Dst: (LNR:i32:i32 GR32:i32:$R2)
/*4248*/            /*Scope*/ 34, /*->4283*/
/*4249*/              OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*4252*/              OPC_MoveChild, 0,
/*4254*/              OPC_CheckSame, 0,
/*4256*/              OPC_MoveParent,
/*4257*/              OPC_MoveChild, 1,
/*4259*/              OPC_CheckInteger, 31, 
/*4261*/              OPC_CheckType, MVT::i32,
/*4263*/              OPC_MoveParent,
/*4264*/              OPC_MoveParent,
/*4265*/              OPC_MoveChild, 1,
/*4267*/              OPC_CheckSame, 0,
/*4269*/              OPC_MoveParent,
/*4270*/              OPC_MoveParent,
/*4271*/              OPC_MoveParent,
/*4272*/              OPC_CheckType, MVT::i32,
/*4274*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNR), 0,
                          2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                      // Src: (sub:i32 0:i32, (xor:i32 (sra:i32 GR32:i32:$R2, 31:i32), (add:i32 (sra:i32 GR32:i32:$R2, 31:i32), GR32:i32:$R2))) - Complexity = 30
                      // Dst: (LNR:i32:i32 GR32:i32:$R2)
/*4283*/            0, /*End of Scope*/
/*4284*/          /*Scope*/ 83, /*->4368*/
/*4285*/            OPC_CheckInteger, 63, 
/*4287*/            OPC_MoveParent,
/*4288*/            OPC_MoveParent,
/*4289*/            OPC_MoveChild, 1,
/*4291*/            OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*4294*/            OPC_MoveChild, 0,
/*4296*/            OPC_Scope, 34, /*->4332*/ // 2 children in Scope
/*4298*/              OPC_CheckSame, 0,
/*4300*/              OPC_MoveParent,
/*4301*/              OPC_MoveChild, 1,
/*4303*/              OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*4306*/              OPC_MoveChild, 0,
/*4308*/              OPC_CheckSame, 0,
/*4310*/              OPC_MoveParent,
/*4311*/              OPC_MoveChild, 1,
/*4313*/              OPC_CheckInteger, 63, 
/*4315*/              OPC_CheckType, MVT::i32,
/*4317*/              OPC_MoveParent,
/*4318*/              OPC_MoveParent,
/*4319*/              OPC_MoveParent,
/*4320*/              OPC_MoveParent,
/*4321*/              OPC_CheckType, MVT::i64,
/*4323*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNGR), 0,
                          2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                      // Src: (sub:i64 0:i64, (xor:i64 (sra:i64 GR64:i64:$R2, 63:i32), (add:i64 GR64:i64:$R2, (sra:i64 GR64:i64:$R2, 63:i32)))) - Complexity = 30
                      // Dst: (LNGR:i64:i32 GR64:i64:$R2)
/*4332*/            /*Scope*/ 34, /*->4367*/
/*4333*/              OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*4336*/              OPC_MoveChild, 0,
/*4338*/              OPC_CheckSame, 0,
/*4340*/              OPC_MoveParent,
/*4341*/              OPC_MoveChild, 1,
/*4343*/              OPC_CheckInteger, 63, 
/*4345*/              OPC_CheckType, MVT::i32,
/*4347*/              OPC_MoveParent,
/*4348*/              OPC_MoveParent,
/*4349*/              OPC_MoveChild, 1,
/*4351*/              OPC_CheckSame, 0,
/*4353*/              OPC_MoveParent,
/*4354*/              OPC_MoveParent,
/*4355*/              OPC_MoveParent,
/*4356*/              OPC_CheckType, MVT::i64,
/*4358*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNGR), 0,
                          2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                      // Src: (sub:i64 0:i64, (xor:i64 (sra:i64 GR64:i64:$R2, 63:i32), (add:i64 (sra:i64 GR64:i64:$R2, 63:i32), GR64:i64:$R2))) - Complexity = 30
                      // Dst: (LNGR:i64:i32 GR64:i64:$R2)
/*4367*/            0, /*End of Scope*/
/*4368*/          0, /*End of Scope*/
/*4369*/        0, /*End of Scope*/
              0, // EndSwitchOpcode
/*4371*/    /*Scope*/ 44|128,1/*172*/, /*->4545*/
/*4373*/      OPC_RecordChild0, // #0 = $R1src
/*4374*/      OPC_MoveChild, 1,
/*4376*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4379*/      OPC_RecordMemRef,
/*4380*/      OPC_RecordNode, // #1 = 'ld' chained node
/*4381*/      OPC_CheckFoldableChainNode,
/*4382*/      OPC_RecordChild1, // #2 = $XBD2
/*4383*/      OPC_CheckChild1Type, MVT::i64,
/*4385*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4387*/      OPC_Scope, 43, /*->4432*/ // 5 children in Scope
/*4389*/        OPC_CheckPredicate, 38, // Predicate_sextload
/*4391*/        OPC_CheckPredicate, 39, // Predicate_sextloadi16
/*4393*/        OPC_MoveParent,
/*4394*/        OPC_CheckType, MVT::i32,
/*4396*/        OPC_Scope, 16, /*->4414*/ // 2 children in Scope
/*4398*/          OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*4401*/          OPC_EmitMergeInputChains1_1,
/*4402*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SH), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (sub:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>) - Complexity = 19
                  // Dst: (SH:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*4414*/        /*Scope*/ 16, /*->4431*/
/*4415*/          OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*4418*/          OPC_EmitMergeInputChains1_1,
/*4419*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SHY), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (sub:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>) - Complexity = 19
                  // Dst: (SHY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*4431*/        0, /*End of Scope*/
/*4432*/      /*Scope*/ 41, /*->4474*/
/*4433*/        OPC_CheckPredicate, 13, // Predicate_load
/*4435*/        OPC_MoveParent,
/*4436*/        OPC_CheckType, MVT::i32,
/*4438*/        OPC_Scope, 16, /*->4456*/ // 2 children in Scope
/*4440*/          OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*4443*/          OPC_EmitMergeInputChains1_1,
/*4444*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::S), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (sub:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (S:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*4456*/        /*Scope*/ 16, /*->4473*/
/*4457*/          OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*4460*/          OPC_EmitMergeInputChains1_1,
/*4461*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SY), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (sub:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (SY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*4473*/        0, /*End of Scope*/
/*4474*/      /*Scope*/ 23, /*->4498*/
/*4475*/        OPC_CheckPredicate, 38, // Predicate_sextload
/*4477*/        OPC_CheckPredicate, 40, // Predicate_sextloadi32
/*4479*/        OPC_MoveParent,
/*4480*/        OPC_CheckType, MVT::i64,
/*4482*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*4485*/        OPC_EmitMergeInputChains1_1,
/*4486*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SGF), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (sub:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>>) - Complexity = 19
                // Dst: (SGF:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*4498*/      /*Scope*/ 21, /*->4520*/
/*4499*/        OPC_CheckPredicate, 13, // Predicate_load
/*4501*/        OPC_MoveParent,
/*4502*/        OPC_CheckType, MVT::i64,
/*4504*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*4507*/        OPC_EmitMergeInputChains1_1,
/*4508*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SG), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (sub:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (SG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*4520*/      /*Scope*/ 23, /*->4544*/
/*4521*/        OPC_CheckPredicate, 41, // Predicate_zextload
/*4523*/        OPC_CheckPredicate, 42, // Predicate_zextloadi32
/*4525*/        OPC_MoveParent,
/*4526*/        OPC_CheckType, MVT::i64,
/*4528*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$addr #3 #4 #5
/*4531*/        OPC_EmitMergeInputChains1_1,
/*4532*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGF), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (sub:i64 GR64:i64:$src1, (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>>) - Complexity = 19
                // Dst: (SLGF:i64:i32 GR64:i64:$src1, bdxaddr20only:i64:$addr)
/*4544*/      0, /*End of Scope*/
/*4545*/    /*Scope*/ 47, /*->4593*/
/*4546*/      OPC_RecordNode, // #0 = $src
/*4547*/      OPC_CheckType, MVT::i64,
/*4549*/      OPC_Scope, 13, /*->4564*/ // 3 children in Scope
/*4551*/        OPC_CheckComplexPat, /*CP*/13, /*#*/0, // selectDynAlloc12Only:$src #1 #2 #3
/*4554*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADJDYNALLOC), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: dynalloc12only:i64:$src - Complexity = 12
                // Dst: (ADJDYNALLOC:i64 dynalloc12only:i64:$src)
/*4564*/      /*Scope*/ 13, /*->4578*/
/*4565*/        OPC_CheckComplexPat, /*CP*/14, /*#*/0, // selectLAAddr12Pair:$XBD2 #1 #2 #3
/*4568*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LA), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: laaddr12pair:i64:$XBD2 - Complexity = 12
                // Dst: (LA:i64 laaddr12pair:i64:$XBD2)
/*4578*/      /*Scope*/ 13, /*->4592*/
/*4579*/        OPC_CheckComplexPat, /*CP*/15, /*#*/0, // selectLAAddr20Pair:$XBD2 #1 #2 #3
/*4582*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LAY), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: laaddr20pair:i64:$XBD2 - Complexity = 12
                // Dst: (LAY:i64 laaddr20pair:i64:$XBD2)
/*4592*/      0, /*End of Scope*/
/*4593*/    /*Scope*/ 54, /*->4648*/
/*4594*/      OPC_MoveChild, 0,
/*4596*/      OPC_CheckInteger, 0, 
/*4598*/      OPC_MoveParent,
/*4599*/      OPC_MoveChild, 1,
/*4601*/      OPC_SwitchOpcode /*2 cases */, 11,  TARGET_VAL(ISD::SIGN_EXTEND),// ->4616
/*4605*/        OPC_RecordChild0, // #0 = $src
/*4606*/        OPC_MoveParent,
/*4607*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCGFR), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sub:i64 0:i64, (sext:i64 GR32:i32:$src)) - Complexity = 11
                // Dst: (LCGFR:i64:i32 GR32:i32:$src)
              /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->4647
/*4619*/        OPC_RecordChild0, // #0 = $src
/*4620*/        OPC_MoveChild, 1,
/*4622*/        OPC_CheckValueType, MVT::i32,
/*4624*/        OPC_MoveParent,
/*4625*/        OPC_MoveParent,
/*4626*/        OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*4629*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*4638*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCGFR), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (sub:i64 0:i64, (sext_inreg:i64 GR64:i64:$src, i32:Other)) - Complexity = 11
                // Dst: (LCGFR:i64:i32 (EXTRACT_SUBREG:i32 GR64:i64:$src, subreg_32bit:i32))
              0, // EndSwitchOpcode
/*4648*/    /*Scope*/ 35, /*->4684*/
/*4649*/      OPC_RecordChild0, // #0 = $src1
/*4650*/      OPC_MoveChild, 1,
/*4652*/      OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*4658*/      OPC_RecordChild0, // #1 = $src2
/*4659*/      OPC_MoveParent,
/*4660*/      OPC_CheckType, MVT::i64,
/*4662*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*4665*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*4674*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGFR), 0,
                  2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
              // Src: (sub:i64 GR64:i64:$src1, (and:i64 GR64:i64:$src2, 4294967295:i64)) - Complexity = 11
              // Dst: (SLGFR:i64:i32 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*4684*/    /*Scope*/ 30, /*->4715*/
/*4685*/      OPC_MoveChild, 0,
/*4687*/      OPC_CheckInteger, 0, 
/*4689*/      OPC_MoveParent,
/*4690*/      OPC_RecordChild1, // #0 = $R2
/*4691*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->4703
/*4694*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCR), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sub:i32 0:i32, GR32:i32:$R2) - Complexity = 8
                // Dst: (LCR:i32:i32 GR32:i32:$R2)
              /*SwitchType*/ 9,  MVT::i64,// ->4714
/*4705*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCGR), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sub:i64 0:i64, GR64:i64:$R2) - Complexity = 8
                // Dst: (LCGR:i64:i32 GR64:i64:$R2)
              0, // EndSwitchType
/*4715*/    /*Scope*/ 98, /*->4814*/
/*4716*/      OPC_RecordChild0, // #0 = $src1
/*4717*/      OPC_Scope, 66, /*->4785*/ // 2 children in Scope
/*4719*/        OPC_MoveChild, 1,
/*4721*/        OPC_SwitchOpcode /*3 cases */, 12,  TARGET_VAL(ISD::SIGN_EXTEND),// ->4737
/*4725*/          OPC_RecordChild0, // #1 = $src2
/*4726*/          OPC_MoveParent,
/*4727*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SGFR), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:i64 GR64:i64:$src1, (sext:i64 GR32:i32:$src2)) - Complexity = 6
                  // Dst: (SGFR:i64:i32 GR64:i64:$src1, GR32:i32:$src2)
                /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::ZERO_EXTEND),// ->4752
/*4740*/          OPC_RecordChild0, // #1 = $src2
/*4741*/          OPC_MoveParent,
/*4742*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGFR), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:i64 GR64:i64:$src1, (zext:i64 GR32:i32:$src2)) - Complexity = 6
                  // Dst: (SLGFR:i64:i32 GR64:i64:$src1, GR32:i32:$src2)
                /*SwitchOpcode*/ 29,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->4784
/*4755*/          OPC_RecordChild0, // #1 = $src2
/*4756*/          OPC_MoveChild, 1,
/*4758*/          OPC_CheckValueType, MVT::i32,
/*4760*/          OPC_MoveParent,
/*4761*/          OPC_MoveParent,
/*4762*/          OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*4765*/          OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*4774*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SGFR), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (sub:i64 GR64:i64:$src1, (sext_inreg:i64 GR64:i64:$src2, i32:Other)) - Complexity = 6
                  // Dst: (SGFR:i64:i32 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
                0, // EndSwitchOpcode
/*4785*/      /*Scope*/ 27, /*->4813*/
/*4786*/        OPC_RecordChild1, // #1 = $R2
/*4787*/        OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->4800
/*4790*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SR), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:i32 GR32:i32:$R1src, GR32:i32:$R2) - Complexity = 3
                  // Dst: (SR:i32:i32 GR32:i32:$R1src, GR32:i32:$R2)
                /*SwitchType*/ 10,  MVT::i64,// ->4812
/*4802*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SGR), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:i64 GR64:i64:$R1src, GR64:i64:$R2) - Complexity = 3
                  // Dst: (SGR:i64:i32 GR64:i64:$R1src, GR64:i64:$R2)
                0, // EndSwitchType
/*4813*/      0, /*End of Scope*/
/*4814*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 56|128,9/*1208*/,  TARGET_VAL(ISD::XOR),// ->6027
/*4819*/    OPC_Scope, 56|128,7/*952*/, /*->5774*/ // 4 children in Scope
/*4822*/      OPC_MoveChild, 0,
/*4824*/      OPC_SwitchOpcode /*2 cases */, 109|128,3/*493*/,  TARGET_VAL(ISD::ADD),// ->5322
/*4829*/        OPC_Scope, 52|128,2/*308*/, /*->5140*/ // 3 children in Scope
/*4832*/          OPC_MoveChild, 0,
/*4834*/          OPC_SwitchOpcode /*3 cases */, 60,  TARGET_VAL(ISD::SIGN_EXTEND),// ->4898
/*4838*/            OPC_RecordChild0, // #0 = $src
/*4839*/            OPC_MoveParent,
/*4840*/            OPC_MoveChild, 1,
/*4842*/            OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*4845*/            OPC_MoveChild, 0,
/*4847*/            OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*4850*/            OPC_MoveChild, 0,
/*4852*/            OPC_CheckSame, 0,
/*4854*/            OPC_MoveParent,
/*4855*/            OPC_MoveParent,
/*4856*/            OPC_MoveChild, 1,
/*4858*/            OPC_CheckInteger, 63, 
/*4860*/            OPC_CheckType, MVT::i32,
/*4862*/            OPC_MoveParent,
/*4863*/            OPC_MoveParent,
/*4864*/            OPC_MoveParent,
/*4865*/            OPC_MoveChild, 1,
/*4867*/            OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*4870*/            OPC_MoveChild, 0,
/*4872*/            OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*4875*/            OPC_MoveChild, 0,
/*4877*/            OPC_CheckSame, 0,
/*4879*/            OPC_MoveParent,
/*4880*/            OPC_MoveParent,
/*4881*/            OPC_MoveChild, 1,
/*4883*/            OPC_CheckInteger, 63, 
/*4885*/            OPC_CheckType, MVT::i32,
/*4887*/            OPC_MoveParent,
/*4888*/            OPC_MoveParent,
/*4889*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPGFR), 0,
                        2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                    // Src: (xor:i64 (add:i64 (sext:i64 GR32:i32:$src), (sra:i64 (sext:i64 GR32:i32:$src), 63:i32)), (sra:i64 (sext:i64 GR32:i32:$src), 63:i32)) - Complexity = 31
                    // Dst: (LPGFR:i64:i32 GR32:i32:$src)
                  /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::SRA),// ->5049
/*4902*/            OPC_MoveChild, 0,
/*4904*/            OPC_SwitchOpcode /*2 cases */, 55,  TARGET_VAL(ISD::SIGN_EXTEND),// ->4963
/*4908*/              OPC_RecordChild0, // #0 = $src
/*4909*/              OPC_MoveParent,
/*4910*/              OPC_MoveChild, 1,
/*4912*/              OPC_CheckInteger, 63, 
/*4914*/              OPC_CheckType, MVT::i32,
/*4916*/              OPC_MoveParent,
/*4917*/              OPC_MoveParent,
/*4918*/              OPC_MoveChild, 1,
/*4920*/              OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*4923*/              OPC_MoveChild, 0,
/*4925*/              OPC_CheckSame, 0,
/*4927*/              OPC_MoveParent,
/*4928*/              OPC_MoveParent,
/*4929*/              OPC_MoveParent,
/*4930*/              OPC_MoveChild, 1,
/*4932*/              OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*4935*/              OPC_MoveChild, 0,
/*4937*/              OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*4940*/              OPC_MoveChild, 0,
/*4942*/              OPC_CheckSame, 0,
/*4944*/              OPC_MoveParent,
/*4945*/              OPC_MoveParent,
/*4946*/              OPC_MoveChild, 1,
/*4948*/              OPC_CheckInteger, 63, 
/*4950*/              OPC_CheckType, MVT::i32,
/*4952*/              OPC_MoveParent,
/*4953*/              OPC_MoveParent,
/*4954*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPGFR), 0,
                          2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                      // Src: (xor:i64 (add:i64 (sra:i64 (sext:i64 GR32:i32:$src), 63:i32), (sext:i64 GR32:i32:$src)), (sra:i64 (sext:i64 GR32:i32:$src), 63:i32)) - Complexity = 31
                      // Dst: (LPGFR:i64:i32 GR32:i32:$src)
                    /*SwitchOpcode*/ 82,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->5048
/*4966*/              OPC_RecordChild0, // #0 = $src
/*4967*/              OPC_MoveChild, 1,
/*4969*/              OPC_CheckValueType, MVT::i32,
/*4971*/              OPC_MoveParent,
/*4972*/              OPC_MoveParent,
/*4973*/              OPC_MoveChild, 1,
/*4975*/              OPC_CheckInteger, 63, 
/*4977*/              OPC_CheckType, MVT::i32,
/*4979*/              OPC_MoveParent,
/*4980*/              OPC_MoveParent,
/*4981*/              OPC_MoveChild, 1,
/*4983*/              OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
/*4986*/              OPC_MoveChild, 0,
/*4988*/              OPC_CheckSame, 0,
/*4990*/              OPC_MoveParent,
/*4991*/              OPC_MoveChild, 1,
/*4993*/              OPC_CheckValueType, MVT::i32,
/*4995*/              OPC_MoveParent,
/*4996*/              OPC_MoveParent,
/*4997*/              OPC_MoveParent,
/*4998*/              OPC_MoveChild, 1,
/*5000*/              OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*5003*/              OPC_MoveChild, 0,
/*5005*/              OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
/*5008*/              OPC_MoveChild, 0,
/*5010*/              OPC_CheckSame, 0,
/*5012*/              OPC_MoveParent,
/*5013*/              OPC_MoveChild, 1,
/*5015*/              OPC_CheckValueType, MVT::i32,
/*5017*/              OPC_MoveParent,
/*5018*/              OPC_MoveParent,
/*5019*/              OPC_MoveChild, 1,
/*5021*/              OPC_CheckInteger, 63, 
/*5023*/              OPC_CheckType, MVT::i32,
/*5025*/              OPC_MoveParent,
/*5026*/              OPC_MoveParent,
/*5027*/              OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*5030*/              OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*5039*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPGFR), 0,
                          2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 2, 
                      // Src: (xor:i64 (add:i64 (sra:i64 (sext_inreg:i64 GR64:i64:$src, i32:Other), 63:i32), (sext_inreg:i64 GR64:i64:$src, i32:Other)), (sra:i64 (sext_inreg:i64 GR64:i64:$src, i32:Other), 63:i32)) - Complexity = 31
                      // Dst: (LPGFR:i64:i32 (EXTRACT_SUBREG:i32 GR64:i64:$src, subreg_32bit:i32))
                    0, // EndSwitchOpcode
                  /*SwitchOpcode*/ 87,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->5139
/*5052*/            OPC_RecordChild0, // #0 = $src
/*5053*/            OPC_MoveChild, 1,
/*5055*/            OPC_CheckValueType, MVT::i32,
/*5057*/            OPC_MoveParent,
/*5058*/            OPC_MoveParent,
/*5059*/            OPC_MoveChild, 1,
/*5061*/            OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*5064*/            OPC_MoveChild, 0,
/*5066*/            OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
/*5069*/            OPC_MoveChild, 0,
/*5071*/            OPC_CheckSame, 0,
/*5073*/            OPC_MoveParent,
/*5074*/            OPC_MoveChild, 1,
/*5076*/            OPC_CheckValueType, MVT::i32,
/*5078*/            OPC_MoveParent,
/*5079*/            OPC_MoveParent,
/*5080*/            OPC_MoveChild, 1,
/*5082*/            OPC_CheckInteger, 63, 
/*5084*/            OPC_CheckType, MVT::i32,
/*5086*/            OPC_MoveParent,
/*5087*/            OPC_MoveParent,
/*5088*/            OPC_MoveParent,
/*5089*/            OPC_MoveChild, 1,
/*5091*/            OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*5094*/            OPC_MoveChild, 0,
/*5096*/            OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
/*5099*/            OPC_MoveChild, 0,
/*5101*/            OPC_CheckSame, 0,
/*5103*/            OPC_MoveParent,
/*5104*/            OPC_MoveChild, 1,
/*5106*/            OPC_CheckValueType, MVT::i32,
/*5108*/            OPC_MoveParent,
/*5109*/            OPC_MoveParent,
/*5110*/            OPC_MoveChild, 1,
/*5112*/            OPC_CheckInteger, 63, 
/*5114*/            OPC_CheckType, MVT::i32,
/*5116*/            OPC_MoveParent,
/*5117*/            OPC_MoveParent,
/*5118*/            OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*5121*/            OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*5130*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPGFR), 0,
                        2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 2, 
                    // Src: (xor:i64 (add:i64 (sext_inreg:i64 GR64:i64:$src, i32:Other), (sra:i64 (sext_inreg:i64 GR64:i64:$src, i32:Other), 63:i32)), (sra:i64 (sext_inreg:i64 GR64:i64:$src, i32:Other), 63:i32)) - Complexity = 31
                    // Dst: (LPGFR:i64:i32 (EXTRACT_SUBREG:i32 GR64:i64:$src, subreg_32bit:i32))
                  0, // EndSwitchOpcode
/*5140*/        /*Scope*/ 87, /*->5228*/
/*5141*/          OPC_RecordChild0, // #0 = $R2
/*5142*/          OPC_MoveChild, 1,
/*5144*/          OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*5147*/          OPC_MoveChild, 0,
/*5149*/          OPC_CheckSame, 0,
/*5151*/          OPC_MoveParent,
/*5152*/          OPC_MoveChild, 1,
/*5154*/          OPC_CheckType, MVT::i32,
/*5156*/          OPC_Scope, 34, /*->5192*/ // 2 children in Scope
/*5158*/            OPC_CheckInteger, 31, 
/*5160*/            OPC_MoveParent,
/*5161*/            OPC_MoveParent,
/*5162*/            OPC_MoveParent,
/*5163*/            OPC_MoveChild, 1,
/*5165*/            OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*5168*/            OPC_MoveChild, 0,
/*5170*/            OPC_CheckSame, 0,
/*5172*/            OPC_MoveParent,
/*5173*/            OPC_MoveChild, 1,
/*5175*/            OPC_CheckInteger, 31, 
/*5177*/            OPC_CheckType, MVT::i32,
/*5179*/            OPC_MoveParent,
/*5180*/            OPC_MoveParent,
/*5181*/            OPC_CheckType, MVT::i32,
/*5183*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPR), 0,
                        2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                    // Src: (xor:i32 (add:i32 GR32:i32:$R2, (sra:i32 GR32:i32:$R2, 31:i32)), (sra:i32 GR32:i32:$R2, 31:i32)) - Complexity = 22
                    // Dst: (LPR:i32:i32 GR32:i32:$R2)
/*5192*/          /*Scope*/ 34, /*->5227*/
/*5193*/            OPC_CheckInteger, 63, 
/*5195*/            OPC_MoveParent,
/*5196*/            OPC_MoveParent,
/*5197*/            OPC_MoveParent,
/*5198*/            OPC_MoveChild, 1,
/*5200*/            OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*5203*/            OPC_MoveChild, 0,
/*5205*/            OPC_CheckSame, 0,
/*5207*/            OPC_MoveParent,
/*5208*/            OPC_MoveChild, 1,
/*5210*/            OPC_CheckInteger, 63, 
/*5212*/            OPC_CheckType, MVT::i32,
/*5214*/            OPC_MoveParent,
/*5215*/            OPC_MoveParent,
/*5216*/            OPC_CheckType, MVT::i64,
/*5218*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPGR), 0,
                        2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                    // Src: (xor:i64 (add:i64 GR64:i64:$R2, (sra:i64 GR64:i64:$R2, 63:i32)), (sra:i64 GR64:i64:$R2, 63:i32)) - Complexity = 22
                    // Dst: (LPGR:i64:i32 GR64:i64:$R2)
/*5227*/          0, /*End of Scope*/
/*5228*/        /*Scope*/ 92, /*->5321*/
/*5229*/          OPC_MoveChild, 0,
/*5231*/          OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*5234*/          OPC_RecordChild0, // #0 = $R2
/*5235*/          OPC_MoveChild, 1,
/*5237*/          OPC_CheckType, MVT::i32,
/*5239*/          OPC_Scope, 39, /*->5280*/ // 2 children in Scope
/*5241*/            OPC_CheckInteger, 31, 
/*5243*/            OPC_MoveParent,
/*5244*/            OPC_MoveParent,
/*5245*/            OPC_MoveChild, 1,
/*5247*/            OPC_CheckSame, 0,
/*5249*/            OPC_MoveParent,
/*5250*/            OPC_MoveParent,
/*5251*/            OPC_MoveChild, 1,
/*5253*/            OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*5256*/            OPC_MoveChild, 0,
/*5258*/            OPC_CheckSame, 0,
/*5260*/            OPC_MoveParent,
/*5261*/            OPC_MoveChild, 1,
/*5263*/            OPC_CheckInteger, 31, 
/*5265*/            OPC_CheckType, MVT::i32,
/*5267*/            OPC_MoveParent,
/*5268*/            OPC_MoveParent,
/*5269*/            OPC_CheckType, MVT::i32,
/*5271*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPR), 0,
                        2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                    // Src: (xor:i32 (add:i32 (sra:i32 GR32:i32:$R2, 31:i32), GR32:i32:$R2), (sra:i32 GR32:i32:$R2, 31:i32)) - Complexity = 22
                    // Dst: (LPR:i32:i32 GR32:i32:$R2)
/*5280*/          /*Scope*/ 39, /*->5320*/
/*5281*/            OPC_CheckInteger, 63, 
/*5283*/            OPC_MoveParent,
/*5284*/            OPC_MoveParent,
/*5285*/            OPC_MoveChild, 1,
/*5287*/            OPC_CheckSame, 0,
/*5289*/            OPC_MoveParent,
/*5290*/            OPC_MoveParent,
/*5291*/            OPC_MoveChild, 1,
/*5293*/            OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*5296*/            OPC_MoveChild, 0,
/*5298*/            OPC_CheckSame, 0,
/*5300*/            OPC_MoveParent,
/*5301*/            OPC_MoveChild, 1,
/*5303*/            OPC_CheckInteger, 63, 
/*5305*/            OPC_CheckType, MVT::i32,
/*5307*/            OPC_MoveParent,
/*5308*/            OPC_MoveParent,
/*5309*/            OPC_CheckType, MVT::i64,
/*5311*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPGR), 0,
                        2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                    // Src: (xor:i64 (add:i64 (sra:i64 GR64:i64:$R2, 63:i32), GR64:i64:$R2), (sra:i64 GR64:i64:$R2, 63:i32)) - Complexity = 22
                    // Dst: (LPGR:i64:i32 GR64:i64:$R2)
/*5320*/          0, /*End of Scope*/
/*5321*/        0, /*End of Scope*/
              /*SwitchOpcode*/ 63|128,3/*447*/,  TARGET_VAL(ISD::SRA),// ->5773
/*5326*/        OPC_Scope, 14|128,2/*270*/, /*->5599*/ // 2 children in Scope
/*5329*/          OPC_MoveChild, 0,
/*5331*/          OPC_SwitchOpcode /*2 cases */, 105,  TARGET_VAL(ISD::SIGN_EXTEND),// ->5440
/*5335*/            OPC_RecordChild0, // #0 = $src
/*5336*/            OPC_MoveParent,
/*5337*/            OPC_MoveChild, 1,
/*5339*/            OPC_CheckInteger, 63, 
/*5341*/            OPC_CheckType, MVT::i32,
/*5343*/            OPC_MoveParent,
/*5344*/            OPC_MoveParent,
/*5345*/            OPC_MoveChild, 1,
/*5347*/            OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*5350*/            OPC_MoveChild, 0,
/*5352*/            OPC_SwitchOpcode /*2 cases */, 40,  TARGET_VAL(ISD::SIGN_EXTEND),// ->5396
/*5356*/              OPC_MoveChild, 0,
/*5358*/              OPC_CheckSame, 0,
/*5360*/              OPC_MoveParent,
/*5361*/              OPC_MoveParent,
/*5362*/              OPC_MoveChild, 1,
/*5364*/              OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*5367*/              OPC_MoveChild, 0,
/*5369*/              OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*5372*/              OPC_MoveChild, 0,
/*5374*/              OPC_CheckSame, 0,
/*5376*/              OPC_MoveParent,
/*5377*/              OPC_MoveParent,
/*5378*/              OPC_MoveChild, 1,
/*5380*/              OPC_CheckInteger, 63, 
/*5382*/              OPC_CheckType, MVT::i32,
/*5384*/              OPC_MoveParent,
/*5385*/              OPC_MoveParent,
/*5386*/              OPC_MoveParent,
/*5387*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPGFR), 0,
                          2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                      // Src: (xor:i64 (sra:i64 (sext:i64 GR32:i32:$src), 63:i32), (add:i64 (sext:i64 GR32:i32:$src), (sra:i64 (sext:i64 GR32:i32:$src), 63:i32))) - Complexity = 31
                      // Dst: (LPGFR:i64:i32 GR32:i32:$src)
                    /*SwitchOpcode*/ 40,  TARGET_VAL(ISD::SRA),// ->5439
/*5399*/              OPC_MoveChild, 0,
/*5401*/              OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*5404*/              OPC_MoveChild, 0,
/*5406*/              OPC_CheckSame, 0,
/*5408*/              OPC_MoveParent,
/*5409*/              OPC_MoveParent,
/*5410*/              OPC_MoveChild, 1,
/*5412*/              OPC_CheckInteger, 63, 
/*5414*/              OPC_CheckType, MVT::i32,
/*5416*/              OPC_MoveParent,
/*5417*/              OPC_MoveParent,
/*5418*/              OPC_MoveChild, 1,
/*5420*/              OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*5423*/              OPC_MoveChild, 0,
/*5425*/              OPC_CheckSame, 0,
/*5427*/              OPC_MoveParent,
/*5428*/              OPC_MoveParent,
/*5429*/              OPC_MoveParent,
/*5430*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPGFR), 0,
                          2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                      // Src: (xor:i64 (sra:i64 (sext:i64 GR32:i32:$src), 63:i32), (add:i64 (sra:i64 (sext:i64 GR32:i32:$src), 63:i32), (sext:i64 GR32:i32:$src))) - Complexity = 31
                      // Dst: (LPGFR:i64:i32 GR32:i32:$src)
                    0, // EndSwitchOpcode
                  /*SwitchOpcode*/ 26|128,1/*154*/,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->5598
/*5444*/            OPC_RecordChild0, // #0 = $src
/*5445*/            OPC_MoveChild, 1,
/*5447*/            OPC_CheckValueType, MVT::i32,
/*5449*/            OPC_MoveParent,
/*5450*/            OPC_MoveParent,
/*5451*/            OPC_MoveChild, 1,
/*5453*/            OPC_CheckInteger, 63, 
/*5455*/            OPC_CheckType, MVT::i32,
/*5457*/            OPC_MoveParent,
/*5458*/            OPC_MoveParent,
/*5459*/            OPC_MoveChild, 1,
/*5461*/            OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*5464*/            OPC_MoveChild, 0,
/*5466*/            OPC_SwitchOpcode /*2 cases */, 62,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->5532
/*5470*/              OPC_MoveChild, 0,
/*5472*/              OPC_CheckSame, 0,
/*5474*/              OPC_MoveParent,
/*5475*/              OPC_MoveChild, 1,
/*5477*/              OPC_CheckValueType, MVT::i32,
/*5479*/              OPC_MoveParent,
/*5480*/              OPC_MoveParent,
/*5481*/              OPC_MoveChild, 1,
/*5483*/              OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*5486*/              OPC_MoveChild, 0,
/*5488*/              OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
/*5491*/              OPC_MoveChild, 0,
/*5493*/              OPC_CheckSame, 0,
/*5495*/              OPC_MoveParent,
/*5496*/              OPC_MoveChild, 1,
/*5498*/              OPC_CheckValueType, MVT::i32,
/*5500*/              OPC_MoveParent,
/*5501*/              OPC_MoveParent,
/*5502*/              OPC_MoveChild, 1,
/*5504*/              OPC_CheckInteger, 63, 
/*5506*/              OPC_CheckType, MVT::i32,
/*5508*/              OPC_MoveParent,
/*5509*/              OPC_MoveParent,
/*5510*/              OPC_MoveParent,
/*5511*/              OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*5514*/              OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*5523*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPGFR), 0,
                          2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 2, 
                      // Src: (xor:i64 (sra:i64 (sext_inreg:i64 GR64:i64:$src, i32:Other), 63:i32), (add:i64 (sext_inreg:i64 GR64:i64:$src, i32:Other), (sra:i64 (sext_inreg:i64 GR64:i64:$src, i32:Other), 63:i32))) - Complexity = 31
                      // Dst: (LPGFR:i64:i32 (EXTRACT_SUBREG:i32 GR64:i64:$src, subreg_32bit:i32))
                    /*SwitchOpcode*/ 62,  TARGET_VAL(ISD::SRA),// ->5597
/*5535*/              OPC_MoveChild, 0,
/*5537*/              OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
/*5540*/              OPC_MoveChild, 0,
/*5542*/              OPC_CheckSame, 0,
/*5544*/              OPC_MoveParent,
/*5545*/              OPC_MoveChild, 1,
/*5547*/              OPC_CheckValueType, MVT::i32,
/*5549*/              OPC_MoveParent,
/*5550*/              OPC_MoveParent,
/*5551*/              OPC_MoveChild, 1,
/*5553*/              OPC_CheckInteger, 63, 
/*5555*/              OPC_CheckType, MVT::i32,
/*5557*/              OPC_MoveParent,
/*5558*/              OPC_MoveParent,
/*5559*/              OPC_MoveChild, 1,
/*5561*/              OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
/*5564*/              OPC_MoveChild, 0,
/*5566*/              OPC_CheckSame, 0,
/*5568*/              OPC_MoveParent,
/*5569*/              OPC_MoveChild, 1,
/*5571*/              OPC_CheckValueType, MVT::i32,
/*5573*/              OPC_MoveParent,
/*5574*/              OPC_MoveParent,
/*5575*/              OPC_MoveParent,
/*5576*/              OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*5579*/              OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*5588*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPGFR), 0,
                          2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 2, 
                      // Src: (xor:i64 (sra:i64 (sext_inreg:i64 GR64:i64:$src, i32:Other), 63:i32), (add:i64 (sra:i64 (sext_inreg:i64 GR64:i64:$src, i32:Other), 63:i32), (sext_inreg:i64 GR64:i64:$src, i32:Other))) - Complexity = 31
                      // Dst: (LPGFR:i64:i32 (EXTRACT_SUBREG:i32 GR64:i64:$src, subreg_32bit:i32))
                    0, // EndSwitchOpcode
                  0, // EndSwitchOpcode
/*5599*/        /*Scope*/ 43|128,1/*171*/, /*->5772*/
/*5601*/          OPC_RecordChild0, // #0 = $R2
/*5602*/          OPC_MoveChild, 1,
/*5604*/          OPC_CheckType, MVT::i32,
/*5606*/          OPC_Scope, 81, /*->5689*/ // 2 children in Scope
/*5608*/            OPC_CheckInteger, 31, 
/*5610*/            OPC_MoveParent,
/*5611*/            OPC_MoveParent,
/*5612*/            OPC_MoveChild, 1,
/*5614*/            OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*5617*/            OPC_MoveChild, 0,
/*5619*/            OPC_Scope, 33, /*->5654*/ // 2 children in Scope
/*5621*/              OPC_CheckSame, 0,
/*5623*/              OPC_MoveParent,
/*5624*/              OPC_MoveChild, 1,
/*5626*/              OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*5629*/              OPC_MoveChild, 0,
/*5631*/              OPC_CheckSame, 0,
/*5633*/              OPC_MoveParent,
/*5634*/              OPC_MoveChild, 1,
/*5636*/              OPC_CheckInteger, 31, 
/*5638*/              OPC_CheckType, MVT::i32,
/*5640*/              OPC_MoveParent,
/*5641*/              OPC_MoveParent,
/*5642*/              OPC_MoveParent,
/*5643*/              OPC_CheckType, MVT::i32,
/*5645*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPR), 0,
                          2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                      // Src: (xor:i32 (sra:i32 GR32:i32:$R2, 31:i32), (add:i32 GR32:i32:$R2, (sra:i32 GR32:i32:$R2, 31:i32))) - Complexity = 22
                      // Dst: (LPR:i32:i32 GR32:i32:$R2)
/*5654*/            /*Scope*/ 33, /*->5688*/
/*5655*/              OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*5658*/              OPC_MoveChild, 0,
/*5660*/              OPC_CheckSame, 0,
/*5662*/              OPC_MoveParent,
/*5663*/              OPC_MoveChild, 1,
/*5665*/              OPC_CheckInteger, 31, 
/*5667*/              OPC_CheckType, MVT::i32,
/*5669*/              OPC_MoveParent,
/*5670*/              OPC_MoveParent,
/*5671*/              OPC_MoveChild, 1,
/*5673*/              OPC_CheckSame, 0,
/*5675*/              OPC_MoveParent,
/*5676*/              OPC_MoveParent,
/*5677*/              OPC_CheckType, MVT::i32,
/*5679*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPR), 0,
                          2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                      // Src: (xor:i32 (sra:i32 GR32:i32:$R2, 31:i32), (add:i32 (sra:i32 GR32:i32:$R2, 31:i32), GR32:i32:$R2)) - Complexity = 22
                      // Dst: (LPR:i32:i32 GR32:i32:$R2)
/*5688*/            0, /*End of Scope*/
/*5689*/          /*Scope*/ 81, /*->5771*/
/*5690*/            OPC_CheckInteger, 63, 
/*5692*/            OPC_MoveParent,
/*5693*/            OPC_MoveParent,
/*5694*/            OPC_MoveChild, 1,
/*5696*/            OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*5699*/            OPC_MoveChild, 0,
/*5701*/            OPC_Scope, 33, /*->5736*/ // 2 children in Scope
/*5703*/              OPC_CheckSame, 0,
/*5705*/              OPC_MoveParent,
/*5706*/              OPC_MoveChild, 1,
/*5708*/              OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*5711*/              OPC_MoveChild, 0,
/*5713*/              OPC_CheckSame, 0,
/*5715*/              OPC_MoveParent,
/*5716*/              OPC_MoveChild, 1,
/*5718*/              OPC_CheckInteger, 63, 
/*5720*/              OPC_CheckType, MVT::i32,
/*5722*/              OPC_MoveParent,
/*5723*/              OPC_MoveParent,
/*5724*/              OPC_MoveParent,
/*5725*/              OPC_CheckType, MVT::i64,
/*5727*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPGR), 0,
                          2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                      // Src: (xor:i64 (sra:i64 GR64:i64:$R2, 63:i32), (add:i64 GR64:i64:$R2, (sra:i64 GR64:i64:$R2, 63:i32))) - Complexity = 22
                      // Dst: (LPGR:i64:i32 GR64:i64:$R2)
/*5736*/            /*Scope*/ 33, /*->5770*/
/*5737*/              OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*5740*/              OPC_MoveChild, 0,
/*5742*/              OPC_CheckSame, 0,
/*5744*/              OPC_MoveParent,
/*5745*/              OPC_MoveChild, 1,
/*5747*/              OPC_CheckInteger, 63, 
/*5749*/              OPC_CheckType, MVT::i32,
/*5751*/              OPC_MoveParent,
/*5752*/              OPC_MoveParent,
/*5753*/              OPC_MoveChild, 1,
/*5755*/              OPC_CheckSame, 0,
/*5757*/              OPC_MoveParent,
/*5758*/              OPC_MoveParent,
/*5759*/              OPC_CheckType, MVT::i64,
/*5761*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPGR), 0,
                          2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                      // Src: (xor:i64 (sra:i64 GR64:i64:$R2, 63:i32), (add:i64 (sra:i64 GR64:i64:$R2, 63:i32), GR64:i64:$R2)) - Complexity = 22
                      // Dst: (LPGR:i64:i32 GR64:i64:$R2)
/*5770*/            0, /*End of Scope*/
/*5771*/          0, /*End of Scope*/
/*5772*/        0, /*End of Scope*/
              0, // EndSwitchOpcode
/*5774*/    /*Scope*/ 75, /*->5850*/
/*5775*/      OPC_RecordChild0, // #0 = $R1src
/*5776*/      OPC_MoveChild, 1,
/*5778*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5781*/      OPC_RecordMemRef,
/*5782*/      OPC_RecordNode, // #1 = 'ld' chained node
/*5783*/      OPC_CheckFoldableChainNode,
/*5784*/      OPC_RecordChild1, // #2 = $XBD2
/*5785*/      OPC_CheckChild1Type, MVT::i64,
/*5787*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5789*/      OPC_CheckPredicate, 13, // Predicate_load
/*5791*/      OPC_MoveParent,
/*5792*/      OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->5831
/*5795*/        OPC_Scope, 16, /*->5813*/ // 2 children in Scope
/*5797*/          OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*5800*/          OPC_EmitMergeInputChains1_1,
/*5801*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::X), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (xor:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (X:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*5813*/        /*Scope*/ 16, /*->5830*/
/*5814*/          OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*5817*/          OPC_EmitMergeInputChains1_1,
/*5818*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::XY), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (xor:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (XY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*5830*/        0, /*End of Scope*/
              /*SwitchType*/ 16,  MVT::i64,// ->5849
/*5833*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*5836*/        OPC_EmitMergeInputChains1_1,
/*5837*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::XG), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (xor:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (XG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
              0, // EndSwitchType
/*5850*/    /*Scope*/ 75, /*->5926*/
/*5851*/      OPC_MoveChild, 0,
/*5853*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5856*/      OPC_RecordMemRef,
/*5857*/      OPC_RecordNode, // #0 = 'ld' chained node
/*5858*/      OPC_CheckFoldableChainNode,
/*5859*/      OPC_RecordChild1, // #1 = $XBD2
/*5860*/      OPC_CheckChild1Type, MVT::i64,
/*5862*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5864*/      OPC_CheckPredicate, 13, // Predicate_load
/*5866*/      OPC_MoveParent,
/*5867*/      OPC_RecordChild1, // #2 = $R1src
/*5868*/      OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->5907
/*5871*/        OPC_Scope, 16, /*->5889*/ // 2 children in Scope
/*5873*/          OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*5876*/          OPC_EmitMergeInputChains1_0,
/*5877*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::X), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (xor:i32 (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (X:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*5889*/        /*Scope*/ 16, /*->5906*/
/*5890*/          OPC_CheckComplexPat, /*CP*/8, /*#*/1, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*5893*/          OPC_EmitMergeInputChains1_0,
/*5894*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::XY), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (xor:i32 (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (XY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*5906*/        0, /*End of Scope*/
              /*SwitchType*/ 16,  MVT::i64,// ->5925
/*5909*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*5912*/        OPC_EmitMergeInputChains1_0,
/*5913*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::XG), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (xor:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$R1src) - Complexity = 19
                // Dst: (XG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
              0, // EndSwitchType
/*5926*/    /*Scope*/ 99, /*->6026*/
/*5927*/      OPC_RecordChild0, // #0 = $R1src
/*5928*/      OPC_RecordChild1, // #1 = $I2
/*5929*/      OPC_Scope, 68, /*->5999*/ // 3 children in Scope
/*5931*/        OPC_MoveChild, 1,
/*5933*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5936*/        OPC_Scope, 20, /*->5958*/ // 3 children in Scope
/*5938*/          OPC_CheckPredicate, 43, // Predicate_imm64lf32
/*5940*/          OPC_MoveParent,
/*5941*/          OPC_CheckType, MVT::i64,
/*5943*/          OPC_EmitConvertToTarget, 1,
/*5945*/          OPC_EmitNodeXForm, 3, 2, // LF32
/*5948*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::XILF), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (xor:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64lf32>><<X:LF32>>:$I2) - Complexity = 7
                  // Dst: (XILF:i64:i32 GR64:i64:$R1src, (LF32:i64 (imm:i64):$I2))
/*5958*/        /*Scope*/ 20, /*->5979*/
/*5959*/          OPC_CheckPredicate, 44, // Predicate_imm64hf32
/*5961*/          OPC_MoveParent,
/*5962*/          OPC_CheckType, MVT::i64,
/*5964*/          OPC_EmitConvertToTarget, 1,
/*5966*/          OPC_EmitNodeXForm, 4, 2, // HF32
/*5969*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::XIHF), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (xor:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64hf32>><<X:HF32>>:$I2) - Complexity = 7
                  // Dst: (XIHF:i64:i32 GR64:i64:$R1src, (HF32:i64 (imm:i64):$I2))
/*5979*/        /*Scope*/ 18, /*->5998*/
/*5980*/          OPC_MoveParent,
/*5981*/          OPC_CheckType, MVT::i32,
/*5983*/          OPC_EmitConvertToTarget, 1,
/*5985*/          OPC_EmitNodeXForm, 5, 2, // UIMM32
/*5988*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::XILF32), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (xor:i32 GR32:i32:$R1src, (imm:i32)<<X:UIMM32>>:$I2) - Complexity = 6
                  // Dst: (XILF32:i32:i32 GR32:i32:$R1src, (UIMM32:i32 (imm:i32):$I2))
/*5998*/        0, /*End of Scope*/
/*5999*/      /*Scope*/ 12, /*->6012*/
/*6000*/        OPC_CheckType, MVT::i32,
/*6002*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::XR), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i32 GR32:i32:$R1src, GR32:i32:$R2) - Complexity = 3
                // Dst: (XR:i32:i32 GR32:i32:$R1src, GR32:i32:$R2)
/*6012*/      /*Scope*/ 12, /*->6025*/
/*6013*/        OPC_CheckType, MVT::i64,
/*6015*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::XGR), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i64 GR64:i64:$R1src, GR64:i64:$R2) - Complexity = 3
                // Dst: (XGR:i64:i32 GR64:i64:$R1src, GR64:i64:$R2)
/*6025*/      0, /*End of Scope*/
/*6026*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 66|128,12/*1602*/,  TARGET_VAL(ISD::OR),// ->7633
/*6031*/    OPC_Scope, 88|128,1/*216*/, /*->6250*/ // 20 children in Scope
/*6034*/      OPC_MoveChild, 0,
/*6036*/      OPC_Scope, 105, /*->6143*/ // 2 children in Scope
/*6038*/        OPC_CheckAndImm, 0|128,126|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551360*/, 
/*6049*/        OPC_RecordChild0, // #0 = $R1src
/*6050*/        OPC_MoveParent,
/*6051*/        OPC_MoveChild, 1,
/*6053*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6056*/        OPC_RecordMemRef,
/*6057*/        OPC_RecordNode, // #1 = 'ld' chained node
/*6058*/        OPC_CheckFoldableChainNode,
/*6059*/        OPC_RecordChild1, // #2 = $XBD2
/*6060*/        OPC_CheckChild1Type, MVT::i64,
/*6062*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6064*/        OPC_CheckPredicate, 41, // Predicate_zextload
/*6066*/        OPC_CheckPredicate, 45, // Predicate_zextloadi8
/*6068*/        OPC_MoveParent,
/*6069*/        OPC_SwitchType /*2 cases */, 34,  MVT::i32,// ->6106
/*6072*/          OPC_Scope, 15, /*->6089*/ // 2 children in Scope
/*6074*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*6077*/            OPC_EmitMergeInputChains1_1,
/*6078*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (or:i32 (and:i32 GR32:i32:$R1src, -256:i32), (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>) - Complexity = 27
                    // Dst: (IC32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*6089*/          /*Scope*/ 15, /*->6105*/
/*6090*/            OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*6093*/            OPC_EmitMergeInputChains1_1,
/*6094*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32Y), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (or:i32 (and:i32 GR32:i32:$R1src, -256:i32), (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>) - Complexity = 27
                    // Dst: (IC32Y:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*6105*/          0, /*End of Scope*/
                /*SwitchType*/ 34,  MVT::i64,// ->6142
/*6108*/          OPC_Scope, 15, /*->6125*/ // 2 children in Scope
/*6110*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*6113*/            OPC_EmitMergeInputChains1_1,
/*6114*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (or:i64 (and:i64 GR64:i64:$R1src, -256:i64), (ld:i64 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>) - Complexity = 27
                    // Dst: (IC:i64 GR64:i64:$R1src, bdxaddr12pair:i64:$XBD2)
/*6125*/          /*Scope*/ 15, /*->6141*/
/*6126*/            OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*6129*/            OPC_EmitMergeInputChains1_1,
/*6130*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::ICY), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (or:i64 (and:i64 GR64:i64:$R1src, -256:i64), (ld:i64 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>) - Complexity = 27
                    // Dst: (ICY:i64 GR64:i64:$R1src, bdxaddr20pair:i64:$XBD2)
/*6141*/          0, /*End of Scope*/
                0, // EndSwitchType
/*6143*/      /*Scope*/ 105, /*->6249*/
/*6144*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6147*/        OPC_RecordMemRef,
/*6148*/        OPC_RecordNode, // #0 = 'ld' chained node
/*6149*/        OPC_CheckFoldableChainNode,
/*6150*/        OPC_RecordChild1, // #1 = $XBD2
/*6151*/        OPC_CheckChild1Type, MVT::i64,
/*6153*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6155*/        OPC_CheckPredicate, 41, // Predicate_zextload
/*6157*/        OPC_CheckPredicate, 45, // Predicate_zextloadi8
/*6159*/        OPC_MoveParent,
/*6160*/        OPC_MoveChild, 1,
/*6162*/        OPC_CheckAndImm, 0|128,126|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551360*/, 
/*6173*/        OPC_RecordChild0, // #2 = $R1src
/*6174*/        OPC_MoveParent,
/*6175*/        OPC_SwitchType /*2 cases */, 34,  MVT::i32,// ->6212
/*6178*/          OPC_Scope, 15, /*->6195*/ // 2 children in Scope
/*6180*/            OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*6183*/            OPC_EmitMergeInputChains1_0,
/*6184*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (or:i32 (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (and:i32 GR32:i32:$R1src, -256:i32)) - Complexity = 27
                    // Dst: (IC32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*6195*/          /*Scope*/ 15, /*->6211*/
/*6196*/            OPC_CheckComplexPat, /*CP*/8, /*#*/1, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*6199*/            OPC_EmitMergeInputChains1_0,
/*6200*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32Y), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (or:i32 (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (and:i32 GR32:i32:$R1src, -256:i32)) - Complexity = 27
                    // Dst: (IC32Y:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*6211*/          0, /*End of Scope*/
                /*SwitchType*/ 34,  MVT::i64,// ->6248
/*6214*/          OPC_Scope, 15, /*->6231*/ // 2 children in Scope
/*6216*/            OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*6219*/            OPC_EmitMergeInputChains1_0,
/*6220*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (or:i64 (ld:i64 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (and:i64 GR64:i64:$R1src, -256:i64)) - Complexity = 27
                    // Dst: (IC:i64 GR64:i64:$R1src, bdxaddr12pair:i64:$XBD2)
/*6231*/          /*Scope*/ 15, /*->6247*/
/*6232*/            OPC_CheckComplexPat, /*CP*/8, /*#*/1, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*6235*/            OPC_EmitMergeInputChains1_0,
/*6236*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::ICY), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (or:i64 (ld:i64 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (and:i64 GR64:i64:$R1src, -256:i64)) - Complexity = 27
                    // Dst: (ICY:i64 GR64:i64:$R1src, bdxaddr20pair:i64:$XBD2)
/*6247*/          0, /*End of Scope*/
                0, // EndSwitchType
/*6249*/      0, /*End of Scope*/
/*6250*/    /*Scope*/ 38, /*->6289*/
/*6251*/      OPC_RecordChild0, // #0 = $src1
/*6252*/      OPC_MoveChild, 1,
/*6254*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6257*/      OPC_RecordMemRef,
/*6258*/      OPC_RecordNode, // #1 = 'ld' chained node
/*6259*/      OPC_CheckFoldableChainNode,
/*6260*/      OPC_RecordChild1, // #2 = $src2
/*6261*/      OPC_CheckChild1Type, MVT::i64,
/*6263*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6265*/      OPC_CheckPredicate, 41, // Predicate_zextload
/*6267*/      OPC_CheckPredicate, 45, // Predicate_zextloadi8
/*6269*/      OPC_MoveParent,
/*6270*/      OPC_CheckPredicate, 46, // Predicate_or_as_inserti8
/*6272*/      OPC_CheckType, MVT::i32,
/*6274*/      OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*6277*/      OPC_EmitMergeInputChains1_1,
/*6278*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (or:i32 GR32:i32:$src1, (ld:i32 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>)<<P:Predicate_or_as_inserti8>> - Complexity = 20
              // Dst: (IC32:i32 GR32:i32:$src1, bdxaddr12pair:i64:$src2)
/*6289*/    /*Scope*/ 38, /*->6328*/
/*6290*/      OPC_MoveChild, 0,
/*6292*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6295*/      OPC_RecordMemRef,
/*6296*/      OPC_RecordNode, // #0 = 'ld' chained node
/*6297*/      OPC_CheckFoldableChainNode,
/*6298*/      OPC_RecordChild1, // #1 = $src2
/*6299*/      OPC_CheckChild1Type, MVT::i64,
/*6301*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6303*/      OPC_CheckPredicate, 41, // Predicate_zextload
/*6305*/      OPC_CheckPredicate, 45, // Predicate_zextloadi8
/*6307*/      OPC_MoveParent,
/*6308*/      OPC_RecordChild1, // #2 = $src1
/*6309*/      OPC_CheckPredicate, 47, // Predicate_or_as_revinserti8
/*6311*/      OPC_CheckType, MVT::i32,
/*6313*/      OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*6316*/      OPC_EmitMergeInputChains1_0,
/*6317*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (or:i32 (ld:i32 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, GR32:i32:$src1)<<P:Predicate_or_as_revinserti8>> - Complexity = 20
              // Dst: (IC32:i32 GR32:i32:$src1, bdxaddr12pair:i64:$src2)
/*6328*/    /*Scope*/ 38, /*->6367*/
/*6329*/      OPC_RecordChild0, // #0 = $src1
/*6330*/      OPC_MoveChild, 1,
/*6332*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6335*/      OPC_RecordMemRef,
/*6336*/      OPC_RecordNode, // #1 = 'ld' chained node
/*6337*/      OPC_CheckFoldableChainNode,
/*6338*/      OPC_RecordChild1, // #2 = $src2
/*6339*/      OPC_CheckChild1Type, MVT::i64,
/*6341*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6343*/      OPC_CheckPredicate, 41, // Predicate_zextload
/*6345*/      OPC_CheckPredicate, 45, // Predicate_zextloadi8
/*6347*/      OPC_MoveParent,
/*6348*/      OPC_CheckPredicate, 46, // Predicate_or_as_inserti8
/*6350*/      OPC_CheckType, MVT::i32,
/*6352*/      OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*6355*/      OPC_EmitMergeInputChains1_1,
/*6356*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32Y), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (or:i32 GR32:i32:$src1, (ld:i32 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>)<<P:Predicate_or_as_inserti8>> - Complexity = 20
              // Dst: (IC32Y:i32 GR32:i32:$src1, bdxaddr20pair:i64:$src2)
/*6367*/    /*Scope*/ 38, /*->6406*/
/*6368*/      OPC_MoveChild, 0,
/*6370*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6373*/      OPC_RecordMemRef,
/*6374*/      OPC_RecordNode, // #0 = 'ld' chained node
/*6375*/      OPC_CheckFoldableChainNode,
/*6376*/      OPC_RecordChild1, // #1 = $src2
/*6377*/      OPC_CheckChild1Type, MVT::i64,
/*6379*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6381*/      OPC_CheckPredicate, 41, // Predicate_zextload
/*6383*/      OPC_CheckPredicate, 45, // Predicate_zextloadi8
/*6385*/      OPC_MoveParent,
/*6386*/      OPC_RecordChild1, // #2 = $src1
/*6387*/      OPC_CheckPredicate, 47, // Predicate_or_as_revinserti8
/*6389*/      OPC_CheckType, MVT::i32,
/*6391*/      OPC_CheckComplexPat, /*CP*/8, /*#*/1, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*6394*/      OPC_EmitMergeInputChains1_0,
/*6395*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32Y), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (or:i32 (ld:i32 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, GR32:i32:$src1)<<P:Predicate_or_as_revinserti8>> - Complexity = 20
              // Dst: (IC32Y:i32 GR32:i32:$src1, bdxaddr20pair:i64:$src2)
/*6406*/    /*Scope*/ 38, /*->6445*/
/*6407*/      OPC_RecordChild0, // #0 = $src1
/*6408*/      OPC_MoveChild, 1,
/*6410*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6413*/      OPC_RecordMemRef,
/*6414*/      OPC_RecordNode, // #1 = 'ld' chained node
/*6415*/      OPC_CheckFoldableChainNode,
/*6416*/      OPC_RecordChild1, // #2 = $src2
/*6417*/      OPC_CheckChild1Type, MVT::i64,
/*6419*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6421*/      OPC_CheckPredicate, 41, // Predicate_zextload
/*6423*/      OPC_CheckPredicate, 45, // Predicate_zextloadi8
/*6425*/      OPC_MoveParent,
/*6426*/      OPC_CheckPredicate, 46, // Predicate_or_as_inserti8
/*6428*/      OPC_CheckType, MVT::i64,
/*6430*/      OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*6433*/      OPC_EmitMergeInputChains1_1,
/*6434*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (or:i64 GR64:i64:$src1, (ld:i64 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>)<<P:Predicate_or_as_inserti8>> - Complexity = 20
              // Dst: (IC:i64 GR64:i64:$src1, bdxaddr12pair:i64:$src2)
/*6445*/    /*Scope*/ 38, /*->6484*/
/*6446*/      OPC_MoveChild, 0,
/*6448*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6451*/      OPC_RecordMemRef,
/*6452*/      OPC_RecordNode, // #0 = 'ld' chained node
/*6453*/      OPC_CheckFoldableChainNode,
/*6454*/      OPC_RecordChild1, // #1 = $src2
/*6455*/      OPC_CheckChild1Type, MVT::i64,
/*6457*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6459*/      OPC_CheckPredicate, 41, // Predicate_zextload
/*6461*/      OPC_CheckPredicate, 45, // Predicate_zextloadi8
/*6463*/      OPC_MoveParent,
/*6464*/      OPC_RecordChild1, // #2 = $src1
/*6465*/      OPC_CheckPredicate, 47, // Predicate_or_as_revinserti8
/*6467*/      OPC_CheckType, MVT::i64,
/*6469*/      OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*6472*/      OPC_EmitMergeInputChains1_0,
/*6473*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (or:i64 (ld:i64 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, GR64:i64:$src1)<<P:Predicate_or_as_revinserti8>> - Complexity = 20
              // Dst: (IC:i64 GR64:i64:$src1, bdxaddr12pair:i64:$src2)
/*6484*/    /*Scope*/ 38, /*->6523*/
/*6485*/      OPC_RecordChild0, // #0 = $src1
/*6486*/      OPC_MoveChild, 1,
/*6488*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6491*/      OPC_RecordMemRef,
/*6492*/      OPC_RecordNode, // #1 = 'ld' chained node
/*6493*/      OPC_CheckFoldableChainNode,
/*6494*/      OPC_RecordChild1, // #2 = $src2
/*6495*/      OPC_CheckChild1Type, MVT::i64,
/*6497*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6499*/      OPC_CheckPredicate, 41, // Predicate_zextload
/*6501*/      OPC_CheckPredicate, 45, // Predicate_zextloadi8
/*6503*/      OPC_MoveParent,
/*6504*/      OPC_CheckPredicate, 46, // Predicate_or_as_inserti8
/*6506*/      OPC_CheckType, MVT::i64,
/*6508*/      OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*6511*/      OPC_EmitMergeInputChains1_1,
/*6512*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ICY), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (or:i64 GR64:i64:$src1, (ld:i64 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>)<<P:Predicate_or_as_inserti8>> - Complexity = 20
              // Dst: (ICY:i64 GR64:i64:$src1, bdxaddr20pair:i64:$src2)
/*6523*/    /*Scope*/ 59, /*->6583*/
/*6524*/      OPC_MoveChild, 0,
/*6526*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6529*/      OPC_RecordMemRef,
/*6530*/      OPC_RecordNode, // #0 = 'ld' chained node
/*6531*/      OPC_CheckFoldableChainNode,
/*6532*/      OPC_RecordChild1, // #1 = $src2
/*6533*/      OPC_CheckChild1Type, MVT::i64,
/*6535*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6537*/      OPC_CheckPredicate, 41, // Predicate_zextload
/*6539*/      OPC_CheckPredicate, 45, // Predicate_zextloadi8
/*6541*/      OPC_MoveParent,
/*6542*/      OPC_RecordChild1, // #2 = $src1
/*6543*/      OPC_SwitchType /*2 cases */, 17,  MVT::i64,// ->6563
/*6546*/        OPC_CheckPredicate, 47, // Predicate_or_as_revinserti8
/*6548*/        OPC_CheckComplexPat, /*CP*/8, /*#*/1, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*6551*/        OPC_EmitMergeInputChains1_0,
/*6552*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ICY), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (or:i64 (ld:i64 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, GR64:i64:$src1)<<P:Predicate_or_as_revinserti8>> - Complexity = 20
                // Dst: (ICY:i64 GR64:i64:$src1, bdxaddr20pair:i64:$src2)
              /*SwitchType*/ 17,  MVT::i32,// ->6582
/*6565*/        OPC_CheckPredicate, 46, // Predicate_or_as_inserti8
/*6567*/        OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*6570*/        OPC_EmitMergeInputChains1_0,
/*6571*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (or:i32 (ld:i32 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, GR32:i32:$src1)<<P:Predicate_or_as_inserti8>> - Complexity = 20
                // Dst: (IC32:i32 GR32:i32:$src1, bdxaddr12pair:i64:$src2)
              0, // EndSwitchType
/*6583*/    /*Scope*/ 38, /*->6622*/
/*6584*/      OPC_RecordChild0, // #0 = $src1
/*6585*/      OPC_MoveChild, 1,
/*6587*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6590*/      OPC_RecordMemRef,
/*6591*/      OPC_RecordNode, // #1 = 'ld' chained node
/*6592*/      OPC_CheckFoldableChainNode,
/*6593*/      OPC_RecordChild1, // #2 = $src2
/*6594*/      OPC_CheckChild1Type, MVT::i64,
/*6596*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6598*/      OPC_CheckPredicate, 41, // Predicate_zextload
/*6600*/      OPC_CheckPredicate, 45, // Predicate_zextloadi8
/*6602*/      OPC_MoveParent,
/*6603*/      OPC_CheckPredicate, 47, // Predicate_or_as_revinserti8
/*6605*/      OPC_CheckType, MVT::i32,
/*6607*/      OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*6610*/      OPC_EmitMergeInputChains1_1,
/*6611*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (or:i32 GR32:i32:$src1, (ld:i32 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>)<<P:Predicate_or_as_revinserti8>> - Complexity = 20
              // Dst: (IC32:i32 GR32:i32:$src1, bdxaddr12pair:i64:$src2)
/*6622*/    /*Scope*/ 38, /*->6661*/
/*6623*/      OPC_MoveChild, 0,
/*6625*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6628*/      OPC_RecordMemRef,
/*6629*/      OPC_RecordNode, // #0 = 'ld' chained node
/*6630*/      OPC_CheckFoldableChainNode,
/*6631*/      OPC_RecordChild1, // #1 = $src2
/*6632*/      OPC_CheckChild1Type, MVT::i64,
/*6634*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6636*/      OPC_CheckPredicate, 41, // Predicate_zextload
/*6638*/      OPC_CheckPredicate, 45, // Predicate_zextloadi8
/*6640*/      OPC_MoveParent,
/*6641*/      OPC_RecordChild1, // #2 = $src1
/*6642*/      OPC_CheckPredicate, 46, // Predicate_or_as_inserti8
/*6644*/      OPC_CheckType, MVT::i32,
/*6646*/      OPC_CheckComplexPat, /*CP*/8, /*#*/1, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*6649*/      OPC_EmitMergeInputChains1_0,
/*6650*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32Y), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (or:i32 (ld:i32 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, GR32:i32:$src1)<<P:Predicate_or_as_inserti8>> - Complexity = 20
              // Dst: (IC32Y:i32 GR32:i32:$src1, bdxaddr20pair:i64:$src2)
/*6661*/    /*Scope*/ 38, /*->6700*/
/*6662*/      OPC_RecordChild0, // #0 = $src1
/*6663*/      OPC_MoveChild, 1,
/*6665*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6668*/      OPC_RecordMemRef,
/*6669*/      OPC_RecordNode, // #1 = 'ld' chained node
/*6670*/      OPC_CheckFoldableChainNode,
/*6671*/      OPC_RecordChild1, // #2 = $src2
/*6672*/      OPC_CheckChild1Type, MVT::i64,
/*6674*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6676*/      OPC_CheckPredicate, 41, // Predicate_zextload
/*6678*/      OPC_CheckPredicate, 45, // Predicate_zextloadi8
/*6680*/      OPC_MoveParent,
/*6681*/      OPC_CheckPredicate, 47, // Predicate_or_as_revinserti8
/*6683*/      OPC_CheckType, MVT::i32,
/*6685*/      OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*6688*/      OPC_EmitMergeInputChains1_1,
/*6689*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32Y), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (or:i32 GR32:i32:$src1, (ld:i32 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>)<<P:Predicate_or_as_revinserti8>> - Complexity = 20
              // Dst: (IC32Y:i32 GR32:i32:$src1, bdxaddr20pair:i64:$src2)
/*6700*/    /*Scope*/ 38, /*->6739*/
/*6701*/      OPC_MoveChild, 0,
/*6703*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6706*/      OPC_RecordMemRef,
/*6707*/      OPC_RecordNode, // #0 = 'ld' chained node
/*6708*/      OPC_CheckFoldableChainNode,
/*6709*/      OPC_RecordChild1, // #1 = $src2
/*6710*/      OPC_CheckChild1Type, MVT::i64,
/*6712*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6714*/      OPC_CheckPredicate, 41, // Predicate_zextload
/*6716*/      OPC_CheckPredicate, 45, // Predicate_zextloadi8
/*6718*/      OPC_MoveParent,
/*6719*/      OPC_RecordChild1, // #2 = $src1
/*6720*/      OPC_CheckPredicate, 46, // Predicate_or_as_inserti8
/*6722*/      OPC_CheckType, MVT::i64,
/*6724*/      OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*6727*/      OPC_EmitMergeInputChains1_0,
/*6728*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (or:i64 (ld:i64 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, GR64:i64:$src1)<<P:Predicate_or_as_inserti8>> - Complexity = 20
              // Dst: (IC:i64 GR64:i64:$src1, bdxaddr12pair:i64:$src2)
/*6739*/    /*Scope*/ 38, /*->6778*/
/*6740*/      OPC_RecordChild0, // #0 = $src1
/*6741*/      OPC_MoveChild, 1,
/*6743*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6746*/      OPC_RecordMemRef,
/*6747*/      OPC_RecordNode, // #1 = 'ld' chained node
/*6748*/      OPC_CheckFoldableChainNode,
/*6749*/      OPC_RecordChild1, // #2 = $src2
/*6750*/      OPC_CheckChild1Type, MVT::i64,
/*6752*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6754*/      OPC_CheckPredicate, 41, // Predicate_zextload
/*6756*/      OPC_CheckPredicate, 45, // Predicate_zextloadi8
/*6758*/      OPC_MoveParent,
/*6759*/      OPC_CheckPredicate, 47, // Predicate_or_as_revinserti8
/*6761*/      OPC_CheckType, MVT::i64,
/*6763*/      OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*6766*/      OPC_EmitMergeInputChains1_1,
/*6767*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (or:i64 GR64:i64:$src1, (ld:i64 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>)<<P:Predicate_or_as_revinserti8>> - Complexity = 20
              // Dst: (IC:i64 GR64:i64:$src1, bdxaddr12pair:i64:$src2)
/*6778*/    /*Scope*/ 38, /*->6817*/
/*6779*/      OPC_MoveChild, 0,
/*6781*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6784*/      OPC_RecordMemRef,
/*6785*/      OPC_RecordNode, // #0 = 'ld' chained node
/*6786*/      OPC_CheckFoldableChainNode,
/*6787*/      OPC_RecordChild1, // #1 = $src2
/*6788*/      OPC_CheckChild1Type, MVT::i64,
/*6790*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6792*/      OPC_CheckPredicate, 41, // Predicate_zextload
/*6794*/      OPC_CheckPredicate, 45, // Predicate_zextloadi8
/*6796*/      OPC_MoveParent,
/*6797*/      OPC_RecordChild1, // #2 = $src1
/*6798*/      OPC_CheckPredicate, 46, // Predicate_or_as_inserti8
/*6800*/      OPC_CheckType, MVT::i64,
/*6802*/      OPC_CheckComplexPat, /*CP*/8, /*#*/1, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*6805*/      OPC_EmitMergeInputChains1_0,
/*6806*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ICY), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (or:i64 (ld:i64 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, GR64:i64:$src1)<<P:Predicate_or_as_inserti8>> - Complexity = 20
              // Dst: (ICY:i64 GR64:i64:$src1, bdxaddr20pair:i64:$src2)
/*6817*/    /*Scope*/ 103, /*->6921*/
/*6818*/      OPC_RecordChild0, // #0 = $src1
/*6819*/      OPC_MoveChild, 1,
/*6821*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6824*/      OPC_RecordMemRef,
/*6825*/      OPC_RecordNode, // #1 = 'ld' chained node
/*6826*/      OPC_CheckFoldableChainNode,
/*6827*/      OPC_RecordChild1, // #2 = $src2
/*6828*/      OPC_CheckChild1Type, MVT::i64,
/*6830*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6832*/      OPC_Scope, 24, /*->6858*/ // 2 children in Scope
/*6834*/        OPC_CheckPredicate, 41, // Predicate_zextload
/*6836*/        OPC_CheckPredicate, 45, // Predicate_zextloadi8
/*6838*/        OPC_MoveParent,
/*6839*/        OPC_CheckPredicate, 47, // Predicate_or_as_revinserti8
/*6841*/        OPC_CheckType, MVT::i64,
/*6843*/        OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*6846*/        OPC_EmitMergeInputChains1_1,
/*6847*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ICY), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (or:i64 GR64:i64:$src1, (ld:i64 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>)<<P:Predicate_or_as_revinserti8>> - Complexity = 20
                // Dst: (ICY:i64 GR64:i64:$src1, bdxaddr20pair:i64:$src2)
/*6858*/      /*Scope*/ 61, /*->6920*/
/*6859*/        OPC_CheckPredicate, 13, // Predicate_load
/*6861*/        OPC_MoveParent,
/*6862*/        OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->6901
/*6865*/          OPC_Scope, 16, /*->6883*/ // 2 children in Scope
/*6867*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*6870*/            OPC_EmitMergeInputChains1_1,
/*6871*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::O), 0|OPFL_Chain|OPFL_MemRefs,
                        2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (or:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                    // Dst: (O:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*6883*/          /*Scope*/ 16, /*->6900*/
/*6884*/            OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*6887*/            OPC_EmitMergeInputChains1_1,
/*6888*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OY), 0|OPFL_Chain|OPFL_MemRefs,
                        2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (or:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                    // Dst: (OY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*6900*/          0, /*End of Scope*/
                /*SwitchType*/ 16,  MVT::i64,// ->6919
/*6903*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*6906*/          OPC_EmitMergeInputChains1_1,
/*6907*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OG), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (or:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (OG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
                0, // EndSwitchType
/*6920*/      0, /*End of Scope*/
/*6921*/    /*Scope*/ 126|128,2/*382*/, /*->7305*/
/*6923*/      OPC_MoveChild, 0,
/*6925*/      OPC_Scope, 73, /*->7000*/ // 9 children in Scope
/*6927*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6930*/        OPC_RecordMemRef,
/*6931*/        OPC_RecordNode, // #0 = 'ld' chained node
/*6932*/        OPC_CheckFoldableChainNode,
/*6933*/        OPC_RecordChild1, // #1 = $XBD2
/*6934*/        OPC_CheckChild1Type, MVT::i64,
/*6936*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6938*/        OPC_CheckPredicate, 13, // Predicate_load
/*6940*/        OPC_MoveParent,
/*6941*/        OPC_RecordChild1, // #2 = $R1src
/*6942*/        OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->6981
/*6945*/          OPC_Scope, 16, /*->6963*/ // 2 children in Scope
/*6947*/            OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*6950*/            OPC_EmitMergeInputChains1_0,
/*6951*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::O), 0|OPFL_Chain|OPFL_MemRefs,
                        2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (or:i32 (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                    // Dst: (O:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*6963*/          /*Scope*/ 16, /*->6980*/
/*6964*/            OPC_CheckComplexPat, /*CP*/8, /*#*/1, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*6967*/            OPC_EmitMergeInputChains1_0,
/*6968*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OY), 0|OPFL_Chain|OPFL_MemRefs,
                        2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (or:i32 (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                    // Dst: (OY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*6980*/          0, /*End of Scope*/
                /*SwitchType*/ 16,  MVT::i64,// ->6999
/*6983*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*6986*/          OPC_EmitMergeInputChains1_0,
/*6987*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OG), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (or:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$R1src) - Complexity = 19
                  // Dst: (OG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
                0, // EndSwitchType
/*7000*/      /*Scope*/ 38, /*->7039*/
/*7001*/        OPC_CheckAndImm, 0|128,0|128,124|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709486080*/, 
/*7012*/        OPC_RecordChild0, // #0 = $R1src
/*7013*/        OPC_MoveParent,
/*7014*/        OPC_RecordChild1, // #1 = $I2
/*7015*/        OPC_MoveChild, 1,
/*7017*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7020*/        OPC_CheckPredicate, 48, // Predicate_imm32ll16
/*7022*/        OPC_MoveParent,
/*7023*/        OPC_CheckType, MVT::i32,
/*7025*/        OPC_EmitConvertToTarget, 1,
/*7027*/        OPC_EmitNodeXForm, 6, 2, // LL16
/*7030*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::IILL32), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (or:i32 (and:i32 GR32:i32:$R1src, -65536:i32), (imm:i32)<<P:Predicate_imm32ll16>><<X:LL16>>:$I2) - Complexity = 15
                // Dst: (IILL32:i32 GR32:i32:$R1src, (LL16:i32 (imm:i32):$I2))
/*7039*/      /*Scope*/ 38, /*->7078*/
/*7040*/        OPC_CheckAndImm, 127|128,127|128,3|128,0|128,112|128,127|128,127|128,127|128,127|128,1/*18446744069414649855*/, 
/*7051*/        OPC_RecordChild0, // #0 = $R1src
/*7052*/        OPC_MoveParent,
/*7053*/        OPC_RecordChild1, // #1 = $I2
/*7054*/        OPC_MoveChild, 1,
/*7056*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7059*/        OPC_CheckPredicate, 49, // Predicate_imm32lh16
/*7061*/        OPC_MoveParent,
/*7062*/        OPC_CheckType, MVT::i32,
/*7064*/        OPC_EmitConvertToTarget, 1,
/*7066*/        OPC_EmitNodeXForm, 7, 2, // LH16
/*7069*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::IILH32), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (or:i32 (and:i32 GR32:i32:$R1src, -4294901761:i32), (imm:i32)<<P:Predicate_imm32lh16>><<X:LH16>>:$I2) - Complexity = 15
                // Dst: (IILH32:i32 GR32:i32:$R1src, (LH16:i32 (imm:i32):$I2))
/*7078*/      /*Scope*/ 38, /*->7117*/
/*7079*/        OPC_CheckAndImm, 0|128,0|128,124|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709486080*/, 
/*7090*/        OPC_RecordChild0, // #0 = $R1src
/*7091*/        OPC_MoveParent,
/*7092*/        OPC_RecordChild1, // #1 = $I2
/*7093*/        OPC_MoveChild, 1,
/*7095*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7098*/        OPC_CheckPredicate, 50, // Predicate_imm64ll16
/*7100*/        OPC_MoveParent,
/*7101*/        OPC_CheckType, MVT::i64,
/*7103*/        OPC_EmitConvertToTarget, 1,
/*7105*/        OPC_EmitNodeXForm, 6, 2, // LL16
/*7108*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::IILL), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (or:i64 (and:i64 GR64:i64:$R1src, -65536:i64), (imm:i64)<<P:Predicate_imm64ll16>><<X:LL16>>:$I2) - Complexity = 15
                // Dst: (IILL:i64 GR64:i64:$R1src, (LL16:i64 (imm:i64):$I2))
/*7117*/      /*Scope*/ 38, /*->7156*/
/*7118*/        OPC_CheckAndImm, 127|128,127|128,3|128,0|128,112|128,127|128,127|128,127|128,127|128,1/*18446744069414649855*/, 
/*7129*/        OPC_RecordChild0, // #0 = $R1src
/*7130*/        OPC_MoveParent,
/*7131*/        OPC_RecordChild1, // #1 = $I2
/*7132*/        OPC_MoveChild, 1,
/*7134*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7137*/        OPC_CheckPredicate, 51, // Predicate_imm64lh16
/*7139*/        OPC_MoveParent,
/*7140*/        OPC_CheckType, MVT::i64,
/*7142*/        OPC_EmitConvertToTarget, 1,
/*7144*/        OPC_EmitNodeXForm, 7, 2, // LH16
/*7147*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::IILH), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (or:i64 (and:i64 GR64:i64:$R1src, -4294901761:i64), (imm:i64)<<P:Predicate_imm64lh16>><<X:LH16>>:$I2) - Complexity = 15
                // Dst: (IILH:i64 GR64:i64:$R1src, (LH16:i64 (imm:i64):$I2))
/*7156*/      /*Scope*/ 38, /*->7195*/
/*7157*/        OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15|128,0|128,64|128,127|128,127|128,1/*18446462603027808255*/, 
/*7168*/        OPC_RecordChild0, // #0 = $R1src
/*7169*/        OPC_MoveParent,
/*7170*/        OPC_RecordChild1, // #1 = $I2
/*7171*/        OPC_MoveChild, 1,
/*7173*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7176*/        OPC_CheckPredicate, 52, // Predicate_imm64hl16
/*7178*/        OPC_MoveParent,
/*7179*/        OPC_CheckType, MVT::i64,
/*7181*/        OPC_EmitConvertToTarget, 1,
/*7183*/        OPC_EmitNodeXForm, 8, 2, // HL16
/*7186*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::IIHL), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (or:i64 (and:i64 GR64:i64:$R1src, -281470681743361:i64), (imm:i64)<<P:Predicate_imm64hl16>><<X:HL16>>:$I2) - Complexity = 15
                // Dst: (IIHL:i64 GR64:i64:$R1src, (HL16:i64 (imm:i64):$I2))
/*7195*/      /*Scope*/ 35, /*->7231*/
/*7196*/        OPC_CheckAndImm, 127|128,127|128,127|128,127|128,127|128,127|128,63/*281474976710655*/, 
/*7204*/        OPC_RecordChild0, // #0 = $R1src
/*7205*/        OPC_MoveParent,
/*7206*/        OPC_RecordChild1, // #1 = $I2
/*7207*/        OPC_MoveChild, 1,
/*7209*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7212*/        OPC_CheckPredicate, 53, // Predicate_imm64hh16
/*7214*/        OPC_MoveParent,
/*7215*/        OPC_CheckType, MVT::i64,
/*7217*/        OPC_EmitConvertToTarget, 1,
/*7219*/        OPC_EmitNodeXForm, 9, 2, // HH16
/*7222*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::IIHH), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (or:i64 (and:i64 GR64:i64:$R1src, 281474976710655:i64), (imm:i64)<<P:Predicate_imm64hh16>><<X:HH16>>:$I2) - Complexity = 15
                // Dst: (IIHH:i64 GR64:i64:$R1src, (HH16:i64 (imm:i64):$I2))
/*7231*/      /*Scope*/ 38, /*->7270*/
/*7232*/        OPC_CheckAndImm, 0|128,0|128,0|128,0|128,112|128,127|128,127|128,127|128,127|128,1/*18446744069414584320*/, 
/*7243*/        OPC_RecordChild0, // #0 = $R1src
/*7244*/        OPC_MoveParent,
/*7245*/        OPC_RecordChild1, // #1 = $I2
/*7246*/        OPC_MoveChild, 1,
/*7248*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7251*/        OPC_CheckPredicate, 43, // Predicate_imm64lf32
/*7253*/        OPC_MoveParent,
/*7254*/        OPC_CheckType, MVT::i64,
/*7256*/        OPC_EmitConvertToTarget, 1,
/*7258*/        OPC_EmitNodeXForm, 3, 2, // LF32
/*7261*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::IILF), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (or:i64 (and:i64 GR64:i64:$R1src, -4294967296:i64), (imm:i64)<<P:Predicate_imm64lf32>><<X:LF32>>:$I2) - Complexity = 15
                // Dst: (IILF:i64 GR64:i64:$R1src, (LF32:i64 (imm:i64):$I2))
/*7270*/      /*Scope*/ 33, /*->7304*/
/*7271*/        OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*7277*/        OPC_RecordChild0, // #0 = $R1src
/*7278*/        OPC_MoveParent,
/*7279*/        OPC_RecordChild1, // #1 = $I2
/*7280*/        OPC_MoveChild, 1,
/*7282*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7285*/        OPC_CheckPredicate, 44, // Predicate_imm64hf32
/*7287*/        OPC_MoveParent,
/*7288*/        OPC_CheckType, MVT::i64,
/*7290*/        OPC_EmitConvertToTarget, 1,
/*7292*/        OPC_EmitNodeXForm, 4, 2, // HF32
/*7295*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::IIHF), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (or:i64 (and:i64 GR64:i64:$R1src, 4294967295:i64), (imm:i64)<<P:Predicate_imm64hf32>><<X:HF32>>:$I2) - Complexity = 15
                // Dst: (IIHF:i64 GR64:i64:$R1src, (HF32:i64 (imm:i64):$I2))
/*7304*/      0, /*End of Scope*/
/*7305*/    /*Scope*/ 47, /*->7353*/
/*7306*/      OPC_RecordNode, // #0 = $src
/*7307*/      OPC_CheckType, MVT::i64,
/*7309*/      OPC_Scope, 13, /*->7324*/ // 3 children in Scope
/*7311*/        OPC_CheckComplexPat, /*CP*/13, /*#*/0, // selectDynAlloc12Only:$src #1 #2 #3
/*7314*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADJDYNALLOC), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: dynalloc12only:i64:$src - Complexity = 12
                // Dst: (ADJDYNALLOC:i64 dynalloc12only:i64:$src)
/*7324*/      /*Scope*/ 13, /*->7338*/
/*7325*/        OPC_CheckComplexPat, /*CP*/14, /*#*/0, // selectLAAddr12Pair:$XBD2 #1 #2 #3
/*7328*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LA), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: laaddr12pair:i64:$XBD2 - Complexity = 12
                // Dst: (LA:i64 laaddr12pair:i64:$XBD2)
/*7338*/      /*Scope*/ 13, /*->7352*/
/*7339*/        OPC_CheckComplexPat, /*CP*/15, /*#*/0, // selectLAAddr20Pair:$XBD2 #1 #2 #3
/*7342*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LAY), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: laaddr20pair:i64:$XBD2 - Complexity = 12
                // Dst: (LAY:i64 laaddr20pair:i64:$XBD2)
/*7352*/      0, /*End of Scope*/
/*7353*/    /*Scope*/ 50, /*->7404*/
/*7354*/      OPC_MoveChild, 0,
/*7356*/      OPC_CheckOpcode, TARGET_VAL(ISD::ZERO_EXTEND),
/*7359*/      OPC_RecordChild0, // #0 = $src
/*7360*/      OPC_MoveParent,
/*7361*/      OPC_RecordChild1, // #1 = $imm
/*7362*/      OPC_MoveChild, 1,
/*7364*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7367*/      OPC_CheckPredicate, 44, // Predicate_imm64hf32
/*7369*/      OPC_MoveParent,
/*7370*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                  1/*#VTs*/, MVT::i64, 0/*#Ops*/,  // Results = #2
/*7377*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*7380*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 0, 3,  // Results = #4
/*7390*/      OPC_EmitConvertToTarget, 1,
/*7392*/      OPC_EmitNodeXForm, 4, 5, // HF32
/*7395*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IIHF), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 4, 6, 
              // Src: (or:i64 (zext:i64 GR32:i32:$src), (imm:i64)<<P:Predicate_imm64hf32>><<X:HF32>>:$imm) - Complexity = 10
              // Dst: (IIHF:i64 (INSERT_SUBREG:i64 (IMPLICIT_DEF:i64), GR32:i32:$src, subreg_32bit:i32), (HF32:i64 (imm:i64)<<P:Predicate_imm64hf32>>:$imm))
/*7404*/    /*Scope*/ 98|128,1/*226*/, /*->7632*/
/*7406*/      OPC_RecordChild0, // #0 = $R1src
/*7407*/      OPC_RecordChild1, // #1 = $I2
/*7408*/      OPC_Scope, 66|128,1/*194*/, /*->7605*/ // 3 children in Scope
/*7411*/        OPC_MoveChild, 1,
/*7413*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7416*/        OPC_Scope, 20, /*->7438*/ // 9 children in Scope
/*7418*/          OPC_CheckPredicate, 48, // Predicate_imm32ll16
/*7420*/          OPC_MoveParent,
/*7421*/          OPC_CheckType, MVT::i32,
/*7423*/          OPC_EmitConvertToTarget, 1,
/*7425*/          OPC_EmitNodeXForm, 6, 2, // LL16
/*7428*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OILL32), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i32 GR32:i32:$R1src, (imm:i32)<<P:Predicate_imm32ll16>><<X:LL16>>:$I2) - Complexity = 7
                  // Dst: (OILL32:i32:i32 GR32:i32:$R1src, (LL16:i32 (imm:i32):$I2))
/*7438*/        /*Scope*/ 20, /*->7459*/
/*7439*/          OPC_CheckPredicate, 49, // Predicate_imm32lh16
/*7441*/          OPC_MoveParent,
/*7442*/          OPC_CheckType, MVT::i32,
/*7444*/          OPC_EmitConvertToTarget, 1,
/*7446*/          OPC_EmitNodeXForm, 7, 2, // LH16
/*7449*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OILH32), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i32 GR32:i32:$R1src, (imm:i32)<<P:Predicate_imm32lh16>><<X:LH16>>:$I2) - Complexity = 7
                  // Dst: (OILH32:i32:i32 GR32:i32:$R1src, (LH16:i32 (imm:i32):$I2))
/*7459*/        /*Scope*/ 20, /*->7480*/
/*7460*/          OPC_CheckPredicate, 50, // Predicate_imm64ll16
/*7462*/          OPC_MoveParent,
/*7463*/          OPC_CheckType, MVT::i64,
/*7465*/          OPC_EmitConvertToTarget, 1,
/*7467*/          OPC_EmitNodeXForm, 6, 2, // LL16
/*7470*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OILL), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64ll16>><<X:LL16>>:$I2) - Complexity = 7
                  // Dst: (OILL:i64:i32 GR64:i64:$R1src, (LL16:i64 (imm:i64):$I2))
/*7480*/        /*Scope*/ 20, /*->7501*/
/*7481*/          OPC_CheckPredicate, 51, // Predicate_imm64lh16
/*7483*/          OPC_MoveParent,
/*7484*/          OPC_CheckType, MVT::i64,
/*7486*/          OPC_EmitConvertToTarget, 1,
/*7488*/          OPC_EmitNodeXForm, 7, 2, // LH16
/*7491*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OILH), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64lh16>><<X:LH16>>:$I2) - Complexity = 7
                  // Dst: (OILH:i64:i32 GR64:i64:$R1src, (LH16:i64 (imm:i64):$I2))
/*7501*/        /*Scope*/ 20, /*->7522*/
/*7502*/          OPC_CheckPredicate, 52, // Predicate_imm64hl16
/*7504*/          OPC_MoveParent,
/*7505*/          OPC_CheckType, MVT::i64,
/*7507*/          OPC_EmitConvertToTarget, 1,
/*7509*/          OPC_EmitNodeXForm, 8, 2, // HL16
/*7512*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OIHL), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64hl16>><<X:HL16>>:$I2) - Complexity = 7
                  // Dst: (OIHL:i64:i32 GR64:i64:$R1src, (HL16:i64 (imm:i64):$I2))
/*7522*/        /*Scope*/ 20, /*->7543*/
/*7523*/          OPC_CheckPredicate, 53, // Predicate_imm64hh16
/*7525*/          OPC_MoveParent,
/*7526*/          OPC_CheckType, MVT::i64,
/*7528*/          OPC_EmitConvertToTarget, 1,
/*7530*/          OPC_EmitNodeXForm, 9, 2, // HH16
/*7533*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OIHH), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64hh16>><<X:HH16>>:$I2) - Complexity = 7
                  // Dst: (OIHH:i64:i32 GR64:i64:$R1src, (HH16:i64 (imm:i64):$I2))
/*7543*/        /*Scope*/ 20, /*->7564*/
/*7544*/          OPC_CheckPredicate, 43, // Predicate_imm64lf32
/*7546*/          OPC_MoveParent,
/*7547*/          OPC_CheckType, MVT::i64,
/*7549*/          OPC_EmitConvertToTarget, 1,
/*7551*/          OPC_EmitNodeXForm, 3, 2, // LF32
/*7554*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OILF), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64lf32>><<X:LF32>>:$I2) - Complexity = 7
                  // Dst: (OILF:i64:i32 GR64:i64:$R1src, (LF32:i64 (imm:i64):$I2))
/*7564*/        /*Scope*/ 20, /*->7585*/
/*7565*/          OPC_CheckPredicate, 44, // Predicate_imm64hf32
/*7567*/          OPC_MoveParent,
/*7568*/          OPC_CheckType, MVT::i64,
/*7570*/          OPC_EmitConvertToTarget, 1,
/*7572*/          OPC_EmitNodeXForm, 4, 2, // HF32
/*7575*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OIHF), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64hf32>><<X:HF32>>:$I2) - Complexity = 7
                  // Dst: (OIHF:i64:i32 GR64:i64:$R1src, (HF32:i64 (imm:i64):$I2))
/*7585*/        /*Scope*/ 18, /*->7604*/
/*7586*/          OPC_MoveParent,
/*7587*/          OPC_CheckType, MVT::i32,
/*7589*/          OPC_EmitConvertToTarget, 1,
/*7591*/          OPC_EmitNodeXForm, 5, 2, // UIMM32
/*7594*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OILF32), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i32 GR32:i32:$R1src, (imm:i32)<<X:UIMM32>>:$I2) - Complexity = 6
                  // Dst: (OILF32:i32:i32 GR32:i32:$R1src, (UIMM32:i32 (imm:i32):$I2))
/*7604*/        0, /*End of Scope*/
/*7605*/      /*Scope*/ 12, /*->7618*/
/*7606*/        OPC_CheckType, MVT::i32,
/*7608*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::OR), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 GR32:i32:$R1src, GR32:i32:$R2) - Complexity = 3
                // Dst: (OR:i32:i32 GR32:i32:$R1src, GR32:i32:$R2)
/*7618*/      /*Scope*/ 12, /*->7631*/
/*7619*/        OPC_CheckType, MVT::i64,
/*7621*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::OGR), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i64 GR64:i64:$R1src, GR64:i64:$R2) - Complexity = 3
                // Dst: (OGR:i64:i32 GR64:i64:$R1src, GR64:i64:$R2)
/*7631*/      0, /*End of Scope*/
/*7632*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 74|128,1/*202*/,  TARGET_VAL(SystemZISD::SELECT_CCMASK),// ->7839
/*7637*/    OPC_CaptureGlueInput,
/*7638*/    OPC_Scope, 85, /*->7725*/ // 2 children in Scope
/*7640*/      OPC_MoveChild, 0,
/*7642*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*7645*/      OPC_RecordMemRef,
/*7646*/      OPC_RecordNode, // #0 = 'ld' chained node
/*7647*/      OPC_CheckFoldableChainNode,
/*7648*/      OPC_RecordChild1, // #1 = $BD2
/*7649*/      OPC_CheckChild1Type, MVT::i64,
/*7651*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*7653*/      OPC_CheckPredicate, 13, // Predicate_load
/*7655*/      OPC_MoveParent,
/*7656*/      OPC_RecordChild1, // #2 = $R1src
/*7657*/      OPC_RecordChild2, // #3 = $valid
/*7658*/      OPC_MoveChild, 2,
/*7660*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7663*/      OPC_CheckPredicate, 54, // Predicate_cond4
/*7665*/      OPC_MoveParent,
/*7666*/      OPC_RecordChild3, // #4 = $R3
/*7667*/      OPC_MoveChild, 3,
/*7669*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7672*/      OPC_CheckPredicate, 54, // Predicate_cond4
/*7674*/      OPC_MoveParent,
/*7675*/      OPC_SwitchType /*2 cases */, 22,  MVT::i32,// ->7700
/*7678*/        OPC_CheckPatternPredicate, 0, // (Subtarget.hasLoadStoreOnCond())
/*7680*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$BD2 #5 #6
/*7683*/        OPC_EmitMergeInputChains1_0,
/*7684*/        OPC_EmitConvertToTarget, 3,
/*7686*/        OPC_EmitConvertToTarget, 4,
/*7688*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LOC), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 5/*#Ops*/, 2, 5, 6, 7, 8, 
                // Src: (z_select_ccmask:i32 (ld:i32 bdaddr20only:i64:$BD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src, (imm:i8)<<P:Predicate_cond4>>:$valid, (imm:i8)<<P:Predicate_cond4>>:$R3) - Complexity = 24
                // Dst: (LOC:i32 GR32:i32:$R1src, bdaddr20only:i64:$BD2, (imm:i8):$valid, (imm:i8):$R3)
              /*SwitchType*/ 22,  MVT::i64,// ->7724
/*7702*/        OPC_CheckPatternPredicate, 0, // (Subtarget.hasLoadStoreOnCond())
/*7704*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$BD2 #5 #6
/*7707*/        OPC_EmitMergeInputChains1_0,
/*7708*/        OPC_EmitConvertToTarget, 3,
/*7710*/        OPC_EmitConvertToTarget, 4,
/*7712*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LOCG), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 5/*#Ops*/, 2, 5, 6, 7, 8, 
                // Src: (z_select_ccmask:i64 (ld:i64 bdaddr20only:i64:$BD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$R1src, (imm:i8)<<P:Predicate_cond4>>:$valid, (imm:i8)<<P:Predicate_cond4>>:$R3) - Complexity = 24
                // Dst: (LOCG:i64 GR64:i64:$R1src, bdaddr20only:i64:$BD2, (imm:i8):$valid, (imm:i8):$R3)
              0, // EndSwitchType
/*7725*/    /*Scope*/ 112, /*->7838*/
/*7726*/      OPC_RecordChild0, // #0 = $src1
/*7727*/      OPC_RecordChild1, // #1 = $src2
/*7728*/      OPC_RecordChild2, // #2 = $valid
/*7729*/      OPC_MoveChild, 2,
/*7731*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7734*/      OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*7736*/      OPC_MoveParent,
/*7737*/      OPC_RecordChild3, // #3 = $cc
/*7738*/      OPC_MoveChild, 3,
/*7740*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7743*/      OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*7745*/      OPC_MoveParent,
/*7746*/      OPC_SwitchType /*5 cases */, 16,  MVT::i32,// ->7765
/*7749*/        OPC_EmitConvertToTarget, 2,
/*7751*/        OPC_EmitConvertToTarget, 3,
/*7753*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::Select32), 0|OPFL_GlueInput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 1, 4, 5, 
                // Src: (z_select_ccmask:i32 GR32:i32:$src1, GR32:i32:$src2, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc) - Complexity = 11
                // Dst: (Select32:i32:i32 GR32:i32:$src1, GR32:i32:$src2, (imm:i8):$valid, (imm:i8):$cc)
              /*SwitchType*/ 16,  MVT::i64,// ->7783
/*7767*/        OPC_EmitConvertToTarget, 2,
/*7769*/        OPC_EmitConvertToTarget, 3,
/*7771*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::Select64), 0|OPFL_GlueInput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 1, 4, 5, 
                // Src: (z_select_ccmask:i64 GR64:i64:$src1, GR64:i64:$src2, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc) - Complexity = 11
                // Dst: (Select64:i64:i32 GR64:i64:$src1, GR64:i64:$src2, (imm:i8):$valid, (imm:i8):$cc)
              /*SwitchType*/ 16,  MVT::f32,// ->7801
/*7785*/        OPC_EmitConvertToTarget, 2,
/*7787*/        OPC_EmitConvertToTarget, 3,
/*7789*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SelectF32), 0|OPFL_GlueInput,
                    2/*#VTs*/, MVT::f32, MVT::i32, 4/*#Ops*/, 0, 1, 4, 5, 
                // Src: (z_select_ccmask:f32 FP32:f32:$src1, FP32:f32:$src2, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc) - Complexity = 11
                // Dst: (SelectF32:f32:i32 FP32:f32:$src1, FP32:f32:$src2, (imm:i8):$valid, (imm:i8):$cc)
              /*SwitchType*/ 16,  MVT::f64,// ->7819
/*7803*/        OPC_EmitConvertToTarget, 2,
/*7805*/        OPC_EmitConvertToTarget, 3,
/*7807*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SelectF64), 0|OPFL_GlueInput,
                    2/*#VTs*/, MVT::f64, MVT::i32, 4/*#Ops*/, 0, 1, 4, 5, 
                // Src: (z_select_ccmask:f64 FP64:f64:$src1, FP64:f64:$src2, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc) - Complexity = 11
                // Dst: (SelectF64:f64:i32 FP64:f64:$src1, FP64:f64:$src2, (imm:i8):$valid, (imm:i8):$cc)
              /*SwitchType*/ 16,  MVT::f128,// ->7837
/*7821*/        OPC_EmitConvertToTarget, 2,
/*7823*/        OPC_EmitConvertToTarget, 3,
/*7825*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SelectF128), 0|OPFL_GlueInput,
                    2/*#VTs*/, MVT::f128, MVT::i32, 4/*#Ops*/, 0, 1, 4, 5, 
                // Src: (z_select_ccmask:f128 FP128:f128:$src1, FP128:f128:$src2, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc) - Complexity = 11
                // Dst: (SelectF128:f128:i32 FP128:f128:$src1, FP128:f128:$src2, (imm:i8):$valid, (imm:i8):$cc)
              0, // EndSwitchType
/*7838*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 34,  TARGET_VAL(SystemZISD::MVC),// ->7876
/*7842*/    OPC_RecordNode,   // #0 = 'z_mvc' chained node
/*7843*/    OPC_RecordChild1, // #1 = $dest
/*7844*/    OPC_CheckChild1Type, MVT::i64,
/*7846*/    OPC_RecordChild2, // #2 = $src
/*7847*/    OPC_CheckChild2Type, MVT::i64,
/*7849*/    OPC_RecordChild3, // #3 = $length
/*7850*/    OPC_MoveChild, 3,
/*7852*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7855*/    OPC_MoveParent,
/*7856*/    OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr12Only:$dest #4 #5
/*7859*/    OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectBDAddr12Only:$src #6 #7
/*7862*/    OPC_EmitMergeInputChains1_0,
/*7863*/    OPC_EmitConvertToTarget, 3,
/*7865*/    OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVCSequence), 0|OPFL_Chain,
                0/*#VTs*/, 5/*#Ops*/, 4, 5, 6, 7, 8, 
            // Src: (z_mvc bdaddr12only:i64:$dest, bdaddr12only:i64:$src, (imm:i64):$length) - Complexity = 24
            // Dst: (MVCSequence bdaddr12only:i64:$dest, bdaddr12only:i64:$src, (imm:i64):$length)
          /*SwitchOpcode*/ 36,  TARGET_VAL(SystemZISD::MVC_LOOP),// ->7915
/*7879*/    OPC_RecordNode,   // #0 = 'z_mvc_loop' chained node
/*7880*/    OPC_RecordChild1, // #1 = $dest
/*7881*/    OPC_CheckChild1Type, MVT::i64,
/*7883*/    OPC_RecordChild2, // #2 = $src
/*7884*/    OPC_CheckChild2Type, MVT::i64,
/*7886*/    OPC_RecordChild3, // #3 = $length
/*7887*/    OPC_MoveChild, 3,
/*7889*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7892*/    OPC_MoveParent,
/*7893*/    OPC_RecordChild4, // #4 = $count256
/*7894*/    OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr12Only:$dest #5 #6
/*7897*/    OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectBDAddr12Only:$src #7 #8
/*7900*/    OPC_EmitMergeInputChains1_0,
/*7901*/    OPC_EmitConvertToTarget, 3,
/*7903*/    OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVCLoop), 0|OPFL_Chain,
                0/*#VTs*/, 6/*#Ops*/, 5, 6, 7, 8, 9, 4, 
            // Src: (z_mvc_loop bdaddr12only:i64:$dest, bdaddr12only:i64:$src, (imm:i64):$length, GR64:i64:$count256) - Complexity = 24
            // Dst: (MVCLoop bdaddr12only:i64:$dest, bdaddr12only:i64:$src, (imm:i64):$length, GR64:i64:$count256)
          /*SwitchOpcode*/ 35,  TARGET_VAL(SystemZISD::CLC),// ->7953
/*7918*/    OPC_RecordNode,   // #0 = 'z_clc' chained node
/*7919*/    OPC_RecordChild1, // #1 = $dest
/*7920*/    OPC_CheckChild1Type, MVT::i64,
/*7922*/    OPC_RecordChild2, // #2 = $src
/*7923*/    OPC_CheckChild2Type, MVT::i64,
/*7925*/    OPC_RecordChild3, // #3 = $length
/*7926*/    OPC_MoveChild, 3,
/*7928*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7931*/    OPC_MoveParent,
/*7932*/    OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr12Only:$dest #4 #5
/*7935*/    OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectBDAddr12Only:$src #6 #7
/*7938*/    OPC_EmitMergeInputChains1_0,
/*7939*/    OPC_EmitConvertToTarget, 3,
/*7941*/    OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLCSequence), 0|OPFL_Chain|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 5/*#Ops*/, 4, 5, 6, 7, 8, 
            // Src: (z_clc bdaddr12only:i64:$dest, bdaddr12only:i64:$src, (imm:i64):$length) - Complexity = 24
            // Dst: (CLCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, (imm:i64):$length)
          /*SwitchOpcode*/ 37,  TARGET_VAL(SystemZISD::CLC_LOOP),// ->7993
/*7956*/    OPC_RecordNode,   // #0 = 'z_clc_loop' chained node
/*7957*/    OPC_RecordChild1, // #1 = $dest
/*7958*/    OPC_CheckChild1Type, MVT::i64,
/*7960*/    OPC_RecordChild2, // #2 = $src
/*7961*/    OPC_CheckChild2Type, MVT::i64,
/*7963*/    OPC_RecordChild3, // #3 = $length
/*7964*/    OPC_MoveChild, 3,
/*7966*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7969*/    OPC_MoveParent,
/*7970*/    OPC_RecordChild4, // #4 = $count256
/*7971*/    OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr12Only:$dest #5 #6
/*7974*/    OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectBDAddr12Only:$src #7 #8
/*7977*/    OPC_EmitMergeInputChains1_0,
/*7978*/    OPC_EmitConvertToTarget, 3,
/*7980*/    OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLCLoop), 0|OPFL_Chain|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 6/*#Ops*/, 5, 6, 7, 8, 9, 4, 
            // Src: (z_clc_loop bdaddr12only:i64:$dest, bdaddr12only:i64:$src, (imm:i64):$length, GR64:i64:$count256) - Complexity = 24
            // Dst: (CLCLoop:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, (imm:i64):$length, GR64:i64:$count256)
          /*SwitchOpcode*/ 9|128,6/*777*/,  TARGET_VAL(SystemZISD::CMP),// ->8774
/*7997*/    OPC_Scope, 13|128,1/*141*/, /*->8141*/ // 3 children in Scope
/*8000*/      OPC_RecordChild0, // #0 = $R1
/*8001*/      OPC_Scope, 57, /*->8060*/ // 2 children in Scope
/*8003*/        OPC_CheckChild0Type, MVT::i32,
/*8005*/        OPC_MoveChild, 1,
/*8007*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*8010*/        OPC_RecordMemRef,
/*8011*/        OPC_RecordNode, // #1 = 'ld' chained node
/*8012*/        OPC_CheckFoldableChainNode,
/*8013*/        OPC_RecordChild1, // #2 = $I2
/*8014*/        OPC_CheckChild1Type, MVT::i64,
/*8016*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*8018*/        OPC_Scope, 20, /*->8040*/ // 2 children in Scope
/*8020*/          OPC_CheckPredicate, 38, // Predicate_sextload
/*8022*/          OPC_CheckPredicate, 39, // Predicate_sextloadi16
/*8024*/          OPC_CheckPredicate, 55, // Predicate_aligned_sextloadi16
/*8026*/          OPC_MoveParent,
/*8027*/          OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*8030*/          OPC_EmitMergeInputChains1_1,
/*8031*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CHRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (z_cmp GR32:i32:$R1, (ld:i32 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>><<P:Predicate_aligned_sextloadi16>>) - Complexity = 20
                  // Dst: (CHRL:i32 GR32:i32:$R1, pcrel32:i64:$I2)
/*8040*/        /*Scope*/ 18, /*->8059*/
/*8041*/          OPC_CheckPredicate, 13, // Predicate_load
/*8043*/          OPC_CheckPredicate, 56, // Predicate_aligned_load
/*8045*/          OPC_MoveParent,
/*8046*/          OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*8049*/          OPC_EmitMergeInputChains1_1,
/*8050*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (z_cmp GR32:i32:$R1, (ld:i32 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_aligned_load>>) - Complexity = 20
                  // Dst: (CRL:i32 GR32:i32:$R1, pcrel32:i64:$I2)
/*8059*/        0, /*End of Scope*/
/*8060*/      /*Scope*/ 79, /*->8140*/
/*8061*/        OPC_CheckChild0Type, MVT::i64,
/*8063*/        OPC_MoveChild, 1,
/*8065*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*8068*/        OPC_RecordMemRef,
/*8069*/        OPC_RecordNode, // #1 = 'ld' chained node
/*8070*/        OPC_CheckFoldableChainNode,
/*8071*/        OPC_RecordChild1, // #2 = $I2
/*8072*/        OPC_CheckChild1Type, MVT::i64,
/*8074*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*8076*/        OPC_Scope, 42, /*->8120*/ // 2 children in Scope
/*8078*/          OPC_CheckPredicate, 38, // Predicate_sextload
/*8080*/          OPC_Scope, 18, /*->8100*/ // 2 children in Scope
/*8082*/            OPC_CheckPredicate, 39, // Predicate_sextloadi16
/*8084*/            OPC_CheckPredicate, 55, // Predicate_aligned_sextloadi16
/*8086*/            OPC_MoveParent,
/*8087*/            OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*8090*/            OPC_EmitMergeInputChains1_1,
/*8091*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGHRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (z_cmp GR64:i64:$R1, (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>><<P:Predicate_aligned_sextloadi16>>) - Complexity = 20
                    // Dst: (CGHRL:i32 GR64:i64:$R1, pcrel32:i64:$I2)
/*8100*/          /*Scope*/ 18, /*->8119*/
/*8101*/            OPC_CheckPredicate, 40, // Predicate_sextloadi32
/*8103*/            OPC_CheckPredicate, 57, // Predicate_aligned_sextloadi32
/*8105*/            OPC_MoveParent,
/*8106*/            OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*8109*/            OPC_EmitMergeInputChains1_1,
/*8110*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGFRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (z_cmp GR64:i64:$R1, (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>><<P:Predicate_aligned_sextloadi32>>) - Complexity = 20
                    // Dst: (CGFRL:i32 GR64:i64:$R1, pcrel32:i64:$I2)
/*8119*/          0, /*End of Scope*/
/*8120*/        /*Scope*/ 18, /*->8139*/
/*8121*/          OPC_CheckPredicate, 13, // Predicate_load
/*8123*/          OPC_CheckPredicate, 56, // Predicate_aligned_load
/*8125*/          OPC_MoveParent,
/*8126*/          OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*8129*/          OPC_EmitMergeInputChains1_1,
/*8130*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (z_cmp GR64:i64:$R1, (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_aligned_load>>) - Complexity = 20
                  // Dst: (CGRL:i32 GR64:i64:$R1, pcrel32:i64:$I2)
/*8139*/        0, /*End of Scope*/
/*8140*/      0, /*End of Scope*/
/*8141*/    /*Scope*/ 118, /*->8260*/
/*8142*/      OPC_MoveChild, 0,
/*8144*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*8147*/      OPC_RecordMemRef,
/*8148*/      OPC_RecordNode, // #0 = 'ld' chained node
/*8149*/      OPC_CheckFoldableChainNode,
/*8150*/      OPC_RecordChild1, // #1 = $BD1
/*8151*/      OPC_CheckChild1Type, MVT::i64,
/*8153*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*8155*/      OPC_Scope, 35, /*->8192*/ // 2 children in Scope
/*8157*/        OPC_CheckPredicate, 38, // Predicate_sextload
/*8159*/        OPC_CheckPredicate, 39, // Predicate_sextloadi16
/*8161*/        OPC_CheckType, MVT::i32,
/*8163*/        OPC_MoveParent,
/*8164*/        OPC_RecordChild1, // #2 = $I2
/*8165*/        OPC_MoveChild, 1,
/*8167*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8170*/        OPC_CheckPredicate, 34, // Predicate_imm32sx16
/*8172*/        OPC_MoveParent,
/*8173*/        OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr12Only:$BD1 #3 #4
/*8176*/        OPC_EmitMergeInputChains1_0,
/*8177*/        OPC_EmitConvertToTarget, 2,
/*8179*/        OPC_EmitNodeXForm, 2, 5, // SIMM16
/*8182*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::CHHSI), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (z_cmp (ld:i32 bdaddr12only:i64:$BD1)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>, (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$I2) - Complexity = 20
                // Dst: (CHHSI:i32 bdaddr12only:i64:$BD1, (SIMM16:i32 (imm:i32):$I2))
/*8192*/      /*Scope*/ 66, /*->8259*/
/*8193*/        OPC_CheckPredicate, 13, // Predicate_load
/*8195*/        OPC_SwitchType /*2 cases */, 29,  MVT::i32,// ->8227
/*8198*/          OPC_MoveParent,
/*8199*/          OPC_RecordChild1, // #2 = $I2
/*8200*/          OPC_MoveChild, 1,
/*8202*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8205*/          OPC_CheckPredicate, 34, // Predicate_imm32sx16
/*8207*/          OPC_MoveParent,
/*8208*/          OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr12Only:$BD1 #3 #4
/*8211*/          OPC_EmitMergeInputChains1_0,
/*8212*/          OPC_EmitConvertToTarget, 2,
/*8214*/          OPC_EmitNodeXForm, 2, 5, // SIMM16
/*8217*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CHSI), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (z_cmp (ld:i32 bdaddr12only:i64:$BD1)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$I2) - Complexity = 20
                  // Dst: (CHSI:i32 bdaddr12only:i64:$BD1, (SIMM16:i32 (imm:i32):$I2))
                /*SwitchType*/ 29,  MVT::i64,// ->8258
/*8229*/          OPC_MoveParent,
/*8230*/          OPC_RecordChild1, // #2 = $I2
/*8231*/          OPC_MoveChild, 1,
/*8233*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8236*/          OPC_CheckPredicate, 35, // Predicate_imm64sx16
/*8238*/          OPC_MoveParent,
/*8239*/          OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr12Only:$BD1 #3 #4
/*8242*/          OPC_EmitMergeInputChains1_0,
/*8243*/          OPC_EmitConvertToTarget, 2,
/*8245*/          OPC_EmitNodeXForm, 2, 5, // SIMM16
/*8248*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGHSI), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (z_cmp (ld:i64 bdaddr12only:i64:$BD1)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i64)<<P:Predicate_imm64sx16>><<X:SIMM16>>:$I2) - Complexity = 20
                  // Dst: (CGHSI:i32 bdaddr12only:i64:$BD1, (SIMM16:i64 (imm:i64):$I2))
                0, // EndSwitchType
/*8259*/      0, /*End of Scope*/
/*8260*/    /*Scope*/ 127|128,3/*511*/, /*->8773*/
/*8262*/      OPC_RecordChild0, // #0 = $R1
/*8263*/      OPC_Scope, 13|128,1/*141*/, /*->8407*/ // 11 children in Scope
/*8266*/        OPC_CheckChild0Type, MVT::i32,
/*8268*/        OPC_Scope, 93, /*->8363*/ // 2 children in Scope
/*8270*/          OPC_MoveChild, 1,
/*8272*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*8275*/          OPC_RecordMemRef,
/*8276*/          OPC_RecordNode, // #1 = 'ld' chained node
/*8277*/          OPC_CheckFoldableChainNode,
/*8278*/          OPC_RecordChild1, // #2 = $XBD2
/*8279*/          OPC_CheckChild1Type, MVT::i64,
/*8281*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*8283*/          OPC_Scope, 39, /*->8324*/ // 2 children in Scope
/*8285*/            OPC_CheckPredicate, 38, // Predicate_sextload
/*8287*/            OPC_CheckPredicate, 39, // Predicate_sextloadi16
/*8289*/            OPC_MoveParent,
/*8290*/            OPC_Scope, 15, /*->8307*/ // 2 children in Scope
/*8292*/              OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*8295*/              OPC_EmitMergeInputChains1_1,
/*8296*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::CH), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                      // Src: (z_cmp GR32:i32:$R1, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>) - Complexity = 19
                      // Dst: (CH:i32 GR32:i32:$R1, bdxaddr12pair:i64:$XBD2)
/*8307*/            /*Scope*/ 15, /*->8323*/
/*8308*/              OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*8311*/              OPC_EmitMergeInputChains1_1,
/*8312*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::CHY), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                      // Src: (z_cmp GR32:i32:$R1, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>) - Complexity = 19
                      // Dst: (CHY:i32 GR32:i32:$R1, bdxaddr20pair:i64:$XBD2)
/*8323*/            0, /*End of Scope*/
/*8324*/          /*Scope*/ 37, /*->8362*/
/*8325*/            OPC_CheckPredicate, 13, // Predicate_load
/*8327*/            OPC_MoveParent,
/*8328*/            OPC_Scope, 15, /*->8345*/ // 2 children in Scope
/*8330*/              OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*8333*/              OPC_EmitMergeInputChains1_1,
/*8334*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::C), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                      // Src: (z_cmp GR32:i32:$R1, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                      // Dst: (C:i32 GR32:i32:$R1, bdxaddr12pair:i64:$XBD2)
/*8345*/            /*Scope*/ 15, /*->8361*/
/*8346*/              OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*8349*/              OPC_EmitMergeInputChains1_1,
/*8350*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::CY), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                      // Src: (z_cmp GR32:i32:$R1, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                      // Dst: (CY:i32 GR32:i32:$R1, bdxaddr20pair:i64:$XBD2)
/*8361*/            0, /*End of Scope*/
/*8362*/          0, /*End of Scope*/
/*8363*/        /*Scope*/ 42, /*->8406*/
/*8364*/          OPC_RecordChild1, // #1 = $I2
/*8365*/          OPC_MoveChild, 1,
/*8367*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8370*/          OPC_Scope, 17, /*->8389*/ // 2 children in Scope
/*8372*/            OPC_CheckPredicate, 34, // Predicate_imm32sx16
/*8374*/            OPC_MoveParent,
/*8375*/            OPC_EmitConvertToTarget, 1,
/*8377*/            OPC_EmitNodeXForm, 2, 2, // SIMM16
/*8380*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CHI), 0|OPFL_GlueOutput,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (z_cmp GR32:i32:$R1, (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$I2) - Complexity = 7
                    // Dst: (CHI:i32 GR32:i32:$R1, (SIMM16:i32 (imm:i32):$I2))
/*8389*/          /*Scope*/ 15, /*->8405*/
/*8390*/            OPC_MoveParent,
/*8391*/            OPC_EmitConvertToTarget, 1,
/*8393*/            OPC_EmitNodeXForm, 10, 2, // SIMM32
/*8396*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CFI), 0|OPFL_GlueOutput,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (z_cmp GR32:i32:$R1, (imm:i32)<<X:SIMM32>>:$I2) - Complexity = 6
                    // Dst: (CFI:i32 GR32:i32:$R1, (SIMM32:i32 (imm:i32):$I2))
/*8405*/          0, /*End of Scope*/
/*8406*/        0, /*End of Scope*/
/*8407*/      /*Scope*/ 127, /*->8535*/
/*8408*/        OPC_CheckChild0Type, MVT::i64,
/*8410*/        OPC_Scope, 77, /*->8489*/ // 2 children in Scope
/*8412*/          OPC_MoveChild, 1,
/*8414*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*8417*/          OPC_RecordMemRef,
/*8418*/          OPC_RecordNode, // #1 = 'ld' chained node
/*8419*/          OPC_CheckFoldableChainNode,
/*8420*/          OPC_RecordChild1, // #2 = $XBD2
/*8421*/          OPC_CheckChild1Type, MVT::i64,
/*8423*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*8425*/          OPC_Scope, 42, /*->8469*/ // 2 children in Scope
/*8427*/            OPC_CheckPredicate, 38, // Predicate_sextload
/*8429*/            OPC_Scope, 18, /*->8449*/ // 2 children in Scope
/*8431*/              OPC_CheckPredicate, 39, // Predicate_sextloadi16
/*8433*/              OPC_MoveParent,
/*8434*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*8437*/              OPC_EmitMergeInputChains1_1,
/*8438*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGH), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                      // Src: (z_cmp GR64:i64:$R1, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>) - Complexity = 19
                      // Dst: (CGH:i32 GR64:i64:$R1, bdxaddr20only:i64:$XBD2)
/*8449*/            /*Scope*/ 18, /*->8468*/
/*8450*/              OPC_CheckPredicate, 40, // Predicate_sextloadi32
/*8452*/              OPC_MoveParent,
/*8453*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*8456*/              OPC_EmitMergeInputChains1_1,
/*8457*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGF), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                      // Src: (z_cmp GR64:i64:$R1, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>>) - Complexity = 19
                      // Dst: (CGF:i32 GR64:i64:$R1, bdxaddr20only:i64:$XBD2)
/*8468*/            0, /*End of Scope*/
/*8469*/          /*Scope*/ 18, /*->8488*/
/*8470*/            OPC_CheckPredicate, 13, // Predicate_load
/*8472*/            OPC_MoveParent,
/*8473*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*8476*/            OPC_EmitMergeInputChains1_1,
/*8477*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CG), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (z_cmp GR64:i64:$R1, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                    // Dst: (CG:i32 GR64:i64:$R1, bdxaddr20only:i64:$XBD2)
/*8488*/          0, /*End of Scope*/
/*8489*/        /*Scope*/ 44, /*->8534*/
/*8490*/          OPC_RecordChild1, // #1 = $I2
/*8491*/          OPC_MoveChild, 1,
/*8493*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8496*/          OPC_Scope, 17, /*->8515*/ // 2 children in Scope
/*8498*/            OPC_CheckPredicate, 35, // Predicate_imm64sx16
/*8500*/            OPC_MoveParent,
/*8501*/            OPC_EmitConvertToTarget, 1,
/*8503*/            OPC_EmitNodeXForm, 2, 2, // SIMM16
/*8506*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGHI), 0|OPFL_GlueOutput,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (z_cmp GR64:i64:$R1, (imm:i64)<<P:Predicate_imm64sx16>><<X:SIMM16>>:$I2) - Complexity = 7
                    // Dst: (CGHI:i32 GR64:i64:$R1, (SIMM16:i64 (imm:i64):$I2))
/*8515*/          /*Scope*/ 17, /*->8533*/
/*8516*/            OPC_CheckPredicate, 58, // Predicate_imm64sx32
/*8518*/            OPC_MoveParent,
/*8519*/            OPC_EmitConvertToTarget, 1,
/*8521*/            OPC_EmitNodeXForm, 10, 2, // SIMM32
/*8524*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGFI), 0|OPFL_GlueOutput,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (z_cmp GR64:i64:$R1, (imm:i64)<<P:Predicate_imm64sx32>><<X:SIMM32>>:$I2) - Complexity = 7
                    // Dst: (CGFI:i32 GR64:i64:$R1, (SIMM32:i64 (imm:i64):$I2))
/*8533*/          0, /*End of Scope*/
/*8534*/        0, /*End of Scope*/
/*8535*/      /*Scope*/ 50, /*->8586*/
/*8536*/        OPC_CheckChild0Type, MVT::f32,
/*8538*/        OPC_MoveChild, 1,
/*8540*/        OPC_SwitchOpcode /*2 cases */, 26,  TARGET_VAL(ISD::LOAD),// ->8570
/*8544*/          OPC_RecordMemRef,
/*8545*/          OPC_RecordNode, // #1 = 'ld' chained node
/*8546*/          OPC_CheckFoldableChainNode,
/*8547*/          OPC_RecordChild1, // #2 = $XBD2
/*8548*/          OPC_CheckChild1Type, MVT::i64,
/*8550*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*8552*/          OPC_CheckPredicate, 13, // Predicate_load
/*8554*/          OPC_MoveParent,
/*8555*/          OPC_CheckComplexPat, /*CP*/16, /*#*/2, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*8558*/          OPC_EmitMergeInputChains1_1,
/*8559*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CEB), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (z_cmp FP32:f32:$R1, (ld:f32 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (CEB:i32 FP32:f32:$R1, bdxaddr12only:i64:$XBD2)
                /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::ConstantFP),// ->8585
/*8573*/          OPC_CheckPredicate, 59, // Predicate_fpimm0
/*8575*/          OPC_MoveParent,
/*8576*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LTEBRCompare), 0|OPFL_GlueOutput,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 0, 
                  // Src: (z_cmp FP32:f32:$reg, (fpimm:f32)<<P:Predicate_fpimm0>>) - Complexity = 7
                  // Dst: (LTEBRCompare:i32 FP32:f32:$reg, FP32:f32:$reg)
                0, // EndSwitchOpcode
/*8586*/      /*Scope*/ 50, /*->8637*/
/*8587*/        OPC_CheckChild0Type, MVT::f64,
/*8589*/        OPC_MoveChild, 1,
/*8591*/        OPC_SwitchOpcode /*2 cases */, 26,  TARGET_VAL(ISD::LOAD),// ->8621
/*8595*/          OPC_RecordMemRef,
/*8596*/          OPC_RecordNode, // #1 = 'ld' chained node
/*8597*/          OPC_CheckFoldableChainNode,
/*8598*/          OPC_RecordChild1, // #2 = $XBD2
/*8599*/          OPC_CheckChild1Type, MVT::i64,
/*8601*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*8603*/          OPC_CheckPredicate, 13, // Predicate_load
/*8605*/          OPC_MoveParent,
/*8606*/          OPC_CheckComplexPat, /*CP*/16, /*#*/2, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*8609*/          OPC_EmitMergeInputChains1_1,
/*8610*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CDB), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (z_cmp FP64:f64:$R1, (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (CDB:i32 FP64:f64:$R1, bdxaddr12only:i64:$XBD2)
                /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::ConstantFP),// ->8636
/*8624*/          OPC_CheckPredicate, 59, // Predicate_fpimm0
/*8626*/          OPC_MoveParent,
/*8627*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LTDBRCompare), 0|OPFL_GlueOutput,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 0, 
                  // Src: (z_cmp FP64:f64:$reg, (fpimm:f64)<<P:Predicate_fpimm0>>) - Complexity = 7
                  // Dst: (LTDBRCompare:i32 FP64:f64:$reg, FP64:f64:$reg)
                0, // EndSwitchOpcode
/*8637*/      /*Scope*/ 19, /*->8657*/
/*8638*/        OPC_CheckChild0Type, MVT::f128,
/*8640*/        OPC_MoveChild, 1,
/*8642*/        OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/*8645*/        OPC_CheckPredicate, 59, // Predicate_fpimm0
/*8647*/        OPC_MoveParent,
/*8648*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LTXBRCompare), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 0, 
                // Src: (z_cmp FP128:f128:$reg, (fpimm:f128)<<P:Predicate_fpimm0>>) - Complexity = 7
                // Dst: (LTXBRCompare:i32 FP128:f128:$reg, FP128:f128:$reg)
/*8657*/      /*Scope*/ 49, /*->8707*/
/*8658*/        OPC_MoveChild, 1,
/*8660*/        OPC_SwitchOpcode /*2 cases */, 11,  TARGET_VAL(ISD::SIGN_EXTEND),// ->8675
/*8664*/          OPC_RecordChild0, // #1 = $src2
/*8665*/          OPC_MoveParent,
/*8666*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGFR), 0|OPFL_GlueOutput,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (z_cmp GR64:i64:$src1, (sext:i64 GR32:i32:$src2)) - Complexity = 6
                  // Dst: (CGFR:i32 GR64:i64:$src1, GR32:i32:$src2)
                /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->8706
/*8678*/          OPC_RecordChild0, // #1 = $src2
/*8679*/          OPC_MoveChild, 1,
/*8681*/          OPC_CheckValueType, MVT::i32,
/*8683*/          OPC_MoveParent,
/*8684*/          OPC_MoveParent,
/*8685*/          OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*8688*/          OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*8697*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGFR), 0|OPFL_GlueOutput,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (z_cmp GR64:i64:$src1, (sext_inreg:i64 GR64:i64:$src2, i32:Other)) - Complexity = 6
                  // Dst: (CGFR:i32 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
                0, // EndSwitchOpcode
/*8707*/      /*Scope*/ 12, /*->8720*/
/*8708*/        OPC_CheckChild0Type, MVT::i32,
/*8710*/        OPC_RecordChild1, // #1 = $R2
/*8711*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::CR), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (z_cmp GR32:i32:$R1, GR32:i32:$R2) - Complexity = 3
                // Dst: (CR:i32 GR32:i32:$R1, GR32:i32:$R2)
/*8720*/      /*Scope*/ 12, /*->8733*/
/*8721*/        OPC_CheckChild0Type, MVT::i64,
/*8723*/        OPC_RecordChild1, // #1 = $R2
/*8724*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGR), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (z_cmp GR64:i64:$R1, GR64:i64:$R2) - Complexity = 3
                // Dst: (CGR:i32 GR64:i64:$R1, GR64:i64:$R2)
/*8733*/      /*Scope*/ 12, /*->8746*/
/*8734*/        OPC_CheckChild0Type, MVT::f32,
/*8736*/        OPC_RecordChild1, // #1 = $R2
/*8737*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::CEBR), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (z_cmp FP32:f32:$R1, FP32:f32:$R2) - Complexity = 3
                // Dst: (CEBR:i32 FP32:f32:$R1, FP32:f32:$R2)
/*8746*/      /*Scope*/ 12, /*->8759*/
/*8747*/        OPC_CheckChild0Type, MVT::f64,
/*8749*/        OPC_RecordChild1, // #1 = $R2
/*8750*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::CDBR), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (z_cmp FP64:f64:$R1, FP64:f64:$R2) - Complexity = 3
                // Dst: (CDBR:i32 FP64:f64:$R1, FP64:f64:$R2)
/*8759*/      /*Scope*/ 12, /*->8772*/
/*8760*/        OPC_CheckChild0Type, MVT::f128,
/*8762*/        OPC_RecordChild1, // #1 = $R2
/*8763*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::CXBR), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (z_cmp FP128:f128:$R1, FP128:f128:$R2) - Complexity = 3
                // Dst: (CXBR:i32 FP128:f128:$R1, FP128:f128:$R2)
/*8772*/      0, /*End of Scope*/
/*8773*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 55|128,4/*567*/,  TARGET_VAL(SystemZISD::UCMP),// ->9345
/*8778*/    OPC_Scope, 13|128,1/*141*/, /*->8922*/ // 3 children in Scope
/*8781*/      OPC_RecordChild0, // #0 = $R1
/*8782*/      OPC_Scope, 57, /*->8841*/ // 2 children in Scope
/*8784*/        OPC_CheckChild0Type, MVT::i32,
/*8786*/        OPC_MoveChild, 1,
/*8788*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*8791*/        OPC_RecordMemRef,
/*8792*/        OPC_RecordNode, // #1 = 'ld' chained node
/*8793*/        OPC_CheckFoldableChainNode,
/*8794*/        OPC_RecordChild1, // #2 = $I2
/*8795*/        OPC_CheckChild1Type, MVT::i64,
/*8797*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*8799*/        OPC_Scope, 20, /*->8821*/ // 2 children in Scope
/*8801*/          OPC_CheckPredicate, 41, // Predicate_zextload
/*8803*/          OPC_CheckPredicate, 60, // Predicate_zextloadi16
/*8805*/          OPC_CheckPredicate, 61, // Predicate_aligned_zextloadi16
/*8807*/          OPC_MoveParent,
/*8808*/          OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*8811*/          OPC_EmitMergeInputChains1_1,
/*8812*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLHRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (z_ucmp GR32:i32:$R1, (ld:i32 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>><<P:Predicate_aligned_zextloadi16>>) - Complexity = 20
                  // Dst: (CLHRL:i32 GR32:i32:$R1, pcrel32:i64:$I2)
/*8821*/        /*Scope*/ 18, /*->8840*/
/*8822*/          OPC_CheckPredicate, 13, // Predicate_load
/*8824*/          OPC_CheckPredicate, 56, // Predicate_aligned_load
/*8826*/          OPC_MoveParent,
/*8827*/          OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*8830*/          OPC_EmitMergeInputChains1_1,
/*8831*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (z_ucmp GR32:i32:$R1, (ld:i32 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_aligned_load>>) - Complexity = 20
                  // Dst: (CLRL:i32 GR32:i32:$R1, pcrel32:i64:$I2)
/*8840*/        0, /*End of Scope*/
/*8841*/      /*Scope*/ 79, /*->8921*/
/*8842*/        OPC_CheckChild0Type, MVT::i64,
/*8844*/        OPC_MoveChild, 1,
/*8846*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*8849*/        OPC_RecordMemRef,
/*8850*/        OPC_RecordNode, // #1 = 'ld' chained node
/*8851*/        OPC_CheckFoldableChainNode,
/*8852*/        OPC_RecordChild1, // #2 = $I2
/*8853*/        OPC_CheckChild1Type, MVT::i64,
/*8855*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*8857*/        OPC_Scope, 42, /*->8901*/ // 2 children in Scope
/*8859*/          OPC_CheckPredicate, 41, // Predicate_zextload
/*8861*/          OPC_Scope, 18, /*->8881*/ // 2 children in Scope
/*8863*/            OPC_CheckPredicate, 60, // Predicate_zextloadi16
/*8865*/            OPC_CheckPredicate, 61, // Predicate_aligned_zextloadi16
/*8867*/            OPC_MoveParent,
/*8868*/            OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*8871*/            OPC_EmitMergeInputChains1_1,
/*8872*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGHRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (z_ucmp GR64:i64:$R1, (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>><<P:Predicate_aligned_zextloadi16>>) - Complexity = 20
                    // Dst: (CLGHRL:i32 GR64:i64:$R1, pcrel32:i64:$I2)
/*8881*/          /*Scope*/ 18, /*->8900*/
/*8882*/            OPC_CheckPredicate, 42, // Predicate_zextloadi32
/*8884*/            OPC_CheckPredicate, 62, // Predicate_aligned_zextloadi32
/*8886*/            OPC_MoveParent,
/*8887*/            OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*8890*/            OPC_EmitMergeInputChains1_1,
/*8891*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGFRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (z_ucmp GR64:i64:$R1, (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>><<P:Predicate_aligned_zextloadi32>>) - Complexity = 20
                    // Dst: (CLGFRL:i32 GR64:i64:$R1, pcrel32:i64:$I2)
/*8900*/          0, /*End of Scope*/
/*8901*/        /*Scope*/ 18, /*->8920*/
/*8902*/          OPC_CheckPredicate, 13, // Predicate_load
/*8904*/          OPC_CheckPredicate, 56, // Predicate_aligned_load
/*8906*/          OPC_MoveParent,
/*8907*/          OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*8910*/          OPC_EmitMergeInputChains1_1,
/*8911*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (z_ucmp GR64:i64:$R1, (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_aligned_load>>) - Complexity = 20
                  // Dst: (CLGRL:i32 GR64:i64:$R1, pcrel32:i64:$I2)
/*8920*/        0, /*End of Scope*/
/*8921*/      0, /*End of Scope*/
/*8922*/    /*Scope*/ 48|128,1/*176*/, /*->9100*/
/*8924*/      OPC_MoveChild, 0,
/*8926*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*8929*/      OPC_RecordMemRef,
/*8930*/      OPC_RecordNode, // #0 = 'ld' chained node
/*8931*/      OPC_CheckFoldableChainNode,
/*8932*/      OPC_RecordChild1, // #1 = $BD1
/*8933*/      OPC_CheckChild1Type, MVT::i64,
/*8935*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*8937*/      OPC_Scope, 93, /*->9032*/ // 2 children in Scope
/*8939*/        OPC_CheckPredicate, 41, // Predicate_zextload
/*8941*/        OPC_CheckType, MVT::i32,
/*8943*/        OPC_Scope, 54, /*->8999*/ // 2 children in Scope
/*8945*/          OPC_CheckPredicate, 45, // Predicate_zextloadi8
/*8947*/          OPC_MoveParent,
/*8948*/          OPC_RecordChild1, // #2 = $I2
/*8949*/          OPC_MoveChild, 1,
/*8951*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8954*/          OPC_CheckPredicate, 63, // Predicate_imm32zx8
/*8956*/          OPC_MoveParent,
/*8957*/          OPC_Scope, 19, /*->8978*/ // 2 children in Scope
/*8959*/            OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectBDAddr12Pair:$BD1 #3 #4
/*8962*/            OPC_EmitMergeInputChains1_0,
/*8963*/            OPC_EmitConvertToTarget, 2,
/*8965*/            OPC_EmitNodeXForm, 1, 5, // UIMM8
/*8968*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLI), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                    // Src: (z_ucmp (ld:i32 bdaddr12pair:i64:$BD1)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (imm:i32)<<P:Predicate_imm32zx8>><<X:UIMM8>>:$I2) - Complexity = 20
                    // Dst: (CLI:i32 bdaddr12pair:i64:$BD1, (UIMM8:i32 (imm:i32):$I2))
/*8978*/          /*Scope*/ 19, /*->8998*/
/*8979*/            OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDAddr20Pair:$BD1 #3 #4
/*8982*/            OPC_EmitMergeInputChains1_0,
/*8983*/            OPC_EmitConvertToTarget, 2,
/*8985*/            OPC_EmitNodeXForm, 1, 5, // UIMM8
/*8988*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLIY), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                    // Src: (z_ucmp (ld:i32 bdaddr20pair:i64:$BD1)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (imm:i32)<<P:Predicate_imm32zx8>><<X:UIMM8>>:$I2) - Complexity = 20
                    // Dst: (CLIY:i32 bdaddr20pair:i64:$BD1, (UIMM8:i32 (imm:i32):$I2))
/*8998*/          0, /*End of Scope*/
/*8999*/        /*Scope*/ 31, /*->9031*/
/*9000*/          OPC_CheckPredicate, 60, // Predicate_zextloadi16
/*9002*/          OPC_MoveParent,
/*9003*/          OPC_RecordChild1, // #2 = $I2
/*9004*/          OPC_MoveChild, 1,
/*9006*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9009*/          OPC_CheckPredicate, 64, // Predicate_imm32zx16
/*9011*/          OPC_MoveParent,
/*9012*/          OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr12Only:$BD1 #3 #4
/*9015*/          OPC_EmitMergeInputChains1_0,
/*9016*/          OPC_EmitConvertToTarget, 2,
/*9018*/          OPC_EmitNodeXForm, 11, 5, // UIMM16
/*9021*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLHHSI), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (z_ucmp (ld:i32 bdaddr12only:i64:$BD1)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>>, (imm:i32)<<P:Predicate_imm32zx16>><<X:UIMM16>>:$I2) - Complexity = 20
                  // Dst: (CLHHSI:i32 bdaddr12only:i64:$BD1, (UIMM16:i32 (imm:i32):$I2))
/*9031*/        0, /*End of Scope*/
/*9032*/      /*Scope*/ 66, /*->9099*/
/*9033*/        OPC_CheckPredicate, 13, // Predicate_load
/*9035*/        OPC_SwitchType /*2 cases */, 29,  MVT::i32,// ->9067
/*9038*/          OPC_MoveParent,
/*9039*/          OPC_RecordChild1, // #2 = $I2
/*9040*/          OPC_MoveChild, 1,
/*9042*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9045*/          OPC_CheckPredicate, 64, // Predicate_imm32zx16
/*9047*/          OPC_MoveParent,
/*9048*/          OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr12Only:$BD1 #3 #4
/*9051*/          OPC_EmitMergeInputChains1_0,
/*9052*/          OPC_EmitConvertToTarget, 2,
/*9054*/          OPC_EmitNodeXForm, 11, 5, // UIMM16
/*9057*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLFHSI), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (z_ucmp (ld:i32 bdaddr12only:i64:$BD1)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i32)<<P:Predicate_imm32zx16>><<X:UIMM16>>:$I2) - Complexity = 20
                  // Dst: (CLFHSI:i32 bdaddr12only:i64:$BD1, (UIMM16:i32 (imm:i32):$I2))
                /*SwitchType*/ 29,  MVT::i64,// ->9098
/*9069*/          OPC_MoveParent,
/*9070*/          OPC_RecordChild1, // #2 = $I2
/*9071*/          OPC_MoveChild, 1,
/*9073*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9076*/          OPC_CheckPredicate, 65, // Predicate_imm64zx16
/*9078*/          OPC_MoveParent,
/*9079*/          OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr12Only:$BD1 #3 #4
/*9082*/          OPC_EmitMergeInputChains1_0,
/*9083*/          OPC_EmitConvertToTarget, 2,
/*9085*/          OPC_EmitNodeXForm, 11, 5, // UIMM16
/*9088*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGHSI), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (z_ucmp (ld:i64 bdaddr12only:i64:$BD1)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i64)<<P:Predicate_imm64zx16>><<X:UIMM16>>:$I2) - Complexity = 20
                  // Dst: (CLGHSI:i32 bdaddr12only:i64:$BD1, (UIMM16:i64 (imm:i64):$I2))
                0, // EndSwitchType
/*9099*/      0, /*End of Scope*/
/*9100*/    /*Scope*/ 114|128,1/*242*/, /*->9344*/
/*9102*/      OPC_RecordChild0, // #0 = $R1
/*9103*/      OPC_Scope, 77, /*->9182*/ // 5 children in Scope
/*9105*/        OPC_CheckChild0Type, MVT::i32,
/*9107*/        OPC_Scope, 50, /*->9159*/ // 2 children in Scope
/*9109*/          OPC_MoveChild, 1,
/*9111*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*9114*/          OPC_RecordMemRef,
/*9115*/          OPC_RecordNode, // #1 = 'ld' chained node
/*9116*/          OPC_CheckFoldableChainNode,
/*9117*/          OPC_RecordChild1, // #2 = $XBD2
/*9118*/          OPC_CheckChild1Type, MVT::i64,
/*9120*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*9122*/          OPC_CheckPredicate, 13, // Predicate_load
/*9124*/          OPC_MoveParent,
/*9125*/          OPC_Scope, 15, /*->9142*/ // 2 children in Scope
/*9127*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*9130*/            OPC_EmitMergeInputChains1_1,
/*9131*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (z_ucmp GR32:i32:$R1, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                    // Dst: (CL:i32 GR32:i32:$R1, bdxaddr12pair:i64:$XBD2)
/*9142*/          /*Scope*/ 15, /*->9158*/
/*9143*/            OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*9146*/            OPC_EmitMergeInputChains1_1,
/*9147*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLY), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (z_ucmp GR32:i32:$R1, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                    // Dst: (CLY:i32 GR32:i32:$R1, bdxaddr20pair:i64:$XBD2)
/*9158*/          0, /*End of Scope*/
/*9159*/        /*Scope*/ 21, /*->9181*/
/*9160*/          OPC_RecordChild1, // #1 = $I2
/*9161*/          OPC_MoveChild, 1,
/*9163*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9166*/          OPC_MoveParent,
/*9167*/          OPC_EmitConvertToTarget, 1,
/*9169*/          OPC_EmitNodeXForm, 5, 2, // UIMM32
/*9172*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLFI), 0|OPFL_GlueOutput,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (z_ucmp GR32:i32:$R1, (imm:i32)<<X:UIMM32>>:$I2) - Complexity = 6
                  // Dst: (CLFI:i32 GR32:i32:$R1, (UIMM32:i32 (imm:i32):$I2))
/*9181*/        0, /*End of Scope*/
/*9182*/      /*Scope*/ 117, /*->9300*/
/*9183*/        OPC_CheckChild0Type, MVT::i64,
/*9185*/        OPC_Scope, 88, /*->9275*/ // 2 children in Scope
/*9187*/          OPC_MoveChild, 1,
/*9189*/          OPC_Scope, 53, /*->9244*/ // 2 children in Scope
/*9191*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*9194*/            OPC_RecordMemRef,
/*9195*/            OPC_RecordNode, // #1 = 'ld' chained node
/*9196*/            OPC_CheckFoldableChainNode,
/*9197*/            OPC_RecordChild1, // #2 = $XBD2
/*9198*/            OPC_CheckChild1Type, MVT::i64,
/*9200*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*9202*/            OPC_Scope, 20, /*->9224*/ // 2 children in Scope
/*9204*/              OPC_CheckPredicate, 41, // Predicate_zextload
/*9206*/              OPC_CheckPredicate, 42, // Predicate_zextloadi32
/*9208*/              OPC_MoveParent,
/*9209*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*9212*/              OPC_EmitMergeInputChains1_1,
/*9213*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGF), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                      // Src: (z_ucmp GR64:i64:$R1, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>>) - Complexity = 19
                      // Dst: (CLGF:i32 GR64:i64:$R1, bdxaddr20only:i64:$XBD2)
/*9224*/            /*Scope*/ 18, /*->9243*/
/*9225*/              OPC_CheckPredicate, 13, // Predicate_load
/*9227*/              OPC_MoveParent,
/*9228*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*9231*/              OPC_EmitMergeInputChains1_1,
/*9232*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLG), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                      // Src: (z_ucmp GR64:i64:$R1, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                      // Dst: (CLG:i32 GR64:i64:$R1, bdxaddr20only:i64:$XBD2)
/*9243*/            0, /*End of Scope*/
/*9244*/          /*Scope*/ 29, /*->9274*/
/*9245*/            OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*9251*/            OPC_RecordChild0, // #1 = $src2
/*9252*/            OPC_MoveParent,
/*9253*/            OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*9256*/            OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*9265*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGFR), 0|OPFL_GlueOutput,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (z_ucmp GR64:i64:$src1, (and:i64 GR64:i64:$src2, 4294967295:i64)) - Complexity = 11
                    // Dst: (CLGFR:i32 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*9274*/          0, /*End of Scope*/
/*9275*/        /*Scope*/ 23, /*->9299*/
/*9276*/          OPC_RecordChild1, // #1 = $I2
/*9277*/          OPC_MoveChild, 1,
/*9279*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9282*/          OPC_CheckPredicate, 66, // Predicate_imm64zx32
/*9284*/          OPC_MoveParent,
/*9285*/          OPC_EmitConvertToTarget, 1,
/*9287*/          OPC_EmitNodeXForm, 5, 2, // UIMM32
/*9290*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGFI), 0|OPFL_GlueOutput,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (z_ucmp GR64:i64:$R1, (imm:i64)<<P:Predicate_imm64zx32>><<X:UIMM32>>:$I2) - Complexity = 7
                  // Dst: (CLGFI:i32 GR64:i64:$R1, (UIMM32:i64 (imm:i64):$I2))
/*9299*/        0, /*End of Scope*/
/*9300*/      /*Scope*/ 16, /*->9317*/
/*9301*/        OPC_MoveChild, 1,
/*9303*/        OPC_CheckOpcode, TARGET_VAL(ISD::ZERO_EXTEND),
/*9306*/        OPC_RecordChild0, // #1 = $src2
/*9307*/        OPC_MoveParent,
/*9308*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGFR), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (z_ucmp GR64:i64:$src1, (zext:i64 GR32:i32:$src2)) - Complexity = 6
                // Dst: (CLGFR:i32 GR64:i64:$src1, GR32:i32:$src2)
/*9317*/      /*Scope*/ 12, /*->9330*/
/*9318*/        OPC_CheckChild0Type, MVT::i32,
/*9320*/        OPC_RecordChild1, // #1 = $R2
/*9321*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLR), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (z_ucmp GR32:i32:$R1, GR32:i32:$R2) - Complexity = 3
                // Dst: (CLR:i32 GR32:i32:$R1, GR32:i32:$R2)
/*9330*/      /*Scope*/ 12, /*->9343*/
/*9331*/        OPC_CheckChild0Type, MVT::i64,
/*9333*/        OPC_RecordChild1, // #1 = $R2
/*9334*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGR), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (z_ucmp GR64:i64:$R1, GR64:i64:$R2) - Complexity = 3
                // Dst: (CLGR:i32 GR64:i64:$R1, GR64:i64:$R2)
/*9343*/      0, /*End of Scope*/
/*9344*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 48,  TARGET_VAL(SystemZISD::PREFETCH),// ->9396
/*9348*/    OPC_RecordMemRef,
/*9349*/    OPC_RecordNode,   // #0 = 'z_prefetch' chained node
/*9350*/    OPC_RecordChild1, // #1 = $R1
/*9351*/    OPC_MoveChild, 1,
/*9353*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9356*/    OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*9358*/    OPC_MoveParent,
/*9359*/    OPC_RecordChild2, // #2 = $I2
/*9360*/    OPC_CheckChild2Type, MVT::i64,
/*9362*/    OPC_Scope, 14, /*->9378*/ // 2 children in Scope
/*9364*/      OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*9367*/      OPC_EmitMergeInputChains1_0,
/*9368*/      OPC_EmitConvertToTarget, 1,
/*9370*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::PFDRL), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 2/*#Ops*/, 4, 3, 
              // Src: (z_prefetch (imm:i8)<<P:Predicate_uimm8zx4>>:$R1, pcrel32:i64:$I2) - Complexity = 20
              // Dst: (PFDRL (imm:i8):$R1, pcrel32:i64:$I2)
/*9378*/    /*Scope*/ 16, /*->9395*/
/*9379*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*9382*/      OPC_EmitMergeInputChains1_0,
/*9383*/      OPC_EmitConvertToTarget, 1,
/*9385*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::PFD), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 4/*#Ops*/, 6, 3, 4, 5, 
              // Src: (z_prefetch (imm:i8)<<P:Predicate_uimm8zx4>>:$R1, bdxaddr20only:i64:$XBD2) - Complexity = 19
              // Dst: (PFD (imm:i8):$R1, bdxaddr20only:i64:$XBD2)
/*9395*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 78,  TARGET_VAL(ISD::BSWAP),// ->9477
/*9399*/    OPC_Scope, 51, /*->9452*/ // 2 children in Scope
/*9401*/      OPC_MoveChild, 0,
/*9403*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*9406*/      OPC_RecordMemRef,
/*9407*/      OPC_RecordNode, // #0 = 'ld' chained node
/*9408*/      OPC_RecordChild1, // #1 = $XBD2
/*9409*/      OPC_CheckChild1Type, MVT::i64,
/*9411*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*9413*/      OPC_CheckPredicate, 13, // Predicate_load
/*9415*/      OPC_CheckPredicate, 14, // Predicate_nonvolatile_load
/*9417*/      OPC_MoveParent,
/*9418*/      OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->9435
/*9421*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*9424*/        OPC_EmitMergeInputChains1_0,
/*9425*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LRV), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (bswap:i32 (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_nonvolatile_load>>) - Complexity = 19
                // Dst: (LRV:i32 bdxaddr20only:i64:$XBD2)
              /*SwitchType*/ 14,  MVT::i64,// ->9451
/*9437*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*9440*/        OPC_EmitMergeInputChains1_0,
/*9441*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LRVG), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                // Src: (bswap:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_nonvolatile_load>>) - Complexity = 19
                // Dst: (LRVG:i64 bdxaddr20only:i64:$XBD2)
              0, // EndSwitchType
/*9452*/    /*Scope*/ 23, /*->9476*/
/*9453*/      OPC_RecordChild0, // #0 = $R2
/*9454*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->9465
/*9457*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LRVR), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (bswap:i32 GR32:i32:$R2) - Complexity = 3
                // Dst: (LRVR:i32 GR32:i32:$R2)
              /*SwitchType*/ 8,  MVT::i64,// ->9475
/*9467*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LRVGR), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (bswap:i64 GR64:i64:$R2) - Complexity = 3
                // Dst: (LRVGR:i64 GR64:i64:$R2)
              0, // EndSwitchType
/*9476*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 18|128,6/*786*/,  TARGET_VAL(ISD::ADD),// ->10267
/*9481*/    OPC_Scope, 44|128,1/*172*/, /*->9656*/ // 10 children in Scope
/*9484*/      OPC_RecordChild0, // #0 = $R1src
/*9485*/      OPC_MoveChild, 1,
/*9487*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*9490*/      OPC_RecordMemRef,
/*9491*/      OPC_RecordNode, // #1 = 'ld' chained node
/*9492*/      OPC_CheckFoldableChainNode,
/*9493*/      OPC_RecordChild1, // #2 = $XBD2
/*9494*/      OPC_CheckChild1Type, MVT::i64,
/*9496*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*9498*/      OPC_Scope, 43, /*->9543*/ // 5 children in Scope
/*9500*/        OPC_CheckPredicate, 38, // Predicate_sextload
/*9502*/        OPC_CheckPredicate, 39, // Predicate_sextloadi16
/*9504*/        OPC_MoveParent,
/*9505*/        OPC_CheckType, MVT::i32,
/*9507*/        OPC_Scope, 16, /*->9525*/ // 2 children in Scope
/*9509*/          OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*9512*/          OPC_EmitMergeInputChains1_1,
/*9513*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AH), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (add:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>) - Complexity = 19
                  // Dst: (AH:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*9525*/        /*Scope*/ 16, /*->9542*/
/*9526*/          OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*9529*/          OPC_EmitMergeInputChains1_1,
/*9530*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AHY), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (add:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>) - Complexity = 19
                  // Dst: (AHY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*9542*/        0, /*End of Scope*/
/*9543*/      /*Scope*/ 41, /*->9585*/
/*9544*/        OPC_CheckPredicate, 13, // Predicate_load
/*9546*/        OPC_MoveParent,
/*9547*/        OPC_CheckType, MVT::i32,
/*9549*/        OPC_Scope, 16, /*->9567*/ // 2 children in Scope
/*9551*/          OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*9554*/          OPC_EmitMergeInputChains1_1,
/*9555*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::A), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (add:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (A:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*9567*/        /*Scope*/ 16, /*->9584*/
/*9568*/          OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*9571*/          OPC_EmitMergeInputChains1_1,
/*9572*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AY), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (add:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (AY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*9584*/        0, /*End of Scope*/
/*9585*/      /*Scope*/ 23, /*->9609*/
/*9586*/        OPC_CheckPredicate, 38, // Predicate_sextload
/*9588*/        OPC_CheckPredicate, 40, // Predicate_sextloadi32
/*9590*/        OPC_MoveParent,
/*9591*/        OPC_CheckType, MVT::i64,
/*9593*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*9596*/        OPC_EmitMergeInputChains1_1,
/*9597*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGF), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (add:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>>) - Complexity = 19
                // Dst: (AGF:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*9609*/      /*Scope*/ 21, /*->9631*/
/*9610*/        OPC_CheckPredicate, 13, // Predicate_load
/*9612*/        OPC_MoveParent,
/*9613*/        OPC_CheckType, MVT::i64,
/*9615*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*9618*/        OPC_EmitMergeInputChains1_1,
/*9619*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::AG), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (add:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (AG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*9631*/      /*Scope*/ 23, /*->9655*/
/*9632*/        OPC_CheckPredicate, 41, // Predicate_zextload
/*9634*/        OPC_CheckPredicate, 42, // Predicate_zextloadi32
/*9636*/        OPC_MoveParent,
/*9637*/        OPC_CheckType, MVT::i64,
/*9639*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$addr #3 #4 #5
/*9642*/        OPC_EmitMergeInputChains1_1,
/*9643*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGF), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (add:i64 GR64:i64:$src1, (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>>) - Complexity = 19
                // Dst: (ALGF:i64:i32 GR64:i64:$src1, bdxaddr20only:i64:$addr)
/*9655*/      0, /*End of Scope*/
/*9656*/    /*Scope*/ 48|128,1/*176*/, /*->9834*/
/*9658*/      OPC_MoveChild, 0,
/*9660*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*9663*/      OPC_RecordMemRef,
/*9664*/      OPC_RecordNode, // #0 = 'ld' chained node
/*9665*/      OPC_CheckFoldableChainNode,
/*9666*/      OPC_RecordChild1, // #1 = $XBD2
/*9667*/      OPC_CheckChild1Type, MVT::i64,
/*9669*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*9671*/      OPC_Scope, 44, /*->9717*/ // 5 children in Scope
/*9673*/        OPC_CheckPredicate, 38, // Predicate_sextload
/*9675*/        OPC_CheckPredicate, 39, // Predicate_sextloadi16
/*9677*/        OPC_MoveParent,
/*9678*/        OPC_RecordChild1, // #2 = $R1src
/*9679*/        OPC_CheckType, MVT::i32,
/*9681*/        OPC_Scope, 16, /*->9699*/ // 2 children in Scope
/*9683*/          OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*9686*/          OPC_EmitMergeInputChains1_0,
/*9687*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AH), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (add:i32 (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (AH:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*9699*/        /*Scope*/ 16, /*->9716*/
/*9700*/          OPC_CheckComplexPat, /*CP*/8, /*#*/1, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*9703*/          OPC_EmitMergeInputChains1_0,
/*9704*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AHY), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (add:i32 (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (AHY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*9716*/        0, /*End of Scope*/
/*9717*/      /*Scope*/ 42, /*->9760*/
/*9718*/        OPC_CheckPredicate, 13, // Predicate_load
/*9720*/        OPC_MoveParent,
/*9721*/        OPC_RecordChild1, // #2 = $R1src
/*9722*/        OPC_CheckType, MVT::i32,
/*9724*/        OPC_Scope, 16, /*->9742*/ // 2 children in Scope
/*9726*/          OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*9729*/          OPC_EmitMergeInputChains1_0,
/*9730*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::A), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (add:i32 (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (A:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*9742*/        /*Scope*/ 16, /*->9759*/
/*9743*/          OPC_CheckComplexPat, /*CP*/8, /*#*/1, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*9746*/          OPC_EmitMergeInputChains1_0,
/*9747*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AY), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (add:i32 (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (AY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*9759*/        0, /*End of Scope*/
/*9760*/      /*Scope*/ 24, /*->9785*/
/*9761*/        OPC_CheckPredicate, 38, // Predicate_sextload
/*9763*/        OPC_CheckPredicate, 40, // Predicate_sextloadi32
/*9765*/        OPC_MoveParent,
/*9766*/        OPC_RecordChild1, // #2 = $R1src
/*9767*/        OPC_CheckType, MVT::i64,
/*9769*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*9772*/        OPC_EmitMergeInputChains1_0,
/*9773*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGF), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (add:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>>, GR64:i64:$R1src) - Complexity = 19
                // Dst: (AGF:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*9785*/      /*Scope*/ 22, /*->9808*/
/*9786*/        OPC_CheckPredicate, 13, // Predicate_load
/*9788*/        OPC_MoveParent,
/*9789*/        OPC_RecordChild1, // #2 = $R1src
/*9790*/        OPC_CheckType, MVT::i64,
/*9792*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*9795*/        OPC_EmitMergeInputChains1_0,
/*9796*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::AG), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (add:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$R1src) - Complexity = 19
                // Dst: (AG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*9808*/      /*Scope*/ 24, /*->9833*/
/*9809*/        OPC_CheckPredicate, 41, // Predicate_zextload
/*9811*/        OPC_CheckPredicate, 42, // Predicate_zextloadi32
/*9813*/        OPC_MoveParent,
/*9814*/        OPC_RecordChild1, // #2 = $src1
/*9815*/        OPC_CheckType, MVT::i64,
/*9817*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$addr #3 #4 #5
/*9820*/        OPC_EmitMergeInputChains1_0,
/*9821*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGF), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (add:i64 (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>>, GR64:i64:$src1) - Complexity = 19
                // Dst: (ALGF:i64:i32 GR64:i64:$src1, bdxaddr20only:i64:$addr)
/*9833*/      0, /*End of Scope*/
/*9834*/    /*Scope*/ 47, /*->9882*/
/*9835*/      OPC_RecordNode, // #0 = $src
/*9836*/      OPC_CheckType, MVT::i64,
/*9838*/      OPC_Scope, 13, /*->9853*/ // 3 children in Scope
/*9840*/        OPC_CheckComplexPat, /*CP*/13, /*#*/0, // selectDynAlloc12Only:$src #1 #2 #3
/*9843*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADJDYNALLOC), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: dynalloc12only:i64:$src - Complexity = 12
                // Dst: (ADJDYNALLOC:i64 dynalloc12only:i64:$src)
/*9853*/      /*Scope*/ 13, /*->9867*/
/*9854*/        OPC_CheckComplexPat, /*CP*/14, /*#*/0, // selectLAAddr12Pair:$XBD2 #1 #2 #3
/*9857*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LA), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: laaddr12pair:i64:$XBD2 - Complexity = 12
                // Dst: (LA:i64 laaddr12pair:i64:$XBD2)
/*9867*/      /*Scope*/ 13, /*->9881*/
/*9868*/        OPC_CheckComplexPat, /*CP*/15, /*#*/0, // selectLAAddr20Pair:$XBD2 #1 #2 #3
/*9871*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LAY), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: laaddr20pair:i64:$XBD2 - Complexity = 12
                // Dst: (LAY:i64 laaddr20pair:i64:$XBD2)
/*9881*/      0, /*End of Scope*/
/*9882*/    /*Scope*/ 35, /*->9918*/
/*9883*/      OPC_RecordChild0, // #0 = $src1
/*9884*/      OPC_MoveChild, 1,
/*9886*/      OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*9892*/      OPC_RecordChild0, // #1 = $src2
/*9893*/      OPC_MoveParent,
/*9894*/      OPC_CheckType, MVT::i64,
/*9896*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*9899*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*9908*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFR), 0,
                  2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
              // Src: (add:i64 GR64:i64:$src1, (and:i64 GR64:i64:$src2, 4294967295:i64)) - Complexity = 11
              // Dst: (ALGFR:i64:i32 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*9918*/    /*Scope*/ 35, /*->9954*/
/*9919*/      OPC_MoveChild, 0,
/*9921*/      OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*9927*/      OPC_RecordChild0, // #0 = $src2
/*9928*/      OPC_MoveParent,
/*9929*/      OPC_RecordChild1, // #1 = $src1
/*9930*/      OPC_CheckType, MVT::i64,
/*9932*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*9935*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*9944*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFR), 0,
                  2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 3, 
              // Src: (add:i64 (and:i64 GR64:i64:$src2, 4294967295:i64), GR64:i64:$src1) - Complexity = 11
              // Dst: (ALGFR:i64:i32 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*9954*/    /*Scope*/ 44|128,1/*172*/, /*->10128*/
/*9956*/      OPC_RecordChild0, // #0 = $R1src
/*9957*/      OPC_Scope, 4|128,1/*132*/, /*->10092*/ // 2 children in Scope
/*9960*/        OPC_RecordChild1, // #1 = $I2
/*9961*/        OPC_MoveChild, 1,
/*9963*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9966*/        OPC_Scope, 20, /*->9988*/ // 6 children in Scope
/*9968*/          OPC_CheckPredicate, 34, // Predicate_imm32sx16
/*9970*/          OPC_MoveParent,
/*9971*/          OPC_CheckType, MVT::i32,
/*9973*/          OPC_EmitConvertToTarget, 1,
/*9975*/          OPC_EmitNodeXForm, 2, 2, // SIMM16
/*9978*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AHI), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i32 GR32:i32:$R1src, (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$I2) - Complexity = 7
                  // Dst: (AHI:i32:i32 GR32:i32:$R1src, (SIMM16:i32 (imm:i32):$I2))
/*9988*/        /*Scope*/ 20, /*->10009*/
/*9989*/          OPC_CheckPredicate, 35, // Predicate_imm64sx16
/*9991*/          OPC_MoveParent,
/*9992*/          OPC_CheckType, MVT::i64,
/*9994*/          OPC_EmitConvertToTarget, 1,
/*9996*/          OPC_EmitNodeXForm, 2, 2, // SIMM16
/*9999*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGHI), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64sx16>><<X:SIMM16>>:$I2) - Complexity = 7
                  // Dst: (AGHI:i64:i32 GR64:i64:$R1src, (SIMM16:i64 (imm:i64):$I2))
/*10009*/       /*Scope*/ 20, /*->10030*/
/*10010*/         OPC_CheckPredicate, 58, // Predicate_imm64sx32
/*10012*/         OPC_MoveParent,
/*10013*/         OPC_CheckType, MVT::i64,
/*10015*/         OPC_EmitConvertToTarget, 1,
/*10017*/         OPC_EmitNodeXForm, 10, 2, // SIMM32
/*10020*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGFI), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64sx32>><<X:SIMM32>>:$I2) - Complexity = 7
                  // Dst: (AGFI:i64:i32 GR64:i64:$R1src, (SIMM32:i64 (imm:i64):$I2))
/*10030*/       /*Scope*/ 20, /*->10051*/
/*10031*/         OPC_CheckPredicate, 66, // Predicate_imm64zx32
/*10033*/         OPC_MoveParent,
/*10034*/         OPC_CheckType, MVT::i64,
/*10036*/         OPC_EmitConvertToTarget, 1,
/*10038*/         OPC_EmitNodeXForm, 5, 2, // UIMM32
/*10041*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFI), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_imm64zx32>><<X:UIMM32>>:$src2) - Complexity = 7
                  // Dst: (ALGFI:i64:i32 GR64:i64:$src1, (UIMM32:i64 (imm:i64)<<P:Predicate_imm64zx32>>:$src2))
/*10051*/       /*Scope*/ 20, /*->10072*/
/*10052*/         OPC_CheckPredicate, 67, // Predicate_imm64zx32n
/*10054*/         OPC_MoveParent,
/*10055*/         OPC_CheckType, MVT::i64,
/*10057*/         OPC_EmitConvertToTarget, 1,
/*10059*/         OPC_EmitNodeXForm, 12, 2, // NEGIMM32
/*10062*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGFI), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_imm64zx32n>><<X:NEGIMM32>>:$src2) - Complexity = 7
                  // Dst: (SLGFI:i64:i32 GR64:i64:$src1, (NEGIMM32:i64 (imm:i64)<<P:Predicate_imm64zx32n>>:$src2))
/*10072*/       /*Scope*/ 18, /*->10091*/
/*10073*/         OPC_MoveParent,
/*10074*/         OPC_CheckType, MVT::i32,
/*10076*/         OPC_EmitConvertToTarget, 1,
/*10078*/         OPC_EmitNodeXForm, 10, 2, // SIMM32
/*10081*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::AFI), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i32 GR32:i32:$R1src, (imm:i32)<<X:SIMM32>>:$I2) - Complexity = 6
                  // Dst: (AFI:i32:i32 GR32:i32:$R1src, (SIMM32:i32 (imm:i32):$I2))
/*10091*/       0, /*End of Scope*/
/*10092*/     /*Scope*/ 34, /*->10127*/
/*10093*/       OPC_MoveChild, 1,
/*10095*/       OPC_SwitchOpcode /*2 cases */, 12,  TARGET_VAL(ISD::SIGN_EXTEND),// ->10111
/*10099*/         OPC_RecordChild0, // #1 = $src2
/*10100*/         OPC_MoveParent,
/*10101*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGFR), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i64 GR64:i64:$src1, (sext:i64 GR32:i32:$src2)) - Complexity = 6
                  // Dst: (AGFR:i64:i32 GR64:i64:$src1, GR32:i32:$src2)
                /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::ZERO_EXTEND),// ->10126
/*10114*/         OPC_RecordChild0, // #1 = $src2
/*10115*/         OPC_MoveParent,
/*10116*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFR), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i64 GR64:i64:$src1, (zext:i64 GR32:i32:$src2)) - Complexity = 6
                  // Dst: (ALGFR:i64:i32 GR64:i64:$src1, GR32:i32:$src2)
                0, // EndSwitchOpcode
/*10127*/     0, /*End of Scope*/
/*10128*/   /*Scope*/ 36, /*->10165*/
/*10129*/     OPC_MoveChild, 0,
/*10131*/     OPC_SwitchOpcode /*2 cases */, 13,  TARGET_VAL(ISD::SIGN_EXTEND),// ->10148
/*10135*/       OPC_RecordChild0, // #0 = $src2
/*10136*/       OPC_MoveParent,
/*10137*/       OPC_RecordChild1, // #1 = $src1
/*10138*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGFR), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (add:i64 (sext:i64 GR32:i32:$src2), GR64:i64:$src1) - Complexity = 6
                // Dst: (AGFR:i64:i32 GR64:i64:$src1, GR32:i32:$src2)
              /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::ZERO_EXTEND),// ->10164
/*10151*/       OPC_RecordChild0, // #0 = $src2
/*10152*/       OPC_MoveParent,
/*10153*/       OPC_RecordChild1, // #1 = $src1
/*10154*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFR), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (add:i64 (zext:i64 GR32:i32:$src2), GR64:i64:$src1) - Complexity = 6
                // Dst: (ALGFR:i64:i32 GR64:i64:$src1, GR32:i32:$src2)
              0, // EndSwitchOpcode
/*10165*/   /*Scope*/ 35, /*->10201*/
/*10166*/     OPC_RecordChild0, // #0 = $src1
/*10167*/     OPC_MoveChild, 1,
/*10169*/     OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
/*10172*/     OPC_RecordChild0, // #1 = $src2
/*10173*/     OPC_MoveChild, 1,
/*10175*/     OPC_CheckValueType, MVT::i32,
/*10177*/     OPC_MoveParent,
/*10178*/     OPC_MoveParent,
/*10179*/     OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*10182*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*10191*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGFR), 0,
                  2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
              // Src: (add:i64 GR64:i64:$src1, (sext_inreg:i64 GR64:i64:$src2, i32:Other)) - Complexity = 6
              // Dst: (AGFR:i64:i32 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*10201*/   /*Scope*/ 35, /*->10237*/
/*10202*/     OPC_MoveChild, 0,
/*10204*/     OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
/*10207*/     OPC_RecordChild0, // #0 = $src2
/*10208*/     OPC_MoveChild, 1,
/*10210*/     OPC_CheckValueType, MVT::i32,
/*10212*/     OPC_MoveParent,
/*10213*/     OPC_MoveParent,
/*10214*/     OPC_RecordChild1, // #1 = $src1
/*10215*/     OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*10218*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*10227*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGFR), 0,
                  2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 3, 
              // Src: (add:i64 (sext_inreg:i64 GR64:i64:$src2, i32:Other), GR64:i64:$src1) - Complexity = 6
              // Dst: (AGFR:i64:i32 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*10237*/   /*Scope*/ 28, /*->10266*/
/*10238*/     OPC_RecordChild0, // #0 = $R1src
/*10239*/     OPC_RecordChild1, // #1 = $R2
/*10240*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->10253
/*10243*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::AR), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 GR32:i32:$R1src, GR32:i32:$R2) - Complexity = 3
                // Dst: (AR:i32:i32 GR32:i32:$R1src, GR32:i32:$R2)
              /*SwitchType*/ 10,  MVT::i64,// ->10265
/*10255*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGR), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i64 GR64:i64:$R1src, GR64:i64:$R2) - Complexity = 3
                // Dst: (AGR:i64:i32 GR64:i64:$R1src, GR64:i64:$R2)
              0, // EndSwitchType
/*10266*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 67|128,3/*451*/,  TARGET_VAL(ISD::ADDC),// ->10722
/*10271*/   OPC_Scope, 104, /*->10377*/ // 7 children in Scope
/*10273*/     OPC_RecordChild0, // #0 = $R1src
/*10274*/     OPC_MoveChild, 1,
/*10276*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*10279*/     OPC_RecordMemRef,
/*10280*/     OPC_RecordNode, // #1 = 'ld' chained node
/*10281*/     OPC_CheckFoldableChainNode,
/*10282*/     OPC_RecordChild1, // #2 = $XBD2
/*10283*/     OPC_CheckChild1Type, MVT::i64,
/*10285*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*10287*/     OPC_Scope, 41, /*->10330*/ // 3 children in Scope
/*10289*/       OPC_CheckPredicate, 13, // Predicate_load
/*10291*/       OPC_MoveParent,
/*10292*/       OPC_CheckType, MVT::i32,
/*10294*/       OPC_Scope, 16, /*->10312*/ // 2 children in Scope
/*10296*/         OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*10299*/         OPC_EmitMergeInputChains1_1,
/*10300*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::AL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (addc:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (AL:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*10312*/       /*Scope*/ 16, /*->10329*/
/*10313*/         OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*10316*/         OPC_EmitMergeInputChains1_1,
/*10317*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALY), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (addc:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (ALY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*10329*/       0, /*End of Scope*/
/*10330*/     /*Scope*/ 23, /*->10354*/
/*10331*/       OPC_CheckPredicate, 41, // Predicate_zextload
/*10333*/       OPC_CheckPredicate, 42, // Predicate_zextloadi32
/*10335*/       OPC_MoveParent,
/*10336*/       OPC_CheckType, MVT::i64,
/*10338*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*10341*/       OPC_EmitMergeInputChains1_1,
/*10342*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGF), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (addc:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>>) - Complexity = 19
                // Dst: (ALGF:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*10354*/     /*Scope*/ 21, /*->10376*/
/*10355*/       OPC_CheckPredicate, 13, // Predicate_load
/*10357*/       OPC_MoveParent,
/*10358*/       OPC_CheckType, MVT::i64,
/*10360*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*10363*/       OPC_EmitMergeInputChains1_1,
/*10364*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALG), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (addc:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (ALG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*10376*/     0, /*End of Scope*/
/*10377*/   /*Scope*/ 106, /*->10484*/
/*10378*/     OPC_MoveChild, 0,
/*10380*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*10383*/     OPC_RecordMemRef,
/*10384*/     OPC_RecordNode, // #0 = 'ld' chained node
/*10385*/     OPC_CheckFoldableChainNode,
/*10386*/     OPC_RecordChild1, // #1 = $XBD2
/*10387*/     OPC_CheckChild1Type, MVT::i64,
/*10389*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*10391*/     OPC_Scope, 42, /*->10435*/ // 3 children in Scope
/*10393*/       OPC_CheckPredicate, 13, // Predicate_load
/*10395*/       OPC_MoveParent,
/*10396*/       OPC_RecordChild1, // #2 = $R1src
/*10397*/       OPC_CheckType, MVT::i32,
/*10399*/       OPC_Scope, 16, /*->10417*/ // 2 children in Scope
/*10401*/         OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*10404*/         OPC_EmitMergeInputChains1_0,
/*10405*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::AL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (addc:i32 (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (AL:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*10417*/       /*Scope*/ 16, /*->10434*/
/*10418*/         OPC_CheckComplexPat, /*CP*/8, /*#*/1, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*10421*/         OPC_EmitMergeInputChains1_0,
/*10422*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALY), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (addc:i32 (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (ALY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*10434*/       0, /*End of Scope*/
/*10435*/     /*Scope*/ 24, /*->10460*/
/*10436*/       OPC_CheckPredicate, 41, // Predicate_zextload
/*10438*/       OPC_CheckPredicate, 42, // Predicate_zextloadi32
/*10440*/       OPC_MoveParent,
/*10441*/       OPC_RecordChild1, // #2 = $R1src
/*10442*/       OPC_CheckType, MVT::i64,
/*10444*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*10447*/       OPC_EmitMergeInputChains1_0,
/*10448*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGF), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (addc:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>>, GR64:i64:$R1src) - Complexity = 19
                // Dst: (ALGF:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*10460*/     /*Scope*/ 22, /*->10483*/
/*10461*/       OPC_CheckPredicate, 13, // Predicate_load
/*10463*/       OPC_MoveParent,
/*10464*/       OPC_RecordChild1, // #2 = $R1src
/*10465*/       OPC_CheckType, MVT::i64,
/*10467*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*10470*/       OPC_EmitMergeInputChains1_0,
/*10471*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALG), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (addc:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$R1src) - Complexity = 19
                // Dst: (ALG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*10483*/     0, /*End of Scope*/
/*10484*/   /*Scope*/ 35, /*->10520*/
/*10485*/     OPC_RecordChild0, // #0 = $src1
/*10486*/     OPC_MoveChild, 1,
/*10488*/     OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*10494*/     OPC_RecordChild0, // #1 = $src2
/*10495*/     OPC_MoveParent,
/*10496*/     OPC_CheckType, MVT::i64,
/*10498*/     OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*10501*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*10510*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFR), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
              // Src: (addc:i64 GR64:i64:$src1, (and:i64 GR64:i64:$src2, 4294967295:i64)) - Complexity = 11
              // Dst: (ALGFR:i64:i32 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*10520*/   /*Scope*/ 35, /*->10556*/
/*10521*/     OPC_MoveChild, 0,
/*10523*/     OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*10529*/     OPC_RecordChild0, // #0 = $src2
/*10530*/     OPC_MoveParent,
/*10531*/     OPC_RecordChild1, // #1 = $src1
/*10532*/     OPC_CheckType, MVT::i64,
/*10534*/     OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*10537*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*10546*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFR), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 3, 
              // Src: (addc:i64 (and:i64 GR64:i64:$src2, 4294967295:i64), GR64:i64:$src1) - Complexity = 11
              // Dst: (ALGFR:i64:i32 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*10556*/   /*Scope*/ 116, /*->10673*/
/*10557*/     OPC_RecordChild0, // #0 = $R3
/*10558*/     OPC_Scope, 94, /*->10654*/ // 2 children in Scope
/*10560*/       OPC_RecordChild1, // #1 = $I2
/*10561*/       OPC_MoveChild, 1,
/*10563*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10566*/       OPC_Scope, 22, /*->10590*/ // 4 children in Scope
/*10568*/         OPC_CheckPredicate, 34, // Predicate_imm32sx16
/*10570*/         OPC_MoveParent,
/*10571*/         OPC_CheckType, MVT::i32,
/*10573*/         OPC_CheckPatternPredicate, 1, // (Subtarget.hasDistinctOps())
/*10575*/         OPC_EmitConvertToTarget, 1,
/*10577*/         OPC_EmitNodeXForm, 2, 2, // SIMM16
/*10580*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALHSIK), 0|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (addc:i32 GR32:i32:$R3, (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$I2) - Complexity = 7
                  // Dst: (ALHSIK:i32:i32 GR32:i32:$R3, (SIMM16:i32 (imm:i32):$I2))
/*10590*/       /*Scope*/ 22, /*->10613*/
/*10591*/         OPC_CheckPredicate, 35, // Predicate_imm64sx16
/*10593*/         OPC_MoveParent,
/*10594*/         OPC_CheckType, MVT::i64,
/*10596*/         OPC_CheckPatternPredicate, 1, // (Subtarget.hasDistinctOps())
/*10598*/         OPC_EmitConvertToTarget, 1,
/*10600*/         OPC_EmitNodeXForm, 2, 2, // SIMM16
/*10603*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGHSIK), 0|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (addc:i64 GR64:i64:$R3, (imm:i64)<<P:Predicate_imm64sx16>><<X:SIMM16>>:$I2) - Complexity = 7
                  // Dst: (ALGHSIK:i64:i32 GR64:i64:$R3, (SIMM16:i64 (imm:i64):$I2))
/*10613*/       /*Scope*/ 20, /*->10634*/
/*10614*/         OPC_CheckPredicate, 66, // Predicate_imm64zx32
/*10616*/         OPC_MoveParent,
/*10617*/         OPC_CheckType, MVT::i64,
/*10619*/         OPC_EmitConvertToTarget, 1,
/*10621*/         OPC_EmitNodeXForm, 5, 2, // UIMM32
/*10624*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFI), 0|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (addc:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64zx32>><<X:UIMM32>>:$I2) - Complexity = 7
                  // Dst: (ALGFI:i64:i32 GR64:i64:$R1src, (UIMM32:i64 (imm:i64):$I2))
/*10634*/       /*Scope*/ 18, /*->10653*/
/*10635*/         OPC_MoveParent,
/*10636*/         OPC_CheckType, MVT::i32,
/*10638*/         OPC_EmitConvertToTarget, 1,
/*10640*/         OPC_EmitNodeXForm, 5, 2, // UIMM32
/*10643*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALFI), 0|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (addc:i32 GR32:i32:$R1src, (imm:i32)<<X:UIMM32>>:$I2) - Complexity = 6
                  // Dst: (ALFI:i32:i32 GR32:i32:$R1src, (UIMM32:i32 (imm:i32):$I2))
/*10653*/       0, /*End of Scope*/
/*10654*/     /*Scope*/ 17, /*->10672*/
/*10655*/       OPC_MoveChild, 1,
/*10657*/       OPC_CheckOpcode, TARGET_VAL(ISD::ZERO_EXTEND),
/*10660*/       OPC_RecordChild0, // #1 = $src2
/*10661*/       OPC_MoveParent,
/*10662*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFR), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (addc:i64 GR64:i64:$src1, (zext:i64 GR32:i32:$src2)) - Complexity = 6
                // Dst: (ALGFR:i64:i32 GR64:i64:$src1, GR32:i32:$src2)
/*10672*/     0, /*End of Scope*/
/*10673*/   /*Scope*/ 18, /*->10692*/
/*10674*/     OPC_MoveChild, 0,
/*10676*/     OPC_CheckOpcode, TARGET_VAL(ISD::ZERO_EXTEND),
/*10679*/     OPC_RecordChild0, // #0 = $src2
/*10680*/     OPC_MoveParent,
/*10681*/     OPC_RecordChild1, // #1 = $src1
/*10682*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFR), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (addc:i64 (zext:i64 GR32:i32:$src2), GR64:i64:$src1) - Complexity = 6
              // Dst: (ALGFR:i64:i32 GR64:i64:$src1, GR32:i32:$src2)
/*10692*/   /*Scope*/ 28, /*->10721*/
/*10693*/     OPC_RecordChild0, // #0 = $R1src
/*10694*/     OPC_RecordChild1, // #1 = $R2
/*10695*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->10708
/*10698*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALR), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (addc:i32 GR32:i32:$R1src, GR32:i32:$R2) - Complexity = 3
                // Dst: (ALR:i32:i32 GR32:i32:$R1src, GR32:i32:$R2)
              /*SwitchType*/ 10,  MVT::i64,// ->10720
/*10710*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGR), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (addc:i64 GR64:i64:$R1src, GR64:i64:$R2) - Complexity = 3
                // Dst: (ALGR:i64:i32 GR64:i64:$R1src, GR64:i64:$R2)
              0, // EndSwitchType
/*10721*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 16|128,1/*144*/,  TARGET_VAL(ISD::ADDE),// ->10870
/*10726*/   OPC_CaptureGlueInput,
/*10727*/   OPC_Scope, 55, /*->10784*/ // 3 children in Scope
/*10729*/     OPC_RecordChild0, // #0 = $R1src
/*10730*/     OPC_MoveChild, 1,
/*10732*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*10735*/     OPC_RecordMemRef,
/*10736*/     OPC_RecordNode, // #1 = 'ld' chained node
/*10737*/     OPC_CheckFoldableChainNode,
/*10738*/     OPC_RecordChild1, // #2 = $XBD2
/*10739*/     OPC_CheckChild1Type, MVT::i64,
/*10741*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*10743*/     OPC_CheckPredicate, 13, // Predicate_load
/*10745*/     OPC_MoveParent,
/*10746*/     OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->10765
/*10749*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*10752*/       OPC_EmitMergeInputChains1_1,
/*10753*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALC), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (adde:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (ALC:i32:i32 GR32:i32:$R1src, bdxaddr20only:i64:$XBD2)
              /*SwitchType*/ 16,  MVT::i64,// ->10783
/*10767*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*10770*/       OPC_EmitMergeInputChains1_1,
/*10771*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALCG), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (adde:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (ALCG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
              0, // EndSwitchType
/*10784*/   /*Scope*/ 55, /*->10840*/
/*10785*/     OPC_MoveChild, 0,
/*10787*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*10790*/     OPC_RecordMemRef,
/*10791*/     OPC_RecordNode, // #0 = 'ld' chained node
/*10792*/     OPC_CheckFoldableChainNode,
/*10793*/     OPC_RecordChild1, // #1 = $XBD2
/*10794*/     OPC_CheckChild1Type, MVT::i64,
/*10796*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*10798*/     OPC_CheckPredicate, 13, // Predicate_load
/*10800*/     OPC_MoveParent,
/*10801*/     OPC_RecordChild1, // #2 = $R1src
/*10802*/     OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->10821
/*10805*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*10808*/       OPC_EmitMergeInputChains1_0,
/*10809*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALC), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (adde:i32 (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                // Dst: (ALC:i32:i32 GR32:i32:$R1src, bdxaddr20only:i64:$XBD2)
              /*SwitchType*/ 16,  MVT::i64,// ->10839
/*10823*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*10826*/       OPC_EmitMergeInputChains1_0,
/*10827*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALCG), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (adde:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$R1src) - Complexity = 19
                // Dst: (ALCG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
              0, // EndSwitchType
/*10840*/   /*Scope*/ 28, /*->10869*/
/*10841*/     OPC_RecordChild0, // #0 = $R1src
/*10842*/     OPC_RecordChild1, // #1 = $R2
/*10843*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->10856
/*10846*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALCR), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (adde:i32 GR32:i32:$R1src, GR32:i32:$R2) - Complexity = 3
                // Dst: (ALCR:i32:i32 GR32:i32:$R1src, GR32:i32:$R2)
              /*SwitchType*/ 10,  MVT::i64,// ->10868
/*10858*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALCGR), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (adde:i64 GR64:i64:$R1src, GR64:i64:$R2) - Complexity = 3
                // Dst: (ALCGR:i64:i32 GR64:i64:$R1src, GR64:i64:$R2)
              0, // EndSwitchType
/*10869*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 60|128,1/*188*/,  TARGET_VAL(ISD::SUBC),// ->11062
/*10874*/   OPC_RecordChild0, // #0 = $R1src
/*10875*/   OPC_Scope, 27|128,1/*155*/, /*->11033*/ // 2 children in Scope
/*10878*/     OPC_MoveChild, 1,
/*10880*/     OPC_Scope, 101, /*->10983*/ // 3 children in Scope
/*10882*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*10885*/       OPC_RecordMemRef,
/*10886*/       OPC_RecordNode, // #1 = 'ld' chained node
/*10887*/       OPC_CheckFoldableChainNode,
/*10888*/       OPC_RecordChild1, // #2 = $XBD2
/*10889*/       OPC_CheckChild1Type, MVT::i64,
/*10891*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*10893*/       OPC_Scope, 41, /*->10936*/ // 3 children in Scope
/*10895*/         OPC_CheckPredicate, 13, // Predicate_load
/*10897*/         OPC_MoveParent,
/*10898*/         OPC_CheckType, MVT::i32,
/*10900*/         OPC_Scope, 16, /*->10918*/ // 2 children in Scope
/*10902*/           OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*10905*/           OPC_EmitMergeInputChains1_1,
/*10906*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::SL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (subc:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                    // Dst: (SL:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*10918*/         /*Scope*/ 16, /*->10935*/
/*10919*/           OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*10922*/           OPC_EmitMergeInputChains1_1,
/*10923*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLY), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (subc:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                    // Dst: (SLY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*10935*/         0, /*End of Scope*/
/*10936*/       /*Scope*/ 23, /*->10960*/
/*10937*/         OPC_CheckPredicate, 41, // Predicate_zextload
/*10939*/         OPC_CheckPredicate, 42, // Predicate_zextloadi32
/*10941*/         OPC_MoveParent,
/*10942*/         OPC_CheckType, MVT::i64,
/*10944*/         OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*10947*/         OPC_EmitMergeInputChains1_1,
/*10948*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGF), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (subc:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>>) - Complexity = 19
                  // Dst: (SLGF:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*10960*/       /*Scope*/ 21, /*->10982*/
/*10961*/         OPC_CheckPredicate, 13, // Predicate_load
/*10963*/         OPC_MoveParent,
/*10964*/         OPC_CheckType, MVT::i64,
/*10966*/         OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*10969*/         OPC_EmitMergeInputChains1_1,
/*10970*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLG), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (subc:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (SLG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*10982*/       0, /*End of Scope*/
/*10983*/     /*Scope*/ 32, /*->11016*/
/*10984*/       OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*10990*/       OPC_RecordChild0, // #1 = $src2
/*10991*/       OPC_MoveParent,
/*10992*/       OPC_CheckType, MVT::i64,
/*10994*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*10997*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*11006*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGFR), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (subc:i64 GR64:i64:$src1, (and:i64 GR64:i64:$src2, 4294967295:i64)) - Complexity = 11
                // Dst: (SLGFR:i64:i32 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*11016*/     /*Scope*/ 15, /*->11032*/
/*11017*/       OPC_CheckOpcode, TARGET_VAL(ISD::ZERO_EXTEND),
/*11020*/       OPC_RecordChild0, // #1 = $src2
/*11021*/       OPC_MoveParent,
/*11022*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGFR), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (subc:i64 GR64:i64:$src1, (zext:i64 GR32:i32:$src2)) - Complexity = 6
                // Dst: (SLGFR:i64:i32 GR64:i64:$src1, GR32:i32:$src2)
/*11032*/     0, /*End of Scope*/
/*11033*/   /*Scope*/ 27, /*->11061*/
/*11034*/     OPC_RecordChild1, // #1 = $R2
/*11035*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->11048
/*11038*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLR), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (subc:i32 GR32:i32:$R1src, GR32:i32:$R2) - Complexity = 3
                // Dst: (SLR:i32:i32 GR32:i32:$R1src, GR32:i32:$R2)
              /*SwitchType*/ 10,  MVT::i64,// ->11060
/*11050*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGR), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (subc:i64 GR64:i64:$R1src, GR64:i64:$R2) - Complexity = 3
                // Dst: (SLGR:i64:i32 GR64:i64:$R1src, GR64:i64:$R2)
              0, // EndSwitchType
/*11061*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 87,  TARGET_VAL(ISD::SUBE),// ->11152
/*11065*/   OPC_CaptureGlueInput,
/*11066*/   OPC_RecordChild0, // #0 = $R1src
/*11067*/   OPC_Scope, 54, /*->11123*/ // 2 children in Scope
/*11069*/     OPC_MoveChild, 1,
/*11071*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*11074*/     OPC_RecordMemRef,
/*11075*/     OPC_RecordNode, // #1 = 'ld' chained node
/*11076*/     OPC_CheckFoldableChainNode,
/*11077*/     OPC_RecordChild1, // #2 = $XBD2
/*11078*/     OPC_CheckChild1Type, MVT::i64,
/*11080*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*11082*/     OPC_CheckPredicate, 13, // Predicate_load
/*11084*/     OPC_MoveParent,
/*11085*/     OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->11104
/*11088*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*11091*/       OPC_EmitMergeInputChains1_1,
/*11092*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLB), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (sube:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (SLB:i32:i32 GR32:i32:$R1src, bdxaddr20only:i64:$XBD2)
              /*SwitchType*/ 16,  MVT::i64,// ->11122
/*11106*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*11109*/       OPC_EmitMergeInputChains1_1,
/*11110*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLBG), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (sube:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (SLBG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
              0, // EndSwitchType
/*11123*/   /*Scope*/ 27, /*->11151*/
/*11124*/     OPC_RecordChild1, // #1 = $R2
/*11125*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->11138
/*11128*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLBR), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sube:i32 GR32:i32:$R1src, GR32:i32:$R2) - Complexity = 3
                // Dst: (SLBR:i32:i32 GR32:i32:$R1src, GR32:i32:$R2)
              /*SwitchType*/ 10,  MVT::i64,// ->11150
/*11140*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGBR), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sube:i64 GR64:i64:$R1src, GR64:i64:$R2) - Complexity = 3
                // Dst: (SLGBR:i64:i32 GR64:i64:$R1src, GR64:i64:$R2)
              0, // EndSwitchType
/*11151*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 90|128,3/*474*/,  TARGET_VAL(ISD::AND),// ->11630
/*11156*/   OPC_Scope, 75, /*->11233*/ // 8 children in Scope
/*11158*/     OPC_RecordChild0, // #0 = $R1src
/*11159*/     OPC_MoveChild, 1,
/*11161*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*11164*/     OPC_RecordMemRef,
/*11165*/     OPC_RecordNode, // #1 = 'ld' chained node
/*11166*/     OPC_CheckFoldableChainNode,
/*11167*/     OPC_RecordChild1, // #2 = $XBD2
/*11168*/     OPC_CheckChild1Type, MVT::i64,
/*11170*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*11172*/     OPC_CheckPredicate, 13, // Predicate_load
/*11174*/     OPC_MoveParent,
/*11175*/     OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->11214
/*11178*/       OPC_Scope, 16, /*->11196*/ // 2 children in Scope
/*11180*/         OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*11183*/         OPC_EmitMergeInputChains1_1,
/*11184*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::N), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (and:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (N:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*11196*/       /*Scope*/ 16, /*->11213*/
/*11197*/         OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*11200*/         OPC_EmitMergeInputChains1_1,
/*11201*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::NY), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (and:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (NY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*11213*/       0, /*End of Scope*/
              /*SwitchType*/ 16,  MVT::i64,// ->11232
/*11216*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*11219*/       OPC_EmitMergeInputChains1_1,
/*11220*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::NG), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (and:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (NG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
              0, // EndSwitchType
/*11233*/   /*Scope*/ 75, /*->11309*/
/*11234*/     OPC_MoveChild, 0,
/*11236*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*11239*/     OPC_RecordMemRef,
/*11240*/     OPC_RecordNode, // #0 = 'ld' chained node
/*11241*/     OPC_CheckFoldableChainNode,
/*11242*/     OPC_RecordChild1, // #1 = $XBD2
/*11243*/     OPC_CheckChild1Type, MVT::i64,
/*11245*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*11247*/     OPC_CheckPredicate, 13, // Predicate_load
/*11249*/     OPC_MoveParent,
/*11250*/     OPC_RecordChild1, // #2 = $R1src
/*11251*/     OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->11290
/*11254*/       OPC_Scope, 16, /*->11272*/ // 2 children in Scope
/*11256*/         OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*11259*/         OPC_EmitMergeInputChains1_0,
/*11260*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::N), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (and:i32 (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (N:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*11272*/       /*Scope*/ 16, /*->11289*/
/*11273*/         OPC_CheckComplexPat, /*CP*/8, /*#*/1, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*11276*/         OPC_EmitMergeInputChains1_0,
/*11277*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::NY), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (and:i32 (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (NY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*11289*/       0, /*End of Scope*/
              /*SwitchType*/ 16,  MVT::i64,// ->11308
/*11292*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*11295*/       OPC_EmitMergeInputChains1_0,
/*11296*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::NG), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (and:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$R1src) - Complexity = 19
                // Dst: (NG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
              0, // EndSwitchType
/*11309*/   /*Scope*/ 14, /*->11324*/
/*11310*/     OPC_CheckAndImm, 127|128,1/*255*/, 
/*11313*/     OPC_RecordChild0, // #0 = $R2
/*11314*/     OPC_CheckType, MVT::i32,
/*11316*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLCR), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (and:i32 GR32:i32:$R2, 255:i32) - Complexity = 8
              // Dst: (LLCR:i32 GR32:i32:$R2)
/*11324*/   /*Scope*/ 15, /*->11340*/
/*11325*/     OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*11329*/     OPC_RecordChild0, // #0 = $R2
/*11330*/     OPC_CheckType, MVT::i32,
/*11332*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLHR), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (and:i32 GR32:i32:$R2, 65535:i32) - Complexity = 8
              // Dst: (LLHR:i32 GR32:i32:$R2)
/*11340*/   /*Scope*/ 14, /*->11355*/
/*11341*/     OPC_CheckAndImm, 127|128,1/*255*/, 
/*11344*/     OPC_RecordChild0, // #0 = $R2
/*11345*/     OPC_CheckType, MVT::i64,
/*11347*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGCR), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (and:i64 GR64:i64:$R2, 255:i64) - Complexity = 8
              // Dst: (LLGCR:i64 GR64:i64:$R2)
/*11355*/   /*Scope*/ 15, /*->11371*/
/*11356*/     OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*11360*/     OPC_RecordChild0, // #0 = $R2
/*11361*/     OPC_CheckType, MVT::i64,
/*11363*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGHR), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (and:i64 GR64:i64:$R2, 65535:i64) - Complexity = 8
              // Dst: (LLGHR:i64 GR64:i64:$R2)
/*11371*/   /*Scope*/ 29, /*->11401*/
/*11372*/     OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*11378*/     OPC_RecordChild0, // #0 = $src
/*11379*/     OPC_CheckType, MVT::i64,
/*11381*/     OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*11384*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*11393*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGFR), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
              // Src: (and:i64 GR64:i64:$src, 4294967295:i64) - Complexity = 8
              // Dst: (LLGFR:i64 (EXTRACT_SUBREG:i32 GR64:i64:$src, subreg_32bit:i32))
/*11401*/   /*Scope*/ 98|128,1/*226*/, /*->11629*/
/*11403*/     OPC_RecordChild0, // #0 = $R1src
/*11404*/     OPC_RecordChild1, // #1 = $I2
/*11405*/     OPC_Scope, 66|128,1/*194*/, /*->11602*/ // 3 children in Scope
/*11408*/       OPC_MoveChild, 1,
/*11410*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11413*/       OPC_Scope, 20, /*->11435*/ // 9 children in Scope
/*11415*/         OPC_CheckPredicate, 68, // Predicate_imm32ll16c
/*11417*/         OPC_MoveParent,
/*11418*/         OPC_CheckType, MVT::i32,
/*11420*/         OPC_EmitConvertToTarget, 1,
/*11422*/         OPC_EmitNodeXForm, 6, 2, // LL16
/*11425*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::NILL32), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i32 GR32:i32:$R1src, (imm:i32)<<P:Predicate_imm32ll16c>><<X:LL16>>:$I2) - Complexity = 7
                  // Dst: (NILL32:i32:i32 GR32:i32:$R1src, (LL16:i32 (imm:i32):$I2))
/*11435*/       /*Scope*/ 20, /*->11456*/
/*11436*/         OPC_CheckPredicate, 69, // Predicate_imm32lh16c
/*11438*/         OPC_MoveParent,
/*11439*/         OPC_CheckType, MVT::i32,
/*11441*/         OPC_EmitConvertToTarget, 1,
/*11443*/         OPC_EmitNodeXForm, 7, 2, // LH16
/*11446*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::NILH32), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i32 GR32:i32:$R1src, (imm:i32)<<P:Predicate_imm32lh16c>><<X:LH16>>:$I2) - Complexity = 7
                  // Dst: (NILH32:i32:i32 GR32:i32:$R1src, (LH16:i32 (imm:i32):$I2))
/*11456*/       /*Scope*/ 20, /*->11477*/
/*11457*/         OPC_CheckPredicate, 70, // Predicate_imm64ll16c
/*11459*/         OPC_MoveParent,
/*11460*/         OPC_CheckType, MVT::i64,
/*11462*/         OPC_EmitConvertToTarget, 1,
/*11464*/         OPC_EmitNodeXForm, 6, 2, // LL16
/*11467*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::NILL), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64ll16c>><<X:LL16>>:$I2) - Complexity = 7
                  // Dst: (NILL:i64:i32 GR64:i64:$R1src, (LL16:i64 (imm:i64):$I2))
/*11477*/       /*Scope*/ 20, /*->11498*/
/*11478*/         OPC_CheckPredicate, 71, // Predicate_imm64lh16c
/*11480*/         OPC_MoveParent,
/*11481*/         OPC_CheckType, MVT::i64,
/*11483*/         OPC_EmitConvertToTarget, 1,
/*11485*/         OPC_EmitNodeXForm, 7, 2, // LH16
/*11488*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::NILH), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64lh16c>><<X:LH16>>:$I2) - Complexity = 7
                  // Dst: (NILH:i64:i32 GR64:i64:$R1src, (LH16:i64 (imm:i64):$I2))
/*11498*/       /*Scope*/ 20, /*->11519*/
/*11499*/         OPC_CheckPredicate, 72, // Predicate_imm64hl16c
/*11501*/         OPC_MoveParent,
/*11502*/         OPC_CheckType, MVT::i64,
/*11504*/         OPC_EmitConvertToTarget, 1,
/*11506*/         OPC_EmitNodeXForm, 8, 2, // HL16
/*11509*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::NIHL), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64hl16c>><<X:HL16>>:$I2) - Complexity = 7
                  // Dst: (NIHL:i64:i32 GR64:i64:$R1src, (HL16:i64 (imm:i64):$I2))
/*11519*/       /*Scope*/ 20, /*->11540*/
/*11520*/         OPC_CheckPredicate, 73, // Predicate_imm64hh16c
/*11522*/         OPC_MoveParent,
/*11523*/         OPC_CheckType, MVT::i64,
/*11525*/         OPC_EmitConvertToTarget, 1,
/*11527*/         OPC_EmitNodeXForm, 9, 2, // HH16
/*11530*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::NIHH), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64hh16c>><<X:HH16>>:$I2) - Complexity = 7
                  // Dst: (NIHH:i64:i32 GR64:i64:$R1src, (HH16:i64 (imm:i64):$I2))
/*11540*/       /*Scope*/ 20, /*->11561*/
/*11541*/         OPC_CheckPredicate, 74, // Predicate_imm64lf32c
/*11543*/         OPC_MoveParent,
/*11544*/         OPC_CheckType, MVT::i64,
/*11546*/         OPC_EmitConvertToTarget, 1,
/*11548*/         OPC_EmitNodeXForm, 3, 2, // LF32
/*11551*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::NILF), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64lf32c>><<X:LF32>>:$I2) - Complexity = 7
                  // Dst: (NILF:i64:i32 GR64:i64:$R1src, (LF32:i64 (imm:i64):$I2))
/*11561*/       /*Scope*/ 20, /*->11582*/
/*11562*/         OPC_CheckPredicate, 75, // Predicate_imm64hf32c
/*11564*/         OPC_MoveParent,
/*11565*/         OPC_CheckType, MVT::i64,
/*11567*/         OPC_EmitConvertToTarget, 1,
/*11569*/         OPC_EmitNodeXForm, 4, 2, // HF32
/*11572*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::NIHF), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64hf32c>><<X:HF32>>:$I2) - Complexity = 7
                  // Dst: (NIHF:i64:i32 GR64:i64:$R1src, (HF32:i64 (imm:i64):$I2))
/*11582*/       /*Scope*/ 18, /*->11601*/
/*11583*/         OPC_MoveParent,
/*11584*/         OPC_CheckType, MVT::i32,
/*11586*/         OPC_EmitConvertToTarget, 1,
/*11588*/         OPC_EmitNodeXForm, 5, 2, // UIMM32
/*11591*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::NILF32), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i32 GR32:i32:$R1src, (imm:i32)<<X:UIMM32>>:$I2) - Complexity = 6
                  // Dst: (NILF32:i32:i32 GR32:i32:$R1src, (UIMM32:i32 (imm:i32):$I2))
/*11601*/       0, /*End of Scope*/
/*11602*/     /*Scope*/ 12, /*->11615*/
/*11603*/       OPC_CheckType, MVT::i32,
/*11605*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::NR), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 GR32:i32:$R1src, GR32:i32:$R2) - Complexity = 3
                // Dst: (NR:i32:i32 GR32:i32:$R1src, GR32:i32:$R2)
/*11615*/     /*Scope*/ 12, /*->11628*/
/*11616*/       OPC_CheckType, MVT::i64,
/*11618*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::NGR), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i64 GR64:i64:$R1src, GR64:i64:$R2) - Complexity = 3
                // Dst: (NGR:i64:i32 GR64:i64:$R1src, GR64:i64:$R2)
/*11628*/     0, /*End of Scope*/
/*11629*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 10|128,4/*522*/,  TARGET_VAL(ISD::MUL),// ->12156
/*11634*/   OPC_Scope, 14|128,1/*142*/, /*->11779*/ // 7 children in Scope
/*11637*/     OPC_RecordChild0, // #0 = $R1src
/*11638*/     OPC_MoveChild, 1,
/*11640*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*11643*/     OPC_RecordMemRef,
/*11644*/     OPC_RecordNode, // #1 = 'ld' chained node
/*11645*/     OPC_CheckFoldableChainNode,
/*11646*/     OPC_RecordChild1, // #2 = $XBD2
/*11647*/     OPC_CheckChild1Type, MVT::i64,
/*11649*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*11651*/     OPC_Scope, 41, /*->11694*/ // 4 children in Scope
/*11653*/       OPC_CheckPredicate, 38, // Predicate_sextload
/*11655*/       OPC_CheckPredicate, 39, // Predicate_sextloadi16
/*11657*/       OPC_MoveParent,
/*11658*/       OPC_CheckType, MVT::i32,
/*11660*/       OPC_Scope, 15, /*->11677*/ // 2 children in Scope
/*11662*/         OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*11665*/         OPC_EmitMergeInputChains1_1,
/*11666*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MH), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (mul:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>) - Complexity = 19
                  // Dst: (MH:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*11677*/       /*Scope*/ 15, /*->11693*/
/*11678*/         OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*11681*/         OPC_EmitMergeInputChains1_1,
/*11682*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MHY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (mul:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>) - Complexity = 19
                  // Dst: (MHY:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*11693*/       0, /*End of Scope*/
/*11694*/     /*Scope*/ 39, /*->11734*/
/*11695*/       OPC_CheckPredicate, 13, // Predicate_load
/*11697*/       OPC_MoveParent,
/*11698*/       OPC_CheckType, MVT::i32,
/*11700*/       OPC_Scope, 15, /*->11717*/ // 2 children in Scope
/*11702*/         OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*11705*/         OPC_EmitMergeInputChains1_1,
/*11706*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MS), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (mul:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (MS:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*11717*/       /*Scope*/ 15, /*->11733*/
/*11718*/         OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*11721*/         OPC_EmitMergeInputChains1_1,
/*11722*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (mul:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (MSY:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*11733*/       0, /*End of Scope*/
/*11734*/     /*Scope*/ 22, /*->11757*/
/*11735*/       OPC_CheckPredicate, 38, // Predicate_sextload
/*11737*/       OPC_CheckPredicate, 40, // Predicate_sextloadi32
/*11739*/       OPC_MoveParent,
/*11740*/       OPC_CheckType, MVT::i64,
/*11742*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*11745*/       OPC_EmitMergeInputChains1_1,
/*11746*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSGF), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (mul:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>>) - Complexity = 19
                // Dst: (MSGF:i64 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*11757*/     /*Scope*/ 20, /*->11778*/
/*11758*/       OPC_CheckPredicate, 13, // Predicate_load
/*11760*/       OPC_MoveParent,
/*11761*/       OPC_CheckType, MVT::i64,
/*11763*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*11766*/       OPC_EmitMergeInputChains1_1,
/*11767*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSG), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (mul:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (MSG:i64 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*11778*/     0, /*End of Scope*/
/*11779*/   /*Scope*/ 17|128,1/*145*/, /*->11926*/
/*11781*/     OPC_MoveChild, 0,
/*11783*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*11786*/     OPC_RecordMemRef,
/*11787*/     OPC_RecordNode, // #0 = 'ld' chained node
/*11788*/     OPC_CheckFoldableChainNode,
/*11789*/     OPC_RecordChild1, // #1 = $XBD2
/*11790*/     OPC_CheckChild1Type, MVT::i64,
/*11792*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*11794*/     OPC_Scope, 42, /*->11838*/ // 4 children in Scope
/*11796*/       OPC_CheckPredicate, 38, // Predicate_sextload
/*11798*/       OPC_CheckPredicate, 39, // Predicate_sextloadi16
/*11800*/       OPC_MoveParent,
/*11801*/       OPC_RecordChild1, // #2 = $R1src
/*11802*/       OPC_CheckType, MVT::i32,
/*11804*/       OPC_Scope, 15, /*->11821*/ // 2 children in Scope
/*11806*/         OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*11809*/         OPC_EmitMergeInputChains1_0,
/*11810*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MH), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (mul:i32 (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (MH:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*11821*/       /*Scope*/ 15, /*->11837*/
/*11822*/         OPC_CheckComplexPat, /*CP*/8, /*#*/1, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*11825*/         OPC_EmitMergeInputChains1_0,
/*11826*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MHY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (mul:i32 (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (MHY:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*11837*/       0, /*End of Scope*/
/*11838*/     /*Scope*/ 40, /*->11879*/
/*11839*/       OPC_CheckPredicate, 13, // Predicate_load
/*11841*/       OPC_MoveParent,
/*11842*/       OPC_RecordChild1, // #2 = $R1src
/*11843*/       OPC_CheckType, MVT::i32,
/*11845*/       OPC_Scope, 15, /*->11862*/ // 2 children in Scope
/*11847*/         OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*11850*/         OPC_EmitMergeInputChains1_0,
/*11851*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MS), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (mul:i32 (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (MS:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*11862*/       /*Scope*/ 15, /*->11878*/
/*11863*/         OPC_CheckComplexPat, /*CP*/8, /*#*/1, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*11866*/         OPC_EmitMergeInputChains1_0,
/*11867*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (mul:i32 (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (MSY:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*11878*/       0, /*End of Scope*/
/*11879*/     /*Scope*/ 23, /*->11903*/
/*11880*/       OPC_CheckPredicate, 38, // Predicate_sextload
/*11882*/       OPC_CheckPredicate, 40, // Predicate_sextloadi32
/*11884*/       OPC_MoveParent,
/*11885*/       OPC_RecordChild1, // #2 = $R1src
/*11886*/       OPC_CheckType, MVT::i64,
/*11888*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*11891*/       OPC_EmitMergeInputChains1_0,
/*11892*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSGF), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (mul:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>>, GR64:i64:$R1src) - Complexity = 19
                // Dst: (MSGF:i64 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*11903*/     /*Scope*/ 21, /*->11925*/
/*11904*/       OPC_CheckPredicate, 13, // Predicate_load
/*11906*/       OPC_MoveParent,
/*11907*/       OPC_RecordChild1, // #2 = $R1src
/*11908*/       OPC_CheckType, MVT::i64,
/*11910*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*11913*/       OPC_EmitMergeInputChains1_0,
/*11914*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSG), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (mul:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$R1src) - Complexity = 19
                // Dst: (MSG:i64 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*11925*/     0, /*End of Scope*/
/*11926*/   /*Scope*/ 113, /*->12040*/
/*11927*/     OPC_RecordChild0, // #0 = $R1src
/*11928*/     OPC_Scope, 68, /*->11998*/ // 3 children in Scope
/*11930*/       OPC_RecordChild1, // #1 = $I2
/*11931*/       OPC_MoveChild, 1,
/*11933*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11936*/       OPC_Scope, 19, /*->11957*/ // 3 children in Scope
/*11938*/         OPC_CheckPredicate, 34, // Predicate_imm32sx16
/*11940*/         OPC_MoveParent,
/*11941*/         OPC_CheckType, MVT::i32,
/*11943*/         OPC_EmitConvertToTarget, 1,
/*11945*/         OPC_EmitNodeXForm, 2, 2, // SIMM16
/*11948*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MHI), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (mul:i32 GR32:i32:$R1src, (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$I2) - Complexity = 7
                  // Dst: (MHI:i32 GR32:i32:$R1src, (SIMM16:i32 (imm:i32):$I2))
/*11957*/       /*Scope*/ 19, /*->11977*/
/*11958*/         OPC_CheckPredicate, 35, // Predicate_imm64sx16
/*11960*/         OPC_MoveParent,
/*11961*/         OPC_CheckType, MVT::i64,
/*11963*/         OPC_EmitConvertToTarget, 1,
/*11965*/         OPC_EmitNodeXForm, 2, 2, // SIMM16
/*11968*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MGHI), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (mul:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64sx16>><<X:SIMM16>>:$I2) - Complexity = 7
                  // Dst: (MGHI:i64 GR64:i64:$R1src, (SIMM16:i64 (imm:i64):$I2))
/*11977*/       /*Scope*/ 19, /*->11997*/
/*11978*/         OPC_CheckPredicate, 58, // Predicate_imm64sx32
/*11980*/         OPC_MoveParent,
/*11981*/         OPC_CheckType, MVT::i64,
/*11983*/         OPC_EmitConvertToTarget, 1,
/*11985*/         OPC_EmitNodeXForm, 10, 2, // SIMM32
/*11988*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSGFI), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (mul:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64sx32>><<X:SIMM32>>:$I2) - Complexity = 7
                  // Dst: (MSGFI:i64 GR64:i64:$R1src, (SIMM32:i64 (imm:i64):$I2))
/*11997*/       0, /*End of Scope*/
/*11998*/     /*Scope*/ 16, /*->12015*/
/*11999*/       OPC_MoveChild, 1,
/*12001*/       OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*12004*/       OPC_RecordChild0, // #1 = $src2
/*12005*/       OPC_MoveParent,
/*12006*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSGFR), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (mul:i64 GR64:i64:$src1, (sext:i64 GR32:i32:$src2)) - Complexity = 6
                // Dst: (MSGFR:i64 GR64:i64:$src1, GR32:i32:$src2)
/*12015*/     /*Scope*/ 23, /*->12039*/
/*12016*/       OPC_RecordChild1, // #1 = $I2
/*12017*/       OPC_MoveChild, 1,
/*12019*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12022*/       OPC_MoveParent,
/*12023*/       OPC_CheckType, MVT::i32,
/*12025*/       OPC_EmitConvertToTarget, 1,
/*12027*/       OPC_EmitNodeXForm, 10, 2, // SIMM32
/*12030*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSFI), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (mul:i32 GR32:i32:$R1src, (imm:i32)<<X:SIMM32>>:$I2) - Complexity = 6
                // Dst: (MSFI:i32 GR32:i32:$R1src, (SIMM32:i32 (imm:i32):$I2))
/*12039*/     0, /*End of Scope*/
/*12040*/   /*Scope*/ 17, /*->12058*/
/*12041*/     OPC_MoveChild, 0,
/*12043*/     OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*12046*/     OPC_RecordChild0, // #0 = $src2
/*12047*/     OPC_MoveParent,
/*12048*/     OPC_RecordChild1, // #1 = $src1
/*12049*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSGFR), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
              // Src: (mul:i64 (sext:i64 GR32:i32:$src2), GR64:i64:$src1) - Complexity = 6
              // Dst: (MSGFR:i64 GR64:i64:$src1, GR32:i32:$src2)
/*12058*/   /*Scope*/ 34, /*->12093*/
/*12059*/     OPC_RecordChild0, // #0 = $src1
/*12060*/     OPC_MoveChild, 1,
/*12062*/     OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
/*12065*/     OPC_RecordChild0, // #1 = $src2
/*12066*/     OPC_MoveChild, 1,
/*12068*/     OPC_CheckValueType, MVT::i32,
/*12070*/     OPC_MoveParent,
/*12071*/     OPC_MoveParent,
/*12072*/     OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*12075*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*12084*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSGFR), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
              // Src: (mul:i64 GR64:i64:$src1, (sext_inreg:i64 GR64:i64:$src2, i32:Other)) - Complexity = 6
              // Dst: (MSGFR:i64 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*12093*/   /*Scope*/ 34, /*->12128*/
/*12094*/     OPC_MoveChild, 0,
/*12096*/     OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
/*12099*/     OPC_RecordChild0, // #0 = $src2
/*12100*/     OPC_MoveChild, 1,
/*12102*/     OPC_CheckValueType, MVT::i32,
/*12104*/     OPC_MoveParent,
/*12105*/     OPC_MoveParent,
/*12106*/     OPC_RecordChild1, // #1 = $src1
/*12107*/     OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*12110*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*12119*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSGFR), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 3, 
              // Src: (mul:i64 (sext_inreg:i64 GR64:i64:$src2, i32:Other), GR64:i64:$src1) - Complexity = 6
              // Dst: (MSGFR:i64 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*12128*/   /*Scope*/ 26, /*->12155*/
/*12129*/     OPC_RecordChild0, // #0 = $R1src
/*12130*/     OPC_RecordChild1, // #1 = $R2
/*12131*/     OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->12143
/*12134*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (mul:i32 GR32:i32:$R1src, GR32:i32:$R2) - Complexity = 3
                // Dst: (MSR:i32 GR32:i32:$R1src, GR32:i32:$R2)
              /*SwitchType*/ 9,  MVT::i64,// ->12154
/*12145*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSGR), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (mul:i64 GR64:i64:$R1src, GR64:i64:$R2) - Complexity = 3
                // Dst: (MSGR:i64 GR64:i64:$R1src, GR64:i64:$R2)
              0, // EndSwitchType
/*12155*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 46,  TARGET_VAL(SystemZISD::UMUL_LOHI64),// ->12205
/*12159*/   OPC_RecordChild0, // #0 = $R1src
/*12160*/   OPC_Scope, 31, /*->12193*/ // 2 children in Scope
/*12162*/     OPC_MoveChild, 1,
/*12164*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*12167*/     OPC_RecordMemRef,
/*12168*/     OPC_RecordNode, // #1 = 'ld' chained node
/*12169*/     OPC_CheckFoldableChainNode,
/*12170*/     OPC_RecordChild1, // #2 = $XBD2
/*12171*/     OPC_CheckChild1Type, MVT::i64,
/*12173*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*12175*/     OPC_CheckPredicate, 13, // Predicate_load
/*12177*/     OPC_MoveParent,
/*12178*/     OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*12181*/     OPC_EmitMergeInputChains1_1,
/*12182*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::MLG), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::Untyped, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (z_umul_lohi64:Untyped GR128:Untyped:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
              // Dst: (MLG:Untyped GR128:Untyped:$R1src, bdxaddr20only:i64:$XBD2)
/*12193*/   /*Scope*/ 10, /*->12204*/
/*12194*/     OPC_RecordChild1, // #1 = $R2
/*12195*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::MLGR), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (z_umul_lohi64:Untyped GR128:Untyped:$R1src, GR64:i64:$R2) - Complexity = 3
              // Dst: (MLGR:Untyped GR128:Untyped:$R1src, GR64:i64:$R2)
/*12204*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 46,  TARGET_VAL(SystemZISD::SDIVREM32),// ->12254
/*12208*/   OPC_RecordChild0, // #0 = $R1src
/*12209*/   OPC_Scope, 31, /*->12242*/ // 2 children in Scope
/*12211*/     OPC_MoveChild, 1,
/*12213*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*12216*/     OPC_RecordMemRef,
/*12217*/     OPC_RecordNode, // #1 = 'ld' chained node
/*12218*/     OPC_CheckFoldableChainNode,
/*12219*/     OPC_RecordChild1, // #2 = $XBD2
/*12220*/     OPC_CheckChild1Type, MVT::i64,
/*12222*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*12224*/     OPC_CheckPredicate, 13, // Predicate_load
/*12226*/     OPC_MoveParent,
/*12227*/     OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*12230*/     OPC_EmitMergeInputChains1_1,
/*12231*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::DSGF), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::Untyped, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (z_sdivrem32:Untyped GR128:Untyped:$R1src, (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
              // Dst: (DSGF:Untyped GR128:Untyped:$R1src, bdxaddr20only:i64:$XBD2)
/*12242*/   /*Scope*/ 10, /*->12253*/
/*12243*/     OPC_RecordChild1, // #1 = $R2
/*12244*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::DSGFR), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (z_sdivrem32:Untyped GR128:Untyped:$R1src, GR32:i32:$R2) - Complexity = 3
              // Dst: (DSGFR:Untyped GR128:Untyped:$R1src, GR32:i32:$R2)
/*12253*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 46,  TARGET_VAL(SystemZISD::SDIVREM64),// ->12303
/*12257*/   OPC_RecordChild0, // #0 = $R1src
/*12258*/   OPC_Scope, 31, /*->12291*/ // 2 children in Scope
/*12260*/     OPC_MoveChild, 1,
/*12262*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*12265*/     OPC_RecordMemRef,
/*12266*/     OPC_RecordNode, // #1 = 'ld' chained node
/*12267*/     OPC_CheckFoldableChainNode,
/*12268*/     OPC_RecordChild1, // #2 = $XBD2
/*12269*/     OPC_CheckChild1Type, MVT::i64,
/*12271*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*12273*/     OPC_CheckPredicate, 13, // Predicate_load
/*12275*/     OPC_MoveParent,
/*12276*/     OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*12279*/     OPC_EmitMergeInputChains1_1,
/*12280*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::DSG), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::Untyped, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (z_sdivrem64:Untyped GR128:Untyped:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
              // Dst: (DSG:Untyped GR128:Untyped:$R1src, bdxaddr20only:i64:$XBD2)
/*12291*/   /*Scope*/ 10, /*->12302*/
/*12292*/     OPC_RecordChild1, // #1 = $R2
/*12293*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::DSGR), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (z_sdivrem64:Untyped GR128:Untyped:$R1src, GR64:i64:$R2) - Complexity = 3
              // Dst: (DSGR:Untyped GR128:Untyped:$R1src, GR64:i64:$R2)
/*12302*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 46,  TARGET_VAL(SystemZISD::UDIVREM32),// ->12352
/*12306*/   OPC_RecordChild0, // #0 = $R1src
/*12307*/   OPC_Scope, 31, /*->12340*/ // 2 children in Scope
/*12309*/     OPC_MoveChild, 1,
/*12311*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*12314*/     OPC_RecordMemRef,
/*12315*/     OPC_RecordNode, // #1 = 'ld' chained node
/*12316*/     OPC_CheckFoldableChainNode,
/*12317*/     OPC_RecordChild1, // #2 = $XBD2
/*12318*/     OPC_CheckChild1Type, MVT::i64,
/*12320*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*12322*/     OPC_CheckPredicate, 13, // Predicate_load
/*12324*/     OPC_MoveParent,
/*12325*/     OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*12328*/     OPC_EmitMergeInputChains1_1,
/*12329*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::DL), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::Untyped, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (z_udivrem32:Untyped GR128:Untyped:$R1src, (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
              // Dst: (DL:Untyped GR128:Untyped:$R1src, bdxaddr20only:i64:$XBD2)
/*12340*/   /*Scope*/ 10, /*->12351*/
/*12341*/     OPC_RecordChild1, // #1 = $R2
/*12342*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::DLR), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (z_udivrem32:Untyped GR128:Untyped:$R1src, GR32:i32:$R2) - Complexity = 3
              // Dst: (DLR:Untyped GR128:Untyped:$R1src, GR32:i32:$R2)
/*12351*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 46,  TARGET_VAL(SystemZISD::UDIVREM64),// ->12401
/*12355*/   OPC_RecordChild0, // #0 = $R1src
/*12356*/   OPC_Scope, 31, /*->12389*/ // 2 children in Scope
/*12358*/     OPC_MoveChild, 1,
/*12360*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*12363*/     OPC_RecordMemRef,
/*12364*/     OPC_RecordNode, // #1 = 'ld' chained node
/*12365*/     OPC_CheckFoldableChainNode,
/*12366*/     OPC_RecordChild1, // #2 = $XBD2
/*12367*/     OPC_CheckChild1Type, MVT::i64,
/*12369*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*12371*/     OPC_CheckPredicate, 13, // Predicate_load
/*12373*/     OPC_MoveParent,
/*12374*/     OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*12377*/     OPC_EmitMergeInputChains1_1,
/*12378*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::DLG), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::Untyped, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (z_udivrem64:Untyped GR128:Untyped:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
              // Dst: (DLG:Untyped GR128:Untyped:$R1src, bdxaddr20only:i64:$XBD2)
/*12389*/   /*Scope*/ 10, /*->12400*/
/*12390*/     OPC_RecordChild1, // #1 = $R2
/*12391*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::DLGR), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (z_udivrem64:Untyped GR128:Untyped:$R1src, GR64:i64:$R2) - Complexity = 3
              // Dst: (DLGR:Untyped GR128:Untyped:$R1src, GR64:i64:$R2)
/*12400*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 87,  TARGET_VAL(SystemZISD::ATOMIC_LOADW_AND),// ->12491
/*12404*/   OPC_RecordMemRef,
/*12405*/   OPC_RecordNode,   // #0 = 'z_atomic_loadw_and' chained node
/*12406*/   OPC_RecordChild1, // #1 = $ptr
/*12407*/   OPC_CheckChild1Type, MVT::i64,
/*12409*/   OPC_RecordChild2, // #2 = $src2
/*12410*/   OPC_Scope, 45, /*->12457*/ // 2 children in Scope
/*12412*/     OPC_MoveChild, 2,
/*12414*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12417*/     OPC_CheckPredicate, 69, // Predicate_imm32lh16c
/*12419*/     OPC_MoveParent,
/*12420*/     OPC_RecordChild3, // #3 = $bitshift
/*12421*/     OPC_RecordChild4, // #4 = $negbitshift
/*12422*/     OPC_RecordChild5, // #5 = $bitsize
/*12423*/     OPC_MoveChild, 5,
/*12425*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12428*/     OPC_MoveParent,
/*12429*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*12432*/     OPC_EmitMergeInputChains1_0,
/*12433*/     OPC_EmitConvertToTarget, 2,
/*12435*/     OPC_EmitNodeXForm, 7, 8, // LH16
/*12438*/     OPC_EmitConvertToTarget, 5,
/*12440*/     OPC_EmitNodeXForm, 5, 10, // UIMM32
/*12443*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_NILH), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 9, 3, 4, 11, 
              // Src: (z_atomic_loadw_and:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32lh16c>><<X:LH16>>:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 19
              // Dst: (ATOMIC_LOADW_NILH:i32:i32 bdaddr20only:i64:$ptr, (LH16:i32 (imm:i32):$src2), ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*12457*/   /*Scope*/ 32, /*->12490*/
/*12458*/     OPC_RecordChild3, // #3 = $bitshift
/*12459*/     OPC_RecordChild4, // #4 = $negbitshift
/*12460*/     OPC_RecordChild5, // #5 = $bitsize
/*12461*/     OPC_MoveChild, 5,
/*12463*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12466*/     OPC_MoveParent,
/*12467*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*12470*/     OPC_EmitMergeInputChains1_0,
/*12471*/     OPC_EmitConvertToTarget, 5,
/*12473*/     OPC_EmitNodeXForm, 5, 8, // UIMM32
/*12476*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_NR), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
              // Src: (z_atomic_loadw_and:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
              // Dst: (ATOMIC_LOADW_NR:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*12490*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 87,  TARGET_VAL(SystemZISD::ATOMIC_LOADW_OR),// ->12581
/*12494*/   OPC_RecordMemRef,
/*12495*/   OPC_RecordNode,   // #0 = 'z_atomic_loadw_or' chained node
/*12496*/   OPC_RecordChild1, // #1 = $ptr
/*12497*/   OPC_CheckChild1Type, MVT::i64,
/*12499*/   OPC_RecordChild2, // #2 = $src2
/*12500*/   OPC_Scope, 45, /*->12547*/ // 2 children in Scope
/*12502*/     OPC_MoveChild, 2,
/*12504*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12507*/     OPC_CheckPredicate, 49, // Predicate_imm32lh16
/*12509*/     OPC_MoveParent,
/*12510*/     OPC_RecordChild3, // #3 = $bitshift
/*12511*/     OPC_RecordChild4, // #4 = $negbitshift
/*12512*/     OPC_RecordChild5, // #5 = $bitsize
/*12513*/     OPC_MoveChild, 5,
/*12515*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12518*/     OPC_MoveParent,
/*12519*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*12522*/     OPC_EmitMergeInputChains1_0,
/*12523*/     OPC_EmitConvertToTarget, 2,
/*12525*/     OPC_EmitNodeXForm, 7, 8, // LH16
/*12528*/     OPC_EmitConvertToTarget, 5,
/*12530*/     OPC_EmitNodeXForm, 5, 10, // UIMM32
/*12533*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_OILH), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 9, 3, 4, 11, 
              // Src: (z_atomic_loadw_or:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32lh16>><<X:LH16>>:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 19
              // Dst: (ATOMIC_LOADW_OILH:i32:i32 bdaddr20only:i64:$ptr, (LH16:i32 (imm:i32):$src2), ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*12547*/   /*Scope*/ 32, /*->12580*/
/*12548*/     OPC_RecordChild3, // #3 = $bitshift
/*12549*/     OPC_RecordChild4, // #4 = $negbitshift
/*12550*/     OPC_RecordChild5, // #5 = $bitsize
/*12551*/     OPC_MoveChild, 5,
/*12553*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12556*/     OPC_MoveParent,
/*12557*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*12560*/     OPC_EmitMergeInputChains1_0,
/*12561*/     OPC_EmitConvertToTarget, 5,
/*12563*/     OPC_EmitNodeXForm, 5, 8, // UIMM32
/*12566*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_OR), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
              // Src: (z_atomic_loadw_or:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
              // Dst: (ATOMIC_LOADW_OR:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*12580*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 87,  TARGET_VAL(SystemZISD::ATOMIC_LOADW_NAND),// ->12671
/*12584*/   OPC_RecordMemRef,
/*12585*/   OPC_RecordNode,   // #0 = 'z_atomic_loadw_nand' chained node
/*12586*/   OPC_RecordChild1, // #1 = $ptr
/*12587*/   OPC_CheckChild1Type, MVT::i64,
/*12589*/   OPC_RecordChild2, // #2 = $src2
/*12590*/   OPC_Scope, 45, /*->12637*/ // 2 children in Scope
/*12592*/     OPC_MoveChild, 2,
/*12594*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12597*/     OPC_CheckPredicate, 69, // Predicate_imm32lh16c
/*12599*/     OPC_MoveParent,
/*12600*/     OPC_RecordChild3, // #3 = $bitshift
/*12601*/     OPC_RecordChild4, // #4 = $negbitshift
/*12602*/     OPC_RecordChild5, // #5 = $bitsize
/*12603*/     OPC_MoveChild, 5,
/*12605*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12608*/     OPC_MoveParent,
/*12609*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*12612*/     OPC_EmitMergeInputChains1_0,
/*12613*/     OPC_EmitConvertToTarget, 2,
/*12615*/     OPC_EmitNodeXForm, 7, 8, // LH16
/*12618*/     OPC_EmitConvertToTarget, 5,
/*12620*/     OPC_EmitNodeXForm, 5, 10, // UIMM32
/*12623*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_NILHi), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 9, 3, 4, 11, 
              // Src: (z_atomic_loadw_nand:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32lh16c>><<X:LH16>>:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 19
              // Dst: (ATOMIC_LOADW_NILHi:i32:i32 bdaddr20only:i64:$ptr, (LH16:i32 (imm:i32):$src2), ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*12637*/   /*Scope*/ 32, /*->12670*/
/*12638*/     OPC_RecordChild3, // #3 = $bitshift
/*12639*/     OPC_RecordChild4, // #4 = $negbitshift
/*12640*/     OPC_RecordChild5, // #5 = $bitsize
/*12641*/     OPC_MoveChild, 5,
/*12643*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12646*/     OPC_MoveParent,
/*12647*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*12650*/     OPC_EmitMergeInputChains1_0,
/*12651*/     OPC_EmitConvertToTarget, 5,
/*12653*/     OPC_EmitNodeXForm, 5, 8, // UIMM32
/*12656*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_NRi), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
              // Src: (z_atomic_loadw_nand:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
              // Dst: (ATOMIC_LOADW_NRi:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*12670*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 85,  TARGET_VAL(SystemZISD::ATOMIC_LOADW_ADD),// ->12759
/*12674*/   OPC_RecordMemRef,
/*12675*/   OPC_RecordNode,   // #0 = 'z_atomic_loadw_add' chained node
/*12676*/   OPC_RecordChild1, // #1 = $ptr
/*12677*/   OPC_CheckChild1Type, MVT::i64,
/*12679*/   OPC_RecordChild2, // #2 = $src2
/*12680*/   OPC_Scope, 43, /*->12725*/ // 2 children in Scope
/*12682*/     OPC_MoveChild, 2,
/*12684*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12687*/     OPC_MoveParent,
/*12688*/     OPC_RecordChild3, // #3 = $bitshift
/*12689*/     OPC_RecordChild4, // #4 = $negbitshift
/*12690*/     OPC_RecordChild5, // #5 = $bitsize
/*12691*/     OPC_MoveChild, 5,
/*12693*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12696*/     OPC_MoveParent,
/*12697*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*12700*/     OPC_EmitMergeInputChains1_0,
/*12701*/     OPC_EmitConvertToTarget, 2,
/*12703*/     OPC_EmitNodeXForm, 10, 8, // SIMM32
/*12706*/     OPC_EmitConvertToTarget, 5,
/*12708*/     OPC_EmitNodeXForm, 5, 10, // UIMM32
/*12711*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_AFI), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 9, 3, 4, 11, 
              // Src: (z_atomic_loadw_add:i32 bdaddr20only:i64:$ptr, (imm:i32)<<X:SIMM32>>:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 18
              // Dst: (ATOMIC_LOADW_AFI:i32:i32 bdaddr20only:i64:$ptr, (SIMM32:i32 (imm:i32):$src2), ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*12725*/   /*Scope*/ 32, /*->12758*/
/*12726*/     OPC_RecordChild3, // #3 = $bitshift
/*12727*/     OPC_RecordChild4, // #4 = $negbitshift
/*12728*/     OPC_RecordChild5, // #5 = $bitsize
/*12729*/     OPC_MoveChild, 5,
/*12731*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12734*/     OPC_MoveParent,
/*12735*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*12738*/     OPC_EmitMergeInputChains1_0,
/*12739*/     OPC_EmitConvertToTarget, 5,
/*12741*/     OPC_EmitNodeXForm, 5, 8, // UIMM32
/*12744*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_AR), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
              // Src: (z_atomic_loadw_add:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
              // Dst: (ATOMIC_LOADW_AR:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*12758*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 85,  TARGET_VAL(SystemZISD::ATOMIC_LOADW_XOR),// ->12847
/*12762*/   OPC_RecordMemRef,
/*12763*/   OPC_RecordNode,   // #0 = 'z_atomic_loadw_xor' chained node
/*12764*/   OPC_RecordChild1, // #1 = $ptr
/*12765*/   OPC_CheckChild1Type, MVT::i64,
/*12767*/   OPC_RecordChild2, // #2 = $src2
/*12768*/   OPC_Scope, 43, /*->12813*/ // 2 children in Scope
/*12770*/     OPC_MoveChild, 2,
/*12772*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12775*/     OPC_MoveParent,
/*12776*/     OPC_RecordChild3, // #3 = $bitshift
/*12777*/     OPC_RecordChild4, // #4 = $negbitshift
/*12778*/     OPC_RecordChild5, // #5 = $bitsize
/*12779*/     OPC_MoveChild, 5,
/*12781*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12784*/     OPC_MoveParent,
/*12785*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*12788*/     OPC_EmitMergeInputChains1_0,
/*12789*/     OPC_EmitConvertToTarget, 2,
/*12791*/     OPC_EmitNodeXForm, 5, 8, // UIMM32
/*12794*/     OPC_EmitConvertToTarget, 5,
/*12796*/     OPC_EmitNodeXForm, 5, 10, // UIMM32
/*12799*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_XILF), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 9, 3, 4, 11, 
              // Src: (z_atomic_loadw_xor:i32 bdaddr20only:i64:$ptr, (imm:i32)<<X:UIMM32>>:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 18
              // Dst: (ATOMIC_LOADW_XILF:i32:i32 bdaddr20only:i64:$ptr, (UIMM32:i32 (imm:i32):$src2), ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*12813*/   /*Scope*/ 32, /*->12846*/
/*12814*/     OPC_RecordChild3, // #3 = $bitshift
/*12815*/     OPC_RecordChild4, // #4 = $negbitshift
/*12816*/     OPC_RecordChild5, // #5 = $bitsize
/*12817*/     OPC_MoveChild, 5,
/*12819*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12822*/     OPC_MoveParent,
/*12823*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*12826*/     OPC_EmitMergeInputChains1_0,
/*12827*/     OPC_EmitConvertToTarget, 5,
/*12829*/     OPC_EmitNodeXForm, 5, 8, // UIMM32
/*12832*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_XR), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
              // Src: (z_atomic_loadw_xor:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
              // Dst: (ATOMIC_LOADW_XR:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*12846*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 27|128,6/*795*/,  TARGET_VAL(ISD::LOAD),// ->13646
/*12851*/   OPC_RecordMemRef,
/*12852*/   OPC_RecordNode,   // #0 = 'ld' chained node
/*12853*/   OPC_RecordChild1, // #1 = $I2
/*12854*/   OPC_CheckChild1Type, MVT::i64,
/*12856*/   OPC_CheckPredicate, 0, // Predicate_unindexedload
/*12858*/   OPC_Scope, 34, /*->12894*/ // 10 children in Scope
/*12860*/     OPC_CheckPredicate, 13, // Predicate_load
/*12862*/     OPC_CheckPredicate, 56, // Predicate_aligned_load
/*12864*/     OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->12879
/*12867*/       OPC_CheckComplexPat, /*CP*/5, /*#*/1, // selectPCRelAddress:$I2 #2
/*12870*/       OPC_EmitMergeInputChains1_0,
/*12871*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LRL), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (ld:i32 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_aligned_load>> - Complexity = 17
                // Dst: (LRL:i32 pcrel32:i64:$I2)
              /*SwitchType*/ 12,  MVT::i64,// ->12893
/*12881*/       OPC_CheckComplexPat, /*CP*/5, /*#*/1, // selectPCRelAddress:$I2 #2
/*12884*/       OPC_EmitMergeInputChains1_0,
/*12885*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGRL), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_aligned_load>> - Complexity = 17
                // Dst: (LGRL:i64 pcrel32:i64:$I2)
              0, // EndSwitchType
/*12894*/   /*Scope*/ 58, /*->12953*/
/*12895*/     OPC_CheckPredicate, 38, // Predicate_sextload
/*12897*/     OPC_Scope, 34, /*->12933*/ // 2 children in Scope
/*12899*/       OPC_CheckPredicate, 39, // Predicate_sextloadi16
/*12901*/       OPC_CheckPredicate, 55, // Predicate_aligned_sextloadi16
/*12903*/       OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->12918
/*12906*/         OPC_CheckComplexPat, /*CP*/5, /*#*/1, // selectPCRelAddress:$I2 #2
/*12909*/         OPC_EmitMergeInputChains1_0,
/*12910*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LHRL), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                  // Src: (ld:i32 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>><<P:Predicate_aligned_sextloadi16>> - Complexity = 17
                  // Dst: (LHRL:i32 pcrel32:i64:$I2)
                /*SwitchType*/ 12,  MVT::i64,// ->12932
/*12920*/         OPC_CheckComplexPat, /*CP*/5, /*#*/1, // selectPCRelAddress:$I2 #2
/*12923*/         OPC_EmitMergeInputChains1_0,
/*12924*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGHRL), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                  // Src: (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>><<P:Predicate_aligned_sextloadi16>> - Complexity = 17
                  // Dst: (LGHRL:i64 pcrel32:i64:$I2)
                0, // EndSwitchType
/*12933*/     /*Scope*/ 18, /*->12952*/
/*12934*/       OPC_CheckPredicate, 40, // Predicate_sextloadi32
/*12936*/       OPC_CheckPredicate, 57, // Predicate_aligned_sextloadi32
/*12938*/       OPC_CheckType, MVT::i64,
/*12940*/       OPC_CheckComplexPat, /*CP*/5, /*#*/1, // selectPCRelAddress:$I2 #2
/*12943*/       OPC_EmitMergeInputChains1_0,
/*12944*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGFRL), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>><<P:Predicate_aligned_sextloadi32>> - Complexity = 17
                // Dst: (LGFRL:i64 pcrel32:i64:$I2)
/*12952*/     0, /*End of Scope*/
/*12953*/   /*Scope*/ 34, /*->12988*/
/*12954*/     OPC_CheckPredicate, 76, // Predicate_extload
/*12956*/     OPC_CheckPredicate, 77, // Predicate_extloadi16
/*12958*/     OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->12973
/*12961*/       OPC_CheckComplexPat, /*CP*/5, /*#*/1, // selectPCRelAddress:$src #2
/*12964*/       OPC_EmitMergeInputChains1_0,
/*12965*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LHRL), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (ld:i32 pcrel32:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 17
                // Dst: (LHRL:i32 pcrel32:i64:$src)
              /*SwitchType*/ 12,  MVT::i64,// ->12987
/*12975*/       OPC_CheckComplexPat, /*CP*/5, /*#*/1, // selectPCRelAddress:$src #2
/*12978*/       OPC_EmitMergeInputChains1_0,
/*12979*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGHRL), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (ld:i64 pcrel32:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 17
                // Dst: (LGHRL:i64 pcrel32:i64:$src)
              0, // EndSwitchType
/*12988*/   /*Scope*/ 58, /*->13047*/
/*12989*/     OPC_CheckPredicate, 41, // Predicate_zextload
/*12991*/     OPC_Scope, 34, /*->13027*/ // 2 children in Scope
/*12993*/       OPC_CheckPredicate, 60, // Predicate_zextloadi16
/*12995*/       OPC_CheckPredicate, 61, // Predicate_aligned_zextloadi16
/*12997*/       OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->13012
/*13000*/         OPC_CheckComplexPat, /*CP*/5, /*#*/1, // selectPCRelAddress:$I2 #2
/*13003*/         OPC_EmitMergeInputChains1_0,
/*13004*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLHRL), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                  // Src: (ld:i32 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>><<P:Predicate_aligned_zextloadi16>> - Complexity = 17
                  // Dst: (LLHRL:i32 pcrel32:i64:$I2)
                /*SwitchType*/ 12,  MVT::i64,// ->13026
/*13014*/         OPC_CheckComplexPat, /*CP*/5, /*#*/1, // selectPCRelAddress:$I2 #2
/*13017*/         OPC_EmitMergeInputChains1_0,
/*13018*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGHRL), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                  // Src: (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>><<P:Predicate_aligned_zextloadi16>> - Complexity = 17
                  // Dst: (LLGHRL:i64 pcrel32:i64:$I2)
                0, // EndSwitchType
/*13027*/     /*Scope*/ 18, /*->13046*/
/*13028*/       OPC_CheckPredicate, 42, // Predicate_zextloadi32
/*13030*/       OPC_CheckPredicate, 62, // Predicate_aligned_zextloadi32
/*13032*/       OPC_CheckType, MVT::i64,
/*13034*/       OPC_CheckComplexPat, /*CP*/5, /*#*/1, // selectPCRelAddress:$I2 #2
/*13037*/       OPC_EmitMergeInputChains1_0,
/*13038*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGFRL), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>><<P:Predicate_aligned_zextloadi32>> - Complexity = 17
                // Dst: (LLGFRL:i64 pcrel32:i64:$I2)
/*13046*/     0, /*End of Scope*/
/*13047*/   /*Scope*/ 101, /*->13149*/
/*13048*/     OPC_CheckPredicate, 13, // Predicate_load
/*13050*/     OPC_SwitchType /*3 cases */, 48,  MVT::i32,// ->13101
/*13053*/       OPC_Scope, 14, /*->13069*/ // 3 children in Scope
/*13055*/         OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr12Pair:$XBD2 #2 #3 #4
/*13058*/         OPC_EmitMergeInputChains1_0,
/*13059*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::L), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (L:i32 bdxaddr12pair:i64:$XBD2)
/*13069*/       /*Scope*/ 14, /*->13084*/
/*13070*/         OPC_CheckComplexPat, /*CP*/8, /*#*/1, // selectBDXAddr20Pair:$XBD2 #2 #3 #4
/*13073*/         OPC_EmitMergeInputChains1_0,
/*13074*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (LY:i32 bdxaddr20pair:i64:$XBD2)
/*13084*/       /*Scope*/ 15, /*->13100*/
/*13085*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*13088*/         OPC_EmitMergeInputChains1_0,
/*13089*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LT), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (LT:i32:i32 bdxaddr20only:i64:$XBD2)
/*13100*/       0, /*End of Scope*/
              /*SwitchType*/ 29,  MVT::i64,// ->13132
/*13103*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*13106*/       OPC_EmitMergeInputChains1_0,
/*13107*/       OPC_Scope, 10, /*->13119*/ // 2 children in Scope
/*13109*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LG), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (LG:i64 bdxaddr20only:i64:$XBD2)
/*13119*/       /*Scope*/ 11, /*->13131*/
/*13120*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LTG), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (LTG:i64:i32 bdxaddr20only:i64:$XBD2)
/*13131*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::Untyped,// ->13148
/*13134*/       OPC_CheckComplexPat, /*CP*/9, /*#*/1, // selectBDXAddr20Only128:$src #2 #3 #4
/*13137*/       OPC_EmitMergeInputChains1_0,
/*13138*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::L128), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:Untyped bdxaddr20only128:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                // Dst: (L128:Untyped bdxaddr20only128:i64:$src)
              0, // EndSwitchType
/*13149*/   /*Scope*/ 2|128,1/*130*/, /*->13281*/
/*13151*/     OPC_CheckPredicate, 38, // Predicate_sextload
/*13153*/     OPC_SwitchType /*2 cases */, 54,  MVT::i32,// ->13210
/*13156*/       OPC_Scope, 16, /*->13174*/ // 2 children in Scope
/*13158*/         OPC_CheckPredicate, 78, // Predicate_sextloadi8
/*13160*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*13163*/         OPC_EmitMergeInputChains1_0,
/*13164*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 16
                  // Dst: (LB:i32 bdxaddr20only:i64:$XBD2)
/*13174*/       /*Scope*/ 34, /*->13209*/
/*13175*/         OPC_CheckPredicate, 39, // Predicate_sextloadi16
/*13177*/         OPC_Scope, 14, /*->13193*/ // 2 children in Scope
/*13179*/           OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr12Pair:$XBD2 #2 #3 #4
/*13182*/           OPC_EmitMergeInputChains1_0,
/*13183*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::LH), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 16
                    // Dst: (LH:i32 bdxaddr12pair:i64:$XBD2)
/*13193*/         /*Scope*/ 14, /*->13208*/
/*13194*/           OPC_CheckComplexPat, /*CP*/8, /*#*/1, // selectBDXAddr20Pair:$XBD2 #2 #3 #4
/*13197*/           OPC_EmitMergeInputChains1_0,
/*13198*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::LHY), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 16
                    // Dst: (LHY:i32 bdxaddr20pair:i64:$XBD2)
/*13208*/         0, /*End of Scope*/
/*13209*/       0, /*End of Scope*/
              /*SwitchType*/ 68,  MVT::i64,// ->13280
/*13212*/       OPC_Scope, 16, /*->13230*/ // 3 children in Scope
/*13214*/         OPC_CheckPredicate, 78, // Predicate_sextloadi8
/*13216*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*13219*/         OPC_EmitMergeInputChains1_0,
/*13220*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 16
                  // Dst: (LGB:i64 bdxaddr20only:i64:$XBD2)
/*13230*/       /*Scope*/ 16, /*->13247*/
/*13231*/         OPC_CheckPredicate, 39, // Predicate_sextloadi16
/*13233*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*13236*/         OPC_EmitMergeInputChains1_0,
/*13237*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGH), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 16
                  // Dst: (LGH:i64 bdxaddr20only:i64:$XBD2)
/*13247*/       /*Scope*/ 31, /*->13279*/
/*13248*/         OPC_CheckPredicate, 40, // Predicate_sextloadi32
/*13250*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*13253*/         OPC_EmitMergeInputChains1_0,
/*13254*/         OPC_Scope, 10, /*->13266*/ // 2 children in Scope
/*13256*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGF), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 16
                    // Dst: (LGF:i64 bdxaddr20only:i64:$XBD2)
/*13266*/         /*Scope*/ 11, /*->13278*/
/*13267*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::LTGF), 0|OPFL_Chain|OPFL_MemRefs,
                        2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 16
                    // Dst: (LTGF:i64:i32 bdxaddr20only:i64:$XBD2)
/*13278*/         0, /*End of Scope*/
/*13279*/       0, /*End of Scope*/
              0, // EndSwitchType
/*13281*/   /*Scope*/ 115, /*->13397*/
/*13282*/     OPC_CheckPredicate, 76, // Predicate_extload
/*13284*/     OPC_SwitchType /*2 cases */, 54,  MVT::i32,// ->13341
/*13287*/       OPC_Scope, 16, /*->13305*/ // 2 children in Scope
/*13289*/         OPC_CheckPredicate, 79, // Predicate_extloadi8
/*13291*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$src #2 #3 #4
/*13294*/         OPC_EmitMergeInputChains1_0,
/*13295*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 bdxaddr20only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 16
                  // Dst: (LB:i32 bdxaddr20only:i64:$src)
/*13305*/       /*Scope*/ 34, /*->13340*/
/*13306*/         OPC_CheckPredicate, 77, // Predicate_extloadi16
/*13308*/         OPC_Scope, 14, /*->13324*/ // 2 children in Scope
/*13310*/           OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr12Pair:$src #2 #3 #4
/*13313*/           OPC_EmitMergeInputChains1_0,
/*13314*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::LH), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:i32 bdxaddr12pair:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 16
                    // Dst: (LH:i32 bdxaddr12pair:i64:$src)
/*13324*/         /*Scope*/ 14, /*->13339*/
/*13325*/           OPC_CheckComplexPat, /*CP*/8, /*#*/1, // selectBDXAddr20Pair:$src #2 #3 #4
/*13328*/           OPC_EmitMergeInputChains1_0,
/*13329*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::LHY), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:i32 bdxaddr20pair:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 16
                    // Dst: (LHY:i32 bdxaddr20pair:i64:$src)
/*13339*/         0, /*End of Scope*/
/*13340*/       0, /*End of Scope*/
              /*SwitchType*/ 53,  MVT::i64,// ->13396
/*13343*/       OPC_Scope, 16, /*->13361*/ // 3 children in Scope
/*13345*/         OPC_CheckPredicate, 79, // Predicate_extloadi8
/*13347*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$src #2 #3 #4
/*13350*/         OPC_EmitMergeInputChains1_0,
/*13351*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 bdxaddr20only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 16
                  // Dst: (LGB:i64 bdxaddr20only:i64:$src)
/*13361*/       /*Scope*/ 16, /*->13378*/
/*13362*/         OPC_CheckPredicate, 77, // Predicate_extloadi16
/*13364*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$src #2 #3 #4
/*13367*/         OPC_EmitMergeInputChains1_0,
/*13368*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGH), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 bdxaddr20only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 16
                  // Dst: (LGH:i64 bdxaddr20only:i64:$src)
/*13378*/       /*Scope*/ 16, /*->13395*/
/*13379*/         OPC_CheckPredicate, 80, // Predicate_extloadi32
/*13381*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$src #2 #3 #4
/*13384*/         OPC_EmitMergeInputChains1_0,
/*13385*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGF), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 bdxaddr20only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 16
                  // Dst: (LGF:i64 bdxaddr20only:i64:$src)
/*13395*/       0, /*End of Scope*/
              0, // EndSwitchType
/*13397*/   /*Scope*/ 97, /*->13495*/
/*13398*/     OPC_CheckPredicate, 41, // Predicate_zextload
/*13400*/     OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->13439
/*13403*/       OPC_Scope, 16, /*->13421*/ // 2 children in Scope
/*13405*/         OPC_CheckPredicate, 45, // Predicate_zextloadi8
/*13407*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*13410*/         OPC_EmitMergeInputChains1_0,
/*13411*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLC), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 16
                  // Dst: (LLC:i32 bdxaddr20only:i64:$XBD2)
/*13421*/       /*Scope*/ 16, /*->13438*/
/*13422*/         OPC_CheckPredicate, 60, // Predicate_zextloadi16
/*13424*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*13427*/         OPC_EmitMergeInputChains1_0,
/*13428*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLH), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 16
                  // Dst: (LLH:i32 bdxaddr20only:i64:$XBD2)
/*13438*/       0, /*End of Scope*/
              /*SwitchType*/ 53,  MVT::i64,// ->13494
/*13441*/       OPC_Scope, 16, /*->13459*/ // 3 children in Scope
/*13443*/         OPC_CheckPredicate, 45, // Predicate_zextloadi8
/*13445*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*13448*/         OPC_EmitMergeInputChains1_0,
/*13449*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGC), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 16
                  // Dst: (LLGC:i64 bdxaddr20only:i64:$XBD2)
/*13459*/       /*Scope*/ 16, /*->13476*/
/*13460*/         OPC_CheckPredicate, 60, // Predicate_zextloadi16
/*13462*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*13465*/         OPC_EmitMergeInputChains1_0,
/*13466*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGH), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 16
                  // Dst: (LLGH:i64 bdxaddr20only:i64:$XBD2)
/*13476*/       /*Scope*/ 16, /*->13493*/
/*13477*/         OPC_CheckPredicate, 42, // Predicate_zextloadi32
/*13479*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*13482*/         OPC_EmitMergeInputChains1_0,
/*13483*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGF), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 16
                  // Dst: (LLGF:i64 bdxaddr20only:i64:$XBD2)
/*13493*/       0, /*End of Scope*/
              0, // EndSwitchType
/*13495*/   /*Scope*/ 88, /*->13584*/
/*13496*/     OPC_CheckPredicate, 13, // Predicate_load
/*13498*/     OPC_SwitchType /*3 cases */, 32,  MVT::f32,// ->13533
/*13501*/       OPC_Scope, 14, /*->13517*/ // 2 children in Scope
/*13503*/         OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr12Pair:$XBD2 #2 #3 #4
/*13506*/         OPC_EmitMergeInputChains1_0,
/*13507*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LE), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:f32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (LE:f32 bdxaddr12pair:i64:$XBD2)
/*13517*/       /*Scope*/ 14, /*->13532*/
/*13518*/         OPC_CheckComplexPat, /*CP*/8, /*#*/1, // selectBDXAddr20Pair:$XBD2 #2 #3 #4
/*13521*/         OPC_EmitMergeInputChains1_0,
/*13522*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LEY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:f32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (LEY:f32 bdxaddr20pair:i64:$XBD2)
/*13532*/       0, /*End of Scope*/
              /*SwitchType*/ 32,  MVT::f64,// ->13567
/*13535*/       OPC_Scope, 14, /*->13551*/ // 2 children in Scope
/*13537*/         OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr12Pair:$XBD2 #2 #3 #4
/*13540*/         OPC_EmitMergeInputChains1_0,
/*13541*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LD), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:f64 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (LD:f64 bdxaddr12pair:i64:$XBD2)
/*13551*/       /*Scope*/ 14, /*->13566*/
/*13552*/         OPC_CheckComplexPat, /*CP*/8, /*#*/1, // selectBDXAddr20Pair:$XBD2 #2 #3 #4
/*13555*/         OPC_EmitMergeInputChains1_0,
/*13556*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LDY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:f64 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (LDY:f64 bdxaddr20pair:i64:$XBD2)
/*13566*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::f128,// ->13583
/*13569*/       OPC_CheckComplexPat, /*CP*/9, /*#*/1, // selectBDXAddr20Only128:$src #2 #3 #4
/*13572*/       OPC_EmitMergeInputChains1_0,
/*13573*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f128, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:f128 bdxaddr20only128:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                // Dst: (LX:f128 bdxaddr20only128:i64:$src)
              0, // EndSwitchType
/*13584*/   /*Scope*/ 60, /*->13645*/
/*13585*/     OPC_CheckPredicate, 76, // Predicate_extload
/*13587*/     OPC_Scope, 36, /*->13625*/ // 2 children in Scope
/*13589*/       OPC_CheckPredicate, 81, // Predicate_extloadf32
/*13591*/       OPC_SwitchType /*2 cases */, 14,  MVT::f64,// ->13608
/*13594*/         OPC_CheckComplexPat, /*CP*/16, /*#*/1, // selectBDXAddr12Only:$XBD2 #2 #3 #4
/*13597*/         OPC_EmitMergeInputChains1_0,
/*13598*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LDEB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf32>> - Complexity = 16
                  // Dst: (LDEB:f64 bdxaddr12only:i64:$XBD2)
                /*SwitchType*/ 14,  MVT::f128,// ->13624
/*13610*/         OPC_CheckComplexPat, /*CP*/16, /*#*/1, // selectBDXAddr12Only:$XBD2 #2 #3 #4
/*13613*/         OPC_EmitMergeInputChains1_0,
/*13614*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LXEB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f128, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:f128 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf32>> - Complexity = 16
                  // Dst: (LXEB:f128 bdxaddr12only:i64:$XBD2)
                0, // EndSwitchType
/*13625*/     /*Scope*/ 18, /*->13644*/
/*13626*/       OPC_CheckPredicate, 82, // Predicate_extloadf64
/*13628*/       OPC_CheckType, MVT::f128,
/*13630*/       OPC_CheckComplexPat, /*CP*/16, /*#*/1, // selectBDXAddr12Only:$XBD2 #2 #3 #4
/*13633*/       OPC_EmitMergeInputChains1_0,
/*13634*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LXDB), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f128, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:f128 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf64>> - Complexity = 16
                // Dst: (LXDB:f128 bdxaddr12only:i64:$XBD2)
/*13644*/     0, /*End of Scope*/
/*13645*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 38|128,1/*166*/,  TARGET_VAL(ISD::ATOMIC_LOAD_ADD),// ->13816
/*13650*/   OPC_RecordMemRef,
/*13651*/   OPC_RecordNode,   // #0 = 'atomic_load_add' chained node
/*13652*/   OPC_RecordChild1, // #1 = $ptr
/*13653*/   OPC_CheckChild1Type, MVT::i64,
/*13655*/   OPC_RecordChild2, // #2 = $src2
/*13656*/   OPC_Scope, 117, /*->13775*/ // 3 children in Scope
/*13658*/     OPC_MoveChild, 2,
/*13660*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13663*/     OPC_Scope, 27, /*->13692*/ // 4 children in Scope
/*13665*/       OPC_CheckPredicate, 34, // Predicate_imm32sx16
/*13667*/       OPC_MoveParent,
/*13668*/       OPC_CheckPredicate, 83, // Predicate_atomic_load_add_32
/*13670*/       OPC_CheckType, MVT::i32,
/*13672*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*13675*/       OPC_EmitMergeInputChains1_0,
/*13676*/       OPC_EmitConvertToTarget, 2,
/*13678*/       OPC_EmitNodeXForm, 2, 5, // SIMM16
/*13681*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_AHI), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_add:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$src2)<<P:Predicate_atomic_load_add_32>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_AHI:i32:i32 bdaddr20only:i64:$ptr, (SIMM16:i32 (imm:i32):$src2))
/*13692*/     /*Scope*/ 27, /*->13720*/
/*13693*/       OPC_CheckPredicate, 35, // Predicate_imm64sx16
/*13695*/       OPC_MoveParent,
/*13696*/       OPC_CheckPredicate, 84, // Predicate_atomic_load_add_64
/*13698*/       OPC_CheckType, MVT::i64,
/*13700*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*13703*/       OPC_EmitMergeInputChains1_0,
/*13704*/       OPC_EmitConvertToTarget, 2,
/*13706*/       OPC_EmitNodeXForm, 2, 5, // SIMM16
/*13709*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_AGHI), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_add:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64sx16>><<X:SIMM16>>:$src2)<<P:Predicate_atomic_load_add_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_AGHI:i64:i32 bdaddr20only:i64:$ptr, (SIMM16:i64 (imm:i64):$src2))
/*13720*/     /*Scope*/ 27, /*->13748*/
/*13721*/       OPC_CheckPredicate, 58, // Predicate_imm64sx32
/*13723*/       OPC_MoveParent,
/*13724*/       OPC_CheckPredicate, 84, // Predicate_atomic_load_add_64
/*13726*/       OPC_CheckType, MVT::i64,
/*13728*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*13731*/       OPC_EmitMergeInputChains1_0,
/*13732*/       OPC_EmitConvertToTarget, 2,
/*13734*/       OPC_EmitNodeXForm, 10, 5, // SIMM32
/*13737*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_AGFI), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_add:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64sx32>><<X:SIMM32>>:$src2)<<P:Predicate_atomic_load_add_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_AGFI:i64:i32 bdaddr20only:i64:$ptr, (SIMM32:i64 (imm:i64):$src2))
/*13748*/     /*Scope*/ 25, /*->13774*/
/*13749*/       OPC_MoveParent,
/*13750*/       OPC_CheckPredicate, 83, // Predicate_atomic_load_add_32
/*13752*/       OPC_CheckType, MVT::i32,
/*13754*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*13757*/       OPC_EmitMergeInputChains1_0,
/*13758*/       OPC_EmitConvertToTarget, 2,
/*13760*/       OPC_EmitNodeXForm, 10, 5, // SIMM32
/*13763*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_AFI), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_add:i32 bdaddr20only:i64:$ptr, (imm:i32)<<X:SIMM32>>:$src2)<<P:Predicate_atomic_load_add_32>> - Complexity = 16
                // Dst: (ATOMIC_LOAD_AFI:i32:i32 bdaddr20only:i64:$ptr, (SIMM32:i32 (imm:i32):$src2))
/*13774*/     0, /*End of Scope*/
/*13775*/   /*Scope*/ 19, /*->13795*/
/*13776*/     OPC_CheckPredicate, 83, // Predicate_atomic_load_add_32
/*13778*/     OPC_CheckType, MVT::i32,
/*13780*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*13783*/     OPC_EmitMergeInputChains1_0,
/*13784*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_AR), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_add:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_add_32>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_AR:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
/*13795*/   /*Scope*/ 19, /*->13815*/
/*13796*/     OPC_CheckPredicate, 84, // Predicate_atomic_load_add_64
/*13798*/     OPC_CheckType, MVT::i64,
/*13800*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*13803*/     OPC_EmitMergeInputChains1_0,
/*13804*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_AGR), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_add:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_add_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_AGR:i64:i32 bdaddr20only:i64:$ptr, GR64:i64:$src2)
/*13815*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 51|128,2/*307*/,  TARGET_VAL(ISD::ATOMIC_LOAD_AND),// ->14127
/*13820*/   OPC_RecordMemRef,
/*13821*/   OPC_RecordNode,   // #0 = 'atomic_load_and' chained node
/*13822*/   OPC_RecordChild1, // #1 = $ptr
/*13823*/   OPC_CheckChild1Type, MVT::i64,
/*13825*/   OPC_RecordChild2, // #2 = $src2
/*13826*/   OPC_Scope, 1|128,2/*257*/, /*->14086*/ // 3 children in Scope
/*13829*/     OPC_MoveChild, 2,
/*13831*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13834*/     OPC_Scope, 27, /*->13863*/ // 9 children in Scope
/*13836*/       OPC_CheckPredicate, 68, // Predicate_imm32ll16c
/*13838*/       OPC_MoveParent,
/*13839*/       OPC_CheckPredicate, 85, // Predicate_atomic_load_and_32
/*13841*/       OPC_CheckType, MVT::i32,
/*13843*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*13846*/       OPC_EmitMergeInputChains1_0,
/*13847*/       OPC_EmitConvertToTarget, 2,
/*13849*/       OPC_EmitNodeXForm, 6, 5, // LL16
/*13852*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILL32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_and:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32ll16c>><<X:LL16>>:$src2)<<P:Predicate_atomic_load_and_32>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NILL32:i32:i32 bdaddr20only:i64:$ptr, (LL16:i32 (imm:i32):$src2))
/*13863*/     /*Scope*/ 27, /*->13891*/
/*13864*/       OPC_CheckPredicate, 69, // Predicate_imm32lh16c
/*13866*/       OPC_MoveParent,
/*13867*/       OPC_CheckPredicate, 85, // Predicate_atomic_load_and_32
/*13869*/       OPC_CheckType, MVT::i32,
/*13871*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*13874*/       OPC_EmitMergeInputChains1_0,
/*13875*/       OPC_EmitConvertToTarget, 2,
/*13877*/       OPC_EmitNodeXForm, 7, 5, // LH16
/*13880*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILH32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_and:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32lh16c>><<X:LH16>>:$src2)<<P:Predicate_atomic_load_and_32>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NILH32:i32:i32 bdaddr20only:i64:$ptr, (LH16:i32 (imm:i32):$src2))
/*13891*/     /*Scope*/ 27, /*->13919*/
/*13892*/       OPC_CheckPredicate, 70, // Predicate_imm64ll16c
/*13894*/       OPC_MoveParent,
/*13895*/       OPC_CheckPredicate, 86, // Predicate_atomic_load_and_64
/*13897*/       OPC_CheckType, MVT::i64,
/*13899*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*13902*/       OPC_EmitMergeInputChains1_0,
/*13903*/       OPC_EmitConvertToTarget, 2,
/*13905*/       OPC_EmitNodeXForm, 6, 5, // LL16
/*13908*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILL), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_and:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64ll16c>><<X:LL16>>:$src2)<<P:Predicate_atomic_load_and_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NILL:i64:i32 bdaddr20only:i64:$ptr, (LL16:i64 (imm:i64):$src2))
/*13919*/     /*Scope*/ 27, /*->13947*/
/*13920*/       OPC_CheckPredicate, 71, // Predicate_imm64lh16c
/*13922*/       OPC_MoveParent,
/*13923*/       OPC_CheckPredicate, 86, // Predicate_atomic_load_and_64
/*13925*/       OPC_CheckType, MVT::i64,
/*13927*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*13930*/       OPC_EmitMergeInputChains1_0,
/*13931*/       OPC_EmitConvertToTarget, 2,
/*13933*/       OPC_EmitNodeXForm, 7, 5, // LH16
/*13936*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILH), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_and:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64lh16c>><<X:LH16>>:$src2)<<P:Predicate_atomic_load_and_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NILH:i64:i32 bdaddr20only:i64:$ptr, (LH16:i64 (imm:i64):$src2))
/*13947*/     /*Scope*/ 27, /*->13975*/
/*13948*/       OPC_CheckPredicate, 72, // Predicate_imm64hl16c
/*13950*/       OPC_MoveParent,
/*13951*/       OPC_CheckPredicate, 86, // Predicate_atomic_load_and_64
/*13953*/       OPC_CheckType, MVT::i64,
/*13955*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*13958*/       OPC_EmitMergeInputChains1_0,
/*13959*/       OPC_EmitConvertToTarget, 2,
/*13961*/       OPC_EmitNodeXForm, 8, 5, // HL16
/*13964*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NIHL), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_and:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hl16c>><<X:HL16>>:$src2)<<P:Predicate_atomic_load_and_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NIHL:i64:i32 bdaddr20only:i64:$ptr, (HL16:i64 (imm:i64):$src2))
/*13975*/     /*Scope*/ 27, /*->14003*/
/*13976*/       OPC_CheckPredicate, 73, // Predicate_imm64hh16c
/*13978*/       OPC_MoveParent,
/*13979*/       OPC_CheckPredicate, 86, // Predicate_atomic_load_and_64
/*13981*/       OPC_CheckType, MVT::i64,
/*13983*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*13986*/       OPC_EmitMergeInputChains1_0,
/*13987*/       OPC_EmitConvertToTarget, 2,
/*13989*/       OPC_EmitNodeXForm, 9, 5, // HH16
/*13992*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NIHH), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_and:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hh16c>><<X:HH16>>:$src2)<<P:Predicate_atomic_load_and_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NIHH:i64:i32 bdaddr20only:i64:$ptr, (HH16:i64 (imm:i64):$src2))
/*14003*/     /*Scope*/ 27, /*->14031*/
/*14004*/       OPC_CheckPredicate, 74, // Predicate_imm64lf32c
/*14006*/       OPC_MoveParent,
/*14007*/       OPC_CheckPredicate, 86, // Predicate_atomic_load_and_64
/*14009*/       OPC_CheckType, MVT::i64,
/*14011*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*14014*/       OPC_EmitMergeInputChains1_0,
/*14015*/       OPC_EmitConvertToTarget, 2,
/*14017*/       OPC_EmitNodeXForm, 3, 5, // LF32
/*14020*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILF), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_and:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64lf32c>><<X:LF32>>:$src2)<<P:Predicate_atomic_load_and_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NILF:i64:i32 bdaddr20only:i64:$ptr, (LF32:i64 (imm:i64):$src2))
/*14031*/     /*Scope*/ 27, /*->14059*/
/*14032*/       OPC_CheckPredicate, 75, // Predicate_imm64hf32c
/*14034*/       OPC_MoveParent,
/*14035*/       OPC_CheckPredicate, 86, // Predicate_atomic_load_and_64
/*14037*/       OPC_CheckType, MVT::i64,
/*14039*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*14042*/       OPC_EmitMergeInputChains1_0,
/*14043*/       OPC_EmitConvertToTarget, 2,
/*14045*/       OPC_EmitNodeXForm, 4, 5, // HF32
/*14048*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NIHF), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_and:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hf32c>><<X:HF32>>:$src2)<<P:Predicate_atomic_load_and_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NIHF:i64:i32 bdaddr20only:i64:$ptr, (HF32:i64 (imm:i64):$src2))
/*14059*/     /*Scope*/ 25, /*->14085*/
/*14060*/       OPC_MoveParent,
/*14061*/       OPC_CheckPredicate, 85, // Predicate_atomic_load_and_32
/*14063*/       OPC_CheckType, MVT::i32,
/*14065*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*14068*/       OPC_EmitMergeInputChains1_0,
/*14069*/       OPC_EmitConvertToTarget, 2,
/*14071*/       OPC_EmitNodeXForm, 5, 5, // UIMM32
/*14074*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILF32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_and:i32 bdaddr20only:i64:$ptr, (imm:i32)<<X:UIMM32>>:$src2)<<P:Predicate_atomic_load_and_32>> - Complexity = 16
                // Dst: (ATOMIC_LOAD_NILF32:i32:i32 bdaddr20only:i64:$ptr, (UIMM32:i32 (imm:i32):$src2))
/*14085*/     0, /*End of Scope*/
/*14086*/   /*Scope*/ 19, /*->14106*/
/*14087*/     OPC_CheckPredicate, 85, // Predicate_atomic_load_and_32
/*14089*/     OPC_CheckType, MVT::i32,
/*14091*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*14094*/     OPC_EmitMergeInputChains1_0,
/*14095*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NR), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_and:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_and_32>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_NR:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
/*14106*/   /*Scope*/ 19, /*->14126*/
/*14107*/     OPC_CheckPredicate, 86, // Predicate_atomic_load_and_64
/*14109*/     OPC_CheckType, MVT::i64,
/*14111*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*14114*/     OPC_EmitMergeInputChains1_0,
/*14115*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NGR), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_and:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_and_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_NGR:i64:i32 bdaddr20only:i64:$ptr, GR64:i64:$src2)
/*14126*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 51|128,2/*307*/,  TARGET_VAL(ISD::ATOMIC_LOAD_OR),// ->14438
/*14131*/   OPC_RecordMemRef,
/*14132*/   OPC_RecordNode,   // #0 = 'atomic_load_or' chained node
/*14133*/   OPC_RecordChild1, // #1 = $ptr
/*14134*/   OPC_CheckChild1Type, MVT::i64,
/*14136*/   OPC_RecordChild2, // #2 = $src2
/*14137*/   OPC_Scope, 1|128,2/*257*/, /*->14397*/ // 3 children in Scope
/*14140*/     OPC_MoveChild, 2,
/*14142*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14145*/     OPC_Scope, 27, /*->14174*/ // 9 children in Scope
/*14147*/       OPC_CheckPredicate, 48, // Predicate_imm32ll16
/*14149*/       OPC_MoveParent,
/*14150*/       OPC_CheckPredicate, 87, // Predicate_atomic_load_or_32
/*14152*/       OPC_CheckType, MVT::i32,
/*14154*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*14157*/       OPC_EmitMergeInputChains1_0,
/*14158*/       OPC_EmitConvertToTarget, 2,
/*14160*/       OPC_EmitNodeXForm, 6, 5, // LL16
/*14163*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OILL32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_or:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32ll16>><<X:LL16>>:$src2)<<P:Predicate_atomic_load_or_32>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_OILL32:i32:i32 bdaddr20only:i64:$ptr, (LL16:i32 (imm:i32):$src2))
/*14174*/     /*Scope*/ 27, /*->14202*/
/*14175*/       OPC_CheckPredicate, 49, // Predicate_imm32lh16
/*14177*/       OPC_MoveParent,
/*14178*/       OPC_CheckPredicate, 87, // Predicate_atomic_load_or_32
/*14180*/       OPC_CheckType, MVT::i32,
/*14182*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*14185*/       OPC_EmitMergeInputChains1_0,
/*14186*/       OPC_EmitConvertToTarget, 2,
/*14188*/       OPC_EmitNodeXForm, 7, 5, // LH16
/*14191*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OILH32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_or:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32lh16>><<X:LH16>>:$src2)<<P:Predicate_atomic_load_or_32>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_OILH32:i32:i32 bdaddr20only:i64:$ptr, (LH16:i32 (imm:i32):$src2))
/*14202*/     /*Scope*/ 27, /*->14230*/
/*14203*/       OPC_CheckPredicate, 50, // Predicate_imm64ll16
/*14205*/       OPC_MoveParent,
/*14206*/       OPC_CheckPredicate, 88, // Predicate_atomic_load_or_64
/*14208*/       OPC_CheckType, MVT::i64,
/*14210*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*14213*/       OPC_EmitMergeInputChains1_0,
/*14214*/       OPC_EmitConvertToTarget, 2,
/*14216*/       OPC_EmitNodeXForm, 6, 5, // LL16
/*14219*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OILL), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_or:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64ll16>><<X:LL16>>:$src2)<<P:Predicate_atomic_load_or_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_OILL:i64:i32 bdaddr20only:i64:$ptr, (LL16:i64 (imm:i64):$src2))
/*14230*/     /*Scope*/ 27, /*->14258*/
/*14231*/       OPC_CheckPredicate, 51, // Predicate_imm64lh16
/*14233*/       OPC_MoveParent,
/*14234*/       OPC_CheckPredicate, 88, // Predicate_atomic_load_or_64
/*14236*/       OPC_CheckType, MVT::i64,
/*14238*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*14241*/       OPC_EmitMergeInputChains1_0,
/*14242*/       OPC_EmitConvertToTarget, 2,
/*14244*/       OPC_EmitNodeXForm, 7, 5, // LH16
/*14247*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OILH), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_or:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64lh16>><<X:LH16>>:$src2)<<P:Predicate_atomic_load_or_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_OILH:i64:i32 bdaddr20only:i64:$ptr, (LH16:i64 (imm:i64):$src2))
/*14258*/     /*Scope*/ 27, /*->14286*/
/*14259*/       OPC_CheckPredicate, 52, // Predicate_imm64hl16
/*14261*/       OPC_MoveParent,
/*14262*/       OPC_CheckPredicate, 88, // Predicate_atomic_load_or_64
/*14264*/       OPC_CheckType, MVT::i64,
/*14266*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*14269*/       OPC_EmitMergeInputChains1_0,
/*14270*/       OPC_EmitConvertToTarget, 2,
/*14272*/       OPC_EmitNodeXForm, 8, 5, // HL16
/*14275*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OIHL), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_or:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hl16>><<X:HL16>>:$src2)<<P:Predicate_atomic_load_or_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_OIHL:i64:i32 bdaddr20only:i64:$ptr, (HL16:i64 (imm:i64):$src2))
/*14286*/     /*Scope*/ 27, /*->14314*/
/*14287*/       OPC_CheckPredicate, 53, // Predicate_imm64hh16
/*14289*/       OPC_MoveParent,
/*14290*/       OPC_CheckPredicate, 88, // Predicate_atomic_load_or_64
/*14292*/       OPC_CheckType, MVT::i64,
/*14294*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*14297*/       OPC_EmitMergeInputChains1_0,
/*14298*/       OPC_EmitConvertToTarget, 2,
/*14300*/       OPC_EmitNodeXForm, 9, 5, // HH16
/*14303*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OIHH), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_or:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hh16>><<X:HH16>>:$src2)<<P:Predicate_atomic_load_or_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_OIHH:i64:i32 bdaddr20only:i64:$ptr, (HH16:i64 (imm:i64):$src2))
/*14314*/     /*Scope*/ 27, /*->14342*/
/*14315*/       OPC_CheckPredicate, 43, // Predicate_imm64lf32
/*14317*/       OPC_MoveParent,
/*14318*/       OPC_CheckPredicate, 88, // Predicate_atomic_load_or_64
/*14320*/       OPC_CheckType, MVT::i64,
/*14322*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*14325*/       OPC_EmitMergeInputChains1_0,
/*14326*/       OPC_EmitConvertToTarget, 2,
/*14328*/       OPC_EmitNodeXForm, 3, 5, // LF32
/*14331*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OILF), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_or:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64lf32>><<X:LF32>>:$src2)<<P:Predicate_atomic_load_or_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_OILF:i64:i32 bdaddr20only:i64:$ptr, (LF32:i64 (imm:i64):$src2))
/*14342*/     /*Scope*/ 27, /*->14370*/
/*14343*/       OPC_CheckPredicate, 44, // Predicate_imm64hf32
/*14345*/       OPC_MoveParent,
/*14346*/       OPC_CheckPredicate, 88, // Predicate_atomic_load_or_64
/*14348*/       OPC_CheckType, MVT::i64,
/*14350*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*14353*/       OPC_EmitMergeInputChains1_0,
/*14354*/       OPC_EmitConvertToTarget, 2,
/*14356*/       OPC_EmitNodeXForm, 4, 5, // HF32
/*14359*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OIHF), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_or:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hf32>><<X:HF32>>:$src2)<<P:Predicate_atomic_load_or_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_OIHF:i64:i32 bdaddr20only:i64:$ptr, (HF32:i64 (imm:i64):$src2))
/*14370*/     /*Scope*/ 25, /*->14396*/
/*14371*/       OPC_MoveParent,
/*14372*/       OPC_CheckPredicate, 87, // Predicate_atomic_load_or_32
/*14374*/       OPC_CheckType, MVT::i32,
/*14376*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*14379*/       OPC_EmitMergeInputChains1_0,
/*14380*/       OPC_EmitConvertToTarget, 2,
/*14382*/       OPC_EmitNodeXForm, 5, 5, // UIMM32
/*14385*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OILF32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_or:i32 bdaddr20only:i64:$ptr, (imm:i32)<<X:UIMM32>>:$src2)<<P:Predicate_atomic_load_or_32>> - Complexity = 16
                // Dst: (ATOMIC_LOAD_OILF32:i32:i32 bdaddr20only:i64:$ptr, (UIMM32:i32 (imm:i32):$src2))
/*14396*/     0, /*End of Scope*/
/*14397*/   /*Scope*/ 19, /*->14417*/
/*14398*/     OPC_CheckPredicate, 87, // Predicate_atomic_load_or_32
/*14400*/     OPC_CheckType, MVT::i32,
/*14402*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*14405*/     OPC_EmitMergeInputChains1_0,
/*14406*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OR), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_or:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_or_32>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_OR:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
/*14417*/   /*Scope*/ 19, /*->14437*/
/*14418*/     OPC_CheckPredicate, 88, // Predicate_atomic_load_or_64
/*14420*/     OPC_CheckType, MVT::i64,
/*14422*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*14425*/     OPC_EmitMergeInputChains1_0,
/*14426*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OGR), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_or:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_or_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_OGR:i64:i32 bdaddr20only:i64:$ptr, GR64:i64:$src2)
/*14437*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 10|128,1/*138*/,  TARGET_VAL(ISD::ATOMIC_LOAD_XOR),// ->14580
/*14442*/   OPC_RecordMemRef,
/*14443*/   OPC_RecordNode,   // #0 = 'atomic_load_xor' chained node
/*14444*/   OPC_RecordChild1, // #1 = $ptr
/*14445*/   OPC_CheckChild1Type, MVT::i64,
/*14447*/   OPC_RecordChild2, // #2 = $src2
/*14448*/   OPC_Scope, 89, /*->14539*/ // 3 children in Scope
/*14450*/     OPC_MoveChild, 2,
/*14452*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14455*/     OPC_Scope, 27, /*->14484*/ // 3 children in Scope
/*14457*/       OPC_CheckPredicate, 43, // Predicate_imm64lf32
/*14459*/       OPC_MoveParent,
/*14460*/       OPC_CheckPredicate, 89, // Predicate_atomic_load_xor_64
/*14462*/       OPC_CheckType, MVT::i64,
/*14464*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*14467*/       OPC_EmitMergeInputChains1_0,
/*14468*/       OPC_EmitConvertToTarget, 2,
/*14470*/       OPC_EmitNodeXForm, 3, 5, // LF32
/*14473*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_XILF), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_xor:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64lf32>><<X:LF32>>:$src2)<<P:Predicate_atomic_load_xor_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_XILF:i64:i32 bdaddr20only:i64:$ptr, (LF32:i64 (imm:i64):$src2))
/*14484*/     /*Scope*/ 27, /*->14512*/
/*14485*/       OPC_CheckPredicate, 44, // Predicate_imm64hf32
/*14487*/       OPC_MoveParent,
/*14488*/       OPC_CheckPredicate, 89, // Predicate_atomic_load_xor_64
/*14490*/       OPC_CheckType, MVT::i64,
/*14492*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*14495*/       OPC_EmitMergeInputChains1_0,
/*14496*/       OPC_EmitConvertToTarget, 2,
/*14498*/       OPC_EmitNodeXForm, 4, 5, // HF32
/*14501*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_XIHF), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_xor:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hf32>><<X:HF32>>:$src2)<<P:Predicate_atomic_load_xor_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_XIHF:i64:i32 bdaddr20only:i64:$ptr, (HF32:i64 (imm:i64):$src2))
/*14512*/     /*Scope*/ 25, /*->14538*/
/*14513*/       OPC_MoveParent,
/*14514*/       OPC_CheckPredicate, 90, // Predicate_atomic_load_xor_32
/*14516*/       OPC_CheckType, MVT::i32,
/*14518*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*14521*/       OPC_EmitMergeInputChains1_0,
/*14522*/       OPC_EmitConvertToTarget, 2,
/*14524*/       OPC_EmitNodeXForm, 5, 5, // UIMM32
/*14527*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_XILF32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_xor:i32 bdaddr20only:i64:$ptr, (imm:i32)<<X:UIMM32>>:$src2)<<P:Predicate_atomic_load_xor_32>> - Complexity = 16
                // Dst: (ATOMIC_LOAD_XILF32:i32:i32 bdaddr20only:i64:$ptr, (UIMM32:i32 (imm:i32):$src2))
/*14538*/     0, /*End of Scope*/
/*14539*/   /*Scope*/ 19, /*->14559*/
/*14540*/     OPC_CheckPredicate, 90, // Predicate_atomic_load_xor_32
/*14542*/     OPC_CheckType, MVT::i32,
/*14544*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*14547*/     OPC_EmitMergeInputChains1_0,
/*14548*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_XR), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_xor:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_xor_32>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_XR:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
/*14559*/   /*Scope*/ 19, /*->14579*/
/*14560*/     OPC_CheckPredicate, 89, // Predicate_atomic_load_xor_64
/*14562*/     OPC_CheckType, MVT::i64,
/*14564*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*14567*/     OPC_EmitMergeInputChains1_0,
/*14568*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_XGR), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_xor:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_xor_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_XGR:i64:i32 bdaddr20only:i64:$ptr, GR64:i64:$src2)
/*14579*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 51|128,2/*307*/,  TARGET_VAL(ISD::ATOMIC_LOAD_NAND),// ->14891
/*14584*/   OPC_RecordMemRef,
/*14585*/   OPC_RecordNode,   // #0 = 'atomic_load_nand' chained node
/*14586*/   OPC_RecordChild1, // #1 = $ptr
/*14587*/   OPC_CheckChild1Type, MVT::i64,
/*14589*/   OPC_RecordChild2, // #2 = $src2
/*14590*/   OPC_Scope, 1|128,2/*257*/, /*->14850*/ // 3 children in Scope
/*14593*/     OPC_MoveChild, 2,
/*14595*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14598*/     OPC_Scope, 27, /*->14627*/ // 9 children in Scope
/*14600*/       OPC_CheckPredicate, 68, // Predicate_imm32ll16c
/*14602*/       OPC_MoveParent,
/*14603*/       OPC_CheckPredicate, 91, // Predicate_atomic_load_nand_32
/*14605*/       OPC_CheckType, MVT::i32,
/*14607*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*14610*/       OPC_EmitMergeInputChains1_0,
/*14611*/       OPC_EmitConvertToTarget, 2,
/*14613*/       OPC_EmitNodeXForm, 6, 5, // LL16
/*14616*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILL32i), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_nand:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32ll16c>><<X:LL16>>:$src2)<<P:Predicate_atomic_load_nand_32>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NILL32i:i32:i32 bdaddr20only:i64:$ptr, (LL16:i32 (imm:i32):$src2))
/*14627*/     /*Scope*/ 27, /*->14655*/
/*14628*/       OPC_CheckPredicate, 69, // Predicate_imm32lh16c
/*14630*/       OPC_MoveParent,
/*14631*/       OPC_CheckPredicate, 91, // Predicate_atomic_load_nand_32
/*14633*/       OPC_CheckType, MVT::i32,
/*14635*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*14638*/       OPC_EmitMergeInputChains1_0,
/*14639*/       OPC_EmitConvertToTarget, 2,
/*14641*/       OPC_EmitNodeXForm, 7, 5, // LH16
/*14644*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILH32i), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_nand:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32lh16c>><<X:LH16>>:$src2)<<P:Predicate_atomic_load_nand_32>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NILH32i:i32:i32 bdaddr20only:i64:$ptr, (LH16:i32 (imm:i32):$src2))
/*14655*/     /*Scope*/ 27, /*->14683*/
/*14656*/       OPC_CheckPredicate, 70, // Predicate_imm64ll16c
/*14658*/       OPC_MoveParent,
/*14659*/       OPC_CheckPredicate, 92, // Predicate_atomic_load_nand_64
/*14661*/       OPC_CheckType, MVT::i64,
/*14663*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*14666*/       OPC_EmitMergeInputChains1_0,
/*14667*/       OPC_EmitConvertToTarget, 2,
/*14669*/       OPC_EmitNodeXForm, 6, 5, // LL16
/*14672*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILLi), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_nand:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64ll16c>><<X:LL16>>:$src2)<<P:Predicate_atomic_load_nand_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NILLi:i64:i32 bdaddr20only:i64:$ptr, (LL16:i64 (imm:i64):$src2))
/*14683*/     /*Scope*/ 27, /*->14711*/
/*14684*/       OPC_CheckPredicate, 71, // Predicate_imm64lh16c
/*14686*/       OPC_MoveParent,
/*14687*/       OPC_CheckPredicate, 92, // Predicate_atomic_load_nand_64
/*14689*/       OPC_CheckType, MVT::i64,
/*14691*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*14694*/       OPC_EmitMergeInputChains1_0,
/*14695*/       OPC_EmitConvertToTarget, 2,
/*14697*/       OPC_EmitNodeXForm, 7, 5, // LH16
/*14700*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILHi), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_nand:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64lh16c>><<X:LH16>>:$src2)<<P:Predicate_atomic_load_nand_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NILHi:i64:i32 bdaddr20only:i64:$ptr, (LH16:i64 (imm:i64):$src2))
/*14711*/     /*Scope*/ 27, /*->14739*/
/*14712*/       OPC_CheckPredicate, 72, // Predicate_imm64hl16c
/*14714*/       OPC_MoveParent,
/*14715*/       OPC_CheckPredicate, 92, // Predicate_atomic_load_nand_64
/*14717*/       OPC_CheckType, MVT::i64,
/*14719*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*14722*/       OPC_EmitMergeInputChains1_0,
/*14723*/       OPC_EmitConvertToTarget, 2,
/*14725*/       OPC_EmitNodeXForm, 8, 5, // HL16
/*14728*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NIHLi), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_nand:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hl16c>><<X:HL16>>:$src2)<<P:Predicate_atomic_load_nand_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NIHLi:i64:i32 bdaddr20only:i64:$ptr, (HL16:i64 (imm:i64):$src2))
/*14739*/     /*Scope*/ 27, /*->14767*/
/*14740*/       OPC_CheckPredicate, 73, // Predicate_imm64hh16c
/*14742*/       OPC_MoveParent,
/*14743*/       OPC_CheckPredicate, 92, // Predicate_atomic_load_nand_64
/*14745*/       OPC_CheckType, MVT::i64,
/*14747*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*14750*/       OPC_EmitMergeInputChains1_0,
/*14751*/       OPC_EmitConvertToTarget, 2,
/*14753*/       OPC_EmitNodeXForm, 9, 5, // HH16
/*14756*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NIHHi), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_nand:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hh16c>><<X:HH16>>:$src2)<<P:Predicate_atomic_load_nand_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NIHHi:i64:i32 bdaddr20only:i64:$ptr, (HH16:i64 (imm:i64):$src2))
/*14767*/     /*Scope*/ 27, /*->14795*/
/*14768*/       OPC_CheckPredicate, 74, // Predicate_imm64lf32c
/*14770*/       OPC_MoveParent,
/*14771*/       OPC_CheckPredicate, 92, // Predicate_atomic_load_nand_64
/*14773*/       OPC_CheckType, MVT::i64,
/*14775*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*14778*/       OPC_EmitMergeInputChains1_0,
/*14779*/       OPC_EmitConvertToTarget, 2,
/*14781*/       OPC_EmitNodeXForm, 3, 5, // LF32
/*14784*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILFi), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_nand:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64lf32c>><<X:LF32>>:$src2)<<P:Predicate_atomic_load_nand_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NILFi:i64:i32 bdaddr20only:i64:$ptr, (LF32:i64 (imm:i64):$src2))
/*14795*/     /*Scope*/ 27, /*->14823*/
/*14796*/       OPC_CheckPredicate, 75, // Predicate_imm64hf32c
/*14798*/       OPC_MoveParent,
/*14799*/       OPC_CheckPredicate, 92, // Predicate_atomic_load_nand_64
/*14801*/       OPC_CheckType, MVT::i64,
/*14803*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*14806*/       OPC_EmitMergeInputChains1_0,
/*14807*/       OPC_EmitConvertToTarget, 2,
/*14809*/       OPC_EmitNodeXForm, 4, 5, // HF32
/*14812*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NIHFi), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_nand:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hf32c>><<X:HF32>>:$src2)<<P:Predicate_atomic_load_nand_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NIHFi:i64:i32 bdaddr20only:i64:$ptr, (HF32:i64 (imm:i64):$src2))
/*14823*/     /*Scope*/ 25, /*->14849*/
/*14824*/       OPC_MoveParent,
/*14825*/       OPC_CheckPredicate, 91, // Predicate_atomic_load_nand_32
/*14827*/       OPC_CheckType, MVT::i32,
/*14829*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*14832*/       OPC_EmitMergeInputChains1_0,
/*14833*/       OPC_EmitConvertToTarget, 2,
/*14835*/       OPC_EmitNodeXForm, 5, 5, // UIMM32
/*14838*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILF32i), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_nand:i32 bdaddr20only:i64:$ptr, (imm:i32)<<X:UIMM32>>:$src2)<<P:Predicate_atomic_load_nand_32>> - Complexity = 16
                // Dst: (ATOMIC_LOAD_NILF32i:i32:i32 bdaddr20only:i64:$ptr, (UIMM32:i32 (imm:i32):$src2))
/*14849*/     0, /*End of Scope*/
/*14850*/   /*Scope*/ 19, /*->14870*/
/*14851*/     OPC_CheckPredicate, 91, // Predicate_atomic_load_nand_32
/*14853*/     OPC_CheckType, MVT::i32,
/*14855*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*14858*/     OPC_EmitMergeInputChains1_0,
/*14859*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NRi), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_nand:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_nand_32>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_NRi:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
/*14870*/   /*Scope*/ 19, /*->14890*/
/*14871*/     OPC_CheckPredicate, 92, // Predicate_atomic_load_nand_64
/*14873*/     OPC_CheckType, MVT::i64,
/*14875*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*14878*/     OPC_EmitMergeInputChains1_0,
/*14879*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NGRi), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_nand:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_nand_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_NGRi:i64:i32 bdaddr20only:i64:$ptr, GR64:i64:$src2)
/*14890*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 38,  TARGET_VAL(SystemZISD::ATOMIC_SWAPW),// ->14932
/*14894*/   OPC_RecordMemRef,
/*14895*/   OPC_RecordNode,   // #0 = 'z_atomic_swapw' chained node
/*14896*/   OPC_RecordChild1, // #1 = $ptr
/*14897*/   OPC_CheckChild1Type, MVT::i64,
/*14899*/   OPC_RecordChild2, // #2 = $src2
/*14900*/   OPC_RecordChild3, // #3 = $bitshift
/*14901*/   OPC_RecordChild4, // #4 = $negbitshift
/*14902*/   OPC_RecordChild5, // #5 = $bitsize
/*14903*/   OPC_MoveChild, 5,
/*14905*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14908*/   OPC_MoveParent,
/*14909*/   OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*14912*/   OPC_EmitMergeInputChains1_0,
/*14913*/   OPC_EmitConvertToTarget, 5,
/*14915*/   OPC_EmitNodeXForm, 5, 8, // UIMM32
/*14918*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_SWAPW), 0|OPFL_Chain|OPFL_MemRefs,
                2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
            // Src: (z_atomic_swapw:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
            // Dst: (ATOMIC_SWAPW:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
          /*SwitchOpcode*/ 38,  TARGET_VAL(SystemZISD::ATOMIC_LOADW_SUB),// ->14973
/*14935*/   OPC_RecordMemRef,
/*14936*/   OPC_RecordNode,   // #0 = 'z_atomic_loadw_sub' chained node
/*14937*/   OPC_RecordChild1, // #1 = $ptr
/*14938*/   OPC_CheckChild1Type, MVT::i64,
/*14940*/   OPC_RecordChild2, // #2 = $src2
/*14941*/   OPC_RecordChild3, // #3 = $bitshift
/*14942*/   OPC_RecordChild4, // #4 = $negbitshift
/*14943*/   OPC_RecordChild5, // #5 = $bitsize
/*14944*/   OPC_MoveChild, 5,
/*14946*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14949*/   OPC_MoveParent,
/*14950*/   OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*14953*/   OPC_EmitMergeInputChains1_0,
/*14954*/   OPC_EmitConvertToTarget, 5,
/*14956*/   OPC_EmitNodeXForm, 5, 8, // UIMM32
/*14959*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_SR), 0|OPFL_Chain|OPFL_MemRefs,
                2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
            // Src: (z_atomic_loadw_sub:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
            // Dst: (ATOMIC_LOADW_SR:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
          /*SwitchOpcode*/ 38,  TARGET_VAL(SystemZISD::ATOMIC_LOADW_MIN),// ->15014
/*14976*/   OPC_RecordMemRef,
/*14977*/   OPC_RecordNode,   // #0 = 'z_atomic_loadw_min' chained node
/*14978*/   OPC_RecordChild1, // #1 = $ptr
/*14979*/   OPC_CheckChild1Type, MVT::i64,
/*14981*/   OPC_RecordChild2, // #2 = $src2
/*14982*/   OPC_RecordChild3, // #3 = $bitshift
/*14983*/   OPC_RecordChild4, // #4 = $negbitshift
/*14984*/   OPC_RecordChild5, // #5 = $bitsize
/*14985*/   OPC_MoveChild, 5,
/*14987*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14990*/   OPC_MoveParent,
/*14991*/   OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*14994*/   OPC_EmitMergeInputChains1_0,
/*14995*/   OPC_EmitConvertToTarget, 5,
/*14997*/   OPC_EmitNodeXForm, 5, 8, // UIMM32
/*15000*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_MIN), 0|OPFL_Chain|OPFL_MemRefs,
                2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
            // Src: (z_atomic_loadw_min:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
            // Dst: (ATOMIC_LOADW_MIN:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
          /*SwitchOpcode*/ 38,  TARGET_VAL(SystemZISD::ATOMIC_LOADW_MAX),// ->15055
/*15017*/   OPC_RecordMemRef,
/*15018*/   OPC_RecordNode,   // #0 = 'z_atomic_loadw_max' chained node
/*15019*/   OPC_RecordChild1, // #1 = $ptr
/*15020*/   OPC_CheckChild1Type, MVT::i64,
/*15022*/   OPC_RecordChild2, // #2 = $src2
/*15023*/   OPC_RecordChild3, // #3 = $bitshift
/*15024*/   OPC_RecordChild4, // #4 = $negbitshift
/*15025*/   OPC_RecordChild5, // #5 = $bitsize
/*15026*/   OPC_MoveChild, 5,
/*15028*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*15031*/   OPC_MoveParent,
/*15032*/   OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*15035*/   OPC_EmitMergeInputChains1_0,
/*15036*/   OPC_EmitConvertToTarget, 5,
/*15038*/   OPC_EmitNodeXForm, 5, 8, // UIMM32
/*15041*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_MAX), 0|OPFL_Chain|OPFL_MemRefs,
                2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
            // Src: (z_atomic_loadw_max:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
            // Dst: (ATOMIC_LOADW_MAX:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
          /*SwitchOpcode*/ 38,  TARGET_VAL(SystemZISD::ATOMIC_LOADW_UMIN),// ->15096
/*15058*/   OPC_RecordMemRef,
/*15059*/   OPC_RecordNode,   // #0 = 'z_atomic_loadw_umin' chained node
/*15060*/   OPC_RecordChild1, // #1 = $ptr
/*15061*/   OPC_CheckChild1Type, MVT::i64,
/*15063*/   OPC_RecordChild2, // #2 = $src2
/*15064*/   OPC_RecordChild3, // #3 = $bitshift
/*15065*/   OPC_RecordChild4, // #4 = $negbitshift
/*15066*/   OPC_RecordChild5, // #5 = $bitsize
/*15067*/   OPC_MoveChild, 5,
/*15069*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*15072*/   OPC_MoveParent,
/*15073*/   OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*15076*/   OPC_EmitMergeInputChains1_0,
/*15077*/   OPC_EmitConvertToTarget, 5,
/*15079*/   OPC_EmitNodeXForm, 5, 8, // UIMM32
/*15082*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_UMIN), 0|OPFL_Chain|OPFL_MemRefs,
                2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
            // Src: (z_atomic_loadw_umin:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
            // Dst: (ATOMIC_LOADW_UMIN:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
          /*SwitchOpcode*/ 38,  TARGET_VAL(SystemZISD::ATOMIC_LOADW_UMAX),// ->15137
/*15099*/   OPC_RecordMemRef,
/*15100*/   OPC_RecordNode,   // #0 = 'z_atomic_loadw_umax' chained node
/*15101*/   OPC_RecordChild1, // #1 = $ptr
/*15102*/   OPC_CheckChild1Type, MVT::i64,
/*15104*/   OPC_RecordChild2, // #2 = $src2
/*15105*/   OPC_RecordChild3, // #3 = $bitshift
/*15106*/   OPC_RecordChild4, // #4 = $negbitshift
/*15107*/   OPC_RecordChild5, // #5 = $bitsize
/*15108*/   OPC_MoveChild, 5,
/*15110*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*15113*/   OPC_MoveParent,
/*15114*/   OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*15117*/   OPC_EmitMergeInputChains1_0,
/*15118*/   OPC_EmitConvertToTarget, 5,
/*15120*/   OPC_EmitNodeXForm, 5, 8, // UIMM32
/*15123*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_UMAX), 0|OPFL_Chain|OPFL_MemRefs,
                2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
            // Src: (z_atomic_loadw_umax:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
            // Dst: (ATOMIC_LOADW_UMAX:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
          /*SwitchOpcode*/ 40,  TARGET_VAL(SystemZISD::ATOMIC_CMP_SWAPW),// ->15180
/*15140*/   OPC_RecordMemRef,
/*15141*/   OPC_RecordNode,   // #0 = 'z_atomic_cmp_swapw' chained node
/*15142*/   OPC_RecordChild1, // #1 = $addr
/*15143*/   OPC_CheckChild1Type, MVT::i64,
/*15145*/   OPC_RecordChild2, // #2 = $cmp
/*15146*/   OPC_RecordChild3, // #3 = $swap
/*15147*/   OPC_RecordChild4, // #4 = $bitshift
/*15148*/   OPC_RecordChild5, // #5 = $negbitshift
/*15149*/   OPC_RecordChild6, // #6 = $bitsize
/*15150*/   OPC_MoveChild, 6,
/*15152*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*15155*/   OPC_MoveParent,
/*15156*/   OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$addr #7 #8
/*15159*/   OPC_EmitMergeInputChains1_0,
/*15160*/   OPC_EmitConvertToTarget, 6,
/*15162*/   OPC_EmitNodeXForm, 5, 9, // UIMM32
/*15165*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_CMP_SWAPW), 0|OPFL_Chain|OPFL_MemRefs,
                2/*#VTs*/, MVT::i32, MVT::i32, 7/*#Ops*/, 7, 8, 2, 3, 4, 5, 10, 
            // Src: (z_atomic_cmp_swapw:i32 bdaddr20only:i64:$addr, GR32:i32:$cmp, GR32:i32:$swap, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
            // Dst: (ATOMIC_CMP_SWAPW:i32:i32 bdaddr20only:i64:$addr, GR32:i32:$cmp, GR32:i32:$swap, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
          /*SwitchOpcode*/ 69,  TARGET_VAL(ISD::ATOMIC_CMP_SWAP),// ->15252
/*15183*/   OPC_RecordMemRef,
/*15184*/   OPC_RecordNode,   // #0 = 'atomic_cmp_swap' chained node
/*15185*/   OPC_RecordChild1, // #1 = $BD2
/*15186*/   OPC_CheckChild1Type, MVT::i64,
/*15188*/   OPC_RecordChild2, // #2 = $R1src
/*15189*/   OPC_RecordChild3, // #3 = $R3
/*15190*/   OPC_SwitchType /*2 cases */, 38,  MVT::i32,// ->15231
/*15193*/     OPC_CheckPredicate, 93, // Predicate_atomic_cmp_swap_32
/*15195*/     OPC_Scope, 16, /*->15213*/ // 2 children in Scope
/*15197*/       OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectBDAddr12Pair:$BD2 #4 #5
/*15200*/       OPC_EmitMergeInputChains1_0,
/*15201*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CS), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (atomic_cmp_swap:i32 bdaddr12pair:i64:$BD2, GR32:i32:$R1src, GR32:i32:$R3)<<P:Predicate_atomic_cmp_swap_32>> - Complexity = 13
                // Dst: (CS:i32:i32 GR32:i32:$R1src, GR32:i32:$R3, bdaddr12pair:i64:$BD2)
/*15213*/     /*Scope*/ 16, /*->15230*/
/*15214*/       OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDAddr20Pair:$BD2 #4 #5
/*15217*/       OPC_EmitMergeInputChains1_0,
/*15218*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CSY), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (atomic_cmp_swap:i32 bdaddr20pair:i64:$BD2, GR32:i32:$R1src, GR32:i32:$R3)<<P:Predicate_atomic_cmp_swap_32>> - Complexity = 13
                // Dst: (CSY:i32:i32 GR32:i32:$R1src, GR32:i32:$R3, bdaddr20pair:i64:$BD2)
/*15230*/     0, /*End of Scope*/
            /*SwitchType*/ 18,  MVT::i64,// ->15251
/*15233*/     OPC_CheckPredicate, 94, // Predicate_atomic_cmp_swap_64
/*15235*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$BD2 #4 #5
/*15238*/     OPC_EmitMergeInputChains1_0,
/*15239*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::CSG), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (atomic_cmp_swap:i64 bdaddr20only:i64:$BD2, GR64:i64:$R1src, GR64:i64:$R3)<<P:Predicate_atomic_cmp_swap_64>> - Complexity = 13
              // Dst: (CSG:i64:i32 GR64:i64:$R1src, GR64:i64:$R3, bdaddr20only:i64:$BD2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 46,  TARGET_VAL(ISD::ATOMIC_SWAP),// ->15301
/*15255*/   OPC_RecordMemRef,
/*15256*/   OPC_RecordNode,   // #0 = 'atomic_swap' chained node
/*15257*/   OPC_RecordChild1, // #1 = $ptr
/*15258*/   OPC_CheckChild1Type, MVT::i64,
/*15260*/   OPC_RecordChild2, // #2 = $src2
/*15261*/   OPC_SwitchType /*2 cases */, 17,  MVT::i32,// ->15281
/*15264*/     OPC_CheckPredicate, 95, // Predicate_atomic_swap_32
/*15266*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*15269*/     OPC_EmitMergeInputChains1_0,
/*15270*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_SWAP_32), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_swap:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_swap_32>> - Complexity = 13
              // Dst: (ATOMIC_SWAP_32:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
            /*SwitchType*/ 17,  MVT::i64,// ->15300
/*15283*/     OPC_CheckPredicate, 96, // Predicate_atomic_swap_64
/*15285*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*15288*/     OPC_EmitMergeInputChains1_0,
/*15289*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_SWAP_64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_swap:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_swap_64>> - Complexity = 13
              // Dst: (ATOMIC_SWAP_64:i64:i32 bdaddr20only:i64:$ptr, GR64:i64:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 46,  TARGET_VAL(ISD::ATOMIC_LOAD_SUB),// ->15350
/*15304*/   OPC_RecordMemRef,
/*15305*/   OPC_RecordNode,   // #0 = 'atomic_load_sub' chained node
/*15306*/   OPC_RecordChild1, // #1 = $ptr
/*15307*/   OPC_CheckChild1Type, MVT::i64,
/*15309*/   OPC_RecordChild2, // #2 = $src2
/*15310*/   OPC_SwitchType /*2 cases */, 17,  MVT::i32,// ->15330
/*15313*/     OPC_CheckPredicate, 97, // Predicate_atomic_load_sub_32
/*15315*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*15318*/     OPC_EmitMergeInputChains1_0,
/*15319*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_SR), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_sub:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_sub_32>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_SR:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
            /*SwitchType*/ 17,  MVT::i64,// ->15349
/*15332*/     OPC_CheckPredicate, 98, // Predicate_atomic_load_sub_64
/*15334*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*15337*/     OPC_EmitMergeInputChains1_0,
/*15338*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_SGR), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_sub:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_sub_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_SGR:i64:i32 bdaddr20only:i64:$ptr, GR64:i64:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 46,  TARGET_VAL(ISD::ATOMIC_LOAD_MIN),// ->15399
/*15353*/   OPC_RecordMemRef,
/*15354*/   OPC_RecordNode,   // #0 = 'atomic_load_min' chained node
/*15355*/   OPC_RecordChild1, // #1 = $ptr
/*15356*/   OPC_CheckChild1Type, MVT::i64,
/*15358*/   OPC_RecordChild2, // #2 = $src2
/*15359*/   OPC_SwitchType /*2 cases */, 17,  MVT::i32,// ->15379
/*15362*/     OPC_CheckPredicate, 99, // Predicate_atomic_load_min_32
/*15364*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*15367*/     OPC_EmitMergeInputChains1_0,
/*15368*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_MIN_32), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_min:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_min_32>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_MIN_32:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
            /*SwitchType*/ 17,  MVT::i64,// ->15398
/*15381*/     OPC_CheckPredicate, 100, // Predicate_atomic_load_min_64
/*15383*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*15386*/     OPC_EmitMergeInputChains1_0,
/*15387*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_MIN_64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_min:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_min_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_MIN_64:i64:i32 bdaddr20only:i64:$ptr, GR64:i64:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 46,  TARGET_VAL(ISD::ATOMIC_LOAD_MAX),// ->15448
/*15402*/   OPC_RecordMemRef,
/*15403*/   OPC_RecordNode,   // #0 = 'atomic_load_max' chained node
/*15404*/   OPC_RecordChild1, // #1 = $ptr
/*15405*/   OPC_CheckChild1Type, MVT::i64,
/*15407*/   OPC_RecordChild2, // #2 = $src2
/*15408*/   OPC_SwitchType /*2 cases */, 17,  MVT::i32,// ->15428
/*15411*/     OPC_CheckPredicate, 101, // Predicate_atomic_load_max_32
/*15413*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*15416*/     OPC_EmitMergeInputChains1_0,
/*15417*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_MAX_32), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_max:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_max_32>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_MAX_32:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
            /*SwitchType*/ 17,  MVT::i64,// ->15447
/*15430*/     OPC_CheckPredicate, 102, // Predicate_atomic_load_max_64
/*15432*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*15435*/     OPC_EmitMergeInputChains1_0,
/*15436*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_MAX_64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_max:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_max_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_MAX_64:i64:i32 bdaddr20only:i64:$ptr, GR64:i64:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 46,  TARGET_VAL(ISD::ATOMIC_LOAD_UMIN),// ->15497
/*15451*/   OPC_RecordMemRef,
/*15452*/   OPC_RecordNode,   // #0 = 'atomic_load_umin' chained node
/*15453*/   OPC_RecordChild1, // #1 = $ptr
/*15454*/   OPC_CheckChild1Type, MVT::i64,
/*15456*/   OPC_RecordChild2, // #2 = $src2
/*15457*/   OPC_SwitchType /*2 cases */, 17,  MVT::i32,// ->15477
/*15460*/     OPC_CheckPredicate, 103, // Predicate_atomic_load_umin_32
/*15462*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*15465*/     OPC_EmitMergeInputChains1_0,
/*15466*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_UMIN_32), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_umin:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_umin_32>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_UMIN_32:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
            /*SwitchType*/ 17,  MVT::i64,// ->15496
/*15479*/     OPC_CheckPredicate, 104, // Predicate_atomic_load_umin_64
/*15481*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*15484*/     OPC_EmitMergeInputChains1_0,
/*15485*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_UMIN_64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_umin:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_umin_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_UMIN_64:i64:i32 bdaddr20only:i64:$ptr, GR64:i64:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 46,  TARGET_VAL(ISD::ATOMIC_LOAD_UMAX),// ->15546
/*15500*/   OPC_RecordMemRef,
/*15501*/   OPC_RecordNode,   // #0 = 'atomic_load_umax' chained node
/*15502*/   OPC_RecordChild1, // #1 = $ptr
/*15503*/   OPC_CheckChild1Type, MVT::i64,
/*15505*/   OPC_RecordChild2, // #2 = $src2
/*15506*/   OPC_SwitchType /*2 cases */, 17,  MVT::i32,// ->15526
/*15509*/     OPC_CheckPredicate, 105, // Predicate_atomic_load_umax_32
/*15511*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*15514*/     OPC_EmitMergeInputChains1_0,
/*15515*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_UMAX_32), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_umax:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_umax_32>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_UMAX_32:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
            /*SwitchType*/ 17,  MVT::i64,// ->15545
/*15528*/     OPC_CheckPredicate, 106, // Predicate_atomic_load_umax_64
/*15530*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*15533*/     OPC_EmitMergeInputChains1_0,
/*15534*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_UMAX_64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_umax:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_umax_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_UMAX_64:i64:i32 bdaddr20only:i64:$ptr, GR64:i64:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 47,  TARGET_VAL(ISD::FrameIndex),// ->15596
/*15549*/   OPC_RecordNode,   // #0 = $src
/*15550*/   OPC_CheckType, MVT::i64,
/*15552*/   OPC_Scope, 13, /*->15567*/ // 3 children in Scope
/*15554*/     OPC_CheckComplexPat, /*CP*/13, /*#*/0, // selectDynAlloc12Only:$src #1 #2 #3
/*15557*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADJDYNALLOC), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
              // Src: dynalloc12only:i64:$src - Complexity = 12
              // Dst: (ADJDYNALLOC:i64 dynalloc12only:i64:$src)
/*15567*/   /*Scope*/ 13, /*->15581*/
/*15568*/     OPC_CheckComplexPat, /*CP*/14, /*#*/0, // selectLAAddr12Pair:$XBD2 #1 #2 #3
/*15571*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LA), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
              // Src: laaddr12pair:i64:$XBD2 - Complexity = 12
              // Dst: (LA:i64 laaddr12pair:i64:$XBD2)
/*15581*/   /*Scope*/ 13, /*->15595*/
/*15582*/     OPC_CheckComplexPat, /*CP*/15, /*#*/0, // selectLAAddr20Pair:$XBD2 #1 #2 #3
/*15585*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LAY), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
              // Src: laaddr20pair:i64:$XBD2 - Complexity = 12
              // Dst: (LAY:i64 laaddr20pair:i64:$XBD2)
/*15595*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 47,  TARGET_VAL(SystemZISD::ADJDYNALLOC),// ->15646
/*15599*/   OPC_RecordNode,   // #0 = $src
/*15600*/   OPC_CheckType, MVT::i64,
/*15602*/   OPC_Scope, 13, /*->15617*/ // 3 children in Scope
/*15604*/     OPC_CheckComplexPat, /*CP*/13, /*#*/0, // selectDynAlloc12Only:$src #1 #2 #3
/*15607*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADJDYNALLOC), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
              // Src: dynalloc12only:i64:$src - Complexity = 12
              // Dst: (ADJDYNALLOC:i64 dynalloc12only:i64:$src)
/*15617*/   /*Scope*/ 13, /*->15631*/
/*15618*/     OPC_CheckComplexPat, /*CP*/14, /*#*/0, // selectLAAddr12Pair:$XBD2 #1 #2 #3
/*15621*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LA), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
              // Src: laaddr12pair:i64:$XBD2 - Complexity = 12
              // Dst: (LA:i64 laaddr12pair:i64:$XBD2)
/*15631*/   /*Scope*/ 13, /*->15645*/
/*15632*/     OPC_CheckComplexPat, /*CP*/15, /*#*/0, // selectLAAddr20Pair:$XBD2 #1 #2 #3
/*15635*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LAY), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
              // Src: laaddr20pair:i64:$XBD2 - Complexity = 12
              // Dst: (LAY:i64 laaddr20pair:i64:$XBD2)
/*15645*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 36,  TARGET_VAL(ISD::SHL),// ->15685
/*15649*/   OPC_RecordChild0, // #0 = $R1src
/*15650*/   OPC_RecordChild1, // #1 = $BD2
/*15651*/   OPC_CheckChild1Type, MVT::i32,
/*15653*/   OPC_SwitchType /*2 cases */, 13,  MVT::i32,// ->15669
/*15656*/     OPC_CheckComplexPat, /*CP*/11, /*#*/1, // selectBDAddr12Only:$BD2 #2 #3
/*15659*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLL), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 2, 3, 
              // Src: (shl:i32 GR32:i32:$R1src, shift12only:i32:$BD2) - Complexity = 12
              // Dst: (SLL:i32 GR32:i32:$R1src, shift12only:i32:$BD2)
            /*SwitchType*/ 13,  MVT::i64,// ->15684
/*15671*/     OPC_CheckComplexPat, /*CP*/12, /*#*/1, // selectBDAddr20Only:$BD2 #2 #3
/*15674*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLLG), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 2, 3, 
              // Src: (shl:i64 GR64:i64:$R3, shift20only:i32:$BD2) - Complexity = 12
              // Dst: (SLLG:i64 GR64:i64:$R3, shift20only:i32:$BD2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 36,  TARGET_VAL(ISD::SRL),// ->15724
/*15688*/   OPC_RecordChild0, // #0 = $R1src
/*15689*/   OPC_RecordChild1, // #1 = $BD2
/*15690*/   OPC_CheckChild1Type, MVT::i32,
/*15692*/   OPC_SwitchType /*2 cases */, 13,  MVT::i32,// ->15708
/*15695*/     OPC_CheckComplexPat, /*CP*/11, /*#*/1, // selectBDAddr12Only:$BD2 #2 #3
/*15698*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::SRL), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 2, 3, 
              // Src: (srl:i32 GR32:i32:$R1src, shift12only:i32:$BD2) - Complexity = 12
              // Dst: (SRL:i32 GR32:i32:$R1src, shift12only:i32:$BD2)
            /*SwitchType*/ 13,  MVT::i64,// ->15723
/*15710*/     OPC_CheckComplexPat, /*CP*/12, /*#*/1, // selectBDAddr20Only:$BD2 #2 #3
/*15713*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::SRLG), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 2, 3, 
              // Src: (srl:i64 GR64:i64:$R3, shift20only:i32:$BD2) - Complexity = 12
              // Dst: (SRLG:i64 GR64:i64:$R3, shift20only:i32:$BD2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 36,  TARGET_VAL(ISD::ROTL),// ->15763
/*15727*/   OPC_RecordChild0, // #0 = $R3
/*15728*/   OPC_RecordChild1, // #1 = $BD2
/*15729*/   OPC_CheckChild1Type, MVT::i32,
/*15731*/   OPC_SwitchType /*2 cases */, 13,  MVT::i32,// ->15747
/*15734*/     OPC_CheckComplexPat, /*CP*/12, /*#*/1, // selectBDAddr20Only:$BD2 #2 #3
/*15737*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::RLL), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 2, 3, 
              // Src: (rotl:i32 GR32:i32:$R3, shift20only:i32:$BD2) - Complexity = 12
              // Dst: (RLL:i32 GR32:i32:$R3, shift20only:i32:$BD2)
            /*SwitchType*/ 13,  MVT::i64,// ->15762
/*15749*/     OPC_CheckComplexPat, /*CP*/12, /*#*/1, // selectBDAddr20Only:$BD2 #2 #3
/*15752*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::RLLG), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 2, 3, 
              // Src: (rotl:i64 GR64:i64:$R3, shift20only:i32:$BD2) - Complexity = 12
              // Dst: (RLLG:i64 GR64:i64:$R3, shift20only:i32:$BD2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 41,  TARGET_VAL(SystemZISD::BR_CCMASK),// ->15807
/*15766*/   OPC_RecordNode,   // #0 = 'z_br_ccmask' chained node
/*15767*/   OPC_CaptureGlueInput,
/*15768*/   OPC_RecordChild1, // #1 = $valid
/*15769*/   OPC_MoveChild, 1,
/*15771*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*15774*/   OPC_CheckPredicate, 54, // Predicate_cond4
/*15776*/   OPC_MoveParent,
/*15777*/   OPC_RecordChild2, // #2 = $R1
/*15778*/   OPC_MoveChild, 2,
/*15780*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*15783*/   OPC_CheckPredicate, 54, // Predicate_cond4
/*15785*/   OPC_MoveParent,
/*15786*/   OPC_RecordChild3, // #3 = $I2
/*15787*/   OPC_MoveChild, 3,
/*15789*/   OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*15792*/   OPC_MoveParent,
/*15793*/   OPC_EmitMergeInputChains1_0,
/*15794*/   OPC_EmitConvertToTarget, 1,
/*15796*/   OPC_EmitConvertToTarget, 2,
/*15798*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::BRC), 0|OPFL_Chain|OPFL_GlueInput,
                0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
            // Src: (z_br_ccmask (imm:i8)<<P:Predicate_cond4>>:$valid, (imm:i8)<<P:Predicate_cond4>>:$R1, (bb:Other):$I2) - Complexity = 11
            // Dst: (BRC (imm:i8):$valid, (imm:i8):$R1, (bb:Other):$I2)
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::CALLSEQ_END),// ->15835
/*15810*/   OPC_RecordNode,   // #0 = 'callseq_end' chained node
/*15811*/   OPC_CaptureGlueInput,
/*15812*/   OPC_RecordChild1, // #1 = $amt1
/*15813*/   OPC_MoveChild, 1,
/*15815*/   OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*15818*/   OPC_MoveParent,
/*15819*/   OPC_RecordChild2, // #2 = $amt2
/*15820*/   OPC_MoveChild, 2,
/*15822*/   OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*15825*/   OPC_MoveParent,
/*15826*/   OPC_EmitMergeInputChains1_0,
/*15827*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (callseq_end (timm:i64):$amt1, (timm:i64):$amt2) - Complexity = 9
            // Dst: (ADJCALLSTACKUP (timm:i64):$amt1, (timm:i64):$amt2)
          /*SwitchOpcode*/ 30,  TARGET_VAL(SystemZISD::CALL),// ->15868
/*15838*/   OPC_RecordNode,   // #0 = 'z_call' chained node
/*15839*/   OPC_CaptureGlueInput,
/*15840*/   OPC_RecordChild1, // #1 = $I2
/*15841*/   OPC_CheckChild1Type, MVT::i64,
/*15843*/   OPC_Scope, 12, /*->15857*/ // 2 children in Scope
/*15845*/     OPC_CheckComplexPat, /*CP*/17, /*#*/1, // selectPCRelAddress:$I2 #2
/*15848*/     OPC_EmitMergeInputChains1_0,
/*15849*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::BRASL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
              // Src: (z_call pcrel32call:i64:$I2) - Complexity = 9
              // Dst: (BRASL:i64 pcrel32call:i64:$I2)
/*15857*/   /*Scope*/ 9, /*->15867*/
/*15858*/     OPC_EmitMergeInputChains1_0,
/*15859*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::BASR), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
              // Src: (z_call ADDR64:i64:$R2) - Complexity = 3
              // Dst: (BASR:i64 ADDR64:i64:$R2)
/*15867*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 30,  TARGET_VAL(SystemZISD::SIBCALL),// ->15901
/*15871*/   OPC_RecordNode,   // #0 = 'z_sibcall' chained node
/*15872*/   OPC_CaptureGlueInput,
/*15873*/   OPC_RecordChild1, // #1 = $I2
/*15874*/   OPC_CheckChild1Type, MVT::i64,
/*15876*/   OPC_Scope, 11, /*->15889*/ // 2 children in Scope
/*15878*/     OPC_CheckComplexPat, /*CP*/17, /*#*/1, // selectPCRelAddress:$I2 #2
/*15881*/     OPC_EmitMergeInputChains1_0,
/*15882*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::CallJG), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  0/*#VTs*/, 1/*#Ops*/, 2, 
              // Src: (z_sibcall pcrel32call:i64:$I2) - Complexity = 9
              // Dst: (CallJG pcrel32call:i64:$I2)
/*15889*/   /*Scope*/ 10, /*->15900*/
/*15890*/     OPC_EmitMergeInputChains1_0,
/*15891*/     OPC_EmitCopyToReg, 1, SystemZ::R1D,
/*15894*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::CallBR), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (z_sibcall R1D:i64) - Complexity = 3
              // Dst: (CallBR)
/*15900*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 46|128,1/*174*/,  TARGET_VAL(ISD::FMA),// ->16079
/*15905*/   OPC_RecordChild0, // #0 = $R3
/*15906*/   OPC_Scope, 104, /*->16012*/ // 2 children in Scope
/*15908*/     OPC_MoveChild, 1,
/*15910*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*15913*/     OPC_RecordMemRef,
/*15914*/     OPC_RecordNode, // #1 = 'ld' chained node
/*15915*/     OPC_CheckFoldableChainNode,
/*15916*/     OPC_RecordChild1, // #2 = $XBD2
/*15917*/     OPC_CheckChild1Type, MVT::i64,
/*15919*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*15921*/     OPC_CheckPredicate, 13, // Predicate_load
/*15923*/     OPC_MoveParent,
/*15924*/     OPC_Scope, 45, /*->15971*/ // 2 children in Scope
/*15926*/       OPC_MoveChild, 2,
/*15928*/       OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*15931*/       OPC_RecordChild0, // #3 = $R1src
/*15932*/       OPC_MoveParent,
/*15933*/       OPC_SwitchType /*2 cases */, 16,  MVT::f32,// ->15952
/*15936*/         OPC_CheckComplexPat, /*CP*/16, /*#*/2, // selectBDXAddr12Only:$XBD2 #4 #5 #6
/*15939*/         OPC_EmitMergeInputChains1_1,
/*15940*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSEB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 5/*#Ops*/, 3, 0, 4, 5, 6, 
                  // Src: (fma:f32 FP32:f32:$R3, (ld:f32 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (fneg:f32 FP32:f32:$R1src)) - Complexity = 22
                  // Dst: (MSEB:f32 FP32:f32:$R1src, FP32:f32:$R3, bdxaddr12only:i64:$XBD2)
                /*SwitchType*/ 16,  MVT::f64,// ->15970
/*15954*/         OPC_CheckComplexPat, /*CP*/16, /*#*/2, // selectBDXAddr12Only:$XBD2 #4 #5 #6
/*15957*/         OPC_EmitMergeInputChains1_1,
/*15958*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSDB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 5/*#Ops*/, 3, 0, 4, 5, 6, 
                  // Src: (fma:f64 FP64:f64:$R3, (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (fneg:f64 FP64:f64:$R1src)) - Complexity = 22
                  // Dst: (MSDB:f64 FP64:f64:$R1src, FP64:f64:$R3, bdxaddr12only:i64:$XBD2)
                0, // EndSwitchType
/*15971*/     /*Scope*/ 39, /*->16011*/
/*15972*/       OPC_RecordChild2, // #3 = $R1src
/*15973*/       OPC_SwitchType /*2 cases */, 16,  MVT::f32,// ->15992
/*15976*/         OPC_CheckComplexPat, /*CP*/16, /*#*/2, // selectBDXAddr12Only:$XBD2 #4 #5 #6
/*15979*/         OPC_EmitMergeInputChains1_1,
/*15980*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MAEB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 5/*#Ops*/, 3, 0, 4, 5, 6, 
                  // Src: (fma:f32 FP32:f32:$R3, (ld:f32 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP32:f32:$R1src) - Complexity = 19
                  // Dst: (MAEB:f32 FP32:f32:$R1src, FP32:f32:$R3, bdxaddr12only:i64:$XBD2)
                /*SwitchType*/ 16,  MVT::f64,// ->16010
/*15994*/         OPC_CheckComplexPat, /*CP*/16, /*#*/2, // selectBDXAddr12Only:$XBD2 #4 #5 #6
/*15997*/         OPC_EmitMergeInputChains1_1,
/*15998*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MADB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 5/*#Ops*/, 3, 0, 4, 5, 6, 
                  // Src: (fma:f64 FP64:f64:$R3, (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP64:f64:$R1src) - Complexity = 19
                  // Dst: (MADB:f64 FP64:f64:$R1src, FP64:f64:$R3, bdxaddr12only:i64:$XBD2)
                0, // EndSwitchType
/*16011*/     0, /*End of Scope*/
/*16012*/   /*Scope*/ 65, /*->16078*/
/*16013*/     OPC_RecordChild1, // #1 = $R2
/*16014*/     OPC_Scope, 33, /*->16049*/ // 2 children in Scope
/*16016*/       OPC_MoveChild, 2,
/*16018*/       OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*16021*/       OPC_RecordChild0, // #2 = $R1src
/*16022*/       OPC_MoveParent,
/*16023*/       OPC_SwitchType /*2 cases */, 10,  MVT::f32,// ->16036
/*16026*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSEBR), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 0, 1, 
                  // Src: (fma:f32 FP32:f32:$R3, FP32:f32:$R2, (fneg:f32 FP32:f32:$R1src)) - Complexity = 6
                  // Dst: (MSEBR:f32 FP32:f32:$R1src, FP32:f32:$R3, FP32:f32:$R2)
                /*SwitchType*/ 10,  MVT::f64,// ->16048
/*16038*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSDBR), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                  // Src: (fma:f64 FP64:f64:$R3, FP64:f64:$R2, (fneg:f64 FP64:f64:$R1src)) - Complexity = 6
                  // Dst: (MSDBR:f64 FP64:f64:$R1src, FP64:f64:$R3, FP64:f64:$R2)
                0, // EndSwitchType
/*16049*/     /*Scope*/ 27, /*->16077*/
/*16050*/       OPC_RecordChild2, // #2 = $R1src
/*16051*/       OPC_SwitchType /*2 cases */, 10,  MVT::f32,// ->16064
/*16054*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MAEBR), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 0, 1, 
                  // Src: (fma:f32 FP32:f32:$R3, FP32:f32:$R2, FP32:f32:$R1src) - Complexity = 3
                  // Dst: (MAEBR:f32 FP32:f32:$R1src, FP32:f32:$R3, FP32:f32:$R2)
                /*SwitchType*/ 10,  MVT::f64,// ->16076
/*16066*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MADBR), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                  // Src: (fma:f64 FP64:f64:$R3, FP64:f64:$R2, FP64:f64:$R1src) - Complexity = 3
                  // Dst: (MADBR:f64 FP64:f64:$R1src, FP64:f64:$R3, FP64:f64:$R2)
                0, // EndSwitchType
/*16077*/     0, /*End of Scope*/
/*16078*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 98|128,3/*482*/,  TARGET_VAL(ISD::FMUL),// ->16565
/*16083*/   OPC_Scope, 111|128,1/*239*/, /*->16325*/ // 4 children in Scope
/*16086*/     OPC_MoveChild, 0,
/*16088*/     OPC_SwitchOpcode /*2 cases */, 119,  TARGET_VAL(ISD::FP_EXTEND),// ->16211
/*16092*/       OPC_RecordChild0, // #0 = $src1
/*16093*/       OPC_Scope, 56, /*->16151*/ // 2 children in Scope
/*16095*/         OPC_MoveParent,
/*16096*/         OPC_MoveChild, 1,
/*16098*/         OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*16101*/         OPC_RecordMemRef,
/*16102*/         OPC_RecordNode, // #1 = 'ld' chained node
/*16103*/         OPC_CheckFoldableChainNode,
/*16104*/         OPC_RecordChild1, // #2 = $addr
/*16105*/         OPC_CheckChild1Type, MVT::i64,
/*16107*/         OPC_CheckPredicate, 0, // Predicate_unindexedload
/*16109*/         OPC_CheckPredicate, 76, // Predicate_extload
/*16111*/         OPC_CheckPredicate, 81, // Predicate_extloadf32
/*16113*/         OPC_MoveParent,
/*16114*/         OPC_CheckType, MVT::f64,
/*16116*/         OPC_CheckComplexPat, /*CP*/16, /*#*/2, // selectBDXAddr12Only:$addr #3 #4 #5
/*16119*/         OPC_EmitMergeInputChains1_1,
/*16120*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::f64, 0/*#Ops*/,  // Results = #6
/*16127*/         OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*16130*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 6, 0, 7,  // Results = #8
/*16140*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MDEB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 4/*#Ops*/, 8, 3, 4, 5, 
                  // Src: (fmul:f64 (fextend:f64 FP32:f32:$src1), (ld:f64 bdxaddr12only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf32>>) - Complexity = 22
                  // Dst: (MDEB:f64 (INSERT_SUBREG:f64 (IMPLICIT_DEF:f64), FP32:f32:$src1, subreg_32bit:i32), bdxaddr12only:i64:$addr)
/*16151*/       /*Scope*/ 58, /*->16210*/
/*16152*/         OPC_CheckChild0Type, MVT::f64,
/*16154*/         OPC_MoveParent,
/*16155*/         OPC_MoveChild, 1,
/*16157*/         OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*16160*/         OPC_RecordMemRef,
/*16161*/         OPC_RecordNode, // #1 = 'ld' chained node
/*16162*/         OPC_CheckFoldableChainNode,
/*16163*/         OPC_RecordChild1, // #2 = $addr
/*16164*/         OPC_CheckChild1Type, MVT::i64,
/*16166*/         OPC_CheckPredicate, 0, // Predicate_unindexedload
/*16168*/         OPC_CheckPredicate, 76, // Predicate_extload
/*16170*/         OPC_CheckPredicate, 82, // Predicate_extloadf64
/*16172*/         OPC_MoveParent,
/*16173*/         OPC_CheckType, MVT::f128,
/*16175*/         OPC_CheckComplexPat, /*CP*/16, /*#*/2, // selectBDXAddr12Only:$addr #3 #4 #5
/*16178*/         OPC_EmitMergeInputChains1_1,
/*16179*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::f128, 0/*#Ops*/,  // Results = #6
/*16186*/         OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*16189*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::f128, 3/*#Ops*/, 6, 0, 7,  // Results = #8
/*16199*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MXDB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f128, 4/*#Ops*/, 8, 3, 4, 5, 
                  // Src: (fmul:f128 (fextend:f128 FP64:f64:$src1), (ld:f128 bdxaddr12only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf64>>) - Complexity = 22
                  // Dst: (MXDB:f128 (INSERT_SUBREG:f128 (IMPLICIT_DEF:f128), FP64:f64:$src1, subreg_high:i32), bdxaddr12only:i64:$addr)
/*16210*/       0, /*End of Scope*/
              /*SwitchOpcode*/ 110,  TARGET_VAL(ISD::LOAD),// ->16324
/*16214*/       OPC_RecordMemRef,
/*16215*/       OPC_RecordNode, // #0 = 'ld' chained node
/*16216*/       OPC_CheckFoldableChainNode,
/*16217*/       OPC_RecordChild1, // #1 = $addr
/*16218*/       OPC_CheckChild1Type, MVT::i64,
/*16220*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*16222*/       OPC_CheckPredicate, 76, // Predicate_extload
/*16224*/       OPC_Scope, 47, /*->16273*/ // 2 children in Scope
/*16226*/         OPC_CheckPredicate, 81, // Predicate_extloadf32
/*16228*/         OPC_MoveParent,
/*16229*/         OPC_MoveChild, 1,
/*16231*/         OPC_CheckOpcode, TARGET_VAL(ISD::FP_EXTEND),
/*16234*/         OPC_RecordChild0, // #2 = $src1
/*16235*/         OPC_MoveParent,
/*16236*/         OPC_CheckType, MVT::f64,
/*16238*/         OPC_CheckComplexPat, /*CP*/16, /*#*/1, // selectBDXAddr12Only:$addr #3 #4 #5
/*16241*/         OPC_EmitMergeInputChains1_0,
/*16242*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::f64, 0/*#Ops*/,  // Results = #6
/*16249*/         OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*16252*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 6, 2, 7,  // Results = #8
/*16262*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MDEB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 4/*#Ops*/, 8, 3, 4, 5, 
                  // Src: (fmul:f64 (ld:f64 bdxaddr12only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf32>>, (fextend:f64 FP32:f32:$src1)) - Complexity = 22
                  // Dst: (MDEB:f64 (INSERT_SUBREG:f64 (IMPLICIT_DEF:f64), FP32:f32:$src1, subreg_32bit:i32), bdxaddr12only:i64:$addr)
/*16273*/       /*Scope*/ 49, /*->16323*/
/*16274*/         OPC_CheckPredicate, 82, // Predicate_extloadf64
/*16276*/         OPC_MoveParent,
/*16277*/         OPC_MoveChild, 1,
/*16279*/         OPC_CheckOpcode, TARGET_VAL(ISD::FP_EXTEND),
/*16282*/         OPC_RecordChild0, // #2 = $src1
/*16283*/         OPC_CheckChild0Type, MVT::f64,
/*16285*/         OPC_MoveParent,
/*16286*/         OPC_CheckType, MVT::f128,
/*16288*/         OPC_CheckComplexPat, /*CP*/16, /*#*/1, // selectBDXAddr12Only:$addr #3 #4 #5
/*16291*/         OPC_EmitMergeInputChains1_0,
/*16292*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::f128, 0/*#Ops*/,  // Results = #6
/*16299*/         OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*16302*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::f128, 3/*#Ops*/, 6, 2, 7,  // Results = #8
/*16312*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MXDB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f128, 4/*#Ops*/, 8, 3, 4, 5, 
                  // Src: (fmul:f128 (ld:f128 bdxaddr12only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf64>>, (fextend:f128 FP64:f64:$src1)) - Complexity = 22
                  // Dst: (MXDB:f128 (INSERT_SUBREG:f128 (IMPLICIT_DEF:f128), FP64:f64:$src1, subreg_high:i32), bdxaddr12only:i64:$addr)
/*16323*/       0, /*End of Scope*/
              0, // EndSwitchOpcode
/*16325*/   /*Scope*/ 53, /*->16379*/
/*16326*/     OPC_RecordChild0, // #0 = $R1src
/*16327*/     OPC_MoveChild, 1,
/*16329*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*16332*/     OPC_RecordMemRef,
/*16333*/     OPC_RecordNode, // #1 = 'ld' chained node
/*16334*/     OPC_CheckFoldableChainNode,
/*16335*/     OPC_RecordChild1, // #2 = $XBD2
/*16336*/     OPC_CheckChild1Type, MVT::i64,
/*16338*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*16340*/     OPC_CheckPredicate, 13, // Predicate_load
/*16342*/     OPC_MoveParent,
/*16343*/     OPC_SwitchType /*2 cases */, 15,  MVT::f32,// ->16361
/*16346*/       OPC_CheckComplexPat, /*CP*/16, /*#*/2, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*16349*/       OPC_EmitMergeInputChains1_1,
/*16350*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::MEEB), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (fmul:f32 FP32:f32:$R1src, (ld:f32 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (MEEB:f32 FP32:f32:$R1src, bdxaddr12only:i64:$XBD2)
              /*SwitchType*/ 15,  MVT::f64,// ->16378
/*16363*/       OPC_CheckComplexPat, /*CP*/16, /*#*/2, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*16366*/       OPC_EmitMergeInputChains1_1,
/*16367*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::MDB), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (fmul:f64 FP64:f64:$R1src, (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (MDB:f64 FP64:f64:$R1src, bdxaddr12only:i64:$XBD2)
              0, // EndSwitchType
/*16379*/   /*Scope*/ 17|128,1/*145*/, /*->16526*/
/*16381*/     OPC_MoveChild, 0,
/*16383*/     OPC_SwitchOpcode /*2 cases */, 48,  TARGET_VAL(ISD::LOAD),// ->16435
/*16387*/       OPC_RecordMemRef,
/*16388*/       OPC_RecordNode, // #0 = 'ld' chained node
/*16389*/       OPC_CheckFoldableChainNode,
/*16390*/       OPC_RecordChild1, // #1 = $XBD2
/*16391*/       OPC_CheckChild1Type, MVT::i64,
/*16393*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*16395*/       OPC_CheckPredicate, 13, // Predicate_load
/*16397*/       OPC_MoveParent,
/*16398*/       OPC_RecordChild1, // #2 = $R1src
/*16399*/       OPC_SwitchType /*2 cases */, 15,  MVT::f32,// ->16417
/*16402*/         OPC_CheckComplexPat, /*CP*/16, /*#*/1, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*16405*/         OPC_EmitMergeInputChains1_0,
/*16406*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MEEB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (fmul:f32 (ld:f32 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP32:f32:$R1src) - Complexity = 19
                  // Dst: (MEEB:f32 FP32:f32:$R1src, bdxaddr12only:i64:$XBD2)
                /*SwitchType*/ 15,  MVT::f64,// ->16434
/*16419*/         OPC_CheckComplexPat, /*CP*/16, /*#*/1, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*16422*/         OPC_EmitMergeInputChains1_0,
/*16423*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MDB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (fmul:f64 (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP64:f64:$R1src) - Complexity = 19
                  // Dst: (MDB:f64 FP64:f64:$R1src, bdxaddr12only:i64:$XBD2)
                0, // EndSwitchType
              /*SwitchOpcode*/ 87,  TARGET_VAL(ISD::FP_EXTEND),// ->16525
/*16438*/       OPC_RecordChild0, // #0 = $src1
/*16439*/       OPC_Scope, 39, /*->16480*/ // 2 children in Scope
/*16441*/         OPC_MoveParent,
/*16442*/         OPC_MoveChild, 1,
/*16444*/         OPC_CheckOpcode, TARGET_VAL(ISD::FP_EXTEND),
/*16447*/         OPC_RecordChild0, // #1 = $src2
/*16448*/         OPC_MoveParent,
/*16449*/         OPC_CheckType, MVT::f64,
/*16451*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::f64, 0/*#Ops*/,  // Results = #2
/*16458*/         OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*16461*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 3,  // Results = #4
/*16471*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MDEBR), 0,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 4, 1, 
                  // Src: (fmul:f64 (fextend:f64 FP32:f32:$src1), (fextend:f64 FP32:f32:$src2)) - Complexity = 9
                  // Dst: (MDEBR:f64 (INSERT_SUBREG:f64 (IMPLICIT_DEF:f64), FP32:f32:$src1, subreg_32bit:i32), FP32:f32:$src2)
/*16480*/       /*Scope*/ 43, /*->16524*/
/*16481*/         OPC_CheckChild0Type, MVT::f64,
/*16483*/         OPC_MoveParent,
/*16484*/         OPC_MoveChild, 1,
/*16486*/         OPC_CheckOpcode, TARGET_VAL(ISD::FP_EXTEND),
/*16489*/         OPC_RecordChild0, // #1 = $src2
/*16490*/         OPC_CheckChild0Type, MVT::f64,
/*16492*/         OPC_MoveParent,
/*16493*/         OPC_CheckType, MVT::f128,
/*16495*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::f128, 0/*#Ops*/,  // Results = #2
/*16502*/         OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*16505*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::f128, 3/*#Ops*/, 2, 0, 3,  // Results = #4
/*16515*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MXDBR), 0,
                      1/*#VTs*/, MVT::f128, 2/*#Ops*/, 4, 1, 
                  // Src: (fmul:f128 (fextend:f128 FP64:f64:$src1), (fextend:f128 FP64:f64:$src2)) - Complexity = 9
                  // Dst: (MXDBR:f128 (INSERT_SUBREG:f128 (IMPLICIT_DEF:f128), FP64:f64:$src1, subreg_high:i32), FP64:f64:$src2)
/*16524*/       0, /*End of Scope*/
              0, // EndSwitchOpcode
/*16526*/   /*Scope*/ 37, /*->16564*/
/*16527*/     OPC_RecordChild0, // #0 = $R1src
/*16528*/     OPC_RecordChild1, // #1 = $R2
/*16529*/     OPC_SwitchType /*3 cases */, 9,  MVT::f32,// ->16541
/*16532*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::MEEBR), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fmul:f32 FP32:f32:$R1src, FP32:f32:$R2) - Complexity = 3
                // Dst: (MEEBR:f32 FP32:f32:$R1src, FP32:f32:$R2)
              /*SwitchType*/ 9,  MVT::f64,// ->16552
/*16543*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::MDBR), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fmul:f64 FP64:f64:$R1src, FP64:f64:$R2) - Complexity = 3
                // Dst: (MDBR:f64 FP64:f64:$R1src, FP64:f64:$R2)
              /*SwitchType*/ 9,  MVT::f128,// ->16563
/*16554*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::MXBR), 0,
                    1/*#VTs*/, MVT::f128, 2/*#Ops*/, 0, 1, 
                // Src: (fmul:f128 FP128:f128:$R1src, FP128:f128:$R2) - Complexity = 3
                // Dst: (MXBR:f128 FP128:f128:$R1src, FP128:f128:$R2)
              0, // EndSwitchType
/*16564*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 86,  TARGET_VAL(ISD::FSQRT),// ->16654
/*16568*/   OPC_Scope, 49, /*->16619*/ // 2 children in Scope
/*16570*/     OPC_MoveChild, 0,
/*16572*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*16575*/     OPC_RecordMemRef,
/*16576*/     OPC_RecordNode, // #0 = 'ld' chained node
/*16577*/     OPC_RecordChild1, // #1 = $XBD2
/*16578*/     OPC_CheckChild1Type, MVT::i64,
/*16580*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*16582*/     OPC_CheckPredicate, 13, // Predicate_load
/*16584*/     OPC_MoveParent,
/*16585*/     OPC_SwitchType /*2 cases */, 14,  MVT::f32,// ->16602
/*16588*/       OPC_CheckComplexPat, /*CP*/16, /*#*/1, // selectBDXAddr12Only:$XBD2 #2 #3 #4
/*16591*/       OPC_EmitMergeInputChains1_0,
/*16592*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SQEB), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (fsqrt:f32 (ld:f32 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (SQEB:f32 bdxaddr12only:i64:$XBD2)
              /*SwitchType*/ 14,  MVT::f64,// ->16618
/*16604*/       OPC_CheckComplexPat, /*CP*/16, /*#*/1, // selectBDXAddr12Only:$XBD2 #2 #3 #4
/*16607*/       OPC_EmitMergeInputChains1_0,
/*16608*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SQDB), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 3, 4, 
                // Src: (fsqrt:f64 (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (SQDB:f64 bdxaddr12only:i64:$XBD2)
              0, // EndSwitchType
/*16619*/   /*Scope*/ 33, /*->16653*/
/*16620*/     OPC_RecordChild0, // #0 = $R2
/*16621*/     OPC_SwitchType /*3 cases */, 8,  MVT::f32,// ->16632
/*16624*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SQEBR), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fsqrt:f32 FP32:f32:$R2) - Complexity = 3
                // Dst: (SQEBR:f32 FP32:f32:$R2)
              /*SwitchType*/ 8,  MVT::f64,// ->16642
/*16634*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SQDBR), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fsqrt:f64 FP64:f64:$R2) - Complexity = 3
                // Dst: (SQDBR:f64 FP64:f64:$R2)
              /*SwitchType*/ 8,  MVT::f128,// ->16652
/*16644*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SQXBR), 0,
                    1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0, 
                // Src: (fsqrt:f128 FP128:f128:$R2) - Complexity = 3
                // Dst: (SQXBR:f128 FP128:f128:$R2)
              0, // EndSwitchType
/*16653*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 27|128,1/*155*/,  TARGET_VAL(ISD::FADD),// ->16813
/*16658*/   OPC_Scope, 55, /*->16715*/ // 3 children in Scope
/*16660*/     OPC_RecordChild0, // #0 = $R1src
/*16661*/     OPC_MoveChild, 1,
/*16663*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*16666*/     OPC_RecordMemRef,
/*16667*/     OPC_RecordNode, // #1 = 'ld' chained node
/*16668*/     OPC_CheckFoldableChainNode,
/*16669*/     OPC_RecordChild1, // #2 = $XBD2
/*16670*/     OPC_CheckChild1Type, MVT::i64,
/*16672*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*16674*/     OPC_CheckPredicate, 13, // Predicate_load
/*16676*/     OPC_MoveParent,
/*16677*/     OPC_SwitchType /*2 cases */, 16,  MVT::f32,// ->16696
/*16680*/       OPC_CheckComplexPat, /*CP*/16, /*#*/2, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*16683*/       OPC_EmitMergeInputChains1_1,
/*16684*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::AEB), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::f32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (fadd:f32 FP32:f32:$R1src, (ld:f32 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (AEB:f32:i32 FP32:f32:$R1src, bdxaddr12only:i64:$XBD2)
              /*SwitchType*/ 16,  MVT::f64,// ->16714
/*16698*/       OPC_CheckComplexPat, /*CP*/16, /*#*/2, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*16701*/       OPC_EmitMergeInputChains1_1,
/*16702*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADB), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::f64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (fadd:f64 FP64:f64:$R1src, (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (ADB:f64:i32 FP64:f64:$R1src, bdxaddr12only:i64:$XBD2)
              0, // EndSwitchType
/*16715*/   /*Scope*/ 55, /*->16771*/
/*16716*/     OPC_MoveChild, 0,
/*16718*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*16721*/     OPC_RecordMemRef,
/*16722*/     OPC_RecordNode, // #0 = 'ld' chained node
/*16723*/     OPC_CheckFoldableChainNode,
/*16724*/     OPC_RecordChild1, // #1 = $XBD2
/*16725*/     OPC_CheckChild1Type, MVT::i64,
/*16727*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*16729*/     OPC_CheckPredicate, 13, // Predicate_load
/*16731*/     OPC_MoveParent,
/*16732*/     OPC_RecordChild1, // #2 = $R1src
/*16733*/     OPC_SwitchType /*2 cases */, 16,  MVT::f32,// ->16752
/*16736*/       OPC_CheckComplexPat, /*CP*/16, /*#*/1, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*16739*/       OPC_EmitMergeInputChains1_0,
/*16740*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::AEB), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::f32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (fadd:f32 (ld:f32 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP32:f32:$R1src) - Complexity = 19
                // Dst: (AEB:f32:i32 FP32:f32:$R1src, bdxaddr12only:i64:$XBD2)
              /*SwitchType*/ 16,  MVT::f64,// ->16770
/*16754*/       OPC_CheckComplexPat, /*CP*/16, /*#*/1, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*16757*/       OPC_EmitMergeInputChains1_0,
/*16758*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADB), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::f64, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (fadd:f64 (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP64:f64:$R1src) - Complexity = 19
                // Dst: (ADB:f64:i32 FP64:f64:$R1src, bdxaddr12only:i64:$XBD2)
              0, // EndSwitchType
/*16771*/   /*Scope*/ 40, /*->16812*/
/*16772*/     OPC_RecordChild0, // #0 = $R1src
/*16773*/     OPC_RecordChild1, // #1 = $R2
/*16774*/     OPC_SwitchType /*3 cases */, 10,  MVT::f32,// ->16787
/*16777*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::AEBR), 0,
                    2/*#VTs*/, MVT::f32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (fadd:f32 FP32:f32:$R1src, FP32:f32:$R2) - Complexity = 3
                // Dst: (AEBR:f32:i32 FP32:f32:$R1src, FP32:f32:$R2)
              /*SwitchType*/ 10,  MVT::f64,// ->16799
/*16789*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADBR), 0,
                    2/*#VTs*/, MVT::f64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (fadd:f64 FP64:f64:$R1src, FP64:f64:$R2) - Complexity = 3
                // Dst: (ADBR:f64:i32 FP64:f64:$R1src, FP64:f64:$R2)
              /*SwitchType*/ 10,  MVT::f128,// ->16811
/*16801*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::AXBR), 0,
                    2/*#VTs*/, MVT::f128, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (fadd:f128 FP128:f128:$R1src, FP128:f128:$R2) - Complexity = 3
                // Dst: (AXBR:f128:i32 FP128:f128:$R1src, FP128:f128:$R2)
              0, // EndSwitchType
/*16812*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 98,  TARGET_VAL(ISD::FSUB),// ->16914
/*16816*/   OPC_RecordChild0, // #0 = $R1src
/*16817*/   OPC_Scope, 54, /*->16873*/ // 2 children in Scope
/*16819*/     OPC_MoveChild, 1,
/*16821*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*16824*/     OPC_RecordMemRef,
/*16825*/     OPC_RecordNode, // #1 = 'ld' chained node
/*16826*/     OPC_CheckFoldableChainNode,
/*16827*/     OPC_RecordChild1, // #2 = $XBD2
/*16828*/     OPC_CheckChild1Type, MVT::i64,
/*16830*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*16832*/     OPC_CheckPredicate, 13, // Predicate_load
/*16834*/     OPC_MoveParent,
/*16835*/     OPC_SwitchType /*2 cases */, 16,  MVT::f32,// ->16854
/*16838*/       OPC_CheckComplexPat, /*CP*/16, /*#*/2, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*16841*/       OPC_EmitMergeInputChains1_1,
/*16842*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SEB), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::f32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (fsub:f32 FP32:f32:$R1src, (ld:f32 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (SEB:f32:i32 FP32:f32:$R1src, bdxaddr12only:i64:$XBD2)
              /*SwitchType*/ 16,  MVT::f64,// ->16872
/*16856*/       OPC_CheckComplexPat, /*CP*/16, /*#*/2, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*16859*/       OPC_EmitMergeInputChains1_1,
/*16860*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SDB), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::f64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (fsub:f64 FP64:f64:$R1src, (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (SDB:f64:i32 FP64:f64:$R1src, bdxaddr12only:i64:$XBD2)
              0, // EndSwitchType
/*16873*/   /*Scope*/ 39, /*->16913*/
/*16874*/     OPC_RecordChild1, // #1 = $R2
/*16875*/     OPC_SwitchType /*3 cases */, 10,  MVT::f32,// ->16888
/*16878*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SEBR), 0,
                    2/*#VTs*/, MVT::f32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (fsub:f32 FP32:f32:$R1src, FP32:f32:$R2) - Complexity = 3
                // Dst: (SEBR:f32:i32 FP32:f32:$R1src, FP32:f32:$R2)
              /*SwitchType*/ 10,  MVT::f64,// ->16900
/*16890*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SDBR), 0,
                    2/*#VTs*/, MVT::f64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (fsub:f64 FP64:f64:$R1src, FP64:f64:$R2) - Complexity = 3
                // Dst: (SDBR:f64:i32 FP64:f64:$R1src, FP64:f64:$R2)
              /*SwitchType*/ 10,  MVT::f128,// ->16912
/*16902*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SXBR), 0,
                    2/*#VTs*/, MVT::f128, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (fsub:f128 FP128:f128:$R1src, FP128:f128:$R2) - Complexity = 3
                // Dst: (SXBR:f128:i32 FP128:f128:$R1src, FP128:f128:$R2)
              0, // EndSwitchType
/*16913*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 93,  TARGET_VAL(ISD::FDIV),// ->17010
/*16917*/   OPC_RecordChild0, // #0 = $R1src
/*16918*/   OPC_Scope, 52, /*->16972*/ // 2 children in Scope
/*16920*/     OPC_MoveChild, 1,
/*16922*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*16925*/     OPC_RecordMemRef,
/*16926*/     OPC_RecordNode, // #1 = 'ld' chained node
/*16927*/     OPC_CheckFoldableChainNode,
/*16928*/     OPC_RecordChild1, // #2 = $XBD2
/*16929*/     OPC_CheckChild1Type, MVT::i64,
/*16931*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*16933*/     OPC_CheckPredicate, 13, // Predicate_load
/*16935*/     OPC_MoveParent,
/*16936*/     OPC_SwitchType /*2 cases */, 15,  MVT::f32,// ->16954
/*16939*/       OPC_CheckComplexPat, /*CP*/16, /*#*/2, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*16942*/       OPC_EmitMergeInputChains1_1,
/*16943*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::DEB), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (fdiv:f32 FP32:f32:$R1src, (ld:f32 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (DEB:f32 FP32:f32:$R1src, bdxaddr12only:i64:$XBD2)
              /*SwitchType*/ 15,  MVT::f64,// ->16971
/*16956*/       OPC_CheckComplexPat, /*CP*/16, /*#*/2, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*16959*/       OPC_EmitMergeInputChains1_1,
/*16960*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::DDB), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (fdiv:f64 FP64:f64:$R1src, (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (DDB:f64 FP64:f64:$R1src, bdxaddr12only:i64:$XBD2)
              0, // EndSwitchType
/*16972*/   /*Scope*/ 36, /*->17009*/
/*16973*/     OPC_RecordChild1, // #1 = $R2
/*16974*/     OPC_SwitchType /*3 cases */, 9,  MVT::f32,// ->16986
/*16977*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::DEBR), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fdiv:f32 FP32:f32:$R1src, FP32:f32:$R2) - Complexity = 3
                // Dst: (DEBR:f32 FP32:f32:$R1src, FP32:f32:$R2)
              /*SwitchType*/ 9,  MVT::f64,// ->16997
/*16988*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::DDBR), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fdiv:f64 FP64:f64:$R1src, FP64:f64:$R2) - Complexity = 3
                // Dst: (DDBR:f64 FP64:f64:$R1src, FP64:f64:$R2)
              /*SwitchType*/ 9,  MVT::f128,// ->17008
/*16999*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::DXBR), 0,
                    1/*#VTs*/, MVT::f128, 2/*#Ops*/, 0, 1, 
                // Src: (fdiv:f128 FP128:f128:$R1src, FP128:f128:$R2) - Complexity = 3
                // Dst: (DXBR:f128 FP128:f128:$R1src, FP128:f128:$R2)
              0, // EndSwitchType
/*17009*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 5|128,1/*133*/,  TARGET_VAL(SystemZISD::TM),// ->17147
/*17014*/   OPC_RecordChild0, // #0 = $R1
/*17015*/   OPC_Scope, 46, /*->17063*/ // 2 children in Scope
/*17017*/     OPC_CheckChild0Type, MVT::i32,
/*17019*/     OPC_RecordChild1, // #1 = $I2
/*17020*/     OPC_MoveChild, 1,
/*17022*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*17025*/     OPC_Scope, 17, /*->17044*/ // 2 children in Scope
/*17027*/       OPC_CheckPredicate, 48, // Predicate_imm32ll16
/*17029*/       OPC_MoveParent,
/*17030*/       OPC_EmitConvertToTarget, 1,
/*17032*/       OPC_EmitNodeXForm, 6, 2, // LL16
/*17035*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::TMLL32), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (z_tm GR32:i32:$R1, (imm:i32)<<P:Predicate_imm32ll16>><<X:LL16>>:$I2) - Complexity = 7
                // Dst: (TMLL32:i32 GR32:i32:$R1, (LL16:i32 (imm:i32):$I2))
/*17044*/     /*Scope*/ 17, /*->17062*/
/*17045*/       OPC_CheckPredicate, 49, // Predicate_imm32lh16
/*17047*/       OPC_MoveParent,
/*17048*/       OPC_EmitConvertToTarget, 1,
/*17050*/       OPC_EmitNodeXForm, 7, 2, // LH16
/*17053*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::TMLH32), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (z_tm GR32:i32:$R1, (imm:i32)<<P:Predicate_imm32lh16>><<X:LH16>>:$I2) - Complexity = 7
                // Dst: (TMLH32:i32 GR32:i32:$R1, (LH16:i32 (imm:i32):$I2))
/*17062*/     0, /*End of Scope*/
/*17063*/   /*Scope*/ 82, /*->17146*/
/*17064*/     OPC_CheckChild0Type, MVT::i64,
/*17066*/     OPC_RecordChild1, // #1 = $I2
/*17067*/     OPC_MoveChild, 1,
/*17069*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*17072*/     OPC_Scope, 17, /*->17091*/ // 4 children in Scope
/*17074*/       OPC_CheckPredicate, 50, // Predicate_imm64ll16
/*17076*/       OPC_MoveParent,
/*17077*/       OPC_EmitConvertToTarget, 1,
/*17079*/       OPC_EmitNodeXForm, 6, 2, // LL16
/*17082*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::TMLL), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (z_tm GR64:i64:$R1, (imm:i64)<<P:Predicate_imm64ll16>><<X:LL16>>:$I2) - Complexity = 7
                // Dst: (TMLL:i32 GR64:i64:$R1, (LL16:i64 (imm:i64):$I2))
/*17091*/     /*Scope*/ 17, /*->17109*/
/*17092*/       OPC_CheckPredicate, 51, // Predicate_imm64lh16
/*17094*/       OPC_MoveParent,
/*17095*/       OPC_EmitConvertToTarget, 1,
/*17097*/       OPC_EmitNodeXForm, 7, 2, // LH16
/*17100*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::TMLH), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (z_tm GR64:i64:$R1, (imm:i64)<<P:Predicate_imm64lh16>><<X:LH16>>:$I2) - Complexity = 7
                // Dst: (TMLH:i32 GR64:i64:$R1, (LH16:i64 (imm:i64):$I2))
/*17109*/     /*Scope*/ 17, /*->17127*/
/*17110*/       OPC_CheckPredicate, 52, // Predicate_imm64hl16
/*17112*/       OPC_MoveParent,
/*17113*/       OPC_EmitConvertToTarget, 1,
/*17115*/       OPC_EmitNodeXForm, 8, 2, // HL16
/*17118*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::TMHL), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (z_tm GR64:i64:$R1, (imm:i64)<<P:Predicate_imm64hl16>><<X:HL16>>:$I2) - Complexity = 7
                // Dst: (TMHL:i32 GR64:i64:$R1, (HL16:i64 (imm:i64):$I2))
/*17127*/     /*Scope*/ 17, /*->17145*/
/*17128*/       OPC_CheckPredicate, 53, // Predicate_imm64hh16
/*17130*/       OPC_MoveParent,
/*17131*/       OPC_EmitConvertToTarget, 1,
/*17133*/       OPC_EmitNodeXForm, 9, 2, // HH16
/*17136*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::TMHH), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (z_tm GR64:i64:$R1, (imm:i64)<<P:Predicate_imm64hh16>><<X:HH16>>:$I2) - Complexity = 7
                // Dst: (TMHH:i32 GR64:i64:$R1, (HH16:i64 (imm:i64):$I2))
/*17145*/     0, /*End of Scope*/
/*17146*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19,  TARGET_VAL(SystemZISD::EXTRACT_ACCESS),// ->17169
/*17150*/   OPC_RecordChild0, // #0 = $R2
/*17151*/   OPC_MoveChild, 0,
/*17153*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*17156*/   OPC_CheckPredicate, 107, // Predicate_access_reg
/*17158*/   OPC_MoveParent,
/*17159*/   OPC_EmitConvertToTarget, 0,
/*17161*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::EAR), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
            // Src: (z_extract_access:i32 (imm:i8)<<P:Predicate_access_reg>>:$R2) - Complexity = 7
            // Dst: (EAR:i32 (imm:i8):$R2)
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::CALLSEQ_START),// ->17188
/*17172*/   OPC_RecordNode,   // #0 = 'callseq_start' chained node
/*17173*/   OPC_RecordChild1, // #1 = $amt
/*17174*/   OPC_MoveChild, 1,
/*17176*/   OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*17179*/   OPC_MoveParent,
/*17180*/   OPC_EmitMergeInputChains1_0,
/*17181*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (callseq_start (timm:i64):$amt) - Complexity = 6
            // Dst: (ADJCALLSTACKDOWN (timm:i64):$amt)
          /*SwitchOpcode*/ 14,  TARGET_VAL(SystemZISD::PCREL_WRAPPER),// ->17205
/*17191*/   OPC_RecordNode,   // #0 = $I2
/*17192*/   OPC_CheckType, MVT::i64,
/*17194*/   OPC_CheckComplexPat, /*CP*/5, /*#*/0, // selectPCRelAddress:$I2 #1
/*17197*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::LARL), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
            // Src: pcrel32:i64:$I2 - Complexity = 6
            // Dst: (LARL:i64 pcrel32:i64:$I2)
          /*SwitchOpcode*/ 98|128,1/*226*/,  TARGET_VAL(ISD::Constant),// ->17435
/*17209*/   OPC_RecordNode,   // #0 = $I2
/*17210*/   OPC_SwitchType /*2 cases */, 88,  MVT::i32,// ->17301
/*17213*/     OPC_Scope, 15, /*->17230*/ // 4 children in Scope
/*17215*/       OPC_CheckPredicate, 34, // Predicate_imm32sx16
/*17217*/       OPC_EmitConvertToTarget, 0,
/*17219*/       OPC_EmitNodeXForm, 2, 1, // SIMM16
/*17222*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LHI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$I2 - Complexity = 4
                // Dst: (LHI:i32 (SIMM16:i32 (imm:i32):$I2))
/*17230*/     /*Scope*/ 27, /*->17258*/
/*17231*/       OPC_CheckPredicate, 48, // Predicate_imm32ll16
/*17233*/       OPC_EmitConvertToTarget, 0,
/*17235*/       OPC_EmitNodeXForm, 6, 1, // LL16
/*17238*/       OPC_EmitNode, TARGET_VAL(SystemZ::LLILL), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2,  // Results = #3
/*17246*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*17249*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                // Src: (imm:i32)<<P:Predicate_imm32ll16>><<X:LL16>>:$src - Complexity = 4
                // Dst: (EXTRACT_SUBREG:i32 (LLILL:i64 (LL16:i64 (imm:i32):$src)), subreg_32bit:i32)
/*17258*/     /*Scope*/ 27, /*->17286*/
/*17259*/       OPC_CheckPredicate, 49, // Predicate_imm32lh16
/*17261*/       OPC_EmitConvertToTarget, 0,
/*17263*/       OPC_EmitNodeXForm, 7, 1, // LH16
/*17266*/       OPC_EmitNode, TARGET_VAL(SystemZ::LLILH), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2,  // Results = #3
/*17274*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*17277*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                // Src: (imm:i32)<<P:Predicate_imm32lh16>><<X:LH16>>:$src - Complexity = 4
                // Dst: (EXTRACT_SUBREG:i32 (LLILH:i64 (LH16:i64 (imm:i32):$src)), subreg_32bit:i32)
/*17286*/     /*Scope*/ 13, /*->17300*/
/*17287*/       OPC_EmitConvertToTarget, 0,
/*17289*/       OPC_EmitNodeXForm, 5, 1, // UIMM32
/*17292*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::IILF32), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (imm:i32)<<X:UIMM32>>:$I2 - Complexity = 3
                // Dst: (IILF32:i32 (UIMM32:i32 (imm:i32):$I2))
/*17300*/     0, /*End of Scope*/
            /*SwitchType*/ 2|128,1/*130*/,  MVT::i64,// ->17434
/*17304*/     OPC_Scope, 15, /*->17321*/ // 8 children in Scope
/*17306*/       OPC_CheckPredicate, 35, // Predicate_imm64sx16
/*17308*/       OPC_EmitConvertToTarget, 0,
/*17310*/       OPC_EmitNodeXForm, 2, 1, // SIMM16
/*17313*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGHI), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_imm64sx16>><<X:SIMM16>>:$I2 - Complexity = 4
                // Dst: (LGHI:i64 (SIMM16:i64 (imm:i64):$I2))
/*17321*/     /*Scope*/ 15, /*->17337*/
/*17322*/       OPC_CheckPredicate, 50, // Predicate_imm64ll16
/*17324*/       OPC_EmitConvertToTarget, 0,
/*17326*/       OPC_EmitNodeXForm, 6, 1, // LL16
/*17329*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLILL), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_imm64ll16>><<X:LL16>>:$I2 - Complexity = 4
                // Dst: (LLILL:i64 (LL16:i64 (imm:i64):$I2))
/*17337*/     /*Scope*/ 15, /*->17353*/
/*17338*/       OPC_CheckPredicate, 51, // Predicate_imm64lh16
/*17340*/       OPC_EmitConvertToTarget, 0,
/*17342*/       OPC_EmitNodeXForm, 7, 1, // LH16
/*17345*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLILH), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_imm64lh16>><<X:LH16>>:$I2 - Complexity = 4
                // Dst: (LLILH:i64 (LH16:i64 (imm:i64):$I2))
/*17353*/     /*Scope*/ 15, /*->17369*/
/*17354*/       OPC_CheckPredicate, 52, // Predicate_imm64hl16
/*17356*/       OPC_EmitConvertToTarget, 0,
/*17358*/       OPC_EmitNodeXForm, 8, 1, // HL16
/*17361*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLIHL), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_imm64hl16>><<X:HL16>>:$I2 - Complexity = 4
                // Dst: (LLIHL:i64 (HL16:i64 (imm:i64):$I2))
/*17369*/     /*Scope*/ 15, /*->17385*/
/*17370*/       OPC_CheckPredicate, 53, // Predicate_imm64hh16
/*17372*/       OPC_EmitConvertToTarget, 0,
/*17374*/       OPC_EmitNodeXForm, 9, 1, // HH16
/*17377*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLIHH), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_imm64hh16>><<X:HH16>>:$I2 - Complexity = 4
                // Dst: (LLIHH:i64 (HH16:i64 (imm:i64):$I2))
/*17385*/     /*Scope*/ 15, /*->17401*/
/*17386*/       OPC_CheckPredicate, 58, // Predicate_imm64sx32
/*17388*/       OPC_EmitConvertToTarget, 0,
/*17390*/       OPC_EmitNodeXForm, 10, 1, // SIMM32
/*17393*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGFI), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_imm64sx32>><<X:SIMM32>>:$I2 - Complexity = 4
                // Dst: (LGFI:i64 (SIMM32:i64 (imm:i64):$I2))
/*17401*/     /*Scope*/ 15, /*->17417*/
/*17402*/       OPC_CheckPredicate, 43, // Predicate_imm64lf32
/*17404*/       OPC_EmitConvertToTarget, 0,
/*17406*/       OPC_EmitNodeXForm, 3, 1, // LF32
/*17409*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLILF), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_imm64lf32>><<X:LF32>>:$I2 - Complexity = 4
                // Dst: (LLILF:i64 (LF32:i64 (imm:i64):$I2))
/*17417*/     /*Scope*/ 15, /*->17433*/
/*17418*/       OPC_CheckPredicate, 44, // Predicate_imm64hf32
/*17420*/       OPC_EmitConvertToTarget, 0,
/*17422*/       OPC_EmitNodeXForm, 4, 1, // HF32
/*17425*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLIHF), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_imm64hf32>><<X:HF32>>:$I2 - Complexity = 4
                // Dst: (LLIHF:i64 (HF32:i64 (imm:i64):$I2))
/*17433*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 9,  TARGET_VAL(SystemZISD::RET_FLAG),// ->17447
/*17438*/   OPC_RecordNode,   // #0 = 'z_retflag' chained node
/*17439*/   OPC_CaptureGlueInput,
/*17440*/   OPC_EmitMergeInputChains1_0,
/*17441*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::RET), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic0,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (z_retflag) - Complexity = 3
            // Dst: (RET)
          /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::BRIND),// ->17462
/*17450*/   OPC_RecordNode,   // #0 = 'brind' chained node
/*17451*/   OPC_RecordChild1, // #1 = $R2
/*17452*/   OPC_CheckChild1Type, MVT::i64,
/*17454*/   OPC_EmitMergeInputChains1_0,
/*17455*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::BR), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (brind ADDR64:i64:$R2) - Complexity = 3
            // Dst: (BR ADDR64:i64:$R2)
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::BR),// ->17481
/*17465*/   OPC_RecordNode,   // #0 = 'br' chained node
/*17466*/   OPC_RecordChild1, // #1 = $I2
/*17467*/   OPC_MoveChild, 1,
/*17469*/   OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*17472*/   OPC_MoveParent,
/*17473*/   OPC_EmitMergeInputChains1_0,
/*17474*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::J), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (br (bb:Other):$I2) - Complexity = 3
            // Dst: (J (bb:Other):$I2)
          /*SwitchOpcode*/ 81,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->17565
/*17484*/   OPC_RecordChild0, // #0 = $R2
/*17485*/   OPC_MoveChild, 1,
/*17487*/   OPC_Scope, 25, /*->17514*/ // 3 children in Scope
/*17489*/     OPC_CheckValueType, MVT::i8,
/*17491*/     OPC_MoveParent,
/*17492*/     OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->17503
/*17495*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LBR), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 GR32:i32:$R2, i8:Other) - Complexity = 3
                // Dst: (LBR:i32 GR32:i32:$R2)
              /*SwitchType*/ 8,  MVT::i64,// ->17513
/*17505*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGBR), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 GR64:i64:$R2, i8:Other) - Complexity = 3
                // Dst: (LGBR:i64 GR64:i64:$R2)
              0, // EndSwitchType
/*17514*/   /*Scope*/ 25, /*->17540*/
/*17515*/     OPC_CheckValueType, MVT::i16,
/*17517*/     OPC_MoveParent,
/*17518*/     OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->17529
/*17521*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LHR), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 GR32:i32:$R2, i16:Other) - Complexity = 3
                // Dst: (LHR:i32 GR32:i32:$R2)
              /*SwitchType*/ 8,  MVT::i64,// ->17539
/*17531*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGHR), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 GR64:i64:$R2, i16:Other) - Complexity = 3
                // Dst: (LGHR:i64 GR64:i64:$R2)
              0, // EndSwitchType
/*17540*/   /*Scope*/ 23, /*->17564*/
/*17541*/     OPC_CheckValueType, MVT::i32,
/*17543*/     OPC_MoveParent,
/*17544*/     OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*17547*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*17556*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGFR), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
              // Src: (sext_inreg:i64 GR64:i64:$src, i32:Other) - Complexity = 3
              // Dst: (LGFR:i64 (EXTRACT_SUBREG:i32 GR64:i64:$src, subreg_32bit:i32))
/*17564*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::SIGN_EXTEND),// ->17577
/*17568*/   OPC_RecordChild0, // #0 = $R2
/*17569*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGFR), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
            // Src: (sext:i64 GR32:i32:$R2) - Complexity = 3
            // Dst: (LGFR:i64 GR32:i32:$R2)
          /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::ZERO_EXTEND),// ->17589
/*17580*/   OPC_RecordChild0, // #0 = $R2
/*17581*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGFR), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
            // Src: (zext:i64 GR32:i32:$R2) - Complexity = 3
            // Dst: (LLGFR:i64 GR32:i32:$R2)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::TRUNCATE),// ->17605
/*17592*/   OPC_RecordChild0, // #0 = $src
/*17593*/   OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*17596*/   OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (trunc:i32 GR64:i64:$src) - Complexity = 3
            // Dst: (EXTRACT_SUBREG:i32 GR64:i64:$src, subreg_32bit:i32)
          /*SwitchOpcode*/ 8,  TARGET_VAL(SystemZISD::IPM),// ->17616
/*17608*/   OPC_CaptureGlueInput,
/*17609*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::IPM), 0|OPFL_GlueInput,
                1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
            // Src: (z_ipm:i32) - Complexity = 3
            // Dst: (IPM:i32)
          /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::BITCAST),// ->17646
/*17619*/   OPC_RecordChild0, // #0 = $R2
/*17620*/   OPC_SwitchType /*2 cases */, 10,  MVT::i64,// ->17633
/*17623*/     OPC_CheckChild0Type, MVT::f64,
/*17625*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGDR), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (bitconvert:i64 FP64:f64:$R2) - Complexity = 3
              // Dst: (LGDR:i64 FP64:f64:$R2)
            /*SwitchType*/ 10,  MVT::f64,// ->17645
/*17635*/     OPC_CheckChild0Type, MVT::i64,
/*17637*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LDGR), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (bitconvert:f64 GR64:i64:$R2) - Complexity = 3
              // Dst: (LDGR:f64 GR64:i64:$R2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 108,  TARGET_VAL(ISD::FP_TO_SINT),// ->17757
/*17649*/   OPC_RecordChild0, // #0 = $src
/*17650*/   OPC_Scope, 34, /*->17686*/ // 3 children in Scope
/*17652*/     OPC_CheckChild0Type, MVT::f32,
/*17654*/     OPC_SwitchType /*2 cases */, 13,  MVT::i32,// ->17670
/*17657*/       OPC_EmitInteger, MVT::i8, 5, 
/*17660*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CFEBR), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (fp_to_sint:i32 FP32:f32:$src) - Complexity = 3
                // Dst: (CFEBR:i32:i32 5:i8, FP32:f32:$src)
              /*SwitchType*/ 13,  MVT::i64,// ->17685
/*17672*/       OPC_EmitInteger, MVT::i8, 5, 
/*17675*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGEBR), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (fp_to_sint:i64 FP32:f32:$src) - Complexity = 3
                // Dst: (CGEBR:i64:i32 5:i8, FP32:f32:$src)
              0, // EndSwitchType
/*17686*/   /*Scope*/ 34, /*->17721*/
/*17687*/     OPC_CheckChild0Type, MVT::f64,
/*17689*/     OPC_SwitchType /*2 cases */, 13,  MVT::i32,// ->17705
/*17692*/       OPC_EmitInteger, MVT::i8, 5, 
/*17695*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CFDBR), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (fp_to_sint:i32 FP64:f64:$src) - Complexity = 3
                // Dst: (CFDBR:i32:i32 5:i8, FP64:f64:$src)
              /*SwitchType*/ 13,  MVT::i64,// ->17720
/*17707*/       OPC_EmitInteger, MVT::i8, 5, 
/*17710*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGDBR), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (fp_to_sint:i64 FP64:f64:$src) - Complexity = 3
                // Dst: (CGDBR:i64:i32 5:i8, FP64:f64:$src)
              0, // EndSwitchType
/*17721*/   /*Scope*/ 34, /*->17756*/
/*17722*/     OPC_CheckChild0Type, MVT::f128,
/*17724*/     OPC_SwitchType /*2 cases */, 13,  MVT::i32,// ->17740
/*17727*/       OPC_EmitInteger, MVT::i8, 5, 
/*17730*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CFXBR), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (fp_to_sint:i32 FP128:f128:$src) - Complexity = 3
                // Dst: (CFXBR:i32:i32 5:i8, FP128:f128:$src)
              /*SwitchType*/ 13,  MVT::i64,// ->17755
/*17742*/       OPC_EmitInteger, MVT::i8, 5, 
/*17745*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGXBR), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (fp_to_sint:i64 FP128:f128:$src) - Complexity = 3
                // Dst: (CGXBR:i64:i32 5:i8, FP128:f128:$src)
              0, // EndSwitchType
/*17756*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 24,  TARGET_VAL(ISD::CTLZ),// ->17784
/*17760*/   OPC_RecordChild0, // #0 = $src
/*17761*/   OPC_CheckType, MVT::i64,
/*17763*/   OPC_EmitNode, TARGET_VAL(SystemZ::FLOGR), 0,
                2/*#VTs*/, MVT::Untyped, MVT::i32, 1/*#Ops*/, 0,  // Results = #1 #2
/*17772*/   OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*17775*/   OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 3, 
            // Src: (ctlz:i64 GR64:i64:$src) - Complexity = 3
            // Dst: (EXTRACT_SUBREG:i64 (FLOGR:Untyped:i32 GR64:i64:$src), subreg_high:i32)
          /*SwitchOpcode*/ 21,  TARGET_VAL(ISD::ANY_EXTEND),// ->17808
/*17787*/   OPC_RecordChild0, // #0 = $src
/*17788*/   OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                1/*#VTs*/, MVT::i64, 0/*#Ops*/,  // Results = #1
/*17795*/   OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*17798*/   OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
            // Src: (anyext:i64 GR32:i32:$src) - Complexity = 3
            // Dst: (INSERT_SUBREG:i64 (IMPLICIT_DEF:i64), GR32:i32:$src, subreg_32bit:i32)
          /*SwitchOpcode*/ 22,  TARGET_VAL(SystemZISD::STPCPY),// ->17833
/*17811*/   OPC_RecordNode,   // #0 = 'z_stpcpy' chained node
/*17812*/   OPC_RecordChild1, // #1 = $start1
/*17813*/   OPC_CheckChild1Type, MVT::i64,
/*17815*/   OPC_RecordChild2, // #2 = $start2
/*17816*/   OPC_CheckChild2Type, MVT::i64,
/*17818*/   OPC_RecordChild3, // #3 = $char
/*17819*/   OPC_CheckType, MVT::i64,
/*17821*/   OPC_EmitMergeInputChains1_0,
/*17822*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVSTLoop), 0|OPFL_Chain,
                2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
            // Src: (z_stpcpy:i64 GR64:i64:$start1, GR64:i64:$start2, GR32:i32:$char) - Complexity = 3
            // Dst: (MVSTLoop:i64:i32 GR64:i64:$start1, GR64:i64:$start2, GR32:i32:$char)
          /*SwitchOpcode*/ 22,  TARGET_VAL(SystemZISD::STRCMP),// ->17858
/*17836*/   OPC_RecordNode,   // #0 = 'z_strcmp' chained node
/*17837*/   OPC_RecordChild1, // #1 = $start1
/*17838*/   OPC_CheckChild1Type, MVT::i64,
/*17840*/   OPC_RecordChild2, // #2 = $start2
/*17841*/   OPC_CheckChild2Type, MVT::i64,
/*17843*/   OPC_RecordChild3, // #3 = $char
/*17844*/   OPC_CheckType, MVT::i64,
/*17846*/   OPC_EmitMergeInputChains1_0,
/*17847*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLSTLoop), 0|OPFL_Chain|OPFL_GlueOutput,
                2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
            // Src: (z_strcmp:i64 GR64:i64:$start1, GR64:i64:$start2, GR32:i32:$char) - Complexity = 3
            // Dst: (CLSTLoop:i64:i32 GR64:i64:$start1, GR64:i64:$start2, GR32:i32:$char)
          /*SwitchOpcode*/ 22,  TARGET_VAL(SystemZISD::SEARCH_STRING),// ->17883
/*17861*/   OPC_RecordNode,   // #0 = 'z_search_string' chained node
/*17862*/   OPC_RecordChild1, // #1 = $start1
/*17863*/   OPC_CheckChild1Type, MVT::i64,
/*17865*/   OPC_RecordChild2, // #2 = $start2
/*17866*/   OPC_CheckChild2Type, MVT::i64,
/*17868*/   OPC_RecordChild3, // #3 = $char
/*17869*/   OPC_CheckType, MVT::i64,
/*17871*/   OPC_EmitMergeInputChains1_0,
/*17872*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::SRSTLoop), 0|OPFL_Chain|OPFL_GlueOutput,
                2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
            // Src: (z_search_string:i64 GR64:i64:$start1, GR64:i64:$start2, GR32:i32:$char) - Complexity = 3
            // Dst: (SRSTLoop:i64:i32 GR64:i64:$start1, GR64:i64:$start2, GR32:i32:$char)
          /*SwitchOpcode*/ 82,  TARGET_VAL(ISD::FNEG),// ->17968
/*17886*/   OPC_Scope, 42, /*->17930*/ // 2 children in Scope
/*17888*/     OPC_MoveChild, 0,
/*17890*/     OPC_CheckOpcode, TARGET_VAL(ISD::FABS),
/*17893*/     OPC_RecordChild0, // #0 = $R2
/*17894*/     OPC_MoveParent,
/*17895*/     OPC_SwitchType /*3 cases */, 9,  MVT::f32,// ->17907
/*17898*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNEBR), 0,
                    2/*#VTs*/, MVT::f32, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (fneg:f32 (fabs:f32 FP32:f32:$R2)) - Complexity = 6
                // Dst: (LNEBR:f32:i32 FP32:f32:$R2)
              /*SwitchType*/ 9,  MVT::f64,// ->17918
/*17909*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNDBR), 0,
                    2/*#VTs*/, MVT::f64, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (fneg:f64 (fabs:f64 FP64:f64:$R2)) - Complexity = 6
                // Dst: (LNDBR:f64:i32 FP64:f64:$R2)
              /*SwitchType*/ 9,  MVT::f128,// ->17929
/*17920*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNXBR), 0,
                    2/*#VTs*/, MVT::f128, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (fneg:f128 (fabs:f128 FP128:f128:$R2)) - Complexity = 6
                // Dst: (LNXBR:f128:i32 FP128:f128:$R2)
              0, // EndSwitchType
/*17930*/   /*Scope*/ 36, /*->17967*/
/*17931*/     OPC_RecordChild0, // #0 = $R2
/*17932*/     OPC_SwitchType /*3 cases */, 9,  MVT::f32,// ->17944
/*17935*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCEBR), 0,
                    2/*#VTs*/, MVT::f32, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (fneg:f32 FP32:f32:$R2) - Complexity = 3
                // Dst: (LCEBR:f32:i32 FP32:f32:$R2)
              /*SwitchType*/ 9,  MVT::f64,// ->17955
/*17946*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCDBR), 0,
                    2/*#VTs*/, MVT::f64, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (fneg:f64 FP64:f64:$R2) - Complexity = 3
                // Dst: (LCDBR:f64:i32 FP64:f64:$R2)
              /*SwitchType*/ 9,  MVT::f128,// ->17966
/*17957*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCXBR), 0,
                    2/*#VTs*/, MVT::f128, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (fneg:f128 FP128:f128:$R2) - Complexity = 3
                // Dst: (LCXBR:f128:i32 FP128:f128:$R2)
              0, // EndSwitchType
/*17967*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 93,  TARGET_VAL(ISD::ConstantFP),// ->18064
/*17971*/   OPC_Scope, 31, /*->18004*/ // 2 children in Scope
/*17973*/     OPC_CheckPredicate, 59, // Predicate_fpimm0
/*17975*/     OPC_SwitchType /*3 cases */, 7,  MVT::f32,// ->17985
/*17978*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LZER), 0,
                    1/*#VTs*/, MVT::f32, 0/*#Ops*/, 
                // Src: (fpimm:f32)<<P:Predicate_fpimm0>> - Complexity = 4
                // Dst: (LZER:f32)
              /*SwitchType*/ 7,  MVT::f64,// ->17994
/*17987*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LZDR), 0,
                    1/*#VTs*/, MVT::f64, 0/*#Ops*/, 
                // Src: (fpimm:f64)<<P:Predicate_fpimm0>> - Complexity = 4
                // Dst: (LZDR:f64)
              /*SwitchType*/ 7,  MVT::f128,// ->18003
/*17996*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LZXR), 0,
                    1/*#VTs*/, MVT::f128, 0/*#Ops*/, 
                // Src: (fpimm:f128)<<P:Predicate_fpimm0>> - Complexity = 4
                // Dst: (LZXR:f128)
              0, // EndSwitchType
/*18004*/   /*Scope*/ 58, /*->18063*/
/*18005*/     OPC_CheckPredicate, 108, // Predicate_fpimmneg0
/*18007*/     OPC_SwitchType /*3 cases */, 16,  MVT::f32,// ->18026
/*18010*/       OPC_EmitNode, TARGET_VAL(SystemZ::LZER), 0,
                    1/*#VTs*/, MVT::f32, 0/*#Ops*/,  // Results = #0
/*18017*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCEBR), 0,
                    2/*#VTs*/, MVT::f32, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (fpimm:f32)<<P:Predicate_fpimmneg0>> - Complexity = 4
                // Dst: (LCEBR:f32:i32 (LZER:f32))
              /*SwitchType*/ 16,  MVT::f64,// ->18044
/*18028*/       OPC_EmitNode, TARGET_VAL(SystemZ::LZDR), 0,
                    1/*#VTs*/, MVT::f64, 0/*#Ops*/,  // Results = #0
/*18035*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCDBR), 0,
                    2/*#VTs*/, MVT::f64, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (fpimm:f64)<<P:Predicate_fpimmneg0>> - Complexity = 4
                // Dst: (LCDBR:f64:i32 (LZDR:f64))
              /*SwitchType*/ 16,  MVT::f128,// ->18062
/*18046*/       OPC_EmitNode, TARGET_VAL(SystemZ::LZXR), 0,
                    1/*#VTs*/, MVT::f128, 0/*#Ops*/,  // Results = #0
/*18053*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCXBR), 0,
                    2/*#VTs*/, MVT::f128, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (fpimm:f128)<<P:Predicate_fpimmneg0>> - Complexity = 4
                // Dst: (LCXBR:f128:i32 (LZXR:f128))
              0, // EndSwitchType
/*18063*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 101|128,1/*229*/,  TARGET_VAL(ISD::FCOPYSIGN),// ->18297
/*18068*/   OPC_RecordChild0, // #0 = $R3
/*18069*/   OPC_RecordChild1, // #1 = $R2
/*18070*/   OPC_Scope, 62, /*->18134*/ // 3 children in Scope
/*18072*/     OPC_CheckChild1Type, MVT::f32,
/*18074*/     OPC_SwitchType /*3 cases */, 9,  MVT::f32,// ->18086
/*18077*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CPSDRss), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fcopysign:f32 FP32:f32:$R3, FP32:f32:$R2) - Complexity = 3
                // Dst: (CPSDRss:f32 FP32:f32:$R3, FP32:f32:$R2)
              /*SwitchType*/ 9,  MVT::f64,// ->18097
/*18088*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CPSDRds), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fcopysign:f64 FP64:f64:$R3, FP32:f32:$R2) - Complexity = 3
                // Dst: (CPSDRds:f64 FP64:f64:$R3, FP32:f32:$R2)
              /*SwitchType*/ 34,  MVT::f128,// ->18133
/*18099*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*18102*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 2,  // Results = #3
/*18111*/       OPC_EmitNode, TARGET_VAL(SystemZ::CPSDRds), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 3, 1,  // Results = #4
/*18120*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*18123*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::f128, 3/*#Ops*/, 0, 4, 5, 
                // Src: (fcopysign:f128 FP128:f128:$src1, FP32:f32:$src2) - Complexity = 3
                // Dst: (INSERT_SUBREG:f128 FP128:f128:$src1, (CPSDRds:f64 (EXTRACT_SUBREG:f64 FP128:f128:$src1, subreg_high:i32), FP32:f32:$src2), subreg_high:i32)
              0, // EndSwitchType
/*18134*/   /*Scope*/ 62, /*->18197*/
/*18135*/     OPC_CheckChild1Type, MVT::f64,
/*18137*/     OPC_SwitchType /*3 cases */, 9,  MVT::f32,// ->18149
/*18140*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CPSDRsd), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fcopysign:f32 FP32:f32:$R3, FP64:f64:$R2) - Complexity = 3
                // Dst: (CPSDRsd:f32 FP32:f32:$R3, FP64:f64:$R2)
              /*SwitchType*/ 9,  MVT::f64,// ->18160
/*18151*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CPSDRdd), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fcopysign:f64 FP64:f64:$R3, FP64:f64:$R2) - Complexity = 3
                // Dst: (CPSDRdd:f64 FP64:f64:$R3, FP64:f64:$R2)
              /*SwitchType*/ 34,  MVT::f128,// ->18196
/*18162*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*18165*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 2,  // Results = #3
/*18174*/       OPC_EmitNode, TARGET_VAL(SystemZ::CPSDRdd), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 3, 1,  // Results = #4
/*18183*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*18186*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::f128, 3/*#Ops*/, 0, 4, 5, 
                // Src: (fcopysign:f128 FP128:f128:$src1, FP64:f64:$src2) - Complexity = 3
                // Dst: (INSERT_SUBREG:f128 FP128:f128:$src1, (CPSDRdd:f64 (EXTRACT_SUBREG:f64 FP128:f128:$src1, subreg_high:i32), FP64:f64:$src2), subreg_high:i32)
              0, // EndSwitchType
/*18197*/   /*Scope*/ 98, /*->18296*/
/*18198*/     OPC_CheckChild1Type, MVT::f128,
/*18200*/     OPC_SwitchType /*3 cases */, 21,  MVT::f32,// ->18224
/*18203*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*18206*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 2,  // Results = #3
/*18215*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CPSDRsd), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 3, 
                // Src: (fcopysign:f32 FP32:f32:$src1, FP128:f128:$src2) - Complexity = 3
                // Dst: (CPSDRsd:f32 FP32:f32:$src1, (EXTRACT_SUBREG:f64 FP128:f128:$src2, subreg_high:i32))
              /*SwitchType*/ 21,  MVT::f64,// ->18247
/*18226*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*18229*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 2,  // Results = #3
/*18238*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CPSDRdd), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 3, 
                // Src: (fcopysign:f64 FP64:f64:$src1, FP128:f128:$src2) - Complexity = 3
                // Dst: (CPSDRdd:f64 FP64:f64:$src1, (EXTRACT_SUBREG:f64 FP128:f128:$src2, subreg_high:i32))
              /*SwitchType*/ 46,  MVT::f128,// ->18295
/*18249*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*18252*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 2,  // Results = #3
/*18261*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*18264*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 4,  // Results = #5
/*18273*/       OPC_EmitNode, TARGET_VAL(SystemZ::CPSDRdd), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 3, 5,  // Results = #6
/*18282*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*18285*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::f128, 3/*#Ops*/, 0, 6, 7, 
                // Src: (fcopysign:f128 FP128:f128:$src1, FP128:f128:$src2) - Complexity = 3
                // Dst: (INSERT_SUBREG:f128 FP128:f128:$src1, (CPSDRdd:f64 (EXTRACT_SUBREG:f64 FP128:f128:$src1, subreg_high:i32), (EXTRACT_SUBREG:f64 FP128:f128:$src2, subreg_high:i32)), subreg_high:i32)
              0, // EndSwitchType
/*18296*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 63,  TARGET_VAL(ISD::FP_ROUND),// ->18363
/*18300*/   OPC_RecordChild0, // #0 = $R2
/*18301*/   OPC_SwitchType /*2 cases */, 36,  MVT::f32,// ->18340
/*18304*/     OPC_Scope, 10, /*->18316*/ // 2 children in Scope
/*18306*/       OPC_CheckChild0Type, MVT::f64,
/*18308*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LEDBR), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fround:f32 FP64:f64:$R2) - Complexity = 3
                // Dst: (LEDBR:f32 FP64:f64:$R2)
/*18316*/     /*Scope*/ 22, /*->18339*/
/*18317*/       OPC_CheckChild0Type, MVT::f128,
/*18319*/       OPC_EmitNode, TARGET_VAL(SystemZ::LEXBR), 0,
                    1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0,  // Results = #1
/*18327*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*18330*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 2, 
                // Src: (fround:f32 FP128:f128:$src) - Complexity = 3
                // Dst: (EXTRACT_SUBREG:f32 (LEXBR:f128 FP128:f128:$src), subreg_32bit:i32)
/*18339*/     0, /*End of Scope*/
            /*SwitchType*/ 20,  MVT::f64,// ->18362
/*18342*/     OPC_EmitNode, TARGET_VAL(SystemZ::LDXBR), 0,
                  1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0,  // Results = #1
/*18350*/     OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*18353*/     OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 2, 
              // Src: (fround:f64 FP128:f128:$src) - Complexity = 3
              // Dst: (EXTRACT_SUBREG:f64 (LDXBR:f128 FP128:f128:$src), subreg_high:i32)
            0, // EndSwitchType
          /*SwitchOpcode*/ 39,  TARGET_VAL(ISD::FP_EXTEND),// ->18405
/*18366*/   OPC_RecordChild0, // #0 = $R2
/*18367*/   OPC_SwitchType /*2 cases */, 8,  MVT::f64,// ->18378
/*18370*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LDEBR), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fextend:f64 FP32:f32:$R2) - Complexity = 3
              // Dst: (LDEBR:f64 FP32:f32:$R2)
            /*SwitchType*/ 24,  MVT::f128,// ->18404
/*18380*/     OPC_Scope, 10, /*->18392*/ // 2 children in Scope
/*18382*/       OPC_CheckChild0Type, MVT::f32,
/*18384*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LXEBR), 0,
                    1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0, 
                // Src: (fextend:f128 FP32:f32:$R2) - Complexity = 3
                // Dst: (LXEBR:f128 FP32:f32:$R2)
/*18392*/     /*Scope*/ 10, /*->18403*/
/*18393*/       OPC_CheckChild0Type, MVT::f64,
/*18395*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LXDBR), 0,
                    1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0, 
                // Src: (fextend:f128 FP64:f64:$R2) - Complexity = 3
                // Dst: (LXDBR:f128 FP64:f64:$R2)
/*18403*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 73,  TARGET_VAL(ISD::SINT_TO_FP),// ->18481
/*18408*/   OPC_RecordChild0, // #0 = $R2
/*18409*/   OPC_Scope, 34, /*->18445*/ // 2 children in Scope
/*18411*/     OPC_CheckChild0Type, MVT::i32,
/*18413*/     OPC_SwitchType /*3 cases */, 8,  MVT::f32,// ->18424
/*18416*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CEFBR), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (sint_to_fp:f32 GR32:i32:$R2) - Complexity = 3
                // Dst: (CEFBR:f32 GR32:i32:$R2)
              /*SwitchType*/ 8,  MVT::f64,// ->18434
/*18426*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CDFBR), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (sint_to_fp:f64 GR32:i32:$R2) - Complexity = 3
                // Dst: (CDFBR:f64 GR32:i32:$R2)
              /*SwitchType*/ 8,  MVT::f128,// ->18444
/*18436*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CXFBR), 0,
                    1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0, 
                // Src: (sint_to_fp:f128 GR32:i32:$R2) - Complexity = 3
                // Dst: (CXFBR:f128 GR32:i32:$R2)
              0, // EndSwitchType
/*18445*/   /*Scope*/ 34, /*->18480*/
/*18446*/     OPC_CheckChild0Type, MVT::i64,
/*18448*/     OPC_SwitchType /*3 cases */, 8,  MVT::f32,// ->18459
/*18451*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CEGBR), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (sint_to_fp:f32 GR64:i64:$R2) - Complexity = 3
                // Dst: (CEGBR:f32 GR64:i64:$R2)
              /*SwitchType*/ 8,  MVT::f64,// ->18469
/*18461*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CDGBR), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (sint_to_fp:f64 GR64:i64:$R2) - Complexity = 3
                // Dst: (CDGBR:f64 GR64:i64:$R2)
              /*SwitchType*/ 8,  MVT::f128,// ->18479
/*18471*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CXGBR), 0,
                    1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0, 
                // Src: (sint_to_fp:f128 GR64:i64:$R2) - Complexity = 3
                // Dst: (CXGBR:f128 GR64:i64:$R2)
              0, // EndSwitchType
/*18480*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 36,  TARGET_VAL(ISD::FABS),// ->18520
/*18484*/   OPC_RecordChild0, // #0 = $R2
/*18485*/   OPC_SwitchType /*3 cases */, 9,  MVT::f32,// ->18497
/*18488*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPEBR), 0,
                  2/*#VTs*/, MVT::f32, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (fabs:f32 FP32:f32:$R2) - Complexity = 3
              // Dst: (LPEBR:f32:i32 FP32:f32:$R2)
            /*SwitchType*/ 9,  MVT::f64,// ->18508
/*18499*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPDBR), 0,
                  2/*#VTs*/, MVT::f64, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (fabs:f64 FP64:f64:$R2) - Complexity = 3
              // Dst: (LPDBR:f64:i32 FP64:f64:$R2)
            /*SwitchType*/ 9,  MVT::f128,// ->18519
/*18510*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPXBR), 0,
                  2/*#VTs*/, MVT::f128, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (fabs:f128 FP128:f128:$R2) - Complexity = 3
              // Dst: (LPXBR:f128:i32 FP128:f128:$R2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 45,  TARGET_VAL(ISD::FRINT),// ->18568
/*18523*/   OPC_RecordChild0, // #0 = $src
/*18524*/   OPC_SwitchType /*3 cases */, 12,  MVT::f32,// ->18539
/*18527*/     OPC_EmitInteger, MVT::i8, 0, 
/*18530*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::FIEBR), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 0, 
              // Src: (frint:f32 FP32:f32:$src) - Complexity = 3
              // Dst: (FIEBR:f32 0:i8, FP32:f32:$src)
            /*SwitchType*/ 12,  MVT::f64,// ->18553
/*18541*/     OPC_EmitInteger, MVT::i8, 0, 
/*18544*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::FIDBR), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 0, 
              // Src: (frint:f64 FP64:f64:$src) - Complexity = 3
              // Dst: (FIDBR:f64 0:i8, FP64:f64:$src)
            /*SwitchType*/ 12,  MVT::f128,// ->18567
/*18555*/     OPC_EmitInteger, MVT::i8, 0, 
/*18558*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::FIXBR), 0,
                  1/*#VTs*/, MVT::f128, 2/*#Ops*/, 1, 0, 
              // Src: (frint:f128 FP128:f128:$src) - Complexity = 3
              // Dst: (FIXBR:f128 0:i8, FP128:f128:$src)
            0, // EndSwitchType
          /*SwitchOpcode*/ 63,  TARGET_VAL(ISD::FNEARBYINT),// ->18634
/*18571*/   OPC_RecordChild0, // #0 = $src
/*18572*/   OPC_SwitchType /*3 cases */, 18,  MVT::f32,// ->18593
/*18575*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasFPExtension())
/*18577*/     OPC_EmitInteger, MVT::i8, 0, 
/*18580*/     OPC_EmitInteger, MVT::i8, 4, 
/*18583*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::FIEBRA), 0,
                  1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
              // Src: (fnearbyint:f32 FP32:f32:$src) - Complexity = 3
              // Dst: (FIEBRA:f32 0:i8, FP32:f32:$src, 4:i8)
            /*SwitchType*/ 18,  MVT::f64,// ->18613
/*18595*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasFPExtension())
/*18597*/     OPC_EmitInteger, MVT::i8, 0, 
/*18600*/     OPC_EmitInteger, MVT::i8, 4, 
/*18603*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::FIDBRA), 0,
                  1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
              // Src: (fnearbyint:f64 FP64:f64:$src) - Complexity = 3
              // Dst: (FIDBRA:f64 0:i8, FP64:f64:$src, 4:i8)
            /*SwitchType*/ 18,  MVT::f128,// ->18633
/*18615*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasFPExtension())
/*18617*/     OPC_EmitInteger, MVT::i8, 0, 
/*18620*/     OPC_EmitInteger, MVT::i8, 4, 
/*18623*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::FIXBRA), 0,
                  1/*#VTs*/, MVT::f128, 3/*#Ops*/, 1, 0, 2, 
              // Src: (fnearbyint:f128 FP128:f128:$src) - Complexity = 3
              // Dst: (FIXBRA:f128 0:i8, FP128:f128:$src, 4:i8)
            0, // EndSwitchType
          /*SwitchOpcode*/ 63,  TARGET_VAL(ISD::FFLOOR),// ->18700
/*18637*/   OPC_RecordChild0, // #0 = $src
/*18638*/   OPC_SwitchType /*3 cases */, 18,  MVT::f32,// ->18659
/*18641*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasFPExtension())
/*18643*/     OPC_EmitInteger, MVT::i8, 7, 
/*18646*/     OPC_EmitInteger, MVT::i8, 4, 
/*18649*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::FIEBRA), 0,
                  1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
              // Src: (ffloor:f32 FP32:f32:$src) - Complexity = 3
              // Dst: (FIEBRA:f32 7:i8, FP32:f32:$src, 4:i8)
            /*SwitchType*/ 18,  MVT::f64,// ->18679
/*18661*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasFPExtension())
/*18663*/     OPC_EmitInteger, MVT::i8, 7, 
/*18666*/     OPC_EmitInteger, MVT::i8, 4, 
/*18669*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::FIDBRA), 0,
                  1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
              // Src: (ffloor:f64 FP64:f64:$src) - Complexity = 3
              // Dst: (FIDBRA:f64 7:i8, FP64:f64:$src, 4:i8)
            /*SwitchType*/ 18,  MVT::f128,// ->18699
/*18681*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasFPExtension())
/*18683*/     OPC_EmitInteger, MVT::i8, 7, 
/*18686*/     OPC_EmitInteger, MVT::i8, 4, 
/*18689*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::FIXBRA), 0,
                  1/*#VTs*/, MVT::f128, 3/*#Ops*/, 1, 0, 2, 
              // Src: (ffloor:f128 FP128:f128:$src) - Complexity = 3
              // Dst: (FIXBRA:f128 7:i8, FP128:f128:$src, 4:i8)
            0, // EndSwitchType
          /*SwitchOpcode*/ 63,  TARGET_VAL(ISD::FCEIL),// ->18766
/*18703*/   OPC_RecordChild0, // #0 = $src
/*18704*/   OPC_SwitchType /*3 cases */, 18,  MVT::f32,// ->18725
/*18707*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasFPExtension())
/*18709*/     OPC_EmitInteger, MVT::i8, 6, 
/*18712*/     OPC_EmitInteger, MVT::i8, 4, 
/*18715*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::FIEBRA), 0,
                  1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
              // Src: (fceil:f32 FP32:f32:$src) - Complexity = 3
              // Dst: (FIEBRA:f32 6:i8, FP32:f32:$src, 4:i8)
            /*SwitchType*/ 18,  MVT::f64,// ->18745
/*18727*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasFPExtension())
/*18729*/     OPC_EmitInteger, MVT::i8, 6, 
/*18732*/     OPC_EmitInteger, MVT::i8, 4, 
/*18735*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::FIDBRA), 0,
                  1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
              // Src: (fceil:f64 FP64:f64:$src) - Complexity = 3
              // Dst: (FIDBRA:f64 6:i8, FP64:f64:$src, 4:i8)
            /*SwitchType*/ 18,  MVT::f128,// ->18765
/*18747*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasFPExtension())
/*18749*/     OPC_EmitInteger, MVT::i8, 6, 
/*18752*/     OPC_EmitInteger, MVT::i8, 4, 
/*18755*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::FIXBRA), 0,
                  1/*#VTs*/, MVT::f128, 3/*#Ops*/, 1, 0, 2, 
              // Src: (fceil:f128 FP128:f128:$src) - Complexity = 3
              // Dst: (FIXBRA:f128 6:i8, FP128:f128:$src, 4:i8)
            0, // EndSwitchType
          /*SwitchOpcode*/ 63,  TARGET_VAL(ISD::FTRUNC),// ->18832
/*18769*/   OPC_RecordChild0, // #0 = $src
/*18770*/   OPC_SwitchType /*3 cases */, 18,  MVT::f32,// ->18791
/*18773*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasFPExtension())
/*18775*/     OPC_EmitInteger, MVT::i8, 5, 
/*18778*/     OPC_EmitInteger, MVT::i8, 4, 
/*18781*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::FIEBRA), 0,
                  1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
              // Src: (ftrunc:f32 FP32:f32:$src) - Complexity = 3
              // Dst: (FIEBRA:f32 5:i8, FP32:f32:$src, 4:i8)
            /*SwitchType*/ 18,  MVT::f64,// ->18811
/*18793*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasFPExtension())
/*18795*/     OPC_EmitInteger, MVT::i8, 5, 
/*18798*/     OPC_EmitInteger, MVT::i8, 4, 
/*18801*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::FIDBRA), 0,
                  1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
              // Src: (ftrunc:f64 FP64:f64:$src) - Complexity = 3
              // Dst: (FIDBRA:f64 5:i8, FP64:f64:$src, 4:i8)
            /*SwitchType*/ 18,  MVT::f128,// ->18831
/*18813*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasFPExtension())
/*18815*/     OPC_EmitInteger, MVT::i8, 5, 
/*18818*/     OPC_EmitInteger, MVT::i8, 4, 
/*18821*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::FIXBRA), 0,
                  1/*#VTs*/, MVT::f128, 3/*#Ops*/, 1, 0, 2, 
              // Src: (ftrunc:f128 FP128:f128:$src) - Complexity = 3
              // Dst: (FIXBRA:f128 5:i8, FP128:f128:$src, 4:i8)
            0, // EndSwitchType
          /*SwitchOpcode*/ 63,  TARGET_VAL(ISD::FROUND),// ->18898
/*18835*/   OPC_RecordChild0, // #0 = $src
/*18836*/   OPC_SwitchType /*3 cases */, 18,  MVT::f32,// ->18857
/*18839*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasFPExtension())
/*18841*/     OPC_EmitInteger, MVT::i8, 1, 
/*18844*/     OPC_EmitInteger, MVT::i8, 4, 
/*18847*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::FIEBRA), 0,
                  1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
              // Src: (frnd:f32 FP32:f32:$src) - Complexity = 3
              // Dst: (FIEBRA:f32 1:i8, FP32:f32:$src, 4:i8)
            /*SwitchType*/ 18,  MVT::f64,// ->18877
/*18859*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasFPExtension())
/*18861*/     OPC_EmitInteger, MVT::i8, 1, 
/*18864*/     OPC_EmitInteger, MVT::i8, 4, 
/*18867*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::FIDBRA), 0,
                  1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
              // Src: (frnd:f64 FP64:f64:$src) - Complexity = 3
              // Dst: (FIDBRA:f64 1:i8, FP64:f64:$src, 4:i8)
            /*SwitchType*/ 18,  MVT::f128,// ->18897
/*18879*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasFPExtension())
/*18881*/     OPC_EmitInteger, MVT::i8, 1, 
/*18884*/     OPC_EmitInteger, MVT::i8, 4, 
/*18887*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::FIXBRA), 0,
                  1/*#VTs*/, MVT::f128, 3/*#Ops*/, 1, 0, 2, 
              // Src: (frnd:f128 FP128:f128:$src) - Complexity = 3
              // Dst: (FIXBRA:f128 1:i8, FP128:f128:$src, 4:i8)
            0, // EndSwitchType
          0, // EndSwitchOpcode
    0
  }; // Total Array size is 18900 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 203
  // #OPC_RecordNode                     = 135
  // #OPC_RecordChild                    = 561
  // #OPC_RecordMemRef                   = 113
  // #OPC_CaptureGlueInput               = 12
  // #OPC_MoveChild                      = 497
  // #OPC_MoveParent                     = 741
  // #OPC_CheckSame                      = 88
  // #OPC_CheckPatternPredicate          = 19
  // #OPC_CheckPredicate                 = 743
  // #OPC_CheckOpcode                    = 294
  // #OPC_SwitchOpcode                   = 24
  // #OPC_CheckType                      = 266
  // #OPC_SwitchType                     = 94
  // #OPC_CheckChildType                 = 206
  // #OPC_CheckInteger                   = 67
  // #OPC_CheckCondCode                  = 0
  // #OPC_CheckValueType                 = 32
  // #OPC_CheckComplexPat                = 390
  // #OPC_CheckAndImm                    = 22
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 84
  // #OPC_EmitInteger                    = 53
  // #OPC_EmitStringInteger              = 47
  // #OPC_EmitRegister                   = 0
  // #OPC_EmitConvertToTarget            = 214
  // #OPC_EmitMergeInputChains           = 363
  // #OPC_EmitCopyToReg                  = 1
  // #OPC_EmitNode                       = 60
  // #OPC_EmitNodeXForm                  = 151
  // #OPC_MarkGlueResults                = 0
  // #OPC_CompleteMatch                  = 0
  // #OPC_MorphNodeTo                    = 663

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}

virtual bool CheckPatternPredicate(unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: return (Subtarget.hasLoadStoreOnCond());
  case 1: return (Subtarget.hasDistinctOps());
  case 2: return (Subtarget.hasFPExtension());
  }
}

virtual bool CheckNodePredicate(SDNode *Node,
                                unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: { // Predicate_unindexedload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 1: { // Predicate_anyextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() != ISD::NON_EXTLOAD;

  }
  case 2: { // Predicate_anyextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 3: { // Predicate_nonvolatile_anyextloadi8
    SDNode *N = Node;

  LoadSDNode *Load = cast<LoadSDNode>(N);
  return !Load->isVolatile();

  }
  case 4: { // Predicate_uimm8zx4
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isUInt<4>(N->getZExtValue());

  }
  case 5: { // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 6: { // Predicate_truncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 7: { // Predicate_truncstorei8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 8: { // Predicate_nonvolatile_truncstorei8
    SDNode *N = Node;

  StoreSDNode *Store = cast<StoreSDNode>(N);
  return !Store->isVolatile();

  }
  case 9: { // Predicate_anyextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 10: { // Predicate_nonvolatile_anyextloadi16
    SDNode *N = Node;

  LoadSDNode *Load = cast<LoadSDNode>(N);
  return !Load->isVolatile();

  }
  case 11: { // Predicate_truncstorei16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 12: { // Predicate_nonvolatile_truncstorei16
    SDNode *N = Node;

  StoreSDNode *Store = cast<StoreSDNode>(N);
  return !Store->isVolatile();

  }
  case 13: { // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 14: { // Predicate_nonvolatile_load
    SDNode *N = Node;

  LoadSDNode *Load = cast<LoadSDNode>(N);
  return !Load->isVolatile();

  }
  case 15: { // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 16: { // Predicate_nonvolatile_store
    SDNode *N = Node;

  StoreSDNode *Store = cast<StoreSDNode>(N);
  return !Store->isVolatile();

  }
  case 17: { // Predicate_anyextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 18: { // Predicate_nonvolatile_anyextloadi32
    SDNode *N = Node;

  LoadSDNode *Load = cast<LoadSDNode>(N);
  return !Load->isVolatile();

  }
  case 19: { // Predicate_truncstorei32
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 20: { // Predicate_nonvolatile_truncstorei32
    SDNode *N = Node;

  StoreSDNode *Store = cast<StoreSDNode>(N);
  return !Store->isVolatile();

  }
  case 21: { // Predicate_imm32sx8
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isInt<8>(N->getSExtValue());

  }
  case 22: { // Predicate_imm64sx8
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isInt<8>(N->getSExtValue());

  }
  case 23: { // Predicate_LoadStore8_32Pat
    SDNode *N = Node;
 return storeLoadCanUseMVC(N); 
  }
  case 24: { // Predicate_LoadStore16_32Pat
    SDNode *N = Node;
 return storeLoadCanUseMVC(N); 
  }
  case 25: { // Predicate_LoadStore32_32Pat
    SDNode *N = Node;
 return storeLoadCanUseMVC(N); 
  }
  case 26: { // Predicate_LoadStore8Pat
    SDNode *N = Node;
 return storeLoadCanUseMVC(N); 
  }
  case 27: { // Predicate_LoadStore16Pat
    SDNode *N = Node;
 return storeLoadCanUseMVC(N); 
  }
  case 28: { // Predicate_LoadStore32Pat
    SDNode *N = Node;
 return storeLoadCanUseMVC(N); 
  }
  case 29: { // Predicate_LoadStore64Pat
    SDNode *N = Node;
 return storeLoadCanUseMVC(N); 
  }
  case 30: { // Predicate_LoadStoreF32Pat
    SDNode *N = Node;
 return storeLoadCanUseMVC(N); 
  }
  case 31: { // Predicate_LoadStoreF64Pat
    SDNode *N = Node;
 return storeLoadCanUseMVC(N); 
  }
  case 32: { // Predicate_LoadStoreF128Pat
    SDNode *N = Node;
 return storeLoadCanUseMVC(N); 
  }
  case 33: { // Predicate_aligned_store
    SDNode *N = Node;

  StoreSDNode *Store = cast<StoreSDNode>(N);
  return Store->getAlignment() >= Store->getMemoryVT().getStoreSize();

  }
  case 34: { // Predicate_imm32sx16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isInt<16>(N->getSExtValue());

  }
  case 35: { // Predicate_imm64sx16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isInt<16>(N->getSExtValue());

  }
  case 36: { // Predicate_aligned_truncstorei16
    SDNode *N = Node;

  StoreSDNode *Store = cast<StoreSDNode>(N);
  return Store->getAlignment() >= Store->getMemoryVT().getStoreSize();

  }
  case 37: { // Predicate_aligned_truncstorei32
    SDNode *N = Node;

  StoreSDNode *Store = cast<StoreSDNode>(N);
  return Store->getAlignment() >= Store->getMemoryVT().getStoreSize();

  }
  case 38: { // Predicate_sextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::SEXTLOAD;

  }
  case 39: { // Predicate_sextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 40: { // Predicate_sextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 41: { // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 42: { // Predicate_zextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 43: { // Predicate_imm64lf32
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLF(N->getZExtValue());

  }
  case 44: { // Predicate_imm64hf32
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmHF(N->getZExtValue());

  }
  case 45: { // Predicate_zextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 46: { // Predicate_or_as_inserti8
    SDNode *N = Node;

  unsigned BitWidth = N->getValueType(0).getScalarType().getSizeInBits();
  return CurDAG->MaskedValueIsZero(N->getOperand(0),
                                   APInt::getLowBitsSet(BitWidth, 8));

  }
  case 47: { // Predicate_or_as_revinserti8
    SDNode *N = Node;

  unsigned BitWidth = N->getValueType(0).getScalarType().getSizeInBits();
  return CurDAG->MaskedValueIsZero(N->getOperand(1),
                                   APInt::getLowBitsSet(BitWidth, 8));

  }
  case 48: { // Predicate_imm32ll16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLL(N->getZExtValue());

  }
  case 49: { // Predicate_imm32lh16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLH(N->getZExtValue());

  }
  case 50: { // Predicate_imm64ll16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLL(N->getZExtValue());

  }
  case 51: { // Predicate_imm64lh16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLH(N->getZExtValue());

  }
  case 52: { // Predicate_imm64hl16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmHL(N->getZExtValue());

  }
  case 53: { // Predicate_imm64hh16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmHH(N->getZExtValue());

  }
  case 54: { // Predicate_cond4
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return (N->getZExtValue() < 16); 
  }
  case 55: { // Predicate_aligned_sextloadi16
    SDNode *N = Node;

  LoadSDNode *Load = cast<LoadSDNode>(N);
  return Load->getAlignment() >= Load->getMemoryVT().getStoreSize();

  }
  case 56: { // Predicate_aligned_load
    SDNode *N = Node;

  LoadSDNode *Load = cast<LoadSDNode>(N);
  return Load->getAlignment() >= Load->getMemoryVT().getStoreSize();

  }
  case 57: { // Predicate_aligned_sextloadi32
    SDNode *N = Node;

  LoadSDNode *Load = cast<LoadSDNode>(N);
  return Load->getAlignment() >= Load->getMemoryVT().getStoreSize();

  }
  case 58: { // Predicate_imm64sx32
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isInt<32>(N->getSExtValue());

  }
  case 59: { // Predicate_fpimm0
    ConstantFPSDNode*N = cast<ConstantFPSDNode>(Node);
 return N->isExactlyValue(+0.0); 
  }
  case 60: { // Predicate_zextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 61: { // Predicate_aligned_zextloadi16
    SDNode *N = Node;

  LoadSDNode *Load = cast<LoadSDNode>(N);
  return Load->getAlignment() >= Load->getMemoryVT().getStoreSize();

  }
  case 62: { // Predicate_aligned_zextloadi32
    SDNode *N = Node;

  LoadSDNode *Load = cast<LoadSDNode>(N);
  return Load->getAlignment() >= Load->getMemoryVT().getStoreSize();

  }
  case 63: { // Predicate_imm32zx8
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isUInt<8>(N->getZExtValue());

  }
  case 64: { // Predicate_imm32zx16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isUInt<16>(N->getZExtValue());

  }
  case 65: { // Predicate_imm64zx16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isUInt<16>(N->getZExtValue());

  }
  case 66: { // Predicate_imm64zx32
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isUInt<32>(N->getZExtValue());

  }
  case 67: { // Predicate_imm64zx32n
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isUInt<32>(-N->getSExtValue());

  }
  case 68: { // Predicate_imm32ll16c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLL(uint32_t(~N->getZExtValue()));

  }
  case 69: { // Predicate_imm32lh16c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLH(uint32_t(~N->getZExtValue()));

  }
  case 70: { // Predicate_imm64ll16c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLL(uint64_t(~N->getZExtValue()));

  }
  case 71: { // Predicate_imm64lh16c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLH(uint64_t(~N->getZExtValue()));

  }
  case 72: { // Predicate_imm64hl16c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmHL(uint64_t(~N->getZExtValue()));

  }
  case 73: { // Predicate_imm64hh16c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmHH(uint64_t(~N->getZExtValue()));

  }
  case 74: { // Predicate_imm64lf32c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLF(uint64_t(~N->getZExtValue()));

  }
  case 75: { // Predicate_imm64hf32c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmHF(uint64_t(~N->getZExtValue()));

  }
  case 76: { // Predicate_extload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

  }
  case 77: { // Predicate_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 78: { // Predicate_sextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 79: { // Predicate_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 80: { // Predicate_extloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 81: { // Predicate_extloadf32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::f32;

  }
  case 82: { // Predicate_extloadf64
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::f64;

  }
  case 83: { // Predicate_atomic_load_add_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 84: { // Predicate_atomic_load_add_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 85: { // Predicate_atomic_load_and_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 86: { // Predicate_atomic_load_and_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 87: { // Predicate_atomic_load_or_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 88: { // Predicate_atomic_load_or_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 89: { // Predicate_atomic_load_xor_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 90: { // Predicate_atomic_load_xor_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 91: { // Predicate_atomic_load_nand_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 92: { // Predicate_atomic_load_nand_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 93: { // Predicate_atomic_cmp_swap_32
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 94: { // Predicate_atomic_cmp_swap_64
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;

  }
  case 95: { // Predicate_atomic_swap_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 96: { // Predicate_atomic_swap_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 97: { // Predicate_atomic_load_sub_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 98: { // Predicate_atomic_load_sub_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 99: { // Predicate_atomic_load_min_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 100: { // Predicate_atomic_load_min_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 101: { // Predicate_atomic_load_max_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 102: { // Predicate_atomic_load_max_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 103: { // Predicate_atomic_load_umin_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 104: { // Predicate_atomic_load_umin_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 105: { // Predicate_atomic_load_umax_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 106: { // Predicate_atomic_load_umax_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 107: { // Predicate_access_reg
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return N->getZExtValue() < 16; 
  }
  case 108: { // Predicate_fpimmneg0
    ConstantFPSDNode*N = cast<ConstantFPSDNode>(Node);
 return N->isExactlyValue(-0.0); 
  }
  }
}

virtual bool CheckComplexPattern(SDNode *Root, SDNode *Parent,
                                 SDValue N, unsigned PatternNo,
         SmallVectorImpl<std::pair<SDValue, SDNode*> > &Result) {
  unsigned NextRes = Result.size();
  switch (PatternNo) {
  default: llvm_unreachable("Invalid pattern # in table?");
  case 0:
    Result.resize(NextRes+3);
    return selectBDXAddr20Only(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 1:
    Result.resize(NextRes+2);
    return selectBDAddr20Only(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 2:
    Result.resize(NextRes+2);
    return selectBDAddr12Pair(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 3:
    Result.resize(NextRes+2);
    return selectBDAddr20Pair(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 4:
    Result.resize(NextRes+2);
    return selectBDAddr12Only(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 5:
    Result.resize(NextRes+1);
    return selectPCRelAddress(N, Result[NextRes+0].first);
  case 6:
    Result.resize(NextRes+2);
    return selectMVIAddr12Pair(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 7:
    Result.resize(NextRes+3);
    return selectBDXAddr12Pair(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 8:
    Result.resize(NextRes+3);
    return selectBDXAddr20Pair(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 9:
    Result.resize(NextRes+3);
    return selectBDXAddr20Only128(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 10:
    Result.resize(NextRes+2);
    return selectMVIAddr20Pair(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 11:
    Result.resize(NextRes+2);
    return selectBDAddr12Only(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 12:
    Result.resize(NextRes+2);
    return selectBDAddr20Only(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 13:
    Result.resize(NextRes+3);
    return selectDynAlloc12Only(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 14:
    Result.resize(NextRes+3);
    return selectLAAddr12Pair(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 15:
    Result.resize(NextRes+3);
    return selectLAAddr20Pair(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 16:
    Result.resize(NextRes+3);
    return selectBDXAddr12Only(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 17:
    Result.resize(NextRes+1);
    return selectPCRelAddress(N, Result[NextRes+0].first);
  }
}

virtual SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) {
  switch (XFormNo) {
  default: llvm_unreachable("Invalid xform # in table?");
  case 0: {  // SIMM8
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(int8_t(N->getZExtValue()), MVT::i64);

  }
  case 1: {  // UIMM8
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(uint8_t(N->getZExtValue()), MVT::i64);

  }
  case 2: {  // SIMM16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(int16_t(N->getZExtValue()), MVT::i64);

  }
  case 3: {  // LF32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Value = N->getZExtValue() & 0x00000000FFFFFFFFULL;
  return CurDAG->getTargetConstant(Value, MVT::i64);

  }
  case 4: {  // HF32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Value = N->getZExtValue() >> 32;
  return CurDAG->getTargetConstant(Value, MVT::i64);

  }
  case 5: {  // UIMM32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(uint32_t(N->getZExtValue()), MVT::i64);

  }
  case 6: {  // LL16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Value = N->getZExtValue() & 0x000000000000FFFFULL;
  return CurDAG->getTargetConstant(Value, MVT::i64);

  }
  case 7: {  // LH16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Value = (N->getZExtValue() & 0x00000000FFFF0000ULL) >> 16;
  return CurDAG->getTargetConstant(Value, MVT::i64);

  }
  case 8: {  // HL16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Value = (N->getZExtValue() & 0x0000FFFF00000000ULL) >> 32;
  return CurDAG->getTargetConstant(Value, MVT::i64);

  }
  case 9: {  // HH16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Value = (N->getZExtValue() & 0xFFFF000000000000ULL) >> 48;
  return CurDAG->getTargetConstant(Value, MVT::i64);

  }
  case 10: {  // SIMM32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(int32_t(N->getZExtValue()), MVT::i64);

  }
  case 11: {  // UIMM16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(uint16_t(N->getZExtValue()), MVT::i64);

  }
  case 12: {  // NEGIMM32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(uint32_t(-N->getZExtValue()), MVT::i64);

  }
  }
}

