/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*DAG Instruction Selector for the PPC target                                 *|
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
/*0*/     OPC_SwitchOpcode /*129 cases */, 33,  TARGET_VAL(ISD::PREFETCH),// ->37
/*4*/       OPC_RecordMemRef,
/*5*/       OPC_RecordNode,   // #0 = 'prefetch' chained node
/*6*/       OPC_RecordChild1, // #1 = $dst
/*7*/       OPC_MoveChild, 2,
/*9*/       OPC_CheckInteger, 0, 
/*11*/      OPC_CheckType, MVT::i32,
/*13*/      OPC_MoveParent,
/*14*/      OPC_MoveChild, 3,
/*16*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19*/      OPC_MoveParent,
/*20*/      OPC_MoveChild, 4,
/*22*/      OPC_CheckInteger, 1, 
/*24*/      OPC_MoveParent,
/*25*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*28*/      OPC_EmitMergeInputChains1_0,
/*29*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DCBT), 0|OPFL_Chain|OPFL_MemRefs,
                0/*#VTs*/, 2/*#Ops*/, 2, 3, 
            // Src: (prefetch xoaddr:iPTR:$dst, 0:i32, (imm:i32), 1:i32) - Complexity = 25
            // Dst: (DCBT xoaddr:iPTR:$dst)
          /*SwitchOpcode*/ 13|128,5/*653*/,  TARGET_VAL(ISD::INTRINSIC_VOID),// ->694
/*41*/      OPC_RecordNode,   // #0 = 'intrinsic_void' chained node
/*42*/      OPC_MoveChild, 1,
/*44*/      OPC_Scope, 17, /*->63*/ // 22 children in Scope
/*46*/        OPC_CheckInteger, 120|128,16/*2168*/, 
/*49*/        OPC_MoveParent,
/*50*/        OPC_RecordChild2, // #1 = $dst
/*51*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*54*/        OPC_EmitMergeInputChains1_0,
/*55*/        OPC_MorphNodeTo, TARGET_VAL(PPC::DCBA), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 2168:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBA xoaddr:iPTR:$dst)
/*63*/      /*Scope*/ 17, /*->81*/
/*64*/        OPC_CheckInteger, 121|128,16/*2169*/, 
/*67*/        OPC_MoveParent,
/*68*/        OPC_RecordChild2, // #1 = $dst
/*69*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*72*/        OPC_EmitMergeInputChains1_0,
/*73*/        OPC_MorphNodeTo, TARGET_VAL(PPC::DCBF), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 2169:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBF xoaddr:iPTR:$dst)
/*81*/      /*Scope*/ 17, /*->99*/
/*82*/        OPC_CheckInteger, 122|128,16/*2170*/, 
/*85*/        OPC_MoveParent,
/*86*/        OPC_RecordChild2, // #1 = $dst
/*87*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*90*/        OPC_EmitMergeInputChains1_0,
/*91*/        OPC_MorphNodeTo, TARGET_VAL(PPC::DCBI), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 2170:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBI xoaddr:iPTR:$dst)
/*99*/      /*Scope*/ 17, /*->117*/
/*100*/       OPC_CheckInteger, 123|128,16/*2171*/, 
/*103*/       OPC_MoveParent,
/*104*/       OPC_RecordChild2, // #1 = $dst
/*105*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*108*/       OPC_EmitMergeInputChains1_0,
/*109*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBST), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 2171:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBST xoaddr:iPTR:$dst)
/*117*/     /*Scope*/ 17, /*->135*/
/*118*/       OPC_CheckInteger, 124|128,16/*2172*/, 
/*121*/       OPC_MoveParent,
/*122*/       OPC_RecordChild2, // #1 = $dst
/*123*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*126*/       OPC_EmitMergeInputChains1_0,
/*127*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBT), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 2172:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBT xoaddr:iPTR:$dst)
/*135*/     /*Scope*/ 17, /*->153*/
/*136*/       OPC_CheckInteger, 125|128,16/*2173*/, 
/*139*/       OPC_MoveParent,
/*140*/       OPC_RecordChild2, // #1 = $dst
/*141*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*144*/       OPC_EmitMergeInputChains1_0,
/*145*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBTST), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 2173:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBTST xoaddr:iPTR:$dst)
/*153*/     /*Scope*/ 17, /*->171*/
/*154*/       OPC_CheckInteger, 126|128,16/*2174*/, 
/*157*/       OPC_MoveParent,
/*158*/       OPC_RecordChild2, // #1 = $dst
/*159*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*162*/       OPC_EmitMergeInputChains1_0,
/*163*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBZ), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 2174:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBZ xoaddr:iPTR:$dst)
/*171*/     /*Scope*/ 17, /*->189*/
/*172*/       OPC_CheckInteger, 127|128,16/*2175*/, 
/*175*/       OPC_MoveParent,
/*176*/       OPC_RecordChild2, // #1 = $dst
/*177*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*180*/       OPC_EmitMergeInputChains1_0,
/*181*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBZL), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 2175:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBZL xoaddr:iPTR:$dst)
/*189*/     /*Scope*/ 21, /*->211*/
/*190*/       OPC_CheckInteger, 116|128,15/*2036*/, 
/*193*/       OPC_MoveParent,
/*194*/       OPC_RecordChild2, // #1 = $rS
/*195*/       OPC_RecordChild3, // #2 = $dst
/*196*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*198*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*201*/       OPC_EmitMergeInputChains1_0,
/*202*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVEBX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 2036:iPTR, v16i8:v16i8:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVEBX v16i8:v16i8:$rS, xoaddr:iPTR:$dst)
/*211*/     /*Scope*/ 21, /*->233*/
/*212*/       OPC_CheckInteger, 117|128,15/*2037*/, 
/*215*/       OPC_MoveParent,
/*216*/       OPC_RecordChild2, // #1 = $rS
/*217*/       OPC_RecordChild3, // #2 = $dst
/*218*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*220*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*223*/       OPC_EmitMergeInputChains1_0,
/*224*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVEHX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 2037:iPTR, v8i16:v8i16:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVEHX v8i16:v8i16:$rS, xoaddr:iPTR:$dst)
/*233*/     /*Scope*/ 21, /*->255*/
/*234*/       OPC_CheckInteger, 118|128,15/*2038*/, 
/*237*/       OPC_MoveParent,
/*238*/       OPC_RecordChild2, // #1 = $rS
/*239*/       OPC_RecordChild3, // #2 = $dst
/*240*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*242*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*245*/       OPC_EmitMergeInputChains1_0,
/*246*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVEWX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 2038:iPTR, v4i32:v4i32:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVEWX v4i32:v4i32:$rS, xoaddr:iPTR:$dst)
/*255*/     /*Scope*/ 21, /*->277*/
/*256*/       OPC_CheckInteger, 119|128,15/*2039*/, 
/*259*/       OPC_MoveParent,
/*260*/       OPC_RecordChild2, // #1 = $rS
/*261*/       OPC_RecordChild3, // #2 = $dst
/*262*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*264*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*267*/       OPC_EmitMergeInputChains1_0,
/*268*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 2039:iPTR, v4i32:v4i32:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVX v4i32:v4i32:$rS, xoaddr:iPTR:$dst)
/*277*/     /*Scope*/ 21, /*->299*/
/*278*/       OPC_CheckInteger, 120|128,15/*2040*/, 
/*281*/       OPC_MoveParent,
/*282*/       OPC_RecordChild2, // #1 = $rS
/*283*/       OPC_RecordChild3, // #2 = $dst
/*284*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*286*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*289*/       OPC_EmitMergeInputChains1_0,
/*290*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVXL), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 2040:iPTR, v4i32:v4i32:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVXL v4i32:v4i32:$rS, xoaddr:iPTR:$dst)
/*299*/     /*Scope*/ 35, /*->335*/
/*300*/       OPC_CheckInteger, 101|128,15/*2021*/, 
/*303*/       OPC_MoveParent,
/*304*/       OPC_RecordChild2, // #1 = $STRM
/*305*/       OPC_MoveChild, 2,
/*307*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*310*/       OPC_MoveParent,
/*311*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*313*/       OPC_EmitMergeInputChains1_0,
/*314*/       OPC_EmitInteger, MVT::i32, 0, 
/*317*/       OPC_EmitConvertToTarget, 1,
/*319*/       OPC_EmitInteger, MVT::i32, 0, 
/*322*/       OPC_EmitInteger, MVT::i32, 0, 
/*325*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DSS), 0|OPFL_Chain,
                  0/*#VTs*/, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (intrinsic_void 2021:iPTR, (imm:i32):$STRM) - Complexity = 11
              // Dst: (DSS 0:i32, (imm:i32):$STRM, 0:i32, 0:i32)
/*335*/     /*Scope*/ 65, /*->401*/
/*336*/       OPC_CheckInteger, 103|128,15/*2023*/, 
/*339*/       OPC_MoveParent,
/*340*/       OPC_RecordChild2, // #1 = $rA
/*341*/       OPC_Scope, 28, /*->371*/ // 2 children in Scope
/*343*/         OPC_CheckChild2Type, MVT::i32,
/*345*/         OPC_RecordChild3, // #2 = $rB
/*346*/         OPC_RecordChild4, // #3 = $STRM
/*347*/         OPC_MoveChild, 4,
/*349*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*352*/         OPC_MoveParent,
/*353*/         OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*355*/         OPC_EmitMergeInputChains1_0,
/*356*/         OPC_EmitInteger, MVT::i32, 0, 
/*359*/         OPC_EmitConvertToTarget, 3,
/*361*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DST), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 2023:iPTR, i32:i32:$rA, i32:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DST 0:i32, (imm:i32):$STRM, ?:i32:$rA, ?:i32:$rB)
/*371*/       /*Scope*/ 28, /*->400*/
/*372*/         OPC_CheckChild2Type, MVT::i64,
/*374*/         OPC_RecordChild3, // #2 = $rB
/*375*/         OPC_RecordChild4, // #3 = $STRM
/*376*/         OPC_MoveChild, 4,
/*378*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*381*/         OPC_MoveParent,
/*382*/         OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*384*/         OPC_EmitMergeInputChains1_0,
/*385*/         OPC_EmitInteger, MVT::i32, 0, 
/*388*/         OPC_EmitConvertToTarget, 3,
/*390*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DST64), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 2023:iPTR, i64:i64:$rA, i32:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DST64 0:i32, (imm:i32):$STRM, ?:i64:$rA, ?:i32:$rB)
/*400*/       0, /*End of Scope*/
/*401*/     /*Scope*/ 65, /*->467*/
/*402*/       OPC_CheckInteger, 106|128,15/*2026*/, 
/*405*/       OPC_MoveParent,
/*406*/       OPC_RecordChild2, // #1 = $rA
/*407*/       OPC_Scope, 28, /*->437*/ // 2 children in Scope
/*409*/         OPC_CheckChild2Type, MVT::i32,
/*411*/         OPC_RecordChild3, // #2 = $rB
/*412*/         OPC_RecordChild4, // #3 = $STRM
/*413*/         OPC_MoveChild, 4,
/*415*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*418*/         OPC_MoveParent,
/*419*/         OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*421*/         OPC_EmitMergeInputChains1_0,
/*422*/         OPC_EmitInteger, MVT::i32, 1, 
/*425*/         OPC_EmitConvertToTarget, 3,
/*427*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTT), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 2026:iPTR, i32:i32:$rA, i32:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTT 1:i32, (imm:i32):$STRM, ?:i32:$rA, ?:i32:$rB)
/*437*/       /*Scope*/ 28, /*->466*/
/*438*/         OPC_CheckChild2Type, MVT::i64,
/*440*/         OPC_RecordChild3, // #2 = $rB
/*441*/         OPC_RecordChild4, // #3 = $STRM
/*442*/         OPC_MoveChild, 4,
/*444*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*447*/         OPC_MoveParent,
/*448*/         OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*450*/         OPC_EmitMergeInputChains1_0,
/*451*/         OPC_EmitInteger, MVT::i32, 1, 
/*454*/         OPC_EmitConvertToTarget, 3,
/*456*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTT64), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 2026:iPTR, i64:i64:$rA, i32:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTT64 1:i32, (imm:i32):$STRM, ?:i64:$rA, ?:i32:$rB)
/*466*/       0, /*End of Scope*/
/*467*/     /*Scope*/ 65, /*->533*/
/*468*/       OPC_CheckInteger, 104|128,15/*2024*/, 
/*471*/       OPC_MoveParent,
/*472*/       OPC_RecordChild2, // #1 = $rA
/*473*/       OPC_Scope, 28, /*->503*/ // 2 children in Scope
/*475*/         OPC_CheckChild2Type, MVT::i32,
/*477*/         OPC_RecordChild3, // #2 = $rB
/*478*/         OPC_RecordChild4, // #3 = $STRM
/*479*/         OPC_MoveChild, 4,
/*481*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*484*/         OPC_MoveParent,
/*485*/         OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*487*/         OPC_EmitMergeInputChains1_0,
/*488*/         OPC_EmitInteger, MVT::i32, 0, 
/*491*/         OPC_EmitConvertToTarget, 3,
/*493*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTST), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 2024:iPTR, i32:i32:$rA, i32:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTST 0:i32, (imm:i32):$STRM, ?:i32:$rA, ?:i32:$rB)
/*503*/       /*Scope*/ 28, /*->532*/
/*504*/         OPC_CheckChild2Type, MVT::i64,
/*506*/         OPC_RecordChild3, // #2 = $rB
/*507*/         OPC_RecordChild4, // #3 = $STRM
/*508*/         OPC_MoveChild, 4,
/*510*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*513*/         OPC_MoveParent,
/*514*/         OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*516*/         OPC_EmitMergeInputChains1_0,
/*517*/         OPC_EmitInteger, MVT::i32, 0, 
/*520*/         OPC_EmitConvertToTarget, 3,
/*522*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTST64), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 2024:iPTR, i64:i64:$rA, i32:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTST64 0:i32, (imm:i32):$STRM, ?:i64:$rA, ?:i32:$rB)
/*532*/       0, /*End of Scope*/
/*533*/     /*Scope*/ 65, /*->599*/
/*534*/       OPC_CheckInteger, 105|128,15/*2025*/, 
/*537*/       OPC_MoveParent,
/*538*/       OPC_RecordChild2, // #1 = $rA
/*539*/       OPC_Scope, 28, /*->569*/ // 2 children in Scope
/*541*/         OPC_CheckChild2Type, MVT::i32,
/*543*/         OPC_RecordChild3, // #2 = $rB
/*544*/         OPC_RecordChild4, // #3 = $STRM
/*545*/         OPC_MoveChild, 4,
/*547*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*550*/         OPC_MoveParent,
/*551*/         OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*553*/         OPC_EmitMergeInputChains1_0,
/*554*/         OPC_EmitInteger, MVT::i32, 1, 
/*557*/         OPC_EmitConvertToTarget, 3,
/*559*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTSTT), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 2025:iPTR, i32:i32:$rA, i32:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTSTT 1:i32, (imm:i32):$STRM, ?:i32:$rA, ?:i32:$rB)
/*569*/       /*Scope*/ 28, /*->598*/
/*570*/         OPC_CheckChild2Type, MVT::i64,
/*572*/         OPC_RecordChild3, // #2 = $rB
/*573*/         OPC_RecordChild4, // #3 = $STRM
/*574*/         OPC_MoveChild, 4,
/*576*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*579*/         OPC_MoveParent,
/*580*/         OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*582*/         OPC_EmitMergeInputChains1_0,
/*583*/         OPC_EmitInteger, MVT::i32, 1, 
/*586*/         OPC_EmitConvertToTarget, 3,
/*588*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTSTT64), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 2025:iPTR, i64:i64:$rA, i32:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTSTT64 1:i32, (imm:i32):$STRM, ?:i64:$rA, ?:i32:$rB)
/*598*/       0, /*End of Scope*/
/*599*/     /*Scope*/ 15, /*->615*/
/*600*/       OPC_CheckInteger, 2|128,17/*2178*/, 
/*603*/       OPC_MoveParent,
/*604*/       OPC_EmitMergeInputChains1_0,
/*605*/       OPC_EmitInteger, MVT::i32, 0, 
/*608*/       OPC_MorphNodeTo, TARGET_VAL(PPC::SYNC), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (intrinsic_void 2178:iPTR) - Complexity = 8
              // Dst: (SYNC 0:i32)
/*615*/     /*Scope*/ 31, /*->647*/
/*616*/       OPC_CheckInteger, 1|128,17/*2177*/, 
/*619*/       OPC_MoveParent,
/*620*/       OPC_RecordChild2, // #1 = $rS
/*621*/       OPC_Scope, 11, /*->634*/ // 2 children in Scope
/*623*/         OPC_CheckChild2Type, MVT::i32,
/*625*/         OPC_EmitMergeInputChains1_0,
/*626*/         OPC_MorphNodeTo, TARGET_VAL(PPC::MTCTRloop), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_void 2177:iPTR, i32:i32:$rS) - Complexity = 8
                // Dst: (MTCTRloop:i32 i32:i32:$rS)
/*634*/       /*Scope*/ 11, /*->646*/
/*635*/         OPC_CheckChild2Type, MVT::i64,
/*637*/         OPC_EmitMergeInputChains1_0,
/*638*/         OPC_MorphNodeTo, TARGET_VAL(PPC::MTCTR8loop), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (intrinsic_void 2177:iPTR, i64:i64:$rS) - Complexity = 8
                // Dst: (MTCTR8loop:i64 i64:i64:$rS)
/*646*/       0, /*End of Scope*/
/*647*/     /*Scope*/ 15, /*->663*/
/*648*/       OPC_CheckInteger, 115|128,15/*2035*/, 
/*651*/       OPC_MoveParent,
/*652*/       OPC_RecordChild2, // #1 = $vB
/*653*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*655*/       OPC_EmitMergeInputChains1_0,
/*656*/       OPC_MorphNodeTo, TARGET_VAL(PPC::MTVSCR), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (intrinsic_void 2035:iPTR, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (MTVSCR v4i32:v4i32:$vB)
/*663*/     /*Scope*/ 29, /*->693*/
/*664*/       OPC_CheckInteger, 102|128,15/*2022*/, 
/*667*/       OPC_MoveParent,
/*668*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*670*/       OPC_EmitMergeInputChains1_0,
/*671*/       OPC_EmitInteger, MVT::i32, 1, 
/*674*/       OPC_EmitInteger, MVT::i32, 0, 
/*677*/       OPC_EmitInteger, MVT::i32, 0, 
/*680*/       OPC_EmitInteger, MVT::i32, 0, 
/*683*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DSSALL), 0|OPFL_Chain,
                  0/*#VTs*/, 4/*#Ops*/, 1, 2, 3, 4, 
              // Src: (intrinsic_void 2022:iPTR) - Complexity = 8
              // Dst: (DSSALL 1:i32, 0:i32, 0:i32, 0:i32)
/*693*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 83|128,4/*595*/,  TARGET_VAL(ISD::ADD),// ->1293
/*698*/     OPC_Scope, 49|128,1/*177*/, /*->878*/ // 3 children in Scope
/*701*/       OPC_RecordChild0, // #0 = $rA
/*702*/       OPC_MoveChild, 1,
/*704*/       OPC_SwitchOpcode /*2 cases */, 24,  TARGET_VAL(PPCISD::Lo),// ->732
/*708*/         OPC_RecordChild0, // #1 = $sym
/*709*/         OPC_MoveChild, 0,
/*711*/         OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*714*/         OPC_MoveParent,
/*715*/         OPC_MoveChild, 1,
/*717*/         OPC_CheckInteger, 0, 
/*719*/         OPC_MoveParent,
/*720*/         OPC_MoveParent,
/*721*/         OPC_CheckType, MVT::i32,
/*723*/         OPC_MorphNodeTo, TARGET_VAL(PPC::LA), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 i32:i32:$rA, (PPClo:i32 (tglobaladdr:i32):$sym, 0:i32)) - Complexity = 14
                // Dst: (LA:i32 i32:i32:$rA, (tglobaladdr:i32):$sym)
              /*SwitchOpcode*/ 13|128,1/*141*/,  TARGET_VAL(PPCISD::Hi),// ->877
/*736*/         OPC_RecordChild0, // #1 = $g
/*737*/         OPC_MoveChild, 0,
/*739*/         OPC_SwitchOpcode /*4 cases */, 31,  TARGET_VAL(ISD::TargetGlobalAddress),// ->774
/*743*/           OPC_MoveParent,
/*744*/           OPC_MoveChild, 1,
/*746*/           OPC_CheckInteger, 0, 
/*748*/           OPC_MoveParent,
/*749*/           OPC_MoveParent,
/*750*/           OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->762
/*753*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 i32:i32:$in, (PPChi:i32 (tglobaladdr:i32):$g, 0:i32)) - Complexity = 14
                    // Dst: (ADDIS:i32 ?:i32:$in, (tglobaladdr:i32):$g)
                  /*SwitchType*/ 9,  MVT::i64,// ->773
/*764*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 i64:i64:$in, (PPChi:i64 (tglobaladdr:i64):$g, 0:i64)) - Complexity = 14
                    // Dst: (ADDIS8:i64 ?:i64:$in, (tglobaladdr:i64):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetConstantPool),// ->808
/*777*/           OPC_MoveParent,
/*778*/           OPC_MoveChild, 1,
/*780*/           OPC_CheckInteger, 0, 
/*782*/           OPC_MoveParent,
/*783*/           OPC_MoveParent,
/*784*/           OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->796
/*787*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 i32:i32:$in, (PPChi:i32 (tconstpool:i32):$g, 0:i32)) - Complexity = 14
                    // Dst: (ADDIS:i32 ?:i32:$in, (tconstpool:i32):$g)
                  /*SwitchType*/ 9,  MVT::i64,// ->807
/*798*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 i64:i64:$in, (PPChi:i64 (tconstpool:i64):$g, 0:i64)) - Complexity = 14
                    // Dst: (ADDIS8:i64 ?:i64:$in, (tconstpool:i64):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetJumpTable),// ->842
/*811*/           OPC_MoveParent,
/*812*/           OPC_MoveChild, 1,
/*814*/           OPC_CheckInteger, 0, 
/*816*/           OPC_MoveParent,
/*817*/           OPC_MoveParent,
/*818*/           OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->830
/*821*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 i32:i32:$in, (PPChi:i32 (tjumptable:i32):$g, 0:i32)) - Complexity = 14
                    // Dst: (ADDIS:i32 ?:i32:$in, (tjumptable:i32):$g)
                  /*SwitchType*/ 9,  MVT::i64,// ->841
/*832*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 i64:i64:$in, (PPChi:i64 (tjumptable:i64):$g, 0:i64)) - Complexity = 14
                    // Dst: (ADDIS8:i64 ?:i64:$in, (tjumptable:i64):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetBlockAddress),// ->876
/*845*/           OPC_MoveParent,
/*846*/           OPC_MoveChild, 1,
/*848*/           OPC_CheckInteger, 0, 
/*850*/           OPC_MoveParent,
/*851*/           OPC_MoveParent,
/*852*/           OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->864
/*855*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 i32:i32:$in, (PPChi:i32 (tblockaddress:i32):$g, 0:i32)) - Complexity = 14
                    // Dst: (ADDIS:i32 ?:i32:$in, (tblockaddress:i32):$g)
                  /*SwitchType*/ 9,  MVT::i64,// ->875
/*866*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 i64:i64:$in, (PPChi:i64 (tblockaddress:i64):$g, 0:i64)) - Complexity = 14
                    // Dst: (ADDIS8:i64 ?:i64:$in, (tblockaddress:i64):$g)
                  0, // EndSwitchType
                0, // EndSwitchOpcode
              0, // EndSwitchOpcode
/*878*/     /*Scope*/ 53|128,1/*181*/, /*->1061*/
/*880*/       OPC_MoveChild, 0,
/*882*/       OPC_SwitchOpcode /*2 cases */, 25,  TARGET_VAL(PPCISD::Lo),// ->911
/*886*/         OPC_RecordChild0, // #0 = $sym
/*887*/         OPC_MoveChild, 0,
/*889*/         OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*892*/         OPC_MoveParent,
/*893*/         OPC_MoveChild, 1,
/*895*/         OPC_CheckInteger, 0, 
/*897*/         OPC_MoveParent,
/*898*/         OPC_MoveParent,
/*899*/         OPC_RecordChild1, // #1 = $rA
/*900*/         OPC_CheckType, MVT::i32,
/*902*/         OPC_MorphNodeTo, TARGET_VAL(PPC::LA), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (add:i32 (PPClo:i32 (tglobaladdr:i32):$sym, 0:i32), i32:i32:$rA) - Complexity = 14
                // Dst: (LA:i32 i32:i32:$rA, (tglobaladdr:i32):$sym)
              /*SwitchOpcode*/ 17|128,1/*145*/,  TARGET_VAL(PPCISD::Hi),// ->1060
/*915*/         OPC_RecordChild0, // #0 = $g
/*916*/         OPC_MoveChild, 0,
/*918*/         OPC_SwitchOpcode /*4 cases */, 32,  TARGET_VAL(ISD::TargetGlobalAddress),// ->954
/*922*/           OPC_MoveParent,
/*923*/           OPC_MoveChild, 1,
/*925*/           OPC_CheckInteger, 0, 
/*927*/           OPC_MoveParent,
/*928*/           OPC_MoveParent,
/*929*/           OPC_RecordChild1, // #1 = $in
/*930*/           OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->942
/*933*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (PPChi:i64 (tglobaladdr:i64):$g, 0:i64), i64:i64:$in) - Complexity = 14
                    // Dst: (ADDIS8:i64 ?:i64:$in, (tglobaladdr:i64):$g)
                  /*SwitchType*/ 9,  MVT::i32,// ->953
/*944*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (PPChi:i32 (tglobaladdr:i32):$g, 0:i32), i32:i32:$in) - Complexity = 14
                    // Dst: (ADDIS:i32 ?:i32:$in, (tglobaladdr:i32):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 32,  TARGET_VAL(ISD::TargetConstantPool),// ->989
/*957*/           OPC_MoveParent,
/*958*/           OPC_MoveChild, 1,
/*960*/           OPC_CheckInteger, 0, 
/*962*/           OPC_MoveParent,
/*963*/           OPC_MoveParent,
/*964*/           OPC_RecordChild1, // #1 = $in
/*965*/           OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->977
/*968*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (PPChi:i64 (tconstpool:i64):$g, 0:i64), i64:i64:$in) - Complexity = 14
                    // Dst: (ADDIS8:i64 ?:i64:$in, (tconstpool:i64):$g)
                  /*SwitchType*/ 9,  MVT::i32,// ->988
/*979*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (PPChi:i32 (tconstpool:i32):$g, 0:i32), i32:i32:$in) - Complexity = 14
                    // Dst: (ADDIS:i32 ?:i32:$in, (tconstpool:i32):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 32,  TARGET_VAL(ISD::TargetJumpTable),// ->1024
/*992*/           OPC_MoveParent,
/*993*/           OPC_MoveChild, 1,
/*995*/           OPC_CheckInteger, 0, 
/*997*/           OPC_MoveParent,
/*998*/           OPC_MoveParent,
/*999*/           OPC_RecordChild1, // #1 = $in
/*1000*/          OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->1012
/*1003*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (PPChi:i64 (tjumptable:i64):$g, 0:i64), i64:i64:$in) - Complexity = 14
                    // Dst: (ADDIS8:i64 ?:i64:$in, (tjumptable:i64):$g)
                  /*SwitchType*/ 9,  MVT::i32,// ->1023
/*1014*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (PPChi:i32 (tjumptable:i32):$g, 0:i32), i32:i32:$in) - Complexity = 14
                    // Dst: (ADDIS:i32 ?:i32:$in, (tjumptable:i32):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 32,  TARGET_VAL(ISD::TargetBlockAddress),// ->1059
/*1027*/          OPC_MoveParent,
/*1028*/          OPC_MoveChild, 1,
/*1030*/          OPC_CheckInteger, 0, 
/*1032*/          OPC_MoveParent,
/*1033*/          OPC_MoveParent,
/*1034*/          OPC_RecordChild1, // #1 = $in
/*1035*/          OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->1047
/*1038*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (PPChi:i64 (tblockaddress:i64):$g, 0:i64), i64:i64:$in) - Complexity = 14
                    // Dst: (ADDIS8:i64 ?:i64:$in, (tblockaddress:i64):$g)
                  /*SwitchType*/ 9,  MVT::i32,// ->1058
/*1049*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (PPChi:i32 (tblockaddress:i32):$g, 0:i32), i32:i32:$in) - Complexity = 14
                    // Dst: (ADDIS:i32 ?:i32:$in, (tblockaddress:i32):$g)
                  0, // EndSwitchType
                0, // EndSwitchOpcode
              0, // EndSwitchOpcode
/*1061*/    /*Scope*/ 101|128,1/*229*/, /*->1292*/
/*1063*/      OPC_RecordChild0, // #0 = $rA
/*1064*/      OPC_Scope, 99, /*->1165*/ // 3 children in Scope
/*1066*/        OPC_RecordChild1, // #1 = $imm
/*1067*/        OPC_MoveChild, 1,
/*1069*/        OPC_SwitchOpcode /*2 cases */, 76,  TARGET_VAL(ISD::Constant),// ->1149
/*1073*/          OPC_Scope, 16, /*->1091*/ // 4 children in Scope
/*1075*/            OPC_CheckPredicate, 0, // Predicate_imm32SExt16
/*1077*/            OPC_MoveParent,
/*1078*/            OPC_CheckType, MVT::i32,
/*1080*/            OPC_EmitConvertToTarget, 1,
/*1082*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDI), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (add:i32 i32:i32:$rA, (imm:i32)<<P:Predicate_imm32SExt16>>:$imm) - Complexity = 7
                    // Dst: (ADDI:i32 i32:i32:$rA, (imm:i32):$imm)
/*1091*/          /*Scope*/ 19, /*->1111*/
/*1092*/            OPC_CheckPredicate, 1, // Predicate_imm16ShiftedSExt
/*1094*/            OPC_MoveParent,
/*1095*/            OPC_CheckType, MVT::i32,
/*1097*/            OPC_EmitConvertToTarget, 1,
/*1099*/            OPC_EmitNodeXForm, 0, 2, // HI16
/*1102*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (add:i32 i32:i32:$rA, (imm:i32)<<P:Predicate_imm16ShiftedSExt>><<X:HI16>>:$imm) - Complexity = 7
                    // Dst: (ADDIS:i32 i32:i32:$rA, (HI16:i32 (imm:i32):$imm))
/*1111*/          /*Scope*/ 16, /*->1128*/
/*1112*/            OPC_CheckPredicate, 2, // Predicate_imm64SExt16
/*1114*/            OPC_MoveParent,
/*1115*/            OPC_CheckType, MVT::i64,
/*1117*/            OPC_EmitConvertToTarget, 1,
/*1119*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDI8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                    // Src: (add:i64 i64:i64:$rA, (imm:i64)<<P:Predicate_imm64SExt16>>:$imm) - Complexity = 7
                    // Dst: (ADDI8:i64 i64:i64:$rA, (imm:i64):$imm)
/*1128*/          /*Scope*/ 19, /*->1148*/
/*1129*/            OPC_CheckPredicate, 1, // Predicate_imm16ShiftedSExt
/*1131*/            OPC_MoveParent,
/*1132*/            OPC_CheckType, MVT::i64,
/*1134*/            OPC_EmitConvertToTarget, 1,
/*1136*/            OPC_EmitNodeXForm, 0, 2, // HI16
/*1139*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                    // Src: (add:i64 i64:i64:$rA, (imm:i64)<<P:Predicate_imm16ShiftedSExt>><<X:HI16>>:$imm) - Complexity = 7
                    // Dst: (ADDIS8:i64 i64:i64:$rA, (HI16:i64 (imm:i64):$imm))
/*1148*/          0, /*End of Scope*/
                /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->1164
/*1152*/          OPC_MoveParent,
/*1153*/          OPC_CheckType, MVT::i64,
/*1155*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADD8TLS), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i64 i64:i64:$rA, (tglobaltlsaddr:i64):$rB) - Complexity = 6
                  // Dst: (ADD8TLS:i64 i64:i64:$rA, (tglobaltlsaddr:i64):$rB)
                0, // EndSwitchOpcode
/*1165*/      /*Scope*/ 18, /*->1184*/
/*1166*/        OPC_MoveChild, 0,
/*1168*/        OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*1171*/        OPC_MoveParent,
/*1172*/        OPC_RecordChild1, // #1 = $rA
/*1173*/        OPC_CheckType, MVT::i64,
/*1175*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADD8TLS), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (add:i64 (tglobaltlsaddr:i64):$rB, i64:i64:$rA) - Complexity = 6
                // Dst: (ADD8TLS:i64 i64:i64:$rA, (tglobaltlsaddr:i64):$rB)
/*1184*/      /*Scope*/ 106, /*->1291*/
/*1185*/        OPC_RecordChild1, // #1 = $imm
/*1186*/        OPC_Scope, 36, /*->1224*/ // 6 children in Scope
/*1188*/          OPC_MoveChild, 1,
/*1190*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1193*/          OPC_MoveParent,
/*1194*/          OPC_CheckType, MVT::i32,
/*1196*/          OPC_EmitConvertToTarget, 1,
/*1198*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*1201*/          OPC_EmitNode, TARGET_VAL(PPC::ADDI), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/*1210*/          OPC_EmitConvertToTarget, 1,
/*1212*/          OPC_EmitNodeXForm, 2, 5, // HA16
/*1215*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 6, 
                  // Src: (add:i32 i32:i32:$in, (imm:i32):$imm) - Complexity = 6
                  // Dst: (ADDIS:i32 (ADDI:i32 ?:i32:$in, (LO16:i32 (imm:i32):$imm)), (HA16:i32 (imm:i32):$imm))
/*1224*/        /*Scope*/ 11, /*->1236*/
/*1225*/          OPC_CheckType, MVT::i32,
/*1227*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADD4), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 i32:i32:$rA, i32:i32:$rB) - Complexity = 3
                  // Dst: (ADD4:i32 i32:i32:$rA, i32:i32:$rB)
/*1236*/        /*Scope*/ 11, /*->1248*/
/*1237*/          OPC_CheckType, MVT::i64,
/*1239*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADD8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i64 i64:i64:$rA, i64:i64:$rB) - Complexity = 3
                  // Dst: (ADD8:i64 i64:i64:$rA, i64:i64:$rB)
/*1248*/        /*Scope*/ 13, /*->1262*/
/*1249*/          OPC_CheckType, MVT::v16i8,
/*1251*/          OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*1253*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUBM), 0,
                      1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                  // Src: (add:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 3
                  // Dst: (VADDUBM:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*1262*/        /*Scope*/ 13, /*->1276*/
/*1263*/          OPC_CheckType, MVT::v8i16,
/*1265*/          OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*1267*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUHM), 0,
                      1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
                  // Src: (add:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 3
                  // Dst: (VADDUHM:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*1276*/        /*Scope*/ 13, /*->1290*/
/*1277*/          OPC_CheckType, MVT::v4i32,
/*1279*/          OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*1281*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUWM), 0,
                      1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 3
                  // Dst: (VADDUWM:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*1290*/        0, /*End of Scope*/
/*1291*/      0, /*End of Scope*/
/*1292*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 117|128,6/*885*/,  TARGET_VAL(ISD::LOAD),// ->2182
/*1297*/    OPC_RecordMemRef,
/*1298*/    OPC_RecordNode,   // #0 = 'ld' chained node
/*1299*/    OPC_RecordChild1, // #1 = $src
/*1300*/    OPC_CheckPredicate, 3, // Predicate_unindexedload
/*1302*/    OPC_Scope, 19, /*->1323*/ // 19 children in Scope
/*1304*/      OPC_CheckPredicate, 4, // Predicate_zextload
/*1306*/      OPC_CheckPredicate, 5, // Predicate_zextloadi8
/*1308*/      OPC_CheckType, MVT::i32,
/*1310*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1313*/      OPC_EmitMergeInputChains1_0,
/*1314*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
              // Dst: (LBZ:i32 iaddr:iPTR:$src)
/*1323*/    /*Scope*/ 19, /*->1343*/
/*1324*/      OPC_CheckPredicate, 6, // Predicate_sextload
/*1326*/      OPC_CheckPredicate, 7, // Predicate_sextloadi16
/*1328*/      OPC_CheckType, MVT::i32,
/*1330*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1333*/      OPC_EmitMergeInputChains1_0,
/*1334*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHA), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
              // Dst: (LHA:i32 iaddr:iPTR:$src)
/*1343*/    /*Scope*/ 19, /*->1363*/
/*1344*/      OPC_CheckPredicate, 4, // Predicate_zextload
/*1346*/      OPC_CheckPredicate, 8, // Predicate_zextloadi16
/*1348*/      OPC_CheckType, MVT::i32,
/*1350*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1353*/      OPC_EmitMergeInputChains1_0,
/*1354*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHZ), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
              // Dst: (LHZ:i32 iaddr:iPTR:$src)
/*1363*/    /*Scope*/ 17, /*->1381*/
/*1364*/      OPC_CheckPredicate, 9, // Predicate_load
/*1366*/      OPC_CheckType, MVT::i32,
/*1368*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1371*/      OPC_EmitMergeInputChains1_0,
/*1372*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWZ), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
              // Dst: (LWZ:i32 iaddr:iPTR:$src)
/*1381*/    /*Scope*/ 19, /*->1401*/
/*1382*/      OPC_CheckPredicate, 4, // Predicate_zextload
/*1384*/      OPC_CheckPredicate, 5, // Predicate_zextloadi8
/*1386*/      OPC_CheckType, MVT::i32,
/*1388*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1391*/      OPC_EmitMergeInputChains1_0,
/*1392*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
              // Dst: (LBZX:i32 xaddr:iPTR:$src)
/*1401*/    /*Scope*/ 19, /*->1421*/
/*1402*/      OPC_CheckPredicate, 6, // Predicate_sextload
/*1404*/      OPC_CheckPredicate, 7, // Predicate_sextloadi16
/*1406*/      OPC_CheckType, MVT::i32,
/*1408*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1411*/      OPC_EmitMergeInputChains1_0,
/*1412*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHAX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
              // Dst: (LHAX:i32 xaddr:iPTR:$src)
/*1421*/    /*Scope*/ 19, /*->1441*/
/*1422*/      OPC_CheckPredicate, 4, // Predicate_zextload
/*1424*/      OPC_CheckPredicate, 8, // Predicate_zextloadi16
/*1426*/      OPC_CheckType, MVT::i32,
/*1428*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1431*/      OPC_EmitMergeInputChains1_0,
/*1432*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHZX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
              // Dst: (LHZX:i32 xaddr:iPTR:$src)
/*1441*/    /*Scope*/ 17, /*->1459*/
/*1442*/      OPC_CheckPredicate, 9, // Predicate_load
/*1444*/      OPC_CheckType, MVT::i32,
/*1446*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1449*/      OPC_EmitMergeInputChains1_0,
/*1450*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWZX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
              // Dst: (LWZX:i32 xaddr:iPTR:$src)
/*1459*/    /*Scope*/ 36, /*->1496*/
/*1460*/      OPC_CheckPredicate, 4, // Predicate_zextload
/*1462*/      OPC_CheckPredicate, 10, // Predicate_zextloadi1
/*1464*/      OPC_CheckType, MVT::i32,
/*1466*/      OPC_Scope, 13, /*->1481*/ // 2 children in Scope
/*1468*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1471*/        OPC_EmitMergeInputChains1_0,
/*1472*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LBZ:i32 iaddr:iPTR:$src)
/*1481*/      /*Scope*/ 13, /*->1495*/
/*1482*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1485*/        OPC_EmitMergeInputChains1_0,
/*1486*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LBZX:i32 xaddr:iPTR:$src)
/*1495*/      0, /*End of Scope*/
/*1496*/    /*Scope*/ 105, /*->1602*/
/*1497*/      OPC_CheckPredicate, 11, // Predicate_extload
/*1499*/      OPC_CheckType, MVT::i32,
/*1501*/      OPC_Scope, 32, /*->1535*/ // 3 children in Scope
/*1503*/        OPC_CheckPredicate, 12, // Predicate_extloadi1
/*1505*/        OPC_Scope, 13, /*->1520*/ // 2 children in Scope
/*1507*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1510*/          OPC_EmitMergeInputChains1_0,
/*1511*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBZ:i32 iaddr:iPTR:$src)
/*1520*/        /*Scope*/ 13, /*->1534*/
/*1521*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1524*/          OPC_EmitMergeInputChains1_0,
/*1525*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBZX:i32 xaddr:iPTR:$src)
/*1534*/        0, /*End of Scope*/
/*1535*/      /*Scope*/ 32, /*->1568*/
/*1536*/        OPC_CheckPredicate, 13, // Predicate_extloadi8
/*1538*/        OPC_Scope, 13, /*->1553*/ // 2 children in Scope
/*1540*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1543*/          OPC_EmitMergeInputChains1_0,
/*1544*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBZ:i32 iaddr:iPTR:$src)
/*1553*/        /*Scope*/ 13, /*->1567*/
/*1554*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1557*/          OPC_EmitMergeInputChains1_0,
/*1558*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBZX:i32 xaddr:iPTR:$src)
/*1567*/        0, /*End of Scope*/
/*1568*/      /*Scope*/ 32, /*->1601*/
/*1569*/        OPC_CheckPredicate, 14, // Predicate_extloadi16
/*1571*/        OPC_Scope, 13, /*->1586*/ // 2 children in Scope
/*1573*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1576*/          OPC_EmitMergeInputChains1_0,
/*1577*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LHZ), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHZ:i32 iaddr:iPTR:$src)
/*1586*/        /*Scope*/ 13, /*->1600*/
/*1587*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1590*/          OPC_EmitMergeInputChains1_0,
/*1591*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LHZX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHZX:i32 xaddr:iPTR:$src)
/*1600*/        0, /*End of Scope*/
/*1601*/      0, /*End of Scope*/
/*1602*/    /*Scope*/ 72, /*->1675*/
/*1603*/      OPC_CheckPredicate, 6, // Predicate_sextload
/*1605*/      OPC_CheckType, MVT::i64,
/*1607*/      OPC_Scope, 15, /*->1624*/ // 4 children in Scope
/*1609*/        OPC_CheckPredicate, 7, // Predicate_sextloadi16
/*1611*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1614*/        OPC_EmitMergeInputChains1_0,
/*1615*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LHA8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                // Dst: (LHA8:i64 iaddr:iPTR:$src)
/*1624*/      /*Scope*/ 17, /*->1642*/
/*1625*/        OPC_CheckPredicate, 15, // Predicate_sextloadi32
/*1627*/        OPC_CheckPredicate, 16, // Predicate_aligned4sextloadi32
/*1629*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectAddrImmX4:$src #2 #3
/*1632*/        OPC_EmitMergeInputChains1_0,
/*1633*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LWA), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ixaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>><<P:Predicate_aligned4sextloadi32>> - Complexity = 13
                // Dst: (LWA:i64 ixaddr:iPTR:$src)
/*1642*/      /*Scope*/ 15, /*->1658*/
/*1643*/        OPC_CheckPredicate, 7, // Predicate_sextloadi16
/*1645*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1648*/        OPC_EmitMergeInputChains1_0,
/*1649*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LHAX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                // Dst: (LHAX8:i64 xaddr:iPTR:$src)
/*1658*/      /*Scope*/ 15, /*->1674*/
/*1659*/        OPC_CheckPredicate, 15, // Predicate_sextloadi32
/*1661*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1664*/        OPC_EmitMergeInputChains1_0,
/*1665*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LWAX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 13
                // Dst: (LWAX:i64 xaddr:iPTR:$src)
/*1674*/      0, /*End of Scope*/
/*1675*/    /*Scope*/ 102, /*->1778*/
/*1676*/      OPC_CheckPredicate, 4, // Predicate_zextload
/*1678*/      OPC_CheckType, MVT::i64,
/*1680*/      OPC_Scope, 15, /*->1697*/ // 6 children in Scope
/*1682*/        OPC_CheckPredicate, 5, // Predicate_zextloadi8
/*1684*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1687*/        OPC_EmitMergeInputChains1_0,
/*1688*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                // Dst: (LBZ8:i64 iaddr:iPTR:$src)
/*1697*/      /*Scope*/ 15, /*->1713*/
/*1698*/        OPC_CheckPredicate, 8, // Predicate_zextloadi16
/*1700*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1703*/        OPC_EmitMergeInputChains1_0,
/*1704*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LHZ8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                // Dst: (LHZ8:i64 iaddr:iPTR:$src)
/*1713*/      /*Scope*/ 15, /*->1729*/
/*1714*/        OPC_CheckPredicate, 17, // Predicate_zextloadi32
/*1716*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1719*/        OPC_EmitMergeInputChains1_0,
/*1720*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LWZ8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                // Dst: (LWZ8:i64 iaddr:iPTR:$src)
/*1729*/      /*Scope*/ 15, /*->1745*/
/*1730*/        OPC_CheckPredicate, 5, // Predicate_zextloadi8
/*1732*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1735*/        OPC_EmitMergeInputChains1_0,
/*1736*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                // Dst: (LBZX8:i64 xaddr:iPTR:$src)
/*1745*/      /*Scope*/ 15, /*->1761*/
/*1746*/        OPC_CheckPredicate, 8, // Predicate_zextloadi16
/*1748*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1751*/        OPC_EmitMergeInputChains1_0,
/*1752*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LHZX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                // Dst: (LHZX8:i64 xaddr:iPTR:$src)
/*1761*/      /*Scope*/ 15, /*->1777*/
/*1762*/        OPC_CheckPredicate, 17, // Predicate_zextloadi32
/*1764*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1767*/        OPC_EmitMergeInputChains1_0,
/*1768*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LWZX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                // Dst: (LWZX8:i64 xaddr:iPTR:$src)
/*1777*/      0, /*End of Scope*/
/*1778*/    /*Scope*/ 36, /*->1815*/
/*1779*/      OPC_CheckPredicate, 9, // Predicate_load
/*1781*/      OPC_CheckType, MVT::i64,
/*1783*/      OPC_Scope, 15, /*->1800*/ // 2 children in Scope
/*1785*/        OPC_CheckPredicate, 18, // Predicate_aligned4load
/*1787*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectAddrImmX4:$src #2 #3
/*1790*/        OPC_EmitMergeInputChains1_0,
/*1791*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LD), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ixaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_aligned4load>> - Complexity = 13
                // Dst: (LD:i64 ixaddr:iPTR:$src)
/*1800*/      /*Scope*/ 13, /*->1814*/
/*1801*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1804*/        OPC_EmitMergeInputChains1_0,
/*1805*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LDX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LDX:i64 xaddr:iPTR:$src)
/*1814*/      0, /*End of Scope*/
/*1815*/    /*Scope*/ 36, /*->1852*/
/*1816*/      OPC_CheckPredicate, 4, // Predicate_zextload
/*1818*/      OPC_CheckPredicate, 10, // Predicate_zextloadi1
/*1820*/      OPC_CheckType, MVT::i64,
/*1822*/      OPC_Scope, 13, /*->1837*/ // 2 children in Scope
/*1824*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1827*/        OPC_EmitMergeInputChains1_0,
/*1828*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LBZ8:i64 iaddr:iPTR:$src)
/*1837*/      /*Scope*/ 13, /*->1851*/
/*1838*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1841*/        OPC_EmitMergeInputChains1_0,
/*1842*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LBZX8:i64 xaddr:iPTR:$src)
/*1851*/      0, /*End of Scope*/
/*1852*/    /*Scope*/ 10|128,1/*138*/, /*->1992*/
/*1854*/      OPC_CheckPredicate, 11, // Predicate_extload
/*1856*/      OPC_CheckType, MVT::i64,
/*1858*/      OPC_Scope, 32, /*->1892*/ // 4 children in Scope
/*1860*/        OPC_CheckPredicate, 12, // Predicate_extloadi1
/*1862*/        OPC_Scope, 13, /*->1877*/ // 2 children in Scope
/*1864*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1867*/          OPC_EmitMergeInputChains1_0,
/*1868*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBZ8:i64 iaddr:iPTR:$src)
/*1877*/        /*Scope*/ 13, /*->1891*/
/*1878*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1881*/          OPC_EmitMergeInputChains1_0,
/*1882*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBZX8:i64 xaddr:iPTR:$src)
/*1891*/        0, /*End of Scope*/
/*1892*/      /*Scope*/ 32, /*->1925*/
/*1893*/        OPC_CheckPredicate, 13, // Predicate_extloadi8
/*1895*/        OPC_Scope, 13, /*->1910*/ // 2 children in Scope
/*1897*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1900*/          OPC_EmitMergeInputChains1_0,
/*1901*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBZ8:i64 iaddr:iPTR:$src)
/*1910*/        /*Scope*/ 13, /*->1924*/
/*1911*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1914*/          OPC_EmitMergeInputChains1_0,
/*1915*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBZX8:i64 xaddr:iPTR:$src)
/*1924*/        0, /*End of Scope*/
/*1925*/      /*Scope*/ 32, /*->1958*/
/*1926*/        OPC_CheckPredicate, 14, // Predicate_extloadi16
/*1928*/        OPC_Scope, 13, /*->1943*/ // 2 children in Scope
/*1930*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1933*/          OPC_EmitMergeInputChains1_0,
/*1934*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LHZ8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHZ8:i64 iaddr:iPTR:$src)
/*1943*/        /*Scope*/ 13, /*->1957*/
/*1944*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1947*/          OPC_EmitMergeInputChains1_0,
/*1948*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LHZX8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHZX8:i64 xaddr:iPTR:$src)
/*1957*/        0, /*End of Scope*/
/*1958*/      /*Scope*/ 32, /*->1991*/
/*1959*/        OPC_CheckPredicate, 19, // Predicate_extloadi32
/*1961*/        OPC_Scope, 13, /*->1976*/ // 2 children in Scope
/*1963*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1966*/          OPC_EmitMergeInputChains1_0,
/*1967*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LWZ8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                  // Dst: (LWZ8:i64 iaddr:iPTR:$src)
/*1976*/        /*Scope*/ 13, /*->1990*/
/*1977*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1980*/          OPC_EmitMergeInputChains1_0,
/*1981*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LWZX8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                  // Dst: (LWZX8:i64 xaddr:iPTR:$src)
/*1990*/        0, /*End of Scope*/
/*1991*/      0, /*End of Scope*/
/*1992*/    /*Scope*/ 21, /*->2014*/
/*1993*/      OPC_CheckPredicate, 6, // Predicate_sextload
/*1995*/      OPC_CheckPredicate, 15, // Predicate_sextloadi32
/*1997*/      OPC_CheckPredicate, 20, // Predicate_unaligned4sextloadi32
/*1999*/      OPC_CheckType, MVT::i64,
/*2001*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*2004*/      OPC_EmitMergeInputChains1_0,
/*2005*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWAX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i64 xoaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>><<P:Predicate_unaligned4sextloadi32>> - Complexity = 13
              // Dst: (LWAX:i64 xoaddr:iPTR:$src)
/*2014*/    /*Scope*/ 85, /*->2100*/
/*2015*/      OPC_CheckPredicate, 9, // Predicate_load
/*2017*/      OPC_SwitchType /*3 cases */, 15,  MVT::i64,// ->2035
/*2020*/        OPC_CheckPredicate, 21, // Predicate_unaligned4load
/*2022*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*2025*/        OPC_EmitMergeInputChains1_0,
/*2026*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LDX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xoaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_unaligned4load>> - Complexity = 13
                // Dst: (LDX:i64 xoaddr:iPTR:$src)
              /*SwitchType*/ 30,  MVT::f32,// ->2067
/*2037*/        OPC_Scope, 13, /*->2052*/ // 2 children in Scope
/*2039*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*2042*/          OPC_EmitMergeInputChains1_0,
/*2043*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LFS), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LFS:f32 iaddr:iPTR:$src)
/*2052*/        /*Scope*/ 13, /*->2066*/
/*2053*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*2056*/          OPC_EmitMergeInputChains1_0,
/*2057*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LFSX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LFSX:f32 xaddr:iPTR:$src)
/*2066*/        0, /*End of Scope*/
              /*SwitchType*/ 30,  MVT::f64,// ->2099
/*2069*/        OPC_Scope, 13, /*->2084*/ // 2 children in Scope
/*2071*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*2074*/          OPC_EmitMergeInputChains1_0,
/*2075*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LFD), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LFD:f64 iaddr:iPTR:$src)
/*2084*/        /*Scope*/ 13, /*->2098*/
/*2085*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*2088*/          OPC_EmitMergeInputChains1_0,
/*2089*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LFDX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LFDX:f64 xaddr:iPTR:$src)
/*2098*/        0, /*End of Scope*/
              0, // EndSwitchType
/*2100*/    /*Scope*/ 60, /*->2161*/
/*2101*/      OPC_CheckPredicate, 11, // Predicate_extload
/*2103*/      OPC_CheckPredicate, 22, // Predicate_extloadf32
/*2105*/      OPC_CheckType, MVT::f64,
/*2107*/      OPC_Scope, 25, /*->2134*/ // 2 children in Scope
/*2109*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*2112*/        OPC_EmitMergeInputChains1_0,
/*2113*/        OPC_EmitNode, TARGET_VAL(PPC::LFS), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3,  // Results = #4
/*2122*/        OPC_EmitInteger, MVT::i32, PPC::F8RCRegClassID,
/*2125*/        OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 4, 5, 
                // Src: (ld:f64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf32>> - Complexity = 13
                // Dst: (COPY_TO_REGCLASS:f64 (LFS:f32 iaddr:iPTR:$src), F8RC:i32)
/*2134*/      /*Scope*/ 25, /*->2160*/
/*2135*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*2138*/        OPC_EmitMergeInputChains1_0,
/*2139*/        OPC_EmitNode, TARGET_VAL(PPC::LFSX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3,  // Results = #4
/*2148*/        OPC_EmitInteger, MVT::i32, PPC::F8RCRegClassID,
/*2151*/        OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 4, 5, 
                // Src: (ld:f64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf32>> - Complexity = 13
                // Dst: (COPY_TO_REGCLASS:f64 (LFSX:f32 xaddr:iPTR:$src), F8RC:i32)
/*2160*/      0, /*End of Scope*/
/*2161*/    /*Scope*/ 19, /*->2181*/
/*2162*/      OPC_CheckPredicate, 9, // Predicate_load
/*2164*/      OPC_CheckType, MVT::v4i32,
/*2166*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*2168*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*2171*/      OPC_EmitMergeInputChains1_0,
/*2172*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:v4i32 xoaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
              // Dst: (LVX:v4i32 xoaddr:iPTR:$src)
/*2181*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 87|128,5/*727*/,  TARGET_VAL(ISD::STORE),// ->2913
/*2186*/    OPC_RecordMemRef,
/*2187*/    OPC_RecordNode,   // #0 = 'st' chained node
/*2188*/    OPC_RecordChild1, // #1 = $rS
/*2189*/    OPC_Scope, 103|128,1/*231*/, /*->2423*/ // 5 children in Scope
/*2192*/      OPC_CheckChild1Type, MVT::i32,
/*2194*/      OPC_RecordChild2, // #2 = $src
/*2195*/      OPC_Scope, 110, /*->2307*/ // 2 children in Scope
/*2197*/        OPC_CheckPredicate, 23, // Predicate_unindexedstore
/*2199*/        OPC_Scope, 36, /*->2237*/ // 4 children in Scope
/*2201*/          OPC_CheckPredicate, 24, // Predicate_truncstore
/*2203*/          OPC_Scope, 15, /*->2220*/ // 2 children in Scope
/*2205*/            OPC_CheckPredicate, 25, // Predicate_truncstorei8
/*2207*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2210*/            OPC_EmitMergeInputChains1_0,
/*2211*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STB), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i32:i32:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STB i32:i32:$rS, iaddr:iPTR:$src)
/*2220*/          /*Scope*/ 15, /*->2236*/
/*2221*/            OPC_CheckPredicate, 26, // Predicate_truncstorei16
/*2223*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2226*/            OPC_EmitMergeInputChains1_0,
/*2227*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STH), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i32:i32:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STH i32:i32:$rS, iaddr:iPTR:$src)
/*2236*/          0, /*End of Scope*/
/*2237*/        /*Scope*/ 15, /*->2253*/
/*2238*/          OPC_CheckPredicate, 27, // Predicate_store
/*2240*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2243*/          OPC_EmitMergeInputChains1_0,
/*2244*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STW), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st i32:i32:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STW i32:i32:$rS, iaddr:iPTR:$src)
/*2253*/        /*Scope*/ 36, /*->2290*/
/*2254*/          OPC_CheckPredicate, 24, // Predicate_truncstore
/*2256*/          OPC_Scope, 15, /*->2273*/ // 2 children in Scope
/*2258*/            OPC_CheckPredicate, 25, // Predicate_truncstorei8
/*2260*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2263*/            OPC_EmitMergeInputChains1_0,
/*2264*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBX), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i32:i32:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STBX i32:i32:$rS, xaddr:iPTR:$dst)
/*2273*/          /*Scope*/ 15, /*->2289*/
/*2274*/            OPC_CheckPredicate, 26, // Predicate_truncstorei16
/*2276*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2279*/            OPC_EmitMergeInputChains1_0,
/*2280*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHX), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i32:i32:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STHX i32:i32:$rS, xaddr:iPTR:$dst)
/*2289*/          0, /*End of Scope*/
/*2290*/        /*Scope*/ 15, /*->2306*/
/*2291*/          OPC_CheckPredicate, 27, // Predicate_store
/*2293*/          OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2296*/          OPC_EmitMergeInputChains1_0,
/*2297*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STWX), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st i32:i32:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STWX i32:i32:$rS, xaddr:iPTR:$dst)
/*2306*/        0, /*End of Scope*/
/*2307*/      /*Scope*/ 114, /*->2422*/
/*2308*/        OPC_RecordChild3, // #3 = $ptroff
/*2309*/        OPC_Scope, 40, /*->2351*/ // 4 children in Scope
/*2311*/          OPC_CheckPredicate, 28, // Predicate_itruncstore
/*2313*/          OPC_CheckPredicate, 29, // Predicate_pre_truncst
/*2315*/          OPC_Scope, 16, /*->2333*/ // 2 children in Scope
/*2317*/            OPC_CheckPredicate, 30, // Predicate_pre_truncsti8
/*2319*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2322*/            OPC_EmitMergeInputChains1_0,
/*2323*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBU), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR i32:i32:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti8>> - Complexity = 10
                    // Dst: (STBU:iPTR ?:i32:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2333*/          /*Scope*/ 16, /*->2350*/
/*2334*/            OPC_CheckPredicate, 31, // Predicate_pre_truncsti16
/*2336*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2339*/            OPC_EmitMergeInputChains1_0,
/*2340*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHU), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR i32:i32:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti16>> - Complexity = 10
                    // Dst: (STHU:iPTR ?:i32:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2350*/          0, /*End of Scope*/
/*2351*/        /*Scope*/ 18, /*->2370*/
/*2352*/          OPC_CheckPredicate, 32, // Predicate_istore
/*2354*/          OPC_CheckPredicate, 33, // Predicate_pre_store
/*2356*/          OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2359*/          OPC_EmitMergeInputChains1_0,
/*2360*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STWU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR i32:i32:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                  // Dst: (STWU:iPTR ?:i32:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2370*/        /*Scope*/ 34, /*->2405*/
/*2371*/          OPC_CheckPredicate, 28, // Predicate_itruncstore
/*2373*/          OPC_CheckPredicate, 29, // Predicate_pre_truncst
/*2375*/          OPC_Scope, 13, /*->2390*/ // 2 children in Scope
/*2377*/            OPC_CheckPredicate, 30, // Predicate_pre_truncsti8
/*2379*/            OPC_EmitMergeInputChains1_0,
/*2380*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBUX), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (ist:iPTR i32:i32:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti8>> - Complexity = 4
                    // Dst: (STBUX:iPTR ?:i32:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2390*/          /*Scope*/ 13, /*->2404*/
/*2391*/            OPC_CheckPredicate, 31, // Predicate_pre_truncsti16
/*2393*/            OPC_EmitMergeInputChains1_0,
/*2394*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHUX), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (ist:iPTR i32:i32:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti16>> - Complexity = 4
                    // Dst: (STHUX:iPTR ?:i32:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2404*/          0, /*End of Scope*/
/*2405*/        /*Scope*/ 15, /*->2421*/
/*2406*/          OPC_CheckPredicate, 32, // Predicate_istore
/*2408*/          OPC_CheckPredicate, 33, // Predicate_pre_store
/*2410*/          OPC_EmitMergeInputChains1_0,
/*2411*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STWUX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (ist:iPTR i32:i32:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 4
                  // Dst: (STWUX:iPTR ?:i32:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2421*/        0, /*End of Scope*/
/*2422*/      0, /*End of Scope*/
/*2423*/    /*Scope*/ 75, /*->2499*/
/*2424*/      OPC_CheckChild1Type, MVT::f32,
/*2426*/      OPC_RecordChild2, // #2 = $dst
/*2427*/      OPC_Scope, 34, /*->2463*/ // 2 children in Scope
/*2429*/        OPC_CheckPredicate, 23, // Predicate_unindexedstore
/*2431*/        OPC_CheckPredicate, 27, // Predicate_store
/*2433*/        OPC_Scope, 13, /*->2448*/ // 2 children in Scope
/*2435*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$dst #3 #4
/*2438*/          OPC_EmitMergeInputChains1_0,
/*2439*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFS), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st f32:f32:$rS, iaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STFS f32:f32:$rS, iaddr:iPTR:$dst)
/*2448*/        /*Scope*/ 13, /*->2462*/
/*2449*/          OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2452*/          OPC_EmitMergeInputChains1_0,
/*2453*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFSX), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st f32:f32:$frS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STFSX f32:f32:$frS, xaddr:iPTR:$dst)
/*2462*/        0, /*End of Scope*/
/*2463*/      /*Scope*/ 34, /*->2498*/
/*2464*/        OPC_RecordChild3, // #3 = $ptroff
/*2465*/        OPC_CheckPredicate, 32, // Predicate_istore
/*2467*/        OPC_CheckPredicate, 33, // Predicate_pre_store
/*2469*/        OPC_Scope, 14, /*->2485*/ // 2 children in Scope
/*2471*/          OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2474*/          OPC_EmitMergeInputChains1_0,
/*2475*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFSU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR f32:f32:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                  // Dst: (STFSU:iPTR ?:f32:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2485*/        /*Scope*/ 11, /*->2497*/
/*2486*/          OPC_EmitMergeInputChains1_0,
/*2487*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFSUX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (ist:iPTR f32:f32:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 4
                  // Dst: (STFSUX:iPTR ?:f32:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2497*/        0, /*End of Scope*/
/*2498*/      0, /*End of Scope*/
/*2499*/    /*Scope*/ 75, /*->2575*/
/*2500*/      OPC_CheckChild1Type, MVT::f64,
/*2502*/      OPC_RecordChild2, // #2 = $dst
/*2503*/      OPC_Scope, 34, /*->2539*/ // 2 children in Scope
/*2505*/        OPC_CheckPredicate, 23, // Predicate_unindexedstore
/*2507*/        OPC_CheckPredicate, 27, // Predicate_store
/*2509*/        OPC_Scope, 13, /*->2524*/ // 2 children in Scope
/*2511*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$dst #3 #4
/*2514*/          OPC_EmitMergeInputChains1_0,
/*2515*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFD), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st f64:f64:$rS, iaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STFD f64:f64:$rS, iaddr:iPTR:$dst)
/*2524*/        /*Scope*/ 13, /*->2538*/
/*2525*/          OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2528*/          OPC_EmitMergeInputChains1_0,
/*2529*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFDX), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st f64:f64:$frS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STFDX f64:f64:$frS, xaddr:iPTR:$dst)
/*2538*/        0, /*End of Scope*/
/*2539*/      /*Scope*/ 34, /*->2574*/
/*2540*/        OPC_RecordChild3, // #3 = $ptroff
/*2541*/        OPC_CheckPredicate, 32, // Predicate_istore
/*2543*/        OPC_CheckPredicate, 33, // Predicate_pre_store
/*2545*/        OPC_Scope, 14, /*->2561*/ // 2 children in Scope
/*2547*/          OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2550*/          OPC_EmitMergeInputChains1_0,
/*2551*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFDU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR f64:f64:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                  // Dst: (STFDU:iPTR ?:f64:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2561*/        /*Scope*/ 11, /*->2573*/
/*2562*/          OPC_EmitMergeInputChains1_0,
/*2563*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFDUX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (ist:iPTR f64:f64:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 4
                  // Dst: (STFDUX:iPTR ?:f64:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2573*/        0, /*End of Scope*/
/*2574*/      0, /*End of Scope*/
/*2575*/    /*Scope*/ 22, /*->2598*/
/*2576*/      OPC_CheckChild1Type, MVT::v4i32,
/*2578*/      OPC_RecordChild2, // #2 = $dst
/*2579*/      OPC_CheckPredicate, 23, // Predicate_unindexedstore
/*2581*/      OPC_CheckPredicate, 27, // Predicate_store
/*2583*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*2585*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*2588*/      OPC_EmitMergeInputChains1_0,
/*2589*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STVX), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (st v4i32:v4i32:$rS, xoaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
              // Dst: (STVX ?:v4i32:$rS, xoaddr:iPTR:$dst)
/*2598*/    /*Scope*/ 56|128,2/*312*/, /*->2912*/
/*2600*/      OPC_CheckChild1Type, MVT::i64,
/*2602*/      OPC_RecordChild2, // #2 = $src
/*2603*/      OPC_Scope, 28|128,1/*156*/, /*->2762*/ // 2 children in Scope
/*2606*/        OPC_CheckPredicate, 23, // Predicate_unindexedstore
/*2608*/        OPC_Scope, 100, /*->2710*/ // 2 children in Scope
/*2610*/          OPC_CheckPredicate, 24, // Predicate_truncstore
/*2612*/          OPC_Scope, 15, /*->2629*/ // 6 children in Scope
/*2614*/            OPC_CheckPredicate, 25, // Predicate_truncstorei8
/*2616*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2619*/            OPC_EmitMergeInputChains1_0,
/*2620*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STB8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STB8 i64:i64:$rS, iaddr:iPTR:$src)
/*2629*/          /*Scope*/ 15, /*->2645*/
/*2630*/            OPC_CheckPredicate, 26, // Predicate_truncstorei16
/*2632*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2635*/            OPC_EmitMergeInputChains1_0,
/*2636*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STH8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STH8 i64:i64:$rS, iaddr:iPTR:$src)
/*2645*/          /*Scope*/ 15, /*->2661*/
/*2646*/            OPC_CheckPredicate, 34, // Predicate_truncstorei32
/*2648*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2651*/            OPC_EmitMergeInputChains1_0,
/*2652*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STW8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                    // Dst: (STW8 i64:i64:$rS, iaddr:iPTR:$src)
/*2661*/          /*Scope*/ 15, /*->2677*/
/*2662*/            OPC_CheckPredicate, 25, // Predicate_truncstorei8
/*2664*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2667*/            OPC_EmitMergeInputChains1_0,
/*2668*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBX8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STBX8 i64:i64:$rS, xaddr:iPTR:$dst)
/*2677*/          /*Scope*/ 15, /*->2693*/
/*2678*/            OPC_CheckPredicate, 26, // Predicate_truncstorei16
/*2680*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2683*/            OPC_EmitMergeInputChains1_0,
/*2684*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHX8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STHX8 i64:i64:$rS, xaddr:iPTR:$dst)
/*2693*/          /*Scope*/ 15, /*->2709*/
/*2694*/            OPC_CheckPredicate, 34, // Predicate_truncstorei32
/*2696*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2699*/            OPC_EmitMergeInputChains1_0,
/*2700*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STWX8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                    // Dst: (STWX8 i64:i64:$rS, xaddr:iPTR:$dst)
/*2709*/          0, /*End of Scope*/
/*2710*/        /*Scope*/ 50, /*->2761*/
/*2711*/          OPC_CheckPredicate, 27, // Predicate_store
/*2713*/          OPC_Scope, 15, /*->2730*/ // 3 children in Scope
/*2715*/            OPC_CheckPredicate, 35, // Predicate_aligned4store
/*2717*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectAddrImmX4:$dst #3 #4
/*2720*/            OPC_EmitMergeInputChains1_0,
/*2721*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STD), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, ixaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_aligned4store>> - Complexity = 13
                    // Dst: (STD i64:i64:$rS, ixaddr:iPTR:$dst)
/*2730*/          /*Scope*/ 13, /*->2744*/
/*2731*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2734*/            OPC_EmitMergeInputChains1_0,
/*2735*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STDX), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STDX i64:i64:$rS, xaddr:iPTR:$dst)
/*2744*/          /*Scope*/ 15, /*->2760*/
/*2745*/            OPC_CheckPredicate, 36, // Predicate_unaligned4store
/*2747*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*2750*/            OPC_EmitMergeInputChains1_0,
/*2751*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STDX), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, xoaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_unaligned4store>> - Complexity = 13
                    // Dst: (STDX ?:i64:$rS, xoaddr:iPTR:$dst)
/*2760*/          0, /*End of Scope*/
/*2761*/        0, /*End of Scope*/
/*2762*/      /*Scope*/ 19|128,1/*147*/, /*->2911*/
/*2764*/        OPC_RecordChild3, // #3 = $ptroff
/*2765*/        OPC_Scope, 57, /*->2824*/ // 4 children in Scope
/*2767*/          OPC_CheckPredicate, 28, // Predicate_itruncstore
/*2769*/          OPC_CheckPredicate, 29, // Predicate_pre_truncst
/*2771*/          OPC_Scope, 16, /*->2789*/ // 3 children in Scope
/*2773*/            OPC_CheckPredicate, 30, // Predicate_pre_truncsti8
/*2775*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2778*/            OPC_EmitMergeInputChains1_0,
/*2779*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBU8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR i64:i64:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti8>> - Complexity = 10
                    // Dst: (STBU8:iPTR ?:i64:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2789*/          /*Scope*/ 16, /*->2806*/
/*2790*/            OPC_CheckPredicate, 31, // Predicate_pre_truncsti16
/*2792*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2795*/            OPC_EmitMergeInputChains1_0,
/*2796*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHU8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR i64:i64:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti16>> - Complexity = 10
                    // Dst: (STHU8:iPTR ?:i64:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2806*/          /*Scope*/ 16, /*->2823*/
/*2807*/            OPC_CheckPredicate, 37, // Predicate_pre_truncsti32
/*2809*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2812*/            OPC_EmitMergeInputChains1_0,
/*2813*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STWU8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR i64:i64:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti32>> - Complexity = 10
                    // Dst: (STWU8:iPTR ?:i64:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2823*/          0, /*End of Scope*/
/*2824*/        /*Scope*/ 20, /*->2845*/
/*2825*/          OPC_CheckPredicate, 32, // Predicate_istore
/*2827*/          OPC_CheckPredicate, 33, // Predicate_pre_store
/*2829*/          OPC_CheckPredicate, 38, // Predicate_aligned4pre_store
/*2831*/          OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2834*/          OPC_EmitMergeInputChains1_0,
/*2835*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STDU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR i64:i64:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>><<P:Predicate_aligned4pre_store>> - Complexity = 10
                  // Dst: (STDU:iPTR ?:i64:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2845*/        /*Scope*/ 48, /*->2894*/
/*2846*/          OPC_CheckPredicate, 28, // Predicate_itruncstore
/*2848*/          OPC_CheckPredicate, 29, // Predicate_pre_truncst
/*2850*/          OPC_Scope, 13, /*->2865*/ // 3 children in Scope
/*2852*/            OPC_CheckPredicate, 30, // Predicate_pre_truncsti8
/*2854*/            OPC_EmitMergeInputChains1_0,
/*2855*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBUX8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (ist:iPTR i64:i64:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti8>> - Complexity = 4
                    // Dst: (STBUX8:iPTR ?:i64:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2865*/          /*Scope*/ 13, /*->2879*/
/*2866*/            OPC_CheckPredicate, 31, // Predicate_pre_truncsti16
/*2868*/            OPC_EmitMergeInputChains1_0,
/*2869*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHUX8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (ist:iPTR i64:i64:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti16>> - Complexity = 4
                    // Dst: (STHUX8:iPTR ?:i64:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2879*/          /*Scope*/ 13, /*->2893*/
/*2880*/            OPC_CheckPredicate, 37, // Predicate_pre_truncsti32
/*2882*/            OPC_EmitMergeInputChains1_0,
/*2883*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STWUX8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (ist:iPTR i64:i64:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti32>> - Complexity = 4
                    // Dst: (STWUX8:iPTR ?:i64:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2893*/          0, /*End of Scope*/
/*2894*/        /*Scope*/ 15, /*->2910*/
/*2895*/          OPC_CheckPredicate, 32, // Predicate_istore
/*2897*/          OPC_CheckPredicate, 33, // Predicate_pre_store
/*2899*/          OPC_EmitMergeInputChains1_0,
/*2900*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STDUX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (ist:iPTR i64:i64:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 4
                  // Dst: (STDUX:iPTR ?:i64:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2910*/        0, /*End of Scope*/
/*2911*/      0, /*End of Scope*/
/*2912*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_ADD),// ->2999
/*2916*/    OPC_RecordMemRef,
/*2917*/    OPC_RecordNode,   // #0 = 'atomic_load_add' chained node
/*2918*/    OPC_RecordChild1, // #1 = $ptr
/*2919*/    OPC_RecordChild2, // #2 = $incr
/*2920*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->2979
/*2923*/      OPC_Scope, 17, /*->2942*/ // 3 children in Scope
/*2925*/        OPC_CheckPredicate, 39, // Predicate_atomic_load_add_8
/*2927*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2930*/        OPC_EmitMergeInputChains1_0,
/*2931*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_ADD_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_add:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_add_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_ADD_I8:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*2942*/      /*Scope*/ 17, /*->2960*/
/*2943*/        OPC_CheckPredicate, 40, // Predicate_atomic_load_add_16
/*2945*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2948*/        OPC_EmitMergeInputChains1_0,
/*2949*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_ADD_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_add:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_add_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_ADD_I16:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*2960*/      /*Scope*/ 17, /*->2978*/
/*2961*/        OPC_CheckPredicate, 41, // Predicate_atomic_load_add_32
/*2963*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2966*/        OPC_EmitMergeInputChains1_0,
/*2967*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_ADD_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_add:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_add_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_ADD_I32:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*2978*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->2998
/*2981*/      OPC_CheckPredicate, 42, // Predicate_atomic_load_add_64
/*2983*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2986*/      OPC_EmitMergeInputChains1_0,
/*2987*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_ADD_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_add:i64 xoaddr:iPTR:$ptr, i64:i64:$incr)<<P:Predicate_atomic_load_add_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_ADD_I64:i64:i32 xoaddr:iPTR:$ptr, i64:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_SUB),// ->3085
/*3002*/    OPC_RecordMemRef,
/*3003*/    OPC_RecordNode,   // #0 = 'atomic_load_sub' chained node
/*3004*/    OPC_RecordChild1, // #1 = $ptr
/*3005*/    OPC_RecordChild2, // #2 = $incr
/*3006*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3065
/*3009*/      OPC_Scope, 17, /*->3028*/ // 3 children in Scope
/*3011*/        OPC_CheckPredicate, 43, // Predicate_atomic_load_sub_8
/*3013*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3016*/        OPC_EmitMergeInputChains1_0,
/*3017*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_SUB_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_sub:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_sub_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_SUB_I8:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3028*/      /*Scope*/ 17, /*->3046*/
/*3029*/        OPC_CheckPredicate, 44, // Predicate_atomic_load_sub_16
/*3031*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3034*/        OPC_EmitMergeInputChains1_0,
/*3035*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_SUB_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_sub:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_sub_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_SUB_I16:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3046*/      /*Scope*/ 17, /*->3064*/
/*3047*/        OPC_CheckPredicate, 45, // Predicate_atomic_load_sub_32
/*3049*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3052*/        OPC_EmitMergeInputChains1_0,
/*3053*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_SUB_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_sub:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_sub_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_SUB_I32:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3064*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3084
/*3067*/      OPC_CheckPredicate, 46, // Predicate_atomic_load_sub_64
/*3069*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3072*/      OPC_EmitMergeInputChains1_0,
/*3073*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_SUB_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_sub:i64 xoaddr:iPTR:$ptr, i64:i64:$incr)<<P:Predicate_atomic_load_sub_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_SUB_I64:i64:i32 xoaddr:iPTR:$ptr, i64:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_AND),// ->3171
/*3088*/    OPC_RecordMemRef,
/*3089*/    OPC_RecordNode,   // #0 = 'atomic_load_and' chained node
/*3090*/    OPC_RecordChild1, // #1 = $ptr
/*3091*/    OPC_RecordChild2, // #2 = $incr
/*3092*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3151
/*3095*/      OPC_Scope, 17, /*->3114*/ // 3 children in Scope
/*3097*/        OPC_CheckPredicate, 47, // Predicate_atomic_load_and_8
/*3099*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3102*/        OPC_EmitMergeInputChains1_0,
/*3103*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_AND_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_and:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_and_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_AND_I8:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3114*/      /*Scope*/ 17, /*->3132*/
/*3115*/        OPC_CheckPredicate, 48, // Predicate_atomic_load_and_16
/*3117*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3120*/        OPC_EmitMergeInputChains1_0,
/*3121*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_AND_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_and:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_and_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_AND_I16:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3132*/      /*Scope*/ 17, /*->3150*/
/*3133*/        OPC_CheckPredicate, 49, // Predicate_atomic_load_and_32
/*3135*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3138*/        OPC_EmitMergeInputChains1_0,
/*3139*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_AND_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_and:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_and_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_AND_I32:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3150*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3170
/*3153*/      OPC_CheckPredicate, 50, // Predicate_atomic_load_and_64
/*3155*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3158*/      OPC_EmitMergeInputChains1_0,
/*3159*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_AND_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_and:i64 xoaddr:iPTR:$ptr, i64:i64:$incr)<<P:Predicate_atomic_load_and_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_AND_I64:i64:i32 xoaddr:iPTR:$ptr, i64:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_OR),// ->3257
/*3174*/    OPC_RecordMemRef,
/*3175*/    OPC_RecordNode,   // #0 = 'atomic_load_or' chained node
/*3176*/    OPC_RecordChild1, // #1 = $ptr
/*3177*/    OPC_RecordChild2, // #2 = $incr
/*3178*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3237
/*3181*/      OPC_Scope, 17, /*->3200*/ // 3 children in Scope
/*3183*/        OPC_CheckPredicate, 51, // Predicate_atomic_load_or_8
/*3185*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3188*/        OPC_EmitMergeInputChains1_0,
/*3189*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_OR_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_or:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_or_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_OR_I8:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3200*/      /*Scope*/ 17, /*->3218*/
/*3201*/        OPC_CheckPredicate, 52, // Predicate_atomic_load_or_16
/*3203*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3206*/        OPC_EmitMergeInputChains1_0,
/*3207*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_OR_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_or:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_or_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_OR_I16:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3218*/      /*Scope*/ 17, /*->3236*/
/*3219*/        OPC_CheckPredicate, 53, // Predicate_atomic_load_or_32
/*3221*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3224*/        OPC_EmitMergeInputChains1_0,
/*3225*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_OR_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_or:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_or_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_OR_I32:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3236*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3256
/*3239*/      OPC_CheckPredicate, 54, // Predicate_atomic_load_or_64
/*3241*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3244*/      OPC_EmitMergeInputChains1_0,
/*3245*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_OR_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_or:i64 xoaddr:iPTR:$ptr, i64:i64:$incr)<<P:Predicate_atomic_load_or_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_OR_I64:i64:i32 xoaddr:iPTR:$ptr, i64:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_XOR),// ->3343
/*3260*/    OPC_RecordMemRef,
/*3261*/    OPC_RecordNode,   // #0 = 'atomic_load_xor' chained node
/*3262*/    OPC_RecordChild1, // #1 = $ptr
/*3263*/    OPC_RecordChild2, // #2 = $incr
/*3264*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3323
/*3267*/      OPC_Scope, 17, /*->3286*/ // 3 children in Scope
/*3269*/        OPC_CheckPredicate, 55, // Predicate_atomic_load_xor_8
/*3271*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3274*/        OPC_EmitMergeInputChains1_0,
/*3275*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_XOR_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_xor:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_xor_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_XOR_I8:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3286*/      /*Scope*/ 17, /*->3304*/
/*3287*/        OPC_CheckPredicate, 56, // Predicate_atomic_load_xor_16
/*3289*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3292*/        OPC_EmitMergeInputChains1_0,
/*3293*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_XOR_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_xor:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_xor_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_XOR_I16:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3304*/      /*Scope*/ 17, /*->3322*/
/*3305*/        OPC_CheckPredicate, 57, // Predicate_atomic_load_xor_32
/*3307*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3310*/        OPC_EmitMergeInputChains1_0,
/*3311*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_XOR_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_xor:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_xor_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_XOR_I32:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3322*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3342
/*3325*/      OPC_CheckPredicate, 58, // Predicate_atomic_load_xor_64
/*3327*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3330*/      OPC_EmitMergeInputChains1_0,
/*3331*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_XOR_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_xor:i64 xoaddr:iPTR:$ptr, i64:i64:$incr)<<P:Predicate_atomic_load_xor_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_XOR_I64:i64:i32 xoaddr:iPTR:$ptr, i64:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_NAND),// ->3429
/*3346*/    OPC_RecordMemRef,
/*3347*/    OPC_RecordNode,   // #0 = 'atomic_load_nand' chained node
/*3348*/    OPC_RecordChild1, // #1 = $ptr
/*3349*/    OPC_RecordChild2, // #2 = $incr
/*3350*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3409
/*3353*/      OPC_Scope, 17, /*->3372*/ // 3 children in Scope
/*3355*/        OPC_CheckPredicate, 59, // Predicate_atomic_load_nand_8
/*3357*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3360*/        OPC_EmitMergeInputChains1_0,
/*3361*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_NAND_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_nand:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_nand_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_NAND_I8:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3372*/      /*Scope*/ 17, /*->3390*/
/*3373*/        OPC_CheckPredicate, 60, // Predicate_atomic_load_nand_16
/*3375*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3378*/        OPC_EmitMergeInputChains1_0,
/*3379*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_NAND_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_nand:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_nand_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_NAND_I16:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3390*/      /*Scope*/ 17, /*->3408*/
/*3391*/        OPC_CheckPredicate, 61, // Predicate_atomic_load_nand_32
/*3393*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3396*/        OPC_EmitMergeInputChains1_0,
/*3397*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_NAND_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_nand:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_nand_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_NAND_I32:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3408*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3428
/*3411*/      OPC_CheckPredicate, 62, // Predicate_atomic_load_nand_64
/*3413*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3416*/      OPC_EmitMergeInputChains1_0,
/*3417*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_NAND_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_nand:i64 xoaddr:iPTR:$ptr, i64:i64:$incr)<<P:Predicate_atomic_load_nand_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_NAND_I64:i64:i32 xoaddr:iPTR:$ptr, i64:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 88,  TARGET_VAL(ISD::ATOMIC_CMP_SWAP),// ->3520
/*3432*/    OPC_RecordMemRef,
/*3433*/    OPC_RecordNode,   // #0 = 'atomic_cmp_swap' chained node
/*3434*/    OPC_RecordChild1, // #1 = $ptr
/*3435*/    OPC_RecordChild2, // #2 = $old
/*3436*/    OPC_RecordChild3, // #3 = $new
/*3437*/    OPC_SwitchType /*2 cases */, 59,  MVT::i32,// ->3499
/*3440*/      OPC_Scope, 18, /*->3460*/ // 3 children in Scope
/*3442*/        OPC_CheckPredicate, 63, // Predicate_atomic_cmp_swap_8
/*3444*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #4 #5
/*3447*/        OPC_EmitMergeInputChains1_0,
/*3448*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_CMP_SWAP_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 4, 5, 2, 3, 
                // Src: (atomic_cmp_swap:i32 xoaddr:iPTR:$ptr, i32:i32:$old, i32:i32:$new)<<P:Predicate_atomic_cmp_swap_8>> - Complexity = 13
                // Dst: (ATOMIC_CMP_SWAP_I8:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$old, i32:i32:$new)
/*3460*/      /*Scope*/ 18, /*->3479*/
/*3461*/        OPC_CheckPredicate, 64, // Predicate_atomic_cmp_swap_16
/*3463*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #4 #5
/*3466*/        OPC_EmitMergeInputChains1_0,
/*3467*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_CMP_SWAP_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 4, 5, 2, 3, 
                // Src: (atomic_cmp_swap:i32 xoaddr:iPTR:$ptr, i32:i32:$old, i32:i32:$new)<<P:Predicate_atomic_cmp_swap_16>> - Complexity = 13
                // Dst: (ATOMIC_CMP_SWAP_I16:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$old, i32:i32:$new)
/*3479*/      /*Scope*/ 18, /*->3498*/
/*3480*/        OPC_CheckPredicate, 65, // Predicate_atomic_cmp_swap_32
/*3482*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #4 #5
/*3485*/        OPC_EmitMergeInputChains1_0,
/*3486*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_CMP_SWAP_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 4, 5, 2, 3, 
                // Src: (atomic_cmp_swap:i32 xoaddr:iPTR:$ptr, i32:i32:$old, i32:i32:$new)<<P:Predicate_atomic_cmp_swap_32>> - Complexity = 13
                // Dst: (ATOMIC_CMP_SWAP_I32:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$old, i32:i32:$new)
/*3498*/      0, /*End of Scope*/
            /*SwitchType*/ 18,  MVT::i64,// ->3519
/*3501*/      OPC_CheckPredicate, 66, // Predicate_atomic_cmp_swap_64
/*3503*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #4 #5
/*3506*/      OPC_EmitMergeInputChains1_0,
/*3507*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_CMP_SWAP_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 4, 5, 2, 3, 
              // Src: (atomic_cmp_swap:i64 xoaddr:iPTR:$ptr, i64:i64:$old, i64:i64:$new)<<P:Predicate_atomic_cmp_swap_64>> - Complexity = 13
              // Dst: (ATOMIC_CMP_SWAP_I64:i64:i32 xoaddr:iPTR:$ptr, i64:i64:$old, i64:i64:$new)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_SWAP),// ->3606
/*3523*/    OPC_RecordMemRef,
/*3524*/    OPC_RecordNode,   // #0 = 'atomic_swap' chained node
/*3525*/    OPC_RecordChild1, // #1 = $ptr
/*3526*/    OPC_RecordChild2, // #2 = $new
/*3527*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3586
/*3530*/      OPC_Scope, 17, /*->3549*/ // 3 children in Scope
/*3532*/        OPC_CheckPredicate, 67, // Predicate_atomic_swap_8
/*3534*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3537*/        OPC_EmitMergeInputChains1_0,
/*3538*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_SWAP_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_swap:i32 xoaddr:iPTR:$ptr, i32:i32:$new)<<P:Predicate_atomic_swap_8>> - Complexity = 13
                // Dst: (ATOMIC_SWAP_I8:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$new)
/*3549*/      /*Scope*/ 17, /*->3567*/
/*3550*/        OPC_CheckPredicate, 68, // Predicate_atomic_swap_16
/*3552*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3555*/        OPC_EmitMergeInputChains1_0,
/*3556*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_SWAP_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_swap:i32 xoaddr:iPTR:$ptr, i32:i32:$new)<<P:Predicate_atomic_swap_16>> - Complexity = 13
                // Dst: (ATOMIC_SWAP_I16:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$new)
/*3567*/      /*Scope*/ 17, /*->3585*/
/*3568*/        OPC_CheckPredicate, 69, // Predicate_atomic_swap_32
/*3570*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3573*/        OPC_EmitMergeInputChains1_0,
/*3574*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_SWAP_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_swap:i32 xoaddr:iPTR:$ptr, i32:i32:$new)<<P:Predicate_atomic_swap_32>> - Complexity = 13
                // Dst: (ATOMIC_SWAP_I32:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$new)
/*3585*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3605
/*3588*/      OPC_CheckPredicate, 70, // Predicate_atomic_swap_64
/*3590*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3593*/      OPC_EmitMergeInputChains1_0,
/*3594*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_SWAP_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_swap:i64 xoaddr:iPTR:$ptr, i64:i64:$new)<<P:Predicate_atomic_swap_64>> - Complexity = 13
              // Dst: (ATOMIC_SWAP_I64:i64:i32 xoaddr:iPTR:$ptr, i64:i64:$new)
            0, // EndSwitchType
          /*SwitchOpcode*/ 48,  TARGET_VAL(PPCISD::DYNALLOC),// ->3657
/*3609*/    OPC_RecordNode,   // #0 = 'PPCdynalloc' chained node
/*3610*/    OPC_RecordChild1, // #1 = $negsize
/*3611*/    OPC_SwitchType /*2 cases */, 20,  MVT::i32,// ->3634
/*3614*/      OPC_CheckChild1Type, MVT::i32,
/*3616*/      OPC_RecordChild2, // #2 = $fpsi
/*3617*/      OPC_CheckChild2Type, MVT::iPTR,
/*3619*/      OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$fpsi #3 #4
/*3622*/      OPC_EmitMergeInputChains1_0,
/*3623*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DYNALLOC), 0|OPFL_Chain,
                  2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCdynalloc:i32 i32:i32:$negsize, iaddr:iPTR:$fpsi) - Complexity = 12
              // Dst: (DYNALLOC:i32:i32 i32:i32:$negsize, iaddr:iPTR:$fpsi)
            /*SwitchType*/ 20,  MVT::i64,// ->3656
/*3636*/      OPC_CheckChild1Type, MVT::i64,
/*3638*/      OPC_RecordChild2, // #2 = $fpsi
/*3639*/      OPC_CheckChild2Type, MVT::iPTR,
/*3641*/      OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$fpsi #3 #4
/*3644*/      OPC_EmitMergeInputChains1_0,
/*3645*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DYNALLOC8), 0|OPFL_Chain,
                  2/*#VTs*/, MVT::i64, MVT::i64, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCdynalloc:i64 i64:i64:$negsize, iaddr:iPTR:$fpsi) - Complexity = 12
              // Dst: (DYNALLOC8:i64:i64 i64:i64:$negsize, iaddr:iPTR:$fpsi)
            0, // EndSwitchType
          /*SwitchOpcode*/ 34,  TARGET_VAL(PPCISD::LARX),// ->3694
/*3660*/    OPC_RecordNode,   // #0 = 'PPClarx' chained node
/*3661*/    OPC_RecordChild1, // #1 = $src
/*3662*/    OPC_SwitchType /*2 cases */, 13,  MVT::i32,// ->3678
/*3665*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*3668*/      OPC_EmitMergeInputChains1_0,
/*3669*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWARX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (PPClarx:i32 xoaddr:iPTR:$src) - Complexity = 12
              // Dst: (LWARX:i32 xoaddr:iPTR:$src)
            /*SwitchType*/ 13,  MVT::i64,// ->3693
/*3680*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #2 #3
/*3683*/      OPC_EmitMergeInputChains1_0,
/*3684*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDARX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (PPClarx:i64 xoaddr:iPTR:$ptr) - Complexity = 12
              // Dst: (LDARX:i64 xoaddr:iPTR:$ptr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 40,  TARGET_VAL(PPCISD::STCX),// ->3737
/*3697*/    OPC_RecordNode,   // #0 = 'PPCstcx' chained node
/*3698*/    OPC_RecordChild1, // #1 = $rS
/*3699*/    OPC_Scope, 17, /*->3718*/ // 2 children in Scope
/*3701*/      OPC_CheckChild1Type, MVT::i32,
/*3703*/      OPC_RecordChild2, // #2 = $dst
/*3704*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*3707*/      OPC_EmitMergeInputChains1_0,
/*3708*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STWCX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstcx i32:i32:$rS, xoaddr:iPTR:$dst) - Complexity = 12
              // Dst: (STWCX:i32 i32:i32:$rS, xoaddr:iPTR:$dst)
/*3718*/    /*Scope*/ 17, /*->3736*/
/*3719*/      OPC_CheckChild1Type, MVT::i64,
/*3721*/      OPC_RecordChild2, // #2 = $dst
/*3722*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*3725*/      OPC_EmitMergeInputChains1_0,
/*3726*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STDCX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstcx i64:i64:$rS, xoaddr:iPTR:$dst) - Complexity = 12
              // Dst: (STDCX:i32 i64:i64:$rS, xoaddr:iPTR:$dst)
/*3736*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 63,  TARGET_VAL(PPCISD::LBRX),// ->3803
/*3740*/    OPC_RecordNode,   // #0 = 'PPClbrx' chained node
/*3741*/    OPC_RecordChild1, // #1 = $src
/*3742*/    OPC_MoveChild, 2,
/*3744*/    OPC_Scope, 18, /*->3764*/ // 3 children in Scope
/*3746*/      OPC_CheckValueType, MVT::i16,
/*3748*/      OPC_MoveParent,
/*3749*/      OPC_CheckType, MVT::i32,
/*3751*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*3754*/      OPC_EmitMergeInputChains1_0,
/*3755*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHBRX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (PPClbrx:i32 xoaddr:iPTR:$src, i16:Other) - Complexity = 12
              // Dst: (LHBRX:i32 xoaddr:iPTR:$src)
/*3764*/    /*Scope*/ 18, /*->3783*/
/*3765*/      OPC_CheckValueType, MVT::i32,
/*3767*/      OPC_MoveParent,
/*3768*/      OPC_CheckType, MVT::i32,
/*3770*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*3773*/      OPC_EmitMergeInputChains1_0,
/*3774*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWBRX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (PPClbrx:i32 xoaddr:iPTR:$src, i32:Other) - Complexity = 12
              // Dst: (LWBRX:i32 xoaddr:iPTR:$src)
/*3783*/    /*Scope*/ 18, /*->3802*/
/*3784*/      OPC_CheckValueType, MVT::i64,
/*3786*/      OPC_MoveParent,
/*3787*/      OPC_CheckType, MVT::i64,
/*3789*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*3792*/      OPC_EmitMergeInputChains1_0,
/*3793*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDBRX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (PPClbrx:i64 xoaddr:iPTR:$src, i64:Other) - Complexity = 12
              // Dst: (LDBRX:i64 xoaddr:iPTR:$src)
/*3802*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 68,  TARGET_VAL(PPCISD::STBRX),// ->3874
/*3806*/    OPC_RecordNode,   // #0 = 'PPCstbrx' chained node
/*3807*/    OPC_RecordChild1, // #1 = $rS
/*3808*/    OPC_Scope, 41, /*->3851*/ // 2 children in Scope
/*3810*/      OPC_CheckChild1Type, MVT::i32,
/*3812*/      OPC_RecordChild2, // #2 = $dst
/*3813*/      OPC_MoveChild, 3,
/*3815*/      OPC_Scope, 16, /*->3833*/ // 2 children in Scope
/*3817*/        OPC_CheckValueType, MVT::i16,
/*3819*/        OPC_MoveParent,
/*3820*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*3823*/        OPC_EmitMergeInputChains1_0,
/*3824*/        OPC_MorphNodeTo, TARGET_VAL(PPC::STHBRX), 0|OPFL_Chain,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (PPCstbrx i32:i32:$rS, xoaddr:iPTR:$dst, i16:Other) - Complexity = 12
                // Dst: (STHBRX i32:i32:$rS, xoaddr:iPTR:$dst)
/*3833*/      /*Scope*/ 16, /*->3850*/
/*3834*/        OPC_CheckValueType, MVT::i32,
/*3836*/        OPC_MoveParent,
/*3837*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*3840*/        OPC_EmitMergeInputChains1_0,
/*3841*/        OPC_MorphNodeTo, TARGET_VAL(PPC::STWBRX), 0|OPFL_Chain,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (PPCstbrx i32:i32:$rS, xoaddr:iPTR:$dst, i32:Other) - Complexity = 12
                // Dst: (STWBRX i32:i32:$rS, xoaddr:iPTR:$dst)
/*3850*/      0, /*End of Scope*/
/*3851*/    /*Scope*/ 21, /*->3873*/
/*3852*/      OPC_CheckChild1Type, MVT::i64,
/*3854*/      OPC_RecordChild2, // #2 = $dst
/*3855*/      OPC_MoveChild, 3,
/*3857*/      OPC_CheckValueType, MVT::i64,
/*3859*/      OPC_MoveParent,
/*3860*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*3863*/      OPC_EmitMergeInputChains1_0,
/*3864*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STDBRX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstbrx i64:i64:$rS, xoaddr:iPTR:$dst, i64:Other) - Complexity = 12
              // Dst: (STDBRX i64:i64:$rS, xoaddr:iPTR:$dst)
/*3873*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 16,  TARGET_VAL(PPCISD::STFIWX),// ->3893
/*3877*/    OPC_RecordNode,   // #0 = 'PPCstfiwx' chained node
/*3878*/    OPC_RecordChild1, // #1 = $frS
/*3879*/    OPC_RecordChild2, // #2 = $dst
/*3880*/    OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*3883*/    OPC_EmitMergeInputChains1_0,
/*3884*/    OPC_MorphNodeTo, TARGET_VAL(PPC::STFIWX), 0|OPFL_Chain,
                0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
            // Src: (PPCstfiwx f64:f64:$frS, xoaddr:iPTR:$dst) - Complexity = 12
            // Dst: (STFIWX f64:f64:$frS, xoaddr:iPTR:$dst)
          /*SwitchOpcode*/ 37,  TARGET_VAL(PPCISD::LOAD),// ->3933
/*3896*/    OPC_RecordNode,   // #0 = 'PPCload' chained node
/*3897*/    OPC_CaptureGlueInput,
/*3898*/    OPC_RecordChild1, // #1 = $src
/*3899*/    OPC_CheckChild1Type, MVT::iPTR,
/*3901*/    OPC_CheckType, MVT::i64,
/*3903*/    OPC_Scope, 13, /*->3918*/ // 2 children in Scope
/*3905*/      OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectAddrImmX4:$src #2 #3
/*3908*/      OPC_EmitMergeInputChains1_0,
/*3909*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LD), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (PPCload:i64 ixaddr:iPTR:$src) - Complexity = 12
              // Dst: (LD:i64 ixaddr:iPTR:$src)
/*3918*/    /*Scope*/ 13, /*->3932*/
/*3919*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*3922*/      OPC_EmitMergeInputChains1_0,
/*3923*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDX), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (PPCload:i64 xaddr:iPTR:$src) - Complexity = 12
              // Dst: (LDX:i64 xaddr:iPTR:$src)
/*3932*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 94|128,4/*606*/,  TARGET_VAL(ISD::XOR),// ->4543
/*3937*/    OPC_Scope, 39|128,1/*167*/, /*->4107*/ // 8 children in Scope
/*3940*/      OPC_MoveChild, 0,
/*3942*/      OPC_SwitchOpcode /*3 cases */, 41,  TARGET_VAL(ISD::AND),// ->3987
/*3946*/        OPC_RecordChild0, // #0 = $rS
/*3947*/        OPC_RecordChild1, // #1 = $rB
/*3948*/        OPC_MoveParent,
/*3949*/        OPC_MoveChild, 1,
/*3951*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3962*/        OPC_MoveParent,
/*3963*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->3975
/*3966*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NAND), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 (and:i32 i32:i32:$rS, i32:i32:$rB), -1:i32) - Complexity = 11
                  // Dst: (NAND:i32 i32:i32:$rS, i32:i32:$rB)
                /*SwitchType*/ 9,  MVT::i64,// ->3986
/*3977*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NAND8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i64 (and:i64 i64:i64:$rS, i64:i64:$rB), -1:i64) - Complexity = 11
                  // Dst: (NAND8:i64 i64:i64:$rS, i64:i64:$rB)
                0, // EndSwitchType
              /*SwitchOpcode*/ 41,  TARGET_VAL(ISD::OR),// ->4031
/*3990*/        OPC_RecordChild0, // #0 = $rS
/*3991*/        OPC_RecordChild1, // #1 = $rB
/*3992*/        OPC_MoveParent,
/*3993*/        OPC_MoveChild, 1,
/*3995*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4006*/        OPC_MoveParent,
/*4007*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->4019
/*4010*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 (or:i32 i32:i32:$rS, i32:i32:$rB), -1:i32) - Complexity = 11
                  // Dst: (NOR:i32 i32:i32:$rS, i32:i32:$rB)
                /*SwitchType*/ 9,  MVT::i64,// ->4030
/*4021*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NOR8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i64 (or:i64 i64:i64:$rS, i64:i64:$rB), -1:i64) - Complexity = 11
                  // Dst: (NOR8:i64 i64:i64:$rS, i64:i64:$rB)
                0, // EndSwitchType
              /*SwitchOpcode*/ 72,  TARGET_VAL(ISD::XOR),// ->4106
/*4034*/        OPC_RecordChild0, // #0 = $rS
/*4035*/        OPC_Scope, 40, /*->4077*/ // 2 children in Scope
/*4037*/          OPC_RecordChild1, // #1 = $rB
/*4038*/          OPC_MoveParent,
/*4039*/          OPC_MoveChild, 1,
/*4041*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4052*/          OPC_MoveParent,
/*4053*/          OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->4065
/*4056*/            OPC_MorphNodeTo, TARGET_VAL(PPC::EQV), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (xor:i32 (xor:i32 i32:i32:$rS, i32:i32:$rB), -1:i32) - Complexity = 11
                    // Dst: (EQV:i32 i32:i32:$rS, i32:i32:$rB)
                  /*SwitchType*/ 9,  MVT::i64,// ->4076
/*4067*/            OPC_MorphNodeTo, TARGET_VAL(PPC::EQV8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (xor:i64 (xor:i64 i64:i64:$rS, i64:i64:$rB), -1:i64) - Complexity = 11
                    // Dst: (EQV8:i64 i64:i64:$rS, i64:i64:$rB)
                  0, // EndSwitchType
/*4077*/        /*Scope*/ 27, /*->4105*/
/*4078*/          OPC_MoveChild, 1,
/*4080*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4091*/          OPC_MoveParent,
/*4092*/          OPC_MoveParent,
/*4093*/          OPC_RecordChild1, // #1 = $rB
/*4094*/          OPC_CheckType, MVT::i32,
/*4096*/          OPC_MorphNodeTo, TARGET_VAL(PPC::EQV), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 (xor:i32 i32:i32:$rS, -1:i32), i32:i32:$rB) - Complexity = 11
                  // Dst: (EQV:i32 i32:i32:$rS, i32:i32:$rB)
/*4105*/        0, /*End of Scope*/
              0, // EndSwitchOpcode
/*4107*/    /*Scope*/ 33, /*->4141*/
/*4108*/      OPC_RecordChild0, // #0 = $rB
/*4109*/      OPC_MoveChild, 1,
/*4111*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4114*/      OPC_RecordChild0, // #1 = $rS
/*4115*/      OPC_MoveChild, 1,
/*4117*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4128*/      OPC_MoveParent,
/*4129*/      OPC_MoveParent,
/*4130*/      OPC_CheckType, MVT::i32,
/*4132*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EQV), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (xor:i32 i32:i32:$rB, (xor:i32 i32:i32:$rS, -1:i32)) - Complexity = 11
              // Dst: (EQV:i32 i32:i32:$rS, i32:i32:$rB)
/*4141*/    /*Scope*/ 33, /*->4175*/
/*4142*/      OPC_MoveChild, 0,
/*4144*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4147*/      OPC_RecordChild0, // #0 = $rS
/*4148*/      OPC_MoveChild, 1,
/*4150*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4161*/      OPC_MoveParent,
/*4162*/      OPC_MoveParent,
/*4163*/      OPC_RecordChild1, // #1 = $rB
/*4164*/      OPC_CheckType, MVT::i64,
/*4166*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EQV8), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (xor:i64 (xor:i64 i64:i64:$rS, -1:i64), i64:i64:$rB) - Complexity = 11
              // Dst: (EQV8:i64 i64:i64:$rS, i64:i64:$rB)
/*4175*/    /*Scope*/ 84|128,1/*212*/, /*->4389*/
/*4177*/      OPC_RecordChild0, // #0 = $rB
/*4178*/      OPC_Scope, 59, /*->4239*/ // 2 children in Scope
/*4180*/        OPC_MoveChild, 1,
/*4182*/        OPC_Scope, 30, /*->4214*/ // 2 children in Scope
/*4184*/          OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4187*/          OPC_RecordChild0, // #1 = $rS
/*4188*/          OPC_MoveChild, 1,
/*4190*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4201*/          OPC_MoveParent,
/*4202*/          OPC_MoveParent,
/*4203*/          OPC_CheckType, MVT::i64,
/*4205*/          OPC_MorphNodeTo, TARGET_VAL(PPC::EQV8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (xor:i64 i64:i64:$rB, (xor:i64 i64:i64:$rS, -1:i64)) - Complexity = 11
                  // Dst: (EQV8:i64 i64:i64:$rS, i64:i64:$rB)
/*4214*/        /*Scope*/ 23, /*->4238*/
/*4215*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4226*/          OPC_MoveParent,
/*4227*/          OPC_CheckType, MVT::i32,
/*4229*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 0, 
                  // Src: (xor:i32 i32:i32:$in, -1:i32) - Complexity = 8
                  // Dst: (NOR:i32 ?:i32:$in, ?:i32:$in)
/*4238*/        0, /*End of Scope*/
/*4239*/      /*Scope*/ 19|128,1/*147*/, /*->4388*/
/*4241*/        OPC_RecordChild1, // #1 = $src2
/*4242*/        OPC_Scope, 119, /*->4363*/ // 3 children in Scope
/*4244*/          OPC_MoveChild, 1,
/*4246*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4249*/          OPC_Scope, 19, /*->4270*/ // 5 children in Scope
/*4251*/            OPC_CheckPredicate, 71, // Predicate_immZExt16
/*4253*/            OPC_MoveParent,
/*4254*/            OPC_CheckType, MVT::i32,
/*4256*/            OPC_EmitConvertToTarget, 1,
/*4258*/            OPC_EmitNodeXForm, 1, 2, // LO16
/*4261*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORI), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i32 i32:i32:$src1, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                    // Dst: (XORI:i32 i32:i32:$src1, (LO16:i32 (imm:i32):$src2))
/*4270*/          /*Scope*/ 19, /*->4290*/
/*4271*/            OPC_CheckPredicate, 72, // Predicate_imm16ShiftedZExt
/*4273*/            OPC_MoveParent,
/*4274*/            OPC_CheckType, MVT::i32,
/*4276*/            OPC_EmitConvertToTarget, 1,
/*4278*/            OPC_EmitNodeXForm, 0, 2, // HI16
/*4281*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i32 i32:i32:$src1, (imm:i32)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                    // Dst: (XORIS:i32 i32:i32:$src1, (HI16:i32 (imm:i32):$src2))
/*4290*/          /*Scope*/ 19, /*->4310*/
/*4291*/            OPC_CheckPredicate, 71, // Predicate_immZExt16
/*4293*/            OPC_MoveParent,
/*4294*/            OPC_CheckType, MVT::i64,
/*4296*/            OPC_EmitConvertToTarget, 1,
/*4298*/            OPC_EmitNodeXForm, 1, 2, // LO16
/*4301*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORI8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i64 i64:i64:$src1, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                    // Dst: (XORI8:i64 i64:i64:$src1, (LO16:i32 (imm:i64):$src2))
/*4310*/          /*Scope*/ 19, /*->4330*/
/*4311*/            OPC_CheckPredicate, 72, // Predicate_imm16ShiftedZExt
/*4313*/            OPC_MoveParent,
/*4314*/            OPC_CheckType, MVT::i64,
/*4316*/            OPC_EmitConvertToTarget, 1,
/*4318*/            OPC_EmitNodeXForm, 0, 2, // HI16
/*4321*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i64 i64:i64:$src1, (imm:i64)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                    // Dst: (XORIS8:i64 i64:i64:$src1, (HI16:i32 (imm:i64):$src2))
/*4330*/          /*Scope*/ 31, /*->4362*/
/*4331*/            OPC_MoveParent,
/*4332*/            OPC_CheckType, MVT::i32,
/*4334*/            OPC_EmitConvertToTarget, 1,
/*4336*/            OPC_EmitNodeXForm, 1, 2, // LO16
/*4339*/            OPC_EmitNode, TARGET_VAL(PPC::XORI), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/*4348*/            OPC_EmitConvertToTarget, 1,
/*4350*/            OPC_EmitNodeXForm, 0, 5, // HI16
/*4353*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 6, 
                    // Src: (xor:i32 i32:i32:$in, (imm:i32):$imm) - Complexity = 6
                    // Dst: (XORIS:i32 (XORI:i32 ?:i32:$in, (LO16:i32 (imm:i32):$imm)), (HI16:i32 (imm:i32):$imm))
/*4362*/          0, /*End of Scope*/
/*4363*/        /*Scope*/ 11, /*->4375*/
/*4364*/          OPC_CheckType, MVT::i32,
/*4366*/          OPC_MorphNodeTo, TARGET_VAL(PPC::XOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
                  // Dst: (XOR:i32 i32:i32:$rS, i32:i32:$rB)
/*4375*/        /*Scope*/ 11, /*->4387*/
/*4376*/          OPC_CheckType, MVT::i64,
/*4378*/          OPC_MorphNodeTo, TARGET_VAL(PPC::XOR8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i64 i64:i64:$rS, i64:i64:$rB) - Complexity = 3
                  // Dst: (XOR8:i64 i64:i64:$rS, i64:i64:$rB)
/*4387*/        0, /*End of Scope*/
/*4388*/      0, /*End of Scope*/
/*4389*/    /*Scope*/ 74, /*->4464*/
/*4390*/      OPC_MoveChild, 0,
/*4392*/      OPC_SwitchOpcode /*2 cases */, 32,  TARGET_VAL(ISD::OR),// ->4428
/*4396*/        OPC_RecordChild0, // #0 = $vA
/*4397*/        OPC_RecordChild1, // #1 = $vB
/*4398*/        OPC_MoveParent,
/*4399*/        OPC_MoveChild, 1,
/*4401*/        OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4404*/        OPC_MoveChild, 0,
/*4406*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4409*/        OPC_CheckPredicate, 73, // Predicate_immAllOnesV
/*4411*/        OPC_CheckType, MVT::v16i8,
/*4413*/        OPC_MoveParent,
/*4414*/        OPC_MoveParent,
/*4415*/        OPC_CheckType, MVT::v4i32,
/*4417*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4419*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VNOR), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:v4i32 (or:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB), (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>)) - Complexity = 13
                // Dst: (VNOR:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
              /*SwitchOpcode*/ 32,  TARGET_VAL(ISD::BITCAST),// ->4463
/*4431*/        OPC_MoveChild, 0,
/*4433*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4436*/        OPC_CheckPredicate, 73, // Predicate_immAllOnesV
/*4438*/        OPC_CheckType, MVT::v16i8,
/*4440*/        OPC_MoveParent,
/*4441*/        OPC_MoveParent,
/*4442*/        OPC_MoveChild, 1,
/*4444*/        OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*4447*/        OPC_RecordChild0, // #0 = $vA
/*4448*/        OPC_RecordChild1, // #1 = $vB
/*4449*/        OPC_MoveParent,
/*4450*/        OPC_CheckType, MVT::v4i32,
/*4452*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4454*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VNOR), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:v4i32 (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>), (or:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)) - Complexity = 13
                // Dst: (VNOR:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
              0, // EndSwitchOpcode
/*4464*/    /*Scope*/ 30, /*->4495*/
/*4465*/      OPC_RecordChild0, // #0 = $vA
/*4466*/      OPC_MoveChild, 1,
/*4468*/      OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4471*/      OPC_MoveChild, 0,
/*4473*/      OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4476*/      OPC_CheckPredicate, 73, // Predicate_immAllOnesV
/*4478*/      OPC_CheckType, MVT::v16i8,
/*4480*/      OPC_MoveParent,
/*4481*/      OPC_MoveParent,
/*4482*/      OPC_CheckType, MVT::v4i32,
/*4484*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4486*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VNOR), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 0, 
              // Src: (xor:v4i32 v4i32:v4i32:$vA, (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>)) - Complexity = 10
              // Dst: (VNOR:v4i32 ?:v4i32:$vA, ?:v4i32:$vA)
/*4495*/    /*Scope*/ 30, /*->4526*/
/*4496*/      OPC_MoveChild, 0,
/*4498*/      OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4501*/      OPC_MoveChild, 0,
/*4503*/      OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4506*/      OPC_CheckPredicate, 73, // Predicate_immAllOnesV
/*4508*/      OPC_CheckType, MVT::v16i8,
/*4510*/      OPC_MoveParent,
/*4511*/      OPC_MoveParent,
/*4512*/      OPC_RecordChild1, // #0 = $vA
/*4513*/      OPC_CheckType, MVT::v4i32,
/*4515*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4517*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VNOR), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 0, 
              // Src: (xor:v4i32 (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>), v4i32:v4i32:$vA) - Complexity = 10
              // Dst: (VNOR:v4i32 ?:v4i32:$vA, ?:v4i32:$vA)
/*4526*/    /*Scope*/ 15, /*->4542*/
/*4527*/      OPC_RecordChild0, // #0 = $vA
/*4528*/      OPC_RecordChild1, // #1 = $vB
/*4529*/      OPC_CheckType, MVT::v4i32,
/*4531*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4533*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VXOR), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (xor:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 3
              // Dst: (VXOR:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*4542*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 41|128,3/*425*/,  TARGET_VAL(ISD::AND),// ->4972
/*4547*/    OPC_Scope, 46, /*->4595*/ // 5 children in Scope
/*4549*/      OPC_RecordChild0, // #0 = $rS
/*4550*/      OPC_MoveChild, 1,
/*4552*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4555*/      OPC_RecordChild0, // #1 = $rB
/*4556*/      OPC_MoveChild, 1,
/*4558*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4569*/      OPC_MoveParent,
/*4570*/      OPC_MoveParent,
/*4571*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->4583
/*4574*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ANDC), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 i32:i32:$rS, (xor:i32 i32:i32:$rB, -1:i32)) - Complexity = 11
                // Dst: (ANDC:i32 i32:i32:$rS, i32:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->4594
/*4585*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ANDC8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (and:i64 i64:i64:$rS, (xor:i64 i64:i64:$rB, -1:i64)) - Complexity = 11
                // Dst: (ANDC8:i64 i64:i64:$rS, i64:i64:$rB)
              0, // EndSwitchType
/*4595*/    /*Scope*/ 88, /*->4684*/
/*4596*/      OPC_MoveChild, 0,
/*4598*/      OPC_SwitchOpcode /*2 cases */, 41,  TARGET_VAL(ISD::XOR),// ->4643
/*4602*/        OPC_RecordChild0, // #0 = $rB
/*4603*/        OPC_MoveChild, 1,
/*4605*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4616*/        OPC_MoveParent,
/*4617*/        OPC_MoveParent,
/*4618*/        OPC_RecordChild1, // #1 = $rS
/*4619*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->4631
/*4622*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ANDC), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (and:i32 (xor:i32 i32:i32:$rB, -1:i32), i32:i32:$rS) - Complexity = 11
                  // Dst: (ANDC:i32 i32:i32:$rS, i32:i32:$rB)
                /*SwitchType*/ 9,  MVT::i64,// ->4642
/*4633*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ANDC8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (and:i64 (xor:i64 i64:i64:$rB, -1:i64), i64:i64:$rS) - Complexity = 11
                  // Dst: (ANDC8:i64 i64:i64:$rS, i64:i64:$rB)
                0, // EndSwitchType
              /*SwitchOpcode*/ 37,  TARGET_VAL(ISD::ROTL),// ->4683
/*4646*/        OPC_RecordChild0, // #0 = $in
/*4647*/        OPC_RecordChild1, // #1 = $sh
/*4648*/        OPC_CheckChild1Type, MVT::i32,
/*4650*/        OPC_MoveParent,
/*4651*/        OPC_RecordChild1, // #2 = $imm
/*4652*/        OPC_MoveChild, 1,
/*4654*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4657*/        OPC_CheckPredicate, 74, // Predicate_maskimm32
/*4659*/        OPC_MoveParent,
/*4660*/        OPC_CheckType, MVT::i32,
/*4662*/        OPC_EmitConvertToTarget, 2,
/*4664*/        OPC_EmitNodeXForm, 3, 3, // MB
/*4667*/        OPC_EmitConvertToTarget, 2,
/*4669*/        OPC_EmitNodeXForm, 4, 5, // ME
/*4672*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWNM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 1, 4, 6, 
                // Src: (and:i32 (rotl:i32 i32:i32:$in, i32:i32:$sh), (imm:i32)<<P:Predicate_maskimm32>>:$imm) - Complexity = 10
                // Dst: (RLWNM:i32 ?:i32:$in, ?:i32:$sh, (MB:i32 (imm:i32)<<P:Predicate_maskimm32>>:$imm), (ME:i32 (imm:i32)<<P:Predicate_maskimm32>>:$imm))
              0, // EndSwitchOpcode
/*4684*/    /*Scope*/ 67|128,1/*195*/, /*->4881*/
/*4686*/      OPC_RecordChild0, // #0 = $src1
/*4687*/      OPC_Scope, 119, /*->4808*/ // 2 children in Scope
/*4689*/        OPC_RecordChild1, // #1 = $src2
/*4690*/        OPC_Scope, 91, /*->4783*/ // 3 children in Scope
/*4692*/          OPC_MoveChild, 1,
/*4694*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4697*/          OPC_Scope, 20, /*->4719*/ // 4 children in Scope
/*4699*/            OPC_CheckPredicate, 71, // Predicate_immZExt16
/*4701*/            OPC_MoveParent,
/*4702*/            OPC_CheckType, MVT::i32,
/*4704*/            OPC_EmitConvertToTarget, 1,
/*4706*/            OPC_EmitNodeXForm, 1, 2, // LO16
/*4709*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ANDIo), 0,
                        2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (and:i32 i32:i32:$src1, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                    // Dst: (ANDIo:i32:i32 i32:i32:$src1, (LO16:i32 (imm:i32):$src2))
/*4719*/          /*Scope*/ 20, /*->4740*/
/*4720*/            OPC_CheckPredicate, 72, // Predicate_imm16ShiftedZExt
/*4722*/            OPC_MoveParent,
/*4723*/            OPC_CheckType, MVT::i32,
/*4725*/            OPC_EmitConvertToTarget, 1,
/*4727*/            OPC_EmitNodeXForm, 0, 2, // HI16
/*4730*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ANDISo), 0,
                        2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (and:i32 i32:i32:$src1, (imm:i32)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                    // Dst: (ANDISo:i32:i32 i32:i32:$src1, (HI16:i32 (imm:i32):$src2))
/*4740*/          /*Scope*/ 20, /*->4761*/
/*4741*/            OPC_CheckPredicate, 71, // Predicate_immZExt16
/*4743*/            OPC_MoveParent,
/*4744*/            OPC_CheckType, MVT::i64,
/*4746*/            OPC_EmitConvertToTarget, 1,
/*4748*/            OPC_EmitNodeXForm, 1, 2, // LO16
/*4751*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ANDIo8), 0,
                        2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (and:i64 i64:i64:$src1, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                    // Dst: (ANDIo8:i64:i32 i64:i64:$src1, (LO16:i32 (imm:i64):$src2))
/*4761*/          /*Scope*/ 20, /*->4782*/
/*4762*/            OPC_CheckPredicate, 72, // Predicate_imm16ShiftedZExt
/*4764*/            OPC_MoveParent,
/*4765*/            OPC_CheckType, MVT::i64,
/*4767*/            OPC_EmitConvertToTarget, 1,
/*4769*/            OPC_EmitNodeXForm, 0, 2, // HI16
/*4772*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ANDISo8), 0,
                        2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (and:i64 i64:i64:$src1, (imm:i64)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                    // Dst: (ANDISo8:i64:i32 i64:i64:$src1, (HI16:i32 (imm:i64):$src2))
/*4782*/          0, /*End of Scope*/
/*4783*/        /*Scope*/ 11, /*->4795*/
/*4784*/          OPC_CheckType, MVT::i32,
/*4786*/          OPC_MorphNodeTo, TARGET_VAL(PPC::AND), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (and:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
                  // Dst: (AND:i32 i32:i32:$rS, i32:i32:$rB)
/*4795*/        /*Scope*/ 11, /*->4807*/
/*4796*/          OPC_CheckType, MVT::i64,
/*4798*/          OPC_MorphNodeTo, TARGET_VAL(PPC::AND8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (and:i64 i64:i64:$rS, i64:i64:$rB) - Complexity = 3
                  // Dst: (AND8:i64 i64:i64:$rS, i64:i64:$rB)
/*4807*/        0, /*End of Scope*/
/*4808*/      /*Scope*/ 71, /*->4880*/
/*4809*/        OPC_MoveChild, 1,
/*4811*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4814*/        OPC_Scope, 31, /*->4847*/ // 2 children in Scope
/*4816*/          OPC_RecordChild0, // #1 = $vB
/*4817*/          OPC_MoveChild, 1,
/*4819*/          OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4822*/          OPC_MoveChild, 0,
/*4824*/          OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4827*/          OPC_CheckPredicate, 73, // Predicate_immAllOnesV
/*4829*/          OPC_CheckType, MVT::v16i8,
/*4831*/          OPC_MoveParent,
/*4832*/          OPC_MoveParent,
/*4833*/          OPC_MoveParent,
/*4834*/          OPC_CheckType, MVT::v4i32,
/*4836*/          OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4838*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                      1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                  // Src: (and:v4i32 v4i32:v4i32:$vA, (xor:v4i32 v4i32:v4i32:$vB, (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>))) - Complexity = 13
                  // Dst: (VANDC:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*4847*/        /*Scope*/ 31, /*->4879*/
/*4848*/          OPC_MoveChild, 0,
/*4850*/          OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4853*/          OPC_MoveChild, 0,
/*4855*/          OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4858*/          OPC_CheckPredicate, 73, // Predicate_immAllOnesV
/*4860*/          OPC_CheckType, MVT::v16i8,
/*4862*/          OPC_MoveParent,
/*4863*/          OPC_MoveParent,
/*4864*/          OPC_RecordChild1, // #1 = $vB
/*4865*/          OPC_MoveParent,
/*4866*/          OPC_CheckType, MVT::v4i32,
/*4868*/          OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4870*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                      1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                  // Src: (and:v4i32 v4i32:v4i32:$vA, (xor:v4i32 (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>), v4i32:v4i32:$vB)) - Complexity = 13
                  // Dst: (VANDC:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*4879*/        0, /*End of Scope*/
/*4880*/      0, /*End of Scope*/
/*4881*/    /*Scope*/ 73, /*->4955*/
/*4882*/      OPC_MoveChild, 0,
/*4884*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4887*/      OPC_Scope, 32, /*->4921*/ // 2 children in Scope
/*4889*/        OPC_RecordChild0, // #0 = $vB
/*4890*/        OPC_MoveChild, 1,
/*4892*/        OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4895*/        OPC_MoveChild, 0,
/*4897*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4900*/        OPC_CheckPredicate, 73, // Predicate_immAllOnesV
/*4902*/        OPC_CheckType, MVT::v16i8,
/*4904*/        OPC_MoveParent,
/*4905*/        OPC_MoveParent,
/*4906*/        OPC_MoveParent,
/*4907*/        OPC_RecordChild1, // #1 = $vA
/*4908*/        OPC_CheckType, MVT::v4i32,
/*4910*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4912*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 1, 0, 
                // Src: (and:v4i32 (xor:v4i32 v4i32:v4i32:$vB, (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>)), v4i32:v4i32:$vA) - Complexity = 13
                // Dst: (VANDC:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*4921*/      /*Scope*/ 32, /*->4954*/
/*4922*/        OPC_MoveChild, 0,
/*4924*/        OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4927*/        OPC_MoveChild, 0,
/*4929*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4932*/        OPC_CheckPredicate, 73, // Predicate_immAllOnesV
/*4934*/        OPC_CheckType, MVT::v16i8,
/*4936*/        OPC_MoveParent,
/*4937*/        OPC_MoveParent,
/*4938*/        OPC_RecordChild1, // #0 = $vB
/*4939*/        OPC_MoveParent,
/*4940*/        OPC_RecordChild1, // #1 = $vA
/*4941*/        OPC_CheckType, MVT::v4i32,
/*4943*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4945*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 1, 0, 
                // Src: (and:v4i32 (xor:v4i32 (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>), v4i32:v4i32:$vB), v4i32:v4i32:$vA) - Complexity = 13
                // Dst: (VANDC:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*4954*/      0, /*End of Scope*/
/*4955*/    /*Scope*/ 15, /*->4971*/
/*4956*/      OPC_RecordChild0, // #0 = $vA
/*4957*/      OPC_RecordChild1, // #1 = $vB
/*4958*/      OPC_CheckType, MVT::v4i32,
/*4960*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4962*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAND), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (and:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 3
              // Dst: (VAND:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*4971*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 4|128,2/*260*/,  TARGET_VAL(ISD::OR),// ->5236
/*4976*/    OPC_Scope, 46, /*->5024*/ // 3 children in Scope
/*4978*/      OPC_RecordChild0, // #0 = $rS
/*4979*/      OPC_MoveChild, 1,
/*4981*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4984*/      OPC_RecordChild0, // #1 = $rB
/*4985*/      OPC_MoveChild, 1,
/*4987*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4998*/      OPC_MoveParent,
/*4999*/      OPC_MoveParent,
/*5000*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->5012
/*5003*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORC), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 i32:i32:$rS, (xor:i32 i32:i32:$rB, -1:i32)) - Complexity = 11
                // Dst: (ORC:i32 i32:i32:$rS, i32:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->5023
/*5014*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORC8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (or:i64 i64:i64:$rS, (xor:i64 i64:i64:$rB, -1:i64)) - Complexity = 11
                // Dst: (ORC8:i64 i64:i64:$rS, i64:i64:$rB)
              0, // EndSwitchType
/*5024*/    /*Scope*/ 46, /*->5071*/
/*5025*/      OPC_MoveChild, 0,
/*5027*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*5030*/      OPC_RecordChild0, // #0 = $rB
/*5031*/      OPC_MoveChild, 1,
/*5033*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5044*/      OPC_MoveParent,
/*5045*/      OPC_MoveParent,
/*5046*/      OPC_RecordChild1, // #1 = $rS
/*5047*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->5059
/*5050*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORC), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (or:i32 (xor:i32 i32:i32:$rB, -1:i32), i32:i32:$rS) - Complexity = 11
                // Dst: (ORC:i32 i32:i32:$rS, i32:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->5070
/*5061*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORC8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (or:i64 (xor:i64 i64:i64:$rB, -1:i64), i64:i64:$rS) - Complexity = 11
                // Dst: (ORC8:i64 i64:i64:$rS, i64:i64:$rB)
              0, // EndSwitchType
/*5071*/    /*Scope*/ 34|128,1/*162*/, /*->5235*/
/*5073*/      OPC_RecordChild0, // #0 = $src1
/*5074*/      OPC_RecordChild1, // #1 = $src2
/*5075*/      OPC_Scope, 119, /*->5196*/ // 4 children in Scope
/*5077*/        OPC_MoveChild, 1,
/*5079*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5082*/        OPC_Scope, 19, /*->5103*/ // 5 children in Scope
/*5084*/          OPC_CheckPredicate, 71, // Predicate_immZExt16
/*5086*/          OPC_MoveParent,
/*5087*/          OPC_CheckType, MVT::i32,
/*5089*/          OPC_EmitConvertToTarget, 1,
/*5091*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*5094*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORI), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i32 i32:i32:$src1, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                  // Dst: (ORI:i32 i32:i32:$src1, (LO16:i32 (imm:i32):$src2))
/*5103*/        /*Scope*/ 19, /*->5123*/
/*5104*/          OPC_CheckPredicate, 72, // Predicate_imm16ShiftedZExt
/*5106*/          OPC_MoveParent,
/*5107*/          OPC_CheckType, MVT::i32,
/*5109*/          OPC_EmitConvertToTarget, 1,
/*5111*/          OPC_EmitNodeXForm, 0, 2, // HI16
/*5114*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORIS), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i32 i32:i32:$src1, (imm:i32)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                  // Dst: (ORIS:i32 i32:i32:$src1, (HI16:i32 (imm:i32):$src2))
/*5123*/        /*Scope*/ 19, /*->5143*/
/*5124*/          OPC_CheckPredicate, 71, // Predicate_immZExt16
/*5126*/          OPC_MoveParent,
/*5127*/          OPC_CheckType, MVT::i64,
/*5129*/          OPC_EmitConvertToTarget, 1,
/*5131*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*5134*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORI8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 i64:i64:$src1, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                  // Dst: (ORI8:i64 i64:i64:$src1, (LO16:i32 (imm:i64):$src2))
/*5143*/        /*Scope*/ 19, /*->5163*/
/*5144*/          OPC_CheckPredicate, 72, // Predicate_imm16ShiftedZExt
/*5146*/          OPC_MoveParent,
/*5147*/          OPC_CheckType, MVT::i64,
/*5149*/          OPC_EmitConvertToTarget, 1,
/*5151*/          OPC_EmitNodeXForm, 0, 2, // HI16
/*5154*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORIS8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 i64:i64:$src1, (imm:i64)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                  // Dst: (ORIS8:i64 i64:i64:$src1, (HI16:i32 (imm:i64):$src2))
/*5163*/        /*Scope*/ 31, /*->5195*/
/*5164*/          OPC_MoveParent,
/*5165*/          OPC_CheckType, MVT::i32,
/*5167*/          OPC_EmitConvertToTarget, 1,
/*5169*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*5172*/          OPC_EmitNode, TARGET_VAL(PPC::ORI), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/*5181*/          OPC_EmitConvertToTarget, 1,
/*5183*/          OPC_EmitNodeXForm, 0, 5, // HI16
/*5186*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORIS), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 6, 
                  // Src: (or:i32 i32:i32:$in, (imm:i32):$imm) - Complexity = 6
                  // Dst: (ORIS:i32 (ORI:i32 ?:i32:$in, (LO16:i32 (imm:i32):$imm)), (HI16:i32 (imm:i32):$imm))
/*5195*/        0, /*End of Scope*/
/*5196*/      /*Scope*/ 11, /*->5208*/
/*5197*/        OPC_CheckType, MVT::i32,
/*5199*/        OPC_MorphNodeTo, TARGET_VAL(PPC::OR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
                // Dst: (OR:i32 i32:i32:$rS, i32:i32:$rB)
/*5208*/      /*Scope*/ 11, /*->5220*/
/*5209*/        OPC_CheckType, MVT::i64,
/*5211*/        OPC_MorphNodeTo, TARGET_VAL(PPC::OR8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (or:i64 i64:i64:$rS, i64:i64:$rB) - Complexity = 3
                // Dst: (OR8:i64 i64:i64:$rS, i64:i64:$rB)
/*5220*/      /*Scope*/ 13, /*->5234*/
/*5221*/        OPC_CheckType, MVT::v4i32,
/*5223*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5225*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VOR), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 3
                // Dst: (VOR:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*5234*/      0, /*End of Scope*/
/*5235*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 30|128,1/*158*/,  TARGET_VAL(PPCISD::Hi),// ->5398
/*5240*/    OPC_RecordChild0, // #0 = $in
/*5241*/    OPC_MoveChild, 0,
/*5243*/    OPC_SwitchOpcode /*5 cases */, 28,  TARGET_VAL(ISD::TargetGlobalAddress),// ->5275
/*5247*/      OPC_MoveParent,
/*5248*/      OPC_MoveChild, 1,
/*5250*/      OPC_CheckInteger, 0, 
/*5252*/      OPC_MoveParent,
/*5253*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5264
/*5256*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPChi:i32 (tglobaladdr:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LIS:i32 (tglobaladdr:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5274
/*5266*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPChi:i64 (tglobaladdr:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LIS8:i64 (tglobaladdr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetConstantPool),// ->5306
/*5278*/      OPC_MoveParent,
/*5279*/      OPC_MoveChild, 1,
/*5281*/      OPC_CheckInteger, 0, 
/*5283*/      OPC_MoveParent,
/*5284*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5295
/*5287*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPChi:i32 (tconstpool:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LIS:i32 (tconstpool:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5305
/*5297*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPChi:i64 (tconstpool:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LIS8:i64 (tconstpool:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetJumpTable),// ->5337
/*5309*/      OPC_MoveParent,
/*5310*/      OPC_MoveChild, 1,
/*5312*/      OPC_CheckInteger, 0, 
/*5314*/      OPC_MoveParent,
/*5315*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5326
/*5318*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPChi:i32 (tjumptable:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LIS:i32 (tjumptable:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5336
/*5328*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPChi:i64 (tjumptable:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LIS8:i64 (tjumptable:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetBlockAddress),// ->5368
/*5340*/      OPC_MoveParent,
/*5341*/      OPC_MoveChild, 1,
/*5343*/      OPC_CheckInteger, 0, 
/*5345*/      OPC_MoveParent,
/*5346*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5357
/*5349*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPChi:i32 (tblockaddress:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LIS:i32 (tblockaddress:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5367
/*5359*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPChi:i64 (tblockaddress:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LIS8:i64 (tblockaddress:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->5397
/*5371*/      OPC_MoveParent,
/*5372*/      OPC_RecordChild1, // #1 = $in
/*5373*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->5385
/*5376*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (PPChi:i32 (tglobaltlsaddr:i32):$g, i32:i32:$in) - Complexity = 6
                // Dst: (ADDIS:i32 ?:i32:$in, (tglobaltlsaddr:i32):$g)
              /*SwitchType*/ 9,  MVT::i64,// ->5396
/*5387*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (PPChi:i64 (tglobaltlsaddr:i64):$g, i64:i64:$in) - Complexity = 6
                // Dst: (ADDIS8:i64 ?:i64:$in, (tglobaltlsaddr:i64):$g)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 30|128,1/*158*/,  TARGET_VAL(PPCISD::Lo),// ->5560
/*5402*/    OPC_RecordChild0, // #0 = $in
/*5403*/    OPC_MoveChild, 0,
/*5405*/    OPC_SwitchOpcode /*5 cases */, 28,  TARGET_VAL(ISD::TargetGlobalAddress),// ->5437
/*5409*/      OPC_MoveParent,
/*5410*/      OPC_MoveChild, 1,
/*5412*/      OPC_CheckInteger, 0, 
/*5414*/      OPC_MoveParent,
/*5415*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5426
/*5418*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPClo:i32 (tglobaladdr:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LI:i32 (tglobaladdr:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5436
/*5428*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPClo:i64 (tglobaladdr:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LI8:i64 (tglobaladdr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetConstantPool),// ->5468
/*5440*/      OPC_MoveParent,
/*5441*/      OPC_MoveChild, 1,
/*5443*/      OPC_CheckInteger, 0, 
/*5445*/      OPC_MoveParent,
/*5446*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5457
/*5449*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPClo:i32 (tconstpool:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LI:i32 (tconstpool:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5467
/*5459*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPClo:i64 (tconstpool:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LI8:i64 (tconstpool:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetJumpTable),// ->5499
/*5471*/      OPC_MoveParent,
/*5472*/      OPC_MoveChild, 1,
/*5474*/      OPC_CheckInteger, 0, 
/*5476*/      OPC_MoveParent,
/*5477*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5488
/*5480*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPClo:i32 (tjumptable:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LI:i32 (tjumptable:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5498
/*5490*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPClo:i64 (tjumptable:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LI8:i64 (tjumptable:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetBlockAddress),// ->5530
/*5502*/      OPC_MoveParent,
/*5503*/      OPC_MoveChild, 1,
/*5505*/      OPC_CheckInteger, 0, 
/*5507*/      OPC_MoveParent,
/*5508*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5519
/*5511*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPClo:i32 (tblockaddress:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LI:i32 (tblockaddress:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5529
/*5521*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPClo:i64 (tblockaddress:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LI8:i64 (tblockaddress:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->5559
/*5533*/      OPC_MoveParent,
/*5534*/      OPC_RecordChild1, // #1 = $in
/*5535*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->5547
/*5538*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDI), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (PPClo:i32 (tglobaltlsaddr:i32):$g, i32:i32:$in) - Complexity = 6
                // Dst: (ADDI:i32 ?:i32:$in, (tglobaltlsaddr:i32):$g)
              /*SwitchType*/ 9,  MVT::i64,// ->5558
/*5549*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDI8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (PPClo:i64 (tglobaltlsaddr:i64):$g, i64:i64:$in) - Complexity = 6
                // Dst: (ADDI8:i64 ?:i64:$in, (tglobaltlsaddr:i64):$g)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 38,  TARGET_VAL(PPCISD::EH_SJLJ_SETJMP),// ->5601
/*5563*/    OPC_RecordNode,   // #0 = 'PPCeh_sjlj_setjmp' chained node
/*5564*/    OPC_RecordChild1, // #1 = $buf
/*5565*/    OPC_CheckType, MVT::i32,
/*5567*/    OPC_Scope, 15, /*->5584*/ // 2 children in Scope
/*5569*/      OPC_CheckPatternPredicate, 1, // (!PPCSubTarget.isPPC64())
/*5571*/      OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectAddr:$buf #2
/*5574*/      OPC_EmitMergeInputChains1_0,
/*5575*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EH_SjLj_SetJmp32), 0|OPFL_Chain,
                  2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 2, 
              // Src: (PPCeh_sjlj_setjmp:i32 addr:iPTR:$buf) - Complexity = 9
              // Dst: (EH_SjLj_SetJmp32:i32:i32 addr:iPTR:$buf)
/*5584*/    /*Scope*/ 15, /*->5600*/
/*5585*/      OPC_CheckPatternPredicate, 2, // (PPCSubTarget.isPPC64())
/*5587*/      OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectAddr:$buf #2
/*5590*/      OPC_EmitMergeInputChains1_0,
/*5591*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EH_SjLj_SetJmp64), 0|OPFL_Chain,
                  2/*#VTs*/, MVT::i32, MVT::i64, 1/*#Ops*/, 2, 
              // Src: (PPCeh_sjlj_setjmp:i32 addr:iPTR:$buf) - Complexity = 9
              // Dst: (EH_SjLj_SetJmp64:i32:i64 addr:iPTR:$buf)
/*5600*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 124,  TARGET_VAL(ISD::SUB),// ->5728
/*5604*/    OPC_Scope, 28, /*->5634*/ // 2 children in Scope
/*5606*/      OPC_MoveChild, 0,
/*5608*/      OPC_CheckInteger, 0, 
/*5610*/      OPC_MoveParent,
/*5611*/      OPC_RecordChild1, // #0 = $rA
/*5612*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5623
/*5615*/        OPC_MorphNodeTo, TARGET_VAL(PPC::NEG), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sub:i32 0:i32, i32:i32:$rA) - Complexity = 8
                // Dst: (NEG:i32 i32:i32:$rA)
              /*SwitchType*/ 8,  MVT::i64,// ->5633
/*5625*/        OPC_MorphNodeTo, TARGET_VAL(PPC::NEG8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sub:i64 0:i64, i64:i64:$rA) - Complexity = 8
                // Dst: (NEG8:i64 i64:i64:$rA)
              0, // EndSwitchType
/*5634*/    /*Scope*/ 92, /*->5727*/
/*5635*/      OPC_RecordChild0, // #0 = $imm
/*5636*/      OPC_Scope, 23, /*->5661*/ // 2 children in Scope
/*5638*/        OPC_MoveChild, 0,
/*5640*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5643*/        OPC_CheckPredicate, 0, // Predicate_imm32SExt16
/*5645*/        OPC_MoveParent,
/*5646*/        OPC_RecordChild1, // #1 = $in
/*5647*/        OPC_CheckType, MVT::i32,
/*5649*/        OPC_EmitConvertToTarget, 0,
/*5651*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFIC), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (sub:i32 (imm:i32)<<P:Predicate_imm32SExt16>>:$imm, i32:i32:$in) - Complexity = 7
                // Dst: (SUBFIC:i32:i32 ?:i32:$in, (imm:i32):$imm)
/*5661*/      /*Scope*/ 64, /*->5726*/
/*5662*/        OPC_RecordChild1, // #1 = $rA
/*5663*/        OPC_SwitchType /*5 cases */, 9,  MVT::i32,// ->5675
/*5666*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBF), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (sub:i32 i32:i32:$rB, i32:i32:$rA) - Complexity = 3
                  // Dst: (SUBF:i32 i32:i32:$rA, i32:i32:$rB)
                /*SwitchType*/ 9,  MVT::i64,// ->5686
/*5677*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBF8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (sub:i64 i64:i64:$rB, i64:i64:$rA) - Complexity = 3
                  // Dst: (SUBF8:i64 i64:i64:$rA, i64:i64:$rB)
                /*SwitchType*/ 11,  MVT::v16i8,// ->5699
/*5688*/          OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5690*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUBM), 0,
                      1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 3
                  // Dst: (VSUBUBM:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
                /*SwitchType*/ 11,  MVT::v8i16,// ->5712
/*5701*/          OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5703*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUHM), 0,
                      1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 3
                  // Dst: (VSUBUHM:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
                /*SwitchType*/ 11,  MVT::v4i32,// ->5725
/*5714*/          OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5716*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUWM), 0,
                      1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 3
                  // Dst: (VSUBUWM:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
                0, // EndSwitchType
/*5726*/      0, /*End of Scope*/
/*5727*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 102,  TARGET_VAL(ISD::ADDE),// ->5833
/*5731*/    OPC_CaptureGlueInput,
/*5732*/    OPC_RecordChild0, // #0 = $rA
/*5733*/    OPC_Scope, 69, /*->5804*/ // 2 children in Scope
/*5735*/      OPC_MoveChild, 1,
/*5737*/      OPC_Scope, 36, /*->5775*/ // 2 children in Scope
/*5739*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5750*/        OPC_MoveParent,
/*5751*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->5763
/*5754*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDME), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (adde:i32 i32:i32:$rA, -1:i32) - Complexity = 8
                  // Dst: (ADDME:i32:i32 i32:i32:$rA)
                /*SwitchType*/ 9,  MVT::i64,// ->5774
/*5765*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDME8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (adde:i64 i64:i64:$rA, -1:i64) - Complexity = 8
                  // Dst: (ADDME8:i64:i32 i64:i64:$rA)
                0, // EndSwitchType
/*5775*/      /*Scope*/ 27, /*->5803*/
/*5776*/        OPC_CheckInteger, 0, 
/*5778*/        OPC_MoveParent,
/*5779*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->5791
/*5782*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDZE), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (adde:i32 i32:i32:$rA, 0:i32) - Complexity = 8
                  // Dst: (ADDZE:i32:i32 i32:i32:$rA)
                /*SwitchType*/ 9,  MVT::i64,// ->5802
/*5793*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDZE8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (adde:i64 i64:i64:$rA, 0:i64) - Complexity = 8
                  // Dst: (ADDZE8:i64:i32 i64:i64:$rA)
                0, // EndSwitchType
/*5803*/      0, /*End of Scope*/
/*5804*/    /*Scope*/ 27, /*->5832*/
/*5805*/      OPC_RecordChild1, // #1 = $rB
/*5806*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->5819
/*5809*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDE), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (adde:i32 i32:i32:$rA, i32:i32:$rB) - Complexity = 3
                // Dst: (ADDE:i32:i32 i32:i32:$rA, i32:i32:$rB)
              /*SwitchType*/ 10,  MVT::i64,// ->5831
/*5821*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDE8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (adde:i64 i64:i64:$rA, i64:i64:$rB) - Complexity = 3
                // Dst: (ADDE8:i64:i32 i64:i64:$rA, i64:i64:$rB)
              0, // EndSwitchType
/*5832*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 104,  TARGET_VAL(ISD::SUBE),// ->5940
/*5836*/    OPC_CaptureGlueInput,
/*5837*/    OPC_Scope, 71, /*->5910*/ // 2 children in Scope
/*5839*/      OPC_MoveChild, 0,
/*5841*/      OPC_Scope, 37, /*->5880*/ // 2 children in Scope
/*5843*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5854*/        OPC_MoveParent,
/*5855*/        OPC_RecordChild1, // #0 = $rA
/*5856*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->5868
/*5859*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFME), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sube:i32 -1:i32, i32:i32:$rA) - Complexity = 8
                  // Dst: (SUBFME:i32:i32 i32:i32:$rA)
                /*SwitchType*/ 9,  MVT::i64,// ->5879
/*5870*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFME8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sube:i64 -1:i64, i64:i64:$rA) - Complexity = 8
                  // Dst: (SUBFME8:i64:i32 i64:i64:$rA)
                0, // EndSwitchType
/*5880*/      /*Scope*/ 28, /*->5909*/
/*5881*/        OPC_CheckInteger, 0, 
/*5883*/        OPC_MoveParent,
/*5884*/        OPC_RecordChild1, // #0 = $rA
/*5885*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->5897
/*5888*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFZE), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sube:i32 0:i32, i32:i32:$rA) - Complexity = 8
                  // Dst: (SUBFZE:i32:i32 i32:i32:$rA)
                /*SwitchType*/ 9,  MVT::i64,// ->5908
/*5899*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFZE8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sube:i64 0:i64, i64:i64:$rA) - Complexity = 8
                  // Dst: (SUBFZE8:i64:i32 i64:i64:$rA)
                0, // EndSwitchType
/*5909*/      0, /*End of Scope*/
/*5910*/    /*Scope*/ 28, /*->5939*/
/*5911*/      OPC_RecordChild0, // #0 = $rB
/*5912*/      OPC_RecordChild1, // #1 = $rA
/*5913*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->5926
/*5916*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFE), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (sube:i32 i32:i32:$rB, i32:i32:$rA) - Complexity = 3
                // Dst: (SUBFE:i32:i32 i32:i32:$rA, i32:i32:$rB)
              /*SwitchType*/ 10,  MVT::i64,// ->5938
/*5928*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFE8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (sube:i64 i64:i64:$rB, i64:i64:$rA) - Complexity = 3
                // Dst: (SUBFE8:i64:i32 i64:i64:$rA, i64:i64:$rB)
              0, // EndSwitchType
/*5939*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 74,  TARGET_VAL(ISD::ADDC),// ->6017
/*5943*/    OPC_RecordChild0, // #0 = $rA
/*5944*/    OPC_RecordChild1, // #1 = $imm
/*5945*/    OPC_Scope, 43, /*->5990*/ // 3 children in Scope
/*5947*/      OPC_MoveChild, 1,
/*5949*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5952*/      OPC_Scope, 17, /*->5971*/ // 2 children in Scope
/*5954*/        OPC_CheckPredicate, 0, // Predicate_imm32SExt16
/*5956*/        OPC_MoveParent,
/*5957*/        OPC_CheckType, MVT::i32,
/*5959*/        OPC_EmitConvertToTarget, 1,
/*5961*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIC), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (addc:i32 i32:i32:$rA, (imm:i32)<<P:Predicate_imm32SExt16>>:$imm) - Complexity = 7
                // Dst: (ADDIC:i32:i32 i32:i32:$rA, (imm:i32):$imm)
/*5971*/      /*Scope*/ 17, /*->5989*/
/*5972*/        OPC_CheckPredicate, 2, // Predicate_imm64SExt16
/*5974*/        OPC_MoveParent,
/*5975*/        OPC_CheckType, MVT::i64,
/*5977*/        OPC_EmitConvertToTarget, 1,
/*5979*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIC8), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (addc:i64 i64:i64:$rA, (imm:i64)<<P:Predicate_imm64SExt16>>:$imm) - Complexity = 7
                // Dst: (ADDIC8:i64:i32 i64:i64:$rA, (imm:i64):$imm)
/*5989*/      0, /*End of Scope*/
/*5990*/    /*Scope*/ 12, /*->6003*/
/*5991*/      OPC_CheckType, MVT::i32,
/*5993*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ADDC), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (addc:i32 i32:i32:$rA, i32:i32:$rB) - Complexity = 3
              // Dst: (ADDC:i32:i32 i32:i32:$rA, i32:i32:$rB)
/*6003*/    /*Scope*/ 12, /*->6016*/
/*6004*/      OPC_CheckType, MVT::i64,
/*6006*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ADDC8), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (addc:i64 i64:i64:$rA, i64:i64:$rB) - Complexity = 3
              // Dst: (ADDC8:i64:i32 i64:i64:$rA, i64:i64:$rB)
/*6016*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 70,  TARGET_VAL(ISD::MUL),// ->6090
/*6020*/    OPC_RecordChild0, // #0 = $rA
/*6021*/    OPC_RecordChild1, // #1 = $imm
/*6022*/    OPC_Scope, 41, /*->6065*/ // 3 children in Scope
/*6024*/      OPC_MoveChild, 1,
/*6026*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*6029*/      OPC_Scope, 16, /*->6047*/ // 2 children in Scope
/*6031*/        OPC_CheckPredicate, 0, // Predicate_imm32SExt16
/*6033*/        OPC_MoveParent,
/*6034*/        OPC_CheckType, MVT::i32,
/*6036*/        OPC_EmitConvertToTarget, 1,
/*6038*/        OPC_MorphNodeTo, TARGET_VAL(PPC::MULLI), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (mul:i32 i32:i32:$rA, (imm:i32)<<P:Predicate_imm32SExt16>>:$imm) - Complexity = 7
                // Dst: (MULLI:i32 i32:i32:$rA, (imm:i32):$imm)
/*6047*/      /*Scope*/ 16, /*->6064*/
/*6048*/        OPC_CheckPredicate, 2, // Predicate_imm64SExt16
/*6050*/        OPC_MoveParent,
/*6051*/        OPC_CheckType, MVT::i64,
/*6053*/        OPC_EmitConvertToTarget, 1,
/*6055*/        OPC_MorphNodeTo, TARGET_VAL(PPC::MULLI8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (mul:i64 i64:i64:$rA, (imm:i64)<<P:Predicate_imm64SExt16>>:$imm) - Complexity = 7
                // Dst: (MULLI8:i64 i64:i64:$rA, (imm:i64):$imm)
/*6064*/      0, /*End of Scope*/
/*6065*/    /*Scope*/ 11, /*->6077*/
/*6066*/      OPC_CheckType, MVT::i32,
/*6068*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULLW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mul:i32 i32:i32:$rA, i32:i32:$rB) - Complexity = 3
              // Dst: (MULLW:i32 i32:i32:$rA, i32:i32:$rB)
/*6077*/    /*Scope*/ 11, /*->6089*/
/*6078*/      OPC_CheckType, MVT::i64,
/*6080*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULLD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (mul:i64 i64:i64:$rA, i64:i64:$rB) - Complexity = 3
              // Dst: (MULLD:i64 i64:i64:$rA, i64:i64:$rB)
/*6089*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 77,  TARGET_VAL(ISD::SUBC),// ->6170
/*6093*/    OPC_RecordChild0, // #0 = $imm
/*6094*/    OPC_Scope, 45, /*->6141*/ // 2 children in Scope
/*6096*/      OPC_MoveChild, 0,
/*6098*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*6101*/      OPC_Scope, 18, /*->6121*/ // 2 children in Scope
/*6103*/        OPC_CheckPredicate, 0, // Predicate_imm32SExt16
/*6105*/        OPC_MoveParent,
/*6106*/        OPC_RecordChild1, // #1 = $rA
/*6107*/        OPC_CheckType, MVT::i32,
/*6109*/        OPC_EmitConvertToTarget, 0,
/*6111*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFIC), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (subc:i32 (imm:i32)<<P:Predicate_imm32SExt16>>:$imm, i32:i32:$rA) - Complexity = 7
                // Dst: (SUBFIC:i32:i32 i32:i32:$rA, (imm:i32):$imm)
/*6121*/      /*Scope*/ 18, /*->6140*/
/*6122*/        OPC_CheckPredicate, 2, // Predicate_imm64SExt16
/*6124*/        OPC_MoveParent,
/*6125*/        OPC_RecordChild1, // #1 = $rA
/*6126*/        OPC_CheckType, MVT::i64,
/*6128*/        OPC_EmitConvertToTarget, 0,
/*6130*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFIC8), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (subc:i64 (imm:i64)<<P:Predicate_imm64SExt16>>:$imm, i64:i64:$rA) - Complexity = 7
                // Dst: (SUBFIC8:i64:i32 i64:i64:$rA, (imm:i64):$imm)
/*6140*/      0, /*End of Scope*/
/*6141*/    /*Scope*/ 27, /*->6169*/
/*6142*/      OPC_RecordChild1, // #1 = $rA
/*6143*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->6156
/*6146*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFC), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (subc:i32 i32:i32:$rB, i32:i32:$rA) - Complexity = 3
                // Dst: (SUBFC:i32:i32 i32:i32:$rA, i32:i32:$rB)
              /*SwitchType*/ 10,  MVT::i64,// ->6168
/*6158*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFC8), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (subc:i64 i64:i64:$rB, i64:i64:$rA) - Complexity = 3
                // Dst: (SUBFC8:i64:i32 i64:i64:$rA, i64:i64:$rB)
              0, // EndSwitchType
/*6169*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 120,  TARGET_VAL(ISD::SRA),// ->6293
/*6173*/    OPC_RecordChild0, // #0 = $rS
/*6174*/    OPC_RecordChild1, // #1 = $SH
/*6175*/    OPC_Scope, 38, /*->6215*/ // 5 children in Scope
/*6177*/      OPC_MoveChild, 1,
/*6179*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*6182*/      OPC_CheckType, MVT::i32,
/*6184*/      OPC_MoveParent,
/*6185*/      OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->6200
/*6188*/        OPC_EmitConvertToTarget, 1,
/*6190*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRAWI), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i32 i32:i32:$rS, (imm:i32):$SH) - Complexity = 6
                // Dst: (SRAWI:i32:i32 i32:i32:$rS, (imm:i32):$SH)
              /*SwitchType*/ 12,  MVT::i64,// ->6214
/*6202*/        OPC_EmitConvertToTarget, 1,
/*6204*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRADI), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i64 i64:i64:$rS, (imm:i32):$SH) - Complexity = 6
                // Dst: (SRADI:i64:i32 i64:i64:$rS, (imm:i32):$SH)
              0, // EndSwitchType
/*6215*/    /*Scope*/ 28, /*->6244*/
/*6216*/      OPC_CheckChild1Type, MVT::i32,
/*6218*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->6231
/*6221*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRAW), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sra:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
                // Dst: (SRAW:i32:i32 ?:i32:$rS, ?:i32:$rB)
              /*SwitchType*/ 10,  MVT::i64,// ->6243
/*6233*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRAD), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sra:i64 i64:i64:$rS, i32:i32:$rB) - Complexity = 3
                // Dst: (SRAD:i64:i32 ?:i64:$rS, ?:i32:$rB)
              0, // EndSwitchType
/*6244*/    /*Scope*/ 15, /*->6260*/
/*6245*/      OPC_CheckChild1Type, MVT::v16i8,
/*6247*/      OPC_CheckType, MVT::v16i8,
/*6249*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6251*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (sra:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 3
              // Dst: (VSRAB:v16i8 ?:v16i8:$vA, ?:v16i8:$vB)
/*6260*/    /*Scope*/ 15, /*->6276*/
/*6261*/      OPC_CheckChild1Type, MVT::v8i16,
/*6263*/      OPC_CheckType, MVT::v8i16,
/*6265*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6267*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (sra:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 3
              // Dst: (VSRAH:v8i16 ?:v8i16:$vA, ?:v8i16:$vB)
/*6276*/    /*Scope*/ 15, /*->6292*/
/*6277*/      OPC_CheckChild1Type, MVT::v4i32,
/*6279*/      OPC_CheckType, MVT::v4i32,
/*6281*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6283*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (sra:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 3
              // Dst: (VSRAW:v4i32 ?:v4i32:$vA, ?:v4i32:$vB)
/*6292*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 4|128,1/*132*/,  TARGET_VAL(ISD::SHL),// ->6429
/*6297*/    OPC_RecordChild0, // #0 = $in
/*6298*/    OPC_RecordChild1, // #1 = $imm
/*6299*/    OPC_Scope, 52, /*->6353*/ // 5 children in Scope
/*6301*/      OPC_MoveChild, 1,
/*6303*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*6306*/      OPC_CheckType, MVT::i32,
/*6308*/      OPC_MoveParent,
/*6309*/      OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->6333
/*6312*/        OPC_EmitConvertToTarget, 1,
/*6314*/        OPC_EmitInteger, MVT::i32, 0, 
/*6317*/        OPC_EmitConvertToTarget, 1,
/*6319*/        OPC_EmitNodeXForm, 5, 4, // SHL32
/*6322*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWINM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 2, 3, 5, 
                // Src: (shl:i32 i32:i32:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLWINM:i32 ?:i32:$in, (imm:i32):$imm, 0:i32, (SHL32:i32 (imm:i32):$imm))
              /*SwitchType*/ 17,  MVT::i64,// ->6352
/*6335*/        OPC_EmitConvertToTarget, 1,
/*6337*/        OPC_EmitConvertToTarget, 1,
/*6339*/        OPC_EmitNodeXForm, 6, 3, // SHL64
/*6342*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLDICR), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 2, 4, 
                // Src: (shl:i64 i64:i64:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLDICR:i64 ?:i64:$in, (imm:i32):$imm, (SHL64:i32 (imm:i32):$imm))
              0, // EndSwitchType
/*6353*/    /*Scope*/ 26, /*->6380*/
/*6354*/      OPC_CheckChild1Type, MVT::i32,
/*6356*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->6368
/*6359*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SLW), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (shl:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
                // Dst: (SLW:i32 ?:i32:$rS, ?:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->6379
/*6370*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SLD), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (shl:i64 i64:i64:$rS, i32:i32:$rB) - Complexity = 3
                // Dst: (SLD:i64 ?:i64:$rS, ?:i32:$rB)
              0, // EndSwitchType
/*6380*/    /*Scope*/ 15, /*->6396*/
/*6381*/      OPC_CheckChild1Type, MVT::v16i8,
/*6383*/      OPC_CheckType, MVT::v16i8,
/*6385*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6387*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (shl:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 3
              // Dst: (VSLB:v16i8 ?:v16i8:$vA, ?:v16i8:$vB)
/*6396*/    /*Scope*/ 15, /*->6412*/
/*6397*/      OPC_CheckChild1Type, MVT::v8i16,
/*6399*/      OPC_CheckType, MVT::v8i16,
/*6401*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6403*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (shl:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 3
              // Dst: (VSLH:v8i16 ?:v8i16:$vA, ?:v8i16:$vB)
/*6412*/    /*Scope*/ 15, /*->6428*/
/*6413*/      OPC_CheckChild1Type, MVT::v4i32,
/*6415*/      OPC_CheckType, MVT::v4i32,
/*6417*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6419*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (shl:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 3
              // Dst: (VSLW:v4i32 ?:v4i32:$vA, ?:v4i32:$vB)
/*6428*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 4|128,1/*132*/,  TARGET_VAL(ISD::SRL),// ->6565
/*6433*/    OPC_RecordChild0, // #0 = $in
/*6434*/    OPC_RecordChild1, // #1 = $imm
/*6435*/    OPC_Scope, 52, /*->6489*/ // 5 children in Scope
/*6437*/      OPC_MoveChild, 1,
/*6439*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*6442*/      OPC_CheckType, MVT::i32,
/*6444*/      OPC_MoveParent,
/*6445*/      OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->6469
/*6448*/        OPC_EmitConvertToTarget, 1,
/*6450*/        OPC_EmitNodeXForm, 7, 2, // SRL32
/*6453*/        OPC_EmitConvertToTarget, 1,
/*6455*/        OPC_EmitInteger, MVT::i32, 31, 
/*6458*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWINM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (srl:i32 i32:i32:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLWINM:i32 ?:i32:$in, (SRL32:i32 (imm:i32):$imm), (imm:i32):$imm, 31:i32)
              /*SwitchType*/ 17,  MVT::i64,// ->6488
/*6471*/        OPC_EmitConvertToTarget, 1,
/*6473*/        OPC_EmitNodeXForm, 8, 2, // SRL64
/*6476*/        OPC_EmitConvertToTarget, 1,
/*6478*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLDICL), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 3, 4, 
                // Src: (srl:i64 i64:i64:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLDICL:i64 ?:i64:$in, (SRL64:i32 (imm:i32):$imm), (imm:i32):$imm)
              0, // EndSwitchType
/*6489*/    /*Scope*/ 26, /*->6516*/
/*6490*/      OPC_CheckChild1Type, MVT::i32,
/*6492*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->6504
/*6495*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRW), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (srl:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
                // Dst: (SRW:i32 ?:i32:$rS, ?:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->6515
/*6506*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRD), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (srl:i64 i64:i64:$rS, i32:i32:$rB) - Complexity = 3
                // Dst: (SRD:i64 ?:i64:$rS, ?:i32:$rB)
              0, // EndSwitchType
/*6516*/    /*Scope*/ 15, /*->6532*/
/*6517*/      OPC_CheckChild1Type, MVT::v16i8,
/*6519*/      OPC_CheckType, MVT::v16i8,
/*6521*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6523*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (srl:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 3
              // Dst: (VSRB:v16i8 ?:v16i8:$vA, ?:v16i8:$vB)
/*6532*/    /*Scope*/ 15, /*->6548*/
/*6533*/      OPC_CheckChild1Type, MVT::v8i16,
/*6535*/      OPC_CheckType, MVT::v8i16,
/*6537*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6539*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (srl:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 3
              // Dst: (VSRH:v8i16 ?:v8i16:$vA, ?:v8i16:$vB)
/*6548*/    /*Scope*/ 15, /*->6564*/
/*6549*/      OPC_CheckChild1Type, MVT::v4i32,
/*6551*/      OPC_CheckType, MVT::v4i32,
/*6553*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6555*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (srl:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 3
              // Dst: (VSRW:v4i32 ?:v4i32:$vA, ?:v4i32:$vB)
/*6564*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 92,  TARGET_VAL(ISD::ROTL),// ->6660
/*6568*/    OPC_RecordChild0, // #0 = $in
/*6569*/    OPC_RecordChild1, // #1 = $imm
/*6570*/    OPC_Scope, 48, /*->6620*/ // 2 children in Scope
/*6572*/      OPC_MoveChild, 1,
/*6574*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*6577*/      OPC_CheckType, MVT::i32,
/*6579*/      OPC_MoveParent,
/*6580*/      OPC_SwitchType /*2 cases */, 19,  MVT::i32,// ->6602
/*6583*/        OPC_EmitConvertToTarget, 1,
/*6585*/        OPC_EmitInteger, MVT::i32, 0, 
/*6588*/        OPC_EmitInteger, MVT::i32, 31, 
/*6591*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWINM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 2, 3, 4, 
                // Src: (rotl:i32 i32:i32:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLWINM:i32 ?:i32:$in, (imm:i32):$imm, 0:i32, 31:i32)
              /*SwitchType*/ 15,  MVT::i64,// ->6619
/*6604*/        OPC_EmitConvertToTarget, 1,
/*6606*/        OPC_EmitInteger, MVT::i32, 0, 
/*6609*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLDICL), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 2, 3, 
                // Src: (rotl:i64 i64:i64:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLDICL:i64 ?:i64:$in, (imm:i32):$imm, 0:i32)
              0, // EndSwitchType
/*6620*/    /*Scope*/ 38, /*->6659*/
/*6621*/      OPC_CheckChild1Type, MVT::i32,
/*6623*/      OPC_SwitchType /*2 cases */, 17,  MVT::i32,// ->6643
/*6626*/        OPC_EmitInteger, MVT::i32, 0, 
/*6629*/        OPC_EmitInteger, MVT::i32, 31, 
/*6632*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWNM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 1, 2, 3, 
                // Src: (rotl:i32 i32:i32:$in, i32:i32:$sh) - Complexity = 3
                // Dst: (RLWNM:i32 ?:i32:$in, ?:i32:$sh, 0:i32, 31:i32)
              /*SwitchType*/ 13,  MVT::i64,// ->6658
/*6645*/        OPC_EmitInteger, MVT::i32, 0, 
/*6648*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLDCL), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
                // Src: (rotl:i64 i64:i64:$in, i32:i32:$sh) - Complexity = 3
                // Dst: (RLDCL:i64 ?:i64:$in, ?:i32:$sh, 0:i32)
              0, // EndSwitchType
/*6659*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 53,  TARGET_VAL(PPCISD::TOC_ENTRY),// ->6716
/*6663*/    OPC_RecordChild0, // #0 = $disp
/*6664*/    OPC_MoveChild, 0,
/*6666*/    OPC_SwitchOpcode /*3 cases */, 13,  TARGET_VAL(ISD::TargetGlobalAddress),// ->6683
/*6670*/      OPC_MoveParent,
/*6671*/      OPC_RecordChild1, // #1 = $reg
/*6672*/      OPC_CheckType, MVT::i64,
/*6674*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDtoc), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (PPCtoc_entry:i64 (tglobaladdr:i64):$disp, i64:i64:$reg) - Complexity = 6
              // Dst: (LDtoc:i64 (tglobaladdr:i64):$disp, i64:i64:$reg)
            /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::TargetJumpTable),// ->6699
/*6686*/      OPC_MoveParent,
/*6687*/      OPC_RecordChild1, // #1 = $reg
/*6688*/      OPC_CheckType, MVT::i64,
/*6690*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDtocJTI), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (PPCtoc_entry:i64 (tjumptable:i64):$disp, i64:i64:$reg) - Complexity = 6
              // Dst: (LDtocJTI:i64 (tjumptable:i64):$disp, i64:i64:$reg)
            /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::TargetConstantPool),// ->6715
/*6702*/      OPC_MoveParent,
/*6703*/      OPC_RecordChild1, // #1 = $reg
/*6704*/      OPC_CheckType, MVT::i64,
/*6706*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDtocCPT), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (PPCtoc_entry:i64 (tconstpool:i64):$disp, i64:i64:$reg) - Complexity = 6
              // Dst: (LDtocCPT:i64 (tconstpool:i64):$disp, i64:i64:$reg)
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDIS_TOC_HA),// ->6738
/*6719*/    OPC_RecordChild0, // #0 = $reg
/*6720*/    OPC_RecordChild1, // #1 = $disp
/*6721*/    OPC_MoveChild, 1,
/*6723*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*6726*/    OPC_MoveParent,
/*6727*/    OPC_CheckType, MVT::i64,
/*6729*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIStocHA), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddisTocHA:i64 i64:i64:$reg, (tglobaladdr:i64):$disp) - Complexity = 6
            // Dst: (ADDIStocHA:i64 i64:i64:$reg, (tglobaladdr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::LD_TOC_L),// ->6760
/*6741*/    OPC_RecordChild0, // #0 = $disp
/*6742*/    OPC_MoveChild, 0,
/*6744*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*6747*/    OPC_MoveParent,
/*6748*/    OPC_RecordChild1, // #1 = $reg
/*6749*/    OPC_CheckType, MVT::i64,
/*6751*/    OPC_MorphNodeTo, TARGET_VAL(PPC::LDtocL), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCldTocL:i64 (tglobaladdr:i64):$disp, i64:i64:$reg) - Complexity = 6
            // Dst: (LDtocL:i64 (tglobaladdr:i64):$disp, i64:i64:$reg)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDI_TOC_L),// ->6782
/*6763*/    OPC_RecordChild0, // #0 = $reg
/*6764*/    OPC_RecordChild1, // #1 = $disp
/*6765*/    OPC_MoveChild, 1,
/*6767*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*6770*/    OPC_MoveParent,
/*6771*/    OPC_CheckType, MVT::i64,
/*6773*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDItocL), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddiTocL:i64 i64:i64:$reg, (tglobaladdr:i64):$disp) - Complexity = 6
            // Dst: (ADDItocL:i64 i64:i64:$reg, (tglobaladdr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDIS_GOT_TPREL_HA),// ->6804
/*6785*/    OPC_RecordChild0, // #0 = $reg
/*6786*/    OPC_RecordChild1, // #1 = $disp
/*6787*/    OPC_MoveChild, 1,
/*6789*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*6792*/    OPC_MoveParent,
/*6793*/    OPC_CheckType, MVT::i64,
/*6795*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDISgotTprelHA), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddisGotTprelHA:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp) - Complexity = 6
            // Dst: (ADDISgotTprelHA:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::LD_GOT_TPREL_L),// ->6826
/*6807*/    OPC_RecordChild0, // #0 = $disp
/*6808*/    OPC_MoveChild, 0,
/*6810*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*6813*/    OPC_MoveParent,
/*6814*/    OPC_RecordChild1, // #1 = $reg
/*6815*/    OPC_CheckType, MVT::i64,
/*6817*/    OPC_MorphNodeTo, TARGET_VAL(PPC::LDgotTprelL), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCldGotTprelL:i64 (tglobaltlsaddr:i64):$disp, i64:i64:$reg) - Complexity = 6
            // Dst: (LDgotTprelL:i64 (tglobaltlsaddr:i64):$disp, i64:i64:$reg)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADD_TLS),// ->6848
/*6829*/    OPC_RecordChild0, // #0 = $in
/*6830*/    OPC_RecordChild1, // #1 = $g
/*6831*/    OPC_MoveChild, 1,
/*6833*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*6836*/    OPC_MoveParent,
/*6837*/    OPC_CheckType, MVT::i64,
/*6839*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADD8TLS), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddTls:i64 i64:i64:$in, (tglobaltlsaddr:i64):$g) - Complexity = 6
            // Dst: (ADD8TLS:i64 ?:i64:$in, (tglobaltlsaddr:i64):$g)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDIS_TLSGD_HA),// ->6870
/*6851*/    OPC_RecordChild0, // #0 = $reg
/*6852*/    OPC_RecordChild1, // #1 = $disp
/*6853*/    OPC_MoveChild, 1,
/*6855*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*6858*/    OPC_MoveParent,
/*6859*/    OPC_CheckType, MVT::i64,
/*6861*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIStlsgdHA), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddisTlsgdHA:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp) - Complexity = 6
            // Dst: (ADDIStlsgdHA:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDI_TLSGD_L),// ->6892
/*6873*/    OPC_RecordChild0, // #0 = $reg
/*6874*/    OPC_RecordChild1, // #1 = $disp
/*6875*/    OPC_MoveChild, 1,
/*6877*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*6880*/    OPC_MoveParent,
/*6881*/    OPC_CheckType, MVT::i64,
/*6883*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDItlsgdL), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddiTlsgdL:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp) - Complexity = 6
            // Dst: (ADDItlsgdL:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::GET_TLS_ADDR),// ->6914
/*6895*/    OPC_RecordChild0, // #0 = $reg
/*6896*/    OPC_RecordChild1, // #1 = $sym
/*6897*/    OPC_MoveChild, 1,
/*6899*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*6902*/    OPC_MoveParent,
/*6903*/    OPC_CheckType, MVT::i64,
/*6905*/    OPC_MorphNodeTo, TARGET_VAL(PPC::GETtlsADDR), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCgetTlsAddr:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$sym) - Complexity = 6
            // Dst: (GETtlsADDR:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$sym)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDIS_TLSLD_HA),// ->6936
/*6917*/    OPC_RecordChild0, // #0 = $reg
/*6918*/    OPC_RecordChild1, // #1 = $disp
/*6919*/    OPC_MoveChild, 1,
/*6921*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*6924*/    OPC_MoveParent,
/*6925*/    OPC_CheckType, MVT::i64,
/*6927*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIStlsldHA), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddisTlsldHA:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp) - Complexity = 6
            // Dst: (ADDIStlsldHA:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDI_TLSLD_L),// ->6958
/*6939*/    OPC_RecordChild0, // #0 = $reg
/*6940*/    OPC_RecordChild1, // #1 = $disp
/*6941*/    OPC_MoveChild, 1,
/*6943*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*6946*/    OPC_MoveParent,
/*6947*/    OPC_CheckType, MVT::i64,
/*6949*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDItlsldL), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddiTlsldL:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp) - Complexity = 6
            // Dst: (ADDItlsldL:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::GET_TLSLD_ADDR),// ->6980
/*6961*/    OPC_RecordChild0, // #0 = $reg
/*6962*/    OPC_RecordChild1, // #1 = $sym
/*6963*/    OPC_MoveChild, 1,
/*6965*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*6968*/    OPC_MoveParent,
/*6969*/    OPC_CheckType, MVT::i64,
/*6971*/    OPC_MorphNodeTo, TARGET_VAL(PPC::GETtlsldADDR), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCgetTlsldAddr:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$sym) - Complexity = 6
            // Dst: (GETtlsldADDR:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$sym)
          /*SwitchOpcode*/ 21,  TARGET_VAL(PPCISD::ADDIS_DTPREL_HA),// ->7004
/*6983*/    OPC_RecordNode,   // #0 = 'PPCaddisDtprelHA' chained node
/*6984*/    OPC_RecordChild1, // #1 = $reg
/*6985*/    OPC_RecordChild2, // #2 = $disp
/*6986*/    OPC_MoveChild, 2,
/*6988*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*6991*/    OPC_MoveParent,
/*6992*/    OPC_CheckType, MVT::i64,
/*6994*/    OPC_EmitMergeInputChains1_0,
/*6995*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDISdtprelHA), 0|OPFL_Chain,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
            // Src: (PPCaddisDtprelHA:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp) - Complexity = 6
            // Dst: (ADDISdtprelHA:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDI_DTPREL_L),// ->7026
/*7007*/    OPC_RecordChild0, // #0 = $reg
/*7008*/    OPC_RecordChild1, // #1 = $disp
/*7009*/    OPC_MoveChild, 1,
/*7011*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*7014*/    OPC_MoveParent,
/*7015*/    OPC_CheckType, MVT::i64,
/*7017*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIdtprelL), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddiDtprelL:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp) - Complexity = 6
            // Dst: (ADDIdtprelL:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp)
          /*SwitchOpcode*/ 97,  TARGET_VAL(ISD::Constant),// ->7126
/*7029*/    OPC_RecordNode,   // #0 = $imm
/*7030*/    OPC_SwitchType /*2 cases */, 59,  MVT::i32,// ->7092
/*7033*/      OPC_Scope, 12, /*->7047*/ // 3 children in Scope
/*7035*/        OPC_CheckPredicate, 0, // Predicate_imm32SExt16
/*7037*/        OPC_EmitConvertToTarget, 0,
/*7039*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (imm:i32)<<P:Predicate_imm32SExt16>>:$imm - Complexity = 4
                // Dst: (LI:i32 (imm:i32):$imm)
/*7047*/      /*Scope*/ 15, /*->7063*/
/*7048*/        OPC_CheckPredicate, 1, // Predicate_imm16ShiftedSExt
/*7050*/        OPC_EmitConvertToTarget, 0,
/*7052*/        OPC_EmitNodeXForm, 0, 1, // HI16
/*7055*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (imm:i32)<<P:Predicate_imm16ShiftedSExt>><<X:HI16>>:$imm - Complexity = 4
                // Dst: (LIS:i32 (HI16:i32 (imm:i32):$imm))
/*7063*/      /*Scope*/ 27, /*->7091*/
/*7064*/        OPC_EmitConvertToTarget, 0,
/*7066*/        OPC_EmitNodeXForm, 0, 1, // HI16
/*7069*/        OPC_EmitNode, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*7077*/        OPC_EmitConvertToTarget, 0,
/*7079*/        OPC_EmitNodeXForm, 1, 4, // LO16
/*7082*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORI), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 5, 
                // Src: (imm:i32):$imm - Complexity = 3
                // Dst: (ORI:i32 (LIS:i32 (HI16:i32 (imm:i32):$imm)), (LO16:i32 (imm:i32):$imm))
/*7091*/      0, /*End of Scope*/
            /*SwitchType*/ 31,  MVT::i64,// ->7125
/*7094*/      OPC_Scope, 12, /*->7108*/ // 2 children in Scope
/*7096*/        OPC_CheckPredicate, 2, // Predicate_imm64SExt16
/*7098*/        OPC_EmitConvertToTarget, 0,
/*7100*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (imm:i64)<<P:Predicate_imm64SExt16>>:$imm - Complexity = 4
                // Dst: (LI8:i64 (imm:i64):$imm)
/*7108*/      /*Scope*/ 15, /*->7124*/
/*7109*/        OPC_CheckPredicate, 1, // Predicate_imm16ShiftedSExt
/*7111*/        OPC_EmitConvertToTarget, 0,
/*7113*/        OPC_EmitNodeXForm, 0, 1, // HI16
/*7116*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_imm16ShiftedSExt>><<X:HI16>>:$imm - Complexity = 4
                // Dst: (LIS8:i64 (HI16:i64 (imm:i64):$imm))
/*7124*/      0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 28,  TARGET_VAL(PPCISD::SHL),// ->7157
/*7129*/    OPC_RecordChild0, // #0 = $rS
/*7130*/    OPC_RecordChild1, // #1 = $rB
/*7131*/    OPC_CheckChild1Type, MVT::i32,
/*7133*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->7145
/*7136*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SLW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCshl:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
              // Dst: (SLW:i32 i32:i32:$rS, i32:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->7156
/*7147*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SLD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (PPCshl:i64 i64:i64:$rS, i32:i32:$rB) - Complexity = 3
              // Dst: (SLD:i64 i64:i64:$rS, i32:i32:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 28,  TARGET_VAL(PPCISD::SRL),// ->7188
/*7160*/    OPC_RecordChild0, // #0 = $rS
/*7161*/    OPC_RecordChild1, // #1 = $rB
/*7162*/    OPC_CheckChild1Type, MVT::i32,
/*7164*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->7176
/*7167*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SRW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCsrl:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
              // Dst: (SRW:i32 i32:i32:$rS, i32:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->7187
/*7178*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SRD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (PPCsrl:i64 i64:i64:$rS, i32:i32:$rB) - Complexity = 3
              // Dst: (SRD:i64 i64:i64:$rS, i32:i32:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 30,  TARGET_VAL(PPCISD::SRA),// ->7221
/*7191*/    OPC_RecordChild0, // #0 = $rS
/*7192*/    OPC_RecordChild1, // #1 = $rB
/*7193*/    OPC_CheckChild1Type, MVT::i32,
/*7195*/    OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->7208
/*7198*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SRAW), 0,
                  2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCsra:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
              // Dst: (SRAW:i32:i32 i32:i32:$rS, i32:i32:$rB)
            /*SwitchType*/ 10,  MVT::i64,// ->7220
/*7210*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SRAD), 0,
                  2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCsra:i64 i64:i64:$rS, i32:i32:$rB) - Complexity = 3
              // Dst: (SRAD:i64:i32 i64:i64:$rS, i32:i32:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::CTLZ),// ->7247
/*7224*/    OPC_RecordChild0, // #0 = $rS
/*7225*/    OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->7236
/*7228*/      OPC_MorphNodeTo, TARGET_VAL(PPC::CNTLZW), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (ctlz:i32 i32:i32:$rS) - Complexity = 3
              // Dst: (CNTLZW:i32 i32:i32:$rS)
            /*SwitchType*/ 8,  MVT::i64,// ->7246
/*7238*/      OPC_MorphNodeTo, TARGET_VAL(PPC::CNTLZD), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (ctlz:i64 i64:i64:$rS) - Complexity = 3
              // Dst: (CNTLZD:i64 i64:i64:$rS)
            0, // EndSwitchType
          /*SwitchOpcode*/ 69,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->7319
/*7250*/    OPC_RecordChild0, // #0 = $rS
/*7251*/    OPC_MoveChild, 1,
/*7253*/    OPC_Scope, 25, /*->7280*/ // 3 children in Scope
/*7255*/      OPC_CheckValueType, MVT::i8,
/*7257*/      OPC_MoveParent,
/*7258*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->7269
/*7261*/        OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSB), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 i32:i32:$rS, i8:Other) - Complexity = 3
                // Dst: (EXTSB:i32 i32:i32:$rS)
              /*SwitchType*/ 8,  MVT::i64,// ->7279
/*7271*/        OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSB8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 i64:i64:$rS, i8:Other) - Complexity = 3
                // Dst: (EXTSB8:i64 i64:i64:$rS)
              0, // EndSwitchType
/*7280*/    /*Scope*/ 25, /*->7306*/
/*7281*/      OPC_CheckValueType, MVT::i16,
/*7283*/      OPC_MoveParent,
/*7284*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->7295
/*7287*/        OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSH), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 i32:i32:$rS, i16:Other) - Complexity = 3
                // Dst: (EXTSH:i32 i32:i32:$rS)
              /*SwitchType*/ 8,  MVT::i64,// ->7305
/*7297*/        OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSH8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 i64:i64:$rS, i16:Other) - Complexity = 3
                // Dst: (EXTSH8:i64 i64:i64:$rS)
              0, // EndSwitchType
/*7306*/    /*Scope*/ 11, /*->7318*/
/*7307*/      OPC_CheckValueType, MVT::i32,
/*7309*/      OPC_MoveParent,
/*7310*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSW), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (sext_inreg:i64 i64:i64:$rS, i32:Other) - Complexity = 3
              // Dst: (EXTSW:i64 i64:i64:$rS)
/*7318*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::SDIV),// ->7348
/*7322*/    OPC_RecordChild0, // #0 = $rA
/*7323*/    OPC_RecordChild1, // #1 = $rB
/*7324*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->7336
/*7327*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DIVW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sdiv:i32 i32:i32:$rA, i32:i32:$rB) - Complexity = 3
              // Dst: (DIVW:i32 i32:i32:$rA, i32:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->7347
/*7338*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DIVD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (sdiv:i64 i64:i64:$rA, i64:i64:$rB) - Complexity = 3
              // Dst: (DIVD:i64 i64:i64:$rA, i64:i64:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::UDIV),// ->7377
/*7351*/    OPC_RecordChild0, // #0 = $rA
/*7352*/    OPC_RecordChild1, // #1 = $rB
/*7353*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->7365
/*7356*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DIVWU), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (udiv:i32 i32:i32:$rA, i32:i32:$rB) - Complexity = 3
              // Dst: (DIVWU:i32 i32:i32:$rA, i32:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->7376
/*7367*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DIVDU), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (udiv:i64 i64:i64:$rA, i64:i64:$rB) - Complexity = 3
              // Dst: (DIVDU:i64 i64:i64:$rA, i64:i64:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::MULHS),// ->7406
/*7380*/    OPC_RecordChild0, // #0 = $rA
/*7381*/    OPC_RecordChild1, // #1 = $rB
/*7382*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->7394
/*7385*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULHW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mulhs:i32 i32:i32:$rA, i32:i32:$rB) - Complexity = 3
              // Dst: (MULHW:i32 i32:i32:$rA, i32:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->7405
/*7396*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULHD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (mulhs:i64 i64:i64:$rA, i64:i64:$rB) - Complexity = 3
              // Dst: (MULHD:i64 i64:i64:$rA, i64:i64:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::MULHU),// ->7435
/*7409*/    OPC_RecordChild0, // #0 = $rA
/*7410*/    OPC_RecordChild1, // #1 = $rB
/*7411*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->7423
/*7414*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULHWU), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mulhu:i32 i32:i32:$rA, i32:i32:$rB) - Complexity = 3
              // Dst: (MULHWU:i32 i32:i32:$rA, i32:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->7434
/*7425*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULHDU), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (mulhu:i64 i64:i64:$rA, i64:i64:$rB) - Complexity = 3
              // Dst: (MULHDU:i64 i64:i64:$rA, i64:i64:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::READCYCLECOUNTER),// ->7449
/*7438*/    OPC_RecordNode,   // #0 = 'readcyclecounter' chained node
/*7439*/    OPC_CheckType, MVT::i64,
/*7441*/    OPC_EmitMergeInputChains1_0,
/*7442*/    OPC_MorphNodeTo, TARGET_VAL(PPC::MFTB8), 0|OPFL_Chain,
                1/*#VTs*/, MVT::i64, 0/*#Ops*/, 
            // Src: (readcyclecounter:i64) - Complexity = 3
            // Dst: (MFTB8:i64)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::SIGN_EXTEND),// ->7465
/*7452*/    OPC_RecordChild0, // #0 = $rS
/*7453*/    OPC_CheckChild0Type, MVT::i32,
/*7455*/    OPC_CheckType, MVT::i64,
/*7457*/    OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSW_32_64), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
            // Src: (sext:i64 i32:i32:$rS) - Complexity = 3
            // Dst: (EXTSW_32_64:i64 i32:i32:$rS)
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::CTPOP),// ->7491
/*7468*/    OPC_RecordChild0, // #0 = $rS
/*7469*/    OPC_SwitchType /*2 cases */, 8,  MVT::i64,// ->7480
/*7472*/      OPC_MorphNodeTo, TARGET_VAL(PPC::POPCNTD), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (ctpop:i64 i64:i64:$rS) - Complexity = 3
              // Dst: (POPCNTD:i64 i64:i64:$rS)
            /*SwitchType*/ 8,  MVT::i32,// ->7490
/*7482*/      OPC_MorphNodeTo, TARGET_VAL(PPC::POPCNTW), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (ctpop:i32 i32:i32:$rS) - Complexity = 3
              // Dst: (POPCNTW:i32 i32:i32:$rS)
            0, // EndSwitchType
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::TRUNCATE),// ->7509
/*7494*/    OPC_RecordChild0, // #0 = $in
/*7495*/    OPC_CheckType, MVT::i32,
/*7497*/    OPC_EmitInteger, MVT::i32, PPC::sub_32,
/*7500*/    OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (trunc:i32 i64:i64:$in) - Complexity = 3
            // Dst: (EXTRACT_SUBREG:i32 ?:i64:$in, sub_32:i32)
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::ANY_EXTEND),// ->7537
/*7512*/    OPC_RecordChild0, // #0 = $in
/*7513*/    OPC_CheckChild0Type, MVT::i32,
/*7515*/    OPC_CheckType, MVT::i64,
/*7517*/    OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                1/*#VTs*/, MVT::i64, 0/*#Ops*/,  // Results = #1
/*7524*/    OPC_EmitInteger, MVT::i32, PPC::sub_32,
/*7527*/    OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
            // Src: (anyext:i64 i32:i32:$in) - Complexity = 3
            // Dst: (INSERT_SUBREG:i64 (IMPLICIT_DEF:i64), ?:i32:$in, sub_32:i32)
          /*SwitchOpcode*/ 41,  TARGET_VAL(ISD::ZERO_EXTEND),// ->7581
/*7540*/    OPC_RecordChild0, // #0 = $in
/*7541*/    OPC_CheckChild0Type, MVT::i32,
/*7543*/    OPC_CheckType, MVT::i64,
/*7545*/    OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                1/*#VTs*/, MVT::i64, 0/*#Ops*/,  // Results = #1
/*7552*/    OPC_EmitInteger, MVT::i32, PPC::sub_32,
/*7555*/    OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2,  // Results = #3
/*7565*/    OPC_EmitInteger, MVT::i32, 0, 
/*7568*/    OPC_EmitInteger, MVT::i32, 32, 
/*7571*/    OPC_MorphNodeTo, TARGET_VAL(PPC::RLDICL), 0,
                1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 5, 
            // Src: (zext:i64 i32:i32:$in) - Complexity = 3
            // Dst: (RLDICL:i64 (INSERT_SUBREG:i64 (IMPLICIT_DEF:i64), ?:i32:$in, sub_32:i32), 0:i32, 32:i32)
          /*SwitchOpcode*/ 15,  TARGET_VAL(PPCISD::LFIWAX),// ->7599
/*7584*/    OPC_RecordNode,   // #0 = 'PPClfiwax' chained node
/*7585*/    OPC_RecordChild1, // #1 = $src
/*7586*/    OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*7589*/    OPC_EmitMergeInputChains1_0,
/*7590*/    OPC_MorphNodeTo, TARGET_VAL(PPC::LFIWAX), 0|OPFL_Chain,
                1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
            // Src: (PPClfiwax:f64 xoaddr:iPTR:$src) - Complexity = 12
            // Dst: (LFIWAX:f64 xoaddr:iPTR:$src)
          /*SwitchOpcode*/ 15,  TARGET_VAL(PPCISD::LFIWZX),// ->7617
/*7602*/    OPC_RecordNode,   // #0 = 'PPClfiwzx' chained node
/*7603*/    OPC_RecordChild1, // #1 = $src
/*7604*/    OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*7607*/    OPC_EmitMergeInputChains1_0,
/*7608*/    OPC_MorphNodeTo, TARGET_VAL(PPC::LFIWZX), 0|OPFL_Chain,
                1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
            // Src: (PPClfiwzx:f64 xoaddr:iPTR:$src) - Complexity = 12
            // Dst: (LFIWZX:f64 xoaddr:iPTR:$src)
          /*SwitchOpcode*/ 31|128,1/*159*/,  TARGET_VAL(ISD::FNEG),// ->7780
/*7621*/    OPC_Scope, 102, /*->7725*/ // 3 children in Scope
/*7623*/      OPC_MoveChild, 0,
/*7625*/      OPC_SwitchOpcode /*2 cases */, 68,  TARGET_VAL(ISD::FMA),// ->7697
/*7629*/        OPC_RecordChild0, // #0 = $FRA
/*7630*/        OPC_RecordChild1, // #1 = $FRC
/*7631*/        OPC_Scope, 34, /*->7667*/ // 2 children in Scope
/*7633*/          OPC_MoveChild, 2,
/*7635*/          OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*7638*/          OPC_RecordChild0, // #2 = $FRB
/*7639*/          OPC_MoveParent,
/*7640*/          OPC_MoveParent,
/*7641*/          OPC_SwitchType /*2 cases */, 10,  MVT::f64,// ->7654
/*7644*/            OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUB), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fneg:f64 (fma:f64 f64:f64:$FRA, f64:f64:$FRC, (fneg:f64 f64:f64:$FRB))) - Complexity = 9
                    // Dst: (FNMSUB:f64 f64:f64:$FRA, f64:f64:$FRC, f64:f64:$FRB)
                  /*SwitchType*/ 10,  MVT::f32,// ->7666
/*7656*/            OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUBS), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fneg:f32 (fma:f32 f32:f32:$FRA, f32:f32:$FRC, (fneg:f32 f32:f32:$FRB))) - Complexity = 9
                    // Dst: (FNMSUBS:f32 f32:f32:$FRA, f32:f32:$FRC, f32:f32:$FRB)
                  0, // EndSwitchType
/*7667*/        /*Scope*/ 28, /*->7696*/
/*7668*/          OPC_RecordChild2, // #2 = $FRB
/*7669*/          OPC_MoveParent,
/*7670*/          OPC_SwitchType /*2 cases */, 10,  MVT::f64,// ->7683
/*7673*/            OPC_MorphNodeTo, TARGET_VAL(PPC::FNMADD), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fneg:f64 (fma:f64 f64:f64:$FRA, f64:f64:$FRC, f64:f64:$FRB)) - Complexity = 6
                    // Dst: (FNMADD:f64 f64:f64:$FRA, f64:f64:$FRC, f64:f64:$FRB)
                  /*SwitchType*/ 10,  MVT::f32,// ->7695
/*7685*/            OPC_MorphNodeTo, TARGET_VAL(PPC::FNMADDS), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fneg:f32 (fma:f32 f32:f32:$FRA, f32:f32:$FRC, f32:f32:$FRB)) - Complexity = 6
                    // Dst: (FNMADDS:f32 f32:f32:$FRA, f32:f32:$FRC, f32:f32:$FRB)
                  0, // EndSwitchType
/*7696*/        0, /*End of Scope*/
              /*SwitchOpcode*/ 24,  TARGET_VAL(ISD::FABS),// ->7724
/*7700*/        OPC_RecordChild0, // #0 = $frB
/*7701*/        OPC_MoveParent,
/*7702*/        OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->7713
/*7705*/          OPC_MorphNodeTo, TARGET_VAL(PPC::FNABSS), 0,
                      1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                  // Src: (fneg:f32 (fabs:f32 f32:f32:$frB)) - Complexity = 6
                  // Dst: (FNABSS:f32 f32:f32:$frB)
                /*SwitchType*/ 8,  MVT::f64,// ->7723
/*7715*/          OPC_MorphNodeTo, TARGET_VAL(PPC::FNABSD), 0,
                      1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                  // Src: (fneg:f64 (fabs:f64 f64:f64:$frB)) - Complexity = 6
                  // Dst: (FNABSD:f64 f64:f64:$frB)
                0, // EndSwitchType
              0, // EndSwitchOpcode
/*7725*/    /*Scope*/ 23, /*->7749*/
/*7726*/      OPC_RecordChild0, // #0 = $frB
/*7727*/      OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->7738
/*7730*/        OPC_MorphNodeTo, TARGET_VAL(PPC::FNEGS), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fneg:f32 f32:f32:$frB) - Complexity = 3
                // Dst: (FNEGS:f32 f32:f32:$frB)
              /*SwitchType*/ 8,  MVT::f64,// ->7748
/*7740*/        OPC_MorphNodeTo, TARGET_VAL(PPC::FNEGD), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fneg:f64 f64:f64:$frB) - Complexity = 3
                // Dst: (FNEGD:f64 f64:f64:$frB)
              0, // EndSwitchType
/*7749*/    /*Scope*/ 29, /*->7779*/
/*7750*/      OPC_MoveChild, 0,
/*7752*/      OPC_CheckOpcode, TARGET_VAL(ISD::FMA),
/*7755*/      OPC_RecordChild0, // #0 = $vA
/*7756*/      OPC_RecordChild1, // #1 = $vC
/*7757*/      OPC_MoveChild, 2,
/*7759*/      OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*7762*/      OPC_RecordChild0, // #2 = $vB
/*7763*/      OPC_MoveParent,
/*7764*/      OPC_MoveParent,
/*7765*/      OPC_CheckType, MVT::v4f32,
/*7767*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7769*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VNMSUBFP), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (fneg:v4f32 (fma:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vC, (fneg:v4f32 v4f32:v4f32:$vB))) - Complexity = 9
              // Dst: (VNMSUBFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vC, v4f32:v4f32:$vB)
/*7779*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 44|128,1/*172*/,  TARGET_VAL(ISD::FMA),// ->7956
/*7784*/    OPC_Scope, 35, /*->7821*/ // 5 children in Scope
/*7786*/      OPC_RecordChild0, // #0 = $FRA
/*7787*/      OPC_RecordChild1, // #1 = $FRC
/*7788*/      OPC_MoveChild, 2,
/*7790*/      OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*7793*/      OPC_RecordChild0, // #2 = $FRB
/*7794*/      OPC_MoveParent,
/*7795*/      OPC_SwitchType /*2 cases */, 10,  MVT::f64,// ->7808
/*7798*/        OPC_MorphNodeTo, TARGET_VAL(PPC::FMSUB), 0,
                    1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                // Src: (fma:f64 f64:f64:$FRA, f64:f64:$FRC, (fneg:f64 f64:f64:$FRB)) - Complexity = 6
                // Dst: (FMSUB:f64 f64:f64:$FRA, f64:f64:$FRC, f64:f64:$FRB)
              /*SwitchType*/ 10,  MVT::f32,// ->7820
/*7810*/        OPC_MorphNodeTo, TARGET_VAL(PPC::FMSUBS), 0,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (fma:f32 f32:f32:$FRA, f32:f32:$FRC, (fneg:f32 f32:f32:$FRB)) - Complexity = 6
                // Dst: (FMSUBS:f32 f32:f32:$FRA, f32:f32:$FRC, f32:f32:$FRB)
              0, // EndSwitchType
/*7821*/    /*Scope*/ 21, /*->7843*/
/*7822*/      OPC_MoveChild, 0,
/*7824*/      OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*7827*/      OPC_RecordChild0, // #0 = $A
/*7828*/      OPC_MoveParent,
/*7829*/      OPC_RecordChild1, // #1 = $C
/*7830*/      OPC_RecordChild2, // #2 = $B
/*7831*/      OPC_CheckType, MVT::f64,
/*7833*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUB), 0,
                  1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (fma:f64 (fneg:f64 f64:f64:$A), f64:f64:$C, f64:f64:$B) - Complexity = 6
              // Dst: (FNMSUB:f64 ?:f64:$A, ?:f64:$C, ?:f64:$B)
/*7843*/    /*Scope*/ 21, /*->7865*/
/*7844*/      OPC_RecordChild0, // #0 = $A
/*7845*/      OPC_MoveChild, 1,
/*7847*/      OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*7850*/      OPC_RecordChild0, // #1 = $C
/*7851*/      OPC_MoveParent,
/*7852*/      OPC_RecordChild2, // #2 = $B
/*7853*/      OPC_CheckType, MVT::f64,
/*7855*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUB), 0,
                  1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (fma:f64 f64:f64:$A, (fneg:f64 f64:f64:$C), f64:f64:$B) - Complexity = 6
              // Dst: (FNMSUB:f64 ?:f64:$A, ?:f64:$C, ?:f64:$B)
/*7865*/    /*Scope*/ 21, /*->7887*/
/*7866*/      OPC_MoveChild, 0,
/*7868*/      OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*7871*/      OPC_RecordChild0, // #0 = $A
/*7872*/      OPC_MoveParent,
/*7873*/      OPC_RecordChild1, // #1 = $C
/*7874*/      OPC_RecordChild2, // #2 = $B
/*7875*/      OPC_CheckType, MVT::f32,
/*7877*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUBS), 0,
                  1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (fma:f32 (fneg:f32 f32:f32:$A), f32:f32:$C, f32:f32:$B) - Complexity = 6
              // Dst: (FNMSUBS:f32 ?:f32:$A, ?:f32:$C, ?:f32:$B)
/*7887*/    /*Scope*/ 67, /*->7955*/
/*7888*/      OPC_RecordChild0, // #0 = $A
/*7889*/      OPC_Scope, 20, /*->7911*/ // 2 children in Scope
/*7891*/        OPC_MoveChild, 1,
/*7893*/        OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*7896*/        OPC_RecordChild0, // #1 = $C
/*7897*/        OPC_MoveParent,
/*7898*/        OPC_RecordChild2, // #2 = $B
/*7899*/        OPC_CheckType, MVT::f32,
/*7901*/        OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUBS), 0,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (fma:f32 f32:f32:$A, (fneg:f32 f32:f32:$C), f32:f32:$B) - Complexity = 6
                // Dst: (FNMSUBS:f32 ?:f32:$A, ?:f32:$C, ?:f32:$B)
/*7911*/      /*Scope*/ 42, /*->7954*/
/*7912*/        OPC_RecordChild1, // #1 = $FRC
/*7913*/        OPC_RecordChild2, // #2 = $FRB
/*7914*/        OPC_SwitchType /*3 cases */, 10,  MVT::f64,// ->7927
/*7917*/          OPC_MorphNodeTo, TARGET_VAL(PPC::FMADD), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (fma:f64 f64:f64:$FRA, f64:f64:$FRC, f64:f64:$FRB) - Complexity = 3
                  // Dst: (FMADD:f64 f64:f64:$FRA, f64:f64:$FRC, f64:f64:$FRB)
                /*SwitchType*/ 10,  MVT::f32,// ->7939
/*7929*/          OPC_MorphNodeTo, TARGET_VAL(PPC::FMADDS), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (fma:f32 f32:f32:$FRA, f32:f32:$FRC, f32:f32:$FRB) - Complexity = 3
                  // Dst: (FMADDS:f32 f32:f32:$FRA, f32:f32:$FRC, f32:f32:$FRB)
                /*SwitchType*/ 12,  MVT::v4f32,// ->7953
/*7941*/          OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7943*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VMADDFP), 0,
                      1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (fma:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vC, v4f32:v4f32:$vB) - Complexity = 3
                  // Dst: (VMADDFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vC, v4f32:v4f32:$vB)
                0, // EndSwitchType
/*7954*/      0, /*End of Scope*/
/*7955*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCTIWZ),// ->7970
/*7959*/    OPC_RecordChild0, // #0 = $frB
/*7960*/    OPC_CheckType, MVT::f64,
/*7962*/    OPC_MorphNodeTo, TARGET_VAL(PPC::FCTIWZ), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfctiwz:f64 f64:f64:$frB) - Complexity = 3
            // Dst: (FCTIWZ:f64 f64:f64:$frB)
          /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::FP_ROUND),// ->7982
/*7973*/    OPC_RecordChild0, // #0 = $frB
/*7974*/    OPC_MorphNodeTo, TARGET_VAL(PPC::FRSP), 0,
                1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
            // Src: (fround:f32 f64:f64:$frB) - Complexity = 3
            // Dst: (FRSP:f32 f64:f64:$frB)
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::FROUND),// ->8008
/*7985*/    OPC_RecordChild0, // #0 = $frB
/*7986*/    OPC_SwitchType /*2 cases */, 8,  MVT::f64,// ->7997
/*7989*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FRIND), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (frnd:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FRIND:f64 f64:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->8007
/*7999*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FRINS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (frnd:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FRINS:f32 f32:f32:$frB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::FCEIL),// ->8046
/*8011*/    OPC_RecordChild0, // #0 = $frB
/*8012*/    OPC_SwitchType /*3 cases */, 8,  MVT::f64,// ->8023
/*8015*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FRIPD), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fceil:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FRIPD:f64 f64:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->8033
/*8025*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FRIPS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fceil:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FRIPS:f32 f32:f32:$frB)
            /*SwitchType*/ 10,  MVT::v4f32,// ->8045
/*8035*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8037*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (fceil:v4f32 v4f32:v4f32:$vA) - Complexity = 3
              // Dst: (VRFIP:v4f32 ?:v4f32:$vA)
            0, // EndSwitchType
          /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::FTRUNC),// ->8084
/*8049*/    OPC_RecordChild0, // #0 = $frB
/*8050*/    OPC_SwitchType /*3 cases */, 8,  MVT::f64,// ->8061
/*8053*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FRIZD), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (ftrunc:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FRIZD:f64 f64:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->8071
/*8063*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FRIZS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (ftrunc:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FRIZS:f32 f32:f32:$frB)
            /*SwitchType*/ 10,  MVT::v4f32,// ->8083
/*8073*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8075*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIZ), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (ftrunc:v4f32 v4f32:v4f32:$vA) - Complexity = 3
              // Dst: (VRFIZ:v4f32 ?:v4f32:$vA)
            0, // EndSwitchType
          /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::FFLOOR),// ->8122
/*8087*/    OPC_RecordChild0, // #0 = $frB
/*8088*/    OPC_SwitchType /*3 cases */, 8,  MVT::f64,// ->8099
/*8091*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FRIMD), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (ffloor:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FRIMD:f64 f64:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->8109
/*8101*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FRIMS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (ffloor:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FRIMS:f32 f32:f32:$frB)
            /*SwitchType*/ 10,  MVT::v4f32,// ->8121
/*8111*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8113*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIM), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (ffloor:v4f32 v4f32:v4f32:$vA) - Complexity = 3
              // Dst: (VRFIM:v4f32 ?:v4f32:$vA)
            0, // EndSwitchType
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::FSQRT),// ->8148
/*8125*/    OPC_RecordChild0, // #0 = $frB
/*8126*/    OPC_SwitchType /*2 cases */, 8,  MVT::f64,// ->8137
/*8129*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FSQRT), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fsqrt:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FSQRT:f64 f64:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->8147
/*8139*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FSQRTS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fsqrt:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FSQRTS:f32 f32:f32:$frB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::FABS),// ->8174
/*8151*/    OPC_RecordChild0, // #0 = $frB
/*8152*/    OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->8163
/*8155*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FABSS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fabs:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FABSS:f32 f32:f32:$frB)
            /*SwitchType*/ 8,  MVT::f64,// ->8173
/*8165*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FABSD), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fabs:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FABSD:f64 f64:f64:$frB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 82,  TARGET_VAL(ISD::FCOPYSIGN),// ->8259
/*8177*/    OPC_RecordChild0, // #0 = $frB
/*8178*/    OPC_RecordChild1, // #1 = $frA
/*8179*/    OPC_Scope, 38, /*->8219*/ // 2 children in Scope
/*8181*/      OPC_CheckChild1Type, MVT::f32,
/*8183*/      OPC_SwitchType /*2 cases */, 9,  MVT::f32,// ->8195
/*8186*/        OPC_MorphNodeTo, TARGET_VAL(PPC::FCPSGNS), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 0, 
                // Src: (fcopysign:f32 f32:f32:$frB, f32:f32:$frA) - Complexity = 3
                // Dst: (FCPSGNS:f32 f32:f32:$frA, f32:f32:$frB)
              /*SwitchType*/ 21,  MVT::f64,// ->8218
/*8197*/        OPC_EmitInteger, MVT::i32, PPC::F8RCRegClassID,
/*8200*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 2,  // Results = #3
/*8209*/        OPC_MorphNodeTo, TARGET_VAL(PPC::FCPSGND), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 3, 0, 
                // Src: (fcopysign:f64 f64:f64:$frB, f32:f32:$frA) - Complexity = 3
                // Dst: (FCPSGND:f64 (COPY_TO_REGCLASS:f64 ?:f32:$frA, F8RC:i32), ?:f64:$frB)
              0, // EndSwitchType
/*8219*/    /*Scope*/ 38, /*->8258*/
/*8220*/      OPC_CheckChild1Type, MVT::f64,
/*8222*/      OPC_SwitchType /*2 cases */, 9,  MVT::f64,// ->8234
/*8225*/        OPC_MorphNodeTo, TARGET_VAL(PPC::FCPSGND), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 0, 
                // Src: (fcopysign:f64 f64:f64:$frB, f64:f64:$frA) - Complexity = 3
                // Dst: (FCPSGND:f64 f64:f64:$frA, f64:f64:$frB)
              /*SwitchType*/ 21,  MVT::f32,// ->8257
/*8236*/        OPC_EmitInteger, MVT::i32, PPC::F4RCRegClassID,
/*8239*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 2,  // Results = #3
/*8248*/        OPC_MorphNodeTo, TARGET_VAL(PPC::FCPSGNS), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 3, 0, 
                // Src: (fcopysign:f32 f32:f32:$frB, f64:f64:$frA) - Complexity = 3
                // Dst: (FCPSGNS:f32 (COPY_TO_REGCLASS:f32 ?:f64:$frA, F4RC:i32), ?:f32:$frB)
              0, // EndSwitchType
/*8258*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 35,  TARGET_VAL(PPCISD::FRE),// ->8297
/*8262*/    OPC_RecordChild0, // #0 = $frB
/*8263*/    OPC_SwitchType /*3 cases */, 8,  MVT::f64,// ->8274
/*8266*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FRE), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (PPCfre:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FRE:f64 f64:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->8284
/*8276*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FRES), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (PPCfre:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FRES:f32 f32:f32:$frB)
            /*SwitchType*/ 10,  MVT::v4f32,// ->8296
/*8286*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8288*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VREFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (PPCfre:v4f32 v4f32:v4f32:$A) - Complexity = 3
              // Dst: (VREFP:v4f32 ?:v4f32:$A)
            0, // EndSwitchType
          /*SwitchOpcode*/ 35,  TARGET_VAL(PPCISD::FRSQRTE),// ->8335
/*8300*/    OPC_RecordChild0, // #0 = $frB
/*8301*/    OPC_SwitchType /*3 cases */, 8,  MVT::f64,// ->8312
/*8304*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FRSQRTE), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (PPCfrsqrte:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FRSQRTE:f64 f64:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->8322
/*8314*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FRSQRTES), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (PPCfrsqrte:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FRSQRTES:f32 f32:f32:$frB)
            /*SwitchType*/ 10,  MVT::v4f32,// ->8334
/*8324*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8326*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRSQRTEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (PPCfrsqrte:v4f32 v4f32:v4f32:$A) - Complexity = 3
              // Dst: (VRSQRTEFP:v4f32 ?:v4f32:$A)
            0, // EndSwitchType
          /*SwitchOpcode*/ 7,  TARGET_VAL(PPCISD::MFFS),// ->8345
/*8338*/    OPC_MorphNodeTo, TARGET_VAL(PPC::MFFS), 0,
                1/*#VTs*/, MVT::f64, 0/*#Ops*/, 
            // Src: (PPCmffs:f64) - Complexity = 3
            // Dst: (MFFS:f64)
          /*SwitchOpcode*/ 29,  TARGET_VAL(PPCISD::FSEL),// ->8377
/*8348*/    OPC_RecordChild0, // #0 = $FRA
/*8349*/    OPC_RecordChild1, // #1 = $FRC
/*8350*/    OPC_RecordChild2, // #2 = $FRB
/*8351*/    OPC_SwitchType /*2 cases */, 10,  MVT::f64,// ->8364
/*8354*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FSELD), 0,
                  1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (PPCfsel:f64 f64:f64:$FRA, f64:f64:$FRC, f64:f64:$FRB) - Complexity = 3
              // Dst: (FSELD:f64 f64:f64:$FRA, f64:f64:$FRC, f64:f64:$FRB)
            /*SwitchType*/ 10,  MVT::f32,// ->8376
/*8366*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FSELS), 0,
                  1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (PPCfsel:f32 f64:f64:$FRA, f32:f32:$FRC, f32:f32:$FRB) - Complexity = 3
              // Dst: (FSELS:f32 f64:f64:$FRA, f32:f32:$FRC, f32:f32:$FRB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 39,  TARGET_VAL(ISD::FADD),// ->8419
/*8380*/    OPC_RecordChild0, // #0 = $FRA
/*8381*/    OPC_RecordChild1, // #1 = $FRB
/*8382*/    OPC_SwitchType /*3 cases */, 9,  MVT::f64,// ->8394
/*8385*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FADD), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fadd:f64 f64:f64:$FRA, f64:f64:$FRB) - Complexity = 3
              // Dst: (FADD:f64 f64:f64:$FRA, f64:f64:$FRB)
            /*SwitchType*/ 9,  MVT::f32,// ->8405
/*8396*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FADDS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fadd:f32 f32:f32:$FRA, f32:f32:$FRB) - Complexity = 3
              // Dst: (FADDS:f32 f32:f32:$FRA, f32:f32:$FRB)
            /*SwitchType*/ 11,  MVT::v4f32,// ->8418
/*8407*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8409*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (fadd:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB) - Complexity = 3
              // Dst: (VADDFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::FDIV),// ->8448
/*8422*/    OPC_RecordChild0, // #0 = $FRA
/*8423*/    OPC_RecordChild1, // #1 = $FRB
/*8424*/    OPC_SwitchType /*2 cases */, 9,  MVT::f64,// ->8436
/*8427*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FDIV), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fdiv:f64 f64:f64:$FRA, f64:f64:$FRB) - Complexity = 3
              // Dst: (FDIV:f64 f64:f64:$FRA, f64:f64:$FRB)
            /*SwitchType*/ 9,  MVT::f32,// ->8447
/*8438*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FDIVS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fdiv:f32 f32:f32:$FRA, f32:f32:$FRB) - Complexity = 3
              // Dst: (FDIVS:f32 f32:f32:$FRA, f32:f32:$FRB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 63,  TARGET_VAL(ISD::FMUL),// ->8514
/*8451*/    OPC_RecordChild0, // #0 = $FRA
/*8452*/    OPC_RecordChild1, // #1 = $FRC
/*8453*/    OPC_SwitchType /*3 cases */, 9,  MVT::f64,// ->8465
/*8456*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FMUL), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fmul:f64 f64:f64:$FRA, f64:f64:$FRC) - Complexity = 3
              // Dst: (FMUL:f64 f64:f64:$FRA, f64:f64:$FRC)
            /*SwitchType*/ 9,  MVT::f32,// ->8476
/*8467*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FMULS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fmul:f32 f32:f32:$FRA, f32:f32:$FRC) - Complexity = 3
              // Dst: (FMULS:f32 f32:f32:$FRA, f32:f32:$FRC)
            /*SwitchType*/ 35,  MVT::v4f32,// ->8513
/*8478*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8480*/      OPC_EmitNode, TARGET_VAL(PPC::V_SETALLONES), 0,
                  1/*#VTs*/, MVT::v16i8, 0/*#Ops*/,  // Results = #2
/*8487*/      OPC_EmitNode, TARGET_VAL(PPC::V_SETALLONES), 0,
                  1/*#VTs*/, MVT::v16i8, 0/*#Ops*/,  // Results = #3
/*8494*/      OPC_EmitNode, TARGET_VAL(PPC::VSLW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*8503*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMADDFP), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 4, 
              // Src: (fmul:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB) - Complexity = 3
              // Dst: (VMADDFP:v4f32 ?:v4f32:$vA, ?:v4f32:$vB, (VSLW:v4i32 (V_SETALLONES:v16i8), (V_SETALLONES:v16i8)))
            0, // EndSwitchType
          /*SwitchOpcode*/ 39,  TARGET_VAL(ISD::FSUB),// ->8556
/*8517*/    OPC_RecordChild0, // #0 = $FRA
/*8518*/    OPC_RecordChild1, // #1 = $FRB
/*8519*/    OPC_SwitchType /*3 cases */, 9,  MVT::f64,// ->8531
/*8522*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FSUB), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fsub:f64 f64:f64:$FRA, f64:f64:$FRB) - Complexity = 3
              // Dst: (FSUB:f64 f64:f64:$FRA, f64:f64:$FRB)
            /*SwitchType*/ 9,  MVT::f32,// ->8542
/*8533*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FSUBS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fsub:f32 f32:f32:$FRA, f32:f32:$FRB) - Complexity = 3
              // Dst: (FSUBS:f32 f32:f32:$FRA, f32:f32:$FRB)
            /*SwitchType*/ 11,  MVT::v4f32,// ->8555
/*8544*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8546*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (fsub:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB) - Complexity = 3
              // Dst: (VSUBFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::FP_EXTEND),// ->8572
/*8559*/    OPC_RecordChild0, // #0 = $src
/*8560*/    OPC_EmitInteger, MVT::i32, PPC::F8RCRegClassID,
/*8563*/    OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
            // Src: (fextend:f64 f32:f32:$src) - Complexity = 3
            // Dst: (COPY_TO_REGCLASS:f64 ?:f32:$src, F8RC:i32)
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCFID),// ->8586
/*8575*/    OPC_RecordChild0, // #0 = $frB
/*8576*/    OPC_CheckType, MVT::f64,
/*8578*/    OPC_MorphNodeTo, TARGET_VAL(PPC::FCFID), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfcfid:f64 f64:f64:$frB) - Complexity = 3
            // Dst: (FCFID:f64 f64:f64:$frB)
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCTIDZ),// ->8600
/*8589*/    OPC_RecordChild0, // #0 = $frB
/*8590*/    OPC_CheckType, MVT::f64,
/*8592*/    OPC_MorphNodeTo, TARGET_VAL(PPC::FCTIDZ), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfctidz:f64 f64:f64:$frB) - Complexity = 3
            // Dst: (FCTIDZ:f64 f64:f64:$frB)
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCFIDU),// ->8614
/*8603*/    OPC_RecordChild0, // #0 = $frB
/*8604*/    OPC_CheckType, MVT::f64,
/*8606*/    OPC_MorphNodeTo, TARGET_VAL(PPC::FCFIDU), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfcfidu:f64 f64:f64:$frB) - Complexity = 3
            // Dst: (FCFIDU:f64 f64:f64:$frB)
          /*SwitchOpcode*/ 9,  TARGET_VAL(PPCISD::FCFIDS),// ->8626
/*8617*/    OPC_RecordChild0, // #0 = $frB
/*8618*/    OPC_MorphNodeTo, TARGET_VAL(PPC::FCFIDS), 0,
                1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
            // Src: (PPCfcfids:f32 f64:f64:$frB) - Complexity = 3
            // Dst: (FCFIDS:f32 f64:f64:$frB)
          /*SwitchOpcode*/ 9,  TARGET_VAL(PPCISD::FCFIDUS),// ->8638
/*8629*/    OPC_RecordChild0, // #0 = $frB
/*8630*/    OPC_MorphNodeTo, TARGET_VAL(PPC::FCFIDUS), 0,
                1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
            // Src: (PPCfcfidus:f32 f64:f64:$frB) - Complexity = 3
            // Dst: (FCFIDUS:f32 f64:f64:$frB)
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCTIDUZ),// ->8652
/*8641*/    OPC_RecordChild0, // #0 = $frB
/*8642*/    OPC_CheckType, MVT::f64,
/*8644*/    OPC_MorphNodeTo, TARGET_VAL(PPC::FCTIDUZ), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfctiduz:f64 f64:f64:$frB) - Complexity = 3
            // Dst: (FCTIDUZ:f64 f64:f64:$frB)
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCTIWUZ),// ->8666
/*8655*/    OPC_RecordChild0, // #0 = $frB
/*8656*/    OPC_CheckType, MVT::f64,
/*8658*/    OPC_MorphNodeTo, TARGET_VAL(PPC::FCTIWUZ), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfctiwuz:f64 f64:f64:$frB) - Complexity = 3
            // Dst: (FCTIWUZ:f64 f64:f64:$frB)
          /*SwitchOpcode*/ 13,  TARGET_VAL(PPCISD::FADDRTZ),// ->8682
/*8669*/    OPC_RecordChild0, // #0 = $FRA
/*8670*/    OPC_RecordChild1, // #1 = $FRB
/*8671*/    OPC_CheckType, MVT::f64,
/*8673*/    OPC_MorphNodeTo, TARGET_VAL(PPC::FADDrtz), 0,
                1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCfaddrtz:f64 f64:f64:$FRA, f64:f64:$FRB) - Complexity = 3
            // Dst: (FADDrtz:f64 f64:f64:$FRA, f64:f64:$FRB)
          /*SwitchOpcode*/ 125,  TARGET_VAL(ISD::INTRINSIC_W_CHAIN),// ->8810
/*8685*/    OPC_RecordNode,   // #0 = 'intrinsic_w_chain' chained node
/*8686*/    OPC_MoveChild, 1,
/*8688*/    OPC_Scope, 20, /*->8710*/ // 6 children in Scope
/*8690*/      OPC_CheckInteger, 107|128,15/*2027*/, 
/*8693*/      OPC_MoveParent,
/*8694*/      OPC_RecordChild2, // #1 = $src
/*8695*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8697*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*8700*/      OPC_EmitMergeInputChains1_0,
/*8701*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVEBX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v16i8 2027:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVEBX:v16i8 xoaddr:iPTR:$src)
/*8710*/    /*Scope*/ 20, /*->8731*/
/*8711*/      OPC_CheckInteger, 108|128,15/*2028*/, 
/*8714*/      OPC_MoveParent,
/*8715*/      OPC_RecordChild2, // #1 = $src
/*8716*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8718*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*8721*/      OPC_EmitMergeInputChains1_0,
/*8722*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVEHX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v8i16 2028:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVEHX:v8i16 xoaddr:iPTR:$src)
/*8731*/    /*Scope*/ 20, /*->8752*/
/*8732*/      OPC_CheckInteger, 109|128,15/*2029*/, 
/*8735*/      OPC_MoveParent,
/*8736*/      OPC_RecordChild2, // #1 = $src
/*8737*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8739*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*8742*/      OPC_EmitMergeInputChains1_0,
/*8743*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVEWX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v4i32 2029:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVEWX:v4i32 xoaddr:iPTR:$src)
/*8752*/    /*Scope*/ 20, /*->8773*/
/*8753*/      OPC_CheckInteger, 112|128,15/*2032*/, 
/*8756*/      OPC_MoveParent,
/*8757*/      OPC_RecordChild2, // #1 = $src
/*8758*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8760*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*8763*/      OPC_EmitMergeInputChains1_0,
/*8764*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v4i32 2032:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVX:v4i32 xoaddr:iPTR:$src)
/*8773*/    /*Scope*/ 20, /*->8794*/
/*8774*/      OPC_CheckInteger, 113|128,15/*2033*/, 
/*8777*/      OPC_MoveParent,
/*8778*/      OPC_RecordChild2, // #1 = $src
/*8779*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8781*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*8784*/      OPC_EmitMergeInputChains1_0,
/*8785*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVXL), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v4i32 2033:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVXL:v4i32 xoaddr:iPTR:$src)
/*8794*/    /*Scope*/ 14, /*->8809*/
/*8795*/      OPC_CheckInteger, 114|128,15/*2034*/, 
/*8798*/      OPC_MoveParent,
/*8799*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8801*/      OPC_EmitMergeInputChains1_0,
/*8802*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MFVSCR), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v8i16, 0/*#Ops*/, 
              // Src: (intrinsic_w_chain:v8i16 2034:iPTR) - Complexity = 8
              // Dst: (MFVSCR:v8i16)
/*8809*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 48|128,15/*1968*/,  TARGET_VAL(ISD::INTRINSIC_WO_CHAIN),// ->10782
/*8814*/    OPC_MoveChild, 0,
/*8816*/    OPC_Scope, 19, /*->8837*/ // 103 children in Scope
/*8818*/      OPC_CheckInteger, 110|128,15/*2030*/, 
/*8821*/      OPC_MoveParent,
/*8822*/      OPC_RecordChild1, // #0 = $src
/*8823*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8825*/      OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectAddrIdxOnly:$src #1 #2
/*8828*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVSL), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_wo_chain:v16i8 2030:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVSL:v16i8 xoaddr:iPTR:$src)
/*8837*/    /*Scope*/ 19, /*->8857*/
/*8838*/      OPC_CheckInteger, 111|128,15/*2031*/, 
/*8841*/      OPC_MoveParent,
/*8842*/      OPC_RecordChild1, // #0 = $src
/*8843*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8845*/      OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectAddrIdxOnly:$src #1 #2
/*8848*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVSR), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_wo_chain:v16i8 2031:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVSR:v16i8 xoaddr:iPTR:$src)
/*8857*/    /*Scope*/ 44, /*->8902*/
/*8858*/      OPC_CheckInteger, 35|128,16/*2083*/, 
/*8861*/      OPC_MoveParent,
/*8862*/      OPC_RecordChild1, // #0 = $vB
/*8863*/      OPC_Scope, 15, /*->8880*/ // 2 children in Scope
/*8865*/        OPC_MoveChild, 2,
/*8867*/        OPC_CheckInteger, 0, 
/*8869*/        OPC_MoveParent,
/*8870*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8872*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCTUXS_0), 0,
                    1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4i32 2083:iPTR, v4f32:v4f32:$vB, 0:i32) - Complexity = 13
                // Dst: (VCTUXS_0:v4i32 v4f32:v4f32:$vB)
/*8880*/      /*Scope*/ 20, /*->8901*/
/*8881*/        OPC_RecordChild2, // #1 = $UIMM
/*8882*/        OPC_MoveChild, 2,
/*8884*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8887*/        OPC_MoveParent,
/*8888*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8890*/        OPC_EmitConvertToTarget, 1,
/*8892*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCTUXS), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 0, 
                // Src: (intrinsic_wo_chain:v4i32 2083:iPTR, v4f32:v4f32:$vB, (imm:i32):$UIMM) - Complexity = 11
                // Dst: (VCTUXS:v4i32 (imm:i32):$UIMM, v4f32:v4f32:$vB)
/*8901*/      0, /*End of Scope*/
/*8902*/    /*Scope*/ 44, /*->8947*/
/*8903*/      OPC_CheckInteger, 34|128,16/*2082*/, 
/*8906*/      OPC_MoveParent,
/*8907*/      OPC_RecordChild1, // #0 = $vB
/*8908*/      OPC_Scope, 15, /*->8925*/ // 2 children in Scope
/*8910*/        OPC_MoveChild, 2,
/*8912*/        OPC_CheckInteger, 0, 
/*8914*/        OPC_MoveParent,
/*8915*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8917*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCTSXS_0), 0,
                    1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4i32 2082:iPTR, v4f32:v4f32:$vB, 0:i32) - Complexity = 13
                // Dst: (VCTSXS_0:v4i32 v4f32:v4f32:$vB)
/*8925*/      /*Scope*/ 20, /*->8946*/
/*8926*/        OPC_RecordChild2, // #1 = $UIMM
/*8927*/        OPC_MoveChild, 2,
/*8929*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8932*/        OPC_MoveParent,
/*8933*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8935*/        OPC_EmitConvertToTarget, 1,
/*8937*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCTSXS), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 0, 
                // Src: (intrinsic_wo_chain:v4i32 2082:iPTR, v4f32:v4f32:$vB, (imm:i32):$UIMM) - Complexity = 11
                // Dst: (VCTSXS:v4i32 (imm:i32):$UIMM, v4f32:v4f32:$vB)
/*8946*/      0, /*End of Scope*/
/*8947*/    /*Scope*/ 19, /*->8967*/
/*8948*/      OPC_CheckInteger, 46|128,16/*2094*/, 
/*8951*/      OPC_MoveParent,
/*8952*/      OPC_RecordChild1, // #0 = $vA
/*8953*/      OPC_RecordChild2, // #1 = $vB
/*8954*/      OPC_RecordChild3, // #2 = $vC
/*8955*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8957*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMHADDSHS), 0,
                  1/*#VTs*/, MVT::v8i16, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v8i16 2094:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB, v8i16:v8i16:$vC) - Complexity = 8
              // Dst: (VMHADDSHS:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, v8i16:v8i16:$vC)
/*8967*/    /*Scope*/ 19, /*->8987*/
/*8968*/      OPC_CheckInteger, 47|128,16/*2095*/, 
/*8971*/      OPC_MoveParent,
/*8972*/      OPC_RecordChild1, // #0 = $vA
/*8973*/      OPC_RecordChild2, // #1 = $vB
/*8974*/      OPC_RecordChild3, // #2 = $vC
/*8975*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8977*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMHRADDSHS), 0,
                  1/*#VTs*/, MVT::v8i16, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v8i16 2095:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB, v8i16:v8i16:$vC) - Complexity = 8
              // Dst: (VMHRADDSHS:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, v8i16:v8i16:$vC)
/*8987*/    /*Scope*/ 19, /*->9007*/
/*8988*/      OPC_CheckInteger, 55|128,16/*2103*/, 
/*8991*/      OPC_MoveParent,
/*8992*/      OPC_RecordChild1, // #0 = $vA
/*8993*/      OPC_RecordChild2, // #1 = $vB
/*8994*/      OPC_RecordChild3, // #2 = $vC
/*8995*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8997*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMLADDUHM), 0,
                  1/*#VTs*/, MVT::v8i16, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v8i16 2103:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB, v8i16:v8i16:$vC) - Complexity = 8
              // Dst: (VMLADDUHM:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, v8i16:v8i16:$vC)
/*9007*/    /*Scope*/ 19, /*->9027*/
/*9008*/      OPC_CheckInteger, 71|128,16/*2119*/, 
/*9011*/      OPC_MoveParent,
/*9012*/      OPC_RecordChild1, // #0 = $vA
/*9013*/      OPC_RecordChild2, // #1 = $vB
/*9014*/      OPC_RecordChild3, // #2 = $vC
/*9015*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9017*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPERM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 2119:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB, v16i8:v16i8:$vC) - Complexity = 8
              // Dst: (VPERM:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB, v16i8:v16i8:$vC)
/*9027*/    /*Scope*/ 19, /*->9047*/
/*9028*/      OPC_CheckInteger, 88|128,16/*2136*/, 
/*9031*/      OPC_MoveParent,
/*9032*/      OPC_RecordChild1, // #0 = $vA
/*9033*/      OPC_RecordChild2, // #1 = $vB
/*9034*/      OPC_RecordChild3, // #2 = $vC
/*9035*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9037*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSEL), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 2136:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB, v4i32:v4i32:$vC) - Complexity = 8
              // Dst: (VSEL:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB, v4i32:v4i32:$vC)
/*9047*/    /*Scope*/ 17, /*->9065*/
/*9048*/      OPC_CheckInteger, 121|128,15/*2041*/, 
/*9051*/      OPC_MoveParent,
/*9052*/      OPC_RecordChild1, // #0 = $vA
/*9053*/      OPC_RecordChild2, // #1 = $vB
/*9054*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9056*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDCUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 2041:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VADDCUW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*9065*/    /*Scope*/ 17, /*->9083*/
/*9066*/      OPC_CheckInteger, 122|128,15/*2042*/, 
/*9069*/      OPC_MoveParent,
/*9070*/      OPC_RecordChild1, // #0 = $vA
/*9071*/      OPC_RecordChild2, // #1 = $vB
/*9072*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9074*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDSBS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 2042:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VADDSBS:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*9083*/    /*Scope*/ 17, /*->9101*/
/*9084*/      OPC_CheckInteger, 123|128,15/*2043*/, 
/*9087*/      OPC_MoveParent,
/*9088*/      OPC_RecordChild1, // #0 = $vA
/*9089*/      OPC_RecordChild2, // #1 = $vB
/*9090*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9092*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDSHS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 2043:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VADDSHS:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*9101*/    /*Scope*/ 17, /*->9119*/
/*9102*/      OPC_CheckInteger, 124|128,15/*2044*/, 
/*9105*/      OPC_MoveParent,
/*9106*/      OPC_RecordChild1, // #0 = $vA
/*9107*/      OPC_RecordChild2, // #1 = $vB
/*9108*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9110*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDSWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 2044:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VADDSWS:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*9119*/    /*Scope*/ 17, /*->9137*/
/*9120*/      OPC_CheckInteger, 125|128,15/*2045*/, 
/*9123*/      OPC_MoveParent,
/*9124*/      OPC_RecordChild1, // #0 = $vA
/*9125*/      OPC_RecordChild2, // #1 = $vB
/*9126*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9128*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUBS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 2045:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VADDUBS:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*9137*/    /*Scope*/ 17, /*->9155*/
/*9138*/      OPC_CheckInteger, 126|128,15/*2046*/, 
/*9141*/      OPC_MoveParent,
/*9142*/      OPC_RecordChild1, // #0 = $vA
/*9143*/      OPC_RecordChild2, // #1 = $vB
/*9144*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9146*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUHS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 2046:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VADDUHS:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*9155*/    /*Scope*/ 17, /*->9173*/
/*9156*/      OPC_CheckInteger, 127|128,15/*2047*/, 
/*9159*/      OPC_MoveParent,
/*9160*/      OPC_RecordChild1, // #0 = $vA
/*9161*/      OPC_RecordChild2, // #1 = $vB
/*9162*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9164*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 2047:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VADDUWS:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*9173*/    /*Scope*/ 17, /*->9191*/
/*9174*/      OPC_CheckInteger, 0|128,16/*2048*/, 
/*9177*/      OPC_MoveParent,
/*9178*/      OPC_RecordChild1, // #0 = $vA
/*9179*/      OPC_RecordChild2, // #1 = $vB
/*9180*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9182*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGSB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 2048:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VAVGSB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*9191*/    /*Scope*/ 17, /*->9209*/
/*9192*/      OPC_CheckInteger, 1|128,16/*2049*/, 
/*9195*/      OPC_MoveParent,
/*9196*/      OPC_RecordChild1, // #0 = $vA
/*9197*/      OPC_RecordChild2, // #1 = $vB
/*9198*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9200*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGSH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 2049:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VAVGSH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*9209*/    /*Scope*/ 17, /*->9227*/
/*9210*/      OPC_CheckInteger, 2|128,16/*2050*/, 
/*9213*/      OPC_MoveParent,
/*9214*/      OPC_RecordChild1, // #0 = $vA
/*9215*/      OPC_RecordChild2, // #1 = $vB
/*9216*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9218*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGSW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 2050:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VAVGSW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*9227*/    /*Scope*/ 17, /*->9245*/
/*9228*/      OPC_CheckInteger, 3|128,16/*2051*/, 
/*9231*/      OPC_MoveParent,
/*9232*/      OPC_RecordChild1, // #0 = $vA
/*9233*/      OPC_RecordChild2, // #1 = $vB
/*9234*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9236*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 2051:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VAVGUB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*9245*/    /*Scope*/ 17, /*->9263*/
/*9246*/      OPC_CheckInteger, 4|128,16/*2052*/, 
/*9249*/      OPC_MoveParent,
/*9250*/      OPC_RecordChild1, // #0 = $vA
/*9251*/      OPC_RecordChild2, // #1 = $vB
/*9252*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9254*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 2052:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VAVGUH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*9263*/    /*Scope*/ 17, /*->9281*/
/*9264*/      OPC_CheckInteger, 5|128,16/*2053*/, 
/*9267*/      OPC_MoveParent,
/*9268*/      OPC_RecordChild1, // #0 = $vA
/*9269*/      OPC_RecordChild2, // #1 = $vB
/*9270*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9272*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 2053:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VAVGUW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*9281*/    /*Scope*/ 17, /*->9299*/
/*9282*/      OPC_CheckInteger, 40|128,16/*2088*/, 
/*9285*/      OPC_MoveParent,
/*9286*/      OPC_RecordChild1, // #0 = $vA
/*9287*/      OPC_RecordChild2, // #1 = $vB
/*9288*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9290*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXSB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 2088:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VMAXSB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*9299*/    /*Scope*/ 17, /*->9317*/
/*9300*/      OPC_CheckInteger, 41|128,16/*2089*/, 
/*9303*/      OPC_MoveParent,
/*9304*/      OPC_RecordChild1, // #0 = $vA
/*9305*/      OPC_RecordChild2, // #1 = $vB
/*9306*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9308*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXSH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 2089:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VMAXSH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*9317*/    /*Scope*/ 17, /*->9335*/
/*9318*/      OPC_CheckInteger, 42|128,16/*2090*/, 
/*9321*/      OPC_MoveParent,
/*9322*/      OPC_RecordChild1, // #0 = $vA
/*9323*/      OPC_RecordChild2, // #1 = $vB
/*9324*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9326*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXSW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 2090:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VMAXSW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*9335*/    /*Scope*/ 17, /*->9353*/
/*9336*/      OPC_CheckInteger, 43|128,16/*2091*/, 
/*9339*/      OPC_MoveParent,
/*9340*/      OPC_RecordChild1, // #0 = $vA
/*9341*/      OPC_RecordChild2, // #1 = $vB
/*9342*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9344*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 2091:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VMAXUB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*9353*/    /*Scope*/ 17, /*->9371*/
/*9354*/      OPC_CheckInteger, 44|128,16/*2092*/, 
/*9357*/      OPC_MoveParent,
/*9358*/      OPC_RecordChild1, // #0 = $vA
/*9359*/      OPC_RecordChild2, // #1 = $vB
/*9360*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9362*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 2092:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VMAXUH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*9371*/    /*Scope*/ 17, /*->9389*/
/*9372*/      OPC_CheckInteger, 45|128,16/*2093*/, 
/*9375*/      OPC_MoveParent,
/*9376*/      OPC_RecordChild1, // #0 = $vA
/*9377*/      OPC_RecordChild2, // #1 = $vB
/*9378*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9380*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 2093:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VMAXUW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*9389*/    /*Scope*/ 17, /*->9407*/
/*9390*/      OPC_CheckInteger, 49|128,16/*2097*/, 
/*9393*/      OPC_MoveParent,
/*9394*/      OPC_RecordChild1, // #0 = $vA
/*9395*/      OPC_RecordChild2, // #1 = $vB
/*9396*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9398*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINSB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 2097:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VMINSB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*9407*/    /*Scope*/ 17, /*->9425*/
/*9408*/      OPC_CheckInteger, 50|128,16/*2098*/, 
/*9411*/      OPC_MoveParent,
/*9412*/      OPC_RecordChild1, // #0 = $vA
/*9413*/      OPC_RecordChild2, // #1 = $vB
/*9414*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9416*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINSH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 2098:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VMINSH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*9425*/    /*Scope*/ 17, /*->9443*/
/*9426*/      OPC_CheckInteger, 51|128,16/*2099*/, 
/*9429*/      OPC_MoveParent,
/*9430*/      OPC_RecordChild1, // #0 = $vA
/*9431*/      OPC_RecordChild2, // #1 = $vB
/*9432*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9434*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINSW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 2099:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VMINSW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*9443*/    /*Scope*/ 17, /*->9461*/
/*9444*/      OPC_CheckInteger, 52|128,16/*2100*/, 
/*9447*/      OPC_MoveParent,
/*9448*/      OPC_RecordChild1, // #0 = $vA
/*9449*/      OPC_RecordChild2, // #1 = $vB
/*9450*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9452*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 2100:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VMINUB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*9461*/    /*Scope*/ 17, /*->9479*/
/*9462*/      OPC_CheckInteger, 53|128,16/*2101*/, 
/*9465*/      OPC_MoveParent,
/*9466*/      OPC_RecordChild1, // #0 = $vA
/*9467*/      OPC_RecordChild2, // #1 = $vB
/*9468*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9470*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 2101:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VMINUH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*9479*/    /*Scope*/ 17, /*->9497*/
/*9480*/      OPC_CheckInteger, 54|128,16/*2102*/, 
/*9483*/      OPC_MoveParent,
/*9484*/      OPC_RecordChild1, // #0 = $vA
/*9485*/      OPC_RecordChild2, // #1 = $vB
/*9486*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9488*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 2102:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VMINUW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*9497*/    /*Scope*/ 19, /*->9517*/
/*9498*/      OPC_CheckInteger, 56|128,16/*2104*/, 
/*9501*/      OPC_MoveParent,
/*9502*/      OPC_RecordChild1, // #0 = $vA
/*9503*/      OPC_RecordChild2, // #1 = $vB
/*9504*/      OPC_RecordChild3, // #2 = $vC
/*9505*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9507*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMMBM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 2104:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB, v4i32:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMMBM:v4i32 v16i8:v16i8:$vA, v16i8:v16i8:$vB, v4i32:v4i32:$vC)
/*9517*/    /*Scope*/ 19, /*->9537*/
/*9518*/      OPC_CheckInteger, 57|128,16/*2105*/, 
/*9521*/      OPC_MoveParent,
/*9522*/      OPC_RecordChild1, // #0 = $vA
/*9523*/      OPC_RecordChild2, // #1 = $vB
/*9524*/      OPC_RecordChild3, // #2 = $vC
/*9525*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9527*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMSHM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 2105:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB, v4i32:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMSHM:v4i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB, v4i32:v4i32:$vC)
/*9537*/    /*Scope*/ 19, /*->9557*/
/*9538*/      OPC_CheckInteger, 58|128,16/*2106*/, 
/*9541*/      OPC_MoveParent,
/*9542*/      OPC_RecordChild1, // #0 = $vA
/*9543*/      OPC_RecordChild2, // #1 = $vB
/*9544*/      OPC_RecordChild3, // #2 = $vC
/*9545*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9547*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMSHS), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 2106:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB, v4i32:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMSHS:v4i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB, v4i32:v4i32:$vC)
/*9557*/    /*Scope*/ 19, /*->9577*/
/*9558*/      OPC_CheckInteger, 59|128,16/*2107*/, 
/*9561*/      OPC_MoveParent,
/*9562*/      OPC_RecordChild1, // #0 = $vA
/*9563*/      OPC_RecordChild2, // #1 = $vB
/*9564*/      OPC_RecordChild3, // #2 = $vC
/*9565*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9567*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMUBM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 2107:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB, v4i32:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMUBM:v4i32 v16i8:v16i8:$vA, v16i8:v16i8:$vB, v4i32:v4i32:$vC)
/*9577*/    /*Scope*/ 19, /*->9597*/
/*9578*/      OPC_CheckInteger, 60|128,16/*2108*/, 
/*9581*/      OPC_MoveParent,
/*9582*/      OPC_RecordChild1, // #0 = $vA
/*9583*/      OPC_RecordChild2, // #1 = $vB
/*9584*/      OPC_RecordChild3, // #2 = $vC
/*9585*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9587*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMUHM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 2108:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB, v4i32:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMUHM:v4i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB, v4i32:v4i32:$vC)
/*9597*/    /*Scope*/ 19, /*->9617*/
/*9598*/      OPC_CheckInteger, 61|128,16/*2109*/, 
/*9601*/      OPC_MoveParent,
/*9602*/      OPC_RecordChild1, // #0 = $vA
/*9603*/      OPC_RecordChild2, // #1 = $vB
/*9604*/      OPC_RecordChild3, // #2 = $vC
/*9605*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9607*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMUHS), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 2109:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB, v4i32:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMUHS:v4i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB, v4i32:v4i32:$vC)
/*9617*/    /*Scope*/ 17, /*->9635*/
/*9618*/      OPC_CheckInteger, 62|128,16/*2110*/, 
/*9621*/      OPC_MoveParent,
/*9622*/      OPC_RecordChild1, // #0 = $vA
/*9623*/      OPC_RecordChild2, // #1 = $vB
/*9624*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9626*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULESB), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 2110:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VMULESB:v8i16 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*9635*/    /*Scope*/ 17, /*->9653*/
/*9636*/      OPC_CheckInteger, 63|128,16/*2111*/, 
/*9639*/      OPC_MoveParent,
/*9640*/      OPC_RecordChild1, // #0 = $vA
/*9641*/      OPC_RecordChild2, // #1 = $vB
/*9642*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9644*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULESH), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 2111:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VMULESH:v4i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*9653*/    /*Scope*/ 17, /*->9671*/
/*9654*/      OPC_CheckInteger, 64|128,16/*2112*/, 
/*9657*/      OPC_MoveParent,
/*9658*/      OPC_RecordChild1, // #0 = $vA
/*9659*/      OPC_RecordChild2, // #1 = $vB
/*9660*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9662*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULEUB), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 2112:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VMULEUB:v8i16 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*9671*/    /*Scope*/ 17, /*->9689*/
/*9672*/      OPC_CheckInteger, 65|128,16/*2113*/, 
/*9675*/      OPC_MoveParent,
/*9676*/      OPC_RecordChild1, // #0 = $vA
/*9677*/      OPC_RecordChild2, // #1 = $vB
/*9678*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9680*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULEUH), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 2113:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VMULEUH:v4i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*9689*/    /*Scope*/ 17, /*->9707*/
/*9690*/      OPC_CheckInteger, 66|128,16/*2114*/, 
/*9693*/      OPC_MoveParent,
/*9694*/      OPC_RecordChild1, // #0 = $vA
/*9695*/      OPC_RecordChild2, // #1 = $vB
/*9696*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9698*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULOSB), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 2114:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VMULOSB:v8i16 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*9707*/    /*Scope*/ 17, /*->9725*/
/*9708*/      OPC_CheckInteger, 67|128,16/*2115*/, 
/*9711*/      OPC_MoveParent,
/*9712*/      OPC_RecordChild1, // #0 = $vA
/*9713*/      OPC_RecordChild2, // #1 = $vB
/*9714*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9716*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULOSH), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 2115:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VMULOSH:v4i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*9725*/    /*Scope*/ 17, /*->9743*/
/*9726*/      OPC_CheckInteger, 68|128,16/*2116*/, 
/*9729*/      OPC_MoveParent,
/*9730*/      OPC_RecordChild1, // #0 = $vA
/*9731*/      OPC_RecordChild2, // #1 = $vB
/*9732*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9734*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULOUB), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 2116:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VMULOUB:v8i16 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*9743*/    /*Scope*/ 17, /*->9761*/
/*9744*/      OPC_CheckInteger, 69|128,16/*2117*/, 
/*9747*/      OPC_MoveParent,
/*9748*/      OPC_RecordChild1, // #0 = $vA
/*9749*/      OPC_RecordChild2, // #1 = $vB
/*9750*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9752*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULOUH), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 2117:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VMULOUH:v4i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*9761*/    /*Scope*/ 17, /*->9779*/
/*9762*/      OPC_CheckInteger, 102|128,16/*2150*/, 
/*9765*/      OPC_MoveParent,
/*9766*/      OPC_RecordChild1, // #0 = $vA
/*9767*/      OPC_RecordChild2, // #1 = $vB
/*9768*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9770*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBCUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 2150:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSUBCUW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*9779*/    /*Scope*/ 17, /*->9797*/
/*9780*/      OPC_CheckInteger, 103|128,16/*2151*/, 
/*9783*/      OPC_MoveParent,
/*9784*/      OPC_RecordChild1, // #0 = $vA
/*9785*/      OPC_RecordChild2, // #1 = $vB
/*9786*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9788*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBSBS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 2151:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VSUBSBS:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*9797*/    /*Scope*/ 17, /*->9815*/
/*9798*/      OPC_CheckInteger, 104|128,16/*2152*/, 
/*9801*/      OPC_MoveParent,
/*9802*/      OPC_RecordChild1, // #0 = $vA
/*9803*/      OPC_RecordChild2, // #1 = $vB
/*9804*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9806*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBSHS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 2152:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VSUBSHS:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*9815*/    /*Scope*/ 17, /*->9833*/
/*9816*/      OPC_CheckInteger, 105|128,16/*2153*/, 
/*9819*/      OPC_MoveParent,
/*9820*/      OPC_RecordChild1, // #0 = $vA
/*9821*/      OPC_RecordChild2, // #1 = $vB
/*9822*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9824*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBSWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 2153:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSUBSWS:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*9833*/    /*Scope*/ 17, /*->9851*/
/*9834*/      OPC_CheckInteger, 106|128,16/*2154*/, 
/*9837*/      OPC_MoveParent,
/*9838*/      OPC_RecordChild1, // #0 = $vA
/*9839*/      OPC_RecordChild2, // #1 = $vB
/*9840*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9842*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUBS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 2154:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VSUBUBS:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*9851*/    /*Scope*/ 17, /*->9869*/
/*9852*/      OPC_CheckInteger, 107|128,16/*2155*/, 
/*9855*/      OPC_MoveParent,
/*9856*/      OPC_RecordChild1, // #0 = $vA
/*9857*/      OPC_RecordChild2, // #1 = $vB
/*9858*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9860*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUHS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 2155:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VSUBUHS:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*9869*/    /*Scope*/ 17, /*->9887*/
/*9870*/      OPC_CheckInteger, 108|128,16/*2156*/, 
/*9873*/      OPC_MoveParent,
/*9874*/      OPC_RecordChild1, // #0 = $vA
/*9875*/      OPC_RecordChild2, // #1 = $vB
/*9876*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9878*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 2156:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSUBUWS:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*9887*/    /*Scope*/ 17, /*->9905*/
/*9888*/      OPC_CheckInteger, 113|128,16/*2161*/, 
/*9891*/      OPC_MoveParent,
/*9892*/      OPC_RecordChild1, // #0 = $vA
/*9893*/      OPC_RecordChild2, // #1 = $vB
/*9894*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9896*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUMSWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 2161:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSUMSWS:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*9905*/    /*Scope*/ 17, /*->9923*/
/*9906*/      OPC_CheckInteger, 109|128,16/*2157*/, 
/*9909*/      OPC_MoveParent,
/*9910*/      OPC_RecordChild1, // #0 = $vA
/*9911*/      OPC_RecordChild2, // #1 = $vB
/*9912*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9914*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUM2SWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 2157:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSUM2SWS:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*9923*/    /*Scope*/ 17, /*->9941*/
/*9924*/      OPC_CheckInteger, 110|128,16/*2158*/, 
/*9927*/      OPC_MoveParent,
/*9928*/      OPC_RecordChild1, // #0 = $vA
/*9929*/      OPC_RecordChild2, // #1 = $vB
/*9930*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9932*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUM4SBS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 2158:iPTR, v16i8:v16i8:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSUM4SBS:v4i32 v16i8:v16i8:$vA, v4i32:v4i32:$vB)
/*9941*/    /*Scope*/ 17, /*->9959*/
/*9942*/      OPC_CheckInteger, 111|128,16/*2159*/, 
/*9945*/      OPC_MoveParent,
/*9946*/      OPC_RecordChild1, // #0 = $vA
/*9947*/      OPC_RecordChild2, // #1 = $vB
/*9948*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9950*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUM4SHS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 2159:iPTR, v8i16:v8i16:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSUM4SHS:v4i32 v8i16:v8i16:$vA, v4i32:v4i32:$vB)
/*9959*/    /*Scope*/ 17, /*->9977*/
/*9960*/      OPC_CheckInteger, 112|128,16/*2160*/, 
/*9963*/      OPC_MoveParent,
/*9964*/      OPC_RecordChild1, // #0 = $vA
/*9965*/      OPC_RecordChild2, // #1 = $vB
/*9966*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9968*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUM4UBS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 2160:iPTR, v16i8:v16i8:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSUM4UBS:v4i32 v16i8:v16i8:$vA, v4i32:v4i32:$vB)
/*9977*/    /*Scope*/ 17, /*->9995*/
/*9978*/      OPC_CheckInteger, 84|128,16/*2132*/, 
/*9981*/      OPC_MoveParent,
/*9982*/      OPC_RecordChild1, // #0 = $vA
/*9983*/      OPC_RecordChild2, // #1 = $vB
/*9984*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9986*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRLB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 2132:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VRLB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*9995*/    /*Scope*/ 17, /*->10013*/
/*9996*/      OPC_CheckInteger, 85|128,16/*2133*/, 
/*9999*/      OPC_MoveParent,
/*10000*/     OPC_RecordChild1, // #0 = $vA
/*10001*/     OPC_RecordChild2, // #1 = $vB
/*10002*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10004*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VRLH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 2133:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VRLH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*10013*/   /*Scope*/ 17, /*->10031*/
/*10014*/     OPC_CheckInteger, 86|128,16/*2134*/, 
/*10017*/     OPC_MoveParent,
/*10018*/     OPC_RecordChild1, // #0 = $vA
/*10019*/     OPC_RecordChild2, // #1 = $vB
/*10020*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10022*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VRLW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 2134:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VRLW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*10031*/   /*Scope*/ 17, /*->10049*/
/*10032*/     OPC_CheckInteger, 89|128,16/*2137*/, 
/*10035*/     OPC_MoveParent,
/*10036*/     OPC_RecordChild1, // #0 = $vA
/*10037*/     OPC_RecordChild2, // #1 = $vB
/*10038*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10040*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VSL), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 2137:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSL:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*10049*/   /*Scope*/ 17, /*->10067*/
/*10050*/     OPC_CheckInteger, 92|128,16/*2140*/, 
/*10053*/     OPC_MoveParent,
/*10054*/     OPC_RecordChild1, // #0 = $vA
/*10055*/     OPC_RecordChild2, // #1 = $vB
/*10056*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10058*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VSLO), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 2140:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSLO:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*10067*/   /*Scope*/ 17, /*->10085*/
/*10068*/     OPC_CheckInteger, 90|128,16/*2138*/, 
/*10071*/     OPC_MoveParent,
/*10072*/     OPC_RecordChild1, // #0 = $vA
/*10073*/     OPC_RecordChild2, // #1 = $vB
/*10074*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10076*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VSLB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 2138:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VSLB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*10085*/   /*Scope*/ 17, /*->10103*/
/*10086*/     OPC_CheckInteger, 91|128,16/*2139*/, 
/*10089*/     OPC_MoveParent,
/*10090*/     OPC_RecordChild1, // #0 = $vA
/*10091*/     OPC_RecordChild2, // #1 = $vB
/*10092*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10094*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VSLH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 2139:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VSLH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*10103*/   /*Scope*/ 17, /*->10121*/
/*10104*/     OPC_CheckInteger, 93|128,16/*2141*/, 
/*10107*/     OPC_MoveParent,
/*10108*/     OPC_RecordChild1, // #0 = $vA
/*10109*/     OPC_RecordChild2, // #1 = $vB
/*10110*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10112*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VSLW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 2141:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSLW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*10121*/   /*Scope*/ 17, /*->10139*/
/*10122*/     OPC_CheckInteger, 94|128,16/*2142*/, 
/*10125*/     OPC_MoveParent,
/*10126*/     OPC_RecordChild1, // #0 = $vA
/*10127*/     OPC_RecordChild2, // #1 = $vB
/*10128*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10130*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VSR), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 2142:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSR:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*10139*/   /*Scope*/ 17, /*->10157*/
/*10140*/     OPC_CheckInteger, 100|128,16/*2148*/, 
/*10143*/     OPC_MoveParent,
/*10144*/     OPC_RecordChild1, // #0 = $vA
/*10145*/     OPC_RecordChild2, // #1 = $vB
/*10146*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10148*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VSRO), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 2148:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSRO:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*10157*/   /*Scope*/ 17, /*->10175*/
/*10158*/     OPC_CheckInteger, 95|128,16/*2143*/, 
/*10161*/     OPC_MoveParent,
/*10162*/     OPC_RecordChild1, // #0 = $vA
/*10163*/     OPC_RecordChild2, // #1 = $vB
/*10164*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10166*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 2143:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VSRAB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*10175*/   /*Scope*/ 17, /*->10193*/
/*10176*/     OPC_CheckInteger, 96|128,16/*2144*/, 
/*10179*/     OPC_MoveParent,
/*10180*/     OPC_RecordChild1, // #0 = $vA
/*10181*/     OPC_RecordChild2, // #1 = $vB
/*10182*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10184*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 2144:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VSRAH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*10193*/   /*Scope*/ 17, /*->10211*/
/*10194*/     OPC_CheckInteger, 97|128,16/*2145*/, 
/*10197*/     OPC_MoveParent,
/*10198*/     OPC_RecordChild1, // #0 = $vA
/*10199*/     OPC_RecordChild2, // #1 = $vB
/*10200*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10202*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 2145:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSRAW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*10211*/   /*Scope*/ 17, /*->10229*/
/*10212*/     OPC_CheckInteger, 98|128,16/*2146*/, 
/*10215*/     OPC_MoveParent,
/*10216*/     OPC_RecordChild1, // #0 = $vA
/*10217*/     OPC_RecordChild2, // #1 = $vB
/*10218*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10220*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VSRB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 2146:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VSRB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*10229*/   /*Scope*/ 17, /*->10247*/
/*10230*/     OPC_CheckInteger, 99|128,16/*2147*/, 
/*10233*/     OPC_MoveParent,
/*10234*/     OPC_RecordChild1, // #0 = $vA
/*10235*/     OPC_RecordChild2, // #1 = $vB
/*10236*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10238*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VSRH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 2147:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VSRH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*10247*/   /*Scope*/ 17, /*->10265*/
/*10248*/     OPC_CheckInteger, 101|128,16/*2149*/, 
/*10251*/     OPC_MoveParent,
/*10252*/     OPC_RecordChild1, // #0 = $vA
/*10253*/     OPC_RecordChild2, // #1 = $vB
/*10254*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10256*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VSRW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 2149:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSRW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*10265*/   /*Scope*/ 17, /*->10283*/
/*10266*/     OPC_CheckInteger, 72|128,16/*2120*/, 
/*10269*/     OPC_MoveParent,
/*10270*/     OPC_RecordChild1, // #0 = $vA
/*10271*/     OPC_RecordChild2, // #1 = $vB
/*10272*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10274*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VPKPX), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 2120:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VPKPX:v8i16 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*10283*/   /*Scope*/ 17, /*->10301*/
/*10284*/     OPC_CheckInteger, 73|128,16/*2121*/, 
/*10287*/     OPC_MoveParent,
/*10288*/     OPC_RecordChild1, // #0 = $vA
/*10289*/     OPC_RecordChild2, // #1 = $vB
/*10290*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10292*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VPKSHSS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 2121:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VPKSHSS:v16i8 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*10301*/   /*Scope*/ 17, /*->10319*/
/*10302*/     OPC_CheckInteger, 74|128,16/*2122*/, 
/*10305*/     OPC_MoveParent,
/*10306*/     OPC_RecordChild1, // #0 = $vA
/*10307*/     OPC_RecordChild2, // #1 = $vB
/*10308*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10310*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VPKSHUS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 2122:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VPKSHUS:v16i8 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*10319*/   /*Scope*/ 17, /*->10337*/
/*10320*/     OPC_CheckInteger, 75|128,16/*2123*/, 
/*10323*/     OPC_MoveParent,
/*10324*/     OPC_RecordChild1, // #0 = $vA
/*10325*/     OPC_RecordChild2, // #1 = $vB
/*10326*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10328*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VPKSWSS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 2123:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VPKSWSS:v16i8 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*10337*/   /*Scope*/ 17, /*->10355*/
/*10338*/     OPC_CheckInteger, 76|128,16/*2124*/, 
/*10341*/     OPC_MoveParent,
/*10342*/     OPC_RecordChild1, // #0 = $vA
/*10343*/     OPC_RecordChild2, // #1 = $vB
/*10344*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10346*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VPKSWUS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 2124:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VPKSWUS:v8i16 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*10355*/   /*Scope*/ 17, /*->10373*/
/*10356*/     OPC_CheckInteger, 77|128,16/*2125*/, 
/*10359*/     OPC_MoveParent,
/*10360*/     OPC_RecordChild1, // #0 = $vA
/*10361*/     OPC_RecordChild2, // #1 = $vB
/*10362*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10364*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUHUS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 2125:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VPKUHUS:v16i8 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*10373*/   /*Scope*/ 17, /*->10391*/
/*10374*/     OPC_CheckInteger, 78|128,16/*2126*/, 
/*10377*/     OPC_MoveParent,
/*10378*/     OPC_RecordChild1, // #0 = $vA
/*10379*/     OPC_RecordChild2, // #1 = $vB
/*10380*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10382*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUWUS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 2126:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VPKUWUS:v8i16 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*10391*/   /*Scope*/ 15, /*->10407*/
/*10392*/     OPC_CheckInteger, 114|128,16/*2162*/, 
/*10395*/     OPC_MoveParent,
/*10396*/     OPC_RecordChild1, // #0 = $vB
/*10397*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10399*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKHPX), 0,
                  1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4i32 2162:iPTR, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VUPKHPX:v4i32 v8i16:v8i16:$vB)
/*10407*/   /*Scope*/ 15, /*->10423*/
/*10408*/     OPC_CheckInteger, 115|128,16/*2163*/, 
/*10411*/     OPC_MoveParent,
/*10412*/     OPC_RecordChild1, // #0 = $vB
/*10413*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10415*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKHSB), 0,
                  1/*#VTs*/, MVT::v8i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v8i16 2163:iPTR, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VUPKHSB:v8i16 v16i8:v16i8:$vB)
/*10423*/   /*Scope*/ 15, /*->10439*/
/*10424*/     OPC_CheckInteger, 116|128,16/*2164*/, 
/*10427*/     OPC_MoveParent,
/*10428*/     OPC_RecordChild1, // #0 = $vB
/*10429*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10431*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKHSH), 0,
                  1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4i32 2164:iPTR, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VUPKHSH:v4i32 v8i16:v8i16:$vB)
/*10439*/   /*Scope*/ 15, /*->10455*/
/*10440*/     OPC_CheckInteger, 117|128,16/*2165*/, 
/*10443*/     OPC_MoveParent,
/*10444*/     OPC_RecordChild1, // #0 = $vB
/*10445*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10447*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKLPX), 0,
                  1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4i32 2165:iPTR, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VUPKLPX:v4i32 v8i16:v8i16:$vB)
/*10455*/   /*Scope*/ 15, /*->10471*/
/*10456*/     OPC_CheckInteger, 118|128,16/*2166*/, 
/*10459*/     OPC_MoveParent,
/*10460*/     OPC_RecordChild1, // #0 = $vB
/*10461*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10463*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKLSB), 0,
                  1/*#VTs*/, MVT::v8i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v8i16 2166:iPTR, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VUPKLSB:v8i16 v16i8:v16i8:$vB)
/*10471*/   /*Scope*/ 15, /*->10487*/
/*10472*/     OPC_CheckInteger, 119|128,16/*2167*/, 
/*10475*/     OPC_MoveParent,
/*10476*/     OPC_RecordChild1, // #0 = $vB
/*10477*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10479*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKLSH), 0,
                  1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4i32 2167:iPTR, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VUPKLSH:v4i32 v8i16:v8i16:$vB)
/*10487*/   /*Scope*/ 44, /*->10532*/
/*10488*/     OPC_CheckInteger, 6|128,16/*2054*/, 
/*10491*/     OPC_MoveParent,
/*10492*/     OPC_RecordChild1, // #0 = $vB
/*10493*/     OPC_Scope, 15, /*->10510*/ // 2 children in Scope
/*10495*/       OPC_MoveChild, 2,
/*10497*/       OPC_CheckInteger, 0, 
/*10499*/       OPC_MoveParent,
/*10500*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10502*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VCFSX_0), 0,
                    1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4f32 2054:iPTR, v4i32:v4i32:$vB, 0:i32) - Complexity = 13
                // Dst: (VCFSX_0:v4f32 v4i32:v4i32:$vB)
/*10510*/     /*Scope*/ 20, /*->10531*/
/*10511*/       OPC_RecordChild2, // #1 = $UIMM
/*10512*/       OPC_MoveChild, 2,
/*10514*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10517*/       OPC_MoveParent,
/*10518*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10520*/       OPC_EmitConvertToTarget, 1,
/*10522*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VCFSX), 0,
                    1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 2, 0, 
                // Src: (intrinsic_wo_chain:v4f32 2054:iPTR, v4i32:v4i32:$vB, (imm:i32):$UIMM) - Complexity = 11
                // Dst: (VCFSX:v4f32 (imm:i32):$UIMM, v4i32:v4i32:$vB)
/*10531*/     0, /*End of Scope*/
/*10532*/   /*Scope*/ 44, /*->10577*/
/*10533*/     OPC_CheckInteger, 7|128,16/*2055*/, 
/*10536*/     OPC_MoveParent,
/*10537*/     OPC_RecordChild1, // #0 = $vB
/*10538*/     OPC_Scope, 15, /*->10555*/ // 2 children in Scope
/*10540*/       OPC_MoveChild, 2,
/*10542*/       OPC_CheckInteger, 0, 
/*10544*/       OPC_MoveParent,
/*10545*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10547*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VCFUX_0), 0,
                    1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4f32 2055:iPTR, v4i32:v4i32:$vB, 0:i32) - Complexity = 13
                // Dst: (VCFUX_0:v4f32 v4i32:v4i32:$vB)
/*10555*/     /*Scope*/ 20, /*->10576*/
/*10556*/       OPC_RecordChild2, // #1 = $UIMM
/*10557*/       OPC_MoveChild, 2,
/*10559*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10562*/       OPC_MoveParent,
/*10563*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10565*/       OPC_EmitConvertToTarget, 1,
/*10567*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VCFUX), 0,
                    1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 2, 0, 
                // Src: (intrinsic_wo_chain:v4f32 2055:iPTR, v4i32:v4i32:$vB, (imm:i32):$UIMM) - Complexity = 11
                // Dst: (VCFUX:v4f32 (imm:i32):$UIMM, v4i32:v4i32:$vB)
/*10576*/     0, /*End of Scope*/
/*10577*/   /*Scope*/ 15, /*->10593*/
/*10578*/     OPC_CheckInteger, 36|128,16/*2084*/, 
/*10581*/     OPC_MoveParent,
/*10582*/     OPC_RecordChild1, // #0 = $vB
/*10583*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10585*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VEXPTEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 2084:iPTR, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VEXPTEFP:v4f32 v4f32:v4f32:$vB)
/*10593*/   /*Scope*/ 15, /*->10609*/
/*10594*/     OPC_CheckInteger, 37|128,16/*2085*/, 
/*10597*/     OPC_MoveParent,
/*10598*/     OPC_RecordChild1, // #0 = $vB
/*10599*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10601*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VLOGEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 2085:iPTR, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VLOGEFP:v4f32 v4f32:v4f32:$vB)
/*10609*/   /*Scope*/ 17, /*->10627*/
/*10610*/     OPC_CheckInteger, 39|128,16/*2087*/, 
/*10613*/     OPC_MoveParent,
/*10614*/     OPC_RecordChild1, // #0 = $vA
/*10615*/     OPC_RecordChild2, // #1 = $vB
/*10616*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10618*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4f32 2087:iPTR, v4f32:v4f32:$vA, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VMAXFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*10627*/   /*Scope*/ 17, /*->10645*/
/*10628*/     OPC_CheckInteger, 48|128,16/*2096*/, 
/*10631*/     OPC_MoveParent,
/*10632*/     OPC_RecordChild1, // #0 = $vA
/*10633*/     OPC_RecordChild2, // #1 = $vB
/*10634*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10636*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VMINFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4f32 2096:iPTR, v4f32:v4f32:$vA, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VMINFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*10645*/   /*Scope*/ 15, /*->10661*/
/*10646*/     OPC_CheckInteger, 79|128,16/*2127*/, 
/*10649*/     OPC_MoveParent,
/*10650*/     OPC_RecordChild1, // #0 = $vB
/*10651*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10653*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VREFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 2127:iPTR, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VREFP:v4f32 v4f32:v4f32:$vB)
/*10661*/   /*Scope*/ 15, /*->10677*/
/*10662*/     OPC_CheckInteger, 80|128,16/*2128*/, 
/*10665*/     OPC_MoveParent,
/*10666*/     OPC_RecordChild1, // #0 = $vB
/*10667*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10669*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIM), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 2128:iPTR, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VRFIM:v4f32 v4f32:v4f32:$vB)
/*10677*/   /*Scope*/ 15, /*->10693*/
/*10678*/     OPC_CheckInteger, 81|128,16/*2129*/, 
/*10681*/     OPC_MoveParent,
/*10682*/     OPC_RecordChild1, // #0 = $vB
/*10683*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10685*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIN), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 2129:iPTR, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VRFIN:v4f32 v4f32:v4f32:$vB)
/*10693*/   /*Scope*/ 15, /*->10709*/
/*10694*/     OPC_CheckInteger, 82|128,16/*2130*/, 
/*10697*/     OPC_MoveParent,
/*10698*/     OPC_RecordChild1, // #0 = $vB
/*10699*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10701*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 2130:iPTR, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VRFIP:v4f32 v4f32:v4f32:$vB)
/*10709*/   /*Scope*/ 15, /*->10725*/
/*10710*/     OPC_CheckInteger, 83|128,16/*2131*/, 
/*10713*/     OPC_MoveParent,
/*10714*/     OPC_RecordChild1, // #0 = $vB
/*10715*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10717*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIZ), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 2131:iPTR, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VRFIZ:v4f32 v4f32:v4f32:$vB)
/*10725*/   /*Scope*/ 15, /*->10741*/
/*10726*/     OPC_CheckInteger, 87|128,16/*2135*/, 
/*10729*/     OPC_MoveParent,
/*10730*/     OPC_RecordChild1, // #0 = $vB
/*10731*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10733*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VRSQRTEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 2135:iPTR, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VRSQRTEFP:v4f32 v4f32:v4f32:$vB)
/*10741*/   /*Scope*/ 19, /*->10761*/
/*10742*/     OPC_CheckInteger, 38|128,16/*2086*/, 
/*10745*/     OPC_MoveParent,
/*10746*/     OPC_RecordChild1, // #0 = $A
/*10747*/     OPC_RecordChild2, // #1 = $B
/*10748*/     OPC_RecordChild3, // #2 = $C
/*10749*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10751*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VMADDFP), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4f32 2086:iPTR, v4f32:v4f32:$A, v4f32:v4f32:$B, v4f32:v4f32:$C) - Complexity = 8
              // Dst: (VMADDFP:v4f32 ?:v4f32:$A, ?:v4f32:$B, ?:v4f32:$C)
/*10761*/   /*Scope*/ 19, /*->10781*/
/*10762*/     OPC_CheckInteger, 70|128,16/*2118*/, 
/*10765*/     OPC_MoveParent,
/*10766*/     OPC_RecordChild1, // #0 = $A
/*10767*/     OPC_RecordChild2, // #1 = $B
/*10768*/     OPC_RecordChild3, // #2 = $C
/*10769*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10771*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VNMSUBFP), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4f32 2118:iPTR, v4f32:v4f32:$A, v4f32:v4f32:$B, v4f32:v4f32:$C) - Complexity = 8
              // Dst: (VNMSUBFP:v4f32 ?:v4f32:$A, ?:v4f32:$B, ?:v4f32:$C)
/*10781*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::CALLSEQ_END),// ->10811
/*10785*/   OPC_RecordNode,   // #0 = 'callseq_end' chained node
/*10786*/   OPC_CaptureGlueInput,
/*10787*/   OPC_RecordChild1, // #1 = $amt1
/*10788*/   OPC_MoveChild, 1,
/*10790*/   OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*10793*/   OPC_MoveParent,
/*10794*/   OPC_RecordChild2, // #2 = $amt2
/*10795*/   OPC_MoveChild, 2,
/*10797*/   OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*10800*/   OPC_MoveParent,
/*10801*/   OPC_EmitMergeInputChains1_0,
/*10802*/   OPC_MorphNodeTo, TARGET_VAL(PPC::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: (callseq_end (timm:i32):$amt1, (timm:i32):$amt2) - Complexity = 9
            // Dst: (ADJCALLSTACKUP:i32 (timm:i32):$amt1, (timm:i32):$amt2)
          /*SwitchOpcode*/ 70|128,1/*198*/,  TARGET_VAL(PPCISD::TC_RETURN),// ->11013
/*10815*/   OPC_RecordNode,   // #0 = 'PPCtc_return' chained node
/*10816*/   OPC_CaptureGlueInput,
/*10817*/   OPC_RecordChild1, // #1 = $func
/*10818*/   OPC_Scope, 21|128,1/*149*/, /*->10970*/ // 3 children in Scope
/*10821*/     OPC_MoveChild, 1,
/*10823*/     OPC_SwitchOpcode /*3 cases */, 48,  TARGET_VAL(ISD::Constant),// ->10875
/*10827*/       OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->10851
/*10830*/         OPC_MoveParent,
/*10831*/         OPC_RecordChild2, // #2 = $offset
/*10832*/         OPC_MoveChild, 2,
/*10834*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10837*/         OPC_MoveParent,
/*10838*/         OPC_EmitMergeInputChains1_0,
/*10839*/         OPC_EmitConvertToTarget, 1,
/*10841*/         OPC_EmitConvertToTarget, 2,
/*10843*/         OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNai), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 3, 4, 
                  // Src: (PPCtc_return (imm:i32):$func, (imm:i32):$offset) - Complexity = 9
                  // Dst: (TCRETURNai (imm:i32):$func, (imm:i32):$offset)
                /*SwitchType*/ 21,  MVT::i64,// ->10874
/*10853*/         OPC_MoveParent,
/*10854*/         OPC_RecordChild2, // #2 = $offset
/*10855*/         OPC_MoveChild, 2,
/*10857*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10860*/         OPC_MoveParent,
/*10861*/         OPC_EmitMergeInputChains1_0,
/*10862*/         OPC_EmitConvertToTarget, 1,
/*10864*/         OPC_EmitConvertToTarget, 2,
/*10866*/         OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNai8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 3, 4, 
                  // Src: (PPCtc_return (imm:i64):$func, (imm:i32):$offset) - Complexity = 9
                  // Dst: (TCRETURNai8 (imm:i64):$func, (imm:i32):$offset)
                0, // EndSwitchType
              /*SwitchOpcode*/ 44,  TARGET_VAL(ISD::TargetGlobalAddress),// ->10922
/*10878*/       OPC_SwitchType /*2 cases */, 19,  MVT::i32,// ->10900
/*10881*/         OPC_MoveParent,
/*10882*/         OPC_RecordChild2, // #2 = $imm
/*10883*/         OPC_MoveChild, 2,
/*10885*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10888*/         OPC_MoveParent,
/*10889*/         OPC_EmitMergeInputChains1_0,
/*10890*/         OPC_EmitConvertToTarget, 2,
/*10892*/         OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNdi), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (PPCtc_return (tglobaladdr:i32):$dst, (imm:i32):$imm) - Complexity = 9
                  // Dst: (TCRETURNdi (tglobaladdr:i32):$dst, (imm:i32):$imm)
                /*SwitchType*/ 19,  MVT::i64,// ->10921
/*10902*/         OPC_MoveParent,
/*10903*/         OPC_RecordChild2, // #2 = $imm
/*10904*/         OPC_MoveChild, 2,
/*10906*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10909*/         OPC_MoveParent,
/*10910*/         OPC_EmitMergeInputChains1_0,
/*10911*/         OPC_EmitConvertToTarget, 2,
/*10913*/         OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNdi8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (PPCtc_return (tglobaladdr:i64):$dst, (imm:i32):$imm) - Complexity = 9
                  // Dst: (TCRETURNdi8 (tglobaladdr:i64):$dst, (imm:i32):$imm)
                0, // EndSwitchType
              /*SwitchOpcode*/ 44,  TARGET_VAL(ISD::TargetExternalSymbol),// ->10969
/*10925*/       OPC_SwitchType /*2 cases */, 19,  MVT::i32,// ->10947
/*10928*/         OPC_MoveParent,
/*10929*/         OPC_RecordChild2, // #2 = $imm
/*10930*/         OPC_MoveChild, 2,
/*10932*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10935*/         OPC_MoveParent,
/*10936*/         OPC_EmitMergeInputChains1_0,
/*10937*/         OPC_EmitConvertToTarget, 2,
/*10939*/         OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNdi), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (PPCtc_return (texternalsym:i32):$dst, (imm:i32):$imm) - Complexity = 9
                  // Dst: (TCRETURNdi (texternalsym:i32):$dst, (imm:i32):$imm)
                /*SwitchType*/ 19,  MVT::i64,// ->10968
/*10949*/         OPC_MoveParent,
/*10950*/         OPC_RecordChild2, // #2 = $imm
/*10951*/         OPC_MoveChild, 2,
/*10953*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10956*/         OPC_MoveParent,
/*10957*/         OPC_EmitMergeInputChains1_0,
/*10958*/         OPC_EmitConvertToTarget, 2,
/*10960*/         OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNdi8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (PPCtc_return (texternalsym:i64):$dst, (imm:i32):$imm) - Complexity = 9
                  // Dst: (TCRETURNdi8 (texternalsym:i64):$dst, (imm:i32):$imm)
                0, // EndSwitchType
              0, // EndSwitchOpcode
/*10970*/   /*Scope*/ 20, /*->10991*/
/*10971*/     OPC_CheckChild1Type, MVT::i32,
/*10973*/     OPC_RecordChild2, // #2 = $imm
/*10974*/     OPC_MoveChild, 2,
/*10976*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10979*/     OPC_MoveParent,
/*10980*/     OPC_EmitMergeInputChains1_0,
/*10981*/     OPC_EmitConvertToTarget, 2,
/*10983*/     OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                  0/*#VTs*/, 2/*#Ops*/, 1, 3, 
              // Src: (PPCtc_return CTRRC:i32:$dst, (imm:i32):$imm) - Complexity = 6
              // Dst: (TCRETURNri CTRRC:i32:$dst, (imm:i32):$imm)
/*10991*/   /*Scope*/ 20, /*->11012*/
/*10992*/     OPC_CheckChild1Type, MVT::i64,
/*10994*/     OPC_RecordChild2, // #2 = $imm
/*10995*/     OPC_MoveChild, 2,
/*10997*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11000*/     OPC_MoveParent,
/*11001*/     OPC_EmitMergeInputChains1_0,
/*11002*/     OPC_EmitConvertToTarget, 2,
/*11004*/     OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNri8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                  0/*#VTs*/, 2/*#Ops*/, 1, 3, 
              // Src: (PPCtc_return CTRRC8:i64:$dst, (imm:i32):$imm) - Complexity = 6
              // Dst: (TCRETURNri8 CTRRC8:i64:$dst, (imm:i32):$imm)
/*11012*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 24,  TARGET_VAL(ISD::ATOMIC_FENCE),// ->11040
/*11016*/   OPC_RecordNode,   // #0 = 'atomic_fence' chained node
/*11017*/   OPC_MoveChild, 1,
/*11019*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11022*/   OPC_MoveParent,
/*11023*/   OPC_MoveChild, 2,
/*11025*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11028*/   OPC_MoveParent,
/*11029*/   OPC_EmitMergeInputChains1_0,
/*11030*/   OPC_EmitInteger, MVT::i32, 0, 
/*11033*/   OPC_MorphNodeTo, TARGET_VAL(PPC::SYNC), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (atomic_fence (imm:iPTR), (imm:iPTR)) - Complexity = 9
            // Dst: (SYNC 0:i32)
          /*SwitchOpcode*/ 32,  TARGET_VAL(PPCISD::EH_SJLJ_LONGJMP),// ->11075
/*11043*/   OPC_RecordNode,   // #0 = 'PPCeh_sjlj_longjmp' chained node
/*11044*/   OPC_RecordChild1, // #1 = $buf
/*11045*/   OPC_Scope, 13, /*->11060*/ // 2 children in Scope
/*11047*/     OPC_CheckPatternPredicate, 1, // (!PPCSubTarget.isPPC64())
/*11049*/     OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectAddr:$buf #2
/*11052*/     OPC_EmitMergeInputChains1_0,
/*11053*/     OPC_MorphNodeTo, TARGET_VAL(PPC::EH_SjLj_LongJmp32), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 2, 
              // Src: (PPCeh_sjlj_longjmp addr:iPTR:$buf) - Complexity = 9
              // Dst: (EH_SjLj_LongJmp32 addr:iPTR:$buf)
/*11060*/   /*Scope*/ 13, /*->11074*/
/*11061*/     OPC_CheckPatternPredicate, 2, // (PPCSubTarget.isPPC64())
/*11063*/     OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectAddr:$buf #2
/*11066*/     OPC_EmitMergeInputChains1_0,
/*11067*/     OPC_MorphNodeTo, TARGET_VAL(PPC::EH_SjLj_LongJmp64), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 2, 
              // Src: (PPCeh_sjlj_longjmp addr:iPTR:$buf) - Complexity = 9
              // Dst: (EH_SjLj_LongJmp64 addr:iPTR:$buf)
/*11074*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 110|128,1/*238*/,  TARGET_VAL(PPCISD::VCMP),// ->11317
/*11079*/   OPC_RecordChild0, // #0 = $vA
/*11080*/   OPC_RecordChild1, // #1 = $vB
/*11081*/   OPC_MoveChild, 2,
/*11083*/   OPC_Scope, 16, /*->11101*/ // 13 children in Scope
/*11085*/     OPC_CheckInteger, 6, 
/*11087*/     OPC_MoveParent,
/*11088*/     OPC_CheckType, MVT::v16i8,
/*11090*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11092*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB, 6:i32) - Complexity = 8
              // Dst: (VCMPEQUB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11101*/   /*Scope*/ 17, /*->11119*/
/*11102*/     OPC_CheckInteger, 6|128,6/*774*/, 
/*11105*/     OPC_MoveParent,
/*11106*/     OPC_CheckType, MVT::v16i8,
/*11108*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11110*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB, 774:i32) - Complexity = 8
              // Dst: (VCMPGTSB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11119*/   /*Scope*/ 17, /*->11137*/
/*11120*/     OPC_CheckInteger, 6|128,4/*518*/, 
/*11123*/     OPC_MoveParent,
/*11124*/     OPC_CheckType, MVT::v16i8,
/*11126*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11128*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB, 518:i32) - Complexity = 8
              // Dst: (VCMPGTUB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11137*/   /*Scope*/ 16, /*->11154*/
/*11138*/     OPC_CheckInteger, 70, 
/*11140*/     OPC_MoveParent,
/*11141*/     OPC_CheckType, MVT::v8i16,
/*11143*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11145*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, 70:i32) - Complexity = 8
              // Dst: (VCMPEQUH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*11154*/   /*Scope*/ 17, /*->11172*/
/*11155*/     OPC_CheckInteger, 70|128,6/*838*/, 
/*11158*/     OPC_MoveParent,
/*11159*/     OPC_CheckType, MVT::v8i16,
/*11161*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11163*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, 838:i32) - Complexity = 8
              // Dst: (VCMPGTSH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*11172*/   /*Scope*/ 17, /*->11190*/
/*11173*/     OPC_CheckInteger, 70|128,4/*582*/, 
/*11176*/     OPC_MoveParent,
/*11177*/     OPC_CheckType, MVT::v8i16,
/*11179*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11181*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, 582:i32) - Complexity = 8
              // Dst: (VCMPGTUH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*11190*/   /*Scope*/ 17, /*->11208*/
/*11191*/     OPC_CheckInteger, 6|128,1/*134*/, 
/*11194*/     OPC_MoveParent,
/*11195*/     OPC_CheckType, MVT::v4i32,
/*11197*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11199*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB, 134:i32) - Complexity = 8
              // Dst: (VCMPEQUW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*11208*/   /*Scope*/ 17, /*->11226*/
/*11209*/     OPC_CheckInteger, 6|128,7/*902*/, 
/*11212*/     OPC_MoveParent,
/*11213*/     OPC_CheckType, MVT::v4i32,
/*11215*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11217*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB, 902:i32) - Complexity = 8
              // Dst: (VCMPGTSW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*11226*/   /*Scope*/ 17, /*->11244*/
/*11227*/     OPC_CheckInteger, 6|128,5/*646*/, 
/*11230*/     OPC_MoveParent,
/*11231*/     OPC_CheckType, MVT::v4i32,
/*11233*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11235*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB, 646:i32) - Complexity = 8
              // Dst: (VCMPGTUW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*11244*/   /*Scope*/ 17, /*->11262*/
/*11245*/     OPC_CheckInteger, 70|128,7/*966*/, 
/*11248*/     OPC_MoveParent,
/*11249*/     OPC_CheckType, MVT::v4f32,
/*11251*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11253*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPBFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB, 966:i32) - Complexity = 8
              // Dst: (VCMPBFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*11262*/   /*Scope*/ 17, /*->11280*/
/*11263*/     OPC_CheckInteger, 70|128,1/*198*/, 
/*11266*/     OPC_MoveParent,
/*11267*/     OPC_CheckType, MVT::v4f32,
/*11269*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11271*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB, 198:i32) - Complexity = 8
              // Dst: (VCMPEQFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*11280*/   /*Scope*/ 17, /*->11298*/
/*11281*/     OPC_CheckInteger, 70|128,3/*454*/, 
/*11284*/     OPC_MoveParent,
/*11285*/     OPC_CheckType, MVT::v4f32,
/*11287*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11289*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB, 454:i32) - Complexity = 8
              // Dst: (VCMPGEFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*11298*/   /*Scope*/ 17, /*->11316*/
/*11299*/     OPC_CheckInteger, 70|128,5/*710*/, 
/*11302*/     OPC_MoveParent,
/*11303*/     OPC_CheckType, MVT::v4f32,
/*11305*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11307*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB, 710:i32) - Complexity = 8
              // Dst: (VCMPGTFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*11316*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 123|128,1/*251*/,  TARGET_VAL(PPCISD::VCMPo),// ->11572
/*11321*/   OPC_RecordChild0, // #0 = $vA
/*11322*/   OPC_RecordChild1, // #1 = $vB
/*11323*/   OPC_MoveChild, 2,
/*11325*/   OPC_Scope, 17, /*->11344*/ // 13 children in Scope
/*11327*/     OPC_CheckInteger, 6, 
/*11329*/     OPC_MoveParent,
/*11330*/     OPC_CheckType, MVT::v16i8,
/*11332*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11334*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUBo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v16i8, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB, 6:i32) - Complexity = 8
              // Dst: (VCMPEQUBo:v16i8:i32 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11344*/   /*Scope*/ 18, /*->11363*/
/*11345*/     OPC_CheckInteger, 6|128,6/*774*/, 
/*11348*/     OPC_MoveParent,
/*11349*/     OPC_CheckType, MVT::v16i8,
/*11351*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11353*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSBo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v16i8, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB, 774:i32) - Complexity = 8
              // Dst: (VCMPGTSBo:v16i8:i32 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11363*/   /*Scope*/ 18, /*->11382*/
/*11364*/     OPC_CheckInteger, 6|128,4/*518*/, 
/*11367*/     OPC_MoveParent,
/*11368*/     OPC_CheckType, MVT::v16i8,
/*11370*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11372*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUBo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v16i8, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB, 518:i32) - Complexity = 8
              // Dst: (VCMPGTUBo:v16i8:i32 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11382*/   /*Scope*/ 17, /*->11400*/
/*11383*/     OPC_CheckInteger, 70, 
/*11385*/     OPC_MoveParent,
/*11386*/     OPC_CheckType, MVT::v8i16,
/*11388*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11390*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUHo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v8i16, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, 70:i32) - Complexity = 8
              // Dst: (VCMPEQUHo:v8i16:i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*11400*/   /*Scope*/ 18, /*->11419*/
/*11401*/     OPC_CheckInteger, 70|128,6/*838*/, 
/*11404*/     OPC_MoveParent,
/*11405*/     OPC_CheckType, MVT::v8i16,
/*11407*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11409*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSHo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v8i16, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, 838:i32) - Complexity = 8
              // Dst: (VCMPGTSHo:v8i16:i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*11419*/   /*Scope*/ 18, /*->11438*/
/*11420*/     OPC_CheckInteger, 70|128,4/*582*/, 
/*11423*/     OPC_MoveParent,
/*11424*/     OPC_CheckType, MVT::v8i16,
/*11426*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11428*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUHo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v8i16, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, 582:i32) - Complexity = 8
              // Dst: (VCMPGTUHo:v8i16:i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*11438*/   /*Scope*/ 18, /*->11457*/
/*11439*/     OPC_CheckInteger, 6|128,1/*134*/, 
/*11442*/     OPC_MoveParent,
/*11443*/     OPC_CheckType, MVT::v4i32,
/*11445*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11447*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUWo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB, 134:i32) - Complexity = 8
              // Dst: (VCMPEQUWo:v4i32:i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*11457*/   /*Scope*/ 18, /*->11476*/
/*11458*/     OPC_CheckInteger, 6|128,7/*902*/, 
/*11461*/     OPC_MoveParent,
/*11462*/     OPC_CheckType, MVT::v4i32,
/*11464*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11466*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSWo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB, 902:i32) - Complexity = 8
              // Dst: (VCMPGTSWo:v4i32:i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*11476*/   /*Scope*/ 18, /*->11495*/
/*11477*/     OPC_CheckInteger, 6|128,5/*646*/, 
/*11480*/     OPC_MoveParent,
/*11481*/     OPC_CheckType, MVT::v4i32,
/*11483*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11485*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUWo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB, 646:i32) - Complexity = 8
              // Dst: (VCMPGTUWo:v4i32:i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*11495*/   /*Scope*/ 18, /*->11514*/
/*11496*/     OPC_CheckInteger, 70|128,7/*966*/, 
/*11499*/     OPC_MoveParent,
/*11500*/     OPC_CheckType, MVT::v4f32,
/*11502*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11504*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPBFPo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4f32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB, 966:i32) - Complexity = 8
              // Dst: (VCMPBFPo:v4f32:i32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*11514*/   /*Scope*/ 18, /*->11533*/
/*11515*/     OPC_CheckInteger, 70|128,1/*198*/, 
/*11518*/     OPC_MoveParent,
/*11519*/     OPC_CheckType, MVT::v4f32,
/*11521*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11523*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQFPo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4f32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB, 198:i32) - Complexity = 8
              // Dst: (VCMPEQFPo:v4f32:i32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*11533*/   /*Scope*/ 18, /*->11552*/
/*11534*/     OPC_CheckInteger, 70|128,3/*454*/, 
/*11537*/     OPC_MoveParent,
/*11538*/     OPC_CheckType, MVT::v4f32,
/*11540*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11542*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGEFPo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4f32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB, 454:i32) - Complexity = 8
              // Dst: (VCMPGEFPo:v4f32:i32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*11552*/   /*Scope*/ 18, /*->11571*/
/*11553*/     OPC_CheckInteger, 70|128,5/*710*/, 
/*11556*/     OPC_MoveParent,
/*11557*/     OPC_CheckType, MVT::v4f32,
/*11559*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11561*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTFPo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4f32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB, 710:i32) - Complexity = 8
              // Dst: (VCMPGTFPo:v4f32:i32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*11571*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 94|128,2/*350*/,  TARGET_VAL(ISD::VECTOR_SHUFFLE),// ->11926
/*11576*/   OPC_Scope, 81, /*->11659*/ // 4 children in Scope
/*11578*/     OPC_RecordNode, // #0 = $UIMM
/*11579*/     OPC_RecordChild0, // #1 = $vB
/*11580*/     OPC_MoveChild, 1,
/*11582*/     OPC_CheckOpcode, TARGET_VAL(ISD::UNDEF),
/*11585*/     OPC_MoveParent,
/*11586*/     OPC_CheckType, MVT::v16i8,
/*11588*/     OPC_Scope, 16, /*->11606*/ // 4 children in Scope
/*11590*/       OPC_CheckPredicate, 75, // Predicate_vspltb_shuffle
/*11592*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11594*/       OPC_EmitNodeXForm, 9, 0, // VSPLTB_get_imm
/*11597*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 2, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vB, (undef:v16i8))<<P:Predicate_vspltb_shuffle>><<X:VSPLTB_get_imm>>:$UIMM - Complexity = 7
                // Dst: (VSPLTB:v16i8 (VSPLTB_get_imm:i32 (vector_shuffle:v16i8 v16i8:v16i8:$vB, (undef:v16i8)):$UIMM), v16i8:v16i8:$vB)
/*11606*/     /*Scope*/ 16, /*->11623*/
/*11607*/       OPC_CheckPredicate, 76, // Predicate_vsplth_shuffle
/*11609*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11611*/       OPC_EmitNodeXForm, 10, 0, // VSPLTH_get_imm
/*11614*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 2, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vB, (undef:v16i8))<<P:Predicate_vsplth_shuffle>><<X:VSPLTH_get_imm>>:$UIMM - Complexity = 7
                // Dst: (VSPLTH:v16i8 (VSPLTH_get_imm:i32 (vector_shuffle:v16i8 v16i8:v16i8:$vB, (undef:v16i8)):$UIMM), v16i8:v16i8:$vB)
/*11623*/     /*Scope*/ 16, /*->11640*/
/*11624*/       OPC_CheckPredicate, 77, // Predicate_vspltw_shuffle
/*11626*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11628*/       OPC_EmitNodeXForm, 11, 0, // VSPLTW_get_imm
/*11631*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 2, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vB, (undef:v16i8))<<P:Predicate_vspltw_shuffle>><<X:VSPLTW_get_imm>>:$UIMM - Complexity = 7
                // Dst: (VSPLTW:v16i8 (VSPLTW_get_imm:i32 (vector_shuffle:v16i8 v16i8:v16i8:$vB, (undef:v16i8)):$UIMM), v16i8:v16i8:$vB)
/*11640*/     /*Scope*/ 17, /*->11658*/
/*11641*/       OPC_CheckPredicate, 78, // Predicate_vsldoi_unary_shuffle
/*11643*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11645*/       OPC_EmitNodeXForm, 12, 0, // VSLDOI_unary_get_imm
/*11648*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSLDOI), 0,
                    1/*#VTs*/, MVT::v16i8, 3/*#Ops*/, 1, 1, 2, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vsldoi_unary_shuffle>><<X:VSLDOI_unary_get_imm>>:$in - Complexity = 7
                // Dst: (VSLDOI:v16i8 ?:v16i8:$vA, ?:v16i8:$vA, (VSLDOI_unary_get_imm:i32 ?:v16i8:$in))
/*11658*/     0, /*End of Scope*/
/*11659*/   /*Scope*/ 123, /*->11783*/
/*11660*/     OPC_RecordChild0, // #0 = $vA
/*11661*/     OPC_MoveChild, 1,
/*11663*/     OPC_CheckOpcode, TARGET_VAL(ISD::UNDEF),
/*11666*/     OPC_MoveParent,
/*11667*/     OPC_CheckType, MVT::v16i8,
/*11669*/     OPC_Scope, 13, /*->11684*/ // 8 children in Scope
/*11671*/       OPC_CheckPredicate, 79, // Predicate_vpkuwum_unary_shuffle
/*11673*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11675*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUWUM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vpkuwum_unary_shuffle>> - Complexity = 7
                // Dst: (VPKUWUM:v16i8 ?:v16i8:$vA, ?:v16i8:$vA)
/*11684*/     /*Scope*/ 13, /*->11698*/
/*11685*/       OPC_CheckPredicate, 80, // Predicate_vpkuhum_unary_shuffle
/*11687*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11689*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUHUM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vpkuhum_unary_shuffle>> - Complexity = 7
                // Dst: (VPKUHUM:v16i8 ?:v16i8:$vA, ?:v16i8:$vA)
/*11698*/     /*Scope*/ 13, /*->11712*/
/*11699*/       OPC_CheckPredicate, 81, // Predicate_vmrglb_unary_shuffle
/*11701*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11703*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrglb_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGLB:v16i8 ?:v16i8:$vA, ?:v16i8:$vA)
/*11712*/     /*Scope*/ 13, /*->11726*/
/*11713*/       OPC_CheckPredicate, 82, // Predicate_vmrglh_unary_shuffle
/*11715*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11717*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrglh_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGLH:v16i8 ?:v16i8:$vA, ?:v16i8:$vA)
/*11726*/     /*Scope*/ 13, /*->11740*/
/*11727*/       OPC_CheckPredicate, 83, // Predicate_vmrglw_unary_shuffle
/*11729*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11731*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrglw_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGLW:v16i8 ?:v16i8:$vA, ?:v16i8:$vA)
/*11740*/     /*Scope*/ 13, /*->11754*/
/*11741*/       OPC_CheckPredicate, 84, // Predicate_vmrghb_unary_shuffle
/*11743*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11745*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrghb_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGHB:v16i8 ?:v16i8:$vA, ?:v16i8:$vA)
/*11754*/     /*Scope*/ 13, /*->11768*/
/*11755*/       OPC_CheckPredicate, 85, // Predicate_vmrghh_unary_shuffle
/*11757*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11759*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrghh_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGHH:v16i8 ?:v16i8:$vA, ?:v16i8:$vA)
/*11768*/     /*Scope*/ 13, /*->11782*/
/*11769*/       OPC_CheckPredicate, 86, // Predicate_vmrghw_unary_shuffle
/*11771*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11773*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrghw_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGHW:v16i8 ?:v16i8:$vA, ?:v16i8:$vA)
/*11782*/     0, /*End of Scope*/
/*11783*/   /*Scope*/ 22, /*->11806*/
/*11784*/     OPC_RecordNode, // #0 = $SH
/*11785*/     OPC_RecordChild0, // #1 = $vA
/*11786*/     OPC_RecordChild1, // #2 = $vB
/*11787*/     OPC_CheckPredicate, 87, // Predicate_vsldoi_shuffle
/*11789*/     OPC_CheckType, MVT::v16i8,
/*11791*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11793*/     OPC_EmitNodeXForm, 13, 0, // VSLDOI_get_imm
/*11796*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VSLDOI), 0,
                  1/*#VTs*/, MVT::v16i8, 3/*#Ops*/, 1, 2, 3, 
              // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vsldoi_shuffle>><<X:VSLDOI_get_imm>>:$SH - Complexity = 4
              // Dst: (VSLDOI:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB, (VSLDOI_get_imm:i32 (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB):$SH))
/*11806*/   /*Scope*/ 118, /*->11925*/
/*11807*/     OPC_RecordChild0, // #0 = $vA
/*11808*/     OPC_RecordChild1, // #1 = $vB
/*11809*/     OPC_CheckType, MVT::v16i8,
/*11811*/     OPC_Scope, 13, /*->11826*/ // 8 children in Scope
/*11813*/       OPC_CheckPredicate, 88, // Predicate_vmrghb_shuffle
/*11815*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11817*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vmrghb_shuffle>> - Complexity = 4
                // Dst: (VMRGHB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11826*/     /*Scope*/ 13, /*->11840*/
/*11827*/       OPC_CheckPredicate, 89, // Predicate_vmrghh_shuffle
/*11829*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11831*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vmrghh_shuffle>> - Complexity = 4
                // Dst: (VMRGHH:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11840*/     /*Scope*/ 13, /*->11854*/
/*11841*/       OPC_CheckPredicate, 90, // Predicate_vmrghw_shuffle
/*11843*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11845*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vmrghw_shuffle>> - Complexity = 4
                // Dst: (VMRGHW:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11854*/     /*Scope*/ 13, /*->11868*/
/*11855*/       OPC_CheckPredicate, 91, // Predicate_vmrglb_shuffle
/*11857*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11859*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vmrglb_shuffle>> - Complexity = 4
                // Dst: (VMRGLB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11868*/     /*Scope*/ 13, /*->11882*/
/*11869*/       OPC_CheckPredicate, 92, // Predicate_vmrglh_shuffle
/*11871*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11873*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vmrglh_shuffle>> - Complexity = 4
                // Dst: (VMRGLH:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11882*/     /*Scope*/ 13, /*->11896*/
/*11883*/       OPC_CheckPredicate, 93, // Predicate_vmrglw_shuffle
/*11885*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11887*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vmrglw_shuffle>> - Complexity = 4
                // Dst: (VMRGLW:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11896*/     /*Scope*/ 13, /*->11910*/
/*11897*/       OPC_CheckPredicate, 94, // Predicate_vpkuhum_shuffle
/*11899*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11901*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUHUM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vpkuhum_shuffle>> - Complexity = 4
                // Dst: (VPKUHUM:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11910*/     /*Scope*/ 13, /*->11924*/
/*11911*/       OPC_CheckPredicate, 95, // Predicate_vpkuwum_shuffle
/*11913*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11915*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUWUM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vpkuwum_shuffle>> - Complexity = 4
                // Dst: (VPKUWUM:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11924*/     0, /*End of Scope*/
/*11925*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 17,  TARGET_VAL(ISD::CALLSEQ_START),// ->11946
/*11929*/   OPC_RecordNode,   // #0 = 'callseq_start' chained node
/*11930*/   OPC_RecordChild1, // #1 = $amt
/*11931*/   OPC_MoveChild, 1,
/*11933*/   OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*11936*/   OPC_MoveParent,
/*11937*/   OPC_EmitMergeInputChains1_0,
/*11938*/   OPC_MorphNodeTo, TARGET_VAL(PPC::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
            // Src: (callseq_start (timm:i32):$amt) - Complexity = 6
            // Dst: (ADJCALLSTACKDOWN:i32 (timm:i32):$amt)
          /*SwitchOpcode*/ 92,  TARGET_VAL(PPCISD::CALL),// ->12041
/*11949*/   OPC_RecordNode,   // #0 = 'PPCcall' chained node
/*11950*/   OPC_CaptureGlueInput,
/*11951*/   OPC_RecordChild1, // #1 = $func
/*11952*/   OPC_MoveChild, 1,
/*11954*/   OPC_SwitchOpcode /*3 cases */, 28,  TARGET_VAL(ISD::Constant),// ->11986
/*11958*/     OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->11972
/*11961*/       OPC_MoveParent,
/*11962*/       OPC_EmitMergeInputChains1_0,
/*11963*/       OPC_EmitConvertToTarget, 1,
/*11965*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BLA), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (PPCcall (imm:i32):$func) - Complexity = 6
                // Dst: (BLA (imm:i32):$func)
              /*SwitchType*/ 11,  MVT::i64,// ->11985
/*11974*/       OPC_MoveParent,
/*11975*/       OPC_EmitMergeInputChains1_0,
/*11976*/       OPC_EmitConvertToTarget, 1,
/*11978*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BLA8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (PPCcall (imm:i64):$func) - Complexity = 6
                // Dst: (BLA8 (imm:i64):$func)
              0, // EndSwitchType
            /*SwitchOpcode*/ 24,  TARGET_VAL(ISD::TargetGlobalAddress),// ->12013
/*11989*/     OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->12001
/*11992*/       OPC_MoveParent,
/*11993*/       OPC_EmitMergeInputChains1_0,
/*11994*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (PPCcall (tglobaladdr:i32):$dst) - Complexity = 6
                // Dst: (BL (tglobaladdr:i32):$dst)
              /*SwitchType*/ 9,  MVT::i64,// ->12012
/*12003*/       OPC_MoveParent,
/*12004*/       OPC_EmitMergeInputChains1_0,
/*12005*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (PPCcall (tglobaladdr:i64):$dst) - Complexity = 6
                // Dst: (BL8 (tglobaladdr:i64):$dst)
              0, // EndSwitchType
            /*SwitchOpcode*/ 24,  TARGET_VAL(ISD::TargetExternalSymbol),// ->12040
/*12016*/     OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->12028
/*12019*/       OPC_MoveParent,
/*12020*/       OPC_EmitMergeInputChains1_0,
/*12021*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (PPCcall (texternalsym:i32):$dst) - Complexity = 6
                // Dst: (BL (texternalsym:i32):$dst)
              /*SwitchType*/ 9,  MVT::i64,// ->12039
/*12030*/       OPC_MoveParent,
/*12031*/       OPC_EmitMergeInputChains1_0,
/*12032*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (PPCcall (texternalsym:i64):$dst) - Complexity = 6
                // Dst: (BL8 (texternalsym:i64):$dst)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 20,  TARGET_VAL(PPCISD::SC),// ->12064
/*12044*/   OPC_RecordNode,   // #0 = 'PPCsc' chained node
/*12045*/   OPC_RecordChild1, // #1 = $lev
/*12046*/   OPC_MoveChild, 1,
/*12048*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12051*/   OPC_CheckType, MVT::i32,
/*12053*/   OPC_MoveParent,
/*12054*/   OPC_EmitMergeInputChains1_0,
/*12055*/   OPC_EmitConvertToTarget, 1,
/*12057*/   OPC_MorphNodeTo, TARGET_VAL(PPC::SC), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 2, 
            // Src: (PPCsc (imm:i32):$lev) - Complexity = 6
            // Dst: (SC (imm:i32):$lev)
          /*SwitchOpcode*/ 51,  TARGET_VAL(PPCISD::CALL_NOP),// ->12118
/*12067*/   OPC_RecordNode,   // #0 = 'PPCcall_nop' chained node
/*12068*/   OPC_CaptureGlueInput,
/*12069*/   OPC_RecordChild1, // #1 = $func
/*12070*/   OPC_MoveChild, 1,
/*12072*/   OPC_SwitchOpcode /*3 cases */, 13,  TARGET_VAL(ISD::Constant),// ->12089
/*12076*/     OPC_CheckType, MVT::i64,
/*12078*/     OPC_MoveParent,
/*12079*/     OPC_EmitMergeInputChains1_0,
/*12080*/     OPC_EmitConvertToTarget, 1,
/*12082*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BLA8_NOP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  0/*#VTs*/, 1/*#Ops*/, 2, 
              // Src: (PPCcall_nop (imm:i64):$func) - Complexity = 6
              // Dst: (BLA8_NOP (imm:i64):$func)
            /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetGlobalAddress),// ->12103
/*12092*/     OPC_CheckType, MVT::i64,
/*12094*/     OPC_MoveParent,
/*12095*/     OPC_EmitMergeInputChains1_0,
/*12096*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BL8_NOP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (PPCcall_nop (tglobaladdr:i64):$dst) - Complexity = 6
              // Dst: (BL8_NOP (tglobaladdr:i64):$dst)
            /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetExternalSymbol),// ->12117
/*12106*/     OPC_CheckType, MVT::i64,
/*12108*/     OPC_MoveParent,
/*12109*/     OPC_EmitMergeInputChains1_0,
/*12110*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BL8_NOP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (PPCcall_nop (texternalsym:i64):$dst) - Complexity = 6
              // Dst: (BL8_NOP (texternalsym:i64):$dst)
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 5|128,1/*133*/,  TARGET_VAL(ISD::BUILD_VECTOR),// ->12255
/*12122*/   OPC_Scope, 54, /*->12178*/ // 3 children in Scope
/*12124*/     OPC_RecordNode, // #0 = $SIMM
/*12125*/     OPC_SwitchType /*3 cases */, 15,  MVT::v16i8,// ->12143
/*12128*/       OPC_CheckPredicate, 96, // Predicate_vecspltisb
/*12130*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12132*/       OPC_EmitNodeXForm, 14, 0, // VSPLTISB_get_imm
/*12135*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTISB), 0,
                    1/*#VTs*/, MVT::v16i8, 1/*#Ops*/, 1, 
                // Src: (build_vector:v16i8)<<P:Predicate_vecspltisb>><<X:VSPLTISB_get_imm>>:$SIMM - Complexity = 4
                // Dst: (VSPLTISB:v16i8 (VSPLTISB_get_imm:i32 (build_vector:v16i8):$SIMM))
              /*SwitchType*/ 15,  MVT::v8i16,// ->12160
/*12145*/       OPC_CheckPredicate, 97, // Predicate_vecspltish
/*12147*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12149*/       OPC_EmitNodeXForm, 15, 0, // VSPLTISH_get_imm
/*12152*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTISH), 0,
                    1/*#VTs*/, MVT::v8i16, 1/*#Ops*/, 1, 
                // Src: (build_vector:v8i16)<<P:Predicate_vecspltish>><<X:VSPLTISH_get_imm>>:$SIMM - Complexity = 4
                // Dst: (VSPLTISH:v8i16 (VSPLTISH_get_imm:i32 (build_vector:v8i16):$SIMM))
              /*SwitchType*/ 15,  MVT::v4i32,// ->12177
/*12162*/       OPC_CheckPredicate, 98, // Predicate_vecspltisw
/*12164*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12166*/       OPC_EmitNodeXForm, 16, 0, // VSPLTISW_get_imm
/*12169*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTISW), 0,
                    1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 1, 
                // Src: (build_vector:v4i32)<<P:Predicate_vecspltisw>><<X:VSPLTISW_get_imm>>:$SIMM - Complexity = 4
                // Dst: (VSPLTISW:v4i32 (VSPLTISW_get_imm:i32 (build_vector:v4i32):$SIMM))
              0, // EndSwitchType
/*12178*/   /*Scope*/ 37, /*->12216*/
/*12179*/     OPC_CheckPredicate, 99, // Predicate_immAllZerosV
/*12181*/     OPC_SwitchType /*3 cases */, 9,  MVT::v16i8,// ->12193
/*12184*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12186*/       OPC_MorphNodeTo, TARGET_VAL(PPC::V_SET0B), 0,
                    1/*#VTs*/, MVT::v16i8, 0/*#Ops*/, 
                // Src: (build_vector:v16i8)<<P:Predicate_immAllZerosV>> - Complexity = 4
                // Dst: (V_SET0B:v16i8)
              /*SwitchType*/ 9,  MVT::v8i16,// ->12204
/*12195*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12197*/       OPC_MorphNodeTo, TARGET_VAL(PPC::V_SET0H), 0,
                    1/*#VTs*/, MVT::v8i16, 0/*#Ops*/, 
                // Src: (build_vector:v8i16)<<P:Predicate_immAllZerosV>> - Complexity = 4
                // Dst: (V_SET0H:v8i16)
              /*SwitchType*/ 9,  MVT::v4i32,// ->12215
/*12206*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12208*/       OPC_MorphNodeTo, TARGET_VAL(PPC::V_SET0), 0,
                    1/*#VTs*/, MVT::v4i32, 0/*#Ops*/, 
                // Src: (build_vector:v4i32)<<P:Predicate_immAllZerosV>> - Complexity = 4
                // Dst: (V_SET0:v4i32)
              0, // EndSwitchType
/*12216*/   /*Scope*/ 37, /*->12254*/
/*12217*/     OPC_CheckPredicate, 73, // Predicate_immAllOnesV
/*12219*/     OPC_SwitchType /*3 cases */, 9,  MVT::v16i8,// ->12231
/*12222*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12224*/       OPC_MorphNodeTo, TARGET_VAL(PPC::V_SETALLONESB), 0,
                    1/*#VTs*/, MVT::v16i8, 0/*#Ops*/, 
                // Src: (build_vector:v16i8)<<P:Predicate_immAllOnesV>> - Complexity = 4
                // Dst: (V_SETALLONESB:v16i8)
              /*SwitchType*/ 9,  MVT::v8i16,// ->12242
/*12233*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12235*/       OPC_MorphNodeTo, TARGET_VAL(PPC::V_SETALLONESH), 0,
                    1/*#VTs*/, MVT::v8i16, 0/*#Ops*/, 
                // Src: (build_vector:v8i16)<<P:Predicate_immAllOnesV>> - Complexity = 4
                // Dst: (V_SETALLONESH:v8i16)
              /*SwitchType*/ 9,  MVT::v4i32,// ->12253
/*12244*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12246*/       OPC_MorphNodeTo, TARGET_VAL(PPC::V_SETALLONES), 0,
                    1/*#VTs*/, MVT::v4i32, 0/*#Ops*/, 
                // Src: (build_vector:v4i32)<<P:Predicate_immAllOnesV>> - Complexity = 4
                // Dst: (V_SETALLONES:v4i32)
              0, // EndSwitchType
/*12254*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 107,  TARGET_VAL(ISD::BITCAST),// ->12365
/*12258*/   OPC_RecordChild0, // #0 = $src
/*12259*/   OPC_Scope, 25, /*->12286*/ // 4 children in Scope
/*12261*/     OPC_CheckChild0Type, MVT::v8i16,
/*12263*/     OPC_SwitchType /*3 cases */, 5,  MVT::v16i8,// ->12271
/*12266*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12268*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v16i8 VRRC:v8i16:$src) - Complexity = 3
                // Dst: VRRC:v16i8:$src
              /*SwitchType*/ 5,  MVT::v4i32,// ->12278
/*12273*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12275*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4i32 VRRC:v8i16:$src) - Complexity = 3
                // Dst: VRRC:v4i32:$src
              /*SwitchType*/ 5,  MVT::v4f32,// ->12285
/*12280*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12282*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4f32 VRRC:v8i16:$src) - Complexity = 3
                // Dst: VRRC:v4f32:$src
              0, // EndSwitchType
/*12286*/   /*Scope*/ 25, /*->12312*/
/*12287*/     OPC_CheckChild0Type, MVT::v4i32,
/*12289*/     OPC_SwitchType /*3 cases */, 5,  MVT::v16i8,// ->12297
/*12292*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12294*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v16i8 VRRC:v4i32:$src) - Complexity = 3
                // Dst: VRRC:v16i8:$src
              /*SwitchType*/ 5,  MVT::v8i16,// ->12304
/*12299*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12301*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v8i16 VRRC:v4i32:$src) - Complexity = 3
                // Dst: VRRC:v8i16:$src
              /*SwitchType*/ 5,  MVT::v4f32,// ->12311
/*12306*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12308*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4f32 VRRC:v4i32:$src) - Complexity = 3
                // Dst: VRRC:v4f32:$src
              0, // EndSwitchType
/*12312*/   /*Scope*/ 25, /*->12338*/
/*12313*/     OPC_CheckChild0Type, MVT::v4f32,
/*12315*/     OPC_SwitchType /*3 cases */, 5,  MVT::v16i8,// ->12323
/*12318*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12320*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v16i8 VRRC:v4f32:$src) - Complexity = 3
                // Dst: VRRC:v16i8:$src
              /*SwitchType*/ 5,  MVT::v8i16,// ->12330
/*12325*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12327*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v8i16 VRRC:v4f32:$src) - Complexity = 3
                // Dst: VRRC:v8i16:$src
              /*SwitchType*/ 5,  MVT::v4i32,// ->12337
/*12332*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12334*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4i32 VRRC:v4f32:$src) - Complexity = 3
                // Dst: VRRC:v4i32:$src
              0, // EndSwitchType
/*12338*/   /*Scope*/ 25, /*->12364*/
/*12339*/     OPC_CheckChild0Type, MVT::v16i8,
/*12341*/     OPC_SwitchType /*3 cases */, 5,  MVT::v8i16,// ->12349
/*12344*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12346*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v8i16 VRRC:v16i8:$src) - Complexity = 3
                // Dst: VRRC:v8i16:$src
              /*SwitchType*/ 5,  MVT::v4i32,// ->12356
/*12351*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12353*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4i32 VRRC:v16i8:$src) - Complexity = 3
                // Dst: VRRC:v4i32:$src
              /*SwitchType*/ 5,  MVT::v4f32,// ->12363
/*12358*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12360*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4f32 VRRC:v16i8:$src) - Complexity = 3
                // Dst: VRRC:v4f32:$src
              0, // EndSwitchType
/*12364*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 9,  TARGET_VAL(PPCISD::RET_FLAG),// ->12377
/*12368*/   OPC_RecordNode,   // #0 = 'retflag' chained node
/*12369*/   OPC_CaptureGlueInput,
/*12370*/   OPC_EmitMergeInputChains1_0,
/*12371*/   OPC_MorphNodeTo, TARGET_VAL(PPC::BLR), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic0,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (retflag) - Complexity = 3
            // Dst: (BLR)
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::BR),// ->12396
/*12380*/   OPC_RecordNode,   // #0 = 'br' chained node
/*12381*/   OPC_RecordChild1, // #1 = $dst
/*12382*/   OPC_MoveChild, 1,
/*12384*/   OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*12387*/   OPC_MoveParent,
/*12388*/   OPC_EmitMergeInputChains1_0,
/*12389*/   OPC_MorphNodeTo, TARGET_VAL(PPC::B), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (br (bb:Other):$dst) - Complexity = 3
            // Dst: (B (bb:Other):$dst)
          /*SwitchOpcode*/ 24,  TARGET_VAL(PPCISD::BCTRL),// ->12423
/*12399*/   OPC_RecordNode,   // #0 = 'PPCbctrl' chained node
/*12400*/   OPC_CaptureGlueInput,
/*12401*/   OPC_Scope, 9, /*->12412*/ // 2 children in Scope
/*12403*/     OPC_CheckPatternPredicate, 1, // (!PPCSubTarget.isPPC64())
/*12405*/     OPC_EmitMergeInputChains1_0,
/*12406*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BCTRL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic0,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (PPCbctrl) - Complexity = 3
              // Dst: (BCTRL)
/*12412*/   /*Scope*/ 9, /*->12422*/
/*12413*/     OPC_CheckPatternPredicate, 2, // (PPCSubTarget.isPPC64())
/*12415*/     OPC_EmitMergeInputChains1_0,
/*12416*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BCTRL8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic0,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (PPCbctrl) - Complexity = 3
              // Dst: (BCTRL8)
/*12422*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 8,  TARGET_VAL(ISD::TRAP),// ->12434
/*12426*/   OPC_RecordNode,   // #0 = 'trap' chained node
/*12427*/   OPC_EmitMergeInputChains1_0,
/*12428*/   OPC_MorphNodeTo, TARGET_VAL(PPC::TRAP), 0|OPFL_Chain,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (trap) - Complexity = 3
            // Dst: (TRAP)
          /*SwitchOpcode*/ 10,  TARGET_VAL(PPCISD::CR6SET),// ->12447
/*12437*/   OPC_RecordNode,   // #0 = 'PPCcr6set' chained node
/*12438*/   OPC_CaptureGlueInput,
/*12439*/   OPC_EmitMergeInputChains1_0,
/*12440*/   OPC_MorphNodeTo, TARGET_VAL(PPC::CR6SET), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
            // Src: (PPCcr6set) - Complexity = 3
            // Dst: (CR6SET:i32)
          /*SwitchOpcode*/ 10,  TARGET_VAL(PPCISD::CR6UNSET),// ->12460
/*12450*/   OPC_RecordNode,   // #0 = 'PPCcr6unset' chained node
/*12451*/   OPC_CaptureGlueInput,
/*12452*/   OPC_EmitMergeInputChains1_0,
/*12453*/   OPC_MorphNodeTo, TARGET_VAL(PPC::CR6UNSET), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
            // Src: (PPCcr6unset) - Complexity = 3
            // Dst: (CR6UNSET:i32)
          /*SwitchOpcode*/ 29,  TARGET_VAL(PPCISD::MTCTR),// ->12492
/*12463*/   OPC_RecordNode,   // #0 = 'PPCmtctr' chained node
/*12464*/   OPC_CaptureGlueInput,
/*12465*/   OPC_RecordChild1, // #1 = $rS
/*12466*/   OPC_Scope, 11, /*->12479*/ // 2 children in Scope
/*12468*/     OPC_CheckChild1Type, MVT::i32,
/*12470*/     OPC_EmitMergeInputChains1_0,
/*12471*/     OPC_MorphNodeTo, TARGET_VAL(PPC::MTCTR), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (PPCmtctr i32:i32:$rS) - Complexity = 3
              // Dst: (MTCTR:i32 i32:i32:$rS)
/*12479*/   /*Scope*/ 11, /*->12491*/
/*12480*/     OPC_CheckChild1Type, MVT::i64,
/*12482*/     OPC_EmitMergeInputChains1_0,
/*12483*/     OPC_MorphNodeTo, TARGET_VAL(PPC::MTCTR8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
              // Src: (PPCmtctr i64:i64:$rS) - Complexity = 3
              // Dst: (MTCTR8:i64 i64:i64:$rS)
/*12491*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 17,  TARGET_VAL(PPCISD::VPERM),// ->12512
/*12495*/   OPC_RecordChild0, // #0 = $vA
/*12496*/   OPC_RecordChild1, // #1 = $vB
/*12497*/   OPC_RecordChild2, // #2 = $vC
/*12498*/   OPC_CheckType, MVT::v16i8,
/*12500*/   OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12502*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VPERM), 0,
                1/*#VTs*/, MVT::v16i8, 3/*#Ops*/, 0, 1, 2, 
            // Src: (PPCvperm:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB, v16i8:v16i8:$vC) - Complexity = 3
            // Dst: (VPERM:v16i8 ?:v16i8:$vA, ?:v16i8:$vB, ?:v16i8:$vC)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::FP_TO_SINT),// ->12530
/*12515*/   OPC_RecordChild0, // #0 = $vA
/*12516*/   OPC_CheckChild0Type, MVT::v4f32,
/*12518*/   OPC_CheckType, MVT::v4i32,
/*12520*/   OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12522*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VCTSXS_0), 0,
                1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
            // Src: (fp_to_sint:v4i32 v4f32:v4f32:$vA) - Complexity = 3
            // Dst: (VCTSXS_0:v4i32 ?:v4f32:$vA)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::FP_TO_UINT),// ->12548
/*12533*/   OPC_RecordChild0, // #0 = $vA
/*12534*/   OPC_CheckChild0Type, MVT::v4f32,
/*12536*/   OPC_CheckType, MVT::v4i32,
/*12538*/   OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12540*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VCTUXS_0), 0,
                1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
            // Src: (fp_to_uint:v4i32 v4f32:v4f32:$vA) - Complexity = 3
            // Dst: (VCTUXS_0:v4i32 ?:v4f32:$vA)
          /*SwitchOpcode*/ 17,  TARGET_VAL(PPCISD::VMADDFP),// ->12568
/*12551*/   OPC_RecordChild0, // #0 = $A
/*12552*/   OPC_RecordChild1, // #1 = $B
/*12553*/   OPC_RecordChild2, // #2 = $C
/*12554*/   OPC_CheckType, MVT::v4f32,
/*12556*/   OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12558*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VMADDFP), 0,
                1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
            // Src: (PPCvmaddfp:v4f32 v4f32:v4f32:$A, v4f32:v4f32:$B, v4f32:v4f32:$C) - Complexity = 3
            // Dst: (VMADDFP:v4f32 ?:v4f32:$A, ?:v4f32:$B, ?:v4f32:$C)
          /*SwitchOpcode*/ 17,  TARGET_VAL(PPCISD::VNMSUBFP),// ->12588
/*12571*/   OPC_RecordChild0, // #0 = $A
/*12572*/   OPC_RecordChild1, // #1 = $B
/*12573*/   OPC_RecordChild2, // #2 = $C
/*12574*/   OPC_CheckType, MVT::v4f32,
/*12576*/   OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12578*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VNMSUBFP), 0,
                1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
            // Src: (PPCvnmsubfp:v4f32 v4f32:v4f32:$A, v4f32:v4f32:$B, v4f32:v4f32:$C) - Complexity = 3
            // Dst: (VNMSUBFP:v4f32 ?:v4f32:$A, ?:v4f32:$B, ?:v4f32:$C)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::SINT_TO_FP),// ->12606
/*12591*/   OPC_RecordChild0, // #0 = $vA
/*12592*/   OPC_CheckChild0Type, MVT::v4i32,
/*12594*/   OPC_CheckType, MVT::v4f32,
/*12596*/   OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12598*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VCFSX_0), 0,
                1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
            // Src: (sint_to_fp:v4f32 v4i32:v4i32:$vA) - Complexity = 3
            // Dst: (VCFSX_0:v4f32 ?:v4i32:$vA)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::UINT_TO_FP),// ->12624
/*12609*/   OPC_RecordChild0, // #0 = $vA
/*12610*/   OPC_CheckChild0Type, MVT::v4i32,
/*12612*/   OPC_CheckType, MVT::v4f32,
/*12614*/   OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12616*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VCFUX_0), 0,
                1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
            // Src: (uint_to_fp:v4f32 v4i32:v4i32:$vA) - Complexity = 3
            // Dst: (VCFUX_0:v4f32 ?:v4i32:$vA)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::FNEARBYINT),// ->12640
/*12627*/   OPC_RecordChild0, // #0 = $vA
/*12628*/   OPC_CheckType, MVT::v4f32,
/*12630*/   OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12632*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIN), 0,
                1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
            // Src: (fnearbyint:v4f32 v4f32:v4f32:$vA) - Complexity = 3
            // Dst: (VRFIN:v4f32 ?:v4f32:$vA)
          /*SwitchOpcode*/ 13,  TARGET_VAL(PPCISD::LOAD_TOC),// ->12656
/*12643*/   OPC_RecordNode,   // #0 = 'PPCload_toc' chained node
/*12644*/   OPC_CaptureGlueInput,
/*12645*/   OPC_RecordChild1, // #1 = $reg
/*12646*/   OPC_CheckChild1Type, MVT::i64,
/*12648*/   OPC_EmitMergeInputChains1_0,
/*12649*/   OPC_MorphNodeTo, TARGET_VAL(PPC::LDinto_toc), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (PPCload_toc i64:i64:$reg) - Complexity = 3
            // Dst: (LDinto_toc i64:i64:$reg)
          /*SwitchOpcode*/ 9,  TARGET_VAL(PPCISD::TOC_RESTORE),// ->12668
/*12659*/   OPC_RecordNode,   // #0 = 'PPCtoc_restore' chained node
/*12660*/   OPC_CaptureGlueInput,
/*12661*/   OPC_EmitMergeInputChains1_0,
/*12662*/   OPC_MorphNodeTo, TARGET_VAL(PPC::LDtoc_restore), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (PPCtoc_restore) - Complexity = 3
            // Dst: (LDtoc_restore)
          0, // EndSwitchOpcode
    0
  }; // Total Array size is 12670 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 120
  // #OPC_RecordNode                     = 46
  // #OPC_RecordChild                    = 540
  // #OPC_RecordMemRef                   = 11
  // #OPC_CaptureGlueInput               = 14
  // #OPC_MoveChild                      = 155
  // #OPC_MoveParent                     = 378
  // #OPC_CheckSame                      = 0
  // #OPC_CheckPatternPredicate          = 249
  // #OPC_CheckPredicate                 = 202
  // #OPC_CheckOpcode                    = 93
  // #OPC_SwitchOpcode                   = 16
  // #OPC_CheckType                      = 183
  // #OPC_SwitchType                     = 99
  // #OPC_CheckChildType                 = 59
  // #OPC_CheckInteger                   = 198
  // #OPC_CheckCondCode                  = 0
  // #OPC_CheckValueType                 = 9
  // #OPC_CheckComplexPat                = 150
  // #OPC_CheckAndImm                    = 0
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 0
  // #OPC_EmitInteger                    = 27
  // #OPC_EmitStringInteger              = 8
  // #OPC_EmitRegister                   = 0
  // #OPC_EmitConvertToTarget            = 76
  // #OPC_EmitMergeInputChains           = 206
  // #OPC_EmitCopyToReg                  = 0
  // #OPC_EmitNode                       = 14
  // #OPC_EmitNodeXForm                  = 38
  // #OPC_MarkGlueResults                = 0
  // #OPC_CompleteMatch                  = 12
  // #OPC_MorphNodeTo                    = 651

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}

virtual bool CheckPatternPredicate(unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: return (PPCSubTarget.hasAltivec());
  case 1: return (!PPCSubTarget.isPPC64());
  case 2: return (PPCSubTarget.isPPC64());
  }
}

virtual bool CheckNodePredicate(SDNode *Node,
                                unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: { // Predicate_imm32SExt16
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();

  // imm32SExt16 predicate - True if the i32 immediate fits in a 16-bit
  // sign extended field.  Used by instructions like 'addi'.
  return (int32_t)Imm == (short)Imm;

  }
  case 1: { // Predicate_imm16ShiftedSExt
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // imm16ShiftedSExt predicate - True if only bits in the top 16-bits of the
  // immediate are set.  Used by instructions like 'addis'.  Identical to 
  // imm16ShiftedZExt in 32-bit mode.
  if (N->getZExtValue() & 0xFFFF) return false;
  if (N->getValueType(0) == MVT::i32)
    return true;
  // For 64-bit, make sure it is sext right.
  return N->getZExtValue() == (uint64_t)(int)N->getZExtValue();

  }
  case 2: { // Predicate_imm64SExt16
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();

  // imm64SExt16 predicate - True if the i64 immediate fits in a 16-bit
  // sign extended field.  Used by instructions like 'addi'.
  return (int64_t)Imm == (short)Imm;

  }
  case 3: { // Predicate_unindexedload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 4: { // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 5: { // Predicate_zextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 6: { // Predicate_sextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::SEXTLOAD;

  }
  case 7: { // Predicate_sextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 8: { // Predicate_zextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 9: { // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 10: { // Predicate_zextloadi1
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

  }
  case 11: { // Predicate_extload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

  }
  case 12: { // Predicate_extloadi1
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

  }
  case 13: { // Predicate_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 14: { // Predicate_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 15: { // Predicate_sextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 16: { // Predicate_aligned4sextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAlignment() >= 4;

  }
  case 17: { // Predicate_zextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 18: { // Predicate_aligned4load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAlignment() >= 4;

  }
  case 19: { // Predicate_extloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 20: { // Predicate_unaligned4sextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAlignment() < 4;

  }
  case 21: { // Predicate_unaligned4load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAlignment() < 4;

  }
  case 22: { // Predicate_extloadf32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::f32;

  }
  case 23: { // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 24: { // Predicate_truncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 25: { // Predicate_truncstorei8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 26: { // Predicate_truncstorei16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 27: { // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 28: { // Predicate_itruncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 29: { // Predicate_pre_truncst
    SDNode *N = Node;

  ISD::MemIndexedMode AM = cast<StoreSDNode>(N)->getAddressingMode();
  return AM == ISD::PRE_INC || AM == ISD::PRE_DEC;

  }
  case 30: { // Predicate_pre_truncsti8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 31: { // Predicate_pre_truncsti16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 32: { // Predicate_istore
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 33: { // Predicate_pre_store
    SDNode *N = Node;

  ISD::MemIndexedMode AM = cast<StoreSDNode>(N)->getAddressingMode();
  return AM == ISD::PRE_INC || AM == ISD::PRE_DEC;

  }
  case 34: { // Predicate_truncstorei32
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 35: { // Predicate_aligned4store
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAlignment() >= 4;

  }
  case 36: { // Predicate_unaligned4store
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAlignment() < 4;

  }
  case 37: { // Predicate_pre_truncsti32
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 38: { // Predicate_aligned4pre_store
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAlignment() >= 4;

  }
  case 39: { // Predicate_atomic_load_add_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 40: { // Predicate_atomic_load_add_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 41: { // Predicate_atomic_load_add_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 42: { // Predicate_atomic_load_add_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 43: { // Predicate_atomic_load_sub_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 44: { // Predicate_atomic_load_sub_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 45: { // Predicate_atomic_load_sub_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 46: { // Predicate_atomic_load_sub_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 47: { // Predicate_atomic_load_and_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 48: { // Predicate_atomic_load_and_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 49: { // Predicate_atomic_load_and_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 50: { // Predicate_atomic_load_and_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 51: { // Predicate_atomic_load_or_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 52: { // Predicate_atomic_load_or_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 53: { // Predicate_atomic_load_or_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 54: { // Predicate_atomic_load_or_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 55: { // Predicate_atomic_load_xor_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 56: { // Predicate_atomic_load_xor_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 57: { // Predicate_atomic_load_xor_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 58: { // Predicate_atomic_load_xor_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 59: { // Predicate_atomic_load_nand_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 60: { // Predicate_atomic_load_nand_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 61: { // Predicate_atomic_load_nand_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 62: { // Predicate_atomic_load_nand_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 63: { // Predicate_atomic_cmp_swap_8
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 64: { // Predicate_atomic_cmp_swap_16
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 65: { // Predicate_atomic_cmp_swap_32
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 66: { // Predicate_atomic_cmp_swap_64
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;

  }
  case 67: { // Predicate_atomic_swap_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 68: { // Predicate_atomic_swap_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 69: { // Predicate_atomic_swap_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 70: { // Predicate_atomic_swap_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 71: { // Predicate_immZExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // immZExt16 predicate - True if the immediate fits in a 16-bit zero extended
  // field.  Used by instructions like 'ori'.
  return (uint64_t)N->getZExtValue() == (unsigned short)N->getZExtValue();

  }
  case 72: { // Predicate_imm16ShiftedZExt
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // imm16ShiftedZExt predicate - True if only bits in the top 16-bits of the
  // immediate are set.  Used by instructions like 'xoris'.
  return (N->getZExtValue() & ~uint64_t(0xFFFF0000)) == 0;

  }
  case 73: { // Predicate_immAllOnesV
    SDNode *N = Node;

  return ISD::isBuildVectorAllOnes(N);

  }
  case 74: { // Predicate_maskimm32
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // maskImm predicate - True if immediate is a run of ones.
  unsigned mb, me;
  if (N->getValueType(0) == MVT::i32)
    return isRunOfOnes((unsigned)N->getZExtValue(), mb, me);
  else
    return false;

  }
  case 75: { // Predicate_vspltb_shuffle
    SDNode *N = Node;

  return PPC::isSplatShuffleMask(cast<ShuffleVectorSDNode>(N), 1);

  }
  case 76: { // Predicate_vsplth_shuffle
    SDNode *N = Node;

  return PPC::isSplatShuffleMask(cast<ShuffleVectorSDNode>(N), 2);

  }
  case 77: { // Predicate_vspltw_shuffle
    SDNode *N = Node;

  return PPC::isSplatShuffleMask(cast<ShuffleVectorSDNode>(N), 4);

  }
  case 78: { // Predicate_vsldoi_unary_shuffle
    SDNode *N = Node;

  return PPC::isVSLDOIShuffleMask(N, true) != -1;

  }
  case 79: { // Predicate_vpkuwum_unary_shuffle
    SDNode *N = Node;

  return PPC::isVPKUWUMShuffleMask(cast<ShuffleVectorSDNode>(N), true);

  }
  case 80: { // Predicate_vpkuhum_unary_shuffle
    SDNode *N = Node;

  return PPC::isVPKUHUMShuffleMask(cast<ShuffleVectorSDNode>(N), true);

  }
  case 81: { // Predicate_vmrglb_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 1, true);

  }
  case 82: { // Predicate_vmrglh_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 2, true);

  }
  case 83: { // Predicate_vmrglw_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 4, true);

  }
  case 84: { // Predicate_vmrghb_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 1, true);

  }
  case 85: { // Predicate_vmrghh_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 2, true);

  }
  case 86: { // Predicate_vmrghw_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 4, true);

  }
  case 87: { // Predicate_vsldoi_shuffle
    SDNode *N = Node;

  return PPC::isVSLDOIShuffleMask(N, false) != -1;

  }
  case 88: { // Predicate_vmrghb_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 1, false);

  }
  case 89: { // Predicate_vmrghh_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 2, false);

  }
  case 90: { // Predicate_vmrghw_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 4, false);

  }
  case 91: { // Predicate_vmrglb_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 1, false);

  }
  case 92: { // Predicate_vmrglh_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 2, false);

  }
  case 93: { // Predicate_vmrglw_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 4, false);

  }
  case 94: { // Predicate_vpkuhum_shuffle
    SDNode *N = Node;

  return PPC::isVPKUHUMShuffleMask(cast<ShuffleVectorSDNode>(N), false);

  }
  case 95: { // Predicate_vpkuwum_shuffle
    SDNode *N = Node;

  return PPC::isVPKUWUMShuffleMask(cast<ShuffleVectorSDNode>(N), false);

  }
  case 96: { // Predicate_vecspltisb
    SDNode *N = Node;

  return PPC::get_VSPLTI_elt(N, 1, *CurDAG).getNode() != 0;

  }
  case 97: { // Predicate_vecspltish
    SDNode *N = Node;

  return PPC::get_VSPLTI_elt(N, 2, *CurDAG).getNode() != 0;

  }
  case 98: { // Predicate_vecspltisw
    SDNode *N = Node;

  return PPC::get_VSPLTI_elt(N, 4, *CurDAG).getNode() != 0;

  }
  case 99: { // Predicate_immAllZerosV
    SDNode *N = Node;

  return ISD::isBuildVectorAllZeros(N);

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
    return SelectAddrIdxOnly(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 1:
    Result.resize(NextRes+2);
    return SelectAddrImm(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 2:
    Result.resize(NextRes+2);
    return SelectAddrIdx(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 3:
    Result.resize(NextRes+2);
    return SelectAddrImmX4(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 4:
    Result.resize(NextRes+1);
    return SelectAddrImmOffs(N, Result[NextRes+0].first);
  case 5:
    Result.resize(NextRes+1);
    return SelectAddr(N, Result[NextRes+0].first);
  }
}

virtual SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) {
  switch (XFormNo) {
  default: llvm_unreachable("Invalid xform # in table?");
  case 0: {  // HI16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: shift the immediate value down into the low bits.
  return getI32Imm((unsigned)N->getZExtValue() >> 16);

  }
  case 1: {  // LO16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: get the low 16 bits.
  return getI32Imm((unsigned short)N->getZExtValue());

  }
  case 2: {  // HA16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: shift the immediate value down into the low bits.
  signed int Val = N->getZExtValue();
  return getI32Imm((Val - (signed short)Val) >> 16);

  }
  case 3: {  // MB
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: get the start bit of a mask
  unsigned mb = 0, me;
  (void)isRunOfOnes((unsigned)N->getZExtValue(), mb, me);
  return getI32Imm(mb);

  }
  case 4: {  // ME
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: get the end bit of a mask
  unsigned mb, me = 0;
  (void)isRunOfOnes((unsigned)N->getZExtValue(), mb, me);
  return getI32Imm(me);

  }
  case 5: {  // SHL32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 31 - imm
  return getI32Imm(31 - N->getZExtValue());

  }
  case 6: {  // SHL64
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 63 - imm
  return getI32Imm(63 - N->getZExtValue());

  }
  case 7: {  // SRL32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 32 - imm
  return N->getZExtValue() ? getI32Imm(32 - N->getZExtValue()) : getI32Imm(0);

  }
  case 8: {  // SRL64
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 64 - imm
  return N->getZExtValue() ? getI32Imm(64 - N->getZExtValue()) : getI32Imm(0);

  }
  case 9: {  // VSPLTB_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::getVSPLTImmediate(N, 1));

  }
  case 10: {  // VSPLTH_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::getVSPLTImmediate(N, 2));

  }
  case 11: {  // VSPLTW_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::getVSPLTImmediate(N, 4));

  }
  case 12: {  // VSLDOI_unary_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::isVSLDOIShuffleMask(N, true));

  }
  case 13: {  // VSLDOI_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::isVSLDOIShuffleMask(N, false));

  }
  case 14: {  // VSPLTISB_get_imm
    SDNode *N = V.getNode();

  return PPC::get_VSPLTI_elt(N, 1, *CurDAG);

  }
  case 15: {  // VSPLTISH_get_imm
    SDNode *N = V.getNode();

  return PPC::get_VSPLTI_elt(N, 2, *CurDAG);

  }
  case 16: {  // VSPLTISW_get_imm
    SDNode *N = V.getNode();

  return PPC::get_VSPLTI_elt(N, 4, *CurDAG);

  }
  }
}

