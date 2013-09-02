/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*DAG Instruction Selector for the Sparc target                               *|
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
/*0*/     OPC_SwitchOpcode /*53 cases */, 104|128,3/*488*/,  TARGET_VAL(ISD::STORE),// ->493
/*5*/       OPC_RecordMemRef,
/*6*/       OPC_RecordNode,   // #0 = 'st' chained node
/*7*/       OPC_Scope, 96, /*->105*/ // 2 children in Scope
/*9*/         OPC_MoveChild, 1,
/*11*/        OPC_CheckInteger, 0, 
/*13*/        OPC_SwitchType /*2 cases */, 42,  MVT::i32,// ->58
/*16*/          OPC_MoveParent,
/*17*/          OPC_RecordChild2, // #1 = $dst
/*18*/          OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*20*/          OPC_CheckPredicate, 1, // Predicate_store
/*22*/          OPC_Scope, 16, /*->40*/ // 2 children in Scope
/*24*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$dst #2 #3
/*27*/            OPC_EmitMergeInputChains1_0,
/*28*/            OPC_EmitRegister, MVT::i32, SP::G0,
/*31*/            OPC_MorphNodeTo, TARGET_VAL(SP::STrr), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (st 0:i32, ADDRrr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 18
                  // Dst: (STrr ADDRrr:iPTR:$dst, G0:i32)
/*40*/          /*Scope*/ 16, /*->57*/
/*41*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$dst #2 #3
/*44*/            OPC_EmitMergeInputChains1_0,
/*45*/            OPC_EmitRegister, MVT::i32, SP::G0,
/*48*/            OPC_MorphNodeTo, TARGET_VAL(SP::STri), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (st 0:i32, ADDRri:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 18
                  // Dst: (STri ADDRri:iPTR:$dst, G0:i32)
/*57*/          0, /*End of Scope*/
              /*SwitchType*/ 44,  MVT::i64,// ->104
/*60*/          OPC_MoveParent,
/*61*/          OPC_RecordChild2, // #1 = $dst
/*62*/          OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*64*/          OPC_CheckPredicate, 1, // Predicate_store
/*66*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*68*/          OPC_Scope, 16, /*->86*/ // 2 children in Scope
/*70*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$dst #2 #3
/*73*/            OPC_EmitMergeInputChains1_0,
/*74*/            OPC_EmitRegister, MVT::i64, SP::G0,
/*77*/            OPC_MorphNodeTo, TARGET_VAL(SP::STXrr), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (st 0:i64, ADDRrr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 18
                  // Dst: (STXrr ADDRrr:iPTR:$dst, G0:i64)
/*86*/          /*Scope*/ 16, /*->103*/
/*87*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$dst #2 #3
/*90*/            OPC_EmitMergeInputChains1_0,
/*91*/            OPC_EmitRegister, MVT::i64, SP::G0,
/*94*/            OPC_MorphNodeTo, TARGET_VAL(SP::STXri), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (st 0:i64, ADDRri:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 18
                  // Dst: (STXri ADDRri:iPTR:$dst, G0:i64)
/*103*/         0, /*End of Scope*/
              0, // EndSwitchType
/*105*/     /*Scope*/ 1|128,3/*385*/, /*->492*/
/*107*/       OPC_RecordChild1, // #1 = $src
/*108*/       OPC_Scope, 111, /*->221*/ // 5 children in Scope
/*110*/         OPC_CheckChild1Type, MVT::i32,
/*112*/         OPC_RecordChild2, // #2 = $addr
/*113*/         OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*115*/         OPC_Scope, 70, /*->187*/ // 2 children in Scope
/*117*/           OPC_CheckPredicate, 2, // Predicate_truncstore
/*119*/           OPC_Scope, 32, /*->153*/ // 2 children in Scope
/*121*/             OPC_CheckPredicate, 3, // Predicate_truncstorei8
/*123*/             OPC_Scope, 13, /*->138*/ // 2 children in Scope
/*125*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*128*/               OPC_EmitMergeInputChains1_0,
/*129*/               OPC_MorphNodeTo, TARGET_VAL(SP::STBrr), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                      // Src: (st i32:i32:$src, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                      // Dst: (STBrr ADDRrr:iPTR:$addr, i32:i32:$src)
/*138*/             /*Scope*/ 13, /*->152*/
/*139*/               OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*142*/               OPC_EmitMergeInputChains1_0,
/*143*/               OPC_MorphNodeTo, TARGET_VAL(SP::STBri), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                      // Src: (st i32:i32:$src, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                      // Dst: (STBri ADDRri:iPTR:$addr, i32:i32:$src)
/*152*/             0, /*End of Scope*/
/*153*/           /*Scope*/ 32, /*->186*/
/*154*/             OPC_CheckPredicate, 4, // Predicate_truncstorei16
/*156*/             OPC_Scope, 13, /*->171*/ // 2 children in Scope
/*158*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*161*/               OPC_EmitMergeInputChains1_0,
/*162*/               OPC_MorphNodeTo, TARGET_VAL(SP::STHrr), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                      // Src: (st i32:i32:$src, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                      // Dst: (STHrr ADDRrr:iPTR:$addr, i32:i32:$src)
/*171*/             /*Scope*/ 13, /*->185*/
/*172*/               OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*175*/               OPC_EmitMergeInputChains1_0,
/*176*/               OPC_MorphNodeTo, TARGET_VAL(SP::STHri), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                      // Src: (st i32:i32:$src, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                      // Dst: (STHri ADDRri:iPTR:$addr, i32:i32:$src)
/*185*/             0, /*End of Scope*/
/*186*/           0, /*End of Scope*/
/*187*/         /*Scope*/ 32, /*->220*/
/*188*/           OPC_CheckPredicate, 1, // Predicate_store
/*190*/           OPC_Scope, 13, /*->205*/ // 2 children in Scope
/*192*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*195*/             OPC_EmitMergeInputChains1_0,
/*196*/             OPC_MorphNodeTo, TARGET_VAL(SP::STrr), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                    // Src: (st i32:i32:$src, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STrr ADDRrr:iPTR:$addr, i32:i32:$src)
/*205*/           /*Scope*/ 13, /*->219*/
/*206*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*209*/             OPC_EmitMergeInputChains1_0,
/*210*/             OPC_MorphNodeTo, TARGET_VAL(SP::STri), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                    // Src: (st i32:i32:$src, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STri ADDRri:iPTR:$addr, i32:i32:$src)
/*219*/           0, /*End of Scope*/
/*220*/         0, /*End of Scope*/
/*221*/       /*Scope*/ 37, /*->259*/
/*222*/         OPC_CheckChild1Type, MVT::f32,
/*224*/         OPC_RecordChild2, // #2 = $addr
/*225*/         OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*227*/         OPC_CheckPredicate, 1, // Predicate_store
/*229*/         OPC_Scope, 13, /*->244*/ // 2 children in Scope
/*231*/           OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*234*/           OPC_EmitMergeInputChains1_0,
/*235*/           OPC_MorphNodeTo, TARGET_VAL(SP::STFrr), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                  // Src: (st f32:f32:$src, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STFrr ADDRrr:iPTR:$addr, f32:f32:$src)
/*244*/         /*Scope*/ 13, /*->258*/
/*245*/           OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*248*/           OPC_EmitMergeInputChains1_0,
/*249*/           OPC_MorphNodeTo, TARGET_VAL(SP::STFri), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                  // Src: (st f32:f32:$src, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STFri ADDRri:iPTR:$addr, f32:f32:$src)
/*258*/         0, /*End of Scope*/
/*259*/       /*Scope*/ 37, /*->297*/
/*260*/         OPC_CheckChild1Type, MVT::f64,
/*262*/         OPC_RecordChild2, // #2 = $addr
/*263*/         OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*265*/         OPC_CheckPredicate, 1, // Predicate_store
/*267*/         OPC_Scope, 13, /*->282*/ // 2 children in Scope
/*269*/           OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*272*/           OPC_EmitMergeInputChains1_0,
/*273*/           OPC_MorphNodeTo, TARGET_VAL(SP::STDFrr), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                  // Src: (st f64:f64:$src, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STDFrr ADDRrr:iPTR:$addr, f64:f64:$src)
/*282*/         /*Scope*/ 13, /*->296*/
/*283*/           OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*286*/           OPC_EmitMergeInputChains1_0,
/*287*/           OPC_MorphNodeTo, TARGET_VAL(SP::STDFri), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                  // Src: (st f64:f64:$src, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STDFri ADDRri:iPTR:$addr, f64:f64:$src)
/*296*/         0, /*End of Scope*/
/*297*/       /*Scope*/ 39, /*->337*/
/*298*/         OPC_CheckChild1Type, MVT::f128,
/*300*/         OPC_RecordChild2, // #2 = $addr
/*301*/         OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*303*/         OPC_CheckPredicate, 1, // Predicate_store
/*305*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isV9()) && (Subtarget.hasHardQuad())
/*307*/         OPC_Scope, 13, /*->322*/ // 2 children in Scope
/*309*/           OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*312*/           OPC_EmitMergeInputChains1_0,
/*313*/           OPC_MorphNodeTo, TARGET_VAL(SP::STQFrr), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                  // Src: (st f128:f128:$src, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STQFrr ADDRrr:iPTR:$addr, f128:f128:$src)
/*322*/         /*Scope*/ 13, /*->336*/
/*323*/           OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*326*/           OPC_EmitMergeInputChains1_0,
/*327*/           OPC_MorphNodeTo, TARGET_VAL(SP::STQFri), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                  // Src: (st f128:f128:$src, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STQFri ADDRri:iPTR:$addr, f128:f128:$src)
/*336*/         0, /*End of Scope*/
/*337*/       /*Scope*/ 24|128,1/*152*/, /*->491*/
/*339*/         OPC_CheckChild1Type, MVT::i64,
/*341*/         OPC_RecordChild2, // #2 = $addr
/*342*/         OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*344*/         OPC_Scope, 34, /*->380*/ // 2 children in Scope
/*346*/           OPC_CheckPredicate, 1, // Predicate_store
/*348*/           OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*350*/           OPC_Scope, 13, /*->365*/ // 2 children in Scope
/*352*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*355*/             OPC_EmitMergeInputChains1_0,
/*356*/             OPC_MorphNodeTo, TARGET_VAL(SP::STXrr), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                    // Src: (st i64:i64:$src, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STXrr ADDRrr:iPTR:$addr, i64:i64:$src)
/*365*/           /*Scope*/ 13, /*->379*/
/*366*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*369*/             OPC_EmitMergeInputChains1_0,
/*370*/             OPC_MorphNodeTo, TARGET_VAL(SP::STXri), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                    // Src: (st i64:i64:$src, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STXri ADDRri:iPTR:$addr, i64:i64:$src)
/*379*/           0, /*End of Scope*/
/*380*/         /*Scope*/ 109, /*->490*/
/*381*/           OPC_CheckPredicate, 2, // Predicate_truncstore
/*383*/           OPC_Scope, 34, /*->419*/ // 3 children in Scope
/*385*/             OPC_CheckPredicate, 3, // Predicate_truncstorei8
/*387*/             OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*389*/             OPC_Scope, 13, /*->404*/ // 2 children in Scope
/*391*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*394*/               OPC_EmitMergeInputChains1_0,
/*395*/               OPC_MorphNodeTo, TARGET_VAL(SP::STBrr), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                      // Src: (st i64:i64:$src, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                      // Dst: (STBrr ADDRrr:iPTR:$addr, ?:i64:$src)
/*404*/             /*Scope*/ 13, /*->418*/
/*405*/               OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*408*/               OPC_EmitMergeInputChains1_0,
/*409*/               OPC_MorphNodeTo, TARGET_VAL(SP::STBri), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                      // Src: (st i64:i64:$src, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                      // Dst: (STBri ADDRri:iPTR:$addr, ?:i64:$src)
/*418*/             0, /*End of Scope*/
/*419*/           /*Scope*/ 34, /*->454*/
/*420*/             OPC_CheckPredicate, 4, // Predicate_truncstorei16
/*422*/             OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*424*/             OPC_Scope, 13, /*->439*/ // 2 children in Scope
/*426*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*429*/               OPC_EmitMergeInputChains1_0,
/*430*/               OPC_MorphNodeTo, TARGET_VAL(SP::STHrr), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                      // Src: (st i64:i64:$src, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                      // Dst: (STHrr ADDRrr:iPTR:$addr, ?:i64:$src)
/*439*/             /*Scope*/ 13, /*->453*/
/*440*/               OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*443*/               OPC_EmitMergeInputChains1_0,
/*444*/               OPC_MorphNodeTo, TARGET_VAL(SP::STHri), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                      // Src: (st i64:i64:$src, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                      // Dst: (STHri ADDRri:iPTR:$addr, ?:i64:$src)
/*453*/             0, /*End of Scope*/
/*454*/           /*Scope*/ 34, /*->489*/
/*455*/             OPC_CheckPredicate, 5, // Predicate_truncstorei32
/*457*/             OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*459*/             OPC_Scope, 13, /*->474*/ // 2 children in Scope
/*461*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*464*/               OPC_EmitMergeInputChains1_0,
/*465*/               OPC_MorphNodeTo, TARGET_VAL(SP::STrr), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                      // Src: (st i64:i64:$src, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                      // Dst: (STrr ADDRrr:iPTR:$addr, ?:i64:$src)
/*474*/             /*Scope*/ 13, /*->488*/
/*475*/               OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*478*/               OPC_EmitMergeInputChains1_0,
/*479*/               OPC_MorphNodeTo, TARGET_VAL(SP::STri), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                      // Src: (st i64:i64:$src, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                      // Dst: (STri ADDRri:iPTR:$addr, ?:i64:$src)
/*488*/             0, /*End of Scope*/
/*489*/           0, /*End of Scope*/
/*490*/         0, /*End of Scope*/
/*491*/       0, /*End of Scope*/
/*492*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 4|128,7/*900*/,  TARGET_VAL(ISD::LOAD),// ->1397
/*497*/     OPC_RecordMemRef,
/*498*/     OPC_RecordNode,   // #0 = 'ld' chained node
/*499*/     OPC_RecordChild1, // #1 = $addr
/*500*/     OPC_CheckPredicate, 6, // Predicate_unindexedload
/*502*/     OPC_Scope, 72, /*->576*/ // 18 children in Scope
/*504*/       OPC_CheckPredicate, 7, // Predicate_sextload
/*506*/       OPC_CheckType, MVT::i32,
/*508*/       OPC_Scope, 32, /*->542*/ // 2 children in Scope
/*510*/         OPC_CheckPredicate, 8, // Predicate_sextloadi8
/*512*/         OPC_Scope, 13, /*->527*/ // 2 children in Scope
/*514*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*517*/           OPC_EmitMergeInputChains1_0,
/*518*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDSBrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                  // Dst: (LDSBrr:i32 ADDRrr:iPTR:$addr)
/*527*/         /*Scope*/ 13, /*->541*/
/*528*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*531*/           OPC_EmitMergeInputChains1_0,
/*532*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDSBri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                  // Dst: (LDSBri:i32 ADDRri:iPTR:$addr)
/*541*/         0, /*End of Scope*/
/*542*/       /*Scope*/ 32, /*->575*/
/*543*/         OPC_CheckPredicate, 9, // Predicate_sextloadi16
/*545*/         OPC_Scope, 13, /*->560*/ // 2 children in Scope
/*547*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*550*/           OPC_EmitMergeInputChains1_0,
/*551*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDSHrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                  // Dst: (LDSHrr:i32 ADDRrr:iPTR:$addr)
/*560*/         /*Scope*/ 13, /*->574*/
/*561*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*564*/           OPC_EmitMergeInputChains1_0,
/*565*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDSHri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                  // Dst: (LDSHri:i32 ADDRri:iPTR:$addr)
/*574*/         0, /*End of Scope*/
/*575*/       0, /*End of Scope*/
/*576*/     /*Scope*/ 72, /*->649*/
/*577*/       OPC_CheckPredicate, 10, // Predicate_zextload
/*579*/       OPC_CheckType, MVT::i32,
/*581*/       OPC_Scope, 32, /*->615*/ // 2 children in Scope
/*583*/         OPC_CheckPredicate, 11, // Predicate_zextloadi8
/*585*/         OPC_Scope, 13, /*->600*/ // 2 children in Scope
/*587*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*590*/           OPC_EmitMergeInputChains1_0,
/*591*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LDUBrr:i32 ADDRrr:iPTR:$addr)
/*600*/         /*Scope*/ 13, /*->614*/
/*601*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*604*/           OPC_EmitMergeInputChains1_0,
/*605*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LDUBri:i32 ADDRri:iPTR:$addr)
/*614*/         0, /*End of Scope*/
/*615*/       /*Scope*/ 32, /*->648*/
/*616*/         OPC_CheckPredicate, 12, // Predicate_zextloadi16
/*618*/         OPC_Scope, 13, /*->633*/ // 2 children in Scope
/*620*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*623*/           OPC_EmitMergeInputChains1_0,
/*624*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDUHrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LDUHrr:i32 ADDRrr:iPTR:$addr)
/*633*/         /*Scope*/ 13, /*->647*/
/*634*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*637*/           OPC_EmitMergeInputChains1_0,
/*638*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDUHri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LDUHri:i32 ADDRri:iPTR:$addr)
/*647*/         0, /*End of Scope*/
/*648*/       0, /*End of Scope*/
/*649*/     /*Scope*/ 34, /*->684*/
/*650*/       OPC_CheckPredicate, 13, // Predicate_load
/*652*/       OPC_CheckType, MVT::i32,
/*654*/       OPC_Scope, 13, /*->669*/ // 2 children in Scope
/*656*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*659*/         OPC_EmitMergeInputChains1_0,
/*660*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LDrr:i32 ADDRrr:iPTR:$addr)
/*669*/       /*Scope*/ 13, /*->683*/
/*670*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*673*/         OPC_EmitMergeInputChains1_0,
/*674*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LDri:i32 ADDRri:iPTR:$addr)
/*683*/       0, /*End of Scope*/
/*684*/     /*Scope*/ 105, /*->790*/
/*685*/       OPC_CheckPredicate, 14, // Predicate_extload
/*687*/       OPC_CheckType, MVT::i32,
/*689*/       OPC_Scope, 32, /*->723*/ // 3 children in Scope
/*691*/         OPC_CheckPredicate, 15, // Predicate_extloadi1
/*693*/         OPC_Scope, 13, /*->708*/ // 2 children in Scope
/*695*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$src #2 #3
/*698*/           OPC_EmitMergeInputChains1_0,
/*699*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRrr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LDUBrr:i32 ADDRrr:iPTR:$src)
/*708*/         /*Scope*/ 13, /*->722*/
/*709*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$src #2 #3
/*712*/           OPC_EmitMergeInputChains1_0,
/*713*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRri:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LDUBri:i32 ADDRri:iPTR:$src)
/*722*/         0, /*End of Scope*/
/*723*/       /*Scope*/ 32, /*->756*/
/*724*/         OPC_CheckPredicate, 16, // Predicate_extloadi8
/*726*/         OPC_Scope, 13, /*->741*/ // 2 children in Scope
/*728*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$src #2 #3
/*731*/           OPC_EmitMergeInputChains1_0,
/*732*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRrr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LDUBrr:i32 ADDRrr:iPTR:$src)
/*741*/         /*Scope*/ 13, /*->755*/
/*742*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$src #2 #3
/*745*/           OPC_EmitMergeInputChains1_0,
/*746*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRri:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LDUBri:i32 ADDRri:iPTR:$src)
/*755*/         0, /*End of Scope*/
/*756*/       /*Scope*/ 32, /*->789*/
/*757*/         OPC_CheckPredicate, 17, // Predicate_extloadi16
/*759*/         OPC_Scope, 13, /*->774*/ // 2 children in Scope
/*761*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$src #2 #3
/*764*/           OPC_EmitMergeInputChains1_0,
/*765*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDUHrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRrr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LDUHrr:i32 ADDRrr:iPTR:$src)
/*774*/         /*Scope*/ 13, /*->788*/
/*775*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$src #2 #3
/*778*/           OPC_EmitMergeInputChains1_0,
/*779*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDUHri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRri:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LDUHri:i32 ADDRri:iPTR:$src)
/*788*/         0, /*End of Scope*/
/*789*/       0, /*End of Scope*/
/*790*/     /*Scope*/ 36, /*->827*/
/*791*/       OPC_CheckPredicate, 10, // Predicate_zextload
/*793*/       OPC_CheckPredicate, 18, // Predicate_zextloadi1
/*795*/       OPC_CheckType, MVT::i32,
/*797*/       OPC_Scope, 13, /*->812*/ // 2 children in Scope
/*799*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$src #2 #3
/*802*/         OPC_EmitMergeInputChains1_0,
/*803*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 ADDRrr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LDUBrr:i32 ADDRrr:iPTR:$src)
/*812*/       /*Scope*/ 13, /*->826*/
/*813*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$src #2 #3
/*816*/         OPC_EmitMergeInputChains1_0,
/*817*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 ADDRri:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LDUBri:i32 ADDRri:iPTR:$src)
/*826*/       0, /*End of Scope*/
/*827*/     /*Scope*/ 36, /*->864*/
/*828*/       OPC_CheckPredicate, 13, // Predicate_load
/*830*/       OPC_CheckType, MVT::i64,
/*832*/       OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*834*/       OPC_Scope, 13, /*->849*/ // 2 children in Scope
/*836*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*839*/         OPC_EmitMergeInputChains1_0,
/*840*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDXrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LDXrr:i64 ADDRrr:iPTR:$addr)
/*849*/       /*Scope*/ 13, /*->863*/
/*850*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*853*/         OPC_EmitMergeInputChains1_0,
/*854*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDXri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LDXri:i64 ADDRri:iPTR:$addr)
/*863*/       0, /*End of Scope*/
/*864*/     /*Scope*/ 38, /*->903*/
/*865*/       OPC_CheckPredicate, 10, // Predicate_zextload
/*867*/       OPC_CheckPredicate, 18, // Predicate_zextloadi1
/*869*/       OPC_CheckType, MVT::i64,
/*871*/       OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*873*/       OPC_Scope, 13, /*->888*/ // 2 children in Scope
/*875*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*878*/         OPC_EmitMergeInputChains1_0,
/*879*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LDUBrr:i64 ADDRrr:iPTR:$addr)
/*888*/       /*Scope*/ 13, /*->902*/
/*889*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*892*/         OPC_EmitMergeInputChains1_0,
/*893*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LDUBri:i64 ADDRri:iPTR:$addr)
/*902*/       0, /*End of Scope*/
/*903*/     /*Scope*/ 38, /*->942*/
/*904*/       OPC_CheckPredicate, 14, // Predicate_extload
/*906*/       OPC_CheckPredicate, 15, // Predicate_extloadi1
/*908*/       OPC_CheckType, MVT::i64,
/*910*/       OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*912*/       OPC_Scope, 13, /*->927*/ // 2 children in Scope
/*914*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*917*/         OPC_EmitMergeInputChains1_0,
/*918*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                // Dst: (LDUBrr:i64 ADDRrr:iPTR:$addr)
/*927*/       /*Scope*/ 13, /*->941*/
/*928*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*931*/         OPC_EmitMergeInputChains1_0,
/*932*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                // Dst: (LDUBri:i64 ADDRri:iPTR:$addr)
/*941*/       0, /*End of Scope*/
/*942*/     /*Scope*/ 38, /*->981*/
/*943*/       OPC_CheckPredicate, 10, // Predicate_zextload
/*945*/       OPC_CheckPredicate, 11, // Predicate_zextloadi8
/*947*/       OPC_CheckType, MVT::i64,
/*949*/       OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*951*/       OPC_Scope, 13, /*->966*/ // 2 children in Scope
/*953*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*956*/         OPC_EmitMergeInputChains1_0,
/*957*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                // Dst: (LDUBrr:i64 ADDRrr:iPTR:$addr)
/*966*/       /*Scope*/ 13, /*->980*/
/*967*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*970*/         OPC_EmitMergeInputChains1_0,
/*971*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                // Dst: (LDUBri:i64 ADDRri:iPTR:$addr)
/*980*/       0, /*End of Scope*/
/*981*/     /*Scope*/ 38, /*->1020*/
/*982*/       OPC_CheckPredicate, 14, // Predicate_extload
/*984*/       OPC_CheckPredicate, 16, // Predicate_extloadi8
/*986*/       OPC_CheckType, MVT::i64,
/*988*/       OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*990*/       OPC_Scope, 13, /*->1005*/ // 2 children in Scope
/*992*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*995*/         OPC_EmitMergeInputChains1_0,
/*996*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                // Dst: (LDUBrr:i64 ADDRrr:iPTR:$addr)
/*1005*/      /*Scope*/ 13, /*->1019*/
/*1006*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1009*/        OPC_EmitMergeInputChains1_0,
/*1010*/        OPC_MorphNodeTo, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                // Dst: (LDUBri:i64 ADDRri:iPTR:$addr)
/*1019*/      0, /*End of Scope*/
/*1020*/    /*Scope*/ 38, /*->1059*/
/*1021*/      OPC_CheckPredicate, 7, // Predicate_sextload
/*1023*/      OPC_CheckPredicate, 8, // Predicate_sextloadi8
/*1025*/      OPC_CheckType, MVT::i64,
/*1027*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1029*/      OPC_Scope, 13, /*->1044*/ // 2 children in Scope
/*1031*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1034*/        OPC_EmitMergeInputChains1_0,
/*1035*/        OPC_MorphNodeTo, TARGET_VAL(SP::LDSBrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                // Dst: (LDSBrr:i64 ADDRrr:iPTR:$addr)
/*1044*/      /*Scope*/ 13, /*->1058*/
/*1045*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1048*/        OPC_EmitMergeInputChains1_0,
/*1049*/        OPC_MorphNodeTo, TARGET_VAL(SP::LDSBri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                // Dst: (LDSBri:i64 ADDRri:iPTR:$addr)
/*1058*/      0, /*End of Scope*/
/*1059*/    /*Scope*/ 38, /*->1098*/
/*1060*/      OPC_CheckPredicate, 10, // Predicate_zextload
/*1062*/      OPC_CheckPredicate, 12, // Predicate_zextloadi16
/*1064*/      OPC_CheckType, MVT::i64,
/*1066*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1068*/      OPC_Scope, 13, /*->1083*/ // 2 children in Scope
/*1070*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1073*/        OPC_EmitMergeInputChains1_0,
/*1074*/        OPC_MorphNodeTo, TARGET_VAL(SP::LDUHrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                // Dst: (LDUHrr:i64 ADDRrr:iPTR:$addr)
/*1083*/      /*Scope*/ 13, /*->1097*/
/*1084*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1087*/        OPC_EmitMergeInputChains1_0,
/*1088*/        OPC_MorphNodeTo, TARGET_VAL(SP::LDUHri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                // Dst: (LDUHri:i64 ADDRri:iPTR:$addr)
/*1097*/      0, /*End of Scope*/
/*1098*/    /*Scope*/ 38, /*->1137*/
/*1099*/      OPC_CheckPredicate, 14, // Predicate_extload
/*1101*/      OPC_CheckPredicate, 17, // Predicate_extloadi16
/*1103*/      OPC_CheckType, MVT::i64,
/*1105*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1107*/      OPC_Scope, 13, /*->1122*/ // 2 children in Scope
/*1109*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1112*/        OPC_EmitMergeInputChains1_0,
/*1113*/        OPC_MorphNodeTo, TARGET_VAL(SP::LDUHrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                // Dst: (LDUHrr:i64 ADDRrr:iPTR:$addr)
/*1122*/      /*Scope*/ 13, /*->1136*/
/*1123*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1126*/        OPC_EmitMergeInputChains1_0,
/*1127*/        OPC_MorphNodeTo, TARGET_VAL(SP::LDUHri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                // Dst: (LDUHri:i64 ADDRri:iPTR:$addr)
/*1136*/      0, /*End of Scope*/
/*1137*/    /*Scope*/ 38, /*->1176*/
/*1138*/      OPC_CheckPredicate, 7, // Predicate_sextload
/*1140*/      OPC_CheckPredicate, 9, // Predicate_sextloadi16
/*1142*/      OPC_CheckType, MVT::i64,
/*1144*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1146*/      OPC_Scope, 13, /*->1161*/ // 2 children in Scope
/*1148*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1151*/        OPC_EmitMergeInputChains1_0,
/*1152*/        OPC_MorphNodeTo, TARGET_VAL(SP::LDSHrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                // Dst: (LDSHrr:i64 ADDRrr:iPTR:$addr)
/*1161*/      /*Scope*/ 13, /*->1175*/
/*1162*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1165*/        OPC_EmitMergeInputChains1_0,
/*1166*/        OPC_MorphNodeTo, TARGET_VAL(SP::LDSHri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                // Dst: (LDSHri:i64 ADDRri:iPTR:$addr)
/*1175*/      0, /*End of Scope*/
/*1176*/    /*Scope*/ 38, /*->1215*/
/*1177*/      OPC_CheckPredicate, 10, // Predicate_zextload
/*1179*/      OPC_CheckPredicate, 19, // Predicate_zextloadi32
/*1181*/      OPC_CheckType, MVT::i64,
/*1183*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1185*/      OPC_Scope, 13, /*->1200*/ // 2 children in Scope
/*1187*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1190*/        OPC_EmitMergeInputChains1_0,
/*1191*/        OPC_MorphNodeTo, TARGET_VAL(SP::LDrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                // Dst: (LDrr:i64 ADDRrr:iPTR:$addr)
/*1200*/      /*Scope*/ 13, /*->1214*/
/*1201*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1204*/        OPC_EmitMergeInputChains1_0,
/*1205*/        OPC_MorphNodeTo, TARGET_VAL(SP::LDri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                // Dst: (LDri:i64 ADDRri:iPTR:$addr)
/*1214*/      0, /*End of Scope*/
/*1215*/    /*Scope*/ 38, /*->1254*/
/*1216*/      OPC_CheckPredicate, 14, // Predicate_extload
/*1218*/      OPC_CheckPredicate, 20, // Predicate_extloadi32
/*1220*/      OPC_CheckType, MVT::i64,
/*1222*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1224*/      OPC_Scope, 13, /*->1239*/ // 2 children in Scope
/*1226*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1229*/        OPC_EmitMergeInputChains1_0,
/*1230*/        OPC_MorphNodeTo, TARGET_VAL(SP::LDrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                // Dst: (LDrr:i64 ADDRrr:iPTR:$addr)
/*1239*/      /*Scope*/ 13, /*->1253*/
/*1240*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1243*/        OPC_EmitMergeInputChains1_0,
/*1244*/        OPC_MorphNodeTo, TARGET_VAL(SP::LDri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                // Dst: (LDri:i64 ADDRri:iPTR:$addr)
/*1253*/      0, /*End of Scope*/
/*1254*/    /*Scope*/ 38, /*->1293*/
/*1255*/      OPC_CheckPredicate, 7, // Predicate_sextload
/*1257*/      OPC_CheckPredicate, 21, // Predicate_sextloadi32
/*1259*/      OPC_CheckType, MVT::i64,
/*1261*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1263*/      OPC_Scope, 13, /*->1278*/ // 2 children in Scope
/*1265*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1268*/        OPC_EmitMergeInputChains1_0,
/*1269*/        OPC_MorphNodeTo, TARGET_VAL(SP::LDSWrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 13
                // Dst: (LDSWrr:i64 ADDRrr:iPTR:$addr)
/*1278*/      /*Scope*/ 13, /*->1292*/
/*1279*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1282*/        OPC_EmitMergeInputChains1_0,
/*1283*/        OPC_MorphNodeTo, TARGET_VAL(SP::LDSWri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 13
                // Dst: (LDSWri:i64 ADDRri:iPTR:$addr)
/*1292*/      0, /*End of Scope*/
/*1293*/    /*Scope*/ 102, /*->1396*/
/*1294*/      OPC_CheckPredicate, 13, // Predicate_load
/*1296*/      OPC_SwitchType /*3 cases */, 30,  MVT::f32,// ->1329
/*1299*/        OPC_Scope, 13, /*->1314*/ // 2 children in Scope
/*1301*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1304*/          OPC_EmitMergeInputChains1_0,
/*1305*/          OPC_MorphNodeTo, TARGET_VAL(SP::LDFrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f32 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDFrr:f32 ADDRrr:iPTR:$addr)
/*1314*/        /*Scope*/ 13, /*->1328*/
/*1315*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1318*/          OPC_EmitMergeInputChains1_0,
/*1319*/          OPC_MorphNodeTo, TARGET_VAL(SP::LDFri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f32 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDFri:f32 ADDRri:iPTR:$addr)
/*1328*/        0, /*End of Scope*/
              /*SwitchType*/ 30,  MVT::f64,// ->1361
/*1331*/        OPC_Scope, 13, /*->1346*/ // 2 children in Scope
/*1333*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1336*/          OPC_EmitMergeInputChains1_0,
/*1337*/          OPC_MorphNodeTo, TARGET_VAL(SP::LDDFrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDDFrr:f64 ADDRrr:iPTR:$addr)
/*1346*/        /*Scope*/ 13, /*->1360*/
/*1347*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1350*/          OPC_EmitMergeInputChains1_0,
/*1351*/          OPC_MorphNodeTo, TARGET_VAL(SP::LDDFri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDDFri:f64 ADDRri:iPTR:$addr)
/*1360*/        0, /*End of Scope*/
              /*SwitchType*/ 32,  MVT::f128,// ->1395
/*1363*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isV9()) && (Subtarget.hasHardQuad())
/*1365*/        OPC_Scope, 13, /*->1380*/ // 2 children in Scope
/*1367*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1370*/          OPC_EmitMergeInputChains1_0,
/*1371*/          OPC_MorphNodeTo, TARGET_VAL(SP::LDQFrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f128, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f128 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDQFrr:f128 ADDRrr:iPTR:$addr)
/*1380*/        /*Scope*/ 13, /*->1394*/
/*1381*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1384*/          OPC_EmitMergeInputChains1_0,
/*1385*/          OPC_MorphNodeTo, TARGET_VAL(SP::LDQFri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f128, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f128 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDQFri:f128 ADDRri:iPTR:$addr)
/*1394*/        0, /*End of Scope*/
              0, // EndSwitchType
/*1396*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::BRIND),// ->1430
/*1400*/    OPC_RecordNode,   // #0 = 'brind' chained node
/*1401*/    OPC_RecordChild1, // #1 = $ptr
/*1402*/    OPC_Scope, 12, /*->1416*/ // 2 children in Scope
/*1404*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$ptr #2 #3
/*1407*/      OPC_EmitMergeInputChains1_0,
/*1408*/      OPC_MorphNodeTo, TARGET_VAL(SP::BINDrr), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (brind ADDRrr:iPTR:$ptr) - Complexity = 12
              // Dst: (BINDrr ADDRrr:iPTR:$ptr)
/*1416*/    /*Scope*/ 12, /*->1429*/
/*1417*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$ptr #2 #3
/*1420*/      OPC_EmitMergeInputChains1_0,
/*1421*/      OPC_MorphNodeTo, TARGET_VAL(SP::BINDri), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (brind ADDRri:iPTR:$ptr) - Complexity = 12
              // Dst: (BINDri ADDRri:iPTR:$ptr)
/*1429*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 60,  TARGET_VAL(SPISD::CALL),// ->1493
/*1433*/    OPC_RecordNode,   // #0 = 'call' chained node
/*1434*/    OPC_CaptureGlueInput,
/*1435*/    OPC_RecordChild1, // #1 = $ptr
/*1436*/    OPC_Scope, 12, /*->1450*/ // 3 children in Scope
/*1438*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$ptr #2 #3
/*1441*/      OPC_EmitMergeInputChains1_0,
/*1442*/      OPC_MorphNodeTo, TARGET_VAL(SP::JMPLrr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (call ADDRrr:i32:$ptr) - Complexity = 12
              // Dst: (JMPLrr ADDRrr:i32:$ptr)
/*1450*/    /*Scope*/ 12, /*->1463*/
/*1451*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$ptr #2 #3
/*1454*/      OPC_EmitMergeInputChains1_0,
/*1455*/      OPC_MorphNodeTo, TARGET_VAL(SP::JMPLri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (call ADDRri:i32:$ptr) - Complexity = 12
              // Dst: (JMPLri ADDRri:i32:$ptr)
/*1463*/    /*Scope*/ 28, /*->1492*/
/*1464*/      OPC_MoveChild, 1,
/*1466*/      OPC_SwitchOpcode /*2 cases */, 9,  TARGET_VAL(ISD::TargetGlobalAddress),// ->1479
/*1470*/        OPC_MoveParent,
/*1471*/        OPC_EmitMergeInputChains1_0,
/*1472*/        OPC_MorphNodeTo, TARGET_VAL(SP::CALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (call (tglobaladdr:i32):$dst) - Complexity = 6
                // Dst: (CALL (tglobaladdr:i32):$dst)
              /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::TargetExternalSymbol),// ->1491
/*1482*/        OPC_MoveParent,
/*1483*/        OPC_EmitMergeInputChains1_0,
/*1484*/        OPC_MorphNodeTo, TARGET_VAL(SP::CALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (call (texternalsym:i32):$dst) - Complexity = 6
                // Dst: (CALL (texternalsym:i32):$dst)
              0, // EndSwitchOpcode
/*1492*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 67|128,1/*195*/,  TARGET_VAL(ISD::AND),// ->1692
/*1497*/    OPC_Scope, 48, /*->1547*/ // 4 children in Scope
/*1499*/      OPC_RecordChild0, // #0 = $b
/*1500*/      OPC_MoveChild, 1,
/*1502*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1505*/      OPC_RecordChild0, // #1 = $c
/*1506*/      OPC_MoveChild, 1,
/*1508*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1519*/      OPC_MoveParent,
/*1520*/      OPC_MoveParent,
/*1521*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->1533
/*1524*/        OPC_MorphNodeTo, TARGET_VAL(SP::ANDNrr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 i32:i32:$b, (xor:i32 i32:i32:$c, -1:i32)) - Complexity = 11
                // Dst: (ANDNrr:i32 i32:i32:$b, i32:i32:$c)
              /*SwitchType*/ 11,  MVT::i64,// ->1546
/*1535*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1537*/        OPC_MorphNodeTo, TARGET_VAL(SP::ANDNrr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (and:i64 i64:i64:$a, (xor:i64 i64:i64:$b, -1:i64)) - Complexity = 11
                // Dst: (ANDNrr:i64 ?:i64:$a, ?:i64:$b)
              0, // EndSwitchType
/*1547*/    /*Scope*/ 48, /*->1596*/
/*1548*/      OPC_MoveChild, 0,
/*1550*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1553*/      OPC_RecordChild0, // #0 = $c
/*1554*/      OPC_MoveChild, 1,
/*1556*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1567*/      OPC_MoveParent,
/*1568*/      OPC_MoveParent,
/*1569*/      OPC_RecordChild1, // #1 = $b
/*1570*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->1582
/*1573*/        OPC_MorphNodeTo, TARGET_VAL(SP::ANDNrr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (and:i32 (xor:i32 i32:i32:$c, -1:i32), i32:i32:$b) - Complexity = 11
                // Dst: (ANDNrr:i32 i32:i32:$b, i32:i32:$c)
              /*SwitchType*/ 11,  MVT::i64,// ->1595
/*1584*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1586*/        OPC_MorphNodeTo, TARGET_VAL(SP::ANDNrr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (and:i64 (xor:i64 i64:i64:$b, -1:i64), i64:i64:$a) - Complexity = 11
                // Dst: (ANDNrr:i64 ?:i64:$a, ?:i64:$b)
              0, // EndSwitchType
/*1596*/    /*Scope*/ 23, /*->1620*/
/*1597*/      OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*1603*/      OPC_RecordChild0, // #0 = $val
/*1604*/      OPC_CheckType, MVT::i64,
/*1606*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1608*/      OPC_EmitInteger, MVT::i32, 0, 
/*1611*/      OPC_MorphNodeTo, TARGET_VAL(SP::SRLri), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (and:i64 i64:i64:$val, 4294967295:i64) - Complexity = 8
              // Dst: (SRLri:i64 ?:i64:$val, 0:i32)
/*1620*/    /*Scope*/ 70, /*->1691*/
/*1621*/      OPC_RecordChild0, // #0 = $b
/*1622*/      OPC_RecordChild1, // #1 = $c
/*1623*/      OPC_Scope, 39, /*->1664*/ // 3 children in Scope
/*1625*/        OPC_MoveChild, 1,
/*1627*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1630*/        OPC_CheckPredicate, 22, // Predicate_simm13
/*1632*/        OPC_MoveParent,
/*1633*/        OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->1647
/*1636*/          OPC_EmitConvertToTarget, 1,
/*1638*/          OPC_MorphNodeTo, TARGET_VAL(SP::ANDri), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (and:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
                  // Dst: (ANDri:i32 i32:i32:$b, (imm:i32):$c)
                /*SwitchType*/ 14,  MVT::i64,// ->1663
/*1649*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1651*/          OPC_EmitNodeXForm, 0, 1, // as_i32imm
/*1654*/          OPC_MorphNodeTo, TARGET_VAL(SP::ANDri), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (and:i64 i64:i64:$a, (imm:i64)<<P:Predicate_simm13>>:$b) - Complexity = 7
                  // Dst: (ANDri:i64 ?:i64:$a, (as_i32imm:i32 ?:i64:$b))
                0, // EndSwitchType
/*1664*/      /*Scope*/ 11, /*->1676*/
/*1665*/        OPC_CheckType, MVT::i32,
/*1667*/        OPC_MorphNodeTo, TARGET_VAL(SP::ANDrr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
                // Dst: (ANDrr:i32 i32:i32:$b, i32:i32:$c)
/*1676*/      /*Scope*/ 13, /*->1690*/
/*1677*/        OPC_CheckType, MVT::i64,
/*1679*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1681*/        OPC_MorphNodeTo, TARGET_VAL(SP::ANDrr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (and:i64 i64:i64:$a, i64:i64:$b) - Complexity = 3
                // Dst: (ANDrr:i64 ?:i64:$a, ?:i64:$b)
/*1690*/      0, /*End of Scope*/
/*1691*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 43|128,1/*171*/,  TARGET_VAL(ISD::OR),// ->1867
/*1696*/    OPC_Scope, 48, /*->1746*/ // 3 children in Scope
/*1698*/      OPC_RecordChild0, // #0 = $b
/*1699*/      OPC_MoveChild, 1,
/*1701*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1704*/      OPC_RecordChild0, // #1 = $c
/*1705*/      OPC_MoveChild, 1,
/*1707*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1718*/      OPC_MoveParent,
/*1719*/      OPC_MoveParent,
/*1720*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->1732
/*1723*/        OPC_MorphNodeTo, TARGET_VAL(SP::ORNrr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 i32:i32:$b, (xor:i32 i32:i32:$c, -1:i32)) - Complexity = 11
                // Dst: (ORNrr:i32 i32:i32:$b, i32:i32:$c)
              /*SwitchType*/ 11,  MVT::i64,// ->1745
/*1734*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1736*/        OPC_MorphNodeTo, TARGET_VAL(SP::ORNrr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (or:i64 i64:i64:$a, (xor:i64 i64:i64:$b, -1:i64)) - Complexity = 11
                // Dst: (ORNrr:i64 ?:i64:$a, ?:i64:$b)
              0, // EndSwitchType
/*1746*/    /*Scope*/ 48, /*->1795*/
/*1747*/      OPC_MoveChild, 0,
/*1749*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1752*/      OPC_RecordChild0, // #0 = $c
/*1753*/      OPC_MoveChild, 1,
/*1755*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1766*/      OPC_MoveParent,
/*1767*/      OPC_MoveParent,
/*1768*/      OPC_RecordChild1, // #1 = $b
/*1769*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->1781
/*1772*/        OPC_MorphNodeTo, TARGET_VAL(SP::ORNrr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (or:i32 (xor:i32 i32:i32:$c, -1:i32), i32:i32:$b) - Complexity = 11
                // Dst: (ORNrr:i32 i32:i32:$b, i32:i32:$c)
              /*SwitchType*/ 11,  MVT::i64,// ->1794
/*1783*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1785*/        OPC_MorphNodeTo, TARGET_VAL(SP::ORNrr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (or:i64 (xor:i64 i64:i64:$b, -1:i64), i64:i64:$a) - Complexity = 11
                // Dst: (ORNrr:i64 ?:i64:$a, ?:i64:$b)
              0, // EndSwitchType
/*1795*/    /*Scope*/ 70, /*->1866*/
/*1796*/      OPC_RecordChild0, // #0 = $b
/*1797*/      OPC_RecordChild1, // #1 = $c
/*1798*/      OPC_Scope, 39, /*->1839*/ // 3 children in Scope
/*1800*/        OPC_MoveChild, 1,
/*1802*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1805*/        OPC_CheckPredicate, 22, // Predicate_simm13
/*1807*/        OPC_MoveParent,
/*1808*/        OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->1822
/*1811*/          OPC_EmitConvertToTarget, 1,
/*1813*/          OPC_MorphNodeTo, TARGET_VAL(SP::ORri), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (or:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
                  // Dst: (ORri:i32 i32:i32:$b, (imm:i32):$c)
                /*SwitchType*/ 14,  MVT::i64,// ->1838
/*1824*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1826*/          OPC_EmitNodeXForm, 0, 1, // as_i32imm
/*1829*/          OPC_MorphNodeTo, TARGET_VAL(SP::ORri), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (or:i64 i64:i64:$a, (imm:i64)<<P:Predicate_simm13>>:$b) - Complexity = 7
                  // Dst: (ORri:i64 ?:i64:$a, (as_i32imm:i32 ?:i64:$b))
                0, // EndSwitchType
/*1839*/      /*Scope*/ 11, /*->1851*/
/*1840*/        OPC_CheckType, MVT::i32,
/*1842*/        OPC_MorphNodeTo, TARGET_VAL(SP::ORrr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
                // Dst: (ORrr:i32 i32:i32:$b, i32:i32:$c)
/*1851*/      /*Scope*/ 13, /*->1865*/
/*1852*/        OPC_CheckType, MVT::i64,
/*1854*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1856*/        OPC_MorphNodeTo, TARGET_VAL(SP::ORrr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (or:i64 i64:i64:$a, i64:i64:$b) - Complexity = 3
                // Dst: (ORrr:i64 ?:i64:$a, ?:i64:$b)
/*1865*/      0, /*End of Scope*/
/*1866*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 119|128,1/*247*/,  TARGET_VAL(ISD::XOR),// ->2118
/*1871*/    OPC_Scope, 33, /*->1906*/ // 6 children in Scope
/*1873*/      OPC_MoveChild, 0,
/*1875*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1878*/      OPC_RecordChild0, // #0 = $b
/*1879*/      OPC_RecordChild1, // #1 = $c
/*1880*/      OPC_MoveParent,
/*1881*/      OPC_MoveChild, 1,
/*1883*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1894*/      OPC_MoveParent,
/*1895*/      OPC_CheckType, MVT::i32,
/*1897*/      OPC_MorphNodeTo, TARGET_VAL(SP::XNORrr), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (xor:i32 (xor:i32 i32:i32:$b, i32:i32:$c), -1:i32) - Complexity = 11
              // Dst: (XNORrr:i32 i32:i32:$b, i32:i32:$c)
/*1906*/    /*Scope*/ 35, /*->1942*/
/*1907*/      OPC_RecordChild0, // #0 = $a
/*1908*/      OPC_MoveChild, 1,
/*1910*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1913*/      OPC_RecordChild0, // #1 = $b
/*1914*/      OPC_MoveChild, 1,
/*1916*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1927*/      OPC_MoveParent,
/*1928*/      OPC_MoveParent,
/*1929*/      OPC_CheckType, MVT::i64,
/*1931*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1933*/      OPC_MorphNodeTo, TARGET_VAL(SP::XNORrr), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (xor:i64 i64:i64:$a, (xor:i64 i64:i64:$b, -1:i64)) - Complexity = 11
              // Dst: (XNORrr:i64 ?:i64:$a, ?:i64:$b)
/*1942*/    /*Scope*/ 33, /*->1976*/
/*1943*/      OPC_MoveChild, 0,
/*1945*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1948*/      OPC_RecordChild0, // #0 = $b
/*1949*/      OPC_MoveChild, 1,
/*1951*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1962*/      OPC_MoveParent,
/*1963*/      OPC_MoveParent,
/*1964*/      OPC_RecordChild1, // #1 = $c
/*1965*/      OPC_CheckType, MVT::i32,
/*1967*/      OPC_MorphNodeTo, TARGET_VAL(SP::XNORrr), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (xor:i32 (xor:i32 i32:i32:$b, -1:i32), i32:i32:$c) - Complexity = 11
              // Dst: (XNORrr:i32 i32:i32:$b, i32:i32:$c)
/*1976*/    /*Scope*/ 33, /*->2010*/
/*1977*/      OPC_RecordChild0, // #0 = $c
/*1978*/      OPC_MoveChild, 1,
/*1980*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1983*/      OPC_RecordChild0, // #1 = $b
/*1984*/      OPC_MoveChild, 1,
/*1986*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1997*/      OPC_MoveParent,
/*1998*/      OPC_MoveParent,
/*1999*/      OPC_CheckType, MVT::i32,
/*2001*/      OPC_MorphNodeTo, TARGET_VAL(SP::XNORrr), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (xor:i32 i32:i32:$c, (xor:i32 i32:i32:$b, -1:i32)) - Complexity = 11
              // Dst: (XNORrr:i32 i32:i32:$b, i32:i32:$c)
/*2010*/    /*Scope*/ 35, /*->2046*/
/*2011*/      OPC_MoveChild, 0,
/*2013*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*2016*/      OPC_RecordChild0, // #0 = $a
/*2017*/      OPC_MoveChild, 1,
/*2019*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2030*/      OPC_MoveParent,
/*2031*/      OPC_MoveParent,
/*2032*/      OPC_RecordChild1, // #1 = $b
/*2033*/      OPC_CheckType, MVT::i64,
/*2035*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2037*/      OPC_MorphNodeTo, TARGET_VAL(SP::XNORrr), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (xor:i64 (xor:i64 i64:i64:$a, -1:i64), i64:i64:$b) - Complexity = 11
              // Dst: (XNORrr:i64 ?:i64:$a, ?:i64:$b)
/*2046*/    /*Scope*/ 70, /*->2117*/
/*2047*/      OPC_RecordChild0, // #0 = $b
/*2048*/      OPC_RecordChild1, // #1 = $c
/*2049*/      OPC_Scope, 39, /*->2090*/ // 3 children in Scope
/*2051*/        OPC_MoveChild, 1,
/*2053*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2056*/        OPC_CheckPredicate, 22, // Predicate_simm13
/*2058*/        OPC_MoveParent,
/*2059*/        OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->2073
/*2062*/          OPC_EmitConvertToTarget, 1,
/*2064*/          OPC_MorphNodeTo, TARGET_VAL(SP::XORri), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (xor:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
                  // Dst: (XORri:i32 i32:i32:$b, (imm:i32):$c)
                /*SwitchType*/ 14,  MVT::i64,// ->2089
/*2075*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2077*/          OPC_EmitNodeXForm, 0, 1, // as_i32imm
/*2080*/          OPC_MorphNodeTo, TARGET_VAL(SP::XORri), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (xor:i64 i64:i64:$a, (imm:i64)<<P:Predicate_simm13>>:$b) - Complexity = 7
                  // Dst: (XORri:i64 ?:i64:$a, (as_i32imm:i32 ?:i64:$b))
                0, // EndSwitchType
/*2090*/      /*Scope*/ 11, /*->2102*/
/*2091*/        OPC_CheckType, MVT::i32,
/*2093*/        OPC_MorphNodeTo, TARGET_VAL(SP::XORrr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
                // Dst: (XORrr:i32 i32:i32:$b, i32:i32:$c)
/*2102*/      /*Scope*/ 13, /*->2116*/
/*2103*/        OPC_CheckType, MVT::i64,
/*2105*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2107*/        OPC_MorphNodeTo, TARGET_VAL(SP::XORrr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i64 i64:i64:$a, i64:i64:$b) - Complexity = 3
                // Dst: (XORrr:i64 ?:i64:$a, ?:i64:$b)
/*2116*/      0, /*End of Scope*/
/*2117*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 55|128,1/*183*/,  TARGET_VAL(SPISD::SELECT_ICC),// ->2305
/*2122*/    OPC_CaptureGlueInput,
/*2123*/    OPC_RecordChild0, // #0 = $i
/*2124*/    OPC_Scope, 55, /*->2181*/ // 2 children in Scope
/*2126*/      OPC_MoveChild, 0,
/*2128*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2131*/      OPC_CheckPredicate, 23, // Predicate_simm11
/*2133*/      OPC_MoveParent,
/*2134*/      OPC_RecordChild1, // #1 = $f
/*2135*/      OPC_RecordChild2, // #2 = $cc
/*2136*/      OPC_MoveChild, 2,
/*2138*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2141*/      OPC_MoveParent,
/*2142*/      OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->2161
/*2145*/        OPC_CheckPatternPredicate, 2, // (Subtarget.isV9())
/*2147*/        OPC_EmitConvertToTarget, 0,
/*2149*/        OPC_EmitConvertToTarget, 2,
/*2151*/        OPC_MorphNodeTo, TARGET_VAL(SP::MOVICCri), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 1, 4, 
                // Src: (SPselecticc:i32 (imm:i32)<<P:Predicate_simm11>>:$i, i32:i32:$f, (imm:i32):$cc) - Complexity = 10
                // Dst: (MOVICCri:i32 (imm:i32):$i, i32:i32:$f, (imm:i32):$cc)
              /*SwitchType*/ 17,  MVT::i64,// ->2180
/*2163*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2165*/        OPC_EmitNodeXForm, 0, 0, // as_i32imm
/*2168*/        OPC_EmitConvertToTarget, 2,
/*2170*/        OPC_MorphNodeTo, TARGET_VAL(SP::MOVICCri), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 1, 4, 
                // Src: (SPselecticc:i64 (imm:i64)<<P:Predicate_simm11>>:$t, i64:i64:$f, (imm:i32):$cond) - Complexity = 10
                // Dst: (MOVICCri:i64 (as_i32imm:i32 ?:i64:$t), ?:i64:$f, (imm:i32):$cond)
              0, // EndSwitchType
/*2181*/    /*Scope*/ 122, /*->2304*/
/*2182*/      OPC_RecordChild1, // #1 = $f
/*2183*/      OPC_RecordChild2, // #2 = $cc
/*2184*/      OPC_MoveChild, 2,
/*2186*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2189*/      OPC_MoveParent,
/*2190*/      OPC_SwitchType /*4 cases */, 30,  MVT::i32,// ->2223
/*2193*/        OPC_Scope, 14, /*->2209*/ // 2 children in Scope
/*2195*/          OPC_CheckPatternPredicate, 2, // (Subtarget.isV9())
/*2197*/          OPC_EmitConvertToTarget, 2,
/*2199*/          OPC_MorphNodeTo, TARGET_VAL(SP::MOVICCrr), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselecticc:i32 i32:i32:$rs2, i32:i32:$f, (imm:i32):$cc) - Complexity = 6
                  // Dst: (MOVICCrr:i32 i32:i32:$rs2, i32:i32:$f, (imm:i32):$cc)
/*2209*/        /*Scope*/ 12, /*->2222*/
/*2210*/          OPC_EmitConvertToTarget, 2,
/*2212*/          OPC_MorphNodeTo, TARGET_VAL(SP::SELECT_CC_Int_ICC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselecticc:i32 i32:i32:$T, i32:i32:$F, (imm:i32):$Cond) - Complexity = 6
                  // Dst: (SELECT_CC_Int_ICC:i32 i32:i32:$T, i32:i32:$F, (imm:i32):$Cond)
/*2222*/        0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->2239
/*2225*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2227*/        OPC_EmitConvertToTarget, 2,
/*2229*/        OPC_MorphNodeTo, TARGET_VAL(SP::MOVICCrr), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 3, 
                // Src: (SPselecticc:i64 i64:i64:$t, i64:i64:$f, (imm:i32):$cond) - Complexity = 6
                // Dst: (MOVICCrr:i64 ?:i64:$t, ?:i64:$f, (imm:i32):$cond)
              /*SwitchType*/ 30,  MVT::f32,// ->2271
/*2241*/        OPC_Scope, 14, /*->2257*/ // 2 children in Scope
/*2243*/          OPC_CheckPatternPredicate, 2, // (Subtarget.isV9())
/*2245*/          OPC_EmitConvertToTarget, 2,
/*2247*/          OPC_MorphNodeTo, TARGET_VAL(SP::FMOVS_ICC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselecticc:f32 f32:f32:$rs2, f32:f32:$f, (imm:i32):$cc) - Complexity = 6
                  // Dst: (FMOVS_ICC:f32 f32:f32:$rs2, f32:f32:$f, (imm:i32):$cc)
/*2257*/        /*Scope*/ 12, /*->2270*/
/*2258*/          OPC_EmitConvertToTarget, 2,
/*2260*/          OPC_MorphNodeTo, TARGET_VAL(SP::SELECT_CC_FP_ICC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselecticc:f32 f32:f32:$T, f32:f32:$F, (imm:i32):$Cond) - Complexity = 6
                  // Dst: (SELECT_CC_FP_ICC:f32 f32:f32:$T, f32:f32:$F, (imm:i32):$Cond)
/*2270*/        0, /*End of Scope*/
              /*SwitchType*/ 30,  MVT::f64,// ->2303
/*2273*/        OPC_Scope, 14, /*->2289*/ // 2 children in Scope
/*2275*/          OPC_CheckPatternPredicate, 2, // (Subtarget.isV9())
/*2277*/          OPC_EmitConvertToTarget, 2,
/*2279*/          OPC_MorphNodeTo, TARGET_VAL(SP::FMOVD_ICC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselecticc:f64 f64:f64:$rs2, f64:f64:$f, (imm:i32):$cc) - Complexity = 6
                  // Dst: (FMOVD_ICC:f64 f64:f64:$rs2, f64:f64:$f, (imm:i32):$cc)
/*2289*/        /*Scope*/ 12, /*->2302*/
/*2290*/          OPC_EmitConvertToTarget, 2,
/*2292*/          OPC_MorphNodeTo, TARGET_VAL(SP::SELECT_CC_DFP_ICC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselecticc:f64 f64:f64:$T, f64:f64:$F, (imm:i32):$Cond) - Complexity = 6
                  // Dst: (SELECT_CC_DFP_ICC:f64 f64:f64:$T, f64:f64:$F, (imm:i32):$Cond)
/*2302*/        0, /*End of Scope*/
              0, // EndSwitchType
/*2304*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 55|128,1/*183*/,  TARGET_VAL(SPISD::SELECT_FCC),// ->2492
/*2309*/    OPC_CaptureGlueInput,
/*2310*/    OPC_RecordChild0, // #0 = $i
/*2311*/    OPC_Scope, 55, /*->2368*/ // 2 children in Scope
/*2313*/      OPC_MoveChild, 0,
/*2315*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2318*/      OPC_CheckPredicate, 23, // Predicate_simm11
/*2320*/      OPC_MoveParent,
/*2321*/      OPC_RecordChild1, // #1 = $f
/*2322*/      OPC_RecordChild2, // #2 = $cc
/*2323*/      OPC_MoveChild, 2,
/*2325*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2328*/      OPC_MoveParent,
/*2329*/      OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->2348
/*2332*/        OPC_CheckPatternPredicate, 2, // (Subtarget.isV9())
/*2334*/        OPC_EmitConvertToTarget, 0,
/*2336*/        OPC_EmitConvertToTarget, 2,
/*2338*/        OPC_MorphNodeTo, TARGET_VAL(SP::MOVFCCri), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 1, 4, 
                // Src: (SPselectfcc:i32 (imm:i32)<<P:Predicate_simm11>>:$i, i32:i32:$f, (imm:i32):$cc) - Complexity = 10
                // Dst: (MOVFCCri:i32 (imm:i32):$i, i32:i32:$f, (imm:i32):$cc)
              /*SwitchType*/ 17,  MVT::i64,// ->2367
/*2350*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2352*/        OPC_EmitNodeXForm, 0, 0, // as_i32imm
/*2355*/        OPC_EmitConvertToTarget, 2,
/*2357*/        OPC_MorphNodeTo, TARGET_VAL(SP::MOVFCCri), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 1, 4, 
                // Src: (SPselectfcc:i64 (imm:i64)<<P:Predicate_simm11>>:$t, i64:i64:$f, (imm:i32):$cond) - Complexity = 10
                // Dst: (MOVFCCri:i64 (as_i32imm:i32 ?:i64:$t), ?:i64:$f, (imm:i32):$cond)
              0, // EndSwitchType
/*2368*/    /*Scope*/ 122, /*->2491*/
/*2369*/      OPC_RecordChild1, // #1 = $f
/*2370*/      OPC_RecordChild2, // #2 = $cc
/*2371*/      OPC_MoveChild, 2,
/*2373*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2376*/      OPC_MoveParent,
/*2377*/      OPC_SwitchType /*4 cases */, 30,  MVT::i32,// ->2410
/*2380*/        OPC_Scope, 14, /*->2396*/ // 2 children in Scope
/*2382*/          OPC_CheckPatternPredicate, 2, // (Subtarget.isV9())
/*2384*/          OPC_EmitConvertToTarget, 2,
/*2386*/          OPC_MorphNodeTo, TARGET_VAL(SP::MOVFCCrr), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselectfcc:i32 i32:i32:$rs2, i32:i32:$f, (imm:i32):$cc) - Complexity = 6
                  // Dst: (MOVFCCrr:i32 i32:i32:$rs2, i32:i32:$f, (imm:i32):$cc)
/*2396*/        /*Scope*/ 12, /*->2409*/
/*2397*/          OPC_EmitConvertToTarget, 2,
/*2399*/          OPC_MorphNodeTo, TARGET_VAL(SP::SELECT_CC_Int_FCC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselectfcc:i32 i32:i32:$T, i32:i32:$F, (imm:i32):$Cond) - Complexity = 6
                  // Dst: (SELECT_CC_Int_FCC:i32 i32:i32:$T, i32:i32:$F, (imm:i32):$Cond)
/*2409*/        0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->2426
/*2412*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2414*/        OPC_EmitConvertToTarget, 2,
/*2416*/        OPC_MorphNodeTo, TARGET_VAL(SP::MOVFCCrr), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 3, 
                // Src: (SPselectfcc:i64 i64:i64:$t, i64:i64:$f, (imm:i32):$cond) - Complexity = 6
                // Dst: (MOVFCCrr:i64 ?:i64:$t, ?:i64:$f, (imm:i32):$cond)
              /*SwitchType*/ 30,  MVT::f32,// ->2458
/*2428*/        OPC_Scope, 14, /*->2444*/ // 2 children in Scope
/*2430*/          OPC_CheckPatternPredicate, 2, // (Subtarget.isV9())
/*2432*/          OPC_EmitConvertToTarget, 2,
/*2434*/          OPC_MorphNodeTo, TARGET_VAL(SP::FMOVS_FCC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselectfcc:f32 f32:f32:$rs2, f32:f32:$f, (imm:i32):$cc) - Complexity = 6
                  // Dst: (FMOVS_FCC:f32 f32:f32:$rs2, f32:f32:$f, (imm:i32):$cc)
/*2444*/        /*Scope*/ 12, /*->2457*/
/*2445*/          OPC_EmitConvertToTarget, 2,
/*2447*/          OPC_MorphNodeTo, TARGET_VAL(SP::SELECT_CC_FP_FCC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselectfcc:f32 f32:f32:$T, f32:f32:$F, (imm:i32):$Cond) - Complexity = 6
                  // Dst: (SELECT_CC_FP_FCC:f32 f32:f32:$T, f32:f32:$F, (imm:i32):$Cond)
/*2457*/        0, /*End of Scope*/
              /*SwitchType*/ 30,  MVT::f64,// ->2490
/*2460*/        OPC_Scope, 14, /*->2476*/ // 2 children in Scope
/*2462*/          OPC_CheckPatternPredicate, 2, // (Subtarget.isV9())
/*2464*/          OPC_EmitConvertToTarget, 2,
/*2466*/          OPC_MorphNodeTo, TARGET_VAL(SP::FMOVD_FCC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselectfcc:f64 f64:f64:$rs2, f64:f64:$f, (imm:i32):$cc) - Complexity = 6
                  // Dst: (FMOVD_FCC:f64 f64:f64:$rs2, f64:f64:$f, (imm:i32):$cc)
/*2476*/        /*Scope*/ 12, /*->2489*/
/*2477*/          OPC_EmitConvertToTarget, 2,
/*2479*/          OPC_MorphNodeTo, TARGET_VAL(SP::SELECT_CC_DFP_FCC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselectfcc:f64 f64:f64:$T, f64:f64:$F, (imm:i32):$Cond) - Complexity = 6
                  // Dst: (SELECT_CC_DFP_FCC:f64 f64:f64:$T, f64:f64:$F, (imm:i32):$Cond)
/*2489*/        0, /*End of Scope*/
              0, // EndSwitchType
/*2491*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 7|128,1/*135*/,  TARGET_VAL(SPISD::SELECT_XCC),// ->2631
/*2496*/    OPC_CaptureGlueInput,
/*2497*/    OPC_RecordChild0, // #0 = $i
/*2498*/    OPC_Scope, 55, /*->2555*/ // 2 children in Scope
/*2500*/      OPC_MoveChild, 0,
/*2502*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2505*/      OPC_CheckPredicate, 23, // Predicate_simm11
/*2507*/      OPC_MoveParent,
/*2508*/      OPC_RecordChild1, // #1 = $f
/*2509*/      OPC_RecordChild2, // #2 = $cond
/*2510*/      OPC_MoveChild, 2,
/*2512*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2515*/      OPC_MoveParent,
/*2516*/      OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->2535
/*2519*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2521*/        OPC_EmitConvertToTarget, 0,
/*2523*/        OPC_EmitConvertToTarget, 2,
/*2525*/        OPC_MorphNodeTo, TARGET_VAL(SP::MOVXCCri), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 1, 4, 
                // Src: (SPselectxcc:i32 (imm:i32)<<P:Predicate_simm11>>:$i, i32:i32:$f, (imm:i32):$cond) - Complexity = 10
                // Dst: (MOVXCCri:i32 (imm:i32):$i, i32:i32:$f, (imm:i32):$cond)
              /*SwitchType*/ 17,  MVT::i64,// ->2554
/*2537*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2539*/        OPC_EmitNodeXForm, 0, 0, // as_i32imm
/*2542*/        OPC_EmitConvertToTarget, 2,
/*2544*/        OPC_MorphNodeTo, TARGET_VAL(SP::MOVXCCri), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 1, 4, 
                // Src: (SPselectxcc:i64 (imm:i64)<<P:Predicate_simm11>>:$t, i64:i64:$f, (imm:i32):$cond) - Complexity = 10
                // Dst: (MOVXCCri:i64 (as_i32imm:i32 ?:i64:$t), ?:i64:$f, (imm:i32):$cond)
              0, // EndSwitchType
/*2555*/    /*Scope*/ 74, /*->2630*/
/*2556*/      OPC_RecordChild1, // #1 = $f
/*2557*/      OPC_RecordChild2, // #2 = $cond
/*2558*/      OPC_MoveChild, 2,
/*2560*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2563*/      OPC_MoveParent,
/*2564*/      OPC_SwitchType /*4 cases */, 14,  MVT::i32,// ->2581
/*2567*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2569*/        OPC_EmitConvertToTarget, 2,
/*2571*/        OPC_MorphNodeTo, TARGET_VAL(SP::MOVXCCrr), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                // Src: (SPselectxcc:i32 i32:i32:$rs2, i32:i32:$f, (imm:i32):$cond) - Complexity = 6
                // Dst: (MOVXCCrr:i32 i32:i32:$rs2, i32:i32:$f, (imm:i32):$cond)
              /*SwitchType*/ 14,  MVT::i64,// ->2597
/*2583*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2585*/        OPC_EmitConvertToTarget, 2,
/*2587*/        OPC_MorphNodeTo, TARGET_VAL(SP::MOVXCCrr), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 3, 
                // Src: (SPselectxcc:i64 i64:i64:$t, i64:i64:$f, (imm:i32):$cond) - Complexity = 6
                // Dst: (MOVXCCrr:i64 ?:i64:$t, ?:i64:$f, (imm:i32):$cond)
              /*SwitchType*/ 14,  MVT::f32,// ->2613
/*2599*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2601*/        OPC_EmitConvertToTarget, 2,
/*2603*/        OPC_MorphNodeTo, TARGET_VAL(SP::FMOVS_XCC), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 3, 
                // Src: (SPselectxcc:f32 f32:f32:$rs2, f32:f32:$f, (imm:i32):$cond) - Complexity = 6
                // Dst: (FMOVS_XCC:f32 f32:f32:$rs2, f32:f32:$f, (imm:i32):$cond)
              /*SwitchType*/ 14,  MVT::f64,// ->2629
/*2615*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2617*/        OPC_EmitConvertToTarget, 2,
/*2619*/        OPC_MorphNodeTo, TARGET_VAL(SP::FMOVD_XCC), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 3, 
                // Src: (SPselectxcc:f64 f64:f64:$rs2, f64:f64:$f, (imm:i32):$cond) - Complexity = 6
                // Dst: (FMOVD_XCC:f64 f64:f64:$rs2, f64:f64:$f, (imm:i32):$cond)
              0, // EndSwitchType
/*2630*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::CALLSEQ_END),// ->2659
/*2634*/    OPC_RecordNode,   // #0 = 'callseq_end' chained node
/*2635*/    OPC_CaptureGlueInput,
/*2636*/    OPC_RecordChild1, // #1 = $amt1
/*2637*/    OPC_MoveChild, 1,
/*2639*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*2642*/    OPC_MoveParent,
/*2643*/    OPC_RecordChild2, // #2 = $amt2
/*2644*/    OPC_MoveChild, 2,
/*2646*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*2649*/    OPC_MoveParent,
/*2650*/    OPC_EmitMergeInputChains1_0,
/*2651*/    OPC_MorphNodeTo, TARGET_VAL(SP::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (callseq_end (timm:i32):$amt1, (timm:i32):$amt2) - Complexity = 9
            // Dst: (ADJCALLSTACKUP (timm:i32):$amt1, (timm:i32):$amt2)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::FrameIndex),// ->2677
/*2662*/    OPC_RecordNode,   // #0 = $addr
/*2663*/    OPC_CheckType, MVT::iPTR,
/*2665*/    OPC_CheckComplexPat, /*CP*/1, /*#*/0, // SelectADDRri:$addr #1 #2
/*2668*/    OPC_MorphNodeTo, TARGET_VAL(SP::LEA_ADDri), 0,
                1/*#VTs*/, MVT::iPTR, 2/*#Ops*/, 1, 2, 
            // Src: ADDRri:iPTR:$addr - Complexity = 9
            // Dst: (LEA_ADDri:iPTR ADDRri:iPTR:$addr)
          /*SwitchOpcode*/ 55|128,1/*183*/,  TARGET_VAL(ISD::ADD),// ->2864
/*2681*/    OPC_Scope, 53, /*->2736*/ // 3 children in Scope
/*2683*/      OPC_RecordChild0, // #0 = $r
/*2684*/      OPC_MoveChild, 1,
/*2686*/      OPC_CheckOpcode, TARGET_VAL(SPISD::Lo),
/*2689*/      OPC_RecordChild0, // #1 = $in
/*2690*/      OPC_MoveChild, 0,
/*2692*/      OPC_SwitchOpcode /*3 cases */, 11,  TARGET_VAL(ISD::TargetGlobalAddress),// ->2707
/*2696*/        OPC_MoveParent,
/*2697*/        OPC_MoveParent,
/*2698*/        OPC_MorphNodeTo, TARGET_VAL(SP::ADDri), 0,
                    1/*#VTs*/, MVT::iPTR, 2/*#Ops*/, 0, 1, 
                // Src: (add:iPTR iPTR:iPTR:$r, (SPlo:iPTR (tglobaladdr:iPTR):$in)) - Complexity = 9
                // Dst: (ADDri:iPTR ?:iPTR:$r, (tglobaladdr:i32):$in)
              /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetConstantPool),// ->2721
/*2710*/        OPC_MoveParent,
/*2711*/        OPC_MoveParent,
/*2712*/        OPC_MorphNodeTo, TARGET_VAL(SP::ADDri), 0,
                    1/*#VTs*/, MVT::iPTR, 2/*#Ops*/, 0, 1, 
                // Src: (add:iPTR iPTR:iPTR:$r, (SPlo:iPTR (tconstpool:iPTR):$in)) - Complexity = 9
                // Dst: (ADDri:iPTR ?:iPTR:$r, (tconstpool:i32):$in)
              /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetBlockAddress),// ->2735
/*2724*/        OPC_MoveParent,
/*2725*/        OPC_MoveParent,
/*2726*/        OPC_MorphNodeTo, TARGET_VAL(SP::ADDri), 0,
                    1/*#VTs*/, MVT::iPTR, 2/*#Ops*/, 0, 1, 
                // Src: (add:iPTR iPTR:iPTR:$r, (SPlo:iPTR (tblockaddress:iPTR):$in)) - Complexity = 9
                // Dst: (ADDri:iPTR ?:iPTR:$r, (tblockaddress:i32):$in)
              0, // EndSwitchOpcode
/*2736*/    /*Scope*/ 55, /*->2792*/
/*2737*/      OPC_MoveChild, 0,
/*2739*/      OPC_CheckOpcode, TARGET_VAL(SPISD::Lo),
/*2742*/      OPC_RecordChild0, // #0 = $in
/*2743*/      OPC_MoveChild, 0,
/*2745*/      OPC_SwitchOpcode /*3 cases */, 12,  TARGET_VAL(ISD::TargetConstantPool),// ->2761
/*2749*/        OPC_MoveParent,
/*2750*/        OPC_MoveParent,
/*2751*/        OPC_RecordChild1, // #1 = $r
/*2752*/        OPC_MorphNodeTo, TARGET_VAL(SP::ADDri), 0,
                    1/*#VTs*/, MVT::iPTR, 2/*#Ops*/, 1, 0, 
                // Src: (add:iPTR (SPlo:iPTR (tconstpool:iPTR):$in), iPTR:iPTR:$r) - Complexity = 9
                // Dst: (ADDri:iPTR ?:iPTR:$r, (tconstpool:i32):$in)
              /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::TargetBlockAddress),// ->2776
/*2764*/        OPC_MoveParent,
/*2765*/        OPC_MoveParent,
/*2766*/        OPC_RecordChild1, // #1 = $r
/*2767*/        OPC_MorphNodeTo, TARGET_VAL(SP::ADDri), 0,
                    1/*#VTs*/, MVT::iPTR, 2/*#Ops*/, 1, 0, 
                // Src: (add:iPTR (SPlo:iPTR (tblockaddress:iPTR):$in), iPTR:iPTR:$r) - Complexity = 9
                // Dst: (ADDri:iPTR ?:iPTR:$r, (tblockaddress:i32):$in)
              /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::TargetGlobalAddress),// ->2791
/*2779*/        OPC_MoveParent,
/*2780*/        OPC_MoveParent,
/*2781*/        OPC_RecordChild1, // #1 = $r
/*2782*/        OPC_MorphNodeTo, TARGET_VAL(SP::ADDri), 0,
                    1/*#VTs*/, MVT::iPTR, 2/*#Ops*/, 1, 0, 
                // Src: (add:iPTR (SPlo:iPTR (tglobaladdr:iPTR):$in), iPTR:iPTR:$r) - Complexity = 9
                // Dst: (ADDri:iPTR ?:iPTR:$r, (tglobaladdr:i32):$in)
              0, // EndSwitchOpcode
/*2792*/    /*Scope*/ 70, /*->2863*/
/*2793*/      OPC_RecordChild0, // #0 = $b
/*2794*/      OPC_RecordChild1, // #1 = $c
/*2795*/      OPC_Scope, 39, /*->2836*/ // 3 children in Scope
/*2797*/        OPC_MoveChild, 1,
/*2799*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2802*/        OPC_CheckPredicate, 22, // Predicate_simm13
/*2804*/        OPC_MoveParent,
/*2805*/        OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->2819
/*2808*/          OPC_EmitConvertToTarget, 1,
/*2810*/          OPC_MorphNodeTo, TARGET_VAL(SP::ADDri), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (add:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
                  // Dst: (ADDri:i32 i32:i32:$b, (imm:i32):$c)
                /*SwitchType*/ 14,  MVT::i64,// ->2835
/*2821*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2823*/          OPC_EmitNodeXForm, 0, 1, // as_i32imm
/*2826*/          OPC_MorphNodeTo, TARGET_VAL(SP::ADDri), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (add:i64 i64:i64:$a, (imm:i64)<<P:Predicate_simm13>>:$b) - Complexity = 7
                  // Dst: (ADDri:i64 ?:i64:$a, (as_i32imm:i32 ?:i64:$b))
                0, // EndSwitchType
/*2836*/      /*Scope*/ 11, /*->2848*/
/*2837*/        OPC_CheckType, MVT::i32,
/*2839*/        OPC_MorphNodeTo, TARGET_VAL(SP::ADDrr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
                // Dst: (ADDrr:i32 i32:i32:$b, i32:i32:$c)
/*2848*/      /*Scope*/ 13, /*->2862*/
/*2849*/        OPC_CheckType, MVT::i64,
/*2851*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2853*/        OPC_MorphNodeTo, TARGET_VAL(SP::ADDrr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (add:i64 i64:i64:$a, i64:i64:$b) - Complexity = 3
                // Dst: (ADDrr:i64 ?:i64:$a, ?:i64:$b)
/*2862*/      0, /*End of Scope*/
/*2863*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 21,  TARGET_VAL(SPISD::RET_FLAG),// ->2888
/*2867*/    OPC_RecordNode,   // #0 = 'retflag' chained node
/*2868*/    OPC_CaptureGlueInput,
/*2869*/    OPC_RecordChild1, // #1 = $val
/*2870*/    OPC_MoveChild, 1,
/*2872*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2875*/    OPC_CheckPredicate, 22, // Predicate_simm13
/*2877*/    OPC_MoveParent,
/*2878*/    OPC_EmitMergeInputChains1_0,
/*2879*/    OPC_EmitConvertToTarget, 1,
/*2881*/    OPC_MorphNodeTo, TARGET_VAL(SP::RETL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                0/*#VTs*/, 1/*#Ops*/, 2, 
            // Src: (retflag (imm:i32)<<P:Predicate_simm13>>:$val) - Complexity = 7
            // Dst: (RETL (imm:i32):$val)
          /*SwitchOpcode*/ 77,  TARGET_VAL(ISD::SHL),// ->2968
/*2891*/    OPC_RecordChild0, // #0 = $b
/*2892*/    OPC_RecordChild1, // #1 = $c
/*2893*/    OPC_Scope, 43, /*->2938*/ // 2 children in Scope
/*2895*/      OPC_MoveChild, 1,
/*2897*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2900*/      OPC_CheckType, MVT::i32,
/*2902*/      OPC_Scope, 16, /*->2920*/ // 2 children in Scope
/*2904*/        OPC_CheckPredicate, 22, // Predicate_simm13
/*2906*/        OPC_MoveParent,
/*2907*/        OPC_CheckType, MVT::i32,
/*2909*/        OPC_EmitConvertToTarget, 1,
/*2911*/        OPC_MorphNodeTo, TARGET_VAL(SP::SLLri), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (shl:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
                // Dst: (SLLri:i32 i32:i32:$b, (imm:i32):$c)
/*2920*/      /*Scope*/ 16, /*->2937*/
/*2921*/        OPC_MoveParent,
/*2922*/        OPC_CheckType, MVT::i64,
/*2924*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2926*/        OPC_EmitConvertToTarget, 1,
/*2928*/        OPC_MorphNodeTo, TARGET_VAL(SP::SLLXri), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (shl:i64 i64:i64:$rs, (imm:i32):$shcnt) - Complexity = 6
                // Dst: (SLLXri:i64 i64:i64:$rs, (imm:i32):$shcnt)
/*2937*/      0, /*End of Scope*/
/*2938*/    /*Scope*/ 28, /*->2967*/
/*2939*/      OPC_CheckChild1Type, MVT::i32,
/*2941*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->2953
/*2944*/        OPC_MorphNodeTo, TARGET_VAL(SP::SLLrr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (shl:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
                // Dst: (SLLrr:i32 i32:i32:$b, i32:i32:$c)
              /*SwitchType*/ 11,  MVT::i64,// ->2966
/*2955*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2957*/        OPC_MorphNodeTo, TARGET_VAL(SP::SLLXrr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (shl:i64 i64:i64:$rs, i32:i32:$rs2) - Complexity = 3
                // Dst: (SLLXrr:i64 i64:i64:$rs, i32:i32:$rs2)
              0, // EndSwitchType
/*2967*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 77,  TARGET_VAL(ISD::SRL),// ->3048
/*2971*/    OPC_RecordChild0, // #0 = $b
/*2972*/    OPC_RecordChild1, // #1 = $c
/*2973*/    OPC_Scope, 43, /*->3018*/ // 2 children in Scope
/*2975*/      OPC_MoveChild, 1,
/*2977*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2980*/      OPC_CheckType, MVT::i32,
/*2982*/      OPC_Scope, 16, /*->3000*/ // 2 children in Scope
/*2984*/        OPC_CheckPredicate, 22, // Predicate_simm13
/*2986*/        OPC_MoveParent,
/*2987*/        OPC_CheckType, MVT::i32,
/*2989*/        OPC_EmitConvertToTarget, 1,
/*2991*/        OPC_MorphNodeTo, TARGET_VAL(SP::SRLri), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (srl:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
                // Dst: (SRLri:i32 i32:i32:$b, (imm:i32):$c)
/*3000*/      /*Scope*/ 16, /*->3017*/
/*3001*/        OPC_MoveParent,
/*3002*/        OPC_CheckType, MVT::i64,
/*3004*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3006*/        OPC_EmitConvertToTarget, 1,
/*3008*/        OPC_MorphNodeTo, TARGET_VAL(SP::SRLXri), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (srl:i64 i64:i64:$rs, (imm:i32):$shcnt) - Complexity = 6
                // Dst: (SRLXri:i64 i64:i64:$rs, (imm:i32):$shcnt)
/*3017*/      0, /*End of Scope*/
/*3018*/    /*Scope*/ 28, /*->3047*/
/*3019*/      OPC_CheckChild1Type, MVT::i32,
/*3021*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->3033
/*3024*/        OPC_MorphNodeTo, TARGET_VAL(SP::SRLrr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (srl:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
                // Dst: (SRLrr:i32 i32:i32:$b, i32:i32:$c)
              /*SwitchType*/ 11,  MVT::i64,// ->3046
/*3035*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3037*/        OPC_MorphNodeTo, TARGET_VAL(SP::SRLXrr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (srl:i64 i64:i64:$rs, i32:i32:$rs2) - Complexity = 3
                // Dst: (SRLXrr:i64 i64:i64:$rs, i32:i32:$rs2)
              0, // EndSwitchType
/*3047*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 77,  TARGET_VAL(ISD::SRA),// ->3128
/*3051*/    OPC_RecordChild0, // #0 = $b
/*3052*/    OPC_RecordChild1, // #1 = $c
/*3053*/    OPC_Scope, 43, /*->3098*/ // 2 children in Scope
/*3055*/      OPC_MoveChild, 1,
/*3057*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3060*/      OPC_CheckType, MVT::i32,
/*3062*/      OPC_Scope, 16, /*->3080*/ // 2 children in Scope
/*3064*/        OPC_CheckPredicate, 22, // Predicate_simm13
/*3066*/        OPC_MoveParent,
/*3067*/        OPC_CheckType, MVT::i32,
/*3069*/        OPC_EmitConvertToTarget, 1,
/*3071*/        OPC_MorphNodeTo, TARGET_VAL(SP::SRAri), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
                // Dst: (SRAri:i32 i32:i32:$b, (imm:i32):$c)
/*3080*/      /*Scope*/ 16, /*->3097*/
/*3081*/        OPC_MoveParent,
/*3082*/        OPC_CheckType, MVT::i64,
/*3084*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3086*/        OPC_EmitConvertToTarget, 1,
/*3088*/        OPC_MorphNodeTo, TARGET_VAL(SP::SRAXri), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i64 i64:i64:$rs, (imm:i32):$shcnt) - Complexity = 6
                // Dst: (SRAXri:i64 i64:i64:$rs, (imm:i32):$shcnt)
/*3097*/      0, /*End of Scope*/
/*3098*/    /*Scope*/ 28, /*->3127*/
/*3099*/      OPC_CheckChild1Type, MVT::i32,
/*3101*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->3113
/*3104*/        OPC_MorphNodeTo, TARGET_VAL(SP::SRArr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sra:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
                // Dst: (SRArr:i32 i32:i32:$b, i32:i32:$c)
              /*SwitchType*/ 11,  MVT::i64,// ->3126
/*3115*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3117*/        OPC_MorphNodeTo, TARGET_VAL(SP::SRAXrr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (sra:i64 i64:i64:$rs, i32:i32:$rs2) - Complexity = 3
                // Dst: (SRAXrr:i64 i64:i64:$rs, i32:i32:$rs2)
              0, // EndSwitchType
/*3127*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 52,  TARGET_VAL(ISD::ADDC),// ->3183
/*3131*/    OPC_RecordChild0, // #0 = $b
/*3132*/    OPC_RecordChild1, // #1 = $c
/*3133*/    OPC_Scope, 21, /*->3156*/ // 3 children in Scope
/*3135*/      OPC_MoveChild, 1,
/*3137*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3140*/      OPC_CheckPredicate, 22, // Predicate_simm13
/*3142*/      OPC_MoveParent,
/*3143*/      OPC_CheckType, MVT::i32,
/*3145*/      OPC_EmitConvertToTarget, 1,
/*3147*/      OPC_MorphNodeTo, TARGET_VAL(SP::ADDCCri), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (addc:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
              // Dst: (ADDCCri:i32 i32:i32:$b, (imm:i32):$c)
/*3156*/    /*Scope*/ 11, /*->3168*/
/*3157*/      OPC_CheckType, MVT::i32,
/*3159*/      OPC_MorphNodeTo, TARGET_VAL(SP::ADDCCrr), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (addc:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
              // Dst: (ADDCCrr:i32 i32:i32:$b, i32:i32:$c)
/*3168*/    /*Scope*/ 13, /*->3182*/
/*3169*/      OPC_CheckType, MVT::i64,
/*3171*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3173*/      OPC_MorphNodeTo, TARGET_VAL(SP::ADDCCrr), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (addc:i64 i64:i64:$a, i64:i64:$b) - Complexity = 3
              // Dst: (ADDCCrr:i64 ?:i64:$a, ?:i64:$b)
/*3182*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 53,  TARGET_VAL(ISD::ADDE),// ->3239
/*3186*/    OPC_CaptureGlueInput,
/*3187*/    OPC_RecordChild0, // #0 = $b
/*3188*/    OPC_RecordChild1, // #1 = $c
/*3189*/    OPC_Scope, 21, /*->3212*/ // 3 children in Scope
/*3191*/      OPC_MoveChild, 1,
/*3193*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3196*/      OPC_CheckPredicate, 22, // Predicate_simm13
/*3198*/      OPC_MoveParent,
/*3199*/      OPC_CheckType, MVT::i32,
/*3201*/      OPC_EmitConvertToTarget, 1,
/*3203*/      OPC_MorphNodeTo, TARGET_VAL(SP::ADDXri), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (adde:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
              // Dst: (ADDXri:i32 i32:i32:$b, (imm:i32):$c)
/*3212*/    /*Scope*/ 11, /*->3224*/
/*3213*/      OPC_CheckType, MVT::i32,
/*3215*/      OPC_MorphNodeTo, TARGET_VAL(SP::ADDXrr), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (adde:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
              // Dst: (ADDXrr:i32 i32:i32:$b, i32:i32:$c)
/*3224*/    /*Scope*/ 13, /*->3238*/
/*3225*/      OPC_CheckType, MVT::i64,
/*3227*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3229*/      OPC_MorphNodeTo, TARGET_VAL(SP::ADDXrr), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (adde:i64 i64:i64:$a, i64:i64:$b) - Complexity = 3
              // Dst: (ADDXrr:i64 ?:i64:$a, ?:i64:$b)
/*3238*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 70,  TARGET_VAL(ISD::SUB),// ->3312
/*3242*/    OPC_RecordChild0, // #0 = $b
/*3243*/    OPC_RecordChild1, // #1 = $c
/*3244*/    OPC_Scope, 39, /*->3285*/ // 3 children in Scope
/*3246*/      OPC_MoveChild, 1,
/*3248*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3251*/      OPC_CheckPredicate, 22, // Predicate_simm13
/*3253*/      OPC_MoveParent,
/*3254*/      OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->3268
/*3257*/        OPC_EmitConvertToTarget, 1,
/*3259*/        OPC_MorphNodeTo, TARGET_VAL(SP::SUBri), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sub:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
                // Dst: (SUBri:i32 i32:i32:$b, (imm:i32):$c)
              /*SwitchType*/ 14,  MVT::i64,// ->3284
/*3270*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3272*/        OPC_EmitNodeXForm, 0, 1, // as_i32imm
/*3275*/        OPC_MorphNodeTo, TARGET_VAL(SP::SUBri), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (sub:i64 i64:i64:$a, (imm:i64)<<P:Predicate_simm13>>:$b) - Complexity = 7
                // Dst: (SUBri:i64 ?:i64:$a, (as_i32imm:i32 ?:i64:$b))
              0, // EndSwitchType
/*3285*/    /*Scope*/ 11, /*->3297*/
/*3286*/      OPC_CheckType, MVT::i32,
/*3288*/      OPC_MorphNodeTo, TARGET_VAL(SP::SUBrr), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sub:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
              // Dst: (SUBrr:i32 i32:i32:$b, i32:i32:$c)
/*3297*/    /*Scope*/ 13, /*->3311*/
/*3298*/      OPC_CheckType, MVT::i64,
/*3300*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3302*/      OPC_MorphNodeTo, TARGET_VAL(SP::SUBrr), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (sub:i64 i64:i64:$a, i64:i64:$b) - Complexity = 3
              // Dst: (SUBrr:i64 ?:i64:$a, ?:i64:$b)
/*3311*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 53,  TARGET_VAL(ISD::SUBE),// ->3368
/*3315*/    OPC_CaptureGlueInput,
/*3316*/    OPC_RecordChild0, // #0 = $b
/*3317*/    OPC_RecordChild1, // #1 = $c
/*3318*/    OPC_Scope, 21, /*->3341*/ // 3 children in Scope
/*3320*/      OPC_MoveChild, 1,
/*3322*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3325*/      OPC_CheckPredicate, 22, // Predicate_simm13
/*3327*/      OPC_MoveParent,
/*3328*/      OPC_CheckType, MVT::i32,
/*3330*/      OPC_EmitConvertToTarget, 1,
/*3332*/      OPC_MorphNodeTo, TARGET_VAL(SP::SUBXri), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (sube:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
              // Dst: (SUBXri:i32 i32:i32:$b, (imm:i32):$c)
/*3341*/    /*Scope*/ 11, /*->3353*/
/*3342*/      OPC_CheckType, MVT::i32,
/*3344*/      OPC_MorphNodeTo, TARGET_VAL(SP::SUBXrr), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sube:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
              // Dst: (SUBXrr:i32 i32:i32:$b, i32:i32:$c)
/*3353*/    /*Scope*/ 13, /*->3367*/
/*3354*/      OPC_CheckType, MVT::i64,
/*3356*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3358*/      OPC_MorphNodeTo, TARGET_VAL(SP::SUBXrr), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (sube:i64 i64:i64:$a, i64:i64:$b) - Complexity = 3
              // Dst: (SUBXrr:i64 ?:i64:$a, ?:i64:$b)
/*3367*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 52,  TARGET_VAL(ISD::SUBC),// ->3423
/*3371*/    OPC_RecordChild0, // #0 = $b
/*3372*/    OPC_RecordChild1, // #1 = $c
/*3373*/    OPC_Scope, 21, /*->3396*/ // 3 children in Scope
/*3375*/      OPC_MoveChild, 1,
/*3377*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3380*/      OPC_CheckPredicate, 22, // Predicate_simm13
/*3382*/      OPC_MoveParent,
/*3383*/      OPC_CheckType, MVT::i32,
/*3385*/      OPC_EmitConvertToTarget, 1,
/*3387*/      OPC_MorphNodeTo, TARGET_VAL(SP::SUBCCri), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (subc:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
              // Dst: (SUBCCri:i32 i32:i32:$b, (imm:i32):$c)
/*3396*/    /*Scope*/ 11, /*->3408*/
/*3397*/      OPC_CheckType, MVT::i32,
/*3399*/      OPC_MorphNodeTo, TARGET_VAL(SP::SUBCCrr), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (subc:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
              // Dst: (SUBCCrr:i32 i32:i32:$b, i32:i32:$c)
/*3408*/    /*Scope*/ 13, /*->3422*/
/*3409*/      OPC_CheckType, MVT::i64,
/*3411*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3413*/      OPC_MorphNodeTo, TARGET_VAL(SP::SUBCCrr), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (subc:i64 i64:i64:$a, i64:i64:$b) - Complexity = 3
              // Dst: (SUBCCrr:i64 ?:i64:$a, ?:i64:$b)
/*3422*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 76,  TARGET_VAL(SPISD::CMPICC),// ->3502
/*3426*/    OPC_RecordChild0, // #0 = $b
/*3427*/    OPC_Scope, 33, /*->3462*/ // 2 children in Scope
/*3429*/      OPC_CheckChild0Type, MVT::i32,
/*3431*/      OPC_RecordChild1, // #1 = $c
/*3432*/      OPC_Scope, 18, /*->3452*/ // 2 children in Scope
/*3434*/        OPC_MoveChild, 1,
/*3436*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3439*/        OPC_CheckPredicate, 22, // Predicate_simm13
/*3441*/        OPC_MoveParent,
/*3442*/        OPC_EmitConvertToTarget, 1,
/*3444*/        OPC_MorphNodeTo, TARGET_VAL(SP::CMPri), 0|OPFL_GlueOutput,
                    0/*#VTs*/, 2/*#Ops*/, 0, 2, 
                // Src: (SPcmpicc i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
                // Dst: (CMPri i32:i32:$b, (imm:i32):$c)
/*3452*/      /*Scope*/ 8, /*->3461*/
/*3453*/        OPC_MorphNodeTo, TARGET_VAL(SP::CMPrr), 0|OPFL_GlueOutput,
                    0/*#VTs*/, 2/*#Ops*/, 0, 1, 
                // Src: (SPcmpicc i32:i32:$b, i32:i32:$c) - Complexity = 3
                // Dst: (CMPrr i32:i32:$b, i32:i32:$c)
/*3461*/      0, /*End of Scope*/
/*3462*/    /*Scope*/ 38, /*->3501*/
/*3463*/      OPC_CheckChild0Type, MVT::i64,
/*3465*/      OPC_RecordChild1, // #1 = $b
/*3466*/      OPC_Scope, 21, /*->3489*/ // 2 children in Scope
/*3468*/        OPC_MoveChild, 1,
/*3470*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3473*/        OPC_CheckPredicate, 22, // Predicate_simm13
/*3475*/        OPC_MoveParent,
/*3476*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3478*/        OPC_EmitNodeXForm, 0, 1, // as_i32imm
/*3481*/        OPC_MorphNodeTo, TARGET_VAL(SP::CMPri), 0|OPFL_GlueOutput,
                    0/*#VTs*/, 2/*#Ops*/, 0, 2, 
                // Src: (SPcmpicc i64:i64:$a, (imm:i64)<<P:Predicate_simm13>>:$b) - Complexity = 7
                // Dst: (CMPri ?:i64:$a, (as_i32imm:i32 ?:i64:$b))
/*3489*/      /*Scope*/ 10, /*->3500*/
/*3490*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3492*/        OPC_MorphNodeTo, TARGET_VAL(SP::CMPrr), 0|OPFL_GlueOutput,
                    0/*#VTs*/, 2/*#Ops*/, 0, 1, 
                // Src: (SPcmpicc i64:i64:$a, i64:i64:$b) - Complexity = 3
                // Dst: (CMPrr ?:i64:$a, ?:i64:$b)
/*3500*/      0, /*End of Scope*/
/*3501*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 69,  TARGET_VAL(ISD::MUL),// ->3574
/*3505*/    OPC_RecordChild0, // #0 = $b
/*3506*/    OPC_RecordChild1, // #1 = $c
/*3507*/    OPC_Scope, 38, /*->3547*/ // 3 children in Scope
/*3509*/      OPC_MoveChild, 1,
/*3511*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3514*/      OPC_CheckPredicate, 22, // Predicate_simm13
/*3516*/      OPC_MoveParent,
/*3517*/      OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->3531
/*3520*/        OPC_EmitConvertToTarget, 1,
/*3522*/        OPC_MorphNodeTo, TARGET_VAL(SP::SMULri), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (mul:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
                // Dst: (SMULri:i32 i32:i32:$b, (imm:i32):$c)
              /*SwitchType*/ 13,  MVT::i64,// ->3546
/*3533*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3535*/        OPC_EmitConvertToTarget, 1,
/*3537*/        OPC_MorphNodeTo, TARGET_VAL(SP::MULXri), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (mul:i64 i64:i64:$rs1, (imm:i64)<<P:Predicate_simm13>>:$i) - Complexity = 7
                // Dst: (MULXri:i64 i64:i64:$rs1, (imm:i64):$i)
              0, // EndSwitchType
/*3547*/    /*Scope*/ 11, /*->3559*/
/*3548*/      OPC_CheckType, MVT::i32,
/*3550*/      OPC_MorphNodeTo, TARGET_VAL(SP::SMULrr), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mul:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
              // Dst: (SMULrr:i32 i32:i32:$b, i32:i32:$c)
/*3559*/    /*Scope*/ 13, /*->3573*/
/*3560*/      OPC_CheckType, MVT::i64,
/*3562*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3564*/      OPC_MorphNodeTo, TARGET_VAL(SP::MULXrr), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (mul:i64 i64:i64:$rs1, i64:i64:$rs2) - Complexity = 3
              // Dst: (MULXrr:i64 i64:i64:$rs1, i64:i64:$rs2)
/*3573*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(ISD::SDIV),// ->3619
/*3577*/    OPC_RecordChild0, // #0 = $rs1
/*3578*/    OPC_RecordChild1, // #1 = $i
/*3579*/    OPC_Scope, 23, /*->3604*/ // 2 children in Scope
/*3581*/      OPC_MoveChild, 1,
/*3583*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3586*/      OPC_CheckPredicate, 22, // Predicate_simm13
/*3588*/      OPC_MoveParent,
/*3589*/      OPC_CheckType, MVT::i64,
/*3591*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3593*/      OPC_EmitConvertToTarget, 1,
/*3595*/      OPC_MorphNodeTo, TARGET_VAL(SP::SDIVXri), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
              // Src: (sdiv:i64 i64:i64:$rs1, (imm:i64)<<P:Predicate_simm13>>:$i) - Complexity = 7
              // Dst: (SDIVXri:i64 i64:i64:$rs1, (imm:i64):$i)
/*3604*/    /*Scope*/ 13, /*->3618*/
/*3605*/      OPC_CheckType, MVT::i64,
/*3607*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3609*/      OPC_MorphNodeTo, TARGET_VAL(SP::SDIVXrr), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (sdiv:i64 i64:i64:$rs1, i64:i64:$rs2) - Complexity = 3
              // Dst: (SDIVXrr:i64 i64:i64:$rs1, i64:i64:$rs2)
/*3618*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(ISD::UDIV),// ->3664
/*3622*/    OPC_RecordChild0, // #0 = $rs1
/*3623*/    OPC_RecordChild1, // #1 = $i
/*3624*/    OPC_Scope, 23, /*->3649*/ // 2 children in Scope
/*3626*/      OPC_MoveChild, 1,
/*3628*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3631*/      OPC_CheckPredicate, 22, // Predicate_simm13
/*3633*/      OPC_MoveParent,
/*3634*/      OPC_CheckType, MVT::i64,
/*3636*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3638*/      OPC_EmitConvertToTarget, 1,
/*3640*/      OPC_MorphNodeTo, TARGET_VAL(SP::UDIVXri), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
              // Src: (udiv:i64 i64:i64:$rs1, (imm:i64)<<P:Predicate_simm13>>:$i) - Complexity = 7
              // Dst: (UDIVXri:i64 i64:i64:$rs1, (imm:i64):$i)
/*3649*/    /*Scope*/ 13, /*->3663*/
/*3650*/      OPC_CheckType, MVT::i64,
/*3652*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3654*/      OPC_MorphNodeTo, TARGET_VAL(SP::UDIVXrr), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (udiv:i64 i64:i64:$rs1, i64:i64:$rs2) - Complexity = 3
              // Dst: (UDIVXrr:i64 i64:i64:$rs1, i64:i64:$rs2)
/*3663*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 97,  TARGET_VAL(ISD::FMUL),// ->3764
/*3667*/    OPC_Scope, 54, /*->3723*/ // 2 children in Scope
/*3669*/      OPC_MoveChild, 0,
/*3671*/      OPC_CheckOpcode, TARGET_VAL(ISD::FP_EXTEND),
/*3674*/      OPC_RecordChild0, // #0 = $src1
/*3675*/      OPC_Scope, 19, /*->3696*/ // 2 children in Scope
/*3677*/        OPC_MoveParent,
/*3678*/        OPC_MoveChild, 1,
/*3680*/        OPC_CheckOpcode, TARGET_VAL(ISD::FP_EXTEND),
/*3683*/        OPC_RecordChild0, // #1 = $src2
/*3684*/        OPC_MoveParent,
/*3685*/        OPC_CheckType, MVT::f64,
/*3687*/        OPC_MorphNodeTo, TARGET_VAL(SP::FSMULD), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fmul:f64 (fextend:f64 f32:f32:$src1), (fextend:f64 f32:f32:$src2)) - Complexity = 9
                // Dst: (FSMULD:f64 f32:f32:$src1, f32:f32:$src2)
/*3696*/      /*Scope*/ 25, /*->3722*/
/*3697*/        OPC_CheckChild0Type, MVT::f64,
/*3699*/        OPC_MoveParent,
/*3700*/        OPC_MoveChild, 1,
/*3702*/        OPC_CheckOpcode, TARGET_VAL(ISD::FP_EXTEND),
/*3705*/        OPC_RecordChild0, // #1 = $src2
/*3706*/        OPC_CheckChild0Type, MVT::f64,
/*3708*/        OPC_MoveParent,
/*3709*/        OPC_CheckType, MVT::f128,
/*3711*/        OPC_CheckPatternPredicate, 3, // (Subtarget.hasHardQuad())
/*3713*/        OPC_MorphNodeTo, TARGET_VAL(SP::FDMULQ), 0,
                    1/*#VTs*/, MVT::f128, 2/*#Ops*/, 0, 1, 
                // Src: (fmul:f128 (fextend:f128 f64:f64:$src1), (fextend:f128 f64:f64:$src2)) - Complexity = 9
                // Dst: (FDMULQ:f128 f64:f64:$src1, f64:f64:$src2)
/*3722*/      0, /*End of Scope*/
/*3723*/    /*Scope*/ 39, /*->3763*/
/*3724*/      OPC_RecordChild0, // #0 = $src1
/*3725*/      OPC_RecordChild1, // #1 = $src2
/*3726*/      OPC_SwitchType /*3 cases */, 9,  MVT::f32,// ->3738
/*3729*/        OPC_MorphNodeTo, TARGET_VAL(SP::FMULS), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fmul:f32 f32:f32:$src1, f32:f32:$src2) - Complexity = 3
                // Dst: (FMULS:f32 f32:f32:$src1, f32:f32:$src2)
              /*SwitchType*/ 9,  MVT::f64,// ->3749
/*3740*/        OPC_MorphNodeTo, TARGET_VAL(SP::FMULD), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fmul:f64 f64:f64:$src1, f64:f64:$src2) - Complexity = 3
                // Dst: (FMULD:f64 f64:f64:$src1, f64:f64:$src2)
              /*SwitchType*/ 11,  MVT::f128,// ->3762
/*3751*/        OPC_CheckPatternPredicate, 3, // (Subtarget.hasHardQuad())
/*3753*/        OPC_MorphNodeTo, TARGET_VAL(SP::FMULQ), 0,
                    1/*#VTs*/, MVT::f128, 2/*#Ops*/, 0, 1, 
                // Src: (fmul:f128 f128:f128:$src1, f128:f128:$src2) - Complexity = 3
                // Dst: (FMULQ:f128 f128:f128:$src1, f128:f128:$src2)
              0, // EndSwitchType
/*3763*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::CALLSEQ_START),// ->3783
/*3767*/    OPC_RecordNode,   // #0 = 'callseq_start' chained node
/*3768*/    OPC_RecordChild1, // #1 = $amt
/*3769*/    OPC_MoveChild, 1,
/*3771*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*3774*/    OPC_MoveParent,
/*3775*/    OPC_EmitMergeInputChains1_0,
/*3776*/    OPC_MorphNodeTo, TARGET_VAL(SP::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (callseq_start (timm:i32):$amt) - Complexity = 6
            // Dst: (ADJCALLSTACKDOWN (timm:i32):$amt)
          /*SwitchOpcode*/ 27,  TARGET_VAL(SPISD::BRICC),// ->3813
/*3786*/    OPC_RecordNode,   // #0 = 'SPbricc' chained node
/*3787*/    OPC_CaptureGlueInput,
/*3788*/    OPC_RecordChild1, // #1 = $dst
/*3789*/    OPC_MoveChild, 1,
/*3791*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3794*/    OPC_MoveParent,
/*3795*/    OPC_RecordChild2, // #2 = $cc
/*3796*/    OPC_MoveChild, 2,
/*3798*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3801*/    OPC_MoveParent,
/*3802*/    OPC_EmitMergeInputChains1_0,
/*3803*/    OPC_EmitConvertToTarget, 2,
/*3805*/    OPC_MorphNodeTo, TARGET_VAL(SP::BCOND), 0|OPFL_Chain|OPFL_GlueInput,
                0/*#VTs*/, 2/*#Ops*/, 1, 3, 
            // Src: (SPbricc (bb:Other):$dst, (imm:i32):$cc) - Complexity = 6
            // Dst: (BCOND (bb:Other):$dst, (imm:i32):$cc)
          /*SwitchOpcode*/ 27,  TARGET_VAL(SPISD::BRFCC),// ->3843
/*3816*/    OPC_RecordNode,   // #0 = 'SPbrfcc' chained node
/*3817*/    OPC_CaptureGlueInput,
/*3818*/    OPC_RecordChild1, // #1 = $dst
/*3819*/    OPC_MoveChild, 1,
/*3821*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3824*/    OPC_MoveParent,
/*3825*/    OPC_RecordChild2, // #2 = $cc
/*3826*/    OPC_MoveChild, 2,
/*3828*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3831*/    OPC_MoveParent,
/*3832*/    OPC_EmitMergeInputChains1_0,
/*3833*/    OPC_EmitConvertToTarget, 2,
/*3835*/    OPC_MorphNodeTo, TARGET_VAL(SP::FBCOND), 0|OPFL_Chain|OPFL_GlueInput,
                0/*#VTs*/, 2/*#Ops*/, 1, 3, 
            // Src: (SPbrfcc (bb:Other):$dst, (imm:i32):$cc) - Complexity = 6
            // Dst: (FBCOND (bb:Other):$dst, (imm:i32):$cc)
          /*SwitchOpcode*/ 41,  TARGET_VAL(SPISD::Hi),// ->3887
/*3846*/    OPC_RecordChild0, // #0 = $in
/*3847*/    OPC_MoveChild, 0,
/*3849*/    OPC_SwitchOpcode /*3 cases */, 9,  TARGET_VAL(ISD::TargetGlobalAddress),// ->3862
/*3853*/      OPC_MoveParent,
/*3854*/      OPC_MorphNodeTo, TARGET_VAL(SP::SETHIi), 0,
                  1/*#VTs*/, MVT::iPTR, 1/*#Ops*/, 0, 
              // Src: (SPhi:iPTR (tglobaladdr:iPTR):$in) - Complexity = 6
              // Dst: (SETHIi:iPTR (tglobaladdr:i32):$in)
            /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::TargetConstantPool),// ->3874
/*3865*/      OPC_MoveParent,
/*3866*/      OPC_MorphNodeTo, TARGET_VAL(SP::SETHIi), 0,
                  1/*#VTs*/, MVT::iPTR, 1/*#Ops*/, 0, 
              // Src: (SPhi:iPTR (tconstpool:iPTR):$in) - Complexity = 6
              // Dst: (SETHIi:iPTR (tconstpool:i32):$in)
            /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::TargetBlockAddress),// ->3886
/*3877*/      OPC_MoveParent,
/*3878*/      OPC_MorphNodeTo, TARGET_VAL(SP::SETHIi), 0,
                  1/*#VTs*/, MVT::iPTR, 1/*#Ops*/, 0, 
              // Src: (SPhi:iPTR (tblockaddress:iPTR):$in) - Complexity = 6
              // Dst: (SETHIi:iPTR (tblockaddress:i32):$in)
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 53,  TARGET_VAL(SPISD::Lo),// ->3943
/*3890*/    OPC_RecordChild0, // #0 = $in
/*3891*/    OPC_MoveChild, 0,
/*3893*/    OPC_SwitchOpcode /*3 cases */, 13,  TARGET_VAL(ISD::TargetGlobalAddress),// ->3910
/*3897*/      OPC_MoveParent,
/*3898*/      OPC_EmitRegister, MVT::i32, SP::G0,
/*3901*/      OPC_MorphNodeTo, TARGET_VAL(SP::ORri), 0,
                  1/*#VTs*/, MVT::iPTR, 2/*#Ops*/, 1, 0, 
              // Src: (SPlo:iPTR (tglobaladdr:iPTR):$in) - Complexity = 6
              // Dst: (ORri:iPTR G0:i32, (tglobaladdr:i32):$in)
            /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::TargetConstantPool),// ->3926
/*3913*/      OPC_MoveParent,
/*3914*/      OPC_EmitRegister, MVT::i32, SP::G0,
/*3917*/      OPC_MorphNodeTo, TARGET_VAL(SP::ORri), 0,
                  1/*#VTs*/, MVT::iPTR, 2/*#Ops*/, 1, 0, 
              // Src: (SPlo:iPTR (tconstpool:iPTR):$in) - Complexity = 6
              // Dst: (ORri:iPTR G0:i32, (tconstpool:i32):$in)
            /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::TargetBlockAddress),// ->3942
/*3929*/      OPC_MoveParent,
/*3930*/      OPC_EmitRegister, MVT::i32, SP::G0,
/*3933*/      OPC_MorphNodeTo, TARGET_VAL(SP::ORri), 0,
                  1/*#VTs*/, MVT::iPTR, 2/*#Ops*/, 1, 0, 
              // Src: (SPlo:iPTR (tblockaddress:iPTR):$in) - Complexity = 6
              // Dst: (ORri:iPTR G0:i32, (tblockaddress:i32):$in)
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 29,  TARGET_VAL(SPISD::BRXCC),// ->3975
/*3946*/    OPC_RecordNode,   // #0 = 'SPbrxcc' chained node
/*3947*/    OPC_CaptureGlueInput,
/*3948*/    OPC_RecordChild1, // #1 = $dst
/*3949*/    OPC_MoveChild, 1,
/*3951*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3954*/    OPC_MoveParent,
/*3955*/    OPC_RecordChild2, // #2 = $cc
/*3956*/    OPC_MoveChild, 2,
/*3958*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3961*/    OPC_MoveParent,
/*3962*/    OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3964*/    OPC_EmitMergeInputChains1_0,
/*3965*/    OPC_EmitConvertToTarget, 2,
/*3967*/    OPC_MorphNodeTo, TARGET_VAL(SP::BPXCC), 0|OPFL_Chain|OPFL_GlueInput,
                0/*#VTs*/, 2/*#Ops*/, 1, 3, 
            // Src: (SPbrxcc (bb:Other):$dst, (imm:i32):$cc) - Complexity = 6
            // Dst: (BPXCC (bb:Other):$dst, (imm:i32):$cc)
          /*SwitchOpcode*/ 109|128,1/*237*/,  TARGET_VAL(ISD::Constant),// ->4216
/*3979*/    OPC_RecordNode,   // #0 = $src
/*3980*/    OPC_Scope, 17, /*->3999*/ // 7 children in Scope
/*3982*/      OPC_CheckPredicate, 24, // Predicate_SETHIimm
/*3984*/      OPC_CheckType, MVT::i32,
/*3986*/      OPC_EmitConvertToTarget, 0,
/*3988*/      OPC_EmitNodeXForm, 1, 1, // HI22
/*3991*/      OPC_MorphNodeTo, TARGET_VAL(SP::SETHIi), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
              // Src: (imm:i32)<<P:Predicate_SETHIimm>><<X:HI22>>:$src - Complexity = 4
              // Dst: (SETHIi:i32 (HI22:i32 (imm:i32):$src))
/*3999*/    /*Scope*/ 37, /*->4037*/
/*4000*/      OPC_CheckPredicate, 22, // Predicate_simm13
/*4002*/      OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->4019
/*4005*/        OPC_EmitRegister, MVT::i32, SP::G0,
/*4008*/        OPC_EmitConvertToTarget, 0,
/*4010*/        OPC_MorphNodeTo, TARGET_VAL(SP::ORri), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (imm:i32)<<P:Predicate_simm13>>:$val - Complexity = 4
                // Dst: (ORri:i32 G0:i32, (imm:i32):$val)
              /*SwitchType*/ 15,  MVT::i64,// ->4036
/*4021*/        OPC_EmitRegister, MVT::i64, SP::G0,
/*4024*/        OPC_EmitNodeXForm, 0, 0, // as_i32imm
/*4027*/        OPC_MorphNodeTo, TARGET_VAL(SP::ORri), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (imm:i64)<<P:Predicate_simm13>>:$val - Complexity = 4
                // Dst: (ORri:i64 G0:i64, (as_i32imm:i32 ?:i64:$val))
              0, // EndSwitchType
/*4037*/    /*Scope*/ 15, /*->4053*/
/*4038*/      OPC_CheckPredicate, 24, // Predicate_SETHIimm
/*4040*/      OPC_CheckType, MVT::i64,
/*4042*/      OPC_EmitNodeXForm, 1, 0, // HI22
/*4045*/      OPC_MorphNodeTo, TARGET_VAL(SP::SETHIi), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
              // Src: (imm:i64)<<P:Predicate_SETHIimm>><<X:HI22>>:$val - Complexity = 4
              // Dst: (SETHIi:i64 (HI22:i32 ?:i64:$val))
/*4053*/    /*Scope*/ 29, /*->4083*/
/*4054*/      OPC_CheckPredicate, 25, // Predicate_uimm32
/*4056*/      OPC_CheckType, MVT::i64,
/*4058*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*4060*/      OPC_EmitNodeXForm, 1, 0, // HI22
/*4063*/      OPC_EmitNode, TARGET_VAL(SP::SETHIi), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*4071*/      OPC_EmitNodeXForm, 2, 0, // LO10
/*4074*/      OPC_MorphNodeTo, TARGET_VAL(SP::ORri), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (imm:i64)<<P:Predicate_uimm32>>:$val - Complexity = 4
              // Dst: (ORri:i64 (SETHIi:i32 (HI22:i32 ?:i64:$val)), (LO10:i32 ?:i64:$val))
/*4083*/    /*Scope*/ 29, /*->4113*/
/*4084*/      OPC_CheckPredicate, 26, // Predicate_nimm33
/*4086*/      OPC_CheckType, MVT::i64,
/*4088*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*4090*/      OPC_EmitNodeXForm, 3, 0, // HIX22
/*4093*/      OPC_EmitNode, TARGET_VAL(SP::SETHIi), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*4101*/      OPC_EmitNodeXForm, 4, 0, // LOX10
/*4104*/      OPC_MorphNodeTo, TARGET_VAL(SP::XORri), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (imm:i64)<<P:Predicate_nimm33>>:$val - Complexity = 4
              // Dst: (XORri:i64 (SETHIi:i32 (HIX22:i32 ?:i64:$val)), (LOX10:i32 ?:i64:$val))
/*4113*/    /*Scope*/ 29, /*->4143*/
/*4114*/      OPC_CheckType, MVT::i32,
/*4116*/      OPC_EmitConvertToTarget, 0,
/*4118*/      OPC_EmitNodeXForm, 1, 1, // HI22
/*4121*/      OPC_EmitNode, TARGET_VAL(SP::SETHIi), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*4129*/      OPC_EmitConvertToTarget, 0,
/*4131*/      OPC_EmitNodeXForm, 2, 4, // LO10
/*4134*/      OPC_MorphNodeTo, TARGET_VAL(SP::ORri), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 5, 
              // Src: (imm:i32):$val - Complexity = 3
              // Dst: (ORri:i32 (SETHIi:i32 (HI22:i32 (imm:i32):$val)), (LO10:i32 (imm:i32):$val))
/*4143*/    /*Scope*/ 71, /*->4215*/
/*4144*/      OPC_CheckType, MVT::i64,
/*4146*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*4148*/      OPC_EmitNodeXForm, 5, 0, // HH22
/*4151*/      OPC_EmitNode, TARGET_VAL(SP::SETHIi), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*4159*/      OPC_EmitNodeXForm, 6, 0, // HM10
/*4162*/      OPC_EmitNode, TARGET_VAL(SP::ORri), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3,  // Results = #4
/*4171*/      OPC_EmitInteger, MVT::i32, 32, 
/*4174*/      OPC_EmitNode, TARGET_VAL(SP::SLLXri), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 4, 5,  // Results = #6
/*4183*/      OPC_EmitNodeXForm, 1, 0, // HI22
/*4186*/      OPC_EmitNode, TARGET_VAL(SP::SETHIi), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 7,  // Results = #8
/*4194*/      OPC_EmitNodeXForm, 2, 0, // LO10
/*4197*/      OPC_EmitNode, TARGET_VAL(SP::ORri), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 8, 9,  // Results = #10
/*4206*/      OPC_MorphNodeTo, TARGET_VAL(SP::ORrr), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 6, 10, 
              // Src: (imm:i64):$val - Complexity = 3
              // Dst: (ORrr:i64 (SLLXri:i64 (ORri:i64 (SETHIi:i32 (HH22:i32 ?:i64:$val)), (HM10:i32 ?:i64:$val)), 32:i32), (ORri:i32 (SETHIi:i32 (HI22:i32 ?:i64:$val)), (LO10:i32 ?:i64:$val)))
/*4215*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 21,  TARGET_VAL(SPISD::FLUSHW),// ->4240
/*4219*/    OPC_RecordNode,   // #0 = 'flushw' chained node
/*4220*/    OPC_Scope, 9, /*->4231*/ // 2 children in Scope
/*4222*/      OPC_CheckPatternPredicate, 2, // (Subtarget.isV9())
/*4224*/      OPC_EmitMergeInputChains1_0,
/*4225*/      OPC_MorphNodeTo, TARGET_VAL(SP::FLUSHW), 0|OPFL_Chain,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (flushw) - Complexity = 3
              // Dst: (FLUSHW)
/*4231*/    /*Scope*/ 7, /*->4239*/
/*4232*/      OPC_EmitMergeInputChains1_0,
/*4233*/      OPC_MorphNodeTo, TARGET_VAL(SP::TA3), 0|OPFL_Chain,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (flushw) - Complexity = 3
              // Dst: (TA3)
/*4239*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::BR),// ->4259
/*4243*/    OPC_RecordNode,   // #0 = 'br' chained node
/*4244*/    OPC_RecordChild1, // #1 = $dst
/*4245*/    OPC_MoveChild, 1,
/*4247*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*4250*/    OPC_MoveParent,
/*4251*/    OPC_EmitMergeInputChains1_0,
/*4252*/    OPC_MorphNodeTo, TARGET_VAL(SP::BA), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (br (bb:Other):$dst) - Complexity = 3
            // Dst: (BA (bb:Other):$dst)
          /*SwitchOpcode*/ 41,  TARGET_VAL(SPISD::CMPFCC),// ->4303
/*4262*/    OPC_RecordChild0, // #0 = $src1
/*4263*/    OPC_Scope, 11, /*->4276*/ // 3 children in Scope
/*4265*/      OPC_CheckChild0Type, MVT::f32,
/*4267*/      OPC_RecordChild1, // #1 = $src2
/*4268*/      OPC_MorphNodeTo, TARGET_VAL(SP::FCMPS), 0|OPFL_GlueOutput,
                  0/*#VTs*/, 2/*#Ops*/, 0, 1, 
              // Src: (SPcmpfcc f32:f32:$src1, f32:f32:$src2) - Complexity = 3
              // Dst: (FCMPS f32:f32:$src1, f32:f32:$src2)
/*4276*/    /*Scope*/ 11, /*->4288*/
/*4277*/      OPC_CheckChild0Type, MVT::f64,
/*4279*/      OPC_RecordChild1, // #1 = $src2
/*4280*/      OPC_MorphNodeTo, TARGET_VAL(SP::FCMPD), 0|OPFL_GlueOutput,
                  0/*#VTs*/, 2/*#Ops*/, 0, 1, 
              // Src: (SPcmpfcc f64:f64:$src1, f64:f64:$src2) - Complexity = 3
              // Dst: (FCMPD f64:f64:$src1, f64:f64:$src2)
/*4288*/    /*Scope*/ 13, /*->4302*/
/*4289*/      OPC_CheckChild0Type, MVT::f128,
/*4291*/      OPC_RecordChild1, // #1 = $src2
/*4292*/      OPC_CheckPatternPredicate, 3, // (Subtarget.hasHardQuad())
/*4294*/      OPC_MorphNodeTo, TARGET_VAL(SP::FCMPQ), 0|OPFL_GlueOutput,
                  0/*#VTs*/, 2/*#Ops*/, 0, 1, 
              // Src: (SPcmpfcc f128:f128:$src1, f128:f128:$src2) - Complexity = 3
              // Dst: (FCMPQ f128:f128:$src1, f128:f128:$src2)
/*4302*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::ANY_EXTEND),// ->4321
/*4306*/    OPC_RecordChild0, // #0 = $val
/*4307*/    OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*4309*/    OPC_EmitInteger, MVT::i32, SP::I64RegsRegClassID,
/*4312*/    OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (anyext:i64 i32:i32:$val) - Complexity = 3
            // Dst: (COPY_TO_REGCLASS:i64 ?:i32:$val, I64Regs:i32)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::TRUNCATE),// ->4339
/*4324*/    OPC_RecordChild0, // #0 = $val
/*4325*/    OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*4327*/    OPC_EmitInteger, MVT::i32, SP::IntRegsRegClassID,
/*4330*/    OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (trunc:i32 i64:i64:$val) - Complexity = 3
            // Dst: (COPY_TO_REGCLASS:i32 ?:i64:$val, IntRegs:i32)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::ZERO_EXTEND),// ->4357
/*4342*/    OPC_RecordChild0, // #0 = $val
/*4343*/    OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*4345*/    OPC_EmitInteger, MVT::i32, 0, 
/*4348*/    OPC_MorphNodeTo, TARGET_VAL(SP::SRLri), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (zext:i64 i32:i32:$val) - Complexity = 3
            // Dst: (SRLri:i64 ?:i32:$val, 0:i32)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::SIGN_EXTEND),// ->4375
/*4360*/    OPC_RecordChild0, // #0 = $val
/*4361*/    OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*4363*/    OPC_EmitInteger, MVT::i32, 0, 
/*4366*/    OPC_MorphNodeTo, TARGET_VAL(SP::SRAri), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (sext:i64 i32:i32:$val) - Complexity = 3
            // Dst: (SRAri:i64 ?:i32:$val, 0:i32)
          /*SwitchOpcode*/ 20,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->4398
/*4378*/    OPC_RecordChild0, // #0 = $val
/*4379*/    OPC_MoveChild, 1,
/*4381*/    OPC_CheckValueType, MVT::i32,
/*4383*/    OPC_MoveParent,
/*4384*/    OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*4386*/    OPC_EmitInteger, MVT::i32, 0, 
/*4389*/    OPC_MorphNodeTo, TARGET_VAL(SP::SRAri), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (sext_inreg:i64 i64:i64:$val, i32:Other) - Complexity = 3
            // Dst: (SRAri:i64 ?:i64:$val, 0:i32)
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::CTPOP),// ->4424
/*4401*/    OPC_RecordChild0, // #0 = $src
/*4402*/    OPC_CheckType, MVT::i32,
/*4404*/    OPC_EmitInteger, MVT::i32, 0, 
/*4407*/    OPC_EmitNode, TARGET_VAL(SP::SLLri), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*4416*/    OPC_MorphNodeTo, TARGET_VAL(SP::POPCrr), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
            // Src: (ctpop:i32 i32:i32:$src) - Complexity = 3
            // Dst: (POPCrr:i32 (SLLri:i32 ?:i32:$src, 0:i32))
          /*SwitchOpcode*/ 35,  TARGET_VAL(SPISD::ITOF),// ->4462
/*4427*/    OPC_RecordChild0, // #0 = $src
/*4428*/    OPC_SwitchType /*3 cases */, 8,  MVT::f32,// ->4439
/*4431*/      OPC_MorphNodeTo, TARGET_VAL(SP::FITOS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (SPitof:f32 FPRegs:f32:$src) - Complexity = 3
              // Dst: (FITOS:f32 FPRegs:f32:$src)
            /*SwitchType*/ 8,  MVT::f64,// ->4449
/*4441*/      OPC_MorphNodeTo, TARGET_VAL(SP::FITOD), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (SPitof:f64 FPRegs:f32:$src) - Complexity = 3
              // Dst: (FITOD:f64 FPRegs:f32:$src)
            /*SwitchType*/ 10,  MVT::f128,// ->4461
/*4451*/      OPC_CheckPatternPredicate, 3, // (Subtarget.hasHardQuad())
/*4453*/      OPC_MorphNodeTo, TARGET_VAL(SP::FITOQ), 0,
                  1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0, 
              // Src: (SPitof:f128 FPRegs:f32:$src) - Complexity = 3
              // Dst: (FITOQ:f128 FPRegs:f32:$src)
            0, // EndSwitchType
          /*SwitchOpcode*/ 38,  TARGET_VAL(SPISD::FTOI),// ->4503
/*4465*/    OPC_RecordChild0, // #0 = $src
/*4466*/    OPC_Scope, 10, /*->4478*/ // 3 children in Scope
/*4468*/      OPC_CheckChild0Type, MVT::f32,
/*4470*/      OPC_MorphNodeTo, TARGET_VAL(SP::FSTOI), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (SPftoi:f32 FPRegs:f32:$src) - Complexity = 3
              // Dst: (FSTOI:f32 FPRegs:f32:$src)
/*4478*/    /*Scope*/ 10, /*->4489*/
/*4479*/      OPC_CheckChild0Type, MVT::f64,
/*4481*/      OPC_MorphNodeTo, TARGET_VAL(SP::FDTOI), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (SPftoi:f32 DFPRegs:f64:$src) - Complexity = 3
              // Dst: (FDTOI:f32 DFPRegs:f64:$src)
/*4489*/    /*Scope*/ 12, /*->4502*/
/*4490*/      OPC_CheckChild0Type, MVT::f128,
/*4492*/      OPC_CheckPatternPredicate, 3, // (Subtarget.hasHardQuad())
/*4494*/      OPC_MorphNodeTo, TARGET_VAL(SP::FQTOI), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (SPftoi:f32 QFPRegs:f128:$src) - Complexity = 3
              // Dst: (FQTOI:f32 QFPRegs:f128:$src)
/*4502*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 43,  TARGET_VAL(ISD::FP_EXTEND),// ->4549
/*4506*/    OPC_RecordChild0, // #0 = $src
/*4507*/    OPC_SwitchType /*2 cases */, 8,  MVT::f64,// ->4518
/*4510*/      OPC_MorphNodeTo, TARGET_VAL(SP::FSTOD), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fextend:f64 f32:f32:$src) - Complexity = 3
              // Dst: (FSTOD:f64 f32:f32:$src)
            /*SwitchType*/ 28,  MVT::f128,// ->4548
/*4520*/      OPC_Scope, 12, /*->4534*/ // 2 children in Scope
/*4522*/        OPC_CheckChild0Type, MVT::f32,
/*4524*/        OPC_CheckPatternPredicate, 3, // (Subtarget.hasHardQuad())
/*4526*/        OPC_MorphNodeTo, TARGET_VAL(SP::FSTOQ), 0,
                    1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0, 
                // Src: (fextend:f128 f32:f32:$src) - Complexity = 3
                // Dst: (FSTOQ:f128 f32:f32:$src)
/*4534*/      /*Scope*/ 12, /*->4547*/
/*4535*/        OPC_CheckChild0Type, MVT::f64,
/*4537*/        OPC_CheckPatternPredicate, 3, // (Subtarget.hasHardQuad())
/*4539*/        OPC_MorphNodeTo, TARGET_VAL(SP::FDTOQ), 0,
                    1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0, 
                // Src: (fextend:f128 f64:f64:$src) - Complexity = 3
                // Dst: (FDTOQ:f128 f64:f64:$src)
/*4547*/      0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 43,  TARGET_VAL(ISD::FP_ROUND),// ->4595
/*4552*/    OPC_RecordChild0, // #0 = $src
/*4553*/    OPC_SwitchType /*2 cases */, 26,  MVT::f32,// ->4582
/*4556*/      OPC_Scope, 10, /*->4568*/ // 2 children in Scope
/*4558*/        OPC_CheckChild0Type, MVT::f64,
/*4560*/        OPC_MorphNodeTo, TARGET_VAL(SP::FDTOS), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fround:f32 f64:f64:$src) - Complexity = 3
                // Dst: (FDTOS:f32 f64:f64:$src)
/*4568*/      /*Scope*/ 12, /*->4581*/
/*4569*/        OPC_CheckChild0Type, MVT::f128,
/*4571*/        OPC_CheckPatternPredicate, 3, // (Subtarget.hasHardQuad())
/*4573*/        OPC_MorphNodeTo, TARGET_VAL(SP::FQTOS), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fround:f32 f128:f128:$src) - Complexity = 3
                // Dst: (FQTOS:f32 f128:f128:$src)
/*4581*/      0, /*End of Scope*/
            /*SwitchType*/ 10,  MVT::f64,// ->4594
/*4584*/      OPC_CheckPatternPredicate, 3, // (Subtarget.hasHardQuad())
/*4586*/      OPC_MorphNodeTo, TARGET_VAL(SP::FQTOD), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fround:f64 f128:f128:$src) - Complexity = 3
              // Dst: (FQTOD:f64 f128:f128:$src)
            0, // EndSwitchType
          /*SwitchOpcode*/ 37,  TARGET_VAL(ISD::FNEG),// ->4635
/*4598*/    OPC_RecordChild0, // #0 = $src
/*4599*/    OPC_SwitchType /*3 cases */, 8,  MVT::f32,// ->4610
/*4602*/      OPC_MorphNodeTo, TARGET_VAL(SP::FNEGS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fneg:f32 f32:f32:$src) - Complexity = 3
              // Dst: (FNEGS:f32 f32:f32:$src)
            /*SwitchType*/ 10,  MVT::f64,// ->4622
/*4612*/      OPC_CheckPatternPredicate, 2, // (Subtarget.isV9())
/*4614*/      OPC_MorphNodeTo, TARGET_VAL(SP::FNEGD), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fneg:f64 f64:f64:$src) - Complexity = 3
              // Dst: (FNEGD:f64 f64:f64:$src)
            /*SwitchType*/ 10,  MVT::f128,// ->4634
/*4624*/      OPC_CheckPatternPredicate, 2, // (Subtarget.isV9())
/*4626*/      OPC_MorphNodeTo, TARGET_VAL(SP::FNEGQ), 0,
                  1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0, 
              // Src: (fneg:f128 f128:f128:$src) - Complexity = 3
              // Dst: (FNEGQ:f128 f128:f128:$src)
            0, // EndSwitchType
          /*SwitchOpcode*/ 37,  TARGET_VAL(ISD::FABS),// ->4675
/*4638*/    OPC_RecordChild0, // #0 = $src
/*4639*/    OPC_SwitchType /*3 cases */, 8,  MVT::f32,// ->4650
/*4642*/      OPC_MorphNodeTo, TARGET_VAL(SP::FABSS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fabs:f32 f32:f32:$src) - Complexity = 3
              // Dst: (FABSS:f32 f32:f32:$src)
            /*SwitchType*/ 10,  MVT::f64,// ->4662
/*4652*/      OPC_CheckPatternPredicate, 2, // (Subtarget.isV9())
/*4654*/      OPC_MorphNodeTo, TARGET_VAL(SP::FABSD), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fabs:f64 f64:f64:$src) - Complexity = 3
              // Dst: (FABSD:f64 f64:f64:$src)
            /*SwitchType*/ 10,  MVT::f128,// ->4674
/*4664*/      OPC_CheckPatternPredicate, 2, // (Subtarget.isV9())
/*4666*/      OPC_MorphNodeTo, TARGET_VAL(SP::FABSQ), 0,
                  1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0, 
              // Src: (fabs:f128 f128:f128:$src) - Complexity = 3
              // Dst: (FABSQ:f128 f128:f128:$src)
            0, // EndSwitchType
          /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::FSQRT),// ->4713
/*4678*/    OPC_RecordChild0, // #0 = $src
/*4679*/    OPC_SwitchType /*3 cases */, 8,  MVT::f32,// ->4690
/*4682*/      OPC_MorphNodeTo, TARGET_VAL(SP::FSQRTS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fsqrt:f32 f32:f32:$src) - Complexity = 3
              // Dst: (FSQRTS:f32 f32:f32:$src)
            /*SwitchType*/ 8,  MVT::f64,// ->4700
/*4692*/      OPC_MorphNodeTo, TARGET_VAL(SP::FSQRTD), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fsqrt:f64 f64:f64:$src) - Complexity = 3
              // Dst: (FSQRTD:f64 f64:f64:$src)
            /*SwitchType*/ 10,  MVT::f128,// ->4712
/*4702*/      OPC_CheckPatternPredicate, 3, // (Subtarget.hasHardQuad())
/*4704*/      OPC_MorphNodeTo, TARGET_VAL(SP::FSQRTQ), 0,
                  1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0, 
              // Src: (fsqrt:f128 f128:f128:$src) - Complexity = 3
              // Dst: (FSQRTQ:f128 f128:f128:$src)
            0, // EndSwitchType
          /*SwitchOpcode*/ 39,  TARGET_VAL(ISD::FADD),// ->4755
/*4716*/    OPC_RecordChild0, // #0 = $src1
/*4717*/    OPC_RecordChild1, // #1 = $src2
/*4718*/    OPC_SwitchType /*3 cases */, 9,  MVT::f32,// ->4730
/*4721*/      OPC_MorphNodeTo, TARGET_VAL(SP::FADDS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fadd:f32 f32:f32:$src1, f32:f32:$src2) - Complexity = 3
              // Dst: (FADDS:f32 f32:f32:$src1, f32:f32:$src2)
            /*SwitchType*/ 9,  MVT::f64,// ->4741
/*4732*/      OPC_MorphNodeTo, TARGET_VAL(SP::FADDD), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fadd:f64 f64:f64:$src1, f64:f64:$src2) - Complexity = 3
              // Dst: (FADDD:f64 f64:f64:$src1, f64:f64:$src2)
            /*SwitchType*/ 11,  MVT::f128,// ->4754
/*4743*/      OPC_CheckPatternPredicate, 3, // (Subtarget.hasHardQuad())
/*4745*/      OPC_MorphNodeTo, TARGET_VAL(SP::FADDQ), 0,
                  1/*#VTs*/, MVT::f128, 2/*#Ops*/, 0, 1, 
              // Src: (fadd:f128 f128:f128:$src1, f128:f128:$src2) - Complexity = 3
              // Dst: (FADDQ:f128 f128:f128:$src1, f128:f128:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 39,  TARGET_VAL(ISD::FSUB),// ->4797
/*4758*/    OPC_RecordChild0, // #0 = $src1
/*4759*/    OPC_RecordChild1, // #1 = $src2
/*4760*/    OPC_SwitchType /*3 cases */, 9,  MVT::f32,// ->4772
/*4763*/      OPC_MorphNodeTo, TARGET_VAL(SP::FSUBS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fsub:f32 f32:f32:$src1, f32:f32:$src2) - Complexity = 3
              // Dst: (FSUBS:f32 f32:f32:$src1, f32:f32:$src2)
            /*SwitchType*/ 9,  MVT::f64,// ->4783
/*4774*/      OPC_MorphNodeTo, TARGET_VAL(SP::FSUBD), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fsub:f64 f64:f64:$src1, f64:f64:$src2) - Complexity = 3
              // Dst: (FSUBD:f64 f64:f64:$src1, f64:f64:$src2)
            /*SwitchType*/ 11,  MVT::f128,// ->4796
/*4785*/      OPC_CheckPatternPredicate, 3, // (Subtarget.hasHardQuad())
/*4787*/      OPC_MorphNodeTo, TARGET_VAL(SP::FSUBQ), 0,
                  1/*#VTs*/, MVT::f128, 2/*#Ops*/, 0, 1, 
              // Src: (fsub:f128 f128:f128:$src1, f128:f128:$src2) - Complexity = 3
              // Dst: (FSUBQ:f128 f128:f128:$src1, f128:f128:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 39,  TARGET_VAL(ISD::FDIV),// ->4839
/*4800*/    OPC_RecordChild0, // #0 = $src1
/*4801*/    OPC_RecordChild1, // #1 = $src2
/*4802*/    OPC_SwitchType /*3 cases */, 9,  MVT::f32,// ->4814
/*4805*/      OPC_MorphNodeTo, TARGET_VAL(SP::FDIVS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fdiv:f32 f32:f32:$src1, f32:f32:$src2) - Complexity = 3
              // Dst: (FDIVS:f32 f32:f32:$src1, f32:f32:$src2)
            /*SwitchType*/ 9,  MVT::f64,// ->4825
/*4816*/      OPC_MorphNodeTo, TARGET_VAL(SP::FDIVD), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fdiv:f64 f64:f64:$src1, f64:f64:$src2) - Complexity = 3
              // Dst: (FDIVD:f64 f64:f64:$src1, f64:f64:$src2)
            /*SwitchType*/ 11,  MVT::f128,// ->4838
/*4827*/      OPC_CheckPatternPredicate, 3, // (Subtarget.hasHardQuad())
/*4829*/      OPC_MorphNodeTo, TARGET_VAL(SP::FDIVQ), 0,
                  1/*#VTs*/, MVT::f128, 2/*#Ops*/, 0, 1, 
              // Src: (fdiv:f128 f128:f128:$src1, f128:f128:$src2) - Complexity = 3
              // Dst: (FDIVQ:f128 f128:f128:$src1, f128:f128:$src2)
            0, // EndSwitchType
          0, // EndSwitchOpcode
    0
  }; // Total Array size is 4841 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 90
  // #OPC_RecordNode                     = 14
  // #OPC_RecordChild                    = 125
  // #OPC_RecordMemRef                   = 2
  // #OPC_CaptureGlueInput               = 11
  // #OPC_MoveChild                      = 67
  // #OPC_MoveParent                     = 85
  // #OPC_CheckSame                      = 0
  // #OPC_CheckPatternPredicate          = 99
  // #OPC_CheckPredicate                 = 85
  // #OPC_CheckOpcode                    = 51
  // #OPC_SwitchOpcode                   = 6
  // #OPC_CheckType                      = 70
  // #OPC_SwitchType                     = 32
  // #OPC_CheckChildType                 = 22
  // #OPC_CheckInteger                   = 10
  // #OPC_CheckCondCode                  = 0
  // #OPC_CheckValueType                 = 1
  // #OPC_CheckComplexPat                = 77
  // #OPC_CheckAndImm                    = 1
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 0
  // #OPC_EmitInteger                    = 6
  // #OPC_EmitStringInteger              = 2
  // #OPC_EmitRegister                   = 9
  // #OPC_EmitConvertToTarget            = 55
  // #OPC_EmitMergeInputChains           = 87
  // #OPC_EmitCopyToReg                  = 0
  // #OPC_EmitNode                       = 9
  // #OPC_EmitNodeXForm                  = 22
  // #OPC_MarkGlueResults                = 0
  // #OPC_CompleteMatch                  = 0
  // #OPC_MorphNodeTo                    = 246

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}

virtual bool CheckPatternPredicate(unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: return (Subtarget.is64Bit());
  case 1: return (Subtarget.isV9()) && (Subtarget.hasHardQuad());
  case 2: return (Subtarget.isV9());
  case 3: return (Subtarget.hasHardQuad());
  }
}

virtual bool CheckNodePredicate(SDNode *Node,
                                unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: { // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 1: { // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 2: { // Predicate_truncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 3: { // Predicate_truncstorei8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 4: { // Predicate_truncstorei16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 5: { // Predicate_truncstorei32
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 6: { // Predicate_unindexedload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 7: { // Predicate_sextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::SEXTLOAD;

  }
  case 8: { // Predicate_sextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 9: { // Predicate_sextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 10: { // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 11: { // Predicate_zextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 12: { // Predicate_zextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 13: { // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 14: { // Predicate_extload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

  }
  case 15: { // Predicate_extloadi1
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

  }
  case 16: { // Predicate_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 17: { // Predicate_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 18: { // Predicate_zextloadi1
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

  }
  case 19: { // Predicate_zextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 20: { // Predicate_extloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 21: { // Predicate_sextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 22: { // Predicate_simm13
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return isInt<13>(N->getSExtValue()); 
  }
  case 23: { // Predicate_simm11
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return isInt<11>(N->getSExtValue()); 
  }
  case 24: { // Predicate_SETHIimm
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isShiftedUInt<22, 10>(N->getZExtValue());

  }
  case 25: { // Predicate_uimm32
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return isUInt<32>(N->getZExtValue()); 
  }
  case 26: { // Predicate_nimm33
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  int64_t Imm = N->getSExtValue();
  return Imm < 0 && isInt<33>(Imm);

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
    Result.resize(NextRes+2);
    return SelectADDRrr(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 1:
    Result.resize(NextRes+2);
    return SelectADDRri(N, Result[NextRes+0].first, Result[NextRes+1].first);
  }
}

virtual SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) {
  switch (XFormNo) {
  default: llvm_unreachable("Invalid xform # in table?");
  case 0: {  // as_i32imm
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(N->getSExtValue(), MVT::i32);

  }
  case 1: {  // HI22
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: shift the immediate value down into the low bits.
  return CurDAG->getTargetConstant((unsigned)N->getZExtValue() >> 10, MVT::i32);

  }
  case 2: {  // LO10
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant((unsigned)N->getZExtValue() & 1023,
                                   MVT::i32);

  }
  case 3: {  // HIX22
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Val = (~N->getZExtValue() >> 10) & ((1u << 22) - 1);
  return CurDAG->getTargetConstant(Val, MVT::i32);

  }
  case 4: {  // LOX10
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(~(~N->getZExtValue() & 0x3ff), MVT::i32);

  }
  case 5: {  // HH22
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Val = (N->getZExtValue() >> 42) & ((1u << 22) - 1);
  return CurDAG->getTargetConstant(Val, MVT::i32);

  }
  case 6: {  // HM10
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Val = (N->getZExtValue() >> 32) & ((1u << 10) - 1);
  return CurDAG->getTargetConstant(Val, MVT::i32);

  }
  }
}

