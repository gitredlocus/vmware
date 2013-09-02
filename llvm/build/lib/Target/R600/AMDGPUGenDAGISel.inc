/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*DAG Instruction Selector for the AMDGPU target                              *|
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
/*0*/     OPC_SwitchOpcode /*76 cases */, 120|128,9/*1272*/,  TARGET_VAL(ISD::INTRINSIC_VOID),// ->1277
/*5*/       OPC_RecordNode,   // #0 = 'intrinsic_void' chained node
/*6*/       OPC_MoveChild, 1,
/*8*/       OPC_Scope, 80, /*->90*/ // 10 children in Scope
/*10*/        OPC_CheckInteger, 19|128,25/*3219*/, 
/*13*/        OPC_MoveParent,
/*14*/        OPC_RecordChild2, // #1 = $en
/*15*/        OPC_MoveChild, 2,
/*17*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*20*/        OPC_MoveParent,
/*21*/        OPC_RecordChild3, // #2 = $vm
/*22*/        OPC_MoveChild, 3,
/*24*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*27*/        OPC_MoveParent,
/*28*/        OPC_RecordChild4, // #3 = $done
/*29*/        OPC_MoveChild, 4,
/*31*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*34*/        OPC_MoveParent,
/*35*/        OPC_RecordChild5, // #4 = $tgt
/*36*/        OPC_MoveChild, 5,
/*38*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*41*/        OPC_MoveParent,
/*42*/        OPC_RecordChild6, // #5 = $compr
/*43*/        OPC_MoveChild, 6,
/*45*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*48*/        OPC_MoveParent,
/*49*/        OPC_RecordChild7, // #6 = $src0
/*50*/        OPC_MoveChild, 8,
/*52*/        OPC_RecordNode, // #7 = $src1
/*53*/        OPC_MoveParent,
/*54*/        OPC_MoveChild, 9,
/*56*/        OPC_RecordNode, // #8 = $src2
/*57*/        OPC_MoveParent,
/*58*/        OPC_MoveChild, 10,
/*60*/        OPC_RecordNode, // #9 = $src3
/*61*/        OPC_MoveParent,
/*62*/        OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*64*/        OPC_EmitMergeInputChains1_0,
/*65*/        OPC_EmitConvertToTarget, 1,
/*67*/        OPC_EmitConvertToTarget, 4,
/*69*/        OPC_EmitConvertToTarget, 5,
/*71*/        OPC_EmitConvertToTarget, 3,
/*73*/        OPC_EmitConvertToTarget, 2,
/*75*/        OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EXP), 0|OPFL_Chain,
                  0/*#VTs*/, 9/*#Ops*/, 10, 11, 12, 13, 14, 6, 7, 8, 9, 
              // Src: (intrinsic_void 3219:iPTR, (imm:i32):$en, (imm:i32):$vm, (imm:i32):$done, (imm:i32):$tgt, (imm:i32):$compr, f32:f32:$src0, f32:f32:$src1, f32:f32:$src2, f32:f32:$src3) - Complexity = 23
              // Dst: (EXP (imm:i32):$en, (imm:i32):$tgt, (imm:i32):$compr, (imm:i32):$done, (imm:i32):$vm, ?:f32:$src0, ?:f32:$src1, ?:f32:$src2, ?:f32:$src3)
/*90*/      /*Scope*/ 84|128,2/*340*/, /*->432*/
/*92*/        OPC_CheckInteger, 5|128,25/*3205*/, 
/*95*/        OPC_MoveParent,
/*96*/        OPC_RecordChild2, // #1 = $src
/*97*/        OPC_RecordChild3, // #2 = $arraybase
/*98*/        OPC_MoveChild, 3,
/*100*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*103*/       OPC_MoveParent,
/*104*/       OPC_MoveChild, 4,
/*106*/       OPC_Scope, 80, /*->188*/ // 4 children in Scope
/*108*/         OPC_CheckInteger, 0, 
/*110*/         OPC_MoveParent,
/*111*/         OPC_RecordChild5, // #3 = $mask
/*112*/         OPC_MoveChild, 5,
/*114*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*117*/         OPC_MoveParent,
/*118*/         OPC_Scope, 33, /*->153*/ // 2 children in Scope
/*120*/           OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*122*/           OPC_EmitMergeInputChains1_0,
/*123*/           OPC_EmitInteger, MVT::i32, 0, 
/*126*/           OPC_EmitConvertToTarget, 2,
/*128*/           OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*132*/           OPC_EmitConvertToTarget, 3,
/*134*/           OPC_EmitInteger, MVT::i32, 32, 
/*137*/           OPC_EmitInteger, MVT::i32, 0, 
/*140*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::R600_ExportBuf), 0|OPFL_Chain,
                      0/*#VTs*/, 7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                  // Src: (intrinsic_void 3205:iPTR, R600_Reg128:v4f32:$src, (imm:i32):$arraybase, 0:i32, (imm:i32):$mask) - Complexity = 19
                  // Dst: (R600_ExportBuf R600_Reg128:v4f32:$src, 0:i32, (imm:i32):$arraybase, 4095:i32, (imm:i32):$mask, 32:i32, 0:i32)
/*153*/         /*Scope*/ 33, /*->187*/
/*154*/           OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*156*/           OPC_EmitMergeInputChains1_0,
/*157*/           OPC_EmitInteger, MVT::i32, 0, 
/*160*/           OPC_EmitConvertToTarget, 2,
/*162*/           OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*166*/           OPC_EmitConvertToTarget, 3,
/*168*/           OPC_EmitInteger, MVT::i32, 64, 
/*171*/           OPC_EmitInteger, MVT::i32, 0, 
/*174*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EG_ExportBuf), 0|OPFL_Chain,
                      0/*#VTs*/, 7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                  // Src: (intrinsic_void 3205:iPTR, R600_Reg128:v4f32:$src, (imm:i32):$arraybase, 0:i32, (imm:i32):$mask) - Complexity = 19
                  // Dst: (EG_ExportBuf R600_Reg128:v4f32:$src, 0:i32, (imm:i32):$arraybase, 4095:i32, (imm:i32):$mask, 64:i32, 0:i32)
/*187*/         0, /*End of Scope*/
/*188*/       /*Scope*/ 80, /*->269*/
/*189*/         OPC_CheckInteger, 1, 
/*191*/         OPC_MoveParent,
/*192*/         OPC_RecordChild5, // #3 = $mask
/*193*/         OPC_MoveChild, 5,
/*195*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*198*/         OPC_MoveParent,
/*199*/         OPC_Scope, 33, /*->234*/ // 2 children in Scope
/*201*/           OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*203*/           OPC_EmitMergeInputChains1_0,
/*204*/           OPC_EmitInteger, MVT::i32, 0, 
/*207*/           OPC_EmitConvertToTarget, 2,
/*209*/           OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*213*/           OPC_EmitConvertToTarget, 3,
/*215*/           OPC_EmitInteger, MVT::i32, 33, 
/*218*/           OPC_EmitInteger, MVT::i32, 0, 
/*221*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::R600_ExportBuf), 0|OPFL_Chain,
                      0/*#VTs*/, 7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                  // Src: (intrinsic_void 3205:iPTR, R600_Reg128:v4f32:$src, (imm:i32):$arraybase, 1:i32, (imm:i32):$mask) - Complexity = 19
                  // Dst: (R600_ExportBuf R600_Reg128:v4f32:$src, 0:i32, (imm:i32):$arraybase, 4095:i32, (imm:i32):$mask, 33:i32, 0:i32)
/*234*/         /*Scope*/ 33, /*->268*/
/*235*/           OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*237*/           OPC_EmitMergeInputChains1_0,
/*238*/           OPC_EmitInteger, MVT::i32, 0, 
/*241*/           OPC_EmitConvertToTarget, 2,
/*243*/           OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*247*/           OPC_EmitConvertToTarget, 3,
/*249*/           OPC_EmitInteger, MVT::i32, 65, 
/*252*/           OPC_EmitInteger, MVT::i32, 0, 
/*255*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EG_ExportBuf), 0|OPFL_Chain,
                      0/*#VTs*/, 7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                  // Src: (intrinsic_void 3205:iPTR, R600_Reg128:v4f32:$src, (imm:i32):$arraybase, 1:i32, (imm:i32):$mask) - Complexity = 19
                  // Dst: (EG_ExportBuf R600_Reg128:v4f32:$src, 0:i32, (imm:i32):$arraybase, 4095:i32, (imm:i32):$mask, 65:i32, 0:i32)
/*268*/         0, /*End of Scope*/
/*269*/       /*Scope*/ 80, /*->350*/
/*270*/         OPC_CheckInteger, 2, 
/*272*/         OPC_MoveParent,
/*273*/         OPC_RecordChild5, // #3 = $mask
/*274*/         OPC_MoveChild, 5,
/*276*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*279*/         OPC_MoveParent,
/*280*/         OPC_Scope, 33, /*->315*/ // 2 children in Scope
/*282*/           OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*284*/           OPC_EmitMergeInputChains1_0,
/*285*/           OPC_EmitInteger, MVT::i32, 0, 
/*288*/           OPC_EmitConvertToTarget, 2,
/*290*/           OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*294*/           OPC_EmitConvertToTarget, 3,
/*296*/           OPC_EmitInteger, MVT::i32, 34, 
/*299*/           OPC_EmitInteger, MVT::i32, 0, 
/*302*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::R600_ExportBuf), 0|OPFL_Chain,
                      0/*#VTs*/, 7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                  // Src: (intrinsic_void 3205:iPTR, R600_Reg128:v4f32:$src, (imm:i32):$arraybase, 2:i32, (imm:i32):$mask) - Complexity = 19
                  // Dst: (R600_ExportBuf R600_Reg128:v4f32:$src, 0:i32, (imm:i32):$arraybase, 4095:i32, (imm:i32):$mask, 34:i32, 0:i32)
/*315*/         /*Scope*/ 33, /*->349*/
/*316*/           OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*318*/           OPC_EmitMergeInputChains1_0,
/*319*/           OPC_EmitInteger, MVT::i32, 0, 
/*322*/           OPC_EmitConvertToTarget, 2,
/*324*/           OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*328*/           OPC_EmitConvertToTarget, 3,
/*330*/           OPC_EmitInteger, MVT::i32, 66, 
/*333*/           OPC_EmitInteger, MVT::i32, 0, 
/*336*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EG_ExportBuf), 0|OPFL_Chain,
                      0/*#VTs*/, 7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                  // Src: (intrinsic_void 3205:iPTR, R600_Reg128:v4f32:$src, (imm:i32):$arraybase, 2:i32, (imm:i32):$mask) - Complexity = 19
                  // Dst: (EG_ExportBuf R600_Reg128:v4f32:$src, 0:i32, (imm:i32):$arraybase, 4095:i32, (imm:i32):$mask, 66:i32, 0:i32)
/*349*/         0, /*End of Scope*/
/*350*/       /*Scope*/ 80, /*->431*/
/*351*/         OPC_CheckInteger, 3, 
/*353*/         OPC_MoveParent,
/*354*/         OPC_RecordChild5, // #3 = $mask
/*355*/         OPC_MoveChild, 5,
/*357*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*360*/         OPC_MoveParent,
/*361*/         OPC_Scope, 33, /*->396*/ // 2 children in Scope
/*363*/           OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*365*/           OPC_EmitMergeInputChains1_0,
/*366*/           OPC_EmitInteger, MVT::i32, 0, 
/*369*/           OPC_EmitConvertToTarget, 2,
/*371*/           OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*375*/           OPC_EmitConvertToTarget, 3,
/*377*/           OPC_EmitInteger, MVT::i32, 35, 
/*380*/           OPC_EmitInteger, MVT::i32, 0, 
/*383*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::R600_ExportBuf), 0|OPFL_Chain,
                      0/*#VTs*/, 7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                  // Src: (intrinsic_void 3205:iPTR, R600_Reg128:v4f32:$src, (imm:i32):$arraybase, 3:i32, (imm:i32):$mask) - Complexity = 19
                  // Dst: (R600_ExportBuf R600_Reg128:v4f32:$src, 0:i32, (imm:i32):$arraybase, 4095:i32, (imm:i32):$mask, 35:i32, 0:i32)
/*396*/         /*Scope*/ 33, /*->430*/
/*397*/           OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*399*/           OPC_EmitMergeInputChains1_0,
/*400*/           OPC_EmitInteger, MVT::i32, 0, 
/*403*/           OPC_EmitConvertToTarget, 2,
/*405*/           OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*409*/           OPC_EmitConvertToTarget, 3,
/*411*/           OPC_EmitInteger, MVT::i32, 67, 
/*414*/           OPC_EmitInteger, MVT::i32, 0, 
/*417*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EG_ExportBuf), 0|OPFL_Chain,
                      0/*#VTs*/, 7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                  // Src: (intrinsic_void 3205:iPTR, R600_Reg128:v4f32:$src, (imm:i32):$arraybase, 3:i32, (imm:i32):$mask) - Complexity = 19
                  // Dst: (EG_ExportBuf R600_Reg128:v4f32:$src, 0:i32, (imm:i32):$arraybase, 4095:i32, (imm:i32):$mask, 67:i32, 0:i32)
/*430*/         0, /*End of Scope*/
/*431*/       0, /*End of Scope*/
/*432*/     /*Scope*/ 94|128,1/*222*/, /*->656*/
/*434*/       OPC_CheckInteger, 2|128,25/*3202*/, 
/*437*/       OPC_MoveParent,
/*438*/       OPC_Scope, 107, /*->547*/ // 2 children in Scope
/*440*/         OPC_MoveChild, 2,
/*442*/         OPC_CheckInteger, 1, 
/*444*/         OPC_MoveParent,
/*445*/         OPC_Scope, 49, /*->496*/ // 2 children in Scope
/*447*/           OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*449*/           OPC_EmitMergeInputChains1_0,
/*450*/           OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::v4f32, 0/*#Ops*/,  // Results = #1
/*457*/           OPC_EmitInteger, MVT::i32, 1, 
/*460*/           OPC_EmitInteger, MVT::i32, 60, 
/*463*/           OPC_EmitInteger, MVT::i32, 7, 
/*466*/           OPC_EmitInteger, MVT::i32, 7, 
/*469*/           OPC_EmitInteger, MVT::i32, 7, 
/*472*/           OPC_EmitInteger, MVT::i32, 7, 
/*475*/           OPC_EmitInteger, MVT::i32, 39, 
/*478*/           OPC_EmitInteger, MVT::i32, 0, 
/*481*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::R600_ExportSwz), 0|OPFL_Chain,
                      0/*#VTs*/, 9/*#Ops*/, 1, 2, 3, 4, 5, 6, 7, 8, 9, 
                  // Src: (intrinsic_void 3202:iPTR, 1:i32) - Complexity = 13
                  // Dst: (R600_ExportSwz (IMPLICIT_DEF:v4f32), 1:i32, 60:i32, 7:i32, 7:i32, 7:i32, 7:i32, 39:i32, 0:i32)
/*496*/         /*Scope*/ 49, /*->546*/
/*497*/           OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*499*/           OPC_EmitMergeInputChains1_0,
/*500*/           OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::v4f32, 0/*#Ops*/,  // Results = #1
/*507*/           OPC_EmitInteger, MVT::i32, 1, 
/*510*/           OPC_EmitInteger, MVT::i32, 60, 
/*513*/           OPC_EmitInteger, MVT::i32, 7, 
/*516*/           OPC_EmitInteger, MVT::i32, 7, 
/*519*/           OPC_EmitInteger, MVT::i32, 7, 
/*522*/           OPC_EmitInteger, MVT::i32, 7, 
/*525*/           OPC_EmitInteger, MVT::i32, 83, 
/*528*/           OPC_EmitInteger, MVT::i32, 0, 
/*531*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EG_ExportSwz), 0|OPFL_Chain,
                      0/*#VTs*/, 9/*#Ops*/, 1, 2, 3, 4, 5, 6, 7, 8, 9, 
                  // Src: (intrinsic_void 3202:iPTR, 1:i32) - Complexity = 13
                  // Dst: (EG_ExportSwz (IMPLICIT_DEF:v4f32), 1:i32, 60:i32, 7:i32, 7:i32, 7:i32, 7:i32, 83:i32, 0:i32)
/*546*/         0, /*End of Scope*/
/*547*/       /*Scope*/ 107, /*->655*/
/*548*/         OPC_RecordChild2, // #1 = $type
/*549*/         OPC_MoveChild, 2,
/*551*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*554*/         OPC_MoveParent,
/*555*/         OPC_Scope, 48, /*->605*/ // 2 children in Scope
/*557*/           OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*559*/           OPC_EmitMergeInputChains1_0,
/*560*/           OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::v4f32, 0/*#Ops*/,  // Results = #2
/*567*/           OPC_EmitConvertToTarget, 1,
/*569*/           OPC_EmitInteger, MVT::i32, 0, 
/*572*/           OPC_EmitInteger, MVT::i32, 7, 
/*575*/           OPC_EmitInteger, MVT::i32, 7, 
/*578*/           OPC_EmitInteger, MVT::i32, 7, 
/*581*/           OPC_EmitInteger, MVT::i32, 7, 
/*584*/           OPC_EmitInteger, MVT::i32, 39, 
/*587*/           OPC_EmitInteger, MVT::i32, 0, 
/*590*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::R600_ExportSwz), 0|OPFL_Chain,
                      0/*#VTs*/, 9/*#Ops*/, 2, 3, 4, 5, 6, 7, 8, 9, 10, 
                  // Src: (intrinsic_void 3202:iPTR, (imm:i32):$type) - Complexity = 11
                  // Dst: (R600_ExportSwz (IMPLICIT_DEF:v4f32), (imm:i32):$type, 0:i32, 7:i32, 7:i32, 7:i32, 7:i32, 39:i32, 0:i32)
/*605*/         /*Scope*/ 48, /*->654*/
/*606*/           OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*608*/           OPC_EmitMergeInputChains1_0,
/*609*/           OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::v4f32, 0/*#Ops*/,  // Results = #2
/*616*/           OPC_EmitConvertToTarget, 1,
/*618*/           OPC_EmitInteger, MVT::i32, 0, 
/*621*/           OPC_EmitInteger, MVT::i32, 7, 
/*624*/           OPC_EmitInteger, MVT::i32, 7, 
/*627*/           OPC_EmitInteger, MVT::i32, 7, 
/*630*/           OPC_EmitInteger, MVT::i32, 7, 
/*633*/           OPC_EmitInteger, MVT::i32, 83, 
/*636*/           OPC_EmitInteger, MVT::i32, 0, 
/*639*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EG_ExportSwz), 0|OPFL_Chain,
                      0/*#VTs*/, 9/*#Ops*/, 2, 3, 4, 5, 6, 7, 8, 9, 10, 
                  // Src: (intrinsic_void 3202:iPTR, (imm:i32):$type) - Complexity = 11
                  // Dst: (EG_ExportSwz (IMPLICIT_DEF:v4f32), (imm:i32):$type, 0:i32, 7:i32, 7:i32, 7:i32, 7:i32, 83:i32, 0:i32)
/*654*/         0, /*End of Scope*/
/*655*/       0, /*End of Scope*/
/*656*/     /*Scope*/ 26, /*->683*/
/*657*/       OPC_CheckInteger, 9|128,24/*3081*/, 
/*660*/       OPC_MoveParent,
/*661*/       OPC_Scope, 9, /*->672*/ // 2 children in Scope
/*663*/         OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*665*/         OPC_EmitMergeInputChains1_0,
/*666*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::GROUP_BARRIER), 0|OPFL_Chain,
                    0/*#VTs*/, 0/*#Ops*/, 
                // Src: (intrinsic_void 3081:iPTR) - Complexity = 8
                // Dst: (GROUP_BARRIER)
/*672*/       /*Scope*/ 9, /*->682*/
/*673*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*675*/         OPC_EmitMergeInputChains1_0,
/*676*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_BARRIER), 0|OPFL_Chain,
                    0/*#VTs*/, 0/*#Ops*/, 
                // Src: (intrinsic_void 3081:iPTR) - Complexity = 8
                // Dst: (S_BARRIER)
/*682*/       0, /*End of Scope*/
/*683*/     /*Scope*/ 23, /*->707*/
/*684*/       OPC_CheckInteger, 26|128,25/*3226*/, 
/*687*/       OPC_MoveParent,
/*688*/       OPC_RecordChild2, // #1 = $saved
/*689*/       OPC_RecordChild3, // #2 = $target
/*690*/       OPC_MoveChild, 3,
/*692*/       OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*695*/       OPC_MoveParent,
/*696*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*698*/       OPC_EmitMergeInputChains1_0,
/*699*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_LOOP), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 3226:iPTR, i64:i64:$saved, (bb:Other):$target) - Complexity = 8
              // Dst: (SI_LOOP i64:i64:$saved, (bb:Other):$target)
/*707*/     /*Scope*/ 15, /*->723*/
/*708*/       OPC_CheckInteger, 18|128,25/*3218*/, 
/*711*/       OPC_MoveParent,
/*712*/       OPC_RecordChild2, // #1 = $saved
/*713*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*715*/       OPC_EmitMergeInputChains1_0,
/*716*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_END_CF), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (intrinsic_void 3218:iPTR, i64:i64:$saved) - Complexity = 8
              // Dst: (SI_END_CF i64:i64:$saved)
/*723*/     /*Scope*/ 3|128,1/*131*/, /*->856*/
/*725*/       OPC_CheckInteger, 18|128,24/*3090*/, 
/*728*/       OPC_MoveParent,
/*729*/       OPC_RecordChild2, // #1 = $src
/*730*/       OPC_Scope, 10, /*->742*/ // 2 children in Scope
/*732*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*734*/         OPC_EmitMergeInputChains1_0,
/*735*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_KILL), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (intrinsic_void 3090:iPTR, f32:f32:$src) - Complexity = 8
                // Dst: (SI_KILL f32:f32:$src)
/*742*/       /*Scope*/ 112, /*->855*/
/*743*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*745*/         OPC_EmitMergeInputChains1_0,
/*746*/         OPC_EmitInteger, MVT::i32, 0, 
/*749*/         OPC_EmitInteger, MVT::i32, 0, 
/*752*/         OPC_EmitInteger, MVT::i32, 1, 
/*755*/         OPC_EmitInteger, MVT::i32, 0, 
/*758*/         OPC_EmitInteger, MVT::i32, 0, 
/*761*/         OPC_EmitInteger, MVT::i32, 0, 
/*764*/         OPC_EmitRegister, MVT::f32, AMDGPU::ZERO,
/*767*/         OPC_EmitInteger, MVT::i32, 0, 
/*770*/         OPC_EmitInteger, MVT::i32, 0, 
/*773*/         OPC_EmitInteger, MVT::i32, 0, 
/*776*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*788*/         OPC_EmitInteger, MVT::i32, 0, 
/*791*/         OPC_EmitInteger, MVT::i32, 0, 
/*794*/         OPC_EmitInteger, MVT::i32, 0, 
/*797*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*809*/         OPC_EmitInteger, MVT::i32, 1, 
/*812*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*815*/         OPC_EmitInteger, MVT::i32, 0, 
/*818*/         OPC_EmitInteger, MVT::i32, 0, 
/*821*/         OPC_EmitNode, TARGET_VAL(AMDGPU::KILLGT), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 1, 13, 14, 15, 16, 17, 18, 19, 20,  // Results = #21
/*848*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MASK_WRITE), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 21, 
                // Src: (intrinsic_void 3090:iPTR, f32:f32:$src0) - Complexity = 8
                // Dst: (MASK_WRITE (KILLGT:i32 ZERO:f32, ?:f32:$src0))
/*855*/       0, /*End of Scope*/
/*856*/     /*Scope*/ 20|128,1/*148*/, /*->1006*/
/*858*/       OPC_CheckInteger, 19|128,24/*3091*/, 
/*861*/       OPC_MoveParent,
/*862*/       OPC_Scope, 25, /*->889*/ // 2 children in Scope
/*864*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*866*/         OPC_EmitMergeInputChains1_0,
/*867*/         OPC_EmitInteger, MVT::i32, 0|128,0|128,0|128,124|128,11/*3212836864*/, 
/*874*/         OPC_EmitNode, TARGET_VAL(AMDGPU::V_MOV_B32_e32), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*882*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_KILL), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (intrinsic_void 3091:iPTR) - Complexity = 8
                // Dst: (SI_KILL (V_MOV_B32_e32:i32 3212836864:i32))
/*889*/       /*Scope*/ 115, /*->1005*/
/*890*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*892*/         OPC_EmitMergeInputChains1_0,
/*893*/         OPC_EmitInteger, MVT::i32, 0, 
/*896*/         OPC_EmitInteger, MVT::i32, 0, 
/*899*/         OPC_EmitInteger, MVT::i32, 1, 
/*902*/         OPC_EmitInteger, MVT::i32, 0, 
/*905*/         OPC_EmitInteger, MVT::i32, 0, 
/*908*/         OPC_EmitInteger, MVT::i32, 0, 
/*911*/         OPC_EmitRegister, MVT::f32, AMDGPU::ONE,
/*914*/         OPC_EmitInteger, MVT::i32, 0, 
/*917*/         OPC_EmitInteger, MVT::i32, 0, 
/*920*/         OPC_EmitInteger, MVT::i32, 0, 
/*923*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*935*/         OPC_EmitRegister, MVT::f32, AMDGPU::ZERO,
/*938*/         OPC_EmitInteger, MVT::i32, 0, 
/*941*/         OPC_EmitInteger, MVT::i32, 0, 
/*944*/         OPC_EmitInteger, MVT::i32, 0, 
/*947*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*959*/         OPC_EmitInteger, MVT::i32, 1, 
/*962*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*965*/         OPC_EmitInteger, MVT::i32, 0, 
/*968*/         OPC_EmitInteger, MVT::i32, 0, 
/*971*/         OPC_EmitNode, TARGET_VAL(AMDGPU::KILLGT), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 20/*#Ops*/, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20,  // Results = #21
/*998*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MASK_WRITE), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 21, 
                // Src: (intrinsic_void 3091:iPTR) - Complexity = 8
                // Dst: (MASK_WRITE (KILLGT:i32 ONE:f32, ZERO:f32))
/*1005*/      0, /*End of Scope*/
/*1006*/    /*Scope*/ 5|128,1/*133*/, /*->1141*/
/*1008*/      OPC_CheckInteger, 3|128,25/*3203*/, 
/*1011*/      OPC_MoveParent,
/*1012*/      OPC_RecordChild2, // #1 = $reg
/*1013*/      OPC_Scope, 62, /*->1077*/ // 2 children in Scope
/*1015*/        OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*1017*/        OPC_EmitMergeInputChains1_0,
/*1018*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::v4f32, 0/*#Ops*/,  // Results = #2
/*1025*/        OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*1028*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 2, 1, 3,  // Results = #4
/*1038*/        OPC_EmitInteger, MVT::i32, 0, 
/*1041*/        OPC_EmitInteger, MVT::i32, 61, 
/*1044*/        OPC_EmitInteger, MVT::i32, 0, 
/*1047*/        OPC_EmitInteger, MVT::i32, 7, 
/*1050*/        OPC_EmitInteger, MVT::i32, 7, 
/*1053*/        OPC_EmitInteger, MVT::i32, 7, 
/*1056*/        OPC_EmitInteger, MVT::i32, 39, 
/*1059*/        OPC_EmitInteger, MVT::i32, 0, 
/*1062*/        OPC_MorphNodeTo, TARGET_VAL(AMDGPU::R600_ExportSwz), 0|OPFL_Chain,
                    0/*#VTs*/, 9/*#Ops*/, 4, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (intrinsic_void 3203:iPTR, R600_Reg32:f32:$reg) - Complexity = 8
                // Dst: (R600_ExportSwz (INSERT_SUBREG:v4f32 (IMPLICIT_DEF:v4f32), R600_Reg32:f32:$reg, sub0:i32), 0:i32, 61:i32, 0:i32, 7:i32, 7:i32, 7:i32, 39:i32, 0:i32)
/*1077*/      /*Scope*/ 62, /*->1140*/
/*1078*/        OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*1080*/        OPC_EmitMergeInputChains1_0,
/*1081*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::v4f32, 0/*#Ops*/,  // Results = #2
/*1088*/        OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*1091*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 2, 1, 3,  // Results = #4
/*1101*/        OPC_EmitInteger, MVT::i32, 0, 
/*1104*/        OPC_EmitInteger, MVT::i32, 61, 
/*1107*/        OPC_EmitInteger, MVT::i32, 0, 
/*1110*/        OPC_EmitInteger, MVT::i32, 7, 
/*1113*/        OPC_EmitInteger, MVT::i32, 7, 
/*1116*/        OPC_EmitInteger, MVT::i32, 7, 
/*1119*/        OPC_EmitInteger, MVT::i32, 83, 
/*1122*/        OPC_EmitInteger, MVT::i32, 0, 
/*1125*/        OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EG_ExportSwz), 0|OPFL_Chain,
                    0/*#VTs*/, 9/*#Ops*/, 4, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (intrinsic_void 3203:iPTR, R600_Reg32:f32:$reg) - Complexity = 8
                // Dst: (EG_ExportSwz (INSERT_SUBREG:v4f32 (IMPLICIT_DEF:v4f32), R600_Reg32:f32:$reg, sub0:i32), 0:i32, 61:i32, 0:i32, 7:i32, 7:i32, 7:i32, 83:i32, 0:i32)
/*1140*/      0, /*End of Scope*/
/*1141*/    /*Scope*/ 5|128,1/*133*/, /*->1276*/
/*1143*/      OPC_CheckInteger, 4|128,25/*3204*/, 
/*1146*/      OPC_MoveParent,
/*1147*/      OPC_RecordChild2, // #1 = $reg
/*1148*/      OPC_Scope, 62, /*->1212*/ // 2 children in Scope
/*1150*/        OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*1152*/        OPC_EmitMergeInputChains1_0,
/*1153*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::v4f32, 0/*#Ops*/,  // Results = #2
/*1160*/        OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*1163*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 2, 1, 3,  // Results = #4
/*1173*/        OPC_EmitInteger, MVT::i32, 0, 
/*1176*/        OPC_EmitInteger, MVT::i32, 61, 
/*1179*/        OPC_EmitInteger, MVT::i32, 7, 
/*1182*/        OPC_EmitInteger, MVT::i32, 0, 
/*1185*/        OPC_EmitInteger, MVT::i32, 7, 
/*1188*/        OPC_EmitInteger, MVT::i32, 7, 
/*1191*/        OPC_EmitInteger, MVT::i32, 39, 
/*1194*/        OPC_EmitInteger, MVT::i32, 0, 
/*1197*/        OPC_MorphNodeTo, TARGET_VAL(AMDGPU::R600_ExportSwz), 0|OPFL_Chain,
                    0/*#VTs*/, 9/*#Ops*/, 4, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (intrinsic_void 3204:iPTR, R600_Reg32:f32:$reg) - Complexity = 8
                // Dst: (R600_ExportSwz (INSERT_SUBREG:v4f32 (IMPLICIT_DEF:v4f32), R600_Reg32:f32:$reg, sub0:i32), 0:i32, 61:i32, 7:i32, 0:i32, 7:i32, 7:i32, 39:i32, 0:i32)
/*1212*/      /*Scope*/ 62, /*->1275*/
/*1213*/        OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*1215*/        OPC_EmitMergeInputChains1_0,
/*1216*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::v4f32, 0/*#Ops*/,  // Results = #2
/*1223*/        OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*1226*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 2, 1, 3,  // Results = #4
/*1236*/        OPC_EmitInteger, MVT::i32, 0, 
/*1239*/        OPC_EmitInteger, MVT::i32, 61, 
/*1242*/        OPC_EmitInteger, MVT::i32, 7, 
/*1245*/        OPC_EmitInteger, MVT::i32, 0, 
/*1248*/        OPC_EmitInteger, MVT::i32, 7, 
/*1251*/        OPC_EmitInteger, MVT::i32, 7, 
/*1254*/        OPC_EmitInteger, MVT::i32, 83, 
/*1257*/        OPC_EmitInteger, MVT::i32, 0, 
/*1260*/        OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EG_ExportSwz), 0|OPFL_Chain,
                    0/*#VTs*/, 9/*#Ops*/, 4, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (intrinsic_void 3204:iPTR, R600_Reg32:f32:$reg) - Complexity = 8
                // Dst: (EG_ExportSwz (INSERT_SUBREG:v4f32 (IMPLICIT_DEF:v4f32), R600_Reg32:f32:$reg, sub0:i32), 0:i32, 61:i32, 7:i32, 0:i32, 7:i32, 7:i32, 83:i32, 0:i32)
/*1275*/      0, /*End of Scope*/
/*1276*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 6|128,1/*134*/,  TARGET_VAL(AMDGPUISD::EXPORT),// ->1415
/*1281*/    OPC_RecordNode,   // #0 = 'EXPORT' chained node
/*1282*/    OPC_RecordChild1, // #1 = $src
/*1283*/    OPC_CheckChild1Type, MVT::v4f32,
/*1285*/    OPC_RecordChild2, // #2 = $base
/*1286*/    OPC_MoveChild, 2,
/*1288*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1291*/    OPC_CheckType, MVT::i32,
/*1293*/    OPC_MoveParent,
/*1294*/    OPC_RecordChild3, // #3 = $type
/*1295*/    OPC_MoveChild, 3,
/*1297*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1300*/    OPC_CheckType, MVT::i32,
/*1302*/    OPC_MoveParent,
/*1303*/    OPC_RecordChild4, // #4 = $swz_x
/*1304*/    OPC_MoveChild, 4,
/*1306*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1309*/    OPC_CheckType, MVT::i32,
/*1311*/    OPC_MoveParent,
/*1312*/    OPC_RecordChild5, // #5 = $swz_y
/*1313*/    OPC_MoveChild, 5,
/*1315*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1318*/    OPC_CheckType, MVT::i32,
/*1320*/    OPC_MoveParent,
/*1321*/    OPC_RecordChild6, // #6 = $swz_z
/*1322*/    OPC_MoveChild, 6,
/*1324*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1327*/    OPC_CheckType, MVT::i32,
/*1329*/    OPC_MoveParent,
/*1330*/    OPC_RecordChild7, // #7 = $swz_w
/*1331*/    OPC_MoveChild, 7,
/*1333*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1336*/    OPC_CheckType, MVT::i32,
/*1338*/    OPC_MoveParent,
/*1339*/    OPC_Scope, 36, /*->1377*/ // 2 children in Scope
/*1341*/      OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*1343*/      OPC_EmitMergeInputChains1_0,
/*1344*/      OPC_EmitConvertToTarget, 3,
/*1346*/      OPC_EmitConvertToTarget, 2,
/*1348*/      OPC_EmitConvertToTarget, 4,
/*1350*/      OPC_EmitConvertToTarget, 5,
/*1352*/      OPC_EmitConvertToTarget, 6,
/*1354*/      OPC_EmitConvertToTarget, 7,
/*1356*/      OPC_EmitInteger, MVT::i32, 39, 
/*1359*/      OPC_EmitInteger, MVT::i32, 0, 
/*1362*/      OPC_MorphNodeTo, TARGET_VAL(AMDGPU::R600_ExportSwz), 0|OPFL_Chain,
                  0/*#VTs*/, 9/*#Ops*/, 1, 8, 9, 10, 11, 12, 13, 14, 15, 
              // Src: (EXPORT R600_Reg128:v4f32:$src, (imm:i32):$base, (imm:i32):$type, (imm:i32):$swz_x, (imm:i32):$swz_y, (imm:i32):$swz_z, (imm:i32):$swz_w) - Complexity = 21
              // Dst: (R600_ExportSwz R600_Reg128:v4f32:$src, (imm:i32):$type, (imm:i32):$base, (imm:i32):$swz_x, (imm:i32):$swz_y, (imm:i32):$swz_z, (imm:i32):$swz_w, 39:i32, 0:i32)
/*1377*/    /*Scope*/ 36, /*->1414*/
/*1378*/      OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*1380*/      OPC_EmitMergeInputChains1_0,
/*1381*/      OPC_EmitConvertToTarget, 3,
/*1383*/      OPC_EmitConvertToTarget, 2,
/*1385*/      OPC_EmitConvertToTarget, 4,
/*1387*/      OPC_EmitConvertToTarget, 5,
/*1389*/      OPC_EmitConvertToTarget, 6,
/*1391*/      OPC_EmitConvertToTarget, 7,
/*1393*/      OPC_EmitInteger, MVT::i32, 83, 
/*1396*/      OPC_EmitInteger, MVT::i32, 0, 
/*1399*/      OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EG_ExportSwz), 0|OPFL_Chain,
                  0/*#VTs*/, 9/*#Ops*/, 1, 8, 9, 10, 11, 12, 13, 14, 15, 
              // Src: (EXPORT R600_Reg128:v4f32:$src, (imm:i32):$base, (imm:i32):$type, (imm:i32):$swz_x, (imm:i32):$swz_y, (imm:i32):$swz_z, (imm:i32):$swz_w) - Complexity = 21
              // Dst: (EG_ExportSwz R600_Reg128:v4f32:$src, (imm:i32):$type, (imm:i32):$base, (imm:i32):$swz_x, (imm:i32):$swz_y, (imm:i32):$swz_z, (imm:i32):$swz_w, 83:i32, 0:i32)
/*1414*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 96|128,5/*736*/,  TARGET_VAL(ISD::ADD),// ->2155
/*1419*/    OPC_Scope, 40|128,2/*296*/, /*->1718*/ // 2 children in Scope
/*1422*/      OPC_MoveChild, 0,
/*1424*/      OPC_CheckOpcode, TARGET_VAL(ISD::MUL),
/*1427*/      OPC_RecordChild0, // #0 = $src0
/*1428*/      OPC_RecordChild1, // #1 = $src1
/*1429*/      OPC_MoveParent,
/*1430*/      OPC_RecordChild1, // #2 = $src2
/*1431*/      OPC_CheckType, MVT::i32,
/*1433*/      OPC_Scope, 105, /*->1540*/ // 3 children in Scope
/*1435*/        OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*1437*/        OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectU24:$src0 #3
/*1440*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectU24:$src1 #4
/*1443*/        OPC_EmitInteger, MVT::i32, 0, 
/*1446*/        OPC_EmitInteger, MVT::i32, 0, 
/*1449*/        OPC_EmitInteger, MVT::i32, 0, 
/*1452*/        OPC_EmitInteger, MVT::i32, 0, 
/*1455*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1467*/        OPC_EmitInteger, MVT::i32, 0, 
/*1470*/        OPC_EmitInteger, MVT::i32, 0, 
/*1473*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1485*/        OPC_EmitInteger, MVT::i32, 0, 
/*1488*/        OPC_EmitInteger, MVT::i32, 0, 
/*1491*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1503*/        OPC_EmitInteger, MVT::i32, 1, 
/*1506*/        OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*1509*/        OPC_EmitInteger, MVT::i32, 0, 
/*1512*/        OPC_EmitInteger, MVT::i32, 0, 
/*1515*/        OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULADD_UINT24_eg), 0,
                    1/*#VTs*/, MVT::i32, 18/*#Ops*/, 5, 6, 3, 7, 8, 9, 4, 10, 11, 12, 2, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (add:i32 (mul:i32 U24:i32:$src0, U24:i32:$src1), i32:i32:$src2) - Complexity = 18
                // Dst: (MULADD_UINT24_eg:i32 U24:i32:$src0, U24:i32:$src1, i32:i32:$src2)
/*1540*/      /*Scope*/ 105, /*->1646*/
/*1541*/        OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*1543*/        OPC_CheckComplexPat, /*CP*/1, /*#*/0, // SelectI24:$src0 #3
/*1546*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectI24:$src1 #4
/*1549*/        OPC_EmitInteger, MVT::i32, 0, 
/*1552*/        OPC_EmitInteger, MVT::i32, 0, 
/*1555*/        OPC_EmitInteger, MVT::i32, 0, 
/*1558*/        OPC_EmitInteger, MVT::i32, 0, 
/*1561*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1573*/        OPC_EmitInteger, MVT::i32, 0, 
/*1576*/        OPC_EmitInteger, MVT::i32, 0, 
/*1579*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1591*/        OPC_EmitInteger, MVT::i32, 0, 
/*1594*/        OPC_EmitInteger, MVT::i32, 0, 
/*1597*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1609*/        OPC_EmitInteger, MVT::i32, 1, 
/*1612*/        OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*1615*/        OPC_EmitInteger, MVT::i32, 0, 
/*1618*/        OPC_EmitInteger, MVT::i32, 0, 
/*1621*/        OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULADD_INT24_cm), 0,
                    1/*#VTs*/, MVT::i32, 18/*#Ops*/, 5, 6, 3, 7, 8, 9, 4, 10, 11, 12, 2, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (add:i32 (mul:i32 I24:i32:$src0, I24:i32:$src1), i32:i32:$src2) - Complexity = 18
                // Dst: (MULADD_INT24_cm:i32 I24:i32:$src0, I24:i32:$src1, i32:i32:$src2)
/*1646*/      /*Scope*/ 70, /*->1717*/
/*1647*/        OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*1649*/        OPC_Scope, 32, /*->1683*/ // 2 children in Scope
/*1651*/          OPC_CheckComplexPat, /*CP*/1, /*#*/0, // SelectI24:$src0 #3
/*1654*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectI24:$src1 #4
/*1657*/          OPC_EmitInteger, MVT::i32, 0, 
/*1660*/          OPC_EmitInteger, MVT::i32, 0, 
/*1663*/          OPC_EmitInteger, MVT::i32, 0, 
/*1666*/          OPC_EmitInteger, MVT::i32, 0, 
/*1669*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MAD_I32_I24), 0,
                      1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 4, 2, 5, 6, 7, 8, 
                  // Src: (add:i32 (mul:i32 I24:i32:$src0, I24:i32:$src1), i32:i32:$src2) - Complexity = 18
                  // Dst: (V_MAD_I32_I24:i32 I24:i32:$src0, I24:i32:$src1, i32:i32:$src2)
/*1683*/        /*Scope*/ 32, /*->1716*/
/*1684*/          OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectU24:$src0 #3
/*1687*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectU24:$src1 #4
/*1690*/          OPC_EmitInteger, MVT::i32, 0, 
/*1693*/          OPC_EmitInteger, MVT::i32, 0, 
/*1696*/          OPC_EmitInteger, MVT::i32, 0, 
/*1699*/          OPC_EmitInteger, MVT::i32, 0, 
/*1702*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MAD_U32_U24), 0,
                      1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 4, 2, 5, 6, 7, 8, 
                  // Src: (add:i32 (mul:i32 U24:i32:$src0, U24:i32:$src1), i32:i32:$src2) - Complexity = 18
                  // Dst: (V_MAD_U32_U24:i32 U24:i32:$src0, U24:i32:$src1, i32:i32:$src2)
/*1716*/        0, /*End of Scope*/
/*1717*/      0, /*End of Scope*/
/*1718*/    /*Scope*/ 50|128,3/*434*/, /*->2154*/
/*1720*/      OPC_RecordChild0, // #0 = $src2
/*1721*/      OPC_Scope, 39|128,2/*295*/, /*->2019*/ // 2 children in Scope
/*1724*/        OPC_MoveChild, 1,
/*1726*/        OPC_CheckOpcode, TARGET_VAL(ISD::MUL),
/*1729*/        OPC_RecordChild0, // #1 = $src0
/*1730*/        OPC_RecordChild1, // #2 = $src1
/*1731*/        OPC_MoveParent,
/*1732*/        OPC_CheckType, MVT::i32,
/*1734*/        OPC_Scope, 105, /*->1841*/ // 3 children in Scope
/*1736*/          OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*1738*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectU24:$src0 #3
/*1741*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectU24:$src1 #4
/*1744*/          OPC_EmitInteger, MVT::i32, 0, 
/*1747*/          OPC_EmitInteger, MVT::i32, 0, 
/*1750*/          OPC_EmitInteger, MVT::i32, 0, 
/*1753*/          OPC_EmitInteger, MVT::i32, 0, 
/*1756*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1768*/          OPC_EmitInteger, MVT::i32, 0, 
/*1771*/          OPC_EmitInteger, MVT::i32, 0, 
/*1774*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1786*/          OPC_EmitInteger, MVT::i32, 0, 
/*1789*/          OPC_EmitInteger, MVT::i32, 0, 
/*1792*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1804*/          OPC_EmitInteger, MVT::i32, 1, 
/*1807*/          OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*1810*/          OPC_EmitInteger, MVT::i32, 0, 
/*1813*/          OPC_EmitInteger, MVT::i32, 0, 
/*1816*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULADD_UINT24_eg), 0,
                      1/*#VTs*/, MVT::i32, 18/*#Ops*/, 5, 6, 3, 7, 8, 9, 4, 10, 11, 12, 0, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (add:i32 i32:i32:$src2, (mul:i32 U24:i32:$src0, U24:i32:$src1)) - Complexity = 18
                  // Dst: (MULADD_UINT24_eg:i32 U24:i32:$src0, U24:i32:$src1, i32:i32:$src2)
/*1841*/        /*Scope*/ 105, /*->1947*/
/*1842*/          OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*1844*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectI24:$src0 #3
/*1847*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectI24:$src1 #4
/*1850*/          OPC_EmitInteger, MVT::i32, 0, 
/*1853*/          OPC_EmitInteger, MVT::i32, 0, 
/*1856*/          OPC_EmitInteger, MVT::i32, 0, 
/*1859*/          OPC_EmitInteger, MVT::i32, 0, 
/*1862*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1874*/          OPC_EmitInteger, MVT::i32, 0, 
/*1877*/          OPC_EmitInteger, MVT::i32, 0, 
/*1880*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1892*/          OPC_EmitInteger, MVT::i32, 0, 
/*1895*/          OPC_EmitInteger, MVT::i32, 0, 
/*1898*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1910*/          OPC_EmitInteger, MVT::i32, 1, 
/*1913*/          OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*1916*/          OPC_EmitInteger, MVT::i32, 0, 
/*1919*/          OPC_EmitInteger, MVT::i32, 0, 
/*1922*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULADD_INT24_cm), 0,
                      1/*#VTs*/, MVT::i32, 18/*#Ops*/, 5, 6, 3, 7, 8, 9, 4, 10, 11, 12, 0, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (add:i32 i32:i32:$src2, (mul:i32 I24:i32:$src0, I24:i32:$src1)) - Complexity = 18
                  // Dst: (MULADD_INT24_cm:i32 I24:i32:$src0, I24:i32:$src1, i32:i32:$src2)
/*1947*/        /*Scope*/ 70, /*->2018*/
/*1948*/          OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*1950*/          OPC_Scope, 32, /*->1984*/ // 2 children in Scope
/*1952*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectI24:$src0 #3
/*1955*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectI24:$src1 #4
/*1958*/            OPC_EmitInteger, MVT::i32, 0, 
/*1961*/            OPC_EmitInteger, MVT::i32, 0, 
/*1964*/            OPC_EmitInteger, MVT::i32, 0, 
/*1967*/            OPC_EmitInteger, MVT::i32, 0, 
/*1970*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MAD_I32_I24), 0,
                        1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 4, 0, 5, 6, 7, 8, 
                    // Src: (add:i32 i32:i32:$src2, (mul:i32 I24:i32:$src0, I24:i32:$src1)) - Complexity = 18
                    // Dst: (V_MAD_I32_I24:i32 I24:i32:$src0, I24:i32:$src1, i32:i32:$src2)
/*1984*/          /*Scope*/ 32, /*->2017*/
/*1985*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectU24:$src0 #3
/*1988*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectU24:$src1 #4
/*1991*/            OPC_EmitInteger, MVT::i32, 0, 
/*1994*/            OPC_EmitInteger, MVT::i32, 0, 
/*1997*/            OPC_EmitInteger, MVT::i32, 0, 
/*2000*/            OPC_EmitInteger, MVT::i32, 0, 
/*2003*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MAD_U32_U24), 0,
                        1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 4, 0, 5, 6, 7, 8, 
                    // Src: (add:i32 i32:i32:$src2, (mul:i32 U24:i32:$src0, U24:i32:$src1)) - Complexity = 18
                    // Dst: (V_MAD_U32_U24:i32 U24:i32:$src0, U24:i32:$src1, i32:i32:$src2)
/*2017*/          0, /*End of Scope*/
/*2018*/        0, /*End of Scope*/
/*2019*/      /*Scope*/ 4|128,1/*132*/, /*->2153*/
/*2021*/        OPC_RecordChild1, // #1 = $src1
/*2022*/        OPC_CheckType, MVT::i32,
/*2024*/        OPC_Scope, 101, /*->2127*/ // 2 children in Scope
/*2026*/          OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*2028*/          OPC_EmitInteger, MVT::i32, 0, 
/*2031*/          OPC_EmitInteger, MVT::i32, 0, 
/*2034*/          OPC_EmitInteger, MVT::i32, 1, 
/*2037*/          OPC_EmitInteger, MVT::i32, 0, 
/*2040*/          OPC_EmitInteger, MVT::i32, 0, 
/*2043*/          OPC_EmitInteger, MVT::i32, 0, 
/*2046*/          OPC_EmitInteger, MVT::i32, 0, 
/*2049*/          OPC_EmitInteger, MVT::i32, 0, 
/*2052*/          OPC_EmitInteger, MVT::i32, 0, 
/*2055*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2067*/          OPC_EmitInteger, MVT::i32, 0, 
/*2070*/          OPC_EmitInteger, MVT::i32, 0, 
/*2073*/          OPC_EmitInteger, MVT::i32, 0, 
/*2076*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2088*/          OPC_EmitInteger, MVT::i32, 1, 
/*2091*/          OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*2094*/          OPC_EmitInteger, MVT::i32, 0, 
/*2097*/          OPC_EmitInteger, MVT::i32, 0, 
/*2100*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::ADD_INT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (add:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
                  // Dst: (ADD_INT:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*2127*/        /*Scope*/ 24, /*->2152*/
/*2128*/          OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*2130*/          OPC_Scope, 9, /*->2141*/ // 2 children in Scope
/*2132*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_ADD_I32_e32), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 VSrc_32:i32:$src0, VReg_32:i32:$src1) - Complexity = 3
                    // Dst: (V_ADD_I32_e32:i32 VSrc_32:i32:$src0, VReg_32:i32:$src1)
/*2141*/          /*Scope*/ 9, /*->2151*/
/*2142*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_ADD_I32_e32), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 VReg_32:i32:$src1, VSrc_32:i32:$src0) - Complexity = 3
                    // Dst: (V_ADD_I32_e32:i32 VSrc_32:i32:$src0, VReg_32:i32:$src1)
/*2151*/          0, /*End of Scope*/
/*2152*/        0, /*End of Scope*/
/*2153*/      0, /*End of Scope*/
/*2154*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 35|128,45/*5795*/,  TARGET_VAL(ISD::OR),// ->7954
/*2159*/    OPC_Scope, 22|128,44/*5654*/, /*->7816*/ // 2 children in Scope
/*2162*/      OPC_MoveChild, 0,
/*2164*/      OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*2167*/      OPC_Scope, 72|128,3/*456*/, /*->2626*/ // 8 children in Scope
/*2170*/        OPC_RecordChild0, // #0 = $y
/*2171*/        OPC_Scope, 89|128,2/*345*/, /*->2519*/ // 2 children in Scope
/*2174*/          OPC_RecordChild1, // #1 = $x
/*2175*/          OPC_MoveParent,
/*2176*/          OPC_MoveChild, 1,
/*2178*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*2181*/          OPC_Scope, 32|128,1/*160*/, /*->2344*/ // 4 children in Scope
/*2184*/            OPC_RecordChild0, // #2 = $z
/*2185*/            OPC_MoveChild, 1,
/*2187*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*2190*/            OPC_MoveChild, 0,
/*2192*/            OPC_CheckSame, 1,
/*2194*/            OPC_MoveParent,
/*2195*/            OPC_MoveChild, 1,
/*2197*/            OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2208*/            OPC_MoveParent,
/*2209*/            OPC_MoveParent,
/*2210*/            OPC_MoveParent,
/*2211*/            OPC_CheckType, MVT::i32,
/*2213*/            OPC_Scope, 99, /*->2314*/ // 2 children in Scope
/*2215*/              OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*2217*/              OPC_EmitInteger, MVT::i32, 0, 
/*2220*/              OPC_EmitInteger, MVT::i32, 0, 
/*2223*/              OPC_EmitInteger, MVT::i32, 0, 
/*2226*/              OPC_EmitInteger, MVT::i32, 0, 
/*2229*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2241*/              OPC_EmitInteger, MVT::i32, 0, 
/*2244*/              OPC_EmitInteger, MVT::i32, 0, 
/*2247*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2259*/              OPC_EmitInteger, MVT::i32, 0, 
/*2262*/              OPC_EmitInteger, MVT::i32, 0, 
/*2265*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2277*/              OPC_EmitInteger, MVT::i32, 1, 
/*2280*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*2283*/              OPC_EmitInteger, MVT::i32, 0, 
/*2286*/              OPC_EmitInteger, MVT::i32, 0, 
/*2289*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                          1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 0, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                      // Src: (or:i32 (and:i32 i32:i32:$y, i32:i32:$x), (and:i32 i32:i32:$z, (xor:i32 i32:i32:$x, -1:i32))) - Complexity = 17
                      // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*2314*/            /*Scope*/ 28, /*->2343*/
/*2315*/              OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*2317*/              OPC_EmitInteger, MVT::i32, 0, 
/*2320*/              OPC_EmitInteger, MVT::i32, 0, 
/*2323*/              OPC_EmitInteger, MVT::i32, 0, 
/*2326*/              OPC_EmitInteger, MVT::i32, 0, 
/*2329*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                          1/*#VTs*/, MVT::i32, 7/*#Ops*/, 1, 0, 2, 3, 4, 5, 6, 
                      // Src: (or:i32 (and:i32 i32:i32:$y, i32:i32:$x), (and:i32 i32:i32:$z, (xor:i32 i32:i32:$x, -1:i32))) - Complexity = 17
                      // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*2343*/            0, /*End of Scope*/
/*2344*/          /*Scope*/ 57, /*->2402*/
/*2345*/            OPC_MoveChild, 0,
/*2347*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*2350*/            OPC_MoveChild, 0,
/*2352*/            OPC_CheckSame, 1,
/*2354*/            OPC_MoveParent,
/*2355*/            OPC_MoveChild, 1,
/*2357*/            OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2368*/            OPC_MoveParent,
/*2369*/            OPC_MoveParent,
/*2370*/            OPC_RecordChild1, // #2 = $z
/*2371*/            OPC_MoveParent,
/*2372*/            OPC_CheckType, MVT::i32,
/*2374*/            OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*2376*/            OPC_EmitInteger, MVT::i32, 0, 
/*2379*/            OPC_EmitInteger, MVT::i32, 0, 
/*2382*/            OPC_EmitInteger, MVT::i32, 0, 
/*2385*/            OPC_EmitInteger, MVT::i32, 0, 
/*2388*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                        1/*#VTs*/, MVT::i32, 7/*#Ops*/, 1, 0, 2, 3, 4, 5, 6, 
                    // Src: (or:i32 (and:i32 i32:i32:$y, i32:i32:$x), (and:i32 (xor:i32 i32:i32:$x, -1:i32), i32:i32:$z)) - Complexity = 17
                    // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*2402*/          /*Scope*/ 57, /*->2460*/
/*2403*/            OPC_RecordChild0, // #2 = $z
/*2404*/            OPC_MoveChild, 1,
/*2406*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*2409*/            OPC_MoveChild, 0,
/*2411*/            OPC_CheckSame, 0,
/*2413*/            OPC_MoveParent,
/*2414*/            OPC_MoveChild, 1,
/*2416*/            OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2427*/            OPC_MoveParent,
/*2428*/            OPC_MoveParent,
/*2429*/            OPC_MoveParent,
/*2430*/            OPC_CheckType, MVT::i32,
/*2432*/            OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*2434*/            OPC_EmitInteger, MVT::i32, 0, 
/*2437*/            OPC_EmitInteger, MVT::i32, 0, 
/*2440*/            OPC_EmitInteger, MVT::i32, 0, 
/*2443*/            OPC_EmitInteger, MVT::i32, 0, 
/*2446*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                        1/*#VTs*/, MVT::i32, 7/*#Ops*/, 0, 1, 2, 3, 4, 5, 6, 
                    // Src: (or:i32 (and:i32 i32:i32:$x, i32:i32:$y), (and:i32 i32:i32:$z, (xor:i32 i32:i32:$x, -1:i32))) - Complexity = 17
                    // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*2460*/          /*Scope*/ 57, /*->2518*/
/*2461*/            OPC_MoveChild, 0,
/*2463*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*2466*/            OPC_MoveChild, 0,
/*2468*/            OPC_CheckSame, 0,
/*2470*/            OPC_MoveParent,
/*2471*/            OPC_MoveChild, 1,
/*2473*/            OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2484*/            OPC_MoveParent,
/*2485*/            OPC_MoveParent,
/*2486*/            OPC_RecordChild1, // #2 = $z
/*2487*/            OPC_MoveParent,
/*2488*/            OPC_CheckType, MVT::i32,
/*2490*/            OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*2492*/            OPC_EmitInteger, MVT::i32, 0, 
/*2495*/            OPC_EmitInteger, MVT::i32, 0, 
/*2498*/            OPC_EmitInteger, MVT::i32, 0, 
/*2501*/            OPC_EmitInteger, MVT::i32, 0, 
/*2504*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                        1/*#VTs*/, MVT::i32, 7/*#Ops*/, 0, 1, 2, 3, 4, 5, 6, 
                    // Src: (or:i32 (and:i32 i32:i32:$x, i32:i32:$y), (and:i32 (xor:i32 i32:i32:$x, -1:i32), i32:i32:$z)) - Complexity = 17
                    // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*2518*/          0, /*End of Scope*/
/*2519*/        /*Scope*/ 105, /*->2625*/
/*2520*/          OPC_MoveChild, 1,
/*2522*/          OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*2525*/          OPC_RecordChild0, // #1 = $x
/*2526*/          OPC_MoveChild, 1,
/*2528*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2539*/          OPC_MoveParent,
/*2540*/          OPC_MoveParent,
/*2541*/          OPC_MoveParent,
/*2542*/          OPC_MoveChild, 1,
/*2544*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*2547*/          OPC_Scope, 37, /*->2586*/ // 2 children in Scope
/*2549*/            OPC_RecordChild0, // #2 = $y
/*2550*/            OPC_MoveChild, 1,
/*2552*/            OPC_CheckSame, 1,
/*2554*/            OPC_MoveParent,
/*2555*/            OPC_MoveParent,
/*2556*/            OPC_CheckType, MVT::i32,
/*2558*/            OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*2560*/            OPC_EmitInteger, MVT::i32, 0, 
/*2563*/            OPC_EmitInteger, MVT::i32, 0, 
/*2566*/            OPC_EmitInteger, MVT::i32, 0, 
/*2569*/            OPC_EmitInteger, MVT::i32, 0, 
/*2572*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                        1/*#VTs*/, MVT::i32, 7/*#Ops*/, 1, 2, 0, 3, 4, 5, 6, 
                    // Src: (or:i32 (and:i32 i32:i32:$z, (xor:i32 i32:i32:$x, -1:i32)), (and:i32 i32:i32:$y, i32:i32:$x)) - Complexity = 17
                    // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*2586*/          /*Scope*/ 37, /*->2624*/
/*2587*/            OPC_MoveChild, 0,
/*2589*/            OPC_CheckSame, 1,
/*2591*/            OPC_MoveParent,
/*2592*/            OPC_RecordChild1, // #2 = $y
/*2593*/            OPC_MoveParent,
/*2594*/            OPC_CheckType, MVT::i32,
/*2596*/            OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*2598*/            OPC_EmitInteger, MVT::i32, 0, 
/*2601*/            OPC_EmitInteger, MVT::i32, 0, 
/*2604*/            OPC_EmitInteger, MVT::i32, 0, 
/*2607*/            OPC_EmitInteger, MVT::i32, 0, 
/*2610*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                        1/*#VTs*/, MVT::i32, 7/*#Ops*/, 1, 2, 0, 3, 4, 5, 6, 
                    // Src: (or:i32 (and:i32 i32:i32:$z, (xor:i32 i32:i32:$x, -1:i32)), (and:i32 i32:i32:$x, i32:i32:$y)) - Complexity = 17
                    // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*2624*/          0, /*End of Scope*/
/*2625*/        0, /*End of Scope*/
/*2626*/      /*Scope*/ 106, /*->2733*/
/*2627*/        OPC_MoveChild, 0,
/*2629*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*2632*/        OPC_RecordChild0, // #0 = $x
/*2633*/        OPC_MoveChild, 1,
/*2635*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2646*/        OPC_MoveParent,
/*2647*/        OPC_MoveParent,
/*2648*/        OPC_RecordChild1, // #1 = $z
/*2649*/        OPC_MoveParent,
/*2650*/        OPC_MoveChild, 1,
/*2652*/        OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*2655*/        OPC_Scope, 37, /*->2694*/ // 2 children in Scope
/*2657*/          OPC_RecordChild0, // #2 = $y
/*2658*/          OPC_MoveChild, 1,
/*2660*/          OPC_CheckSame, 0,
/*2662*/          OPC_MoveParent,
/*2663*/          OPC_MoveParent,
/*2664*/          OPC_CheckType, MVT::i32,
/*2666*/          OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*2668*/          OPC_EmitInteger, MVT::i32, 0, 
/*2671*/          OPC_EmitInteger, MVT::i32, 0, 
/*2674*/          OPC_EmitInteger, MVT::i32, 0, 
/*2677*/          OPC_EmitInteger, MVT::i32, 0, 
/*2680*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                      1/*#VTs*/, MVT::i32, 7/*#Ops*/, 0, 2, 1, 3, 4, 5, 6, 
                  // Src: (or:i32 (and:i32 (xor:i32 i32:i32:$x, -1:i32), i32:i32:$z), (and:i32 i32:i32:$y, i32:i32:$x)) - Complexity = 17
                  // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*2694*/        /*Scope*/ 37, /*->2732*/
/*2695*/          OPC_MoveChild, 0,
/*2697*/          OPC_CheckSame, 0,
/*2699*/          OPC_MoveParent,
/*2700*/          OPC_RecordChild1, // #2 = $y
/*2701*/          OPC_MoveParent,
/*2702*/          OPC_CheckType, MVT::i32,
/*2704*/          OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*2706*/          OPC_EmitInteger, MVT::i32, 0, 
/*2709*/          OPC_EmitInteger, MVT::i32, 0, 
/*2712*/          OPC_EmitInteger, MVT::i32, 0, 
/*2715*/          OPC_EmitInteger, MVT::i32, 0, 
/*2718*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                      1/*#VTs*/, MVT::i32, 7/*#Ops*/, 0, 2, 1, 3, 4, 5, 6, 
                  // Src: (or:i32 (and:i32 (xor:i32 i32:i32:$x, -1:i32), i32:i32:$z), (and:i32 i32:i32:$x, i32:i32:$y)) - Complexity = 17
                  // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*2732*/        0, /*End of Scope*/
/*2733*/      /*Scope*/ 13|128,5/*653*/, /*->3388*/
/*2735*/        OPC_RecordChild0, // #0 = $y
/*2736*/        OPC_Scope, 15|128,3/*399*/, /*->3138*/ // 2 children in Scope
/*2739*/          OPC_RecordChild1, // #1 = $x
/*2740*/          OPC_MoveParent,
/*2741*/          OPC_MoveChild, 1,
/*2743*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*2746*/          OPC_Scope, 0|128,1/*128*/, /*->2877*/ // 3 children in Scope
/*2749*/            OPC_MoveChild, 0,
/*2751*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*2754*/            OPC_MoveChild, 0,
/*2756*/            OPC_CheckSame, 1,
/*2758*/            OPC_MoveParent,
/*2759*/            OPC_MoveChild, 1,
/*2761*/            OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2772*/            OPC_MoveParent,
/*2773*/            OPC_MoveParent,
/*2774*/            OPC_RecordChild1, // #2 = $z
/*2775*/            OPC_MoveParent,
/*2776*/            OPC_CheckType, MVT::i32,
/*2778*/            OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*2780*/            OPC_EmitInteger, MVT::i32, 0, 
/*2783*/            OPC_EmitInteger, MVT::i32, 0, 
/*2786*/            OPC_EmitInteger, MVT::i32, 0, 
/*2789*/            OPC_EmitInteger, MVT::i32, 0, 
/*2792*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2804*/            OPC_EmitInteger, MVT::i32, 0, 
/*2807*/            OPC_EmitInteger, MVT::i32, 0, 
/*2810*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2822*/            OPC_EmitInteger, MVT::i32, 0, 
/*2825*/            OPC_EmitInteger, MVT::i32, 0, 
/*2828*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2840*/            OPC_EmitInteger, MVT::i32, 1, 
/*2843*/            OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*2846*/            OPC_EmitInteger, MVT::i32, 0, 
/*2849*/            OPC_EmitInteger, MVT::i32, 0, 
/*2852*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                        1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 0, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (or:i32 (and:i32 i32:i32:$y, i32:i32:$x), (and:i32 (xor:i32 i32:i32:$x, -1:i32), i32:i32:$z)) - Complexity = 17
                    // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*2877*/          /*Scope*/ 0|128,1/*128*/, /*->3007*/
/*2879*/            OPC_RecordChild0, // #2 = $z
/*2880*/            OPC_MoveChild, 1,
/*2882*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*2885*/            OPC_MoveChild, 0,
/*2887*/            OPC_CheckSame, 0,
/*2889*/            OPC_MoveParent,
/*2890*/            OPC_MoveChild, 1,
/*2892*/            OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2903*/            OPC_MoveParent,
/*2904*/            OPC_MoveParent,
/*2905*/            OPC_MoveParent,
/*2906*/            OPC_CheckType, MVT::i32,
/*2908*/            OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*2910*/            OPC_EmitInteger, MVT::i32, 0, 
/*2913*/            OPC_EmitInteger, MVT::i32, 0, 
/*2916*/            OPC_EmitInteger, MVT::i32, 0, 
/*2919*/            OPC_EmitInteger, MVT::i32, 0, 
/*2922*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2934*/            OPC_EmitInteger, MVT::i32, 0, 
/*2937*/            OPC_EmitInteger, MVT::i32, 0, 
/*2940*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2952*/            OPC_EmitInteger, MVT::i32, 0, 
/*2955*/            OPC_EmitInteger, MVT::i32, 0, 
/*2958*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2970*/            OPC_EmitInteger, MVT::i32, 1, 
/*2973*/            OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*2976*/            OPC_EmitInteger, MVT::i32, 0, 
/*2979*/            OPC_EmitInteger, MVT::i32, 0, 
/*2982*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                        1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (or:i32 (and:i32 i32:i32:$x, i32:i32:$y), (and:i32 i32:i32:$z, (xor:i32 i32:i32:$x, -1:i32))) - Complexity = 17
                    // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*3007*/          /*Scope*/ 0|128,1/*128*/, /*->3137*/
/*3009*/            OPC_MoveChild, 0,
/*3011*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*3014*/            OPC_MoveChild, 0,
/*3016*/            OPC_CheckSame, 0,
/*3018*/            OPC_MoveParent,
/*3019*/            OPC_MoveChild, 1,
/*3021*/            OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3032*/            OPC_MoveParent,
/*3033*/            OPC_MoveParent,
/*3034*/            OPC_RecordChild1, // #2 = $z
/*3035*/            OPC_MoveParent,
/*3036*/            OPC_CheckType, MVT::i32,
/*3038*/            OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*3040*/            OPC_EmitInteger, MVT::i32, 0, 
/*3043*/            OPC_EmitInteger, MVT::i32, 0, 
/*3046*/            OPC_EmitInteger, MVT::i32, 0, 
/*3049*/            OPC_EmitInteger, MVT::i32, 0, 
/*3052*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3064*/            OPC_EmitInteger, MVT::i32, 0, 
/*3067*/            OPC_EmitInteger, MVT::i32, 0, 
/*3070*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3082*/            OPC_EmitInteger, MVT::i32, 0, 
/*3085*/            OPC_EmitInteger, MVT::i32, 0, 
/*3088*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3100*/            OPC_EmitInteger, MVT::i32, 1, 
/*3103*/            OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*3106*/            OPC_EmitInteger, MVT::i32, 0, 
/*3109*/            OPC_EmitInteger, MVT::i32, 0, 
/*3112*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                        1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (or:i32 (and:i32 i32:i32:$x, i32:i32:$y), (and:i32 (xor:i32 i32:i32:$x, -1:i32), i32:i32:$z)) - Complexity = 17
                    // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*3137*/          0, /*End of Scope*/
/*3138*/        /*Scope*/ 119|128,1/*247*/, /*->3387*/
/*3140*/          OPC_MoveChild, 1,
/*3142*/          OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*3145*/          OPC_RecordChild0, // #1 = $x
/*3146*/          OPC_MoveChild, 1,
/*3148*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3159*/          OPC_MoveParent,
/*3160*/          OPC_MoveParent,
/*3161*/          OPC_MoveParent,
/*3162*/          OPC_MoveChild, 1,
/*3164*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*3167*/          OPC_Scope, 108, /*->3277*/ // 2 children in Scope
/*3169*/            OPC_RecordChild0, // #2 = $y
/*3170*/            OPC_MoveChild, 1,
/*3172*/            OPC_CheckSame, 1,
/*3174*/            OPC_MoveParent,
/*3175*/            OPC_MoveParent,
/*3176*/            OPC_CheckType, MVT::i32,
/*3178*/            OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*3180*/            OPC_EmitInteger, MVT::i32, 0, 
/*3183*/            OPC_EmitInteger, MVT::i32, 0, 
/*3186*/            OPC_EmitInteger, MVT::i32, 0, 
/*3189*/            OPC_EmitInteger, MVT::i32, 0, 
/*3192*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3204*/            OPC_EmitInteger, MVT::i32, 0, 
/*3207*/            OPC_EmitInteger, MVT::i32, 0, 
/*3210*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3222*/            OPC_EmitInteger, MVT::i32, 0, 
/*3225*/            OPC_EmitInteger, MVT::i32, 0, 
/*3228*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3240*/            OPC_EmitInteger, MVT::i32, 1, 
/*3243*/            OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*3246*/            OPC_EmitInteger, MVT::i32, 0, 
/*3249*/            OPC_EmitInteger, MVT::i32, 0, 
/*3252*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                        1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 2, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (or:i32 (and:i32 i32:i32:$z, (xor:i32 i32:i32:$x, -1:i32)), (and:i32 i32:i32:$y, i32:i32:$x)) - Complexity = 17
                    // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*3277*/          /*Scope*/ 108, /*->3386*/
/*3278*/            OPC_MoveChild, 0,
/*3280*/            OPC_CheckSame, 1,
/*3282*/            OPC_MoveParent,
/*3283*/            OPC_RecordChild1, // #2 = $y
/*3284*/            OPC_MoveParent,
/*3285*/            OPC_CheckType, MVT::i32,
/*3287*/            OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*3289*/            OPC_EmitInteger, MVT::i32, 0, 
/*3292*/            OPC_EmitInteger, MVT::i32, 0, 
/*3295*/            OPC_EmitInteger, MVT::i32, 0, 
/*3298*/            OPC_EmitInteger, MVT::i32, 0, 
/*3301*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3313*/            OPC_EmitInteger, MVT::i32, 0, 
/*3316*/            OPC_EmitInteger, MVT::i32, 0, 
/*3319*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3331*/            OPC_EmitInteger, MVT::i32, 0, 
/*3334*/            OPC_EmitInteger, MVT::i32, 0, 
/*3337*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3349*/            OPC_EmitInteger, MVT::i32, 1, 
/*3352*/            OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*3355*/            OPC_EmitInteger, MVT::i32, 0, 
/*3358*/            OPC_EmitInteger, MVT::i32, 0, 
/*3361*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                        1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 2, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (or:i32 (and:i32 i32:i32:$z, (xor:i32 i32:i32:$x, -1:i32)), (and:i32 i32:i32:$x, i32:i32:$y)) - Complexity = 17
                    // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*3386*/          0, /*End of Scope*/
/*3387*/        0, /*End of Scope*/
/*3388*/      /*Scope*/ 120|128,1/*248*/, /*->3638*/
/*3390*/        OPC_MoveChild, 0,
/*3392*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*3395*/        OPC_RecordChild0, // #0 = $x
/*3396*/        OPC_MoveChild, 1,
/*3398*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3409*/        OPC_MoveParent,
/*3410*/        OPC_MoveParent,
/*3411*/        OPC_RecordChild1, // #1 = $z
/*3412*/        OPC_MoveParent,
/*3413*/        OPC_MoveChild, 1,
/*3415*/        OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*3418*/        OPC_Scope, 108, /*->3528*/ // 2 children in Scope
/*3420*/          OPC_RecordChild0, // #2 = $y
/*3421*/          OPC_MoveChild, 1,
/*3423*/          OPC_CheckSame, 0,
/*3425*/          OPC_MoveParent,
/*3426*/          OPC_MoveParent,
/*3427*/          OPC_CheckType, MVT::i32,
/*3429*/          OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*3431*/          OPC_EmitInteger, MVT::i32, 0, 
/*3434*/          OPC_EmitInteger, MVT::i32, 0, 
/*3437*/          OPC_EmitInteger, MVT::i32, 0, 
/*3440*/          OPC_EmitInteger, MVT::i32, 0, 
/*3443*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3455*/          OPC_EmitInteger, MVT::i32, 0, 
/*3458*/          OPC_EmitInteger, MVT::i32, 0, 
/*3461*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3473*/          OPC_EmitInteger, MVT::i32, 0, 
/*3476*/          OPC_EmitInteger, MVT::i32, 0, 
/*3479*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3491*/          OPC_EmitInteger, MVT::i32, 1, 
/*3494*/          OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*3497*/          OPC_EmitInteger, MVT::i32, 0, 
/*3500*/          OPC_EmitInteger, MVT::i32, 0, 
/*3503*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                      1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 2, 8, 9, 10, 1, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (or:i32 (and:i32 (xor:i32 i32:i32:$x, -1:i32), i32:i32:$z), (and:i32 i32:i32:$y, i32:i32:$x)) - Complexity = 17
                  // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*3528*/        /*Scope*/ 108, /*->3637*/
/*3529*/          OPC_MoveChild, 0,
/*3531*/          OPC_CheckSame, 0,
/*3533*/          OPC_MoveParent,
/*3534*/          OPC_RecordChild1, // #2 = $y
/*3535*/          OPC_MoveParent,
/*3536*/          OPC_CheckType, MVT::i32,
/*3538*/          OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*3540*/          OPC_EmitInteger, MVT::i32, 0, 
/*3543*/          OPC_EmitInteger, MVT::i32, 0, 
/*3546*/          OPC_EmitInteger, MVT::i32, 0, 
/*3549*/          OPC_EmitInteger, MVT::i32, 0, 
/*3552*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3564*/          OPC_EmitInteger, MVT::i32, 0, 
/*3567*/          OPC_EmitInteger, MVT::i32, 0, 
/*3570*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3582*/          OPC_EmitInteger, MVT::i32, 0, 
/*3585*/          OPC_EmitInteger, MVT::i32, 0, 
/*3588*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3600*/          OPC_EmitInteger, MVT::i32, 1, 
/*3603*/          OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*3606*/          OPC_EmitInteger, MVT::i32, 0, 
/*3609*/          OPC_EmitInteger, MVT::i32, 0, 
/*3612*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                      1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 2, 8, 9, 10, 1, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (or:i32 (and:i32 (xor:i32 i32:i32:$x, -1:i32), i32:i32:$z), (and:i32 i32:i32:$x, i32:i32:$y)) - Complexity = 17
                  // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*3637*/        0, /*End of Scope*/
/*3638*/      /*Scope*/ 103|128,6/*871*/, /*->4511*/
/*3640*/        OPC_RecordChild0, // #0 = $x
/*3641*/        OPC_Scope, 20|128,5/*660*/, /*->4304*/ // 2 children in Scope
/*3644*/          OPC_RecordChild1, // #1 = $z
/*3645*/          OPC_MoveParent,
/*3646*/          OPC_MoveChild, 1,
/*3648*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*3651*/          OPC_Scope, 58|128,2/*314*/, /*->3968*/ // 4 children in Scope
/*3654*/            OPC_RecordChild0, // #2 = $y
/*3655*/            OPC_MoveChild, 1,
/*3657*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*3660*/            OPC_MoveChild, 0,
/*3662*/            OPC_Scope, 124|128,1/*252*/, /*->3917*/ // 2 children in Scope
/*3665*/              OPC_CheckSame, 0,
/*3667*/              OPC_MoveParent,
/*3668*/              OPC_MoveChild, 1,
/*3670*/              OPC_CheckSame, 1,
/*3672*/              OPC_MoveParent,
/*3673*/              OPC_MoveParent,
/*3674*/              OPC_MoveParent,
/*3675*/              OPC_CheckType, MVT::i32,
/*3677*/              OPC_Scope, 70|128,1/*198*/, /*->3878*/ // 2 children in Scope
/*3680*/                OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*3682*/                OPC_EmitInteger, MVT::i32, 0, 
/*3685*/                OPC_EmitInteger, MVT::i32, 0, 
/*3688*/                OPC_EmitInteger, MVT::i32, 0, 
/*3691*/                OPC_EmitInteger, MVT::i32, 0, 
/*3694*/                OPC_EmitInteger, MVT::i32, 1, 
/*3697*/                OPC_EmitInteger, MVT::i32, 0, 
/*3700*/                OPC_EmitInteger, MVT::i32, 0, 
/*3703*/                OPC_EmitInteger, MVT::i32, 0, 
/*3706*/                OPC_EmitInteger, MVT::i32, 0, 
/*3709*/                OPC_EmitInteger, MVT::i32, 0, 
/*3712*/                OPC_EmitInteger, MVT::i32, 0, 
/*3715*/                OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3727*/                OPC_EmitInteger, MVT::i32, 0, 
/*3730*/                OPC_EmitInteger, MVT::i32, 0, 
/*3733*/                OPC_EmitInteger, MVT::i32, 0, 
/*3736*/                OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3748*/                OPC_EmitInteger, MVT::i32, 1, 
/*3751*/                OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*3754*/                OPC_EmitInteger, MVT::i32, 0, 
/*3757*/                OPC_EmitInteger, MVT::i32, 0, 
/*3760*/                OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                            1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 0, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*3787*/                OPC_EmitInteger, MVT::i32, 0, 
/*3790*/                OPC_EmitInteger, MVT::i32, 0, 
/*3793*/                OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3805*/                OPC_EmitInteger, MVT::i32, 0, 
/*3808*/                OPC_EmitInteger, MVT::i32, 0, 
/*3811*/                OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3823*/                OPC_EmitInteger, MVT::i32, 0, 
/*3826*/                OPC_EmitInteger, MVT::i32, 0, 
/*3829*/                OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3841*/                OPC_EmitInteger, MVT::i32, 1, 
/*3844*/                OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*3847*/                OPC_EmitInteger, MVT::i32, 0, 
/*3850*/                OPC_EmitInteger, MVT::i32, 0, 
/*3853*/                OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                            1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                        // Src: (or:i32 (and:i32 i32:i32:$x, i32:i32:$z), (and:i32 i32:i32:$y, (or:i32 i32:i32:$x, i32:i32:$z))) - Complexity = 12
                        // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*3878*/              /*Scope*/ 37, /*->3916*/
/*3879*/                OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*3881*/                OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*3890*/                OPC_EmitInteger, MVT::i32, 0, 
/*3893*/                OPC_EmitInteger, MVT::i32, 0, 
/*3896*/                OPC_EmitInteger, MVT::i32, 0, 
/*3899*/                OPC_EmitInteger, MVT::i32, 0, 
/*3902*/                OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                            1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 1, 2, 4, 5, 6, 7, 
                        // Src: (or:i32 (and:i32 i32:i32:$x, i32:i32:$z), (and:i32 i32:i32:$y, (or:i32 i32:i32:$x, i32:i32:$z))) - Complexity = 12
                        // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*3916*/              0, /*End of Scope*/
/*3917*/            /*Scope*/ 49, /*->3967*/
/*3918*/              OPC_CheckSame, 1,
/*3920*/              OPC_MoveParent,
/*3921*/              OPC_MoveChild, 1,
/*3923*/              OPC_CheckSame, 0,
/*3925*/              OPC_MoveParent,
/*3926*/              OPC_MoveParent,
/*3927*/              OPC_MoveParent,
/*3928*/              OPC_CheckType, MVT::i32,
/*3930*/              OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*3932*/              OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*3941*/              OPC_EmitInteger, MVT::i32, 0, 
/*3944*/              OPC_EmitInteger, MVT::i32, 0, 
/*3947*/              OPC_EmitInteger, MVT::i32, 0, 
/*3950*/              OPC_EmitInteger, MVT::i32, 0, 
/*3953*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                          1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 1, 2, 4, 5, 6, 7, 
                      // Src: (or:i32 (and:i32 i32:i32:$x, i32:i32:$z), (and:i32 i32:i32:$y, (or:i32 i32:i32:$z, i32:i32:$x))) - Complexity = 12
                      // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*3967*/            0, /*End of Scope*/
/*3968*/          /*Scope*/ 111, /*->4080*/
/*3969*/            OPC_MoveChild, 0,
/*3971*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*3974*/            OPC_MoveChild, 0,
/*3976*/            OPC_Scope, 50, /*->4028*/ // 2 children in Scope
/*3978*/              OPC_CheckSame, 0,
/*3980*/              OPC_MoveParent,
/*3981*/              OPC_MoveChild, 1,
/*3983*/              OPC_CheckSame, 1,
/*3985*/              OPC_MoveParent,
/*3986*/              OPC_MoveParent,
/*3987*/              OPC_RecordChild1, // #2 = $y
/*3988*/              OPC_MoveParent,
/*3989*/              OPC_CheckType, MVT::i32,
/*3991*/              OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*3993*/              OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*4002*/              OPC_EmitInteger, MVT::i32, 0, 
/*4005*/              OPC_EmitInteger, MVT::i32, 0, 
/*4008*/              OPC_EmitInteger, MVT::i32, 0, 
/*4011*/              OPC_EmitInteger, MVT::i32, 0, 
/*4014*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                          1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 1, 2, 4, 5, 6, 7, 
                      // Src: (or:i32 (and:i32 i32:i32:$x, i32:i32:$z), (and:i32 (or:i32 i32:i32:$x, i32:i32:$z), i32:i32:$y)) - Complexity = 12
                      // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*4028*/            /*Scope*/ 50, /*->4079*/
/*4029*/              OPC_CheckSame, 1,
/*4031*/              OPC_MoveParent,
/*4032*/              OPC_MoveChild, 1,
/*4034*/              OPC_CheckSame, 0,
/*4036*/              OPC_MoveParent,
/*4037*/              OPC_MoveParent,
/*4038*/              OPC_RecordChild1, // #2 = $y
/*4039*/              OPC_MoveParent,
/*4040*/              OPC_CheckType, MVT::i32,
/*4042*/              OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*4044*/              OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*4053*/              OPC_EmitInteger, MVT::i32, 0, 
/*4056*/              OPC_EmitInteger, MVT::i32, 0, 
/*4059*/              OPC_EmitInteger, MVT::i32, 0, 
/*4062*/              OPC_EmitInteger, MVT::i32, 0, 
/*4065*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                          1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 1, 2, 4, 5, 6, 7, 
                      // Src: (or:i32 (and:i32 i32:i32:$x, i32:i32:$z), (and:i32 (or:i32 i32:i32:$z, i32:i32:$x), i32:i32:$y)) - Complexity = 12
                      // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*4079*/            0, /*End of Scope*/
/*4080*/          /*Scope*/ 110, /*->4191*/
/*4081*/            OPC_RecordChild0, // #2 = $y
/*4082*/            OPC_MoveChild, 1,
/*4084*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*4087*/            OPC_MoveChild, 0,
/*4089*/            OPC_Scope, 49, /*->4140*/ // 2 children in Scope
/*4091*/              OPC_CheckSame, 1,
/*4093*/              OPC_MoveParent,
/*4094*/              OPC_MoveChild, 1,
/*4096*/              OPC_CheckSame, 0,
/*4098*/              OPC_MoveParent,
/*4099*/              OPC_MoveParent,
/*4100*/              OPC_MoveParent,
/*4101*/              OPC_CheckType, MVT::i32,
/*4103*/              OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*4105*/              OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*4114*/              OPC_EmitInteger, MVT::i32, 0, 
/*4117*/              OPC_EmitInteger, MVT::i32, 0, 
/*4120*/              OPC_EmitInteger, MVT::i32, 0, 
/*4123*/              OPC_EmitInteger, MVT::i32, 0, 
/*4126*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                          1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 0, 2, 4, 5, 6, 7, 
                      // Src: (or:i32 (and:i32 i32:i32:$z, i32:i32:$x), (and:i32 i32:i32:$y, (or:i32 i32:i32:$x, i32:i32:$z))) - Complexity = 12
                      // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*4140*/            /*Scope*/ 49, /*->4190*/
/*4141*/              OPC_CheckSame, 0,
/*4143*/              OPC_MoveParent,
/*4144*/              OPC_MoveChild, 1,
/*4146*/              OPC_CheckSame, 1,
/*4148*/              OPC_MoveParent,
/*4149*/              OPC_MoveParent,
/*4150*/              OPC_MoveParent,
/*4151*/              OPC_CheckType, MVT::i32,
/*4153*/              OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*4155*/              OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*4164*/              OPC_EmitInteger, MVT::i32, 0, 
/*4167*/              OPC_EmitInteger, MVT::i32, 0, 
/*4170*/              OPC_EmitInteger, MVT::i32, 0, 
/*4173*/              OPC_EmitInteger, MVT::i32, 0, 
/*4176*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                          1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 0, 2, 4, 5, 6, 7, 
                      // Src: (or:i32 (and:i32 i32:i32:$z, i32:i32:$x), (and:i32 i32:i32:$y, (or:i32 i32:i32:$z, i32:i32:$x))) - Complexity = 12
                      // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*4190*/            0, /*End of Scope*/
/*4191*/          /*Scope*/ 111, /*->4303*/
/*4192*/            OPC_MoveChild, 0,
/*4194*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*4197*/            OPC_MoveChild, 0,
/*4199*/            OPC_Scope, 50, /*->4251*/ // 2 children in Scope
/*4201*/              OPC_CheckSame, 1,
/*4203*/              OPC_MoveParent,
/*4204*/              OPC_MoveChild, 1,
/*4206*/              OPC_CheckSame, 0,
/*4208*/              OPC_MoveParent,
/*4209*/              OPC_MoveParent,
/*4210*/              OPC_RecordChild1, // #2 = $y
/*4211*/              OPC_MoveParent,
/*4212*/              OPC_CheckType, MVT::i32,
/*4214*/              OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*4216*/              OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*4225*/              OPC_EmitInteger, MVT::i32, 0, 
/*4228*/              OPC_EmitInteger, MVT::i32, 0, 
/*4231*/              OPC_EmitInteger, MVT::i32, 0, 
/*4234*/              OPC_EmitInteger, MVT::i32, 0, 
/*4237*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                          1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 0, 2, 4, 5, 6, 7, 
                      // Src: (or:i32 (and:i32 i32:i32:$z, i32:i32:$x), (and:i32 (or:i32 i32:i32:$x, i32:i32:$z), i32:i32:$y)) - Complexity = 12
                      // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*4251*/            /*Scope*/ 50, /*->4302*/
/*4252*/              OPC_CheckSame, 0,
/*4254*/              OPC_MoveParent,
/*4255*/              OPC_MoveChild, 1,
/*4257*/              OPC_CheckSame, 1,
/*4259*/              OPC_MoveParent,
/*4260*/              OPC_MoveParent,
/*4261*/              OPC_RecordChild1, // #2 = $y
/*4262*/              OPC_MoveParent,
/*4263*/              OPC_CheckType, MVT::i32,
/*4265*/              OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*4267*/              OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*4276*/              OPC_EmitInteger, MVT::i32, 0, 
/*4279*/              OPC_EmitInteger, MVT::i32, 0, 
/*4282*/              OPC_EmitInteger, MVT::i32, 0, 
/*4285*/              OPC_EmitInteger, MVT::i32, 0, 
/*4288*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                          1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 0, 2, 4, 5, 6, 7, 
                      // Src: (or:i32 (and:i32 i32:i32:$z, i32:i32:$x), (and:i32 (or:i32 i32:i32:$z, i32:i32:$x), i32:i32:$y)) - Complexity = 12
                      // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*4302*/            0, /*End of Scope*/
/*4303*/          0, /*End of Scope*/
/*4304*/        /*Scope*/ 76|128,1/*204*/, /*->4510*/
/*4306*/          OPC_MoveChild, 1,
/*4308*/          OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*4311*/          OPC_RecordChild0, // #1 = $x
/*4312*/          OPC_RecordChild1, // #2 = $z
/*4313*/          OPC_MoveParent,
/*4314*/          OPC_MoveParent,
/*4315*/          OPC_MoveChild, 1,
/*4317*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*4320*/          OPC_MoveChild, 0,
/*4322*/          OPC_Scope, 48, /*->4372*/ // 3 children in Scope
/*4324*/            OPC_CheckSame, 1,
/*4326*/            OPC_MoveParent,
/*4327*/            OPC_MoveChild, 1,
/*4329*/            OPC_CheckSame, 2,
/*4331*/            OPC_MoveParent,
/*4332*/            OPC_MoveParent,
/*4333*/            OPC_CheckType, MVT::i32,
/*4335*/            OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*4337*/            OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #3
/*4346*/            OPC_EmitInteger, MVT::i32, 0, 
/*4349*/            OPC_EmitInteger, MVT::i32, 0, 
/*4352*/            OPC_EmitInteger, MVT::i32, 0, 
/*4355*/            OPC_EmitInteger, MVT::i32, 0, 
/*4358*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                        1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 2, 0, 4, 5, 6, 7, 
                    // Src: (or:i32 (and:i32 i32:i32:$y, (or:i32 i32:i32:$x, i32:i32:$z)), (and:i32 i32:i32:$x, i32:i32:$z)) - Complexity = 12
                    // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*4372*/          /*Scope*/ 87, /*->4460*/
/*4373*/            OPC_CheckSame, 2,
/*4375*/            OPC_MoveParent,
/*4376*/            OPC_MoveChild, 1,
/*4378*/            OPC_CheckSame, 1,
/*4380*/            OPC_MoveParent,
/*4381*/            OPC_MoveParent,
/*4382*/            OPC_CheckType, MVT::i32,
/*4384*/            OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*4386*/            OPC_Scope, 35, /*->4423*/ // 2 children in Scope
/*4388*/              OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #3
/*4397*/              OPC_EmitInteger, MVT::i32, 0, 
/*4400*/              OPC_EmitInteger, MVT::i32, 0, 
/*4403*/              OPC_EmitInteger, MVT::i32, 0, 
/*4406*/              OPC_EmitInteger, MVT::i32, 0, 
/*4409*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                          1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 2, 0, 4, 5, 6, 7, 
                      // Src: (or:i32 (and:i32 i32:i32:$y, (or:i32 i32:i32:$x, i32:i32:$z)), (and:i32 i32:i32:$z, i32:i32:$x)) - Complexity = 12
                      // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*4423*/            /*Scope*/ 35, /*->4459*/
/*4424*/              OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 0,  // Results = #3
/*4433*/              OPC_EmitInteger, MVT::i32, 0, 
/*4436*/              OPC_EmitInteger, MVT::i32, 0, 
/*4439*/              OPC_EmitInteger, MVT::i32, 0, 
/*4442*/              OPC_EmitInteger, MVT::i32, 0, 
/*4445*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                          1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 1, 0, 4, 5, 6, 7, 
                      // Src: (or:i32 (and:i32 i32:i32:$y, (or:i32 i32:i32:$z, i32:i32:$x)), (and:i32 i32:i32:$x, i32:i32:$z)) - Complexity = 12
                      // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*4459*/            0, /*End of Scope*/
/*4460*/          /*Scope*/ 48, /*->4509*/
/*4461*/            OPC_CheckSame, 1,
/*4463*/            OPC_MoveParent,
/*4464*/            OPC_MoveChild, 1,
/*4466*/            OPC_CheckSame, 2,
/*4468*/            OPC_MoveParent,
/*4469*/            OPC_MoveParent,
/*4470*/            OPC_CheckType, MVT::i32,
/*4472*/            OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*4474*/            OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 0,  // Results = #3
/*4483*/            OPC_EmitInteger, MVT::i32, 0, 
/*4486*/            OPC_EmitInteger, MVT::i32, 0, 
/*4489*/            OPC_EmitInteger, MVT::i32, 0, 
/*4492*/            OPC_EmitInteger, MVT::i32, 0, 
/*4495*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                        1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 1, 0, 4, 5, 6, 7, 
                    // Src: (or:i32 (and:i32 i32:i32:$y, (or:i32 i32:i32:$z, i32:i32:$x)), (and:i32 i32:i32:$z, i32:i32:$x)) - Complexity = 12
                    // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*4509*/          0, /*End of Scope*/
/*4510*/        0, /*End of Scope*/
/*4511*/      /*Scope*/ 77|128,1/*205*/, /*->4718*/
/*4513*/        OPC_MoveChild, 0,
/*4515*/        OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*4518*/        OPC_RecordChild0, // #0 = $x
/*4519*/        OPC_RecordChild1, // #1 = $z
/*4520*/        OPC_MoveParent,
/*4521*/        OPC_RecordChild1, // #2 = $y
/*4522*/        OPC_MoveParent,
/*4523*/        OPC_MoveChild, 1,
/*4525*/        OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*4528*/        OPC_MoveChild, 0,
/*4530*/        OPC_Scope, 48, /*->4580*/ // 3 children in Scope
/*4532*/          OPC_CheckSame, 0,
/*4534*/          OPC_MoveParent,
/*4535*/          OPC_MoveChild, 1,
/*4537*/          OPC_CheckSame, 1,
/*4539*/          OPC_MoveParent,
/*4540*/          OPC_MoveParent,
/*4541*/          OPC_CheckType, MVT::i32,
/*4543*/          OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*4545*/          OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*4554*/          OPC_EmitInteger, MVT::i32, 0, 
/*4557*/          OPC_EmitInteger, MVT::i32, 0, 
/*4560*/          OPC_EmitInteger, MVT::i32, 0, 
/*4563*/          OPC_EmitInteger, MVT::i32, 0, 
/*4566*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                      1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 1, 2, 4, 5, 6, 7, 
                  // Src: (or:i32 (and:i32 (or:i32 i32:i32:$x, i32:i32:$z), i32:i32:$y), (and:i32 i32:i32:$x, i32:i32:$z)) - Complexity = 12
                  // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*4580*/        /*Scope*/ 87, /*->4668*/
/*4581*/          OPC_CheckSame, 1,
/*4583*/          OPC_MoveParent,
/*4584*/          OPC_MoveChild, 1,
/*4586*/          OPC_CheckSame, 0,
/*4588*/          OPC_MoveParent,
/*4589*/          OPC_MoveParent,
/*4590*/          OPC_CheckType, MVT::i32,
/*4592*/          OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*4594*/          OPC_Scope, 35, /*->4631*/ // 2 children in Scope
/*4596*/            OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*4605*/            OPC_EmitInteger, MVT::i32, 0, 
/*4608*/            OPC_EmitInteger, MVT::i32, 0, 
/*4611*/            OPC_EmitInteger, MVT::i32, 0, 
/*4614*/            OPC_EmitInteger, MVT::i32, 0, 
/*4617*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                        1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 1, 2, 4, 5, 6, 7, 
                    // Src: (or:i32 (and:i32 (or:i32 i32:i32:$x, i32:i32:$z), i32:i32:$y), (and:i32 i32:i32:$z, i32:i32:$x)) - Complexity = 12
                    // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*4631*/          /*Scope*/ 35, /*->4667*/
/*4632*/            OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*4641*/            OPC_EmitInteger, MVT::i32, 0, 
/*4644*/            OPC_EmitInteger, MVT::i32, 0, 
/*4647*/            OPC_EmitInteger, MVT::i32, 0, 
/*4650*/            OPC_EmitInteger, MVT::i32, 0, 
/*4653*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                        1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 0, 2, 4, 5, 6, 7, 
                    // Src: (or:i32 (and:i32 (or:i32 i32:i32:$z, i32:i32:$x), i32:i32:$y), (and:i32 i32:i32:$x, i32:i32:$z)) - Complexity = 12
                    // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*4667*/          0, /*End of Scope*/
/*4668*/        /*Scope*/ 48, /*->4717*/
/*4669*/          OPC_CheckSame, 0,
/*4671*/          OPC_MoveParent,
/*4672*/          OPC_MoveChild, 1,
/*4674*/          OPC_CheckSame, 1,
/*4676*/          OPC_MoveParent,
/*4677*/          OPC_MoveParent,
/*4678*/          OPC_CheckType, MVT::i32,
/*4680*/          OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*4682*/          OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*4691*/          OPC_EmitInteger, MVT::i32, 0, 
/*4694*/          OPC_EmitInteger, MVT::i32, 0, 
/*4697*/          OPC_EmitInteger, MVT::i32, 0, 
/*4700*/          OPC_EmitInteger, MVT::i32, 0, 
/*4703*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                      1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 0, 2, 4, 5, 6, 7, 
                  // Src: (or:i32 (and:i32 (or:i32 i32:i32:$z, i32:i32:$x), i32:i32:$y), (and:i32 i32:i32:$z, i32:i32:$x)) - Complexity = 12
                  // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*4717*/        0, /*End of Scope*/
/*4718*/      /*Scope*/ 15|128,18/*2319*/, /*->7039*/
/*4720*/        OPC_RecordChild0, // #0 = $x
/*4721*/        OPC_Scope, 3|128,12/*1539*/, /*->6263*/ // 2 children in Scope
/*4724*/          OPC_RecordChild1, // #1 = $z
/*4725*/          OPC_MoveParent,
/*4726*/          OPC_MoveChild, 1,
/*4728*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*4731*/          OPC_Scope, 90|128,1/*218*/, /*->4952*/ // 4 children in Scope
/*4734*/            OPC_RecordChild0, // #2 = $y
/*4735*/            OPC_MoveChild, 1,
/*4737*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*4740*/            OPC_MoveChild, 0,
/*4742*/            OPC_CheckSame, 1,
/*4744*/            OPC_MoveParent,
/*4745*/            OPC_MoveChild, 1,
/*4747*/            OPC_CheckSame, 0,
/*4749*/            OPC_MoveParent,
/*4750*/            OPC_MoveParent,
/*4751*/            OPC_MoveParent,
/*4752*/            OPC_CheckType, MVT::i32,
/*4754*/            OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*4756*/            OPC_EmitInteger, MVT::i32, 0, 
/*4759*/            OPC_EmitInteger, MVT::i32, 0, 
/*4762*/            OPC_EmitInteger, MVT::i32, 0, 
/*4765*/            OPC_EmitInteger, MVT::i32, 0, 
/*4768*/            OPC_EmitInteger, MVT::i32, 1, 
/*4771*/            OPC_EmitInteger, MVT::i32, 0, 
/*4774*/            OPC_EmitInteger, MVT::i32, 0, 
/*4777*/            OPC_EmitInteger, MVT::i32, 0, 
/*4780*/            OPC_EmitInteger, MVT::i32, 0, 
/*4783*/            OPC_EmitInteger, MVT::i32, 0, 
/*4786*/            OPC_EmitInteger, MVT::i32, 0, 
/*4789*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4801*/            OPC_EmitInteger, MVT::i32, 0, 
/*4804*/            OPC_EmitInteger, MVT::i32, 0, 
/*4807*/            OPC_EmitInteger, MVT::i32, 0, 
/*4810*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4822*/            OPC_EmitInteger, MVT::i32, 1, 
/*4825*/            OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*4828*/            OPC_EmitInteger, MVT::i32, 0, 
/*4831*/            OPC_EmitInteger, MVT::i32, 0, 
/*4834*/            OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                        1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 0, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*4861*/            OPC_EmitInteger, MVT::i32, 0, 
/*4864*/            OPC_EmitInteger, MVT::i32, 0, 
/*4867*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4879*/            OPC_EmitInteger, MVT::i32, 0, 
/*4882*/            OPC_EmitInteger, MVT::i32, 0, 
/*4885*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4897*/            OPC_EmitInteger, MVT::i32, 0, 
/*4900*/            OPC_EmitInteger, MVT::i32, 0, 
/*4903*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4915*/            OPC_EmitInteger, MVT::i32, 1, 
/*4918*/            OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*4921*/            OPC_EmitInteger, MVT::i32, 0, 
/*4924*/            OPC_EmitInteger, MVT::i32, 0, 
/*4927*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                        1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                    // Src: (or:i32 (and:i32 i32:i32:$x, i32:i32:$z), (and:i32 i32:i32:$y, (or:i32 i32:i32:$z, i32:i32:$x))) - Complexity = 12
                    // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*4952*/          /*Scope*/ 51|128,3/*435*/, /*->5389*/
/*4954*/            OPC_MoveChild, 0,
/*4956*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*4959*/            OPC_MoveChild, 0,
/*4961*/            OPC_Scope, 83|128,1/*211*/, /*->5175*/ // 2 children in Scope
/*4964*/              OPC_CheckSame, 0,
/*4966*/              OPC_MoveParent,
/*4967*/              OPC_MoveChild, 1,
/*4969*/              OPC_CheckSame, 1,
/*4971*/              OPC_MoveParent,
/*4972*/              OPC_MoveParent,
/*4973*/              OPC_RecordChild1, // #2 = $y
/*4974*/              OPC_MoveParent,
/*4975*/              OPC_CheckType, MVT::i32,
/*4977*/              OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*4979*/              OPC_EmitInteger, MVT::i32, 0, 
/*4982*/              OPC_EmitInteger, MVT::i32, 0, 
/*4985*/              OPC_EmitInteger, MVT::i32, 0, 
/*4988*/              OPC_EmitInteger, MVT::i32, 0, 
/*4991*/              OPC_EmitInteger, MVT::i32, 1, 
/*4994*/              OPC_EmitInteger, MVT::i32, 0, 
/*4997*/              OPC_EmitInteger, MVT::i32, 0, 
/*5000*/              OPC_EmitInteger, MVT::i32, 0, 
/*5003*/              OPC_EmitInteger, MVT::i32, 0, 
/*5006*/              OPC_EmitInteger, MVT::i32, 0, 
/*5009*/              OPC_EmitInteger, MVT::i32, 0, 
/*5012*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5024*/              OPC_EmitInteger, MVT::i32, 0, 
/*5027*/              OPC_EmitInteger, MVT::i32, 0, 
/*5030*/              OPC_EmitInteger, MVT::i32, 0, 
/*5033*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5045*/              OPC_EmitInteger, MVT::i32, 1, 
/*5048*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*5051*/              OPC_EmitInteger, MVT::i32, 0, 
/*5054*/              OPC_EmitInteger, MVT::i32, 0, 
/*5057*/              OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 0, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*5084*/              OPC_EmitInteger, MVT::i32, 0, 
/*5087*/              OPC_EmitInteger, MVT::i32, 0, 
/*5090*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5102*/              OPC_EmitInteger, MVT::i32, 0, 
/*5105*/              OPC_EmitInteger, MVT::i32, 0, 
/*5108*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5120*/              OPC_EmitInteger, MVT::i32, 0, 
/*5123*/              OPC_EmitInteger, MVT::i32, 0, 
/*5126*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5138*/              OPC_EmitInteger, MVT::i32, 1, 
/*5141*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*5144*/              OPC_EmitInteger, MVT::i32, 0, 
/*5147*/              OPC_EmitInteger, MVT::i32, 0, 
/*5150*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                          1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                      // Src: (or:i32 (and:i32 i32:i32:$x, i32:i32:$z), (and:i32 (or:i32 i32:i32:$x, i32:i32:$z), i32:i32:$y)) - Complexity = 12
                      // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*5175*/            /*Scope*/ 83|128,1/*211*/, /*->5388*/
/*5177*/              OPC_CheckSame, 1,
/*5179*/              OPC_MoveParent,
/*5180*/              OPC_MoveChild, 1,
/*5182*/              OPC_CheckSame, 0,
/*5184*/              OPC_MoveParent,
/*5185*/              OPC_MoveParent,
/*5186*/              OPC_RecordChild1, // #2 = $y
/*5187*/              OPC_MoveParent,
/*5188*/              OPC_CheckType, MVT::i32,
/*5190*/              OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*5192*/              OPC_EmitInteger, MVT::i32, 0, 
/*5195*/              OPC_EmitInteger, MVT::i32, 0, 
/*5198*/              OPC_EmitInteger, MVT::i32, 0, 
/*5201*/              OPC_EmitInteger, MVT::i32, 0, 
/*5204*/              OPC_EmitInteger, MVT::i32, 1, 
/*5207*/              OPC_EmitInteger, MVT::i32, 0, 
/*5210*/              OPC_EmitInteger, MVT::i32, 0, 
/*5213*/              OPC_EmitInteger, MVT::i32, 0, 
/*5216*/              OPC_EmitInteger, MVT::i32, 0, 
/*5219*/              OPC_EmitInteger, MVT::i32, 0, 
/*5222*/              OPC_EmitInteger, MVT::i32, 0, 
/*5225*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5237*/              OPC_EmitInteger, MVT::i32, 0, 
/*5240*/              OPC_EmitInteger, MVT::i32, 0, 
/*5243*/              OPC_EmitInteger, MVT::i32, 0, 
/*5246*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5258*/              OPC_EmitInteger, MVT::i32, 1, 
/*5261*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*5264*/              OPC_EmitInteger, MVT::i32, 0, 
/*5267*/              OPC_EmitInteger, MVT::i32, 0, 
/*5270*/              OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 0, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*5297*/              OPC_EmitInteger, MVT::i32, 0, 
/*5300*/              OPC_EmitInteger, MVT::i32, 0, 
/*5303*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5315*/              OPC_EmitInteger, MVT::i32, 0, 
/*5318*/              OPC_EmitInteger, MVT::i32, 0, 
/*5321*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5333*/              OPC_EmitInteger, MVT::i32, 0, 
/*5336*/              OPC_EmitInteger, MVT::i32, 0, 
/*5339*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5351*/              OPC_EmitInteger, MVT::i32, 1, 
/*5354*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*5357*/              OPC_EmitInteger, MVT::i32, 0, 
/*5360*/              OPC_EmitInteger, MVT::i32, 0, 
/*5363*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                          1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                      // Src: (or:i32 (and:i32 i32:i32:$x, i32:i32:$z), (and:i32 (or:i32 i32:i32:$z, i32:i32:$x), i32:i32:$y)) - Complexity = 12
                      // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*5388*/            0, /*End of Scope*/
/*5389*/          /*Scope*/ 50|128,3/*434*/, /*->5825*/
/*5391*/            OPC_RecordChild0, // #2 = $y
/*5392*/            OPC_MoveChild, 1,
/*5394*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*5397*/            OPC_MoveChild, 0,
/*5399*/            OPC_Scope, 82|128,1/*210*/, /*->5612*/ // 2 children in Scope
/*5402*/              OPC_CheckSame, 1,
/*5404*/              OPC_MoveParent,
/*5405*/              OPC_MoveChild, 1,
/*5407*/              OPC_CheckSame, 0,
/*5409*/              OPC_MoveParent,
/*5410*/              OPC_MoveParent,
/*5411*/              OPC_MoveParent,
/*5412*/              OPC_CheckType, MVT::i32,
/*5414*/              OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*5416*/              OPC_EmitInteger, MVT::i32, 0, 
/*5419*/              OPC_EmitInteger, MVT::i32, 0, 
/*5422*/              OPC_EmitInteger, MVT::i32, 0, 
/*5425*/              OPC_EmitInteger, MVT::i32, 0, 
/*5428*/              OPC_EmitInteger, MVT::i32, 1, 
/*5431*/              OPC_EmitInteger, MVT::i32, 0, 
/*5434*/              OPC_EmitInteger, MVT::i32, 0, 
/*5437*/              OPC_EmitInteger, MVT::i32, 0, 
/*5440*/              OPC_EmitInteger, MVT::i32, 0, 
/*5443*/              OPC_EmitInteger, MVT::i32, 0, 
/*5446*/              OPC_EmitInteger, MVT::i32, 0, 
/*5449*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5461*/              OPC_EmitInteger, MVT::i32, 0, 
/*5464*/              OPC_EmitInteger, MVT::i32, 0, 
/*5467*/              OPC_EmitInteger, MVT::i32, 0, 
/*5470*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5482*/              OPC_EmitInteger, MVT::i32, 1, 
/*5485*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*5488*/              OPC_EmitInteger, MVT::i32, 0, 
/*5491*/              OPC_EmitInteger, MVT::i32, 0, 
/*5494*/              OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*5521*/              OPC_EmitInteger, MVT::i32, 0, 
/*5524*/              OPC_EmitInteger, MVT::i32, 0, 
/*5527*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5539*/              OPC_EmitInteger, MVT::i32, 0, 
/*5542*/              OPC_EmitInteger, MVT::i32, 0, 
/*5545*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5557*/              OPC_EmitInteger, MVT::i32, 0, 
/*5560*/              OPC_EmitInteger, MVT::i32, 0, 
/*5563*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5575*/              OPC_EmitInteger, MVT::i32, 1, 
/*5578*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*5581*/              OPC_EmitInteger, MVT::i32, 0, 
/*5584*/              OPC_EmitInteger, MVT::i32, 0, 
/*5587*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                          1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 0, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                      // Src: (or:i32 (and:i32 i32:i32:$z, i32:i32:$x), (and:i32 i32:i32:$y, (or:i32 i32:i32:$x, i32:i32:$z))) - Complexity = 12
                      // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*5612*/            /*Scope*/ 82|128,1/*210*/, /*->5824*/
/*5614*/              OPC_CheckSame, 0,
/*5616*/              OPC_MoveParent,
/*5617*/              OPC_MoveChild, 1,
/*5619*/              OPC_CheckSame, 1,
/*5621*/              OPC_MoveParent,
/*5622*/              OPC_MoveParent,
/*5623*/              OPC_MoveParent,
/*5624*/              OPC_CheckType, MVT::i32,
/*5626*/              OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*5628*/              OPC_EmitInteger, MVT::i32, 0, 
/*5631*/              OPC_EmitInteger, MVT::i32, 0, 
/*5634*/              OPC_EmitInteger, MVT::i32, 0, 
/*5637*/              OPC_EmitInteger, MVT::i32, 0, 
/*5640*/              OPC_EmitInteger, MVT::i32, 1, 
/*5643*/              OPC_EmitInteger, MVT::i32, 0, 
/*5646*/              OPC_EmitInteger, MVT::i32, 0, 
/*5649*/              OPC_EmitInteger, MVT::i32, 0, 
/*5652*/              OPC_EmitInteger, MVT::i32, 0, 
/*5655*/              OPC_EmitInteger, MVT::i32, 0, 
/*5658*/              OPC_EmitInteger, MVT::i32, 0, 
/*5661*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5673*/              OPC_EmitInteger, MVT::i32, 0, 
/*5676*/              OPC_EmitInteger, MVT::i32, 0, 
/*5679*/              OPC_EmitInteger, MVT::i32, 0, 
/*5682*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5694*/              OPC_EmitInteger, MVT::i32, 1, 
/*5697*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*5700*/              OPC_EmitInteger, MVT::i32, 0, 
/*5703*/              OPC_EmitInteger, MVT::i32, 0, 
/*5706*/              OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*5733*/              OPC_EmitInteger, MVT::i32, 0, 
/*5736*/              OPC_EmitInteger, MVT::i32, 0, 
/*5739*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5751*/              OPC_EmitInteger, MVT::i32, 0, 
/*5754*/              OPC_EmitInteger, MVT::i32, 0, 
/*5757*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5769*/              OPC_EmitInteger, MVT::i32, 0, 
/*5772*/              OPC_EmitInteger, MVT::i32, 0, 
/*5775*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5787*/              OPC_EmitInteger, MVT::i32, 1, 
/*5790*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*5793*/              OPC_EmitInteger, MVT::i32, 0, 
/*5796*/              OPC_EmitInteger, MVT::i32, 0, 
/*5799*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                          1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 0, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                      // Src: (or:i32 (and:i32 i32:i32:$z, i32:i32:$x), (and:i32 i32:i32:$y, (or:i32 i32:i32:$z, i32:i32:$x))) - Complexity = 12
                      // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*5824*/            0, /*End of Scope*/
/*5825*/          /*Scope*/ 51|128,3/*435*/, /*->6262*/
/*5827*/            OPC_MoveChild, 0,
/*5829*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*5832*/            OPC_MoveChild, 0,
/*5834*/            OPC_Scope, 83|128,1/*211*/, /*->6048*/ // 2 children in Scope
/*5837*/              OPC_CheckSame, 1,
/*5839*/              OPC_MoveParent,
/*5840*/              OPC_MoveChild, 1,
/*5842*/              OPC_CheckSame, 0,
/*5844*/              OPC_MoveParent,
/*5845*/              OPC_MoveParent,
/*5846*/              OPC_RecordChild1, // #2 = $y
/*5847*/              OPC_MoveParent,
/*5848*/              OPC_CheckType, MVT::i32,
/*5850*/              OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*5852*/              OPC_EmitInteger, MVT::i32, 0, 
/*5855*/              OPC_EmitInteger, MVT::i32, 0, 
/*5858*/              OPC_EmitInteger, MVT::i32, 0, 
/*5861*/              OPC_EmitInteger, MVT::i32, 0, 
/*5864*/              OPC_EmitInteger, MVT::i32, 1, 
/*5867*/              OPC_EmitInteger, MVT::i32, 0, 
/*5870*/              OPC_EmitInteger, MVT::i32, 0, 
/*5873*/              OPC_EmitInteger, MVT::i32, 0, 
/*5876*/              OPC_EmitInteger, MVT::i32, 0, 
/*5879*/              OPC_EmitInteger, MVT::i32, 0, 
/*5882*/              OPC_EmitInteger, MVT::i32, 0, 
/*5885*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5897*/              OPC_EmitInteger, MVT::i32, 0, 
/*5900*/              OPC_EmitInteger, MVT::i32, 0, 
/*5903*/              OPC_EmitInteger, MVT::i32, 0, 
/*5906*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5918*/              OPC_EmitInteger, MVT::i32, 1, 
/*5921*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*5924*/              OPC_EmitInteger, MVT::i32, 0, 
/*5927*/              OPC_EmitInteger, MVT::i32, 0, 
/*5930*/              OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*5957*/              OPC_EmitInteger, MVT::i32, 0, 
/*5960*/              OPC_EmitInteger, MVT::i32, 0, 
/*5963*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5975*/              OPC_EmitInteger, MVT::i32, 0, 
/*5978*/              OPC_EmitInteger, MVT::i32, 0, 
/*5981*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5993*/              OPC_EmitInteger, MVT::i32, 0, 
/*5996*/              OPC_EmitInteger, MVT::i32, 0, 
/*5999*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6011*/              OPC_EmitInteger, MVT::i32, 1, 
/*6014*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*6017*/              OPC_EmitInteger, MVT::i32, 0, 
/*6020*/              OPC_EmitInteger, MVT::i32, 0, 
/*6023*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                          1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 0, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                      // Src: (or:i32 (and:i32 i32:i32:$z, i32:i32:$x), (and:i32 (or:i32 i32:i32:$x, i32:i32:$z), i32:i32:$y)) - Complexity = 12
                      // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*6048*/            /*Scope*/ 83|128,1/*211*/, /*->6261*/
/*6050*/              OPC_CheckSame, 0,
/*6052*/              OPC_MoveParent,
/*6053*/              OPC_MoveChild, 1,
/*6055*/              OPC_CheckSame, 1,
/*6057*/              OPC_MoveParent,
/*6058*/              OPC_MoveParent,
/*6059*/              OPC_RecordChild1, // #2 = $y
/*6060*/              OPC_MoveParent,
/*6061*/              OPC_CheckType, MVT::i32,
/*6063*/              OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*6065*/              OPC_EmitInteger, MVT::i32, 0, 
/*6068*/              OPC_EmitInteger, MVT::i32, 0, 
/*6071*/              OPC_EmitInteger, MVT::i32, 0, 
/*6074*/              OPC_EmitInteger, MVT::i32, 0, 
/*6077*/              OPC_EmitInteger, MVT::i32, 1, 
/*6080*/              OPC_EmitInteger, MVT::i32, 0, 
/*6083*/              OPC_EmitInteger, MVT::i32, 0, 
/*6086*/              OPC_EmitInteger, MVT::i32, 0, 
/*6089*/              OPC_EmitInteger, MVT::i32, 0, 
/*6092*/              OPC_EmitInteger, MVT::i32, 0, 
/*6095*/              OPC_EmitInteger, MVT::i32, 0, 
/*6098*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6110*/              OPC_EmitInteger, MVT::i32, 0, 
/*6113*/              OPC_EmitInteger, MVT::i32, 0, 
/*6116*/              OPC_EmitInteger, MVT::i32, 0, 
/*6119*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6131*/              OPC_EmitInteger, MVT::i32, 1, 
/*6134*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*6137*/              OPC_EmitInteger, MVT::i32, 0, 
/*6140*/              OPC_EmitInteger, MVT::i32, 0, 
/*6143*/              OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*6170*/              OPC_EmitInteger, MVT::i32, 0, 
/*6173*/              OPC_EmitInteger, MVT::i32, 0, 
/*6176*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6188*/              OPC_EmitInteger, MVT::i32, 0, 
/*6191*/              OPC_EmitInteger, MVT::i32, 0, 
/*6194*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6206*/              OPC_EmitInteger, MVT::i32, 0, 
/*6209*/              OPC_EmitInteger, MVT::i32, 0, 
/*6212*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6224*/              OPC_EmitInteger, MVT::i32, 1, 
/*6227*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*6230*/              OPC_EmitInteger, MVT::i32, 0, 
/*6233*/              OPC_EmitInteger, MVT::i32, 0, 
/*6236*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                          1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 0, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                      // Src: (or:i32 (and:i32 i32:i32:$z, i32:i32:$x), (and:i32 (or:i32 i32:i32:$z, i32:i32:$x), i32:i32:$y)) - Complexity = 12
                      // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*6261*/            0, /*End of Scope*/
/*6262*/          0, /*End of Scope*/
/*6263*/        /*Scope*/ 5|128,6/*773*/, /*->7038*/
/*6265*/          OPC_MoveChild, 1,
/*6267*/          OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*6270*/          OPC_RecordChild0, // #1 = $x
/*6271*/          OPC_RecordChild1, // #2 = $z
/*6272*/          OPC_MoveParent,
/*6273*/          OPC_MoveParent,
/*6274*/          OPC_MoveChild, 1,
/*6276*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*6279*/          OPC_MoveChild, 0,
/*6281*/          OPC_Scope, 81|128,1/*209*/, /*->6493*/ // 3 children in Scope
/*6284*/            OPC_CheckSame, 1,
/*6286*/            OPC_MoveParent,
/*6287*/            OPC_MoveChild, 1,
/*6289*/            OPC_CheckSame, 2,
/*6291*/            OPC_MoveParent,
/*6292*/            OPC_MoveParent,
/*6293*/            OPC_CheckType, MVT::i32,
/*6295*/            OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*6297*/            OPC_EmitInteger, MVT::i32, 0, 
/*6300*/            OPC_EmitInteger, MVT::i32, 0, 
/*6303*/            OPC_EmitInteger, MVT::i32, 0, 
/*6306*/            OPC_EmitInteger, MVT::i32, 0, 
/*6309*/            OPC_EmitInteger, MVT::i32, 1, 
/*6312*/            OPC_EmitInteger, MVT::i32, 0, 
/*6315*/            OPC_EmitInteger, MVT::i32, 0, 
/*6318*/            OPC_EmitInteger, MVT::i32, 0, 
/*6321*/            OPC_EmitInteger, MVT::i32, 0, 
/*6324*/            OPC_EmitInteger, MVT::i32, 0, 
/*6327*/            OPC_EmitInteger, MVT::i32, 0, 
/*6330*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6342*/            OPC_EmitInteger, MVT::i32, 0, 
/*6345*/            OPC_EmitInteger, MVT::i32, 0, 
/*6348*/            OPC_EmitInteger, MVT::i32, 0, 
/*6351*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6363*/            OPC_EmitInteger, MVT::i32, 1, 
/*6366*/            OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*6369*/            OPC_EmitInteger, MVT::i32, 0, 
/*6372*/            OPC_EmitInteger, MVT::i32, 0, 
/*6375*/            OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                        1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*6402*/            OPC_EmitInteger, MVT::i32, 0, 
/*6405*/            OPC_EmitInteger, MVT::i32, 0, 
/*6408*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6420*/            OPC_EmitInteger, MVT::i32, 0, 
/*6423*/            OPC_EmitInteger, MVT::i32, 0, 
/*6426*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6438*/            OPC_EmitInteger, MVT::i32, 0, 
/*6441*/            OPC_EmitInteger, MVT::i32, 0, 
/*6444*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6456*/            OPC_EmitInteger, MVT::i32, 1, 
/*6459*/            OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*6462*/            OPC_EmitInteger, MVT::i32, 0, 
/*6465*/            OPC_EmitInteger, MVT::i32, 0, 
/*6468*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                        1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 2, 27, 28, 29, 0, 30, 31, 32, 33, 34, 35, 36, 
                    // Src: (or:i32 (and:i32 i32:i32:$y, (or:i32 i32:i32:$x, i32:i32:$z)), (and:i32 i32:i32:$x, i32:i32:$z)) - Complexity = 12
                    // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*6493*/          /*Scope*/ 75|128,2/*331*/, /*->6826*/
/*6495*/            OPC_CheckSame, 2,
/*6497*/            OPC_MoveParent,
/*6498*/            OPC_MoveChild, 1,
/*6500*/            OPC_CheckSame, 1,
/*6502*/            OPC_MoveParent,
/*6503*/            OPC_MoveParent,
/*6504*/            OPC_CheckType, MVT::i32,
/*6506*/            OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*6508*/            OPC_EmitInteger, MVT::i32, 0, 
/*6511*/            OPC_EmitInteger, MVT::i32, 0, 
/*6514*/            OPC_EmitInteger, MVT::i32, 0, 
/*6517*/            OPC_EmitInteger, MVT::i32, 0, 
/*6520*/            OPC_EmitInteger, MVT::i32, 1, 
/*6523*/            OPC_EmitInteger, MVT::i32, 0, 
/*6526*/            OPC_EmitInteger, MVT::i32, 0, 
/*6529*/            OPC_EmitInteger, MVT::i32, 0, 
/*6532*/            OPC_EmitInteger, MVT::i32, 0, 
/*6535*/            OPC_EmitInteger, MVT::i32, 0, 
/*6538*/            OPC_EmitInteger, MVT::i32, 0, 
/*6541*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6553*/            OPC_EmitInteger, MVT::i32, 0, 
/*6556*/            OPC_EmitInteger, MVT::i32, 0, 
/*6559*/            OPC_EmitInteger, MVT::i32, 0, 
/*6562*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6574*/            OPC_EmitInteger, MVT::i32, 1, 
/*6577*/            OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*6580*/            OPC_EmitInteger, MVT::i32, 0, 
/*6583*/            OPC_EmitInteger, MVT::i32, 0, 
/*6586*/            OPC_Scope, 118, /*->6706*/ // 2 children in Scope
/*6588*/              OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*6615*/              OPC_EmitInteger, MVT::i32, 0, 
/*6618*/              OPC_EmitInteger, MVT::i32, 0, 
/*6621*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6633*/              OPC_EmitInteger, MVT::i32, 0, 
/*6636*/              OPC_EmitInteger, MVT::i32, 0, 
/*6639*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6651*/              OPC_EmitInteger, MVT::i32, 0, 
/*6654*/              OPC_EmitInteger, MVT::i32, 0, 
/*6657*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6669*/              OPC_EmitInteger, MVT::i32, 1, 
/*6672*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*6675*/              OPC_EmitInteger, MVT::i32, 0, 
/*6678*/              OPC_EmitInteger, MVT::i32, 0, 
/*6681*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                          1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 2, 27, 28, 29, 0, 30, 31, 32, 33, 34, 35, 36, 
                      // Src: (or:i32 (and:i32 i32:i32:$y, (or:i32 i32:i32:$x, i32:i32:$z)), (and:i32 i32:i32:$z, i32:i32:$x)) - Complexity = 12
                      // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*6706*/            /*Scope*/ 118, /*->6825*/
/*6707*/              OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 2, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*6734*/              OPC_EmitInteger, MVT::i32, 0, 
/*6737*/              OPC_EmitInteger, MVT::i32, 0, 
/*6740*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6752*/              OPC_EmitInteger, MVT::i32, 0, 
/*6755*/              OPC_EmitInteger, MVT::i32, 0, 
/*6758*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6770*/              OPC_EmitInteger, MVT::i32, 0, 
/*6773*/              OPC_EmitInteger, MVT::i32, 0, 
/*6776*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6788*/              OPC_EmitInteger, MVT::i32, 1, 
/*6791*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*6794*/              OPC_EmitInteger, MVT::i32, 0, 
/*6797*/              OPC_EmitInteger, MVT::i32, 0, 
/*6800*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                          1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 0, 30, 31, 32, 33, 34, 35, 36, 
                      // Src: (or:i32 (and:i32 i32:i32:$y, (or:i32 i32:i32:$z, i32:i32:$x)), (and:i32 i32:i32:$x, i32:i32:$z)) - Complexity = 12
                      // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*6825*/            0, /*End of Scope*/
/*6826*/          /*Scope*/ 81|128,1/*209*/, /*->7037*/
/*6828*/            OPC_CheckSame, 1,
/*6830*/            OPC_MoveParent,
/*6831*/            OPC_MoveChild, 1,
/*6833*/            OPC_CheckSame, 2,
/*6835*/            OPC_MoveParent,
/*6836*/            OPC_MoveParent,
/*6837*/            OPC_CheckType, MVT::i32,
/*6839*/            OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*6841*/            OPC_EmitInteger, MVT::i32, 0, 
/*6844*/            OPC_EmitInteger, MVT::i32, 0, 
/*6847*/            OPC_EmitInteger, MVT::i32, 0, 
/*6850*/            OPC_EmitInteger, MVT::i32, 0, 
/*6853*/            OPC_EmitInteger, MVT::i32, 1, 
/*6856*/            OPC_EmitInteger, MVT::i32, 0, 
/*6859*/            OPC_EmitInteger, MVT::i32, 0, 
/*6862*/            OPC_EmitInteger, MVT::i32, 0, 
/*6865*/            OPC_EmitInteger, MVT::i32, 0, 
/*6868*/            OPC_EmitInteger, MVT::i32, 0, 
/*6871*/            OPC_EmitInteger, MVT::i32, 0, 
/*6874*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6886*/            OPC_EmitInteger, MVT::i32, 0, 
/*6889*/            OPC_EmitInteger, MVT::i32, 0, 
/*6892*/            OPC_EmitInteger, MVT::i32, 0, 
/*6895*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6907*/            OPC_EmitInteger, MVT::i32, 1, 
/*6910*/            OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*6913*/            OPC_EmitInteger, MVT::i32, 0, 
/*6916*/            OPC_EmitInteger, MVT::i32, 0, 
/*6919*/            OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                        1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 2, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*6946*/            OPC_EmitInteger, MVT::i32, 0, 
/*6949*/            OPC_EmitInteger, MVT::i32, 0, 
/*6952*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6964*/            OPC_EmitInteger, MVT::i32, 0, 
/*6967*/            OPC_EmitInteger, MVT::i32, 0, 
/*6970*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6982*/            OPC_EmitInteger, MVT::i32, 0, 
/*6985*/            OPC_EmitInteger, MVT::i32, 0, 
/*6988*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7000*/            OPC_EmitInteger, MVT::i32, 1, 
/*7003*/            OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*7006*/            OPC_EmitInteger, MVT::i32, 0, 
/*7009*/            OPC_EmitInteger, MVT::i32, 0, 
/*7012*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                        1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 0, 30, 31, 32, 33, 34, 35, 36, 
                    // Src: (or:i32 (and:i32 i32:i32:$y, (or:i32 i32:i32:$z, i32:i32:$x)), (and:i32 i32:i32:$z, i32:i32:$x)) - Complexity = 12
                    // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*7037*/          0, /*End of Scope*/
/*7038*/        0, /*End of Scope*/
/*7039*/      /*Scope*/ 6|128,6/*774*/, /*->7815*/
/*7041*/        OPC_MoveChild, 0,
/*7043*/        OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*7046*/        OPC_RecordChild0, // #0 = $x
/*7047*/        OPC_RecordChild1, // #1 = $z
/*7048*/        OPC_MoveParent,
/*7049*/        OPC_RecordChild1, // #2 = $y
/*7050*/        OPC_MoveParent,
/*7051*/        OPC_MoveChild, 1,
/*7053*/        OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*7056*/        OPC_MoveChild, 0,
/*7058*/        OPC_Scope, 81|128,1/*209*/, /*->7270*/ // 3 children in Scope
/*7061*/          OPC_CheckSame, 0,
/*7063*/          OPC_MoveParent,
/*7064*/          OPC_MoveChild, 1,
/*7066*/          OPC_CheckSame, 1,
/*7068*/          OPC_MoveParent,
/*7069*/          OPC_MoveParent,
/*7070*/          OPC_CheckType, MVT::i32,
/*7072*/          OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*7074*/          OPC_EmitInteger, MVT::i32, 0, 
/*7077*/          OPC_EmitInteger, MVT::i32, 0, 
/*7080*/          OPC_EmitInteger, MVT::i32, 0, 
/*7083*/          OPC_EmitInteger, MVT::i32, 0, 
/*7086*/          OPC_EmitInteger, MVT::i32, 1, 
/*7089*/          OPC_EmitInteger, MVT::i32, 0, 
/*7092*/          OPC_EmitInteger, MVT::i32, 0, 
/*7095*/          OPC_EmitInteger, MVT::i32, 0, 
/*7098*/          OPC_EmitInteger, MVT::i32, 0, 
/*7101*/          OPC_EmitInteger, MVT::i32, 0, 
/*7104*/          OPC_EmitInteger, MVT::i32, 0, 
/*7107*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7119*/          OPC_EmitInteger, MVT::i32, 0, 
/*7122*/          OPC_EmitInteger, MVT::i32, 0, 
/*7125*/          OPC_EmitInteger, MVT::i32, 0, 
/*7128*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7140*/          OPC_EmitInteger, MVT::i32, 1, 
/*7143*/          OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*7146*/          OPC_EmitInteger, MVT::i32, 0, 
/*7149*/          OPC_EmitInteger, MVT::i32, 0, 
/*7152*/          OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 0, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*7179*/          OPC_EmitInteger, MVT::i32, 0, 
/*7182*/          OPC_EmitInteger, MVT::i32, 0, 
/*7185*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7197*/          OPC_EmitInteger, MVT::i32, 0, 
/*7200*/          OPC_EmitInteger, MVT::i32, 0, 
/*7203*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7215*/          OPC_EmitInteger, MVT::i32, 0, 
/*7218*/          OPC_EmitInteger, MVT::i32, 0, 
/*7221*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7233*/          OPC_EmitInteger, MVT::i32, 1, 
/*7236*/          OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*7239*/          OPC_EmitInteger, MVT::i32, 0, 
/*7242*/          OPC_EmitInteger, MVT::i32, 0, 
/*7245*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                      1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                  // Src: (or:i32 (and:i32 (or:i32 i32:i32:$x, i32:i32:$z), i32:i32:$y), (and:i32 i32:i32:$x, i32:i32:$z)) - Complexity = 12
                  // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*7270*/        /*Scope*/ 75|128,2/*331*/, /*->7603*/
/*7272*/          OPC_CheckSame, 1,
/*7274*/          OPC_MoveParent,
/*7275*/          OPC_MoveChild, 1,
/*7277*/          OPC_CheckSame, 0,
/*7279*/          OPC_MoveParent,
/*7280*/          OPC_MoveParent,
/*7281*/          OPC_CheckType, MVT::i32,
/*7283*/          OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*7285*/          OPC_EmitInteger, MVT::i32, 0, 
/*7288*/          OPC_EmitInteger, MVT::i32, 0, 
/*7291*/          OPC_EmitInteger, MVT::i32, 0, 
/*7294*/          OPC_EmitInteger, MVT::i32, 0, 
/*7297*/          OPC_EmitInteger, MVT::i32, 1, 
/*7300*/          OPC_EmitInteger, MVT::i32, 0, 
/*7303*/          OPC_EmitInteger, MVT::i32, 0, 
/*7306*/          OPC_EmitInteger, MVT::i32, 0, 
/*7309*/          OPC_EmitInteger, MVT::i32, 0, 
/*7312*/          OPC_EmitInteger, MVT::i32, 0, 
/*7315*/          OPC_EmitInteger, MVT::i32, 0, 
/*7318*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7330*/          OPC_EmitInteger, MVT::i32, 0, 
/*7333*/          OPC_EmitInteger, MVT::i32, 0, 
/*7336*/          OPC_EmitInteger, MVT::i32, 0, 
/*7339*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7351*/          OPC_EmitInteger, MVT::i32, 1, 
/*7354*/          OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*7357*/          OPC_EmitInteger, MVT::i32, 0, 
/*7360*/          OPC_EmitInteger, MVT::i32, 0, 
/*7363*/          OPC_Scope, 118, /*->7483*/ // 2 children in Scope
/*7365*/            OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                        1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 0, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*7392*/            OPC_EmitInteger, MVT::i32, 0, 
/*7395*/            OPC_EmitInteger, MVT::i32, 0, 
/*7398*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7410*/            OPC_EmitInteger, MVT::i32, 0, 
/*7413*/            OPC_EmitInteger, MVT::i32, 0, 
/*7416*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7428*/            OPC_EmitInteger, MVT::i32, 0, 
/*7431*/            OPC_EmitInteger, MVT::i32, 0, 
/*7434*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7446*/            OPC_EmitInteger, MVT::i32, 1, 
/*7449*/            OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*7452*/            OPC_EmitInteger, MVT::i32, 0, 
/*7455*/            OPC_EmitInteger, MVT::i32, 0, 
/*7458*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                        1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                    // Src: (or:i32 (and:i32 (or:i32 i32:i32:$x, i32:i32:$z), i32:i32:$y), (and:i32 i32:i32:$z, i32:i32:$x)) - Complexity = 12
                    // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*7483*/          /*Scope*/ 118, /*->7602*/
/*7484*/            OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                        1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*7511*/            OPC_EmitInteger, MVT::i32, 0, 
/*7514*/            OPC_EmitInteger, MVT::i32, 0, 
/*7517*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7529*/            OPC_EmitInteger, MVT::i32, 0, 
/*7532*/            OPC_EmitInteger, MVT::i32, 0, 
/*7535*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7547*/            OPC_EmitInteger, MVT::i32, 0, 
/*7550*/            OPC_EmitInteger, MVT::i32, 0, 
/*7553*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7565*/            OPC_EmitInteger, MVT::i32, 1, 
/*7568*/            OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*7571*/            OPC_EmitInteger, MVT::i32, 0, 
/*7574*/            OPC_EmitInteger, MVT::i32, 0, 
/*7577*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                        1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 0, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                    // Src: (or:i32 (and:i32 (or:i32 i32:i32:$z, i32:i32:$x), i32:i32:$y), (and:i32 i32:i32:$x, i32:i32:$z)) - Complexity = 12
                    // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*7602*/          0, /*End of Scope*/
/*7603*/        /*Scope*/ 81|128,1/*209*/, /*->7814*/
/*7605*/          OPC_CheckSame, 0,
/*7607*/          OPC_MoveParent,
/*7608*/          OPC_MoveChild, 1,
/*7610*/          OPC_CheckSame, 1,
/*7612*/          OPC_MoveParent,
/*7613*/          OPC_MoveParent,
/*7614*/          OPC_CheckType, MVT::i32,
/*7616*/          OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*7618*/          OPC_EmitInteger, MVT::i32, 0, 
/*7621*/          OPC_EmitInteger, MVT::i32, 0, 
/*7624*/          OPC_EmitInteger, MVT::i32, 0, 
/*7627*/          OPC_EmitInteger, MVT::i32, 0, 
/*7630*/          OPC_EmitInteger, MVT::i32, 1, 
/*7633*/          OPC_EmitInteger, MVT::i32, 0, 
/*7636*/          OPC_EmitInteger, MVT::i32, 0, 
/*7639*/          OPC_EmitInteger, MVT::i32, 0, 
/*7642*/          OPC_EmitInteger, MVT::i32, 0, 
/*7645*/          OPC_EmitInteger, MVT::i32, 0, 
/*7648*/          OPC_EmitInteger, MVT::i32, 0, 
/*7651*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7663*/          OPC_EmitInteger, MVT::i32, 0, 
/*7666*/          OPC_EmitInteger, MVT::i32, 0, 
/*7669*/          OPC_EmitInteger, MVT::i32, 0, 
/*7672*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7684*/          OPC_EmitInteger, MVT::i32, 1, 
/*7687*/          OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*7690*/          OPC_EmitInteger, MVT::i32, 0, 
/*7693*/          OPC_EmitInteger, MVT::i32, 0, 
/*7696*/          OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*7723*/          OPC_EmitInteger, MVT::i32, 0, 
/*7726*/          OPC_EmitInteger, MVT::i32, 0, 
/*7729*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7741*/          OPC_EmitInteger, MVT::i32, 0, 
/*7744*/          OPC_EmitInteger, MVT::i32, 0, 
/*7747*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7759*/          OPC_EmitInteger, MVT::i32, 0, 
/*7762*/          OPC_EmitInteger, MVT::i32, 0, 
/*7765*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7777*/          OPC_EmitInteger, MVT::i32, 1, 
/*7780*/          OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*7783*/          OPC_EmitInteger, MVT::i32, 0, 
/*7786*/          OPC_EmitInteger, MVT::i32, 0, 
/*7789*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                      1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 0, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                  // Src: (or:i32 (and:i32 (or:i32 i32:i32:$z, i32:i32:$x), i32:i32:$y), (and:i32 i32:i32:$z, i32:i32:$x)) - Complexity = 12
                  // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*7814*/        0, /*End of Scope*/
/*7815*/      0, /*End of Scope*/
/*7816*/    /*Scope*/ 7|128,1/*135*/, /*->7953*/
/*7818*/      OPC_RecordChild0, // #0 = $src0
/*7819*/      OPC_RecordChild1, // #1 = $src1
/*7820*/      OPC_SwitchType /*2 cases */, 116,  MVT::i32,// ->7939
/*7823*/        OPC_Scope, 101, /*->7926*/ // 2 children in Scope
/*7825*/          OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*7827*/          OPC_EmitInteger, MVT::i32, 0, 
/*7830*/          OPC_EmitInteger, MVT::i32, 0, 
/*7833*/          OPC_EmitInteger, MVT::i32, 1, 
/*7836*/          OPC_EmitInteger, MVT::i32, 0, 
/*7839*/          OPC_EmitInteger, MVT::i32, 0, 
/*7842*/          OPC_EmitInteger, MVT::i32, 0, 
/*7845*/          OPC_EmitInteger, MVT::i32, 0, 
/*7848*/          OPC_EmitInteger, MVT::i32, 0, 
/*7851*/          OPC_EmitInteger, MVT::i32, 0, 
/*7854*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7866*/          OPC_EmitInteger, MVT::i32, 0, 
/*7869*/          OPC_EmitInteger, MVT::i32, 0, 
/*7872*/          OPC_EmitInteger, MVT::i32, 0, 
/*7875*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7887*/          OPC_EmitInteger, MVT::i32, 1, 
/*7890*/          OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*7893*/          OPC_EmitInteger, MVT::i32, 0, 
/*7896*/          OPC_EmitInteger, MVT::i32, 0, 
/*7899*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::OR_INT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (or:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
                  // Dst: (OR_INT:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*7926*/        /*Scope*/ 11, /*->7938*/
/*7927*/          OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*7929*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_OR_B32_e32), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (or:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
                  // Dst: (V_OR_B32_e32:i32 i32:i32:$src0, i32:i32:$src1)
/*7938*/        0, /*End of Scope*/
              /*SwitchType*/ 11,  MVT::i1,// ->7952
/*7941*/        OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*7943*/        OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_OR_B64), 0,
                    1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
                // Src: (or:i1 i1:i1:$src0, i1:i1:$src1) - Complexity = 3
                // Dst: (S_OR_B64:i1 ?:i1:$src0, ?:i1:$src1)
              0, // EndSwitchType
/*7953*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 85|128,4/*597*/,  TARGET_VAL(ISD::MUL),// ->8555
/*7958*/    OPC_RecordChild0, // #0 = $src0
/*7959*/    OPC_RecordChild1, // #1 = $src1
/*7960*/    OPC_CheckType, MVT::i32,
/*7962*/    OPC_Scope, 107, /*->8071*/ // 7 children in Scope
/*7964*/      OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*7966*/      OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectU24:$src0 #2
/*7969*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectU24:$src1 #3
/*7972*/      OPC_EmitInteger, MVT::i32, 0, 
/*7975*/      OPC_EmitInteger, MVT::i32, 0, 
/*7978*/      OPC_EmitInteger, MVT::i32, 1, 
/*7981*/      OPC_EmitInteger, MVT::i32, 0, 
/*7984*/      OPC_EmitInteger, MVT::i32, 0, 
/*7987*/      OPC_EmitInteger, MVT::i32, 0, 
/*7990*/      OPC_EmitInteger, MVT::i32, 0, 
/*7993*/      OPC_EmitInteger, MVT::i32, 0, 
/*7996*/      OPC_EmitInteger, MVT::i32, 0, 
/*7999*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8011*/      OPC_EmitInteger, MVT::i32, 0, 
/*8014*/      OPC_EmitInteger, MVT::i32, 0, 
/*8017*/      OPC_EmitInteger, MVT::i32, 0, 
/*8020*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8032*/      OPC_EmitInteger, MVT::i32, 1, 
/*8035*/      OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*8038*/      OPC_EmitInteger, MVT::i32, 0, 
/*8041*/      OPC_EmitInteger, MVT::i32, 0, 
/*8044*/      OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MUL_UINT24_eg), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 4, 5, 6, 7, 8, 9, 2, 10, 11, 12, 13, 3, 14, 15, 16, 17, 18, 19, 20, 21, 
              // Src: (mul:i32 U24:i32:$src0, U24:i32:$src1) - Complexity = 15
              // Dst: (MUL_UINT24_eg:i32 U24:i32:$src0, U24:i32:$src1)
/*8071*/    /*Scope*/ 107, /*->8179*/
/*8072*/      OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*8074*/      OPC_CheckComplexPat, /*CP*/1, /*#*/0, // SelectI24:$src0 #2
/*8077*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectI24:$src1 #3
/*8080*/      OPC_EmitInteger, MVT::i32, 0, 
/*8083*/      OPC_EmitInteger, MVT::i32, 0, 
/*8086*/      OPC_EmitInteger, MVT::i32, 1, 
/*8089*/      OPC_EmitInteger, MVT::i32, 0, 
/*8092*/      OPC_EmitInteger, MVT::i32, 0, 
/*8095*/      OPC_EmitInteger, MVT::i32, 0, 
/*8098*/      OPC_EmitInteger, MVT::i32, 0, 
/*8101*/      OPC_EmitInteger, MVT::i32, 0, 
/*8104*/      OPC_EmitInteger, MVT::i32, 0, 
/*8107*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8119*/      OPC_EmitInteger, MVT::i32, 0, 
/*8122*/      OPC_EmitInteger, MVT::i32, 0, 
/*8125*/      OPC_EmitInteger, MVT::i32, 0, 
/*8128*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8140*/      OPC_EmitInteger, MVT::i32, 1, 
/*8143*/      OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*8146*/      OPC_EmitInteger, MVT::i32, 0, 
/*8149*/      OPC_EmitInteger, MVT::i32, 0, 
/*8152*/      OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MUL_INT24_cm), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 4, 5, 6, 7, 8, 9, 2, 10, 11, 12, 13, 3, 14, 15, 16, 17, 18, 19, 20, 21, 
              // Src: (mul:i32 I24:i32:$src0, I24:i32:$src1) - Complexity = 15
              // Dst: (MUL_INT24_cm:i32 I24:i32:$src0, I24:i32:$src1)
/*8179*/    /*Scope*/ 36, /*->8216*/
/*8180*/      OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*8182*/      OPC_Scope, 15, /*->8199*/ // 2 children in Scope
/*8184*/        OPC_CheckComplexPat, /*CP*/1, /*#*/0, // SelectI24:$src0 #2
/*8187*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectI24:$src1 #3
/*8190*/        OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MUL_I32_I24_e32), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (mul:i32 I24:i32:$src0, I24:i32:$src1) - Complexity = 15
                // Dst: (V_MUL_I32_I24_e32:i32 I24:i32:$src0, I24:i32:$src1)
/*8199*/      /*Scope*/ 15, /*->8215*/
/*8200*/        OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectU24:$src0 #2
/*8203*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectU24:$src1 #3
/*8206*/        OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MUL_U32_U24_e32), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (mul:i32 U24:i32:$src0, U24:i32:$src1) - Complexity = 15
                // Dst: (V_MUL_U32_U24_e32:i32 U24:i32:$src0, U24:i32:$src1)
/*8215*/      0, /*End of Scope*/
/*8216*/    /*Scope*/ 101, /*->8318*/
/*8217*/      OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*8219*/      OPC_EmitInteger, MVT::i32, 0, 
/*8222*/      OPC_EmitInteger, MVT::i32, 0, 
/*8225*/      OPC_EmitInteger, MVT::i32, 1, 
/*8228*/      OPC_EmitInteger, MVT::i32, 0, 
/*8231*/      OPC_EmitInteger, MVT::i32, 0, 
/*8234*/      OPC_EmitInteger, MVT::i32, 0, 
/*8237*/      OPC_EmitInteger, MVT::i32, 0, 
/*8240*/      OPC_EmitInteger, MVT::i32, 0, 
/*8243*/      OPC_EmitInteger, MVT::i32, 0, 
/*8246*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8258*/      OPC_EmitInteger, MVT::i32, 0, 
/*8261*/      OPC_EmitInteger, MVT::i32, 0, 
/*8264*/      OPC_EmitInteger, MVT::i32, 0, 
/*8267*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8279*/      OPC_EmitInteger, MVT::i32, 1, 
/*8282*/      OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*8285*/      OPC_EmitInteger, MVT::i32, 0, 
/*8288*/      OPC_EmitInteger, MVT::i32, 0, 
/*8291*/      OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULLO_INT_r600), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (mul:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (MULLO_INT_r600:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*8318*/    /*Scope*/ 101, /*->8420*/
/*8319*/      OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*8321*/      OPC_EmitInteger, MVT::i32, 0, 
/*8324*/      OPC_EmitInteger, MVT::i32, 0, 
/*8327*/      OPC_EmitInteger, MVT::i32, 1, 
/*8330*/      OPC_EmitInteger, MVT::i32, 0, 
/*8333*/      OPC_EmitInteger, MVT::i32, 0, 
/*8336*/      OPC_EmitInteger, MVT::i32, 0, 
/*8339*/      OPC_EmitInteger, MVT::i32, 0, 
/*8342*/      OPC_EmitInteger, MVT::i32, 0, 
/*8345*/      OPC_EmitInteger, MVT::i32, 0, 
/*8348*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8360*/      OPC_EmitInteger, MVT::i32, 0, 
/*8363*/      OPC_EmitInteger, MVT::i32, 0, 
/*8366*/      OPC_EmitInteger, MVT::i32, 0, 
/*8369*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8381*/      OPC_EmitInteger, MVT::i32, 1, 
/*8384*/      OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*8387*/      OPC_EmitInteger, MVT::i32, 0, 
/*8390*/      OPC_EmitInteger, MVT::i32, 0, 
/*8393*/      OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULLO_INT_eg), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (mul:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (MULLO_INT_eg:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*8420*/    /*Scope*/ 101, /*->8522*/
/*8421*/      OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*8423*/      OPC_EmitInteger, MVT::i32, 0, 
/*8426*/      OPC_EmitInteger, MVT::i32, 0, 
/*8429*/      OPC_EmitInteger, MVT::i32, 1, 
/*8432*/      OPC_EmitInteger, MVT::i32, 0, 
/*8435*/      OPC_EmitInteger, MVT::i32, 0, 
/*8438*/      OPC_EmitInteger, MVT::i32, 0, 
/*8441*/      OPC_EmitInteger, MVT::i32, 0, 
/*8444*/      OPC_EmitInteger, MVT::i32, 0, 
/*8447*/      OPC_EmitInteger, MVT::i32, 0, 
/*8450*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8462*/      OPC_EmitInteger, MVT::i32, 0, 
/*8465*/      OPC_EmitInteger, MVT::i32, 0, 
/*8468*/      OPC_EmitInteger, MVT::i32, 0, 
/*8471*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8483*/      OPC_EmitInteger, MVT::i32, 1, 
/*8486*/      OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*8489*/      OPC_EmitInteger, MVT::i32, 0, 
/*8492*/      OPC_EmitInteger, MVT::i32, 0, 
/*8495*/      OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULLO_INT_cm), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (mul:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (MULLO_INT_cm:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*8522*/    /*Scope*/ 31, /*->8554*/
/*8523*/      OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*8525*/      OPC_EmitInteger, MVT::i32, 0, 
/*8528*/      OPC_EmitInteger, MVT::i32, 0, 
/*8531*/      OPC_EmitInteger, MVT::i32, 0, 
/*8534*/      OPC_EmitInteger, MVT::i32, 0, 
/*8537*/      OPC_EmitInteger, MVT::i32, 0, 
/*8540*/      OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MUL_LO_I32), 0,
                  1/*#VTs*/, MVT::i32, 7/*#Ops*/, 0, 1, 2, 3, 4, 5, 6, 
              // Src: (mul:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
              // Dst: (V_MUL_LO_I32:i32 ?:i32:$src0, ?:i32:$src1, 0:i32)
/*8554*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 29,  TARGET_VAL(AMDGPUISD::REGISTER_LOAD),// ->8587
/*8558*/    OPC_RecordNode,   // #0 = 'AMDGPUregister_load' chained node
/*8559*/    OPC_RecordChild1, // #1 = $addr
/*8560*/    OPC_RecordChild2, // #2 = $chan
/*8561*/    OPC_MoveChild, 2,
/*8563*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*8566*/    OPC_CheckType, MVT::i32,
/*8568*/    OPC_MoveParent,
/*8569*/    OPC_CheckType, MVT::i32,
/*8571*/    OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*8573*/    OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectADDRIndirect:$addr #3 #4
/*8576*/    OPC_EmitMergeInputChains1_0,
/*8577*/    OPC_MorphNodeTo, TARGET_VAL(AMDGPU::R600_RegisterLoad), 0|OPFL_Chain,
                1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
            // Src: (AMDGPUregister_load:i32 ADDRIndirect:iPTR:$addr, (timm:i32):$chan) - Complexity = 15
            // Dst: (R600_RegisterLoad:i32 ADDRIndirect:iPTR:$addr, (timm:i32):$chan)
          /*SwitchOpcode*/ 30,  TARGET_VAL(AMDGPUISD::REGISTER_STORE),// ->8620
/*8590*/    OPC_RecordNode,   // #0 = 'AMDGPUregister_store' chained node
/*8591*/    OPC_RecordChild1, // #1 = $val
/*8592*/    OPC_CheckChild1Type, MVT::i32,
/*8594*/    OPC_RecordChild2, // #2 = $addr
/*8595*/    OPC_RecordChild3, // #3 = $chan
/*8596*/    OPC_MoveChild, 3,
/*8598*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*8601*/    OPC_CheckType, MVT::i32,
/*8603*/    OPC_MoveParent,
/*8604*/    OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*8606*/    OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectADDRIndirect:$addr #4 #5
/*8609*/    OPC_EmitMergeInputChains1_0,
/*8610*/    OPC_MorphNodeTo, TARGET_VAL(AMDGPU::R600_RegisterStore), 0|OPFL_Chain,
                0/*#VTs*/, 4/*#Ops*/, 1, 4, 5, 3, 
            // Src: (AMDGPUregister_store i32:i32:$val, ADDRIndirect:iPTR:$addr, (timm:i32):$chan) - Complexity = 15
            // Dst: (R600_RegisterStore i32:i32:$val, ADDRIndirect:iPTR:$addr, (timm:i32):$chan)
          /*SwitchOpcode*/ 26|128,2/*282*/,  TARGET_VAL(ISD::AND),// ->8906
/*8624*/    OPC_Scope, 0|128,1/*128*/, /*->8755*/ // 2 children in Scope
/*8627*/      OPC_MoveChild, 0,
/*8629*/      OPC_CheckOpcode, TARGET_VAL(ISD::SRL),
/*8632*/      OPC_RecordChild0, // #0 = $x
/*8633*/      OPC_RecordChild1, // #1 = $y
/*8634*/      OPC_MoveChild, 1,
/*8636*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8639*/      OPC_CheckPredicate, 0, // Predicate_legalshift32
/*8641*/      OPC_CheckType, MVT::i32,
/*8643*/      OPC_MoveParent,
/*8644*/      OPC_MoveParent,
/*8645*/      OPC_RecordChild1, // #2 = $z
/*8646*/      OPC_MoveChild, 1,
/*8648*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8651*/      OPC_CheckPredicate, 1, // Predicate_bfemask
/*8653*/      OPC_MoveParent,
/*8654*/      OPC_CheckType, MVT::i32,
/*8656*/      OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*8658*/      OPC_EmitInteger, MVT::i32, 0, 
/*8661*/      OPC_EmitInteger, MVT::i32, 0, 
/*8664*/      OPC_EmitInteger, MVT::i32, 0, 
/*8667*/      OPC_EmitInteger, MVT::i32, 0, 
/*8670*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8682*/      OPC_EmitInteger, MVT::i32, 0, 
/*8685*/      OPC_EmitInteger, MVT::i32, 0, 
/*8688*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8700*/      OPC_EmitInteger, MVT::i32, 0, 
/*8703*/      OPC_EmitInteger, MVT::i32, 0, 
/*8706*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8718*/      OPC_EmitInteger, MVT::i32, 1, 
/*8721*/      OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*8724*/      OPC_EmitInteger, MVT::i32, 0, 
/*8727*/      OPC_EmitInteger, MVT::i32, 0, 
/*8730*/      OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFE_UINT_eg), 0,
                  1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
              // Src: (and:i32 (srl:i32 i32:i32:$x, (imm:i32)<<P:Predicate_legalshift32>>:$y), (imm:i32)<<P:Predicate_bfemask>><<X:anonymous.val.355>>:$z) - Complexity = 14
              // Dst: (BFE_UINT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*8755*/    /*Scope*/ 20|128,1/*148*/, /*->8905*/
/*8757*/      OPC_RecordChild0, // #0 = $src0
/*8758*/      OPC_RecordChild1, // #1 = $src1
/*8759*/      OPC_SwitchType /*3 cases */, 116,  MVT::i32,// ->8878
/*8762*/        OPC_Scope, 101, /*->8865*/ // 2 children in Scope
/*8764*/          OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*8766*/          OPC_EmitInteger, MVT::i32, 0, 
/*8769*/          OPC_EmitInteger, MVT::i32, 0, 
/*8772*/          OPC_EmitInteger, MVT::i32, 1, 
/*8775*/          OPC_EmitInteger, MVT::i32, 0, 
/*8778*/          OPC_EmitInteger, MVT::i32, 0, 
/*8781*/          OPC_EmitInteger, MVT::i32, 0, 
/*8784*/          OPC_EmitInteger, MVT::i32, 0, 
/*8787*/          OPC_EmitInteger, MVT::i32, 0, 
/*8790*/          OPC_EmitInteger, MVT::i32, 0, 
/*8793*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8805*/          OPC_EmitInteger, MVT::i32, 0, 
/*8808*/          OPC_EmitInteger, MVT::i32, 0, 
/*8811*/          OPC_EmitInteger, MVT::i32, 0, 
/*8814*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8826*/          OPC_EmitInteger, MVT::i32, 1, 
/*8829*/          OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*8832*/          OPC_EmitInteger, MVT::i32, 0, 
/*8835*/          OPC_EmitInteger, MVT::i32, 0, 
/*8838*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::AND_INT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (and:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
                  // Dst: (AND_INT:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*8865*/        /*Scope*/ 11, /*->8877*/
/*8866*/          OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*8868*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_AND_B32_e32), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (and:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
                  // Dst: (V_AND_B32_e32:i32 i32:i32:$src0, i32:i32:$src1)
/*8877*/        0, /*End of Scope*/
              /*SwitchType*/ 11,  MVT::i64,// ->8891
/*8880*/        OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*8882*/        OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_AND_B64), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (and:i64 i64:i64:$src0, i64:i64:$src1) - Complexity = 3
                // Dst: (S_AND_B64:i64 i64:i64:$src0, i64:i64:$src1)
              /*SwitchType*/ 11,  MVT::i1,// ->8904
/*8893*/        OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*8895*/        OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_AND_B64), 0,
                    1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
                // Src: (and:i1 i1:i1:$src0, i1:i1:$src1) - Complexity = 3
                // Dst: (S_AND_B64:i1 ?:i1:$src0, ?:i1:$src1)
              0, // EndSwitchType
/*8905*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 90|128,33/*4314*/,  TARGET_VAL(ISD::SELECT_CC),// ->13224
/*8910*/    OPC_RecordChild0, // #0 = $src0
/*8911*/    OPC_Scope, 125|128,18/*2429*/, /*->11343*/ // 2 children in Scope
/*8914*/      OPC_CheckChild0Type, MVT::f32,
/*8916*/      OPC_Scope, 110|128,13/*1774*/, /*->10693*/ // 2 children in Scope
/*8919*/        OPC_RecordChild1, // #1 = $src1
/*8920*/        OPC_MoveChild, 2,
/*8922*/        OPC_Scope, 116|128,6/*884*/, /*->9809*/ // 2 children in Scope
/*8925*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8936*/          OPC_MoveParent,
/*8937*/          OPC_MoveChild, 3,
/*8939*/          OPC_CheckInteger, 0, 
/*8941*/          OPC_MoveParent,
/*8942*/          OPC_MoveChild, 4,
/*8944*/          OPC_Scope, 7|128,5/*647*/, /*->9594*/ // 3 children in Scope
/*8947*/            OPC_CheckOpcode, TARGET_VAL(ISD::CONDCODE),
/*8950*/            OPC_Scope, 106, /*->9058*/ // 6 children in Scope
/*8952*/              OPC_CheckPredicate, 2, // Predicate_COND_EQ
/*8954*/              OPC_MoveParent,
/*8955*/              OPC_CheckType, MVT::i32,
/*8957*/              OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*8959*/              OPC_EmitInteger, MVT::i32, 0, 
/*8962*/              OPC_EmitInteger, MVT::i32, 0, 
/*8965*/              OPC_EmitInteger, MVT::i32, 1, 
/*8968*/              OPC_EmitInteger, MVT::i32, 0, 
/*8971*/              OPC_EmitInteger, MVT::i32, 0, 
/*8974*/              OPC_EmitInteger, MVT::i32, 0, 
/*8977*/              OPC_EmitInteger, MVT::i32, 0, 
/*8980*/              OPC_EmitInteger, MVT::i32, 0, 
/*8983*/              OPC_EmitInteger, MVT::i32, 0, 
/*8986*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8998*/              OPC_EmitInteger, MVT::i32, 0, 
/*9001*/              OPC_EmitInteger, MVT::i32, 0, 
/*9004*/              OPC_EmitInteger, MVT::i32, 0, 
/*9007*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9019*/              OPC_EmitInteger, MVT::i32, 1, 
/*9022*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*9025*/              OPC_EmitInteger, MVT::i32, 0, 
/*9028*/              OPC_EmitInteger, MVT::i32, 0, 
/*9031*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETE_DX10), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:i32 f32:f32:$src0, f32:f32:$src1, -1:i32, 0:i32, (cond:Other)<<P:Predicate_COND_EQ>>) - Complexity = 13
                      // Dst: (SETE_DX10:i32 f32:f32:$src0, f32:f32:$src1)
/*9058*/            /*Scope*/ 106, /*->9165*/
/*9059*/              OPC_CheckPredicate, 3, // Predicate_COND_GT
/*9061*/              OPC_MoveParent,
/*9062*/              OPC_CheckType, MVT::i32,
/*9064*/              OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*9066*/              OPC_EmitInteger, MVT::i32, 0, 
/*9069*/              OPC_EmitInteger, MVT::i32, 0, 
/*9072*/              OPC_EmitInteger, MVT::i32, 1, 
/*9075*/              OPC_EmitInteger, MVT::i32, 0, 
/*9078*/              OPC_EmitInteger, MVT::i32, 0, 
/*9081*/              OPC_EmitInteger, MVT::i32, 0, 
/*9084*/              OPC_EmitInteger, MVT::i32, 0, 
/*9087*/              OPC_EmitInteger, MVT::i32, 0, 
/*9090*/              OPC_EmitInteger, MVT::i32, 0, 
/*9093*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9105*/              OPC_EmitInteger, MVT::i32, 0, 
/*9108*/              OPC_EmitInteger, MVT::i32, 0, 
/*9111*/              OPC_EmitInteger, MVT::i32, 0, 
/*9114*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9126*/              OPC_EmitInteger, MVT::i32, 1, 
/*9129*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*9132*/              OPC_EmitInteger, MVT::i32, 0, 
/*9135*/              OPC_EmitInteger, MVT::i32, 0, 
/*9138*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETGT_DX10), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:i32 f32:f32:$src0, f32:f32:$src1, -1:i32, 0:i32, (cond:Other)<<P:Predicate_COND_GT>>) - Complexity = 13
                      // Dst: (SETGT_DX10:i32 f32:f32:$src0, f32:f32:$src1)
/*9165*/            /*Scope*/ 106, /*->9272*/
/*9166*/              OPC_CheckPredicate, 4, // Predicate_COND_GE
/*9168*/              OPC_MoveParent,
/*9169*/              OPC_CheckType, MVT::i32,
/*9171*/              OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*9173*/              OPC_EmitInteger, MVT::i32, 0, 
/*9176*/              OPC_EmitInteger, MVT::i32, 0, 
/*9179*/              OPC_EmitInteger, MVT::i32, 1, 
/*9182*/              OPC_EmitInteger, MVT::i32, 0, 
/*9185*/              OPC_EmitInteger, MVT::i32, 0, 
/*9188*/              OPC_EmitInteger, MVT::i32, 0, 
/*9191*/              OPC_EmitInteger, MVT::i32, 0, 
/*9194*/              OPC_EmitInteger, MVT::i32, 0, 
/*9197*/              OPC_EmitInteger, MVT::i32, 0, 
/*9200*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9212*/              OPC_EmitInteger, MVT::i32, 0, 
/*9215*/              OPC_EmitInteger, MVT::i32, 0, 
/*9218*/              OPC_EmitInteger, MVT::i32, 0, 
/*9221*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9233*/              OPC_EmitInteger, MVT::i32, 1, 
/*9236*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*9239*/              OPC_EmitInteger, MVT::i32, 0, 
/*9242*/              OPC_EmitInteger, MVT::i32, 0, 
/*9245*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETGE_DX10), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:i32 f32:f32:$src0, f32:f32:$src1, -1:i32, 0:i32, (cond:Other)<<P:Predicate_COND_GE>>) - Complexity = 13
                      // Dst: (SETGE_DX10:i32 f32:f32:$src0, f32:f32:$src1)
/*9272*/            /*Scope*/ 106, /*->9379*/
/*9273*/              OPC_CheckPredicate, 5, // Predicate_COND_NE
/*9275*/              OPC_MoveParent,
/*9276*/              OPC_CheckType, MVT::i32,
/*9278*/              OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*9280*/              OPC_EmitInteger, MVT::i32, 0, 
/*9283*/              OPC_EmitInteger, MVT::i32, 0, 
/*9286*/              OPC_EmitInteger, MVT::i32, 1, 
/*9289*/              OPC_EmitInteger, MVT::i32, 0, 
/*9292*/              OPC_EmitInteger, MVT::i32, 0, 
/*9295*/              OPC_EmitInteger, MVT::i32, 0, 
/*9298*/              OPC_EmitInteger, MVT::i32, 0, 
/*9301*/              OPC_EmitInteger, MVT::i32, 0, 
/*9304*/              OPC_EmitInteger, MVT::i32, 0, 
/*9307*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9319*/              OPC_EmitInteger, MVT::i32, 0, 
/*9322*/              OPC_EmitInteger, MVT::i32, 0, 
/*9325*/              OPC_EmitInteger, MVT::i32, 0, 
/*9328*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9340*/              OPC_EmitInteger, MVT::i32, 1, 
/*9343*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*9346*/              OPC_EmitInteger, MVT::i32, 0, 
/*9349*/              OPC_EmitInteger, MVT::i32, 0, 
/*9352*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETNE_DX10), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:i32 f32:f32:$src0, f32:f32:$src1, -1:i32, 0:i32, (cond:Other)<<P:Predicate_COND_NE>>) - Complexity = 13
                      // Dst: (SETNE_DX10:i32 f32:f32:$src0, f32:f32:$src1)
/*9379*/            /*Scope*/ 106, /*->9486*/
/*9380*/              OPC_CheckPredicate, 6, // Predicate_COND_LT
/*9382*/              OPC_MoveParent,
/*9383*/              OPC_CheckType, MVT::i32,
/*9385*/              OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*9387*/              OPC_EmitInteger, MVT::i32, 0, 
/*9390*/              OPC_EmitInteger, MVT::i32, 0, 
/*9393*/              OPC_EmitInteger, MVT::i32, 1, 
/*9396*/              OPC_EmitInteger, MVT::i32, 0, 
/*9399*/              OPC_EmitInteger, MVT::i32, 0, 
/*9402*/              OPC_EmitInteger, MVT::i32, 0, 
/*9405*/              OPC_EmitInteger, MVT::i32, 0, 
/*9408*/              OPC_EmitInteger, MVT::i32, 0, 
/*9411*/              OPC_EmitInteger, MVT::i32, 0, 
/*9414*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9426*/              OPC_EmitInteger, MVT::i32, 0, 
/*9429*/              OPC_EmitInteger, MVT::i32, 0, 
/*9432*/              OPC_EmitInteger, MVT::i32, 0, 
/*9435*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9447*/              OPC_EmitInteger, MVT::i32, 1, 
/*9450*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*9453*/              OPC_EmitInteger, MVT::i32, 0, 
/*9456*/              OPC_EmitInteger, MVT::i32, 0, 
/*9459*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETGT_DX10), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 1, 8, 9, 10, 11, 0, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:i32 f32:f32:$src0, f32:f32:$src1, -1:i32, 0:i32, (cond:Other)<<P:Predicate_COND_LT>>) - Complexity = 13
                      // Dst: (SETGT_DX10:i32 ?:f32:$src1, ?:f32:$src0)
/*9486*/            /*Scope*/ 106, /*->9593*/
/*9487*/              OPC_CheckPredicate, 7, // Predicate_COND_LE
/*9489*/              OPC_MoveParent,
/*9490*/              OPC_CheckType, MVT::i32,
/*9492*/              OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*9494*/              OPC_EmitInteger, MVT::i32, 0, 
/*9497*/              OPC_EmitInteger, MVT::i32, 0, 
/*9500*/              OPC_EmitInteger, MVT::i32, 1, 
/*9503*/              OPC_EmitInteger, MVT::i32, 0, 
/*9506*/              OPC_EmitInteger, MVT::i32, 0, 
/*9509*/              OPC_EmitInteger, MVT::i32, 0, 
/*9512*/              OPC_EmitInteger, MVT::i32, 0, 
/*9515*/              OPC_EmitInteger, MVT::i32, 0, 
/*9518*/              OPC_EmitInteger, MVT::i32, 0, 
/*9521*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9533*/              OPC_EmitInteger, MVT::i32, 0, 
/*9536*/              OPC_EmitInteger, MVT::i32, 0, 
/*9539*/              OPC_EmitInteger, MVT::i32, 0, 
/*9542*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9554*/              OPC_EmitInteger, MVT::i32, 1, 
/*9557*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*9560*/              OPC_EmitInteger, MVT::i32, 0, 
/*9563*/              OPC_EmitInteger, MVT::i32, 0, 
/*9566*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETGE_DX10), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 1, 8, 9, 10, 11, 0, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:i32 f32:f32:$src0, f32:f32:$src1, -1:i32, 0:i32, (cond:Other)<<P:Predicate_COND_LE>>) - Complexity = 13
                      // Dst: (SETGE_DX10:i32 ?:f32:$src1, ?:f32:$src0)
/*9593*/            0, /*End of Scope*/
/*9594*/          /*Scope*/ 106, /*->9701*/
/*9595*/            OPC_CheckCondCode, ISD::SETO,
/*9597*/            OPC_MoveParent,
/*9598*/            OPC_CheckType, MVT::i32,
/*9600*/            OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*9602*/            OPC_EmitInteger, MVT::i32, 0, 
/*9605*/            OPC_EmitInteger, MVT::i32, 0, 
/*9608*/            OPC_EmitInteger, MVT::i32, 1, 
/*9611*/            OPC_EmitInteger, MVT::i32, 0, 
/*9614*/            OPC_EmitInteger, MVT::i32, 0, 
/*9617*/            OPC_EmitInteger, MVT::i32, 0, 
/*9620*/            OPC_EmitInteger, MVT::i32, 0, 
/*9623*/            OPC_EmitInteger, MVT::i32, 0, 
/*9626*/            OPC_EmitInteger, MVT::i32, 0, 
/*9629*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9641*/            OPC_EmitInteger, MVT::i32, 0, 
/*9644*/            OPC_EmitInteger, MVT::i32, 0, 
/*9647*/            OPC_EmitInteger, MVT::i32, 0, 
/*9650*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9662*/            OPC_EmitInteger, MVT::i32, 1, 
/*9665*/            OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*9668*/            OPC_EmitInteger, MVT::i32, 0, 
/*9671*/            OPC_EmitInteger, MVT::i32, 0, 
/*9674*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETE_DX10), 0,
                        1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                    // Src: (selectcc:i32 f32:f32:$src0, f32:f32:$src1, -1:i32, 0:i32, SETO:Other) - Complexity = 13
                    // Dst: (SETE_DX10:i32 ?:f32:$src0, ?:f32:$src1)
/*9701*/          /*Scope*/ 106, /*->9808*/
/*9702*/            OPC_CheckCondCode, ISD::SETUO,
/*9704*/            OPC_MoveParent,
/*9705*/            OPC_CheckType, MVT::i32,
/*9707*/            OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*9709*/            OPC_EmitInteger, MVT::i32, 0, 
/*9712*/            OPC_EmitInteger, MVT::i32, 0, 
/*9715*/            OPC_EmitInteger, MVT::i32, 1, 
/*9718*/            OPC_EmitInteger, MVT::i32, 0, 
/*9721*/            OPC_EmitInteger, MVT::i32, 0, 
/*9724*/            OPC_EmitInteger, MVT::i32, 0, 
/*9727*/            OPC_EmitInteger, MVT::i32, 0, 
/*9730*/            OPC_EmitInteger, MVT::i32, 0, 
/*9733*/            OPC_EmitInteger, MVT::i32, 0, 
/*9736*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9748*/            OPC_EmitInteger, MVT::i32, 0, 
/*9751*/            OPC_EmitInteger, MVT::i32, 0, 
/*9754*/            OPC_EmitInteger, MVT::i32, 0, 
/*9757*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9769*/            OPC_EmitInteger, MVT::i32, 1, 
/*9772*/            OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*9775*/            OPC_EmitInteger, MVT::i32, 0, 
/*9778*/            OPC_EmitInteger, MVT::i32, 0, 
/*9781*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETNE_DX10), 0,
                        1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                    // Src: (selectcc:i32 f32:f32:$src0, f32:f32:$src1, -1:i32, 0:i32, SETUO:Other) - Complexity = 13
                    // Dst: (SETNE_DX10:i32 ?:f32:$src0, ?:f32:$src1)
/*9808*/          0, /*End of Scope*/
/*9809*/        /*Scope*/ 113|128,6/*881*/, /*->10692*/
/*9811*/          OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/*9814*/          OPC_CheckPredicate, 8, // Predicate_FP_ONE
/*9816*/          OPC_MoveParent,
/*9817*/          OPC_MoveChild, 3,
/*9819*/          OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/*9822*/          OPC_CheckPredicate, 9, // Predicate_FP_ZERO
/*9824*/          OPC_MoveParent,
/*9825*/          OPC_MoveChild, 4,
/*9827*/          OPC_Scope, 7|128,5/*647*/, /*->10477*/ // 3 children in Scope
/*9830*/            OPC_CheckOpcode, TARGET_VAL(ISD::CONDCODE),
/*9833*/            OPC_Scope, 106, /*->9941*/ // 6 children in Scope
/*9835*/              OPC_CheckPredicate, 2, // Predicate_COND_EQ
/*9837*/              OPC_MoveParent,
/*9838*/              OPC_CheckType, MVT::f32,
/*9840*/              OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*9842*/              OPC_EmitInteger, MVT::i32, 0, 
/*9845*/              OPC_EmitInteger, MVT::i32, 0, 
/*9848*/              OPC_EmitInteger, MVT::i32, 1, 
/*9851*/              OPC_EmitInteger, MVT::i32, 0, 
/*9854*/              OPC_EmitInteger, MVT::i32, 0, 
/*9857*/              OPC_EmitInteger, MVT::i32, 0, 
/*9860*/              OPC_EmitInteger, MVT::i32, 0, 
/*9863*/              OPC_EmitInteger, MVT::i32, 0, 
/*9866*/              OPC_EmitInteger, MVT::i32, 0, 
/*9869*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9881*/              OPC_EmitInteger, MVT::i32, 0, 
/*9884*/              OPC_EmitInteger, MVT::i32, 0, 
/*9887*/              OPC_EmitInteger, MVT::i32, 0, 
/*9890*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9902*/              OPC_EmitInteger, MVT::i32, 1, 
/*9905*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*9908*/              OPC_EmitInteger, MVT::i32, 0, 
/*9911*/              OPC_EmitInteger, MVT::i32, 0, 
/*9914*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETE), 0,
                          1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:f32 f32:f32:$src0, f32:f32:$src1, (fpimm:f32)<<P:Predicate_FP_ONE>>, (fpimm:f32)<<P:Predicate_FP_ZERO>>, (cond:Other)<<P:Predicate_COND_EQ>>) - Complexity = 11
                      // Dst: (SETE:f32 f32:f32:$src0, f32:f32:$src1)
/*9941*/            /*Scope*/ 106, /*->10048*/
/*9942*/              OPC_CheckPredicate, 3, // Predicate_COND_GT
/*9944*/              OPC_MoveParent,
/*9945*/              OPC_CheckType, MVT::f32,
/*9947*/              OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*9949*/              OPC_EmitInteger, MVT::i32, 0, 
/*9952*/              OPC_EmitInteger, MVT::i32, 0, 
/*9955*/              OPC_EmitInteger, MVT::i32, 1, 
/*9958*/              OPC_EmitInteger, MVT::i32, 0, 
/*9961*/              OPC_EmitInteger, MVT::i32, 0, 
/*9964*/              OPC_EmitInteger, MVT::i32, 0, 
/*9967*/              OPC_EmitInteger, MVT::i32, 0, 
/*9970*/              OPC_EmitInteger, MVT::i32, 0, 
/*9973*/              OPC_EmitInteger, MVT::i32, 0, 
/*9976*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9988*/              OPC_EmitInteger, MVT::i32, 0, 
/*9991*/              OPC_EmitInteger, MVT::i32, 0, 
/*9994*/              OPC_EmitInteger, MVT::i32, 0, 
/*9997*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10009*/             OPC_EmitInteger, MVT::i32, 1, 
/*10012*/             OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*10015*/             OPC_EmitInteger, MVT::i32, 0, 
/*10018*/             OPC_EmitInteger, MVT::i32, 0, 
/*10021*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SGT), 0,
                          1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:f32 f32:f32:$src0, f32:f32:$src1, (fpimm:f32)<<P:Predicate_FP_ONE>>, (fpimm:f32)<<P:Predicate_FP_ZERO>>, (cond:Other)<<P:Predicate_COND_GT>>) - Complexity = 11
                      // Dst: (SGT:f32 f32:f32:$src0, f32:f32:$src1)
/*10048*/           /*Scope*/ 106, /*->10155*/
/*10049*/             OPC_CheckPredicate, 4, // Predicate_COND_GE
/*10051*/             OPC_MoveParent,
/*10052*/             OPC_CheckType, MVT::f32,
/*10054*/             OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*10056*/             OPC_EmitInteger, MVT::i32, 0, 
/*10059*/             OPC_EmitInteger, MVT::i32, 0, 
/*10062*/             OPC_EmitInteger, MVT::i32, 1, 
/*10065*/             OPC_EmitInteger, MVT::i32, 0, 
/*10068*/             OPC_EmitInteger, MVT::i32, 0, 
/*10071*/             OPC_EmitInteger, MVT::i32, 0, 
/*10074*/             OPC_EmitInteger, MVT::i32, 0, 
/*10077*/             OPC_EmitInteger, MVT::i32, 0, 
/*10080*/             OPC_EmitInteger, MVT::i32, 0, 
/*10083*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10095*/             OPC_EmitInteger, MVT::i32, 0, 
/*10098*/             OPC_EmitInteger, MVT::i32, 0, 
/*10101*/             OPC_EmitInteger, MVT::i32, 0, 
/*10104*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10116*/             OPC_EmitInteger, MVT::i32, 1, 
/*10119*/             OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*10122*/             OPC_EmitInteger, MVT::i32, 0, 
/*10125*/             OPC_EmitInteger, MVT::i32, 0, 
/*10128*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SGE), 0,
                          1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:f32 f32:f32:$src0, f32:f32:$src1, (fpimm:f32)<<P:Predicate_FP_ONE>>, (fpimm:f32)<<P:Predicate_FP_ZERO>>, (cond:Other)<<P:Predicate_COND_GE>>) - Complexity = 11
                      // Dst: (SGE:f32 f32:f32:$src0, f32:f32:$src1)
/*10155*/           /*Scope*/ 106, /*->10262*/
/*10156*/             OPC_CheckPredicate, 5, // Predicate_COND_NE
/*10158*/             OPC_MoveParent,
/*10159*/             OPC_CheckType, MVT::f32,
/*10161*/             OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*10163*/             OPC_EmitInteger, MVT::i32, 0, 
/*10166*/             OPC_EmitInteger, MVT::i32, 0, 
/*10169*/             OPC_EmitInteger, MVT::i32, 1, 
/*10172*/             OPC_EmitInteger, MVT::i32, 0, 
/*10175*/             OPC_EmitInteger, MVT::i32, 0, 
/*10178*/             OPC_EmitInteger, MVT::i32, 0, 
/*10181*/             OPC_EmitInteger, MVT::i32, 0, 
/*10184*/             OPC_EmitInteger, MVT::i32, 0, 
/*10187*/             OPC_EmitInteger, MVT::i32, 0, 
/*10190*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10202*/             OPC_EmitInteger, MVT::i32, 0, 
/*10205*/             OPC_EmitInteger, MVT::i32, 0, 
/*10208*/             OPC_EmitInteger, MVT::i32, 0, 
/*10211*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10223*/             OPC_EmitInteger, MVT::i32, 1, 
/*10226*/             OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*10229*/             OPC_EmitInteger, MVT::i32, 0, 
/*10232*/             OPC_EmitInteger, MVT::i32, 0, 
/*10235*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SNE), 0,
                          1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:f32 f32:f32:$src0, f32:f32:$src1, (fpimm:f32)<<P:Predicate_FP_ONE>>, (fpimm:f32)<<P:Predicate_FP_ZERO>>, (cond:Other)<<P:Predicate_COND_NE>>) - Complexity = 11
                      // Dst: (SNE:f32 f32:f32:$src0, f32:f32:$src1)
/*10262*/           /*Scope*/ 106, /*->10369*/
/*10263*/             OPC_CheckPredicate, 6, // Predicate_COND_LT
/*10265*/             OPC_MoveParent,
/*10266*/             OPC_CheckType, MVT::f32,
/*10268*/             OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*10270*/             OPC_EmitInteger, MVT::i32, 0, 
/*10273*/             OPC_EmitInteger, MVT::i32, 0, 
/*10276*/             OPC_EmitInteger, MVT::i32, 1, 
/*10279*/             OPC_EmitInteger, MVT::i32, 0, 
/*10282*/             OPC_EmitInteger, MVT::i32, 0, 
/*10285*/             OPC_EmitInteger, MVT::i32, 0, 
/*10288*/             OPC_EmitInteger, MVT::i32, 0, 
/*10291*/             OPC_EmitInteger, MVT::i32, 0, 
/*10294*/             OPC_EmitInteger, MVT::i32, 0, 
/*10297*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10309*/             OPC_EmitInteger, MVT::i32, 0, 
/*10312*/             OPC_EmitInteger, MVT::i32, 0, 
/*10315*/             OPC_EmitInteger, MVT::i32, 0, 
/*10318*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10330*/             OPC_EmitInteger, MVT::i32, 1, 
/*10333*/             OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*10336*/             OPC_EmitInteger, MVT::i32, 0, 
/*10339*/             OPC_EmitInteger, MVT::i32, 0, 
/*10342*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SGT), 0,
                          1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 1, 8, 9, 10, 11, 0, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:f32 f32:f32:$src0, f32:f32:$src1, (fpimm:f32)<<P:Predicate_FP_ONE>>, (fpimm:f32)<<P:Predicate_FP_ZERO>>, (cond:Other)<<P:Predicate_COND_LT>>) - Complexity = 11
                      // Dst: (SGT:f32 ?:f32:$src1, ?:f32:$src0)
/*10369*/           /*Scope*/ 106, /*->10476*/
/*10370*/             OPC_CheckPredicate, 7, // Predicate_COND_LE
/*10372*/             OPC_MoveParent,
/*10373*/             OPC_CheckType, MVT::f32,
/*10375*/             OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*10377*/             OPC_EmitInteger, MVT::i32, 0, 
/*10380*/             OPC_EmitInteger, MVT::i32, 0, 
/*10383*/             OPC_EmitInteger, MVT::i32, 1, 
/*10386*/             OPC_EmitInteger, MVT::i32, 0, 
/*10389*/             OPC_EmitInteger, MVT::i32, 0, 
/*10392*/             OPC_EmitInteger, MVT::i32, 0, 
/*10395*/             OPC_EmitInteger, MVT::i32, 0, 
/*10398*/             OPC_EmitInteger, MVT::i32, 0, 
/*10401*/             OPC_EmitInteger, MVT::i32, 0, 
/*10404*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10416*/             OPC_EmitInteger, MVT::i32, 0, 
/*10419*/             OPC_EmitInteger, MVT::i32, 0, 
/*10422*/             OPC_EmitInteger, MVT::i32, 0, 
/*10425*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10437*/             OPC_EmitInteger, MVT::i32, 1, 
/*10440*/             OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*10443*/             OPC_EmitInteger, MVT::i32, 0, 
/*10446*/             OPC_EmitInteger, MVT::i32, 0, 
/*10449*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SGE), 0,
                          1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 1, 8, 9, 10, 11, 0, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:f32 f32:f32:$src0, f32:f32:$src1, (fpimm:f32)<<P:Predicate_FP_ONE>>, (fpimm:f32)<<P:Predicate_FP_ZERO>>, (cond:Other)<<P:Predicate_COND_LE>>) - Complexity = 11
                      // Dst: (SGE:f32 ?:f32:$src1, ?:f32:$src0)
/*10476*/           0, /*End of Scope*/
/*10477*/         /*Scope*/ 106, /*->10584*/
/*10478*/           OPC_CheckCondCode, ISD::SETO,
/*10480*/           OPC_MoveParent,
/*10481*/           OPC_CheckType, MVT::f32,
/*10483*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*10485*/           OPC_EmitInteger, MVT::i32, 0, 
/*10488*/           OPC_EmitInteger, MVT::i32, 0, 
/*10491*/           OPC_EmitInteger, MVT::i32, 1, 
/*10494*/           OPC_EmitInteger, MVT::i32, 0, 
/*10497*/           OPC_EmitInteger, MVT::i32, 0, 
/*10500*/           OPC_EmitInteger, MVT::i32, 0, 
/*10503*/           OPC_EmitInteger, MVT::i32, 0, 
/*10506*/           OPC_EmitInteger, MVT::i32, 0, 
/*10509*/           OPC_EmitInteger, MVT::i32, 0, 
/*10512*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10524*/           OPC_EmitInteger, MVT::i32, 0, 
/*10527*/           OPC_EmitInteger, MVT::i32, 0, 
/*10530*/           OPC_EmitInteger, MVT::i32, 0, 
/*10533*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10545*/           OPC_EmitInteger, MVT::i32, 1, 
/*10548*/           OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*10551*/           OPC_EmitInteger, MVT::i32, 0, 
/*10554*/           OPC_EmitInteger, MVT::i32, 0, 
/*10557*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETE), 0,
                        1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                    // Src: (selectcc:f32 f32:f32:$src0, f32:f32:$src1, (fpimm:f32)<<P:Predicate_FP_ONE>>, (fpimm:f32)<<P:Predicate_FP_ZERO>>, SETO:Other) - Complexity = 11
                    // Dst: (SETE:f32 ?:f32:$src0, ?:f32:$src1)
/*10584*/         /*Scope*/ 106, /*->10691*/
/*10585*/           OPC_CheckCondCode, ISD::SETUO,
/*10587*/           OPC_MoveParent,
/*10588*/           OPC_CheckType, MVT::f32,
/*10590*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*10592*/           OPC_EmitInteger, MVT::i32, 0, 
/*10595*/           OPC_EmitInteger, MVT::i32, 0, 
/*10598*/           OPC_EmitInteger, MVT::i32, 1, 
/*10601*/           OPC_EmitInteger, MVT::i32, 0, 
/*10604*/           OPC_EmitInteger, MVT::i32, 0, 
/*10607*/           OPC_EmitInteger, MVT::i32, 0, 
/*10610*/           OPC_EmitInteger, MVT::i32, 0, 
/*10613*/           OPC_EmitInteger, MVT::i32, 0, 
/*10616*/           OPC_EmitInteger, MVT::i32, 0, 
/*10619*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10631*/           OPC_EmitInteger, MVT::i32, 0, 
/*10634*/           OPC_EmitInteger, MVT::i32, 0, 
/*10637*/           OPC_EmitInteger, MVT::i32, 0, 
/*10640*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10652*/           OPC_EmitInteger, MVT::i32, 1, 
/*10655*/           OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*10658*/           OPC_EmitInteger, MVT::i32, 0, 
/*10661*/           OPC_EmitInteger, MVT::i32, 0, 
/*10664*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SNE), 0,
                        1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                    // Src: (selectcc:f32 f32:f32:$src0, f32:f32:$src1, (fpimm:f32)<<P:Predicate_FP_ONE>>, (fpimm:f32)<<P:Predicate_FP_ZERO>>, SETUO:Other) - Complexity = 11
                    // Dst: (SNE:f32 ?:f32:$src0, ?:f32:$src1)
/*10691*/         0, /*End of Scope*/
/*10692*/       0, /*End of Scope*/
/*10693*/     /*Scope*/ 7|128,5/*647*/, /*->11342*/
/*10695*/       OPC_MoveChild, 1,
/*10697*/       OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/*10700*/       OPC_CheckPredicate, 9, // Predicate_FP_ZERO
/*10702*/       OPC_MoveParent,
/*10703*/       OPC_RecordChild2, // #1 = $src1
/*10704*/       OPC_RecordChild3, // #2 = $src2
/*10705*/       OPC_MoveChild, 4,
/*10707*/       OPC_CheckOpcode, TARGET_VAL(ISD::CONDCODE),
/*10710*/       OPC_Scope, 104, /*->10816*/ // 6 children in Scope
/*10712*/         OPC_CheckPredicate, 2, // Predicate_COND_EQ
/*10714*/         OPC_MoveParent,
/*10715*/         OPC_CheckType, MVT::f32,
/*10717*/         OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*10719*/         OPC_EmitInteger, MVT::i32, 0, 
/*10722*/         OPC_EmitInteger, MVT::i32, 0, 
/*10725*/         OPC_EmitInteger, MVT::i32, 0, 
/*10728*/         OPC_EmitInteger, MVT::i32, 0, 
/*10731*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10743*/         OPC_EmitInteger, MVT::i32, 0, 
/*10746*/         OPC_EmitInteger, MVT::i32, 0, 
/*10749*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10761*/         OPC_EmitInteger, MVT::i32, 0, 
/*10764*/         OPC_EmitInteger, MVT::i32, 0, 
/*10767*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10779*/         OPC_EmitInteger, MVT::i32, 1, 
/*10782*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*10785*/         OPC_EmitInteger, MVT::i32, 0, 
/*10788*/         OPC_EmitInteger, MVT::i32, 0, 
/*10791*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CNDE_r600), 0,
                      1/*#VTs*/, MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (selectcc:f32 f32:f32:$src0, (fpimm:f32)<<P:Predicate_FP_ZERO>>, f32:f32:$src1, f32:f32:$src2, (cond:Other)<<P:Predicate_COND_EQ>>) - Complexity = 7
                  // Dst: (CNDE_r600:f32 f32:f32:$src0, f32:f32:$src1, f32:f32:$src2)
/*10816*/       /*Scope*/ 104, /*->10921*/
/*10817*/         OPC_CheckPredicate, 3, // Predicate_COND_GT
/*10819*/         OPC_MoveParent,
/*10820*/         OPC_CheckType, MVT::f32,
/*10822*/         OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*10824*/         OPC_EmitInteger, MVT::i32, 0, 
/*10827*/         OPC_EmitInteger, MVT::i32, 0, 
/*10830*/         OPC_EmitInteger, MVT::i32, 0, 
/*10833*/         OPC_EmitInteger, MVT::i32, 0, 
/*10836*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10848*/         OPC_EmitInteger, MVT::i32, 0, 
/*10851*/         OPC_EmitInteger, MVT::i32, 0, 
/*10854*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10866*/         OPC_EmitInteger, MVT::i32, 0, 
/*10869*/         OPC_EmitInteger, MVT::i32, 0, 
/*10872*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10884*/         OPC_EmitInteger, MVT::i32, 1, 
/*10887*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*10890*/         OPC_EmitInteger, MVT::i32, 0, 
/*10893*/         OPC_EmitInteger, MVT::i32, 0, 
/*10896*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CNDGT_r600), 0,
                      1/*#VTs*/, MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (selectcc:f32 f32:f32:$src0, (fpimm:f32)<<P:Predicate_FP_ZERO>>, f32:f32:$src1, f32:f32:$src2, (cond:Other)<<P:Predicate_COND_GT>>) - Complexity = 7
                  // Dst: (CNDGT_r600:f32 f32:f32:$src0, f32:f32:$src1, f32:f32:$src2)
/*10921*/       /*Scope*/ 104, /*->11026*/
/*10922*/         OPC_CheckPredicate, 4, // Predicate_COND_GE
/*10924*/         OPC_MoveParent,
/*10925*/         OPC_CheckType, MVT::f32,
/*10927*/         OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*10929*/         OPC_EmitInteger, MVT::i32, 0, 
/*10932*/         OPC_EmitInteger, MVT::i32, 0, 
/*10935*/         OPC_EmitInteger, MVT::i32, 0, 
/*10938*/         OPC_EmitInteger, MVT::i32, 0, 
/*10941*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10953*/         OPC_EmitInteger, MVT::i32, 0, 
/*10956*/         OPC_EmitInteger, MVT::i32, 0, 
/*10959*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10971*/         OPC_EmitInteger, MVT::i32, 0, 
/*10974*/         OPC_EmitInteger, MVT::i32, 0, 
/*10977*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10989*/         OPC_EmitInteger, MVT::i32, 1, 
/*10992*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*10995*/         OPC_EmitInteger, MVT::i32, 0, 
/*10998*/         OPC_EmitInteger, MVT::i32, 0, 
/*11001*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CNDGE_r600), 0,
                      1/*#VTs*/, MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (selectcc:f32 f32:f32:$src0, (fpimm:f32)<<P:Predicate_FP_ZERO>>, f32:f32:$src1, f32:f32:$src2, (cond:Other)<<P:Predicate_COND_GE>>) - Complexity = 7
                  // Dst: (CNDGE_r600:f32 f32:f32:$src0, f32:f32:$src1, f32:f32:$src2)
/*11026*/       /*Scope*/ 104, /*->11131*/
/*11027*/         OPC_CheckPredicate, 2, // Predicate_COND_EQ
/*11029*/         OPC_MoveParent,
/*11030*/         OPC_CheckType, MVT::f32,
/*11032*/         OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*11034*/         OPC_EmitInteger, MVT::i32, 0, 
/*11037*/         OPC_EmitInteger, MVT::i32, 0, 
/*11040*/         OPC_EmitInteger, MVT::i32, 0, 
/*11043*/         OPC_EmitInteger, MVT::i32, 0, 
/*11046*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11058*/         OPC_EmitInteger, MVT::i32, 0, 
/*11061*/         OPC_EmitInteger, MVT::i32, 0, 
/*11064*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11076*/         OPC_EmitInteger, MVT::i32, 0, 
/*11079*/         OPC_EmitInteger, MVT::i32, 0, 
/*11082*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11094*/         OPC_EmitInteger, MVT::i32, 1, 
/*11097*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*11100*/         OPC_EmitInteger, MVT::i32, 0, 
/*11103*/         OPC_EmitInteger, MVT::i32, 0, 
/*11106*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CNDE_eg), 0,
                      1/*#VTs*/, MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (selectcc:f32 f32:f32:$src0, (fpimm:f32)<<P:Predicate_FP_ZERO>>, f32:f32:$src1, f32:f32:$src2, (cond:Other)<<P:Predicate_COND_EQ>>) - Complexity = 7
                  // Dst: (CNDE_eg:f32 f32:f32:$src0, f32:f32:$src1, f32:f32:$src2)
/*11131*/       /*Scope*/ 104, /*->11236*/
/*11132*/         OPC_CheckPredicate, 3, // Predicate_COND_GT
/*11134*/         OPC_MoveParent,
/*11135*/         OPC_CheckType, MVT::f32,
/*11137*/         OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*11139*/         OPC_EmitInteger, MVT::i32, 0, 
/*11142*/         OPC_EmitInteger, MVT::i32, 0, 
/*11145*/         OPC_EmitInteger, MVT::i32, 0, 
/*11148*/         OPC_EmitInteger, MVT::i32, 0, 
/*11151*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11163*/         OPC_EmitInteger, MVT::i32, 0, 
/*11166*/         OPC_EmitInteger, MVT::i32, 0, 
/*11169*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11181*/         OPC_EmitInteger, MVT::i32, 0, 
/*11184*/         OPC_EmitInteger, MVT::i32, 0, 
/*11187*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11199*/         OPC_EmitInteger, MVT::i32, 1, 
/*11202*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*11205*/         OPC_EmitInteger, MVT::i32, 0, 
/*11208*/         OPC_EmitInteger, MVT::i32, 0, 
/*11211*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CNDGT_eg), 0,
                      1/*#VTs*/, MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (selectcc:f32 f32:f32:$src0, (fpimm:f32)<<P:Predicate_FP_ZERO>>, f32:f32:$src1, f32:f32:$src2, (cond:Other)<<P:Predicate_COND_GT>>) - Complexity = 7
                  // Dst: (CNDGT_eg:f32 f32:f32:$src0, f32:f32:$src1, f32:f32:$src2)
/*11236*/       /*Scope*/ 104, /*->11341*/
/*11237*/         OPC_CheckPredicate, 4, // Predicate_COND_GE
/*11239*/         OPC_MoveParent,
/*11240*/         OPC_CheckType, MVT::f32,
/*11242*/         OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*11244*/         OPC_EmitInteger, MVT::i32, 0, 
/*11247*/         OPC_EmitInteger, MVT::i32, 0, 
/*11250*/         OPC_EmitInteger, MVT::i32, 0, 
/*11253*/         OPC_EmitInteger, MVT::i32, 0, 
/*11256*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11268*/         OPC_EmitInteger, MVT::i32, 0, 
/*11271*/         OPC_EmitInteger, MVT::i32, 0, 
/*11274*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11286*/         OPC_EmitInteger, MVT::i32, 0, 
/*11289*/         OPC_EmitInteger, MVT::i32, 0, 
/*11292*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11304*/         OPC_EmitInteger, MVT::i32, 1, 
/*11307*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*11310*/         OPC_EmitInteger, MVT::i32, 0, 
/*11313*/         OPC_EmitInteger, MVT::i32, 0, 
/*11316*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CNDGE_eg), 0,
                      1/*#VTs*/, MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (selectcc:f32 f32:f32:$src0, (fpimm:f32)<<P:Predicate_FP_ZERO>>, f32:f32:$src1, f32:f32:$src2, (cond:Other)<<P:Predicate_COND_GE>>) - Complexity = 7
                  // Dst: (CNDGE_eg:f32 f32:f32:$src0, f32:f32:$src1, f32:f32:$src2)
/*11341*/       0, /*End of Scope*/
/*11342*/     0, /*End of Scope*/
/*11343*/   /*Scope*/ 86|128,14/*1878*/, /*->13223*/
/*11345*/     OPC_CheckChild0Type, MVT::i32,
/*11347*/     OPC_Scope, 70|128,8/*1094*/, /*->12444*/ // 2 children in Scope
/*11350*/       OPC_RecordChild1, // #1 = $src1
/*11351*/       OPC_MoveChild, 2,
/*11353*/       OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11364*/       OPC_MoveParent,
/*11365*/       OPC_MoveChild, 3,
/*11367*/       OPC_CheckInteger, 0, 
/*11369*/       OPC_MoveParent,
/*11370*/       OPC_MoveChild, 4,
/*11372*/       OPC_Scope, 106, /*->11480*/ // 10 children in Scope
/*11374*/         OPC_CheckCondCode, ISD::SETEQ,
/*11376*/         OPC_MoveParent,
/*11377*/         OPC_CheckType, MVT::i32,
/*11379*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*11381*/         OPC_EmitInteger, MVT::i32, 0, 
/*11384*/         OPC_EmitInteger, MVT::i32, 0, 
/*11387*/         OPC_EmitInteger, MVT::i32, 1, 
/*11390*/         OPC_EmitInteger, MVT::i32, 0, 
/*11393*/         OPC_EmitInteger, MVT::i32, 0, 
/*11396*/         OPC_EmitInteger, MVT::i32, 0, 
/*11399*/         OPC_EmitInteger, MVT::i32, 0, 
/*11402*/         OPC_EmitInteger, MVT::i32, 0, 
/*11405*/         OPC_EmitInteger, MVT::i32, 0, 
/*11408*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11420*/         OPC_EmitInteger, MVT::i32, 0, 
/*11423*/         OPC_EmitInteger, MVT::i32, 0, 
/*11426*/         OPC_EmitInteger, MVT::i32, 0, 
/*11429*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11441*/         OPC_EmitInteger, MVT::i32, 1, 
/*11444*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*11447*/         OPC_EmitInteger, MVT::i32, 0, 
/*11450*/         OPC_EmitInteger, MVT::i32, 0, 
/*11453*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETE_INT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (selectcc:i32 i32:i32:$src0, i32:i32:$src1, -1:i32, 0:i32, SETEQ:Other) - Complexity = 13
                  // Dst: (SETE_INT:i32 i32:i32:$src0, i32:i32:$src1)
/*11480*/       /*Scope*/ 106, /*->11587*/
/*11481*/         OPC_CheckCondCode, ISD::SETGT,
/*11483*/         OPC_MoveParent,
/*11484*/         OPC_CheckType, MVT::i32,
/*11486*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*11488*/         OPC_EmitInteger, MVT::i32, 0, 
/*11491*/         OPC_EmitInteger, MVT::i32, 0, 
/*11494*/         OPC_EmitInteger, MVT::i32, 1, 
/*11497*/         OPC_EmitInteger, MVT::i32, 0, 
/*11500*/         OPC_EmitInteger, MVT::i32, 0, 
/*11503*/         OPC_EmitInteger, MVT::i32, 0, 
/*11506*/         OPC_EmitInteger, MVT::i32, 0, 
/*11509*/         OPC_EmitInteger, MVT::i32, 0, 
/*11512*/         OPC_EmitInteger, MVT::i32, 0, 
/*11515*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11527*/         OPC_EmitInteger, MVT::i32, 0, 
/*11530*/         OPC_EmitInteger, MVT::i32, 0, 
/*11533*/         OPC_EmitInteger, MVT::i32, 0, 
/*11536*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11548*/         OPC_EmitInteger, MVT::i32, 1, 
/*11551*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*11554*/         OPC_EmitInteger, MVT::i32, 0, 
/*11557*/         OPC_EmitInteger, MVT::i32, 0, 
/*11560*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETGT_INT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (selectcc:i32 i32:i32:$src0, i32:i32:$src1, -1:i32, 0:i32, SETGT:Other) - Complexity = 13
                  // Dst: (SETGT_INT:i32 i32:i32:$src0, i32:i32:$src1)
/*11587*/       /*Scope*/ 106, /*->11694*/
/*11588*/         OPC_CheckCondCode, ISD::SETGE,
/*11590*/         OPC_MoveParent,
/*11591*/         OPC_CheckType, MVT::i32,
/*11593*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*11595*/         OPC_EmitInteger, MVT::i32, 0, 
/*11598*/         OPC_EmitInteger, MVT::i32, 0, 
/*11601*/         OPC_EmitInteger, MVT::i32, 1, 
/*11604*/         OPC_EmitInteger, MVT::i32, 0, 
/*11607*/         OPC_EmitInteger, MVT::i32, 0, 
/*11610*/         OPC_EmitInteger, MVT::i32, 0, 
/*11613*/         OPC_EmitInteger, MVT::i32, 0, 
/*11616*/         OPC_EmitInteger, MVT::i32, 0, 
/*11619*/         OPC_EmitInteger, MVT::i32, 0, 
/*11622*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11634*/         OPC_EmitInteger, MVT::i32, 0, 
/*11637*/         OPC_EmitInteger, MVT::i32, 0, 
/*11640*/         OPC_EmitInteger, MVT::i32, 0, 
/*11643*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11655*/         OPC_EmitInteger, MVT::i32, 1, 
/*11658*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*11661*/         OPC_EmitInteger, MVT::i32, 0, 
/*11664*/         OPC_EmitInteger, MVT::i32, 0, 
/*11667*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETGE_INT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (selectcc:i32 i32:i32:$src0, i32:i32:$src1, -1:i32, 0:i32, SETGE:Other) - Complexity = 13
                  // Dst: (SETGE_INT:i32 i32:i32:$src0, i32:i32:$src1)
/*11694*/       /*Scope*/ 106, /*->11801*/
/*11695*/         OPC_CheckCondCode, ISD::SETNE,
/*11697*/         OPC_MoveParent,
/*11698*/         OPC_CheckType, MVT::i32,
/*11700*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*11702*/         OPC_EmitInteger, MVT::i32, 0, 
/*11705*/         OPC_EmitInteger, MVT::i32, 0, 
/*11708*/         OPC_EmitInteger, MVT::i32, 1, 
/*11711*/         OPC_EmitInteger, MVT::i32, 0, 
/*11714*/         OPC_EmitInteger, MVT::i32, 0, 
/*11717*/         OPC_EmitInteger, MVT::i32, 0, 
/*11720*/         OPC_EmitInteger, MVT::i32, 0, 
/*11723*/         OPC_EmitInteger, MVT::i32, 0, 
/*11726*/         OPC_EmitInteger, MVT::i32, 0, 
/*11729*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11741*/         OPC_EmitInteger, MVT::i32, 0, 
/*11744*/         OPC_EmitInteger, MVT::i32, 0, 
/*11747*/         OPC_EmitInteger, MVT::i32, 0, 
/*11750*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11762*/         OPC_EmitInteger, MVT::i32, 1, 
/*11765*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*11768*/         OPC_EmitInteger, MVT::i32, 0, 
/*11771*/         OPC_EmitInteger, MVT::i32, 0, 
/*11774*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETNE_INT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (selectcc:i32 i32:i32:$src0, i32:i32:$src1, -1:i32, 0:i32, SETNE:Other) - Complexity = 13
                  // Dst: (SETNE_INT:i32 i32:i32:$src0, i32:i32:$src1)
/*11801*/       /*Scope*/ 106, /*->11908*/
/*11802*/         OPC_CheckCondCode, ISD::SETUGT,
/*11804*/         OPC_MoveParent,
/*11805*/         OPC_CheckType, MVT::i32,
/*11807*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*11809*/         OPC_EmitInteger, MVT::i32, 0, 
/*11812*/         OPC_EmitInteger, MVT::i32, 0, 
/*11815*/         OPC_EmitInteger, MVT::i32, 1, 
/*11818*/         OPC_EmitInteger, MVT::i32, 0, 
/*11821*/         OPC_EmitInteger, MVT::i32, 0, 
/*11824*/         OPC_EmitInteger, MVT::i32, 0, 
/*11827*/         OPC_EmitInteger, MVT::i32, 0, 
/*11830*/         OPC_EmitInteger, MVT::i32, 0, 
/*11833*/         OPC_EmitInteger, MVT::i32, 0, 
/*11836*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11848*/         OPC_EmitInteger, MVT::i32, 0, 
/*11851*/         OPC_EmitInteger, MVT::i32, 0, 
/*11854*/         OPC_EmitInteger, MVT::i32, 0, 
/*11857*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11869*/         OPC_EmitInteger, MVT::i32, 1, 
/*11872*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*11875*/         OPC_EmitInteger, MVT::i32, 0, 
/*11878*/         OPC_EmitInteger, MVT::i32, 0, 
/*11881*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETGT_UINT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (selectcc:i32 i32:i32:$src0, i32:i32:$src1, -1:i32, 0:i32, SETUGT:Other) - Complexity = 13
                  // Dst: (SETGT_UINT:i32 i32:i32:$src0, i32:i32:$src1)
/*11908*/       /*Scope*/ 106, /*->12015*/
/*11909*/         OPC_CheckCondCode, ISD::SETUGE,
/*11911*/         OPC_MoveParent,
/*11912*/         OPC_CheckType, MVT::i32,
/*11914*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*11916*/         OPC_EmitInteger, MVT::i32, 0, 
/*11919*/         OPC_EmitInteger, MVT::i32, 0, 
/*11922*/         OPC_EmitInteger, MVT::i32, 1, 
/*11925*/         OPC_EmitInteger, MVT::i32, 0, 
/*11928*/         OPC_EmitInteger, MVT::i32, 0, 
/*11931*/         OPC_EmitInteger, MVT::i32, 0, 
/*11934*/         OPC_EmitInteger, MVT::i32, 0, 
/*11937*/         OPC_EmitInteger, MVT::i32, 0, 
/*11940*/         OPC_EmitInteger, MVT::i32, 0, 
/*11943*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11955*/         OPC_EmitInteger, MVT::i32, 0, 
/*11958*/         OPC_EmitInteger, MVT::i32, 0, 
/*11961*/         OPC_EmitInteger, MVT::i32, 0, 
/*11964*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11976*/         OPC_EmitInteger, MVT::i32, 1, 
/*11979*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*11982*/         OPC_EmitInteger, MVT::i32, 0, 
/*11985*/         OPC_EmitInteger, MVT::i32, 0, 
/*11988*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETGE_UINT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (selectcc:i32 i32:i32:$src0, i32:i32:$src1, -1:i32, 0:i32, SETUGE:Other) - Complexity = 13
                  // Dst: (SETGE_UINT:i32 i32:i32:$src0, i32:i32:$src1)
/*12015*/       /*Scope*/ 106, /*->12122*/
/*12016*/         OPC_CheckCondCode, ISD::SETLT,
/*12018*/         OPC_MoveParent,
/*12019*/         OPC_CheckType, MVT::i32,
/*12021*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*12023*/         OPC_EmitInteger, MVT::i32, 0, 
/*12026*/         OPC_EmitInteger, MVT::i32, 0, 
/*12029*/         OPC_EmitInteger, MVT::i32, 1, 
/*12032*/         OPC_EmitInteger, MVT::i32, 0, 
/*12035*/         OPC_EmitInteger, MVT::i32, 0, 
/*12038*/         OPC_EmitInteger, MVT::i32, 0, 
/*12041*/         OPC_EmitInteger, MVT::i32, 0, 
/*12044*/         OPC_EmitInteger, MVT::i32, 0, 
/*12047*/         OPC_EmitInteger, MVT::i32, 0, 
/*12050*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12062*/         OPC_EmitInteger, MVT::i32, 0, 
/*12065*/         OPC_EmitInteger, MVT::i32, 0, 
/*12068*/         OPC_EmitInteger, MVT::i32, 0, 
/*12071*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12083*/         OPC_EmitInteger, MVT::i32, 1, 
/*12086*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*12089*/         OPC_EmitInteger, MVT::i32, 0, 
/*12092*/         OPC_EmitInteger, MVT::i32, 0, 
/*12095*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETGT_INT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 1, 8, 9, 10, 11, 0, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (selectcc:i32 i32:i32:$src0, i32:i32:$src1, -1:i32, 0:i32, SETLT:Other) - Complexity = 13
                  // Dst: (SETGT_INT:i32 ?:i32:$src1, ?:i32:$src0)
/*12122*/       /*Scope*/ 106, /*->12229*/
/*12123*/         OPC_CheckCondCode, ISD::SETLE,
/*12125*/         OPC_MoveParent,
/*12126*/         OPC_CheckType, MVT::i32,
/*12128*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*12130*/         OPC_EmitInteger, MVT::i32, 0, 
/*12133*/         OPC_EmitInteger, MVT::i32, 0, 
/*12136*/         OPC_EmitInteger, MVT::i32, 1, 
/*12139*/         OPC_EmitInteger, MVT::i32, 0, 
/*12142*/         OPC_EmitInteger, MVT::i32, 0, 
/*12145*/         OPC_EmitInteger, MVT::i32, 0, 
/*12148*/         OPC_EmitInteger, MVT::i32, 0, 
/*12151*/         OPC_EmitInteger, MVT::i32, 0, 
/*12154*/         OPC_EmitInteger, MVT::i32, 0, 
/*12157*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12169*/         OPC_EmitInteger, MVT::i32, 0, 
/*12172*/         OPC_EmitInteger, MVT::i32, 0, 
/*12175*/         OPC_EmitInteger, MVT::i32, 0, 
/*12178*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12190*/         OPC_EmitInteger, MVT::i32, 1, 
/*12193*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*12196*/         OPC_EmitInteger, MVT::i32, 0, 
/*12199*/         OPC_EmitInteger, MVT::i32, 0, 
/*12202*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETGE_INT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 1, 8, 9, 10, 11, 0, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (selectcc:i32 i32:i32:$src0, i32:i32:$src1, -1:i32, 0:i32, SETLE:Other) - Complexity = 13
                  // Dst: (SETGE_INT:i32 ?:i32:$src1, ?:i32:$src0)
/*12229*/       /*Scope*/ 106, /*->12336*/
/*12230*/         OPC_CheckCondCode, ISD::SETULT,
/*12232*/         OPC_MoveParent,
/*12233*/         OPC_CheckType, MVT::i32,
/*12235*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*12237*/         OPC_EmitInteger, MVT::i32, 0, 
/*12240*/         OPC_EmitInteger, MVT::i32, 0, 
/*12243*/         OPC_EmitInteger, MVT::i32, 1, 
/*12246*/         OPC_EmitInteger, MVT::i32, 0, 
/*12249*/         OPC_EmitInteger, MVT::i32, 0, 
/*12252*/         OPC_EmitInteger, MVT::i32, 0, 
/*12255*/         OPC_EmitInteger, MVT::i32, 0, 
/*12258*/         OPC_EmitInteger, MVT::i32, 0, 
/*12261*/         OPC_EmitInteger, MVT::i32, 0, 
/*12264*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12276*/         OPC_EmitInteger, MVT::i32, 0, 
/*12279*/         OPC_EmitInteger, MVT::i32, 0, 
/*12282*/         OPC_EmitInteger, MVT::i32, 0, 
/*12285*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12297*/         OPC_EmitInteger, MVT::i32, 1, 
/*12300*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*12303*/         OPC_EmitInteger, MVT::i32, 0, 
/*12306*/         OPC_EmitInteger, MVT::i32, 0, 
/*12309*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETGT_UINT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 1, 8, 9, 10, 11, 0, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (selectcc:i32 i32:i32:$src0, i32:i32:$src1, -1:i32, 0:i32, SETULT:Other) - Complexity = 13
                  // Dst: (SETGT_UINT:i32 ?:i32:$src1, ?:i32:$src0)
/*12336*/       /*Scope*/ 106, /*->12443*/
/*12337*/         OPC_CheckCondCode, ISD::SETULE,
/*12339*/         OPC_MoveParent,
/*12340*/         OPC_CheckType, MVT::i32,
/*12342*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*12344*/         OPC_EmitInteger, MVT::i32, 0, 
/*12347*/         OPC_EmitInteger, MVT::i32, 0, 
/*12350*/         OPC_EmitInteger, MVT::i32, 1, 
/*12353*/         OPC_EmitInteger, MVT::i32, 0, 
/*12356*/         OPC_EmitInteger, MVT::i32, 0, 
/*12359*/         OPC_EmitInteger, MVT::i32, 0, 
/*12362*/         OPC_EmitInteger, MVT::i32, 0, 
/*12365*/         OPC_EmitInteger, MVT::i32, 0, 
/*12368*/         OPC_EmitInteger, MVT::i32, 0, 
/*12371*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12383*/         OPC_EmitInteger, MVT::i32, 0, 
/*12386*/         OPC_EmitInteger, MVT::i32, 0, 
/*12389*/         OPC_EmitInteger, MVT::i32, 0, 
/*12392*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12404*/         OPC_EmitInteger, MVT::i32, 1, 
/*12407*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*12410*/         OPC_EmitInteger, MVT::i32, 0, 
/*12413*/         OPC_EmitInteger, MVT::i32, 0, 
/*12416*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETGE_UINT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 1, 8, 9, 10, 11, 0, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (selectcc:i32 i32:i32:$src0, i32:i32:$src1, -1:i32, 0:i32, SETULE:Other) - Complexity = 13
                  // Dst: (SETGE_UINT:i32 ?:i32:$src1, ?:i32:$src0)
/*12443*/       0, /*End of Scope*/
/*12444*/     /*Scope*/ 8|128,6/*776*/, /*->13222*/
/*12446*/       OPC_MoveChild, 1,
/*12448*/       OPC_Scope, 6|128,5/*646*/, /*->13097*/ // 2 children in Scope
/*12451*/         OPC_CheckInteger, 0, 
/*12453*/         OPC_MoveParent,
/*12454*/         OPC_RecordChild2, // #1 = $src1
/*12455*/         OPC_RecordChild3, // #2 = $src2
/*12456*/         OPC_MoveChild, 4,
/*12458*/         OPC_Scope, 64|128,2/*320*/, /*->12781*/ // 4 children in Scope
/*12461*/           OPC_CheckOpcode, TARGET_VAL(ISD::CONDCODE),
/*12464*/           OPC_Scope, 104, /*->12570*/ // 3 children in Scope
/*12466*/             OPC_CheckPredicate, 2, // Predicate_COND_EQ
/*12468*/             OPC_MoveParent,
/*12469*/             OPC_CheckType, MVT::i32,
/*12471*/             OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*12473*/             OPC_EmitInteger, MVT::i32, 0, 
/*12476*/             OPC_EmitInteger, MVT::i32, 0, 
/*12479*/             OPC_EmitInteger, MVT::i32, 0, 
/*12482*/             OPC_EmitInteger, MVT::i32, 0, 
/*12485*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12497*/             OPC_EmitInteger, MVT::i32, 0, 
/*12500*/             OPC_EmitInteger, MVT::i32, 0, 
/*12503*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12515*/             OPC_EmitInteger, MVT::i32, 0, 
/*12518*/             OPC_EmitInteger, MVT::i32, 0, 
/*12521*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12533*/             OPC_EmitInteger, MVT::i32, 1, 
/*12536*/             OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*12539*/             OPC_EmitInteger, MVT::i32, 0, 
/*12542*/             OPC_EmitInteger, MVT::i32, 0, 
/*12545*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CNDE_INT), 0,
                          1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                      // Src: (selectcc:i32 i32:i32:$src0, 0:i32, i32:i32:$src1, i32:i32:$src2, (cond:Other)<<P:Predicate_COND_EQ>>) - Complexity = 8
                      // Dst: (CNDE_INT:i32 i32:i32:$src0, i32:i32:$src1, i32:i32:$src2)
/*12570*/           /*Scope*/ 104, /*->12675*/
/*12571*/             OPC_CheckPredicate, 4, // Predicate_COND_GE
/*12573*/             OPC_MoveParent,
/*12574*/             OPC_CheckType, MVT::i32,
/*12576*/             OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*12578*/             OPC_EmitInteger, MVT::i32, 0, 
/*12581*/             OPC_EmitInteger, MVT::i32, 0, 
/*12584*/             OPC_EmitInteger, MVT::i32, 0, 
/*12587*/             OPC_EmitInteger, MVT::i32, 0, 
/*12590*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12602*/             OPC_EmitInteger, MVT::i32, 0, 
/*12605*/             OPC_EmitInteger, MVT::i32, 0, 
/*12608*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12620*/             OPC_EmitInteger, MVT::i32, 0, 
/*12623*/             OPC_EmitInteger, MVT::i32, 0, 
/*12626*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12638*/             OPC_EmitInteger, MVT::i32, 1, 
/*12641*/             OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*12644*/             OPC_EmitInteger, MVT::i32, 0, 
/*12647*/             OPC_EmitInteger, MVT::i32, 0, 
/*12650*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CNDGE_INT), 0,
                          1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                      // Src: (selectcc:i32 i32:i32:$src0, 0:i32, i32:i32:$src1, i32:i32:$src2, (cond:Other)<<P:Predicate_COND_GE>>) - Complexity = 8
                      // Dst: (CNDGE_INT:i32 i32:i32:$src0, i32:i32:$src1, i32:i32:$src2)
/*12675*/           /*Scope*/ 104, /*->12780*/
/*12676*/             OPC_CheckPredicate, 3, // Predicate_COND_GT
/*12678*/             OPC_MoveParent,
/*12679*/             OPC_CheckType, MVT::i32,
/*12681*/             OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*12683*/             OPC_EmitInteger, MVT::i32, 0, 
/*12686*/             OPC_EmitInteger, MVT::i32, 0, 
/*12689*/             OPC_EmitInteger, MVT::i32, 0, 
/*12692*/             OPC_EmitInteger, MVT::i32, 0, 
/*12695*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12707*/             OPC_EmitInteger, MVT::i32, 0, 
/*12710*/             OPC_EmitInteger, MVT::i32, 0, 
/*12713*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12725*/             OPC_EmitInteger, MVT::i32, 0, 
/*12728*/             OPC_EmitInteger, MVT::i32, 0, 
/*12731*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12743*/             OPC_EmitInteger, MVT::i32, 1, 
/*12746*/             OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*12749*/             OPC_EmitInteger, MVT::i32, 0, 
/*12752*/             OPC_EmitInteger, MVT::i32, 0, 
/*12755*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CNDGT_INT), 0,
                          1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                      // Src: (selectcc:i32 i32:i32:$src0, 0:i32, i32:i32:$src1, i32:i32:$src2, (cond:Other)<<P:Predicate_COND_GT>>) - Complexity = 8
                      // Dst: (CNDGT_INT:i32 i32:i32:$src0, i32:i32:$src1, i32:i32:$src2)
/*12780*/           0, /*End of Scope*/
/*12781*/         /*Scope*/ 104, /*->12886*/
/*12782*/           OPC_CheckCondCode, ISD::SETEQ,
/*12784*/           OPC_MoveParent,
/*12785*/           OPC_CheckType, MVT::f32,
/*12787*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*12789*/           OPC_EmitInteger, MVT::i32, 0, 
/*12792*/           OPC_EmitInteger, MVT::i32, 0, 
/*12795*/           OPC_EmitInteger, MVT::i32, 0, 
/*12798*/           OPC_EmitInteger, MVT::i32, 0, 
/*12801*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12813*/           OPC_EmitInteger, MVT::i32, 0, 
/*12816*/           OPC_EmitInteger, MVT::i32, 0, 
/*12819*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12831*/           OPC_EmitInteger, MVT::i32, 0, 
/*12834*/           OPC_EmitInteger, MVT::i32, 0, 
/*12837*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12849*/           OPC_EmitInteger, MVT::i32, 1, 
/*12852*/           OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*12855*/           OPC_EmitInteger, MVT::i32, 0, 
/*12858*/           OPC_EmitInteger, MVT::i32, 0, 
/*12861*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CNDE_INT), 0,
                        1/*#VTs*/, MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:f32 i32:i32:$src0, 0:i32, f32:f32:$src1, f32:f32:$src2, SETEQ:Other) - Complexity = 8
                    // Dst: (CNDE_INT:f32 ?:i32:$src0, ?:f32:$src1, ?:f32:$src2)
/*12886*/         /*Scope*/ 104, /*->12991*/
/*12887*/           OPC_CheckCondCode, ISD::SETGT,
/*12889*/           OPC_MoveParent,
/*12890*/           OPC_CheckType, MVT::f32,
/*12892*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*12894*/           OPC_EmitInteger, MVT::i32, 0, 
/*12897*/           OPC_EmitInteger, MVT::i32, 0, 
/*12900*/           OPC_EmitInteger, MVT::i32, 0, 
/*12903*/           OPC_EmitInteger, MVT::i32, 0, 
/*12906*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12918*/           OPC_EmitInteger, MVT::i32, 0, 
/*12921*/           OPC_EmitInteger, MVT::i32, 0, 
/*12924*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12936*/           OPC_EmitInteger, MVT::i32, 0, 
/*12939*/           OPC_EmitInteger, MVT::i32, 0, 
/*12942*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12954*/           OPC_EmitInteger, MVT::i32, 1, 
/*12957*/           OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*12960*/           OPC_EmitInteger, MVT::i32, 0, 
/*12963*/           OPC_EmitInteger, MVT::i32, 0, 
/*12966*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CNDGT_INT), 0,
                        1/*#VTs*/, MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:f32 i32:i32:$src0, 0:i32, f32:f32:$src1, f32:f32:$src2, SETGT:Other) - Complexity = 8
                    // Dst: (CNDGT_INT:f32 ?:i32:$src0, ?:f32:$src1, ?:f32:$src2)
/*12991*/         /*Scope*/ 104, /*->13096*/
/*12992*/           OPC_CheckCondCode, ISD::SETGE,
/*12994*/           OPC_MoveParent,
/*12995*/           OPC_CheckType, MVT::f32,
/*12997*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*12999*/           OPC_EmitInteger, MVT::i32, 0, 
/*13002*/           OPC_EmitInteger, MVT::i32, 0, 
/*13005*/           OPC_EmitInteger, MVT::i32, 0, 
/*13008*/           OPC_EmitInteger, MVT::i32, 0, 
/*13011*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*13023*/           OPC_EmitInteger, MVT::i32, 0, 
/*13026*/           OPC_EmitInteger, MVT::i32, 0, 
/*13029*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*13041*/           OPC_EmitInteger, MVT::i32, 0, 
/*13044*/           OPC_EmitInteger, MVT::i32, 0, 
/*13047*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*13059*/           OPC_EmitInteger, MVT::i32, 1, 
/*13062*/           OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*13065*/           OPC_EmitInteger, MVT::i32, 0, 
/*13068*/           OPC_EmitInteger, MVT::i32, 0, 
/*13071*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CNDGE_INT), 0,
                        1/*#VTs*/, MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:f32 i32:i32:$src0, 0:i32, f32:f32:$src1, f32:f32:$src2, SETGE:Other) - Complexity = 8
                    // Dst: (CNDGE_INT:f32 ?:i32:$src0, ?:f32:$src1, ?:f32:$src2)
/*13096*/         0, /*End of Scope*/
/*13097*/       /*Scope*/ 123, /*->13221*/
/*13098*/         OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*13109*/         OPC_MoveParent,
/*13110*/         OPC_RecordChild2, // #1 = $src1
/*13111*/         OPC_RecordChild3, // #2 = $src2
/*13112*/         OPC_MoveChild, 4,
/*13114*/         OPC_CheckOpcode, TARGET_VAL(ISD::CONDCODE),
/*13117*/         OPC_CheckPredicate, 3, // Predicate_COND_GT
/*13119*/         OPC_MoveParent,
/*13120*/         OPC_CheckType, MVT::i32,
/*13122*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*13124*/         OPC_EmitInteger, MVT::i32, 0, 
/*13127*/         OPC_EmitInteger, MVT::i32, 0, 
/*13130*/         OPC_EmitInteger, MVT::i32, 0, 
/*13133*/         OPC_EmitInteger, MVT::i32, 0, 
/*13136*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*13148*/         OPC_EmitInteger, MVT::i32, 0, 
/*13151*/         OPC_EmitInteger, MVT::i32, 0, 
/*13154*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*13166*/         OPC_EmitInteger, MVT::i32, 0, 
/*13169*/         OPC_EmitInteger, MVT::i32, 0, 
/*13172*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*13184*/         OPC_EmitInteger, MVT::i32, 1, 
/*13187*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*13190*/         OPC_EmitInteger, MVT::i32, 0, 
/*13193*/         OPC_EmitInteger, MVT::i32, 0, 
/*13196*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CNDGE_INT), 0,
                      1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (selectcc:i32 i32:i32:$src0, -1:i32, i32:i32:$src1, i32:i32:$src2, (cond:Other)<<P:Predicate_COND_GT>>) - Complexity = 8
                  // Dst: (CNDGE_INT:i32 ?:i32:$src0, ?:i32:$src1, ?:i32:$src2)
/*13221*/       0, /*End of Scope*/
/*13222*/     0, /*End of Scope*/
/*13223*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 22|128,20/*2582*/,  TARGET_VAL(ISD::LOAD),// ->15810
/*13228*/   OPC_RecordMemRef,
/*13229*/   OPC_RecordNode,   // #0 = 'ld' chained node
/*13230*/   OPC_Scope, 13|128,2/*269*/, /*->13502*/ // 7 children in Scope
/*13233*/     OPC_RecordChild1, // #1 = $src_gpr
/*13234*/     OPC_CheckChild1Type, MVT::i32,
/*13236*/     OPC_CheckPredicate, 10, // Predicate_unindexedload
/*13238*/     OPC_CheckType, MVT::i32,
/*13240*/     OPC_Scope, 44, /*->13286*/ // 8 children in Scope
/*13242*/       OPC_CheckPredicate, 11, // Predicate_az_extload
/*13244*/       OPC_Scope, 19, /*->13265*/ // 2 children in Scope
/*13246*/         OPC_CheckPredicate, 12, // Predicate_az_extloadi8
/*13248*/         OPC_CheckPredicate, 13, // Predicate_load_param_exti8
/*13250*/         OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*13252*/         OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*13255*/         OPC_EmitMergeInputChains1_0,
/*13256*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_PARAM_8_eg), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_load_param_exti8>> - Complexity = 13
                  // Dst: (VTX_READ_PARAM_8_eg:i32 ADDRVTX_READ:i32:$src_gpr)
/*13265*/       /*Scope*/ 19, /*->13285*/
/*13266*/         OPC_CheckPredicate, 14, // Predicate_az_extloadi16
/*13268*/         OPC_CheckPredicate, 15, // Predicate_load_param_exti16
/*13270*/         OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*13272*/         OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*13275*/         OPC_EmitMergeInputChains1_0,
/*13276*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_PARAM_16_eg), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_load_param_exti16>> - Complexity = 13
                  // Dst: (VTX_READ_PARAM_16_eg:i32 ADDRVTX_READ:i32:$src_gpr)
/*13285*/       0, /*End of Scope*/
/*13286*/     /*Scope*/ 19, /*->13306*/
/*13287*/       OPC_CheckPredicate, 16, // Predicate_load
/*13289*/       OPC_CheckPredicate, 17, // Predicate_load_param
/*13291*/       OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*13293*/       OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*13296*/       OPC_EmitMergeInputChains1_0,
/*13297*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_PARAM_32_eg), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_param>> - Complexity = 13
                // Dst: (VTX_READ_PARAM_32_eg:i32 ADDRVTX_READ:i32:$src_gpr)
/*13306*/     /*Scope*/ 44, /*->13351*/
/*13307*/       OPC_CheckPredicate, 11, // Predicate_az_extload
/*13309*/       OPC_Scope, 19, /*->13330*/ // 2 children in Scope
/*13311*/         OPC_CheckPredicate, 12, // Predicate_az_extloadi8
/*13313*/         OPC_CheckPredicate, 18, // Predicate_az_extloadi8_global
/*13315*/         OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*13317*/         OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*13320*/         OPC_EmitMergeInputChains1_0,
/*13321*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_GLOBAL_8_eg), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_az_extloadi8_global>> - Complexity = 13
                  // Dst: (VTX_READ_GLOBAL_8_eg:i32 ADDRVTX_READ:i32:$src_gpr)
/*13330*/       /*Scope*/ 19, /*->13350*/
/*13331*/         OPC_CheckPredicate, 14, // Predicate_az_extloadi16
/*13333*/         OPC_CheckPredicate, 19, // Predicate_az_extloadi16_global
/*13335*/         OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*13337*/         OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*13340*/         OPC_EmitMergeInputChains1_0,
/*13341*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_GLOBAL_16_eg), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_az_extloadi16_global>> - Complexity = 13
                  // Dst: (VTX_READ_GLOBAL_16_eg:i32 ADDRVTX_READ:i32:$src_gpr)
/*13350*/       0, /*End of Scope*/
/*13351*/     /*Scope*/ 19, /*->13371*/
/*13352*/       OPC_CheckPredicate, 16, // Predicate_load
/*13354*/       OPC_CheckPredicate, 20, // Predicate_global_load
/*13356*/       OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*13358*/       OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*13361*/       OPC_EmitMergeInputChains1_0,
/*13362*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_GLOBAL_32_eg), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 13
                // Dst: (VTX_READ_GLOBAL_32_eg:i32 ADDRVTX_READ:i32:$src_gpr)
/*13371*/     /*Scope*/ 44, /*->13416*/
/*13372*/       OPC_CheckPredicate, 11, // Predicate_az_extload
/*13374*/       OPC_Scope, 19, /*->13395*/ // 2 children in Scope
/*13376*/         OPC_CheckPredicate, 12, // Predicate_az_extloadi8
/*13378*/         OPC_CheckPredicate, 13, // Predicate_load_param_exti8
/*13380*/         OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*13382*/         OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*13385*/         OPC_EmitMergeInputChains1_0,
/*13386*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_PARAM_8_cm), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_load_param_exti8>> - Complexity = 13
                  // Dst: (VTX_READ_PARAM_8_cm:i32 ADDRVTX_READ:i32:$src_gpr)
/*13395*/       /*Scope*/ 19, /*->13415*/
/*13396*/         OPC_CheckPredicate, 14, // Predicate_az_extloadi16
/*13398*/         OPC_CheckPredicate, 15, // Predicate_load_param_exti16
/*13400*/         OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*13402*/         OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*13405*/         OPC_EmitMergeInputChains1_0,
/*13406*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_PARAM_16_cm), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_load_param_exti16>> - Complexity = 13
                  // Dst: (VTX_READ_PARAM_16_cm:i32 ADDRVTX_READ:i32:$src_gpr)
/*13415*/       0, /*End of Scope*/
/*13416*/     /*Scope*/ 19, /*->13436*/
/*13417*/       OPC_CheckPredicate, 16, // Predicate_load
/*13419*/       OPC_CheckPredicate, 17, // Predicate_load_param
/*13421*/       OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*13423*/       OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*13426*/       OPC_EmitMergeInputChains1_0,
/*13427*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_PARAM_32_cm), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_param>> - Complexity = 13
                // Dst: (VTX_READ_PARAM_32_cm:i32 ADDRVTX_READ:i32:$src_gpr)
/*13436*/     /*Scope*/ 44, /*->13481*/
/*13437*/       OPC_CheckPredicate, 11, // Predicate_az_extload
/*13439*/       OPC_Scope, 19, /*->13460*/ // 2 children in Scope
/*13441*/         OPC_CheckPredicate, 12, // Predicate_az_extloadi8
/*13443*/         OPC_CheckPredicate, 18, // Predicate_az_extloadi8_global
/*13445*/         OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*13447*/         OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*13450*/         OPC_EmitMergeInputChains1_0,
/*13451*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_GLOBAL_8_cm), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_az_extloadi8_global>> - Complexity = 13
                  // Dst: (VTX_READ_GLOBAL_8_cm:i32 ADDRVTX_READ:i32:$src_gpr)
/*13460*/       /*Scope*/ 19, /*->13480*/
/*13461*/         OPC_CheckPredicate, 14, // Predicate_az_extloadi16
/*13463*/         OPC_CheckPredicate, 19, // Predicate_az_extloadi16_global
/*13465*/         OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*13467*/         OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*13470*/         OPC_EmitMergeInputChains1_0,
/*13471*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_GLOBAL_16_cm), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_az_extloadi16_global>> - Complexity = 13
                  // Dst: (VTX_READ_GLOBAL_16_cm:i32 ADDRVTX_READ:i32:$src_gpr)
/*13480*/       0, /*End of Scope*/
/*13481*/     /*Scope*/ 19, /*->13501*/
/*13482*/       OPC_CheckPredicate, 16, // Predicate_load
/*13484*/       OPC_CheckPredicate, 20, // Predicate_global_load
/*13486*/       OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*13488*/       OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*13491*/       OPC_EmitMergeInputChains1_0,
/*13492*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_GLOBAL_32_cm), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 13
                // Dst: (VTX_READ_GLOBAL_32_cm:i32 ADDRVTX_READ:i32:$src_gpr)
/*13501*/     0, /*End of Scope*/
/*13502*/   /*Scope*/ 105|128,6/*873*/, /*->14377*/
/*13504*/     OPC_MoveChild, 1,
/*13506*/     OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*13509*/     OPC_RecordChild0, // #1 = $sbase
/*13510*/     OPC_RecordChild1, // #2 = $offset
/*13511*/     OPC_Scope, 33|128,3/*417*/, /*->13931*/ // 2 children in Scope
/*13514*/       OPC_MoveChild, 1,
/*13516*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13519*/       OPC_Scope, 69, /*->13590*/ // 3 children in Scope
/*13521*/         OPC_CheckPredicate, 21, // Predicate_IMM8bitDWORD
/*13523*/         OPC_MoveParent,
/*13524*/         OPC_MoveParent,
/*13525*/         OPC_CheckPredicate, 10, // Predicate_unindexedload
/*13527*/         OPC_CheckPredicate, 16, // Predicate_load
/*13529*/         OPC_CheckPredicate, 22, // Predicate_constant_load
/*13531*/         OPC_SwitchType /*3 cases */, 17,  MVT::i32,// ->13551
/*13534*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*13536*/           OPC_EmitMergeInputChains1_0,
/*13537*/           OPC_EmitConvertToTarget, 2,
/*13539*/           OPC_EmitNodeXForm, 0, 3, // anonymous.val.396
/*13542*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORD_IMM), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4, 
                    // Src: (ld:i32 (SIadd64bit32bit:i64 i64:i64:$sbase, (imm:i32)<<P:Predicate_IMM8bitDWORD>><<X:anonymous.val.396>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 11
                    // Dst: (S_LOAD_DWORD_IMM:i32 ?:i64:$sbase, (anonymous.val.396:i32 (imm:i32)<<P:Predicate_IMM8bitDWORD>>:$offset))
                  /*SwitchType*/ 17,  MVT::i64,// ->13570
/*13553*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*13555*/           OPC_EmitMergeInputChains1_0,
/*13556*/           OPC_EmitConvertToTarget, 2,
/*13558*/           OPC_EmitNodeXForm, 0, 3, // anonymous.val.396
/*13561*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORDX2_IMM), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 4, 
                    // Src: (ld:i64 (SIadd64bit32bit:i64 i64:i64:$sbase, (imm:i32)<<P:Predicate_IMM8bitDWORD>><<X:anonymous.val.396>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 11
                    // Dst: (S_LOAD_DWORDX2_IMM:i64 ?:i64:$sbase, (anonymous.val.396:i32 (imm:i32)<<P:Predicate_IMM8bitDWORD>>:$offset))
                  /*SwitchType*/ 17,  MVT::i128,// ->13589
/*13572*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*13574*/           OPC_EmitMergeInputChains1_0,
/*13575*/           OPC_EmitConvertToTarget, 2,
/*13577*/           OPC_EmitNodeXForm, 0, 3, // anonymous.val.396
/*13580*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORDX4_IMM), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i128, 2/*#Ops*/, 1, 4, 
                    // Src: (ld:i128 (SIadd64bit32bit:i64 i64:i64:$sbase, (imm:i32)<<P:Predicate_IMM8bitDWORD>><<X:anonymous.val.396>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 11
                    // Dst: (S_LOAD_DWORDX4_IMM:i128 ?:i64:$sbase, (anonymous.val.396:i32 (imm:i32)<<P:Predicate_IMM8bitDWORD>>:$offset))
                  0, // EndSwitchType
/*13590*/       /*Scope*/ 127|128,1/*255*/, /*->13847*/
/*13592*/         OPC_CheckPredicate, 23, // Predicate_IMM12bit
/*13594*/         OPC_MoveParent,
/*13595*/         OPC_CheckType, MVT::i64,
/*13597*/         OPC_MoveParent,
/*13598*/         OPC_CheckPredicate, 10, // Predicate_unindexedload
/*13600*/         OPC_Scope, 35, /*->13637*/ // 6 children in Scope
/*13602*/           OPC_CheckPredicate, 24, // Predicate_sextload
/*13604*/           OPC_CheckPredicate, 25, // Predicate_sextloadi8
/*13606*/           OPC_CheckPredicate, 26, // Predicate_sextloadi8_global
/*13608*/           OPC_CheckType, MVT::i32,
/*13610*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*13612*/           OPC_EmitMergeInputChains1_0,
/*13613*/           OPC_EmitInteger, MVT::i64, 0, 
/*13616*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 3,  // Results = #4
/*13624*/           OPC_EmitNodeXForm, 1, 2, // as_i16imm
/*13627*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_SBYTE_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 1, 5, 
                    // Src: (ld:i32 (add:i64 i64:i64:$ptr, (imm:i64)<<P:Predicate_IMM12bit>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>><<P:Predicate_sextloadi8_global>> - Complexity = 11
                    // Dst: (BUFFER_LOAD_SBYTE_ADDR64:i32 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, (as_i16imm:i16 ?:i64:$offset))
/*13637*/         /*Scope*/ 35, /*->13673*/
/*13638*/           OPC_CheckPredicate, 11, // Predicate_az_extload
/*13640*/           OPC_CheckPredicate, 12, // Predicate_az_extloadi8
/*13642*/           OPC_CheckPredicate, 18, // Predicate_az_extloadi8_global
/*13644*/           OPC_CheckType, MVT::i32,
/*13646*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*13648*/           OPC_EmitMergeInputChains1_0,
/*13649*/           OPC_EmitInteger, MVT::i64, 0, 
/*13652*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 3,  // Results = #4
/*13660*/           OPC_EmitNodeXForm, 1, 2, // as_i16imm
/*13663*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_UBYTE_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 1, 5, 
                    // Src: (ld:i32 (add:i64 i64:i64:$ptr, (imm:i64)<<P:Predicate_IMM12bit>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_az_extloadi8_global>> - Complexity = 11
                    // Dst: (BUFFER_LOAD_UBYTE_ADDR64:i32 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, (as_i16imm:i16 ?:i64:$offset))
/*13673*/         /*Scope*/ 35, /*->13709*/
/*13674*/           OPC_CheckPredicate, 24, // Predicate_sextload
/*13676*/           OPC_CheckPredicate, 27, // Predicate_sextloadi16
/*13678*/           OPC_CheckPredicate, 28, // Predicate_sextloadi16_global
/*13680*/           OPC_CheckType, MVT::i32,
/*13682*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*13684*/           OPC_EmitMergeInputChains1_0,
/*13685*/           OPC_EmitInteger, MVT::i64, 0, 
/*13688*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 3,  // Results = #4
/*13696*/           OPC_EmitNodeXForm, 1, 2, // as_i16imm
/*13699*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_SSHORT_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 1, 5, 
                    // Src: (ld:i32 (add:i64 i64:i64:$ptr, (imm:i64)<<P:Predicate_IMM12bit>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>><<P:Predicate_sextloadi16_global>> - Complexity = 11
                    // Dst: (BUFFER_LOAD_SSHORT_ADDR64:i32 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, (as_i16imm:i16 ?:i64:$offset))
/*13709*/         /*Scope*/ 35, /*->13745*/
/*13710*/           OPC_CheckPredicate, 11, // Predicate_az_extload
/*13712*/           OPC_CheckPredicate, 14, // Predicate_az_extloadi16
/*13714*/           OPC_CheckPredicate, 19, // Predicate_az_extloadi16_global
/*13716*/           OPC_CheckType, MVT::i32,
/*13718*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*13720*/           OPC_EmitMergeInputChains1_0,
/*13721*/           OPC_EmitInteger, MVT::i64, 0, 
/*13724*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 3,  // Results = #4
/*13732*/           OPC_EmitNodeXForm, 1, 2, // as_i16imm
/*13735*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_USHORT_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 1, 5, 
                    // Src: (ld:i32 (add:i64 i64:i64:$ptr, (imm:i64)<<P:Predicate_IMM12bit>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_az_extloadi16_global>> - Complexity = 11
                    // Dst: (BUFFER_LOAD_USHORT_ADDR64:i32 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, (as_i16imm:i16 ?:i64:$offset))
/*13745*/         /*Scope*/ 64, /*->13810*/
/*13746*/           OPC_CheckPredicate, 16, // Predicate_load
/*13748*/           OPC_CheckPredicate, 20, // Predicate_global_load
/*13750*/           OPC_SwitchType /*2 cases */, 27,  MVT::i32,// ->13780
/*13753*/             OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*13755*/             OPC_EmitMergeInputChains1_0,
/*13756*/             OPC_EmitInteger, MVT::i64, 0, 
/*13759*/             OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                          1/*#VTs*/, MVT::i128, 1/*#Ops*/, 3,  // Results = #4
/*13767*/             OPC_EmitNodeXForm, 1, 2, // as_i16imm
/*13770*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORD_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 1, 5, 
                      // Src: (ld:i32 (add:i64 i64:i64:$ptr, (imm:i64)<<P:Predicate_IMM12bit>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 11
                      // Dst: (BUFFER_LOAD_DWORD_ADDR64:i32 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, (as_i16imm:i16 ?:i64:$offset))
                    /*SwitchType*/ 27,  MVT::i64,// ->13809
/*13782*/             OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*13784*/             OPC_EmitMergeInputChains1_0,
/*13785*/             OPC_EmitInteger, MVT::i64, 0, 
/*13788*/             OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                          1/*#VTs*/, MVT::i128, 1/*#Ops*/, 3,  // Results = #4
/*13796*/             OPC_EmitNodeXForm, 1, 2, // as_i16imm
/*13799*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORDX2_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 4, 1, 5, 
                      // Src: (ld:i64 (add:i64 i64:i64:$ptr, (imm:i64)<<P:Predicate_IMM12bit>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 11
                      // Dst: (BUFFER_LOAD_DWORDX2_ADDR64:i64 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, (as_i16imm:i16 ?:i64:$offset))
                    0, // EndSwitchType
/*13810*/         /*Scope*/ 35, /*->13846*/
/*13811*/           OPC_CheckPredicate, 11, // Predicate_az_extload
/*13813*/           OPC_CheckPredicate, 29, // Predicate_az_extloadi32
/*13815*/           OPC_CheckPredicate, 30, // Predicate_az_extloadi32_global
/*13817*/           OPC_CheckType, MVT::i64,
/*13819*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*13821*/           OPC_EmitMergeInputChains1_0,
/*13822*/           OPC_EmitInteger, MVT::i64, 0, 
/*13825*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 3,  // Results = #4
/*13833*/           OPC_EmitNodeXForm, 1, 2, // as_i16imm
/*13836*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORDX2_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 3/*#Ops*/, 4, 1, 5, 
                    // Src: (ld:i64 (add:i64 i64:i64:$ptr, (imm:i64)<<P:Predicate_IMM12bit>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi32>><<P:Predicate_az_extloadi32_global>> - Complexity = 11
                    // Dst: (BUFFER_LOAD_DWORDX2_ADDR64:i64 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, (as_i16imm:i16 ?:i64:$offset))
/*13846*/         0, /*End of Scope*/
/*13847*/       /*Scope*/ 82, /*->13930*/
/*13848*/         OPC_MoveParent,
/*13849*/         OPC_MoveParent,
/*13850*/         OPC_CheckPredicate, 10, // Predicate_unindexedload
/*13852*/         OPC_CheckPredicate, 16, // Predicate_load
/*13854*/         OPC_CheckPredicate, 22, // Predicate_constant_load
/*13856*/         OPC_SwitchType /*3 cases */, 22,  MVT::i32,// ->13881
/*13859*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*13861*/           OPC_EmitMergeInputChains1_0,
/*13862*/           OPC_EmitConvertToTarget, 2,
/*13864*/           OPC_EmitNode, TARGET_VAL(AMDGPU::S_MOV_B32), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*13872*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORD_SGPR), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4, 
                    // Src: (ld:i32 (SIadd64bit32bit:i64 i64:i64:$sbase, (imm:i32):$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 10
                    // Dst: (S_LOAD_DWORD_SGPR:i32 ?:i64:$sbase, (S_MOV_B32:i32 (imm:i32):$offset))
                  /*SwitchType*/ 22,  MVT::i64,// ->13905
/*13883*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*13885*/           OPC_EmitMergeInputChains1_0,
/*13886*/           OPC_EmitConvertToTarget, 2,
/*13888*/           OPC_EmitNode, TARGET_VAL(AMDGPU::S_MOV_B32), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*13896*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORDX2_SGPR), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 4, 
                    // Src: (ld:i64 (SIadd64bit32bit:i64 i64:i64:$sbase, (imm:i32):$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 10
                    // Dst: (S_LOAD_DWORDX2_SGPR:i64 ?:i64:$sbase, (S_MOV_B32:i32 (imm:i32):$offset))
                  /*SwitchType*/ 22,  MVT::i128,// ->13929
/*13907*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*13909*/           OPC_EmitMergeInputChains1_0,
/*13910*/           OPC_EmitConvertToTarget, 2,
/*13912*/           OPC_EmitNode, TARGET_VAL(AMDGPU::S_MOV_B32), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*13920*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORDX4_SGPR), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i128, 2/*#Ops*/, 1, 4, 
                    // Src: (ld:i128 (SIadd64bit32bit:i64 i64:i64:$sbase, (imm:i32):$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 10
                    // Dst: (S_LOAD_DWORDX4_SGPR:i128 ?:i64:$sbase, (S_MOV_B32:i32 (imm:i32):$offset))
                  0, // EndSwitchType
/*13930*/       0, /*End of Scope*/
/*13931*/     /*Scope*/ 59|128,3/*443*/, /*->14376*/
/*13933*/       OPC_CheckType, MVT::i64,
/*13935*/       OPC_MoveParent,
/*13936*/       OPC_CheckPredicate, 10, // Predicate_unindexedload
/*13938*/       OPC_Scope, 62, /*->14002*/ // 6 children in Scope
/*13940*/         OPC_CheckPredicate, 24, // Predicate_sextload
/*13942*/         OPC_CheckPredicate, 25, // Predicate_sextloadi8
/*13944*/         OPC_CheckType, MVT::i32,
/*13946*/         OPC_Scope, 26, /*->13974*/ // 2 children in Scope
/*13948*/           OPC_CheckPredicate, 26, // Predicate_sextloadi8_global
/*13950*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*13952*/           OPC_EmitMergeInputChains1_0,
/*13953*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*13961*/           OPC_EmitInteger, MVT::i16, 0, 
/*13964*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_SBYTE_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 2, 4, 
                    // Src: (ld:i32 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>><<P:Predicate_sextloadi8_global>> - Complexity = 7
                    // Dst: (BUFFER_LOAD_SBYTE_ADDR64:i32 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*13974*/         /*Scope*/ 26, /*->14001*/
/*13975*/           OPC_CheckPredicate, 31, // Predicate_sextloadi8_constant
/*13977*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*13979*/           OPC_EmitMergeInputChains1_0,
/*13980*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*13988*/           OPC_EmitInteger, MVT::i16, 0, 
/*13991*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_SBYTE_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 2, 4, 
                    // Src: (ld:i32 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>><<P:Predicate_sextloadi8_constant>> - Complexity = 7
                    // Dst: (BUFFER_LOAD_SBYTE_ADDR64:i32 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*14001*/         0, /*End of Scope*/
/*14002*/       /*Scope*/ 62, /*->14065*/
/*14003*/         OPC_CheckPredicate, 11, // Predicate_az_extload
/*14005*/         OPC_CheckPredicate, 12, // Predicate_az_extloadi8
/*14007*/         OPC_CheckType, MVT::i32,
/*14009*/         OPC_Scope, 26, /*->14037*/ // 2 children in Scope
/*14011*/           OPC_CheckPredicate, 18, // Predicate_az_extloadi8_global
/*14013*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14015*/           OPC_EmitMergeInputChains1_0,
/*14016*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*14024*/           OPC_EmitInteger, MVT::i16, 0, 
/*14027*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_UBYTE_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 2, 4, 
                    // Src: (ld:i32 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_az_extloadi8_global>> - Complexity = 7
                    // Dst: (BUFFER_LOAD_UBYTE_ADDR64:i32 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*14037*/         /*Scope*/ 26, /*->14064*/
/*14038*/           OPC_CheckPredicate, 32, // Predicate_az_extloadi8_constant
/*14040*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14042*/           OPC_EmitMergeInputChains1_0,
/*14043*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*14051*/           OPC_EmitInteger, MVT::i16, 0, 
/*14054*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_UBYTE_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 2, 4, 
                    // Src: (ld:i32 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_az_extloadi8_constant>> - Complexity = 7
                    // Dst: (BUFFER_LOAD_UBYTE_ADDR64:i32 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*14064*/         0, /*End of Scope*/
/*14065*/       /*Scope*/ 62, /*->14128*/
/*14066*/         OPC_CheckPredicate, 24, // Predicate_sextload
/*14068*/         OPC_CheckPredicate, 27, // Predicate_sextloadi16
/*14070*/         OPC_CheckType, MVT::i32,
/*14072*/         OPC_Scope, 26, /*->14100*/ // 2 children in Scope
/*14074*/           OPC_CheckPredicate, 28, // Predicate_sextloadi16_global
/*14076*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14078*/           OPC_EmitMergeInputChains1_0,
/*14079*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*14087*/           OPC_EmitInteger, MVT::i16, 0, 
/*14090*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_SSHORT_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 2, 4, 
                    // Src: (ld:i32 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>><<P:Predicate_sextloadi16_global>> - Complexity = 7
                    // Dst: (BUFFER_LOAD_SSHORT_ADDR64:i32 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*14100*/         /*Scope*/ 26, /*->14127*/
/*14101*/           OPC_CheckPredicate, 33, // Predicate_sextloadi16_constant
/*14103*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14105*/           OPC_EmitMergeInputChains1_0,
/*14106*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*14114*/           OPC_EmitInteger, MVT::i16, 0, 
/*14117*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_SSHORT_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 2, 4, 
                    // Src: (ld:i32 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>><<P:Predicate_sextloadi16_constant>> - Complexity = 7
                    // Dst: (BUFFER_LOAD_SSHORT_ADDR64:i32 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*14127*/         0, /*End of Scope*/
/*14128*/       /*Scope*/ 62, /*->14191*/
/*14129*/         OPC_CheckPredicate, 11, // Predicate_az_extload
/*14131*/         OPC_CheckPredicate, 14, // Predicate_az_extloadi16
/*14133*/         OPC_CheckType, MVT::i32,
/*14135*/         OPC_Scope, 26, /*->14163*/ // 2 children in Scope
/*14137*/           OPC_CheckPredicate, 19, // Predicate_az_extloadi16_global
/*14139*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14141*/           OPC_EmitMergeInputChains1_0,
/*14142*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*14150*/           OPC_EmitInteger, MVT::i16, 0, 
/*14153*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_USHORT_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 2, 4, 
                    // Src: (ld:i32 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_az_extloadi16_global>> - Complexity = 7
                    // Dst: (BUFFER_LOAD_USHORT_ADDR64:i32 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*14163*/         /*Scope*/ 26, /*->14190*/
/*14164*/           OPC_CheckPredicate, 34, // Predicate_az_extloadi16_constant
/*14166*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14168*/           OPC_EmitMergeInputChains1_0,
/*14169*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*14177*/           OPC_EmitInteger, MVT::i16, 0, 
/*14180*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_USHORT_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 2, 4, 
                    // Src: (ld:i32 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_az_extloadi16_constant>> - Complexity = 7
                    // Dst: (BUFFER_LOAD_USHORT_ADDR64:i32 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*14190*/         0, /*End of Scope*/
/*14191*/       /*Scope*/ 120, /*->14312*/
/*14192*/         OPC_CheckPredicate, 16, // Predicate_load
/*14194*/         OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->14253
/*14197*/           OPC_Scope, 26, /*->14225*/ // 2 children in Scope
/*14199*/             OPC_CheckPredicate, 20, // Predicate_global_load
/*14201*/             OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14203*/             OPC_EmitMergeInputChains1_0,
/*14204*/             OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                          1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*14212*/             OPC_EmitInteger, MVT::i16, 0, 
/*14215*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORD_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 2, 4, 
                      // Src: (ld:i32 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 7
                      // Dst: (BUFFER_LOAD_DWORD_ADDR64:i32 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*14225*/           /*Scope*/ 26, /*->14252*/
/*14226*/             OPC_CheckPredicate, 22, // Predicate_constant_load
/*14228*/             OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14230*/             OPC_EmitMergeInputChains1_0,
/*14231*/             OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                          1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*14239*/             OPC_EmitInteger, MVT::i16, 0, 
/*14242*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORD_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 2, 4, 
                      // Src: (ld:i32 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 7
                      // Dst: (BUFFER_LOAD_DWORD_ADDR64:i32 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*14252*/           0, /*End of Scope*/
                  /*SwitchType*/ 56,  MVT::i64,// ->14311
/*14255*/           OPC_Scope, 26, /*->14283*/ // 2 children in Scope
/*14257*/             OPC_CheckPredicate, 20, // Predicate_global_load
/*14259*/             OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14261*/             OPC_EmitMergeInputChains1_0,
/*14262*/             OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                          1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*14270*/             OPC_EmitInteger, MVT::i16, 0, 
/*14273*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORDX2_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 2, 4, 
                      // Src: (ld:i64 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 7
                      // Dst: (BUFFER_LOAD_DWORDX2_ADDR64:i64 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*14283*/           /*Scope*/ 26, /*->14310*/
/*14284*/             OPC_CheckPredicate, 22, // Predicate_constant_load
/*14286*/             OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14288*/             OPC_EmitMergeInputChains1_0,
/*14289*/             OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                          1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*14297*/             OPC_EmitInteger, MVT::i16, 0, 
/*14300*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORDX2_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 2, 4, 
                      // Src: (ld:i64 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 7
                      // Dst: (BUFFER_LOAD_DWORDX2_ADDR64:i64 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*14310*/           0, /*End of Scope*/
                  0, // EndSwitchType
/*14312*/       /*Scope*/ 62, /*->14375*/
/*14313*/         OPC_CheckPredicate, 11, // Predicate_az_extload
/*14315*/         OPC_CheckPredicate, 29, // Predicate_az_extloadi32
/*14317*/         OPC_CheckType, MVT::i64,
/*14319*/         OPC_Scope, 26, /*->14347*/ // 2 children in Scope
/*14321*/           OPC_CheckPredicate, 30, // Predicate_az_extloadi32_global
/*14323*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14325*/           OPC_EmitMergeInputChains1_0,
/*14326*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*14334*/           OPC_EmitInteger, MVT::i16, 0, 
/*14337*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORDX2_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 2, 4, 
                    // Src: (ld:i64 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi32>><<P:Predicate_az_extloadi32_global>> - Complexity = 7
                    // Dst: (BUFFER_LOAD_DWORDX2_ADDR64:i64 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*14347*/         /*Scope*/ 26, /*->14374*/
/*14348*/           OPC_CheckPredicate, 35, // Predicate_az_extloadi32_constant
/*14350*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14352*/           OPC_EmitMergeInputChains1_0,
/*14353*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*14361*/           OPC_EmitInteger, MVT::i16, 0, 
/*14364*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORDX2_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 2, 4, 
                    // Src: (ld:i64 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi32>><<P:Predicate_az_extloadi32_constant>> - Complexity = 7
                    // Dst: (BUFFER_LOAD_DWORDX2_ADDR64:i64 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*14374*/         0, /*End of Scope*/
/*14375*/       0, /*End of Scope*/
/*14376*/     0, /*End of Scope*/
/*14377*/   /*Scope*/ 74|128,5/*714*/, /*->15093*/
/*14379*/     OPC_RecordChild1, // #1 = $src0
/*14380*/     OPC_Scope, 14|128,3/*398*/, /*->14781*/ // 2 children in Scope
/*14383*/       OPC_CheckChild1Type, MVT::i32,
/*14385*/       OPC_CheckPredicate, 10, // Predicate_unindexedload
/*14387*/       OPC_CheckType, MVT::i32,
/*14389*/       OPC_Scope, 31, /*->14422*/ // 9 children in Scope
/*14391*/         OPC_CheckPredicate, 24, // Predicate_sextload
/*14393*/         OPC_CheckPredicate, 25, // Predicate_sextloadi8
/*14395*/         OPC_CheckPredicate, 36, // Predicate_sextloadi8_local
/*14397*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14399*/         OPC_EmitMergeInputChains1_0,
/*14400*/         OPC_EmitInteger, MVT::i1, 0, 
/*14403*/         OPC_EmitInteger, MVT::i8, 0, 
/*14406*/         OPC_EmitInteger, MVT::i8, 0, 
/*14409*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::DS_READ_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 2, 1, 1, 1, 3, 4, 
                  // Src: (ld:i32 i32:i32:$src0)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>><<P:Predicate_sextloadi8_local>> - Complexity = 4
                  // Dst: (DS_READ_I8:i32 0:i1, ?:i32:$src0, ?:i32:$src0, ?:i32:$src0, 0:i8, 0:i8)
/*14422*/       /*Scope*/ 31, /*->14454*/
/*14423*/         OPC_CheckPredicate, 11, // Predicate_az_extload
/*14425*/         OPC_CheckPredicate, 12, // Predicate_az_extloadi8
/*14427*/         OPC_CheckPredicate, 37, // Predicate_az_extloadi8_local
/*14429*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14431*/         OPC_EmitMergeInputChains1_0,
/*14432*/         OPC_EmitInteger, MVT::i1, 0, 
/*14435*/         OPC_EmitInteger, MVT::i8, 0, 
/*14438*/         OPC_EmitInteger, MVT::i8, 0, 
/*14441*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::DS_READ_U8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 2, 1, 1, 1, 3, 4, 
                  // Src: (ld:i32 i32:i32:$src0)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_az_extloadi8_local>> - Complexity = 4
                  // Dst: (DS_READ_U8:i32 0:i1, ?:i32:$src0, ?:i32:$src0, ?:i32:$src0, 0:i8, 0:i8)
/*14454*/       /*Scope*/ 31, /*->14486*/
/*14455*/         OPC_CheckPredicate, 24, // Predicate_sextload
/*14457*/         OPC_CheckPredicate, 27, // Predicate_sextloadi16
/*14459*/         OPC_CheckPredicate, 38, // Predicate_sextloadi16_local
/*14461*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14463*/         OPC_EmitMergeInputChains1_0,
/*14464*/         OPC_EmitInteger, MVT::i1, 0, 
/*14467*/         OPC_EmitInteger, MVT::i8, 0, 
/*14470*/         OPC_EmitInteger, MVT::i8, 0, 
/*14473*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::DS_READ_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 2, 1, 1, 1, 3, 4, 
                  // Src: (ld:i32 i32:i32:$src0)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>><<P:Predicate_sextloadi16_local>> - Complexity = 4
                  // Dst: (DS_READ_I16:i32 0:i1, ?:i32:$src0, ?:i32:$src0, ?:i32:$src0, 0:i8, 0:i8)
/*14486*/       /*Scope*/ 31, /*->14518*/
/*14487*/         OPC_CheckPredicate, 11, // Predicate_az_extload
/*14489*/         OPC_CheckPredicate, 14, // Predicate_az_extloadi16
/*14491*/         OPC_CheckPredicate, 39, // Predicate_az_extloadi16_local
/*14493*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14495*/         OPC_EmitMergeInputChains1_0,
/*14496*/         OPC_EmitInteger, MVT::i1, 0, 
/*14499*/         OPC_EmitInteger, MVT::i8, 0, 
/*14502*/         OPC_EmitInteger, MVT::i8, 0, 
/*14505*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::DS_READ_U16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 2, 1, 1, 1, 3, 4, 
                  // Src: (ld:i32 i32:i32:$src0)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_az_extloadi16_local>> - Complexity = 4
                  // Dst: (DS_READ_U16:i32 0:i1, ?:i32:$src0, ?:i32:$src0, ?:i32:$src0, 0:i8, 0:i8)
/*14518*/       /*Scope*/ 73, /*->14592*/
/*14519*/         OPC_CheckPredicate, 16, // Predicate_load
/*14521*/         OPC_CheckPredicate, 40, // Predicate_local_load
/*14523*/         OPC_Scope, 25, /*->14550*/ // 2 children in Scope
/*14525*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14527*/           OPC_EmitMergeInputChains1_0,
/*14528*/           OPC_EmitInteger, MVT::i1, 0, 
/*14531*/           OPC_EmitInteger, MVT::i8, 0, 
/*14534*/           OPC_EmitInteger, MVT::i8, 0, 
/*14537*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::DS_READ_B32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 6/*#Ops*/, 2, 1, 1, 1, 3, 4, 
                    // Src: (ld:i32 i32:i32:$src0)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_local_load>> - Complexity = 4
                    // Dst: (DS_READ_B32:i32 0:i1, ?:i32:$src0, ?:i32:$src0, ?:i32:$src0, 0:i8, 0:i8)
/*14550*/         /*Scope*/ 40, /*->14591*/
/*14551*/           OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*14553*/           OPC_EmitMergeInputChains1_0,
/*14554*/           OPC_EmitInteger, MVT::i32, 0, 
/*14557*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*14569*/           OPC_EmitInteger, MVT::i32, 1, 
/*14572*/           OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*14575*/           OPC_EmitInteger, MVT::i32, 0, 
/*14578*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::LDS_READ_RET), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 6/*#Ops*/, 1, 2, 3, 4, 5, 6, 
                    // Src: (ld:i32 R600_Reg32:i32:$src0)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_local_load>> - Complexity = 4
                    // Dst: (LDS_READ_RET:i32 R600_Reg32:i32:$src0)
/*14591*/         0, /*End of Scope*/
/*14592*/       /*Scope*/ 46, /*->14639*/
/*14593*/         OPC_CheckPredicate, 24, // Predicate_sextload
/*14595*/         OPC_CheckPredicate, 25, // Predicate_sextloadi8
/*14597*/         OPC_CheckPredicate, 36, // Predicate_sextloadi8_local
/*14599*/         OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*14601*/         OPC_EmitMergeInputChains1_0,
/*14602*/         OPC_EmitInteger, MVT::i32, 0, 
/*14605*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*14617*/         OPC_EmitInteger, MVT::i32, 1, 
/*14620*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*14623*/         OPC_EmitInteger, MVT::i32, 0, 
/*14626*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::LDS_BYTE_READ_RET), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 1, 2, 3, 4, 5, 6, 
                  // Src: (ld:i32 i32:i32:$src0)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>><<P:Predicate_sextloadi8_local>> - Complexity = 4
                  // Dst: (LDS_BYTE_READ_RET:i32 i32:i32:$src0)
/*14639*/       /*Scope*/ 46, /*->14686*/
/*14640*/         OPC_CheckPredicate, 11, // Predicate_az_extload
/*14642*/         OPC_CheckPredicate, 12, // Predicate_az_extloadi8
/*14644*/         OPC_CheckPredicate, 37, // Predicate_az_extloadi8_local
/*14646*/         OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*14648*/         OPC_EmitMergeInputChains1_0,
/*14649*/         OPC_EmitInteger, MVT::i32, 0, 
/*14652*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*14664*/         OPC_EmitInteger, MVT::i32, 1, 
/*14667*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*14670*/         OPC_EmitInteger, MVT::i32, 0, 
/*14673*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::LDS_UBYTE_READ_RET), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 1, 2, 3, 4, 5, 6, 
                  // Src: (ld:i32 i32:i32:$src0)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_az_extloadi8_local>> - Complexity = 4
                  // Dst: (LDS_UBYTE_READ_RET:i32 i32:i32:$src0)
/*14686*/       /*Scope*/ 46, /*->14733*/
/*14687*/         OPC_CheckPredicate, 24, // Predicate_sextload
/*14689*/         OPC_CheckPredicate, 27, // Predicate_sextloadi16
/*14691*/         OPC_CheckPredicate, 38, // Predicate_sextloadi16_local
/*14693*/         OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*14695*/         OPC_EmitMergeInputChains1_0,
/*14696*/         OPC_EmitInteger, MVT::i32, 0, 
/*14699*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*14711*/         OPC_EmitInteger, MVT::i32, 1, 
/*14714*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*14717*/         OPC_EmitInteger, MVT::i32, 0, 
/*14720*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::LDS_SHORT_READ_RET), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 1, 2, 3, 4, 5, 6, 
                  // Src: (ld:i32 i32:i32:$src0)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>><<P:Predicate_sextloadi16_local>> - Complexity = 4
                  // Dst: (LDS_SHORT_READ_RET:i32 i32:i32:$src0)
/*14733*/       /*Scope*/ 46, /*->14780*/
/*14734*/         OPC_CheckPredicate, 11, // Predicate_az_extload
/*14736*/         OPC_CheckPredicate, 14, // Predicate_az_extloadi16
/*14738*/         OPC_CheckPredicate, 39, // Predicate_az_extloadi16_local
/*14740*/         OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*14742*/         OPC_EmitMergeInputChains1_0,
/*14743*/         OPC_EmitInteger, MVT::i32, 0, 
/*14746*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*14758*/         OPC_EmitInteger, MVT::i32, 1, 
/*14761*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*14764*/         OPC_EmitInteger, MVT::i32, 0, 
/*14767*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::LDS_USHORT_READ_RET), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 1, 2, 3, 4, 5, 6, 
                  // Src: (ld:i32 i32:i32:$src0)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_az_extloadi16_local>> - Complexity = 4
                  // Dst: (LDS_USHORT_READ_RET:i32 i32:i32:$src0)
/*14780*/       0, /*End of Scope*/
/*14781*/     /*Scope*/ 53|128,2/*309*/, /*->15092*/
/*14783*/       OPC_CheckChild1Type, MVT::i64,
/*14785*/       OPC_CheckPredicate, 10, // Predicate_unindexedload
/*14787*/       OPC_Scope, 57, /*->14846*/ // 7 children in Scope
/*14789*/         OPC_CheckPredicate, 16, // Predicate_load
/*14791*/         OPC_CheckPredicate, 22, // Predicate_constant_load
/*14793*/         OPC_SwitchType /*3 cases */, 15,  MVT::i32,// ->14811
/*14796*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14798*/           OPC_EmitMergeInputChains1_0,
/*14799*/           OPC_EmitInteger, MVT::i32, 0, 
/*14802*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORD_IMM), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                    // Src: (ld:i32 i64:i64:$sbase)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 4
                    // Dst: (S_LOAD_DWORD_IMM:i32 ?:i64:$sbase, 0:i32)
                  /*SwitchType*/ 15,  MVT::i64,// ->14828
/*14813*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14815*/           OPC_EmitMergeInputChains1_0,
/*14816*/           OPC_EmitInteger, MVT::i32, 0, 
/*14819*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORDX2_IMM), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                    // Src: (ld:i64 i64:i64:$sbase)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 4
                    // Dst: (S_LOAD_DWORDX2_IMM:i64 ?:i64:$sbase, 0:i32)
                  /*SwitchType*/ 15,  MVT::i128,// ->14845
/*14830*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14832*/           OPC_EmitMergeInputChains1_0,
/*14833*/           OPC_EmitInteger, MVT::i32, 0, 
/*14836*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORDX4_IMM), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i128, 2/*#Ops*/, 1, 2, 
                    // Src: (ld:i128 i64:i64:$sbase)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 4
                    // Dst: (S_LOAD_DWORDX4_IMM:i128 ?:i64:$sbase, 0:i32)
                  0, // EndSwitchType
/*14846*/       /*Scope*/ 35, /*->14882*/
/*14847*/         OPC_CheckPredicate, 24, // Predicate_sextload
/*14849*/         OPC_CheckPredicate, 25, // Predicate_sextloadi8
/*14851*/         OPC_CheckPredicate, 26, // Predicate_sextloadi8_global
/*14853*/         OPC_CheckType, MVT::i32,
/*14855*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14857*/         OPC_EmitMergeInputChains1_0,
/*14858*/         OPC_EmitInteger, MVT::i64, 0, 
/*14861*/         OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i128, 1/*#Ops*/, 2,  // Results = #3
/*14869*/         OPC_EmitInteger, MVT::i16, 0, 
/*14872*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_SBYTE_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 1, 4, 
                  // Src: (ld:i32 i64:i64:$ptr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>><<P:Predicate_sextloadi8_global>> - Complexity = 4
                  // Dst: (BUFFER_LOAD_SBYTE_ADDR64:i32 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, 0:i16)
/*14882*/       /*Scope*/ 35, /*->14918*/
/*14883*/         OPC_CheckPredicate, 11, // Predicate_az_extload
/*14885*/         OPC_CheckPredicate, 12, // Predicate_az_extloadi8
/*14887*/         OPC_CheckPredicate, 18, // Predicate_az_extloadi8_global
/*14889*/         OPC_CheckType, MVT::i32,
/*14891*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14893*/         OPC_EmitMergeInputChains1_0,
/*14894*/         OPC_EmitInteger, MVT::i64, 0, 
/*14897*/         OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i128, 1/*#Ops*/, 2,  // Results = #3
/*14905*/         OPC_EmitInteger, MVT::i16, 0, 
/*14908*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_UBYTE_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 1, 4, 
                  // Src: (ld:i32 i64:i64:$ptr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_az_extloadi8_global>> - Complexity = 4
                  // Dst: (BUFFER_LOAD_UBYTE_ADDR64:i32 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, 0:i16)
/*14918*/       /*Scope*/ 35, /*->14954*/
/*14919*/         OPC_CheckPredicate, 24, // Predicate_sextload
/*14921*/         OPC_CheckPredicate, 27, // Predicate_sextloadi16
/*14923*/         OPC_CheckPredicate, 28, // Predicate_sextloadi16_global
/*14925*/         OPC_CheckType, MVT::i32,
/*14927*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14929*/         OPC_EmitMergeInputChains1_0,
/*14930*/         OPC_EmitInteger, MVT::i64, 0, 
/*14933*/         OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i128, 1/*#Ops*/, 2,  // Results = #3
/*14941*/         OPC_EmitInteger, MVT::i16, 0, 
/*14944*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_SSHORT_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 1, 4, 
                  // Src: (ld:i32 i64:i64:$ptr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>><<P:Predicate_sextloadi16_global>> - Complexity = 4
                  // Dst: (BUFFER_LOAD_SSHORT_ADDR64:i32 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, 0:i16)
/*14954*/       /*Scope*/ 35, /*->14990*/
/*14955*/         OPC_CheckPredicate, 11, // Predicate_az_extload
/*14957*/         OPC_CheckPredicate, 14, // Predicate_az_extloadi16
/*14959*/         OPC_CheckPredicate, 19, // Predicate_az_extloadi16_global
/*14961*/         OPC_CheckType, MVT::i32,
/*14963*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14965*/         OPC_EmitMergeInputChains1_0,
/*14966*/         OPC_EmitInteger, MVT::i64, 0, 
/*14969*/         OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i128, 1/*#Ops*/, 2,  // Results = #3
/*14977*/         OPC_EmitInteger, MVT::i16, 0, 
/*14980*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_USHORT_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 1, 4, 
                  // Src: (ld:i32 i64:i64:$ptr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_az_extloadi16_global>> - Complexity = 4
                  // Dst: (BUFFER_LOAD_USHORT_ADDR64:i32 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, 0:i16)
/*14990*/       /*Scope*/ 64, /*->15055*/
/*14991*/         OPC_CheckPredicate, 16, // Predicate_load
/*14993*/         OPC_CheckPredicate, 20, // Predicate_global_load
/*14995*/         OPC_SwitchType /*2 cases */, 27,  MVT::i32,// ->15025
/*14998*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15000*/           OPC_EmitMergeInputChains1_0,
/*15001*/           OPC_EmitInteger, MVT::i64, 0, 
/*15004*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 2,  // Results = #3
/*15012*/           OPC_EmitInteger, MVT::i16, 0, 
/*15015*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORD_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 1, 4, 
                    // Src: (ld:i32 i64:i64:$ptr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 4
                    // Dst: (BUFFER_LOAD_DWORD_ADDR64:i32 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, 0:i16)
                  /*SwitchType*/ 27,  MVT::i64,// ->15054
/*15027*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15029*/           OPC_EmitMergeInputChains1_0,
/*15030*/           OPC_EmitInteger, MVT::i64, 0, 
/*15033*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 2,  // Results = #3
/*15041*/           OPC_EmitInteger, MVT::i16, 0, 
/*15044*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORDX2_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 1, 4, 
                    // Src: (ld:i64 i64:i64:$ptr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 4
                    // Dst: (BUFFER_LOAD_DWORDX2_ADDR64:i64 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, 0:i16)
                  0, // EndSwitchType
/*15055*/       /*Scope*/ 35, /*->15091*/
/*15056*/         OPC_CheckPredicate, 11, // Predicate_az_extload
/*15058*/         OPC_CheckPredicate, 29, // Predicate_az_extloadi32
/*15060*/         OPC_CheckPredicate, 30, // Predicate_az_extloadi32_global
/*15062*/         OPC_CheckType, MVT::i64,
/*15064*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15066*/         OPC_EmitMergeInputChains1_0,
/*15067*/         OPC_EmitInteger, MVT::i64, 0, 
/*15070*/         OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i128, 1/*#Ops*/, 2,  // Results = #3
/*15078*/         OPC_EmitInteger, MVT::i16, 0, 
/*15081*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORDX2_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 1, 4, 
                  // Src: (ld:i64 i64:i64:$ptr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi32>><<P:Predicate_az_extloadi32_global>> - Complexity = 4
                  // Dst: (BUFFER_LOAD_DWORDX2_ADDR64:i64 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, 0:i16)
/*15091*/       0, /*End of Scope*/
/*15092*/     0, /*End of Scope*/
/*15093*/   /*Scope*/ 77, /*->15171*/
/*15094*/     OPC_MoveChild, 1,
/*15096*/     OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*15099*/     OPC_RecordChild0, // #1 = $sbase
/*15100*/     OPC_RecordChild1, // #2 = $offset
/*15101*/     OPC_MoveChild, 1,
/*15103*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*15106*/     OPC_Scope, 29, /*->15137*/ // 2 children in Scope
/*15108*/       OPC_CheckPredicate, 21, // Predicate_IMM8bitDWORD
/*15110*/       OPC_MoveParent,
/*15111*/       OPC_MoveParent,
/*15112*/       OPC_CheckPredicate, 10, // Predicate_unindexedload
/*15114*/       OPC_CheckPredicate, 16, // Predicate_load
/*15116*/       OPC_CheckPredicate, 22, // Predicate_constant_load
/*15118*/       OPC_CheckType, MVT::f32,
/*15120*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15122*/       OPC_EmitMergeInputChains1_0,
/*15123*/       OPC_EmitConvertToTarget, 2,
/*15125*/       OPC_EmitNodeXForm, 0, 3, // anonymous.val.396
/*15128*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORD_IMM), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 4, 
                // Src: (ld:f32 (SIadd64bit32bit:i64 i64:i64:$sbase, (imm:i32)<<P:Predicate_IMM8bitDWORD>><<X:anonymous.val.396>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 11
                // Dst: (S_LOAD_DWORD_IMM:f32 ?:i64:$sbase, (anonymous.val.396:i32 (imm:i32)<<P:Predicate_IMM8bitDWORD>>:$offset))
/*15137*/     /*Scope*/ 32, /*->15170*/
/*15138*/       OPC_MoveParent,
/*15139*/       OPC_MoveParent,
/*15140*/       OPC_CheckPredicate, 10, // Predicate_unindexedload
/*15142*/       OPC_CheckPredicate, 16, // Predicate_load
/*15144*/       OPC_CheckPredicate, 22, // Predicate_constant_load
/*15146*/       OPC_CheckType, MVT::f32,
/*15148*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15150*/       OPC_EmitMergeInputChains1_0,
/*15151*/       OPC_EmitConvertToTarget, 2,
/*15153*/       OPC_EmitNode, TARGET_VAL(AMDGPU::S_MOV_B32), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*15161*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORD_SGPR), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 4, 
                // Src: (ld:f32 (SIadd64bit32bit:i64 i64:i64:$sbase, (imm:i32):$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 10
                // Dst: (S_LOAD_DWORD_SGPR:f32 ?:i64:$sbase, (S_MOV_B32:i32 (imm:i32):$offset))
/*15170*/     0, /*End of Scope*/
/*15171*/   /*Scope*/ 67|128,1/*195*/, /*->15368*/
/*15173*/     OPC_RecordChild1, // #1 = $sbase
/*15174*/     OPC_Scope, 25, /*->15201*/ // 2 children in Scope
/*15176*/       OPC_CheckChild1Type, MVT::i64,
/*15178*/       OPC_CheckPredicate, 10, // Predicate_unindexedload
/*15180*/       OPC_CheckPredicate, 16, // Predicate_load
/*15182*/       OPC_CheckPredicate, 22, // Predicate_constant_load
/*15184*/       OPC_CheckType, MVT::f32,
/*15186*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15188*/       OPC_EmitMergeInputChains1_0,
/*15189*/       OPC_EmitInteger, MVT::i32, 0, 
/*15192*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORD_IMM), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 2, 
                // Src: (ld:f32 i64:i64:$sbase)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 4
                // Dst: (S_LOAD_DWORD_IMM:f32 ?:i64:$sbase, 0:i32)
/*15201*/     /*Scope*/ 36|128,1/*164*/, /*->15367*/
/*15203*/       OPC_CheckChild1Type, MVT::i32,
/*15205*/       OPC_CheckPredicate, 10, // Predicate_unindexedload
/*15207*/       OPC_CheckPredicate, 16, // Predicate_load
/*15209*/       OPC_Scope, 38, /*->15249*/ // 4 children in Scope
/*15211*/         OPC_CheckPredicate, 17, // Predicate_load_param
/*15213*/         OPC_SwitchType /*2 cases */, 15,  MVT::v2i32,// ->15231
/*15216*/           OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*15218*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*15221*/           OPC_EmitMergeInputChains1_0,
/*15222*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_PARAM_64_eg), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v2i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:v2i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_param>> - Complexity = 13
                    // Dst: (VTX_READ_PARAM_64_eg:v2i32 ADDRVTX_READ:i32:$src_gpr)
                  /*SwitchType*/ 15,  MVT::v4i32,// ->15248
/*15233*/           OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*15235*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*15238*/           OPC_EmitMergeInputChains1_0,
/*15239*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_PARAM_128_eg), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:v4i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_param>> - Complexity = 13
                    // Dst: (VTX_READ_PARAM_128_eg:v4i32 ADDRVTX_READ:i32:$src_gpr)
                  0, // EndSwitchType
/*15249*/       /*Scope*/ 38, /*->15288*/
/*15250*/         OPC_CheckPredicate, 20, // Predicate_global_load
/*15252*/         OPC_SwitchType /*2 cases */, 15,  MVT::v2i32,// ->15270
/*15255*/           OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*15257*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*15260*/           OPC_EmitMergeInputChains1_0,
/*15261*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_GLOBAL_64_eg), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v2i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:v2i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 13
                    // Dst: (VTX_READ_GLOBAL_64_eg:v2i32 ADDRVTX_READ:i32:$src_gpr)
                  /*SwitchType*/ 15,  MVT::v4i32,// ->15287
/*15272*/           OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*15274*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*15277*/           OPC_EmitMergeInputChains1_0,
/*15278*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_GLOBAL_128_eg), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:v4i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 13
                    // Dst: (VTX_READ_GLOBAL_128_eg:v4i32 ADDRVTX_READ:i32:$src_gpr)
                  0, // EndSwitchType
/*15288*/       /*Scope*/ 38, /*->15327*/
/*15289*/         OPC_CheckPredicate, 17, // Predicate_load_param
/*15291*/         OPC_SwitchType /*2 cases */, 15,  MVT::v2i32,// ->15309
/*15294*/           OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*15296*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*15299*/           OPC_EmitMergeInputChains1_0,
/*15300*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_PARAM_64_cm), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v2i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:v2i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_param>> - Complexity = 13
                    // Dst: (VTX_READ_PARAM_64_cm:v2i32 ADDRVTX_READ:i32:$src_gpr)
                  /*SwitchType*/ 15,  MVT::v4i32,// ->15326
/*15311*/           OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*15313*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*15316*/           OPC_EmitMergeInputChains1_0,
/*15317*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_PARAM_128_cm), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:v4i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_param>> - Complexity = 13
                    // Dst: (VTX_READ_PARAM_128_cm:v4i32 ADDRVTX_READ:i32:$src_gpr)
                  0, // EndSwitchType
/*15327*/       /*Scope*/ 38, /*->15366*/
/*15328*/         OPC_CheckPredicate, 20, // Predicate_global_load
/*15330*/         OPC_SwitchType /*2 cases */, 15,  MVT::v2i32,// ->15348
/*15333*/           OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*15335*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*15338*/           OPC_EmitMergeInputChains1_0,
/*15339*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_GLOBAL_64_cm), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v2i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:v2i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 13
                    // Dst: (VTX_READ_GLOBAL_64_cm:v2i32 ADDRVTX_READ:i32:$src_gpr)
                  /*SwitchType*/ 15,  MVT::v4i32,// ->15365
/*15350*/           OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*15352*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*15355*/           OPC_EmitMergeInputChains1_0,
/*15356*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_GLOBAL_128_cm), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:v4i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 13
                    // Dst: (VTX_READ_GLOBAL_128_cm:v4i32 ADDRVTX_READ:i32:$src_gpr)
                  0, // EndSwitchType
/*15366*/       0, /*End of Scope*/
/*15367*/     0, /*End of Scope*/
/*15368*/   /*Scope*/ 71|128,2/*327*/, /*->15697*/
/*15370*/     OPC_MoveChild, 1,
/*15372*/     OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*15375*/     OPC_RecordChild0, // #1 = $sbase
/*15376*/     OPC_RecordChild1, // #2 = $offset
/*15377*/     OPC_Scope, 62|128,1/*190*/, /*->15570*/ // 2 children in Scope
/*15380*/       OPC_MoveChild, 1,
/*15382*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*15385*/       OPC_Scope, 50, /*->15437*/ // 3 children in Scope
/*15387*/         OPC_CheckPredicate, 21, // Predicate_IMM8bitDWORD
/*15389*/         OPC_MoveParent,
/*15390*/         OPC_MoveParent,
/*15391*/         OPC_CheckPredicate, 10, // Predicate_unindexedload
/*15393*/         OPC_CheckPredicate, 16, // Predicate_load
/*15395*/         OPC_CheckPredicate, 22, // Predicate_constant_load
/*15397*/         OPC_SwitchType /*2 cases */, 17,  MVT::v2i32,// ->15417
/*15400*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15402*/           OPC_EmitMergeInputChains1_0,
/*15403*/           OPC_EmitConvertToTarget, 2,
/*15405*/           OPC_EmitNodeXForm, 0, 3, // anonymous.val.396
/*15408*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORDX2_IMM), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v2i32, 2/*#Ops*/, 1, 4, 
                    // Src: (ld:v2i32 (SIadd64bit32bit:i64 i64:i64:$sbase, (imm:i32)<<P:Predicate_IMM8bitDWORD>><<X:anonymous.val.396>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 11
                    // Dst: (S_LOAD_DWORDX2_IMM:v2i32 ?:i64:$sbase, (anonymous.val.396:i32 (imm:i32)<<P:Predicate_IMM8bitDWORD>>:$offset))
                  /*SwitchType*/ 17,  MVT::v32i8,// ->15436
/*15419*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15421*/           OPC_EmitMergeInputChains1_0,
/*15422*/           OPC_EmitConvertToTarget, 2,
/*15424*/           OPC_EmitNodeXForm, 0, 3, // anonymous.val.396
/*15427*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORDX8_IMM), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v32i8, 2/*#Ops*/, 1, 4, 
                    // Src: (ld:v32i8 (SIadd64bit32bit:i64 i64:i64:$sbase, (imm:i32)<<P:Predicate_IMM8bitDWORD>><<X:anonymous.val.396>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 11
                    // Dst: (S_LOAD_DWORDX8_IMM:v32i8 ?:i64:$sbase, (anonymous.val.396:i32 (imm:i32)<<P:Predicate_IMM8bitDWORD>>:$offset))
                  0, // EndSwitchType
/*15437*/       /*Scope*/ 72, /*->15510*/
/*15438*/         OPC_CheckPredicate, 23, // Predicate_IMM12bit
/*15440*/         OPC_MoveParent,
/*15441*/         OPC_CheckType, MVT::i64,
/*15443*/         OPC_MoveParent,
/*15444*/         OPC_CheckPredicate, 10, // Predicate_unindexedload
/*15446*/         OPC_CheckPredicate, 16, // Predicate_load
/*15448*/         OPC_CheckPredicate, 20, // Predicate_global_load
/*15450*/         OPC_SwitchType /*2 cases */, 27,  MVT::v2i32,// ->15480
/*15453*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15455*/           OPC_EmitMergeInputChains1_0,
/*15456*/           OPC_EmitInteger, MVT::i64, 0, 
/*15459*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 3,  // Results = #4
/*15467*/           OPC_EmitNodeXForm, 1, 2, // as_i16imm
/*15470*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORDX2_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v2i32, 3/*#Ops*/, 4, 1, 5, 
                    // Src: (ld:v2i32 (add:i64 i64:i64:$ptr, (imm:i64)<<P:Predicate_IMM12bit>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 11
                    // Dst: (BUFFER_LOAD_DWORDX2_ADDR64:v2i32 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, (as_i16imm:i16 ?:i64:$offset))
                  /*SwitchType*/ 27,  MVT::v4i32,// ->15509
/*15482*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15484*/           OPC_EmitMergeInputChains1_0,
/*15485*/           OPC_EmitInteger, MVT::i64, 0, 
/*15488*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 3,  // Results = #4
/*15496*/           OPC_EmitNodeXForm, 1, 2, // as_i16imm
/*15499*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORDX4_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 4, 1, 5, 
                    // Src: (ld:v4i32 (add:i64 i64:i64:$ptr, (imm:i64)<<P:Predicate_IMM12bit>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 11
                    // Dst: (BUFFER_LOAD_DWORDX4_ADDR64:v4i32 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, (as_i16imm:i16 ?:i64:$offset))
                  0, // EndSwitchType
/*15510*/       /*Scope*/ 58, /*->15569*/
/*15511*/         OPC_MoveParent,
/*15512*/         OPC_MoveParent,
/*15513*/         OPC_CheckPredicate, 10, // Predicate_unindexedload
/*15515*/         OPC_CheckPredicate, 16, // Predicate_load
/*15517*/         OPC_CheckPredicate, 22, // Predicate_constant_load
/*15519*/         OPC_SwitchType /*2 cases */, 22,  MVT::v2i32,// ->15544
/*15522*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15524*/           OPC_EmitMergeInputChains1_0,
/*15525*/           OPC_EmitConvertToTarget, 2,
/*15527*/           OPC_EmitNode, TARGET_VAL(AMDGPU::S_MOV_B32), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*15535*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORDX2_SGPR), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v2i32, 2/*#Ops*/, 1, 4, 
                    // Src: (ld:v2i32 (SIadd64bit32bit:i64 i64:i64:$sbase, (imm:i32):$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 10
                    // Dst: (S_LOAD_DWORDX2_SGPR:v2i32 ?:i64:$sbase, (S_MOV_B32:i32 (imm:i32):$offset))
                  /*SwitchType*/ 22,  MVT::v32i8,// ->15568
/*15546*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15548*/           OPC_EmitMergeInputChains1_0,
/*15549*/           OPC_EmitConvertToTarget, 2,
/*15551*/           OPC_EmitNode, TARGET_VAL(AMDGPU::S_MOV_B32), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*15559*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORDX8_SGPR), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v32i8, 2/*#Ops*/, 1, 4, 
                    // Src: (ld:v32i8 (SIadd64bit32bit:i64 i64:i64:$sbase, (imm:i32):$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 10
                    // Dst: (S_LOAD_DWORDX8_SGPR:v32i8 ?:i64:$sbase, (S_MOV_B32:i32 (imm:i32):$offset))
                  0, // EndSwitchType
/*15569*/       0, /*End of Scope*/
/*15570*/     /*Scope*/ 125, /*->15696*/
/*15571*/       OPC_CheckType, MVT::i64,
/*15573*/       OPC_MoveParent,
/*15574*/       OPC_CheckPredicate, 10, // Predicate_unindexedload
/*15576*/       OPC_CheckPredicate, 16, // Predicate_load
/*15578*/       OPC_SwitchType /*2 cases */, 56,  MVT::v2i32,// ->15637
/*15581*/         OPC_Scope, 26, /*->15609*/ // 2 children in Scope
/*15583*/           OPC_CheckPredicate, 20, // Predicate_global_load
/*15585*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15587*/           OPC_EmitMergeInputChains1_0,
/*15588*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*15596*/           OPC_EmitInteger, MVT::i16, 0, 
/*15599*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORDX2_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v2i32, 3/*#Ops*/, 3, 2, 4, 
                    // Src: (ld:v2i32 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 7
                    // Dst: (BUFFER_LOAD_DWORDX2_ADDR64:v2i32 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*15609*/         /*Scope*/ 26, /*->15636*/
/*15610*/           OPC_CheckPredicate, 22, // Predicate_constant_load
/*15612*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15614*/           OPC_EmitMergeInputChains1_0,
/*15615*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*15623*/           OPC_EmitInteger, MVT::i16, 0, 
/*15626*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORDX2_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v2i32, 3/*#Ops*/, 3, 2, 4, 
                    // Src: (ld:v2i32 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 7
                    // Dst: (BUFFER_LOAD_DWORDX2_ADDR64:v2i32 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*15636*/         0, /*End of Scope*/
                /*SwitchType*/ 56,  MVT::v4i32,// ->15695
/*15639*/         OPC_Scope, 26, /*->15667*/ // 2 children in Scope
/*15641*/           OPC_CheckPredicate, 20, // Predicate_global_load
/*15643*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15645*/           OPC_EmitMergeInputChains1_0,
/*15646*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*15654*/           OPC_EmitInteger, MVT::i16, 0, 
/*15657*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORDX4_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 3, 2, 4, 
                    // Src: (ld:v4i32 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 7
                    // Dst: (BUFFER_LOAD_DWORDX4_ADDR64:v4i32 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*15667*/         /*Scope*/ 26, /*->15694*/
/*15668*/           OPC_CheckPredicate, 22, // Predicate_constant_load
/*15670*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15672*/           OPC_EmitMergeInputChains1_0,
/*15673*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*15681*/           OPC_EmitInteger, MVT::i16, 0, 
/*15684*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORDX4_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 3, 2, 4, 
                    // Src: (ld:v4i32 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 7
                    // Dst: (BUFFER_LOAD_DWORDX4_ADDR64:v4i32 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*15694*/         0, /*End of Scope*/
                0, // EndSwitchType
/*15696*/     0, /*End of Scope*/
/*15697*/   /*Scope*/ 111, /*->15809*/
/*15698*/     OPC_RecordChild1, // #1 = $sbase
/*15699*/     OPC_CheckChild1Type, MVT::i64,
/*15701*/     OPC_CheckPredicate, 10, // Predicate_unindexedload
/*15703*/     OPC_CheckPredicate, 16, // Predicate_load
/*15705*/     OPC_Scope, 38, /*->15745*/ // 2 children in Scope
/*15707*/       OPC_CheckPredicate, 22, // Predicate_constant_load
/*15709*/       OPC_SwitchType /*2 cases */, 15,  MVT::v2i32,// ->15727
/*15712*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15714*/         OPC_EmitMergeInputChains1_0,
/*15715*/         OPC_EmitInteger, MVT::i32, 0, 
/*15718*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORDX2_IMM), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::v2i32, 2/*#Ops*/, 1, 2, 
                  // Src: (ld:v2i32 i64:i64:$sbase)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 4
                  // Dst: (S_LOAD_DWORDX2_IMM:v2i32 ?:i64:$sbase, 0:i32)
                /*SwitchType*/ 15,  MVT::v32i8,// ->15744
/*15729*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15731*/         OPC_EmitMergeInputChains1_0,
/*15732*/         OPC_EmitInteger, MVT::i32, 0, 
/*15735*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORDX8_IMM), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::v32i8, 2/*#Ops*/, 1, 2, 
                  // Src: (ld:v32i8 i64:i64:$sbase)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 4
                  // Dst: (S_LOAD_DWORDX8_IMM:v32i8 ?:i64:$sbase, 0:i32)
                0, // EndSwitchType
/*15745*/     /*Scope*/ 62, /*->15808*/
/*15746*/       OPC_CheckPredicate, 20, // Predicate_global_load
/*15748*/       OPC_SwitchType /*2 cases */, 27,  MVT::v2i32,// ->15778
/*15751*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15753*/         OPC_EmitMergeInputChains1_0,
/*15754*/         OPC_EmitInteger, MVT::i64, 0, 
/*15757*/         OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i128, 1/*#Ops*/, 2,  // Results = #3
/*15765*/         OPC_EmitInteger, MVT::i16, 0, 
/*15768*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORDX2_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::v2i32, 3/*#Ops*/, 3, 1, 4, 
                  // Src: (ld:v2i32 i64:i64:$ptr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 4
                  // Dst: (BUFFER_LOAD_DWORDX2_ADDR64:v2i32 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, 0:i16)
                /*SwitchType*/ 27,  MVT::v4i32,// ->15807
/*15780*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15782*/         OPC_EmitMergeInputChains1_0,
/*15783*/         OPC_EmitInteger, MVT::i64, 0, 
/*15786*/         OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i128, 1/*#Ops*/, 2,  // Results = #3
/*15794*/         OPC_EmitInteger, MVT::i16, 0, 
/*15797*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORDX4_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 3, 1, 4, 
                  // Src: (ld:v4i32 i64:i64:$ptr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 4
                  // Dst: (BUFFER_LOAD_DWORDX4_ADDR64:v4i32 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, 0:i16)
                0, // EndSwitchType
/*15808*/     0, /*End of Scope*/
/*15809*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 102|128,11/*1510*/,  TARGET_VAL(ISD::XOR),// ->17324
/*15814*/   OPC_Scope, 32|128,2/*288*/, /*->16105*/ // 5 children in Scope
/*15817*/     OPC_RecordChild0, // #0 = $z
/*15818*/     OPC_MoveChild, 1,
/*15820*/     OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*15823*/     OPC_Scope, 62|128,1/*190*/, /*->16016*/ // 2 children in Scope
/*15826*/       OPC_RecordChild0, // #1 = $x
/*15827*/       OPC_MoveChild, 1,
/*15829*/       OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*15832*/       OPC_Scope, 13|128,1/*141*/, /*->15976*/ // 2 children in Scope
/*15835*/         OPC_RecordChild0, // #2 = $y
/*15836*/         OPC_MoveChild, 1,
/*15838*/         OPC_CheckSame, 0,
/*15840*/         OPC_MoveParent,
/*15841*/         OPC_MoveParent,
/*15842*/         OPC_MoveParent,
/*15843*/         OPC_CheckType, MVT::i32,
/*15845*/         OPC_Scope, 99, /*->15946*/ // 2 children in Scope
/*15847*/           OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*15849*/           OPC_EmitInteger, MVT::i32, 0, 
/*15852*/           OPC_EmitInteger, MVT::i32, 0, 
/*15855*/           OPC_EmitInteger, MVT::i32, 0, 
/*15858*/           OPC_EmitInteger, MVT::i32, 0, 
/*15861*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*15873*/           OPC_EmitInteger, MVT::i32, 0, 
/*15876*/           OPC_EmitInteger, MVT::i32, 0, 
/*15879*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*15891*/           OPC_EmitInteger, MVT::i32, 0, 
/*15894*/           OPC_EmitInteger, MVT::i32, 0, 
/*15897*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*15909*/           OPC_EmitInteger, MVT::i32, 1, 
/*15912*/           OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*15915*/           OPC_EmitInteger, MVT::i32, 0, 
/*15918*/           OPC_EmitInteger, MVT::i32, 0, 
/*15921*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                        1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 2, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (xor:i32 i32:i32:$z, (and:i32 i32:i32:$x, (xor:i32 i32:i32:$y, i32:i32:$z))) - Complexity = 9
                    // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*15946*/         /*Scope*/ 28, /*->15975*/
/*15947*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15949*/           OPC_EmitInteger, MVT::i32, 0, 
/*15952*/           OPC_EmitInteger, MVT::i32, 0, 
/*15955*/           OPC_EmitInteger, MVT::i32, 0, 
/*15958*/           OPC_EmitInteger, MVT::i32, 0, 
/*15961*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                        1/*#VTs*/, MVT::i32, 7/*#Ops*/, 1, 2, 0, 3, 4, 5, 6, 
                    // Src: (xor:i32 i32:i32:$z, (and:i32 i32:i32:$x, (xor:i32 i32:i32:$y, i32:i32:$z))) - Complexity = 9
                    // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*15975*/         0, /*End of Scope*/
/*15976*/       /*Scope*/ 38, /*->16015*/
/*15977*/         OPC_MoveChild, 0,
/*15979*/         OPC_CheckSame, 0,
/*15981*/         OPC_MoveParent,
/*15982*/         OPC_RecordChild1, // #2 = $y
/*15983*/         OPC_MoveParent,
/*15984*/         OPC_MoveParent,
/*15985*/         OPC_CheckType, MVT::i32,
/*15987*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15989*/         OPC_EmitInteger, MVT::i32, 0, 
/*15992*/         OPC_EmitInteger, MVT::i32, 0, 
/*15995*/         OPC_EmitInteger, MVT::i32, 0, 
/*15998*/         OPC_EmitInteger, MVT::i32, 0, 
/*16001*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                      1/*#VTs*/, MVT::i32, 7/*#Ops*/, 1, 2, 0, 3, 4, 5, 6, 
                  // Src: (xor:i32 i32:i32:$z, (and:i32 i32:i32:$x, (xor:i32 i32:i32:$z, i32:i32:$y))) - Complexity = 9
                  // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*16015*/       0, /*End of Scope*/
/*16016*/     /*Scope*/ 87, /*->16104*/
/*16017*/       OPC_MoveChild, 0,
/*16019*/       OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*16022*/       OPC_Scope, 39, /*->16063*/ // 2 children in Scope
/*16024*/         OPC_RecordChild0, // #1 = $y
/*16025*/         OPC_MoveChild, 1,
/*16027*/         OPC_CheckSame, 0,
/*16029*/         OPC_MoveParent,
/*16030*/         OPC_MoveParent,
/*16031*/         OPC_RecordChild1, // #2 = $x
/*16032*/         OPC_MoveParent,
/*16033*/         OPC_CheckType, MVT::i32,
/*16035*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*16037*/         OPC_EmitInteger, MVT::i32, 0, 
/*16040*/         OPC_EmitInteger, MVT::i32, 0, 
/*16043*/         OPC_EmitInteger, MVT::i32, 0, 
/*16046*/         OPC_EmitInteger, MVT::i32, 0, 
/*16049*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                      1/*#VTs*/, MVT::i32, 7/*#Ops*/, 2, 1, 0, 3, 4, 5, 6, 
                  // Src: (xor:i32 i32:i32:$z, (and:i32 (xor:i32 i32:i32:$y, i32:i32:$z), i32:i32:$x)) - Complexity = 9
                  // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*16063*/       /*Scope*/ 39, /*->16103*/
/*16064*/         OPC_MoveChild, 0,
/*16066*/         OPC_CheckSame, 0,
/*16068*/         OPC_MoveParent,
/*16069*/         OPC_RecordChild1, // #1 = $y
/*16070*/         OPC_MoveParent,
/*16071*/         OPC_RecordChild1, // #2 = $x
/*16072*/         OPC_MoveParent,
/*16073*/         OPC_CheckType, MVT::i32,
/*16075*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*16077*/         OPC_EmitInteger, MVT::i32, 0, 
/*16080*/         OPC_EmitInteger, MVT::i32, 0, 
/*16083*/         OPC_EmitInteger, MVT::i32, 0, 
/*16086*/         OPC_EmitInteger, MVT::i32, 0, 
/*16089*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                      1/*#VTs*/, MVT::i32, 7/*#Ops*/, 2, 1, 0, 3, 4, 5, 6, 
                  // Src: (xor:i32 i32:i32:$z, (and:i32 (xor:i32 i32:i32:$z, i32:i32:$y), i32:i32:$x)) - Complexity = 9
                  // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*16103*/       0, /*End of Scope*/
/*16104*/     0, /*End of Scope*/
/*16105*/   /*Scope*/ 45|128,1/*173*/, /*->16280*/
/*16107*/     OPC_MoveChild, 0,
/*16109*/     OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*16112*/     OPC_Scope, 82, /*->16196*/ // 2 children in Scope
/*16114*/       OPC_RecordChild0, // #0 = $x
/*16115*/       OPC_MoveChild, 1,
/*16117*/       OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*16120*/       OPC_RecordChild0, // #1 = $y
/*16121*/       OPC_RecordChild1, // #2 = $z
/*16122*/       OPC_MoveParent,
/*16123*/       OPC_MoveParent,
/*16124*/       OPC_MoveChild, 1,
/*16126*/       OPC_Scope, 33, /*->16161*/ // 2 children in Scope
/*16128*/         OPC_CheckSame, 2,
/*16130*/         OPC_MoveParent,
/*16131*/         OPC_CheckType, MVT::i32,
/*16133*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*16135*/         OPC_EmitInteger, MVT::i32, 0, 
/*16138*/         OPC_EmitInteger, MVT::i32, 0, 
/*16141*/         OPC_EmitInteger, MVT::i32, 0, 
/*16144*/         OPC_EmitInteger, MVT::i32, 0, 
/*16147*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                      1/*#VTs*/, MVT::i32, 7/*#Ops*/, 0, 1, 2, 3, 4, 5, 6, 
                  // Src: (xor:i32 (and:i32 i32:i32:$x, (xor:i32 i32:i32:$y, i32:i32:$z)), i32:i32:$z) - Complexity = 9
                  // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*16161*/       /*Scope*/ 33, /*->16195*/
/*16162*/         OPC_CheckSame, 1,
/*16164*/         OPC_MoveParent,
/*16165*/         OPC_CheckType, MVT::i32,
/*16167*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*16169*/         OPC_EmitInteger, MVT::i32, 0, 
/*16172*/         OPC_EmitInteger, MVT::i32, 0, 
/*16175*/         OPC_EmitInteger, MVT::i32, 0, 
/*16178*/         OPC_EmitInteger, MVT::i32, 0, 
/*16181*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                      1/*#VTs*/, MVT::i32, 7/*#Ops*/, 0, 2, 1, 3, 4, 5, 6, 
                  // Src: (xor:i32 (and:i32 i32:i32:$x, (xor:i32 i32:i32:$z, i32:i32:$y)), i32:i32:$z) - Complexity = 9
                  // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*16195*/       0, /*End of Scope*/
/*16196*/     /*Scope*/ 82, /*->16279*/
/*16197*/       OPC_MoveChild, 0,
/*16199*/       OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*16202*/       OPC_RecordChild0, // #0 = $y
/*16203*/       OPC_RecordChild1, // #1 = $z
/*16204*/       OPC_MoveParent,
/*16205*/       OPC_RecordChild1, // #2 = $x
/*16206*/       OPC_MoveParent,
/*16207*/       OPC_MoveChild, 1,
/*16209*/       OPC_Scope, 33, /*->16244*/ // 2 children in Scope
/*16211*/         OPC_CheckSame, 1,
/*16213*/         OPC_MoveParent,
/*16214*/         OPC_CheckType, MVT::i32,
/*16216*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*16218*/         OPC_EmitInteger, MVT::i32, 0, 
/*16221*/         OPC_EmitInteger, MVT::i32, 0, 
/*16224*/         OPC_EmitInteger, MVT::i32, 0, 
/*16227*/         OPC_EmitInteger, MVT::i32, 0, 
/*16230*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                      1/*#VTs*/, MVT::i32, 7/*#Ops*/, 2, 0, 1, 3, 4, 5, 6, 
                  // Src: (xor:i32 (and:i32 (xor:i32 i32:i32:$y, i32:i32:$z), i32:i32:$x), i32:i32:$z) - Complexity = 9
                  // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*16244*/       /*Scope*/ 33, /*->16278*/
/*16245*/         OPC_CheckSame, 0,
/*16247*/         OPC_MoveParent,
/*16248*/         OPC_CheckType, MVT::i32,
/*16250*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*16252*/         OPC_EmitInteger, MVT::i32, 0, 
/*16255*/         OPC_EmitInteger, MVT::i32, 0, 
/*16258*/         OPC_EmitInteger, MVT::i32, 0, 
/*16261*/         OPC_EmitInteger, MVT::i32, 0, 
/*16264*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                      1/*#VTs*/, MVT::i32, 7/*#Ops*/, 2, 1, 0, 3, 4, 5, 6, 
                  // Src: (xor:i32 (and:i32 (xor:i32 i32:i32:$z, i32:i32:$y), i32:i32:$x), i32:i32:$z) - Complexity = 9
                  // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*16278*/       0, /*End of Scope*/
/*16279*/     0, /*End of Scope*/
/*16280*/   /*Scope*/ 99|128,2/*355*/, /*->16637*/
/*16282*/     OPC_RecordChild0, // #0 = $z
/*16283*/     OPC_MoveChild, 1,
/*16285*/     OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*16288*/     OPC_Scope, 115, /*->16405*/ // 2 children in Scope
/*16290*/       OPC_RecordChild0, // #1 = $x
/*16291*/       OPC_MoveChild, 1,
/*16293*/       OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*16296*/       OPC_MoveChild, 0,
/*16298*/       OPC_CheckSame, 0,
/*16300*/       OPC_MoveParent,
/*16301*/       OPC_RecordChild1, // #2 = $y
/*16302*/       OPC_MoveParent,
/*16303*/       OPC_MoveParent,
/*16304*/       OPC_CheckType, MVT::i32,
/*16306*/       OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*16308*/       OPC_EmitInteger, MVT::i32, 0, 
/*16311*/       OPC_EmitInteger, MVT::i32, 0, 
/*16314*/       OPC_EmitInteger, MVT::i32, 0, 
/*16317*/       OPC_EmitInteger, MVT::i32, 0, 
/*16320*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16332*/       OPC_EmitInteger, MVT::i32, 0, 
/*16335*/       OPC_EmitInteger, MVT::i32, 0, 
/*16338*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16350*/       OPC_EmitInteger, MVT::i32, 0, 
/*16353*/       OPC_EmitInteger, MVT::i32, 0, 
/*16356*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16368*/       OPC_EmitInteger, MVT::i32, 1, 
/*16371*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*16374*/       OPC_EmitInteger, MVT::i32, 0, 
/*16377*/       OPC_EmitInteger, MVT::i32, 0, 
/*16380*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                    1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 2, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                // Src: (xor:i32 i32:i32:$z, (and:i32 i32:i32:$x, (xor:i32 i32:i32:$z, i32:i32:$y))) - Complexity = 9
                // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*16405*/     /*Scope*/ 101|128,1/*229*/, /*->16636*/
/*16407*/       OPC_MoveChild, 0,
/*16409*/       OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*16412*/       OPC_Scope, 110, /*->16524*/ // 2 children in Scope
/*16414*/         OPC_RecordChild0, // #1 = $y
/*16415*/         OPC_MoveChild, 1,
/*16417*/         OPC_CheckSame, 0,
/*16419*/         OPC_MoveParent,
/*16420*/         OPC_MoveParent,
/*16421*/         OPC_RecordChild1, // #2 = $x
/*16422*/         OPC_MoveParent,
/*16423*/         OPC_CheckType, MVT::i32,
/*16425*/         OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*16427*/         OPC_EmitInteger, MVT::i32, 0, 
/*16430*/         OPC_EmitInteger, MVT::i32, 0, 
/*16433*/         OPC_EmitInteger, MVT::i32, 0, 
/*16436*/         OPC_EmitInteger, MVT::i32, 0, 
/*16439*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16451*/         OPC_EmitInteger, MVT::i32, 0, 
/*16454*/         OPC_EmitInteger, MVT::i32, 0, 
/*16457*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16469*/         OPC_EmitInteger, MVT::i32, 0, 
/*16472*/         OPC_EmitInteger, MVT::i32, 0, 
/*16475*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16487*/         OPC_EmitInteger, MVT::i32, 1, 
/*16490*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*16493*/         OPC_EmitInteger, MVT::i32, 0, 
/*16496*/         OPC_EmitInteger, MVT::i32, 0, 
/*16499*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                      1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 2, 5, 6, 7, 1, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (xor:i32 i32:i32:$z, (and:i32 (xor:i32 i32:i32:$y, i32:i32:$z), i32:i32:$x)) - Complexity = 9
                  // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*16524*/       /*Scope*/ 110, /*->16635*/
/*16525*/         OPC_MoveChild, 0,
/*16527*/         OPC_CheckSame, 0,
/*16529*/         OPC_MoveParent,
/*16530*/         OPC_RecordChild1, // #1 = $y
/*16531*/         OPC_MoveParent,
/*16532*/         OPC_RecordChild1, // #2 = $x
/*16533*/         OPC_MoveParent,
/*16534*/         OPC_CheckType, MVT::i32,
/*16536*/         OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*16538*/         OPC_EmitInteger, MVT::i32, 0, 
/*16541*/         OPC_EmitInteger, MVT::i32, 0, 
/*16544*/         OPC_EmitInteger, MVT::i32, 0, 
/*16547*/         OPC_EmitInteger, MVT::i32, 0, 
/*16550*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16562*/         OPC_EmitInteger, MVT::i32, 0, 
/*16565*/         OPC_EmitInteger, MVT::i32, 0, 
/*16568*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16580*/         OPC_EmitInteger, MVT::i32, 0, 
/*16583*/         OPC_EmitInteger, MVT::i32, 0, 
/*16586*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16598*/         OPC_EmitInteger, MVT::i32, 1, 
/*16601*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*16604*/         OPC_EmitInteger, MVT::i32, 0, 
/*16607*/         OPC_EmitInteger, MVT::i32, 0, 
/*16610*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                      1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 2, 5, 6, 7, 1, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (xor:i32 i32:i32:$z, (and:i32 (xor:i32 i32:i32:$z, i32:i32:$y), i32:i32:$x)) - Complexity = 9
                  // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*16635*/       0, /*End of Scope*/
/*16636*/     0, /*End of Scope*/
/*16637*/   /*Scope*/ 75|128,3/*459*/, /*->17098*/
/*16639*/     OPC_MoveChild, 0,
/*16641*/     OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*16644*/     OPC_Scope, 96|128,1/*224*/, /*->16871*/ // 2 children in Scope
/*16647*/       OPC_RecordChild0, // #0 = $x
/*16648*/       OPC_MoveChild, 1,
/*16650*/       OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*16653*/       OPC_RecordChild0, // #1 = $y
/*16654*/       OPC_RecordChild1, // #2 = $z
/*16655*/       OPC_MoveParent,
/*16656*/       OPC_MoveParent,
/*16657*/       OPC_MoveChild, 1,
/*16659*/       OPC_Scope, 104, /*->16765*/ // 2 children in Scope
/*16661*/         OPC_CheckSame, 2,
/*16663*/         OPC_MoveParent,
/*16664*/         OPC_CheckType, MVT::i32,
/*16666*/         OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*16668*/         OPC_EmitInteger, MVT::i32, 0, 
/*16671*/         OPC_EmitInteger, MVT::i32, 0, 
/*16674*/         OPC_EmitInteger, MVT::i32, 0, 
/*16677*/         OPC_EmitInteger, MVT::i32, 0, 
/*16680*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16692*/         OPC_EmitInteger, MVT::i32, 0, 
/*16695*/         OPC_EmitInteger, MVT::i32, 0, 
/*16698*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16710*/         OPC_EmitInteger, MVT::i32, 0, 
/*16713*/         OPC_EmitInteger, MVT::i32, 0, 
/*16716*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16728*/         OPC_EmitInteger, MVT::i32, 1, 
/*16731*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*16734*/         OPC_EmitInteger, MVT::i32, 0, 
/*16737*/         OPC_EmitInteger, MVT::i32, 0, 
/*16740*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                      1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (xor:i32 (and:i32 i32:i32:$x, (xor:i32 i32:i32:$y, i32:i32:$z)), i32:i32:$z) - Complexity = 9
                  // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*16765*/       /*Scope*/ 104, /*->16870*/
/*16766*/         OPC_CheckSame, 1,
/*16768*/         OPC_MoveParent,
/*16769*/         OPC_CheckType, MVT::i32,
/*16771*/         OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*16773*/         OPC_EmitInteger, MVT::i32, 0, 
/*16776*/         OPC_EmitInteger, MVT::i32, 0, 
/*16779*/         OPC_EmitInteger, MVT::i32, 0, 
/*16782*/         OPC_EmitInteger, MVT::i32, 0, 
/*16785*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16797*/         OPC_EmitInteger, MVT::i32, 0, 
/*16800*/         OPC_EmitInteger, MVT::i32, 0, 
/*16803*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16815*/         OPC_EmitInteger, MVT::i32, 0, 
/*16818*/         OPC_EmitInteger, MVT::i32, 0, 
/*16821*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16833*/         OPC_EmitInteger, MVT::i32, 1, 
/*16836*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*16839*/         OPC_EmitInteger, MVT::i32, 0, 
/*16842*/         OPC_EmitInteger, MVT::i32, 0, 
/*16845*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                      1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 2, 8, 9, 10, 1, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (xor:i32 (and:i32 i32:i32:$x, (xor:i32 i32:i32:$z, i32:i32:$y)), i32:i32:$z) - Complexity = 9
                  // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*16870*/       0, /*End of Scope*/
/*16871*/     /*Scope*/ 96|128,1/*224*/, /*->17097*/
/*16873*/       OPC_MoveChild, 0,
/*16875*/       OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*16878*/       OPC_RecordChild0, // #0 = $y
/*16879*/       OPC_RecordChild1, // #1 = $z
/*16880*/       OPC_MoveParent,
/*16881*/       OPC_RecordChild1, // #2 = $x
/*16882*/       OPC_MoveParent,
/*16883*/       OPC_MoveChild, 1,
/*16885*/       OPC_Scope, 104, /*->16991*/ // 2 children in Scope
/*16887*/         OPC_CheckSame, 1,
/*16889*/         OPC_MoveParent,
/*16890*/         OPC_CheckType, MVT::i32,
/*16892*/         OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*16894*/         OPC_EmitInteger, MVT::i32, 0, 
/*16897*/         OPC_EmitInteger, MVT::i32, 0, 
/*16900*/         OPC_EmitInteger, MVT::i32, 0, 
/*16903*/         OPC_EmitInteger, MVT::i32, 0, 
/*16906*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16918*/         OPC_EmitInteger, MVT::i32, 0, 
/*16921*/         OPC_EmitInteger, MVT::i32, 0, 
/*16924*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16936*/         OPC_EmitInteger, MVT::i32, 0, 
/*16939*/         OPC_EmitInteger, MVT::i32, 0, 
/*16942*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16954*/         OPC_EmitInteger, MVT::i32, 1, 
/*16957*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*16960*/         OPC_EmitInteger, MVT::i32, 0, 
/*16963*/         OPC_EmitInteger, MVT::i32, 0, 
/*16966*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                      1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 2, 5, 6, 7, 0, 8, 9, 10, 1, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (xor:i32 (and:i32 (xor:i32 i32:i32:$y, i32:i32:$z), i32:i32:$x), i32:i32:$z) - Complexity = 9
                  // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*16991*/       /*Scope*/ 104, /*->17096*/
/*16992*/         OPC_CheckSame, 0,
/*16994*/         OPC_MoveParent,
/*16995*/         OPC_CheckType, MVT::i32,
/*16997*/         OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*16999*/         OPC_EmitInteger, MVT::i32, 0, 
/*17002*/         OPC_EmitInteger, MVT::i32, 0, 
/*17005*/         OPC_EmitInteger, MVT::i32, 0, 
/*17008*/         OPC_EmitInteger, MVT::i32, 0, 
/*17011*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*17023*/         OPC_EmitInteger, MVT::i32, 0, 
/*17026*/         OPC_EmitInteger, MVT::i32, 0, 
/*17029*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*17041*/         OPC_EmitInteger, MVT::i32, 0, 
/*17044*/         OPC_EmitInteger, MVT::i32, 0, 
/*17047*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*17059*/         OPC_EmitInteger, MVT::i32, 1, 
/*17062*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*17065*/         OPC_EmitInteger, MVT::i32, 0, 
/*17068*/         OPC_EmitInteger, MVT::i32, 0, 
/*17071*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                      1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 2, 5, 6, 7, 1, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (xor:i32 (and:i32 (xor:i32 i32:i32:$z, i32:i32:$y), i32:i32:$x), i32:i32:$z) - Complexity = 9
                  // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*17096*/       0, /*End of Scope*/
/*17097*/     0, /*End of Scope*/
/*17098*/   /*Scope*/ 95|128,1/*223*/, /*->17323*/
/*17100*/     OPC_RecordChild0, // #0 = $src0
/*17101*/     OPC_Scope, 83, /*->17186*/ // 2 children in Scope
/*17103*/       OPC_MoveChild, 1,
/*17105*/       OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*17116*/       OPC_MoveParent,
/*17117*/       OPC_CheckType, MVT::i32,
/*17119*/       OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*17121*/       OPC_EmitInteger, MVT::i32, 1, 
/*17124*/       OPC_EmitInteger, MVT::i32, 0, 
/*17127*/       OPC_EmitInteger, MVT::i32, 0, 
/*17130*/       OPC_EmitInteger, MVT::i32, 0, 
/*17133*/       OPC_EmitInteger, MVT::i32, 0, 
/*17136*/       OPC_EmitInteger, MVT::i32, 0, 
/*17139*/       OPC_EmitInteger, MVT::i32, 0, 
/*17142*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*17154*/       OPC_EmitInteger, MVT::i32, 1, 
/*17157*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*17160*/       OPC_EmitInteger, MVT::i32, 0, 
/*17163*/       OPC_EmitInteger, MVT::i32, 0, 
/*17166*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::NOT_INT), 0,
                    1/*#VTs*/, MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (xor:i32 R600_Reg32:i32:$src0, -1:i32) - Complexity = 8
                // Dst: (NOT_INT:i32 R600_Reg32:i32:$src0)
/*17186*/     /*Scope*/ 6|128,1/*134*/, /*->17322*/
/*17188*/       OPC_RecordChild1, // #1 = $src1
/*17189*/       OPC_SwitchType /*2 cases */, 116,  MVT::i32,// ->17308
/*17192*/         OPC_Scope, 101, /*->17295*/ // 2 children in Scope
/*17194*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*17196*/           OPC_EmitInteger, MVT::i32, 0, 
/*17199*/           OPC_EmitInteger, MVT::i32, 0, 
/*17202*/           OPC_EmitInteger, MVT::i32, 1, 
/*17205*/           OPC_EmitInteger, MVT::i32, 0, 
/*17208*/           OPC_EmitInteger, MVT::i32, 0, 
/*17211*/           OPC_EmitInteger, MVT::i32, 0, 
/*17214*/           OPC_EmitInteger, MVT::i32, 0, 
/*17217*/           OPC_EmitInteger, MVT::i32, 0, 
/*17220*/           OPC_EmitInteger, MVT::i32, 0, 
/*17223*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*17235*/           OPC_EmitInteger, MVT::i32, 0, 
/*17238*/           OPC_EmitInteger, MVT::i32, 0, 
/*17241*/           OPC_EmitInteger, MVT::i32, 0, 
/*17244*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*17256*/           OPC_EmitInteger, MVT::i32, 1, 
/*17259*/           OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*17262*/           OPC_EmitInteger, MVT::i32, 0, 
/*17265*/           OPC_EmitInteger, MVT::i32, 0, 
/*17268*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::XOR_INT), 0,
                        1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                    // Src: (xor:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
                    // Dst: (XOR_INT:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*17295*/         /*Scope*/ 11, /*->17307*/
/*17296*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*17298*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (xor:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
                    // Dst: (V_XOR_B32_e32:i32 i32:i32:$src0, i32:i32:$src1)
/*17307*/         0, /*End of Scope*/
                /*SwitchType*/ 11,  MVT::i1,// ->17321
/*17310*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*17312*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_XOR_B64), 0,
                      1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i1 i1:i1:$src0, i1:i1:$src1) - Complexity = 3
                  // Dst: (S_XOR_B64:i1 i1:i1:$src0, i1:i1:$src1)
                0, // EndSwitchType
/*17322*/     0, /*End of Scope*/
/*17323*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 50,  TARGET_VAL(AMDGPUISD::CONST_ADDRESS),// ->17377
/*17327*/   OPC_RecordChild0, // #0 = $src
/*17328*/   OPC_CheckChild0Type, MVT::i32,
/*17330*/   OPC_Scope, 15, /*->17347*/ // 2 children in Scope
/*17332*/     OPC_CheckType, MVT::i32,
/*17334*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*17336*/     OPC_CheckComplexPat, /*CP*/4, /*#*/0, // SelectGlobalValueConstantOffset:$src #1
/*17339*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CONST_COPY), 0|OPFL_Variadic1,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (CONST_ADDRESS:i32 ADDRGA_CONST_OFFSET:i32:$src) - Complexity = 9
              // Dst: (CONST_COPY:i32 ADDRGA_CONST_OFFSET:i32:$src)
/*17347*/   /*Scope*/ 28, /*->17376*/
/*17348*/     OPC_RecordChild1, // #1 = $BUFFER_ID
/*17349*/     OPC_MoveChild, 1,
/*17351*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*17354*/     OPC_CheckType, MVT::i32,
/*17356*/     OPC_MoveParent,
/*17357*/     OPC_CheckType, MVT::v4i32,
/*17359*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*17361*/     OPC_CheckComplexPat, /*CP*/5, /*#*/0, // SelectGlobalValueVariableOffset:$ptr #2 #3
/*17364*/     OPC_EmitConvertToTarget, 1,
/*17366*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TEX_VTX_CONSTBUF), 0|OPFL_Variadic2,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 2, 3, 4, 
              // Src: (CONST_ADDRESS:v4i32 ADDRGA_VAR_OFFSET:i32:$ptr, (imm:i32):$BUFFER_ID) - Complexity = 15
              // Dst: (TEX_VTX_CONSTBUF:v4i32 ADDRGA_VAR_OFFSET:i32:$ptr, (imm:i32):$BUFFER_ID)
/*17376*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 81|128,24/*3153*/,  TARGET_VAL(ISD::INTRINSIC_WO_CHAIN),// ->20534
/*17381*/   OPC_MoveChild, 0,
/*17383*/   OPC_Scope, 114, /*->17499*/ // 18 children in Scope
/*17385*/     OPC_CheckInteger, 53|128,24/*3125*/, 
/*17388*/     OPC_MoveParent,
/*17389*/     OPC_RecordChild1, // #0 = $src0
/*17390*/     OPC_CheckChild1Type, MVT::i32,
/*17392*/     OPC_RecordChild2, // #1 = $src1
/*17393*/     OPC_CheckChild2Type, MVT::i32,
/*17395*/     OPC_RecordChild3, // #2 = $src2
/*17396*/     OPC_CheckChild3Type, MVT::i32,
/*17398*/     OPC_CheckType, MVT::i32,
/*17400*/     OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*17402*/     OPC_EmitInteger, MVT::i32, 0, 
/*17405*/     OPC_EmitInteger, MVT::i32, 0, 
/*17408*/     OPC_EmitInteger, MVT::i32, 0, 
/*17411*/     OPC_EmitInteger, MVT::i32, 0, 
/*17414*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*17426*/     OPC_EmitInteger, MVT::i32, 0, 
/*17429*/     OPC_EmitInteger, MVT::i32, 0, 
/*17432*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*17444*/     OPC_EmitInteger, MVT::i32, 0, 
/*17447*/     OPC_EmitInteger, MVT::i32, 0, 
/*17450*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*17462*/     OPC_EmitInteger, MVT::i32, 1, 
/*17465*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*17468*/     OPC_EmitInteger, MVT::i32, 0, 
/*17471*/     OPC_EmitInteger, MVT::i32, 0, 
/*17474*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFE_UINT_eg), 0,
                  1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
              // Src: (intrinsic_wo_chain:i32 3125:iPTR, i32:i32:$src0, i32:i32:$src1, i32:i32:$src2) - Complexity = 8
              // Dst: (BFE_UINT_eg:i32 i32:i32:$src0, i32:i32:$src1, i32:i32:$src2)
/*17499*/   /*Scope*/ 17, /*->17517*/
/*17500*/     OPC_CheckInteger, 27|128,25/*3227*/, 
/*17503*/     OPC_MoveParent,
/*17504*/     OPC_RecordChild1, // #0 = $src0
/*17505*/     OPC_RecordChild2, // #1 = $src1
/*17506*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*17508*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CVT_PKRTZ_F16_F32_e32), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 3227:iPTR, f32:f32:$src0, f32:f32:$src1) - Complexity = 8
              // Dst: (V_CVT_PKRTZ_F16_F32_e32:i32 f32:f32:$src0, f32:f32:$src1)
/*17517*/   /*Scope*/ 57, /*->17575*/
/*17518*/     OPC_CheckInteger, 33|128,25/*3233*/, 
/*17521*/     OPC_MoveParent,
/*17522*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*17524*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*17531*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*17538*/     OPC_EmitInteger, MVT::i32, 0, 
/*17541*/     OPC_EmitInteger, MVT::i32, 0, 
/*17544*/     OPC_EmitInteger, MVT::i32, 0, 
/*17547*/     OPC_EmitInteger, MVT::i32, 0, 
/*17550*/     OPC_EmitInteger, MVT::i32, 0, 
/*17553*/     OPC_EmitNode, TARGET_VAL(AMDGPU::V_MBCNT_LO_U32_B32_e64), 0,
                  1/*#VTs*/, MVT::i32, 6/*#Ops*/, 1, 2, 3, 4, 5, 6,  // Results = #7
/*17566*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MBCNT_HI_U32_B32_e32), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 7, 
              // Src: (intrinsic_wo_chain:i32 3233:iPTR) - Complexity = 8
              // Dst: (V_MBCNT_HI_U32_B32_e32:i32 4294967295:i32, (V_MBCNT_LO_U32_B32_e64:i32 4294967295:i32, 0:i32, 0:i32, 0:i32, 0:i32, 0:i32))
/*17575*/   /*Scope*/ 73, /*->17649*/
/*17576*/     OPC_CheckInteger, 61|128,24/*3133*/, 
/*17579*/     OPC_MoveParent,
/*17580*/     OPC_RecordChild1, // #0 = $src
/*17581*/     OPC_CheckChild1Type, MVT::f32,
/*17583*/     OPC_MoveChild, 2,
/*17585*/     OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/*17588*/     OPC_CheckPredicate, 9, // Predicate_FP_ZERO
/*17590*/     OPC_CheckType, MVT::f32,
/*17592*/     OPC_MoveParent,
/*17593*/     OPC_MoveChild, 3,
/*17595*/     OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/*17598*/     OPC_CheckPredicate, 8, // Predicate_FP_ONE
/*17600*/     OPC_CheckType, MVT::f32,
/*17602*/     OPC_MoveParent,
/*17603*/     OPC_CheckType, MVT::f32,
/*17605*/     OPC_Scope, 30, /*->17637*/ // 2 children in Scope
/*17607*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*17609*/       OPC_EmitInteger, MVT::i32, 0, 
/*17612*/       OPC_EmitInteger, MVT::i32, 0, 
/*17615*/       OPC_EmitInteger, MVT::i32, 1, 
/*17618*/       OPC_EmitInteger, MVT::i32, 0, 
/*17621*/       OPC_EmitInteger, MVT::i32, 0, 
/*17624*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_ADD_F32_e64), 0,
                    1/*#VTs*/, MVT::f32, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (intrinsic_wo_chain:f32 3133:iPTR, f32:f32:$src, (fpimm:f32)<<P:Predicate_FP_ZERO>>, (fpimm:f32)<<P:Predicate_FP_ONE>>) - Complexity = 16
                // Dst: (V_ADD_F32_e64:f32 ?:f32:$src, 0:i32, 0:i32, 1:i32, 0:i32, 0:i32)
/*17637*/     /*Scope*/ 10, /*->17648*/
/*17638*/       OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*17640*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CLAMP_R600), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:f32 3133:iPTR, f32:f32:$src0, (fpimm:f32)<<P:Predicate_FP_ZERO>>, (fpimm:f32)<<P:Predicate_FP_ONE>>) - Complexity = 16
                // Dst: (CLAMP_R600:f32 f32:f32:$src0)
/*17648*/     0, /*End of Scope*/
/*17649*/   /*Scope*/ 39, /*->17689*/
/*17650*/     OPC_CheckInteger, 20|128,25/*3220*/, 
/*17653*/     OPC_MoveParent,
/*17654*/     OPC_RecordChild1, // #0 = $attr_chan
/*17655*/     OPC_MoveChild, 1,
/*17657*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*17660*/     OPC_MoveParent,
/*17661*/     OPC_RecordChild2, // #1 = $attr
/*17662*/     OPC_MoveChild, 2,
/*17664*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*17667*/     OPC_MoveParent,
/*17668*/     OPC_RecordChild3, // #2 = $params
/*17669*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*17671*/     OPC_EmitInteger, MVT::i32, 2, 
/*17674*/     OPC_EmitConvertToTarget, 0,
/*17676*/     OPC_EmitConvertToTarget, 1,
/*17678*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_INTERP_MOV_F32), 0,
                  1/*#VTs*/, MVT::f32, 4/*#Ops*/, 3, 4, 5, 2, 
              // Src: (intrinsic_wo_chain:f32 3220:iPTR, (imm:i32):$attr_chan, (imm:i32):$attr, i32:i32:$params) - Complexity = 14
              // Dst: (V_INTERP_MOV_F32:f32 2:i32, (imm:i32):$attr_chan, (imm:i32):$attr, ?:i32:$params)
/*17689*/   /*Scope*/ 77, /*->17767*/
/*17690*/     OPC_CheckInteger, 21|128,25/*3221*/, 
/*17693*/     OPC_MoveParent,
/*17694*/     OPC_RecordChild1, // #0 = $attr_chan
/*17695*/     OPC_MoveChild, 1,
/*17697*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*17700*/     OPC_MoveParent,
/*17701*/     OPC_RecordChild2, // #1 = $attr
/*17702*/     OPC_MoveChild, 2,
/*17704*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*17707*/     OPC_MoveParent,
/*17708*/     OPC_RecordChild3, // #2 = $params
/*17709*/     OPC_RecordChild4, // #3 = $ij
/*17710*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*17712*/     OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*17715*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4,  // Results = #5
/*17724*/     OPC_EmitConvertToTarget, 0,
/*17726*/     OPC_EmitConvertToTarget, 1,
/*17728*/     OPC_EmitNode, TARGET_VAL(AMDGPU::V_INTERP_P1_F32), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 5, 6, 7, 2,  // Results = #8
/*17739*/     OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*17742*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 9,  // Results = #10
/*17751*/     OPC_EmitConvertToTarget, 0,
/*17753*/     OPC_EmitConvertToTarget, 1,
/*17755*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_INTERP_P2_F32), 0,
                  1/*#VTs*/, MVT::f32, 5/*#Ops*/, 8, 10, 11, 12, 2, 
              // Src: (intrinsic_wo_chain:f32 3221:iPTR, (imm:i32):$attr_chan, (imm:i32):$attr, M0Reg:i32:$params, v2i32:v2i32:$ij) - Complexity = 14
              // Dst: (V_INTERP_P2_F32:f32 (V_INTERP_P1_F32:i32 (EXTRACT_SUBREG:i32 v2i32:v2i32:$ij, sub0:i32), (imm:i32):$attr_chan, (imm:i32):$attr, i32:i32:$params), (EXTRACT_SUBREG:i32 ?:v2i32:$ij, sub1:i32), (imm:i32):$attr_chan, (imm:i32):$attr, ?:i32:$params)
/*17767*/   /*Scope*/ 23, /*->17791*/
/*17768*/     OPC_CheckInteger, 20|128,24/*3092*/, 
/*17771*/     OPC_MoveParent,
/*17772*/     OPC_RecordChild1, // #0 = $src
/*17773*/     OPC_MoveChild, 1,
/*17775*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*17778*/     OPC_MoveParent,
/*17779*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*17781*/     OPC_EmitConvertToTarget, 0,
/*17783*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::LOAD_CONST), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_wo_chain:f32 3092:iPTR, (imm:i32):$src) - Complexity = 11
              // Dst: (LOAD_CONST:f32 (imm:i32):$src)
/*17791*/   /*Scope*/ 122, /*->17914*/
/*17792*/     OPC_CheckInteger, 23|128,24/*3095*/, 
/*17795*/     OPC_MoveParent,
/*17796*/     OPC_RecordChild1, // #0 = $src0
/*17797*/     OPC_RecordChild2, // #1 = $src1
/*17798*/     OPC_Scope, 101, /*->17901*/ // 2 children in Scope
/*17800*/       OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*17802*/       OPC_EmitInteger, MVT::i32, 0, 
/*17805*/       OPC_EmitInteger, MVT::i32, 0, 
/*17808*/       OPC_EmitInteger, MVT::i32, 1, 
/*17811*/       OPC_EmitInteger, MVT::i32, 0, 
/*17814*/       OPC_EmitInteger, MVT::i32, 0, 
/*17817*/       OPC_EmitInteger, MVT::i32, 0, 
/*17820*/       OPC_EmitInteger, MVT::i32, 0, 
/*17823*/       OPC_EmitInteger, MVT::i32, 0, 
/*17826*/       OPC_EmitInteger, MVT::i32, 0, 
/*17829*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*17841*/       OPC_EmitInteger, MVT::i32, 0, 
/*17844*/       OPC_EmitInteger, MVT::i32, 0, 
/*17847*/       OPC_EmitInteger, MVT::i32, 0, 
/*17850*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*17862*/       OPC_EmitInteger, MVT::i32, 1, 
/*17865*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*17868*/       OPC_EmitInteger, MVT::i32, 0, 
/*17871*/       OPC_EmitInteger, MVT::i32, 0, 
/*17874*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MUL), 0,
                    1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (intrinsic_wo_chain:f32 3095:iPTR, R600_Reg32:f32:$src0, R600_Reg32:f32:$src1) - Complexity = 8
                // Dst: (MUL:f32 R600_Reg32:f32:$src0, R600_Reg32:f32:$src1)
/*17901*/     /*Scope*/ 11, /*->17913*/
/*17902*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*17904*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MUL_LEGACY_F32_e32), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:f32 3095:iPTR, f32:f32:$src0, f32:f32:$src1) - Complexity = 8
                // Dst: (V_MUL_LEGACY_F32_e32:f32 f32:f32:$src0, f32:f32:$src1)
/*17913*/     0, /*End of Scope*/
/*17914*/   /*Scope*/ 86, /*->18001*/
/*17915*/     OPC_CheckInteger, 37|128,24/*3109*/, 
/*17918*/     OPC_MoveParent,
/*17919*/     OPC_RecordChild1, // #0 = $src0
/*17920*/     OPC_Scope, 67, /*->17989*/ // 2 children in Scope
/*17922*/       OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*17924*/       OPC_EmitInteger, MVT::i32, 1, 
/*17927*/       OPC_EmitInteger, MVT::i32, 0, 
/*17930*/       OPC_EmitInteger, MVT::i32, 0, 
/*17933*/       OPC_EmitInteger, MVT::i32, 0, 
/*17936*/       OPC_EmitInteger, MVT::i32, 0, 
/*17939*/       OPC_EmitInteger, MVT::i32, 0, 
/*17942*/       OPC_EmitInteger, MVT::i32, 0, 
/*17945*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*17957*/       OPC_EmitInteger, MVT::i32, 1, 
/*17960*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*17963*/       OPC_EmitInteger, MVT::i32, 0, 
/*17966*/       OPC_EmitInteger, MVT::i32, 0, 
/*17969*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TRUNC), 0,
                    1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (intrinsic_wo_chain:f32 3109:iPTR, R600_Reg32:f32:$src0) - Complexity = 8
                // Dst: (TRUNC:f32 R600_Reg32:f32:$src0)
/*17989*/     /*Scope*/ 10, /*->18000*/
/*17990*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*17992*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_TRUNC_F32_e32), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:f32 3109:iPTR, f32:f32:$src0) - Complexity = 8
                // Dst: (V_TRUNC_F32_e32:f32 f32:f32:$src0)
/*18000*/     0, /*End of Scope*/
/*18001*/   /*Scope*/ 94|128,1/*222*/, /*->18225*/
/*18003*/     OPC_CheckInteger, 28|128,24/*3100*/, 
/*18006*/     OPC_MoveParent,
/*18007*/     OPC_RecordChild1, // #0 = $src0
/*18008*/     OPC_Scope, 67, /*->18077*/ // 4 children in Scope
/*18010*/       OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*18012*/       OPC_EmitInteger, MVT::i32, 1, 
/*18015*/       OPC_EmitInteger, MVT::i32, 0, 
/*18018*/       OPC_EmitInteger, MVT::i32, 0, 
/*18021*/       OPC_EmitInteger, MVT::i32, 0, 
/*18024*/       OPC_EmitInteger, MVT::i32, 0, 
/*18027*/       OPC_EmitInteger, MVT::i32, 0, 
/*18030*/       OPC_EmitInteger, MVT::i32, 0, 
/*18033*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*18045*/       OPC_EmitInteger, MVT::i32, 1, 
/*18048*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*18051*/       OPC_EmitInteger, MVT::i32, 0, 
/*18054*/       OPC_EmitInteger, MVT::i32, 0, 
/*18057*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RECIPSQRT_CLAMPED_r600), 0,
                    1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (intrinsic_wo_chain:f32 3100:iPTR, R600_Reg32:f32:$src0) - Complexity = 8
                // Dst: (RECIPSQRT_CLAMPED_r600:f32 R600_Reg32:f32:$src0)
/*18077*/     /*Scope*/ 67, /*->18145*/
/*18078*/       OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*18080*/       OPC_EmitInteger, MVT::i32, 1, 
/*18083*/       OPC_EmitInteger, MVT::i32, 0, 
/*18086*/       OPC_EmitInteger, MVT::i32, 0, 
/*18089*/       OPC_EmitInteger, MVT::i32, 0, 
/*18092*/       OPC_EmitInteger, MVT::i32, 0, 
/*18095*/       OPC_EmitInteger, MVT::i32, 0, 
/*18098*/       OPC_EmitInteger, MVT::i32, 0, 
/*18101*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*18113*/       OPC_EmitInteger, MVT::i32, 1, 
/*18116*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*18119*/       OPC_EmitInteger, MVT::i32, 0, 
/*18122*/       OPC_EmitInteger, MVT::i32, 0, 
/*18125*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RECIPSQRT_CLAMPED_eg), 0,
                    1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (intrinsic_wo_chain:f32 3100:iPTR, R600_Reg32:f32:$src0) - Complexity = 8
                // Dst: (RECIPSQRT_CLAMPED_eg:f32 R600_Reg32:f32:$src0)
/*18145*/     /*Scope*/ 67, /*->18213*/
/*18146*/       OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*18148*/       OPC_EmitInteger, MVT::i32, 1, 
/*18151*/       OPC_EmitInteger, MVT::i32, 0, 
/*18154*/       OPC_EmitInteger, MVT::i32, 0, 
/*18157*/       OPC_EmitInteger, MVT::i32, 0, 
/*18160*/       OPC_EmitInteger, MVT::i32, 0, 
/*18163*/       OPC_EmitInteger, MVT::i32, 0, 
/*18166*/       OPC_EmitInteger, MVT::i32, 0, 
/*18169*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*18181*/       OPC_EmitInteger, MVT::i32, 1, 
/*18184*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*18187*/       OPC_EmitInteger, MVT::i32, 0, 
/*18190*/       OPC_EmitInteger, MVT::i32, 0, 
/*18193*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RECIPSQRT_CLAMPED_cm), 0,
                    1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (intrinsic_wo_chain:f32 3100:iPTR, R600_Reg32:f32:$src0) - Complexity = 8
                // Dst: (RECIPSQRT_CLAMPED_cm:f32 R600_Reg32:f32:$src0)
/*18213*/     /*Scope*/ 10, /*->18224*/
/*18214*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*18216*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_RSQ_LEGACY_F32_e32), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:f32 3100:iPTR, f32:f32:$src0) - Complexity = 8
                // Dst: (V_RSQ_LEGACY_F32_e32:f32 f32:f32:$src0)
/*18224*/     0, /*End of Scope*/
/*18225*/   /*Scope*/ 20|128,4/*532*/, /*->18759*/
/*18227*/     OPC_CheckInteger, 14|128,24/*3086*/, 
/*18230*/     OPC_MoveParent,
/*18231*/     OPC_RecordChild1, // #0 = $src0
/*18232*/     OPC_RecordChild2, // #1 = $src1
/*18233*/     OPC_Scope, 38|128,1/*166*/, /*->18402*/ // 4 children in Scope
/*18236*/       OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*18238*/       OPC_EmitInteger, MVT::i32, 0, 
/*18241*/       OPC_EmitInteger, MVT::i32, 0, 
/*18244*/       OPC_EmitInteger, MVT::i32, 1, 
/*18247*/       OPC_EmitInteger, MVT::i32, 0, 
/*18250*/       OPC_EmitInteger, MVT::i32, 0, 
/*18253*/       OPC_EmitInteger, MVT::i32, 0, 
/*18256*/       OPC_EmitInteger, MVT::i32, 0, 
/*18259*/       OPC_EmitInteger, MVT::i32, 0, 
/*18262*/       OPC_EmitInteger, MVT::i32, 0, 
/*18265*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*18277*/       OPC_EmitInteger, MVT::i32, 1, 
/*18280*/       OPC_EmitInteger, MVT::i32, 0, 
/*18283*/       OPC_EmitInteger, MVT::i32, 0, 
/*18286*/       OPC_EmitInteger, MVT::i32, 0, 
/*18289*/       OPC_EmitInteger, MVT::i32, 0, 
/*18292*/       OPC_EmitInteger, MVT::i32, 0, 
/*18295*/       OPC_EmitInteger, MVT::i32, 0, 
/*18298*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*18310*/       OPC_EmitInteger, MVT::i32, 1, 
/*18313*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*18316*/       OPC_EmitInteger, MVT::i32, 0, 
/*18319*/       OPC_EmitInteger, MVT::i32, 0, 
/*18322*/       OPC_EmitNode, TARGET_VAL(AMDGPU::RECIP_IEEE_r600), 0,
                    1/*#VTs*/, MVT::i32, 13/*#Ops*/, 12, 13, 14, 15, 1, 16, 17, 18, 19, 20, 21, 22, 23,  // Results = #24
/*18342*/       OPC_EmitInteger, MVT::i32, 0, 
/*18345*/       OPC_EmitInteger, MVT::i32, 0, 
/*18348*/       OPC_EmitInteger, MVT::i32, 0, 
/*18351*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*18363*/       OPC_EmitInteger, MVT::i32, 1, 
/*18366*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*18369*/       OPC_EmitInteger, MVT::i32, 0, 
/*18372*/       OPC_EmitInteger, MVT::i32, 0, 
/*18375*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MUL_IEEE), 0,
                    1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 24, 25, 26, 27, 28, 29, 30, 31, 32, 
                // Src: (intrinsic_wo_chain:f32 3086:iPTR, f32:f32:$src0, f32:f32:$src1) - Complexity = 8
                // Dst: (MUL_IEEE:f32 ?:f32:$src0, (RECIP_IEEE_r600:i32 ?:f32:$src1))
/*18402*/     /*Scope*/ 38|128,1/*166*/, /*->18570*/
/*18404*/       OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*18406*/       OPC_EmitInteger, MVT::i32, 0, 
/*18409*/       OPC_EmitInteger, MVT::i32, 0, 
/*18412*/       OPC_EmitInteger, MVT::i32, 1, 
/*18415*/       OPC_EmitInteger, MVT::i32, 0, 
/*18418*/       OPC_EmitInteger, MVT::i32, 0, 
/*18421*/       OPC_EmitInteger, MVT::i32, 0, 
/*18424*/       OPC_EmitInteger, MVT::i32, 0, 
/*18427*/       OPC_EmitInteger, MVT::i32, 0, 
/*18430*/       OPC_EmitInteger, MVT::i32, 0, 
/*18433*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*18445*/       OPC_EmitInteger, MVT::i32, 1, 
/*18448*/       OPC_EmitInteger, MVT::i32, 0, 
/*18451*/       OPC_EmitInteger, MVT::i32, 0, 
/*18454*/       OPC_EmitInteger, MVT::i32, 0, 
/*18457*/       OPC_EmitInteger, MVT::i32, 0, 
/*18460*/       OPC_EmitInteger, MVT::i32, 0, 
/*18463*/       OPC_EmitInteger, MVT::i32, 0, 
/*18466*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*18478*/       OPC_EmitInteger, MVT::i32, 1, 
/*18481*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*18484*/       OPC_EmitInteger, MVT::i32, 0, 
/*18487*/       OPC_EmitInteger, MVT::i32, 0, 
/*18490*/       OPC_EmitNode, TARGET_VAL(AMDGPU::RECIP_IEEE_eg), 0,
                    1/*#VTs*/, MVT::i32, 13/*#Ops*/, 12, 13, 14, 15, 1, 16, 17, 18, 19, 20, 21, 22, 23,  // Results = #24
/*18510*/       OPC_EmitInteger, MVT::i32, 0, 
/*18513*/       OPC_EmitInteger, MVT::i32, 0, 
/*18516*/       OPC_EmitInteger, MVT::i32, 0, 
/*18519*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*18531*/       OPC_EmitInteger, MVT::i32, 1, 
/*18534*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*18537*/       OPC_EmitInteger, MVT::i32, 0, 
/*18540*/       OPC_EmitInteger, MVT::i32, 0, 
/*18543*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MUL_IEEE), 0,
                    1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 24, 25, 26, 27, 28, 29, 30, 31, 32, 
                // Src: (intrinsic_wo_chain:f32 3086:iPTR, f32:f32:$src0, f32:f32:$src1) - Complexity = 8
                // Dst: (MUL_IEEE:f32 ?:f32:$src0, (RECIP_IEEE_eg:i32 ?:f32:$src1))
/*18570*/     /*Scope*/ 38|128,1/*166*/, /*->18738*/
/*18572*/       OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*18574*/       OPC_EmitInteger, MVT::i32, 0, 
/*18577*/       OPC_EmitInteger, MVT::i32, 0, 
/*18580*/       OPC_EmitInteger, MVT::i32, 1, 
/*18583*/       OPC_EmitInteger, MVT::i32, 0, 
/*18586*/       OPC_EmitInteger, MVT::i32, 0, 
/*18589*/       OPC_EmitInteger, MVT::i32, 0, 
/*18592*/       OPC_EmitInteger, MVT::i32, 0, 
/*18595*/       OPC_EmitInteger, MVT::i32, 0, 
/*18598*/       OPC_EmitInteger, MVT::i32, 0, 
/*18601*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*18613*/       OPC_EmitInteger, MVT::i32, 1, 
/*18616*/       OPC_EmitInteger, MVT::i32, 0, 
/*18619*/       OPC_EmitInteger, MVT::i32, 0, 
/*18622*/       OPC_EmitInteger, MVT::i32, 0, 
/*18625*/       OPC_EmitInteger, MVT::i32, 0, 
/*18628*/       OPC_EmitInteger, MVT::i32, 0, 
/*18631*/       OPC_EmitInteger, MVT::i32, 0, 
/*18634*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*18646*/       OPC_EmitInteger, MVT::i32, 1, 
/*18649*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*18652*/       OPC_EmitInteger, MVT::i32, 0, 
/*18655*/       OPC_EmitInteger, MVT::i32, 0, 
/*18658*/       OPC_EmitNode, TARGET_VAL(AMDGPU::RECIP_IEEE_cm), 0,
                    1/*#VTs*/, MVT::i32, 13/*#Ops*/, 12, 13, 14, 15, 1, 16, 17, 18, 19, 20, 21, 22, 23,  // Results = #24
/*18678*/       OPC_EmitInteger, MVT::i32, 0, 
/*18681*/       OPC_EmitInteger, MVT::i32, 0, 
/*18684*/       OPC_EmitInteger, MVT::i32, 0, 
/*18687*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*18699*/       OPC_EmitInteger, MVT::i32, 1, 
/*18702*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*18705*/       OPC_EmitInteger, MVT::i32, 0, 
/*18708*/       OPC_EmitInteger, MVT::i32, 0, 
/*18711*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MUL_IEEE), 0,
                    1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 24, 25, 26, 27, 28, 29, 30, 31, 32, 
                // Src: (intrinsic_wo_chain:f32 3086:iPTR, f32:f32:$src0, f32:f32:$src1) - Complexity = 8
                // Dst: (MUL_IEEE:f32 ?:f32:$src0, (RECIP_IEEE_cm:i32 ?:f32:$src1))
/*18738*/     /*Scope*/ 19, /*->18758*/
/*18739*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*18741*/       OPC_EmitNode, TARGET_VAL(AMDGPU::V_RCP_LEGACY_F32_e32), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*18749*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MUL_LEGACY_F32_e32), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:f32 3086:iPTR, f32:f32:$src0, f32:f32:$src1) - Complexity = 8
                // Dst: (V_MUL_LEGACY_F32_e32:f32 ?:f32:$src0, (V_RCP_LEGACY_F32_e32:i32 ?:f32:$src1))
/*18758*/     0, /*End of Scope*/
/*18759*/   /*Scope*/ 63, /*->18823*/
/*18760*/     OPC_CheckInteger, 10|128,24/*3082*/, 
/*18763*/     OPC_MoveParent,
/*18764*/     OPC_RecordChild1, // #0 = $src0
/*18765*/     OPC_RecordChild2, // #1 = $src1
/*18766*/     OPC_RecordChild3, // #2 = $src2
/*18767*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*18769*/     OPC_EmitInteger, MVT::i32, 0, 
/*18772*/     OPC_EmitInteger, MVT::i32, 0, 
/*18775*/     OPC_EmitInteger, MVT::i32, 0, 
/*18778*/     OPC_EmitInteger, MVT::i32, 0, 
/*18781*/     OPC_EmitInteger, MVT::i32, 0, 
/*18784*/     OPC_EmitNode, TARGET_VAL(AMDGPU::V_CMP_GT_F32_e64), 0,
                  1/*#VTs*/, MVT::i1, 6/*#Ops*/, 3, 0, 4, 5, 6, 7,  // Results = #8
/*18797*/     OPC_EmitInteger, MVT::i32, 0, 
/*18800*/     OPC_EmitInteger, MVT::i32, 0, 
/*18803*/     OPC_EmitInteger, MVT::i32, 0, 
/*18806*/     OPC_EmitInteger, MVT::i32, 0, 
/*18809*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CNDMASK_B32_e64), 0,
                  1/*#VTs*/, MVT::f32, 7/*#Ops*/, 2, 1, 8, 9, 10, 11, 12, 
              // Src: (intrinsic_wo_chain:f32 3082:iPTR, f32:f32:$src0, f32:f32:$src1, f32:f32:$src2) - Complexity = 8
              // Dst: (V_CNDMASK_B32_e64:f32 ?:f32:$src2, ?:f32:$src1, (V_CMP_GT_F32_e64:i1 0:i32, ?:f32:$src0))
/*18823*/   /*Scope*/ 35|128,5/*675*/, /*->19500*/
/*18825*/     OPC_CheckInteger, 35|128,25/*3235*/, 
/*18828*/     OPC_MoveParent,
/*18829*/     OPC_RecordChild1, // #0 = $src_x
/*18830*/     OPC_RecordChild2, // #1 = $src_y
/*18831*/     OPC_RecordChild3, // #2 = $src_w
/*18832*/     OPC_Scope, 75|128,2/*331*/, /*->19166*/ // 2 children in Scope
/*18835*/       OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*18837*/       OPC_EmitInteger, MVT::i32, 1, 
/*18840*/       OPC_EmitInteger, MVT::i32, 0, 
/*18843*/       OPC_EmitInteger, MVT::i32, 0, 
/*18846*/       OPC_EmitInteger, MVT::i32, 0, 
/*18849*/       OPC_EmitInteger, MVT::i32, 0, 
/*18852*/       OPC_EmitInteger, MVT::i32, 0, 
/*18855*/       OPC_EmitInteger, MVT::i32, 1, 
/*18858*/       OPC_EmitInteger, MVT::i32, 0, 
/*18861*/       OPC_EmitInteger, MVT::i32, 0, 
/*18864*/       OPC_EmitInteger, MVT::i32, 0, 
/*18867*/       OPC_EmitInteger, MVT::i32, 0, 
/*18870*/       OPC_EmitInteger, MVT::i32, 0, 
/*18873*/       OPC_EmitInteger, MVT::i32, 1, 
/*18876*/       OPC_EmitInteger, MVT::i32, 0, 
/*18879*/       OPC_EmitInteger, MVT::i32, 0, 
/*18882*/       OPC_EmitInteger, MVT::i32, 0, 
/*18885*/       OPC_EmitInteger, MVT::i32, 0, 
/*18888*/       OPC_EmitInteger, MVT::i32, 0, 
/*18891*/       OPC_EmitInteger, MVT::i32, 0, 
/*18894*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*18906*/       OPC_EmitRegister, MVT::f32, AMDGPU::ZERO,
/*18909*/       OPC_EmitInteger, MVT::i32, 0, 
/*18912*/       OPC_EmitInteger, MVT::i32, 0, 
/*18915*/       OPC_EmitInteger, MVT::i32, 0, 
/*18918*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*18930*/       OPC_EmitInteger, MVT::i32, 1, 
/*18933*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*18936*/       OPC_EmitInteger, MVT::i32, 0, 
/*18939*/       OPC_EmitInteger, MVT::i32, 0, 
/*18942*/       OPC_EmitNode, TARGET_VAL(AMDGPU::MAX), 0,
                    1/*#VTs*/, MVT::i32, 20/*#Ops*/, 13, 14, 15, 16, 17, 18, 1, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31,  // Results = #32
/*18969*/       OPC_EmitInteger, MVT::i32, 0, 
/*18972*/       OPC_EmitInteger, MVT::i32, 0, 
/*18975*/       OPC_EmitInteger, MVT::i32, 0, 
/*18978*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*18990*/       OPC_EmitInteger, MVT::i32, 1, 
/*18993*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*18996*/       OPC_EmitInteger, MVT::i32, 0, 
/*18999*/       OPC_EmitInteger, MVT::i32, 0, 
/*19002*/       OPC_EmitNode, TARGET_VAL(AMDGPU::LOG_CLAMPED_r600), 0,
                    1/*#VTs*/, MVT::i32, 13/*#Ops*/, 9, 10, 11, 12, 32, 33, 34, 35, 36, 37, 38, 39, 40,  // Results = #41
/*19022*/       OPC_EmitInteger, MVT::i32, 0, 
/*19025*/       OPC_EmitInteger, MVT::i32, 0, 
/*19028*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*19040*/       OPC_EmitInteger, MVT::i32, 0, 
/*19043*/       OPC_EmitInteger, MVT::i32, 0, 
/*19046*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*19058*/       OPC_EmitInteger, MVT::i32, 0, 
/*19061*/       OPC_EmitInteger, MVT::i32, 0, 
/*19064*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*19076*/       OPC_EmitInteger, MVT::i32, 1, 
/*19079*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*19082*/       OPC_EmitInteger, MVT::i32, 0, 
/*19085*/       OPC_EmitInteger, MVT::i32, 0, 
/*19088*/       OPC_EmitNode, TARGET_VAL(AMDGPU::MUL_LIT_r600), 0,
                    1/*#VTs*/, MVT::i32, 18/*#Ops*/, 7, 8, 41, 42, 43, 44, 2, 45, 46, 47, 0, 48, 49, 50, 51, 52, 53, 54,  // Results = #55
/*19113*/       OPC_EmitInteger, MVT::i32, 0, 
/*19116*/       OPC_EmitInteger, MVT::i32, 0, 
/*19119*/       OPC_EmitInteger, MVT::i32, 0, 
/*19122*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*19134*/       OPC_EmitInteger, MVT::i32, 1, 
/*19137*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*19140*/       OPC_EmitInteger, MVT::i32, 0, 
/*19143*/       OPC_EmitInteger, MVT::i32, 0, 
/*19146*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EXP_IEEE_r600), 0,
                    1/*#VTs*/, MVT::f32, 13/*#Ops*/, 3, 4, 5, 6, 55, 56, 57, 58, 59, 60, 61, 62, 63, 
                // Src: (intrinsic_wo_chain:f32 3235:iPTR, f32:f32:$src_x, f32:f32:$src_y, f32:f32:$src_w) - Complexity = 8
                // Dst: (EXP_IEEE_r600:f32 (MUL_LIT_r600:i32 (LOG_CLAMPED_r600:i32 (MAX:i32 ?:f32:$src_y, ZERO:f32)), ?:f32:$src_w, ?:f32:$src_x))
/*19166*/     /*Scope*/ 75|128,2/*331*/, /*->19499*/
/*19168*/       OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*19170*/       OPC_EmitInteger, MVT::i32, 1, 
/*19173*/       OPC_EmitInteger, MVT::i32, 0, 
/*19176*/       OPC_EmitInteger, MVT::i32, 0, 
/*19179*/       OPC_EmitInteger, MVT::i32, 0, 
/*19182*/       OPC_EmitInteger, MVT::i32, 0, 
/*19185*/       OPC_EmitInteger, MVT::i32, 0, 
/*19188*/       OPC_EmitInteger, MVT::i32, 1, 
/*19191*/       OPC_EmitInteger, MVT::i32, 0, 
/*19194*/       OPC_EmitInteger, MVT::i32, 0, 
/*19197*/       OPC_EmitInteger, MVT::i32, 0, 
/*19200*/       OPC_EmitInteger, MVT::i32, 0, 
/*19203*/       OPC_EmitInteger, MVT::i32, 0, 
/*19206*/       OPC_EmitInteger, MVT::i32, 1, 
/*19209*/       OPC_EmitInteger, MVT::i32, 0, 
/*19212*/       OPC_EmitInteger, MVT::i32, 0, 
/*19215*/       OPC_EmitInteger, MVT::i32, 0, 
/*19218*/       OPC_EmitInteger, MVT::i32, 0, 
/*19221*/       OPC_EmitInteger, MVT::i32, 0, 
/*19224*/       OPC_EmitInteger, MVT::i32, 0, 
/*19227*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*19239*/       OPC_EmitRegister, MVT::f32, AMDGPU::ZERO,
/*19242*/       OPC_EmitInteger, MVT::i32, 0, 
/*19245*/       OPC_EmitInteger, MVT::i32, 0, 
/*19248*/       OPC_EmitInteger, MVT::i32, 0, 
/*19251*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*19263*/       OPC_EmitInteger, MVT::i32, 1, 
/*19266*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*19269*/       OPC_EmitInteger, MVT::i32, 0, 
/*19272*/       OPC_EmitInteger, MVT::i32, 0, 
/*19275*/       OPC_EmitNode, TARGET_VAL(AMDGPU::MAX), 0,
                    1/*#VTs*/, MVT::i32, 20/*#Ops*/, 13, 14, 15, 16, 17, 18, 1, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31,  // Results = #32
/*19302*/       OPC_EmitInteger, MVT::i32, 0, 
/*19305*/       OPC_EmitInteger, MVT::i32, 0, 
/*19308*/       OPC_EmitInteger, MVT::i32, 0, 
/*19311*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*19323*/       OPC_EmitInteger, MVT::i32, 1, 
/*19326*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*19329*/       OPC_EmitInteger, MVT::i32, 0, 
/*19332*/       OPC_EmitInteger, MVT::i32, 0, 
/*19335*/       OPC_EmitNode, TARGET_VAL(AMDGPU::LOG_CLAMPED_eg), 0,
                    1/*#VTs*/, MVT::i32, 13/*#Ops*/, 9, 10, 11, 12, 32, 33, 34, 35, 36, 37, 38, 39, 40,  // Results = #41
/*19355*/       OPC_EmitInteger, MVT::i32, 0, 
/*19358*/       OPC_EmitInteger, MVT::i32, 0, 
/*19361*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*19373*/       OPC_EmitInteger, MVT::i32, 0, 
/*19376*/       OPC_EmitInteger, MVT::i32, 0, 
/*19379*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*19391*/       OPC_EmitInteger, MVT::i32, 0, 
/*19394*/       OPC_EmitInteger, MVT::i32, 0, 
/*19397*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*19409*/       OPC_EmitInteger, MVT::i32, 1, 
/*19412*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*19415*/       OPC_EmitInteger, MVT::i32, 0, 
/*19418*/       OPC_EmitInteger, MVT::i32, 0, 
/*19421*/       OPC_EmitNode, TARGET_VAL(AMDGPU::MUL_LIT_eg), 0,
                    1/*#VTs*/, MVT::i32, 18/*#Ops*/, 7, 8, 41, 42, 43, 44, 2, 45, 46, 47, 0, 48, 49, 50, 51, 52, 53, 54,  // Results = #55
/*19446*/       OPC_EmitInteger, MVT::i32, 0, 
/*19449*/       OPC_EmitInteger, MVT::i32, 0, 
/*19452*/       OPC_EmitInteger, MVT::i32, 0, 
/*19455*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*19467*/       OPC_EmitInteger, MVT::i32, 1, 
/*19470*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*19473*/       OPC_EmitInteger, MVT::i32, 0, 
/*19476*/       OPC_EmitInteger, MVT::i32, 0, 
/*19479*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EXP_IEEE_eg), 0,
                    1/*#VTs*/, MVT::f32, 13/*#Ops*/, 3, 4, 5, 6, 55, 56, 57, 58, 59, 60, 61, 62, 63, 
                // Src: (intrinsic_wo_chain:f32 3235:iPTR, f32:f32:$src_x, f32:f32:$src_y, f32:f32:$src_w) - Complexity = 8
                // Dst: (EXP_IEEE_eg:f32 (MUL_LIT_eg:i32 (LOG_CLAMPED_eg:i32 (MAX:i32 ?:f32:$src_y, ZERO:f32)), ?:f32:$src_w, ?:f32:$src_x))
/*19499*/     0, /*End of Scope*/
/*19500*/   /*Scope*/ 19|128,3/*403*/, /*->19905*/
/*19502*/     OPC_CheckInteger, 24|128,25/*3224*/, 
/*19505*/     OPC_MoveParent,
/*19506*/     OPC_RecordChild1, // #0 = $addr
/*19507*/     OPC_Scope, 68|128,1/*196*/, /*->19706*/ // 2 children in Scope
/*19510*/       OPC_CheckChild1Type, MVT::v2i32,
/*19512*/       OPC_RecordChild2, // #1 = $rsrc
/*19513*/       OPC_MoveChild, 3,
/*19515*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19518*/       OPC_Scope, 46, /*->19566*/ // 4 children in Scope
/*19520*/         OPC_CheckPredicate, 41, // Predicate_TEX_ARRAY
/*19522*/         OPC_MoveParent,
/*19523*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*19525*/         OPC_EmitInteger, MVT::i32, 15, 
/*19528*/         OPC_EmitInteger, MVT::i1, 0, 
/*19531*/         OPC_EmitInteger, MVT::i1, 0, 
/*19534*/         OPC_EmitInteger, MVT::i1, 1, 
/*19537*/         OPC_EmitInteger, MVT::i1, 0, 
/*19540*/         OPC_EmitInteger, MVT::i1, 0, 
/*19543*/         OPC_EmitInteger, MVT::i1, 0, 
/*19546*/         OPC_EmitInteger, MVT::i1, 0, 
/*19549*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_LOAD_MIP_V2), 0,
                      1/*#VTs*/, MVT::v4i32, 10/*#Ops*/, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 
                  // Src: (intrinsic_wo_chain:v4i32 3224:iPTR, v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_LOAD_MIP_V2:v4i32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc)
/*19566*/       /*Scope*/ 46, /*->19613*/
/*19567*/         OPC_CheckPredicate, 42, // Predicate_TEX_MSAA
/*19569*/         OPC_MoveParent,
/*19570*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*19572*/         OPC_EmitInteger, MVT::i32, 15, 
/*19575*/         OPC_EmitInteger, MVT::i1, 0, 
/*19578*/         OPC_EmitInteger, MVT::i1, 0, 
/*19581*/         OPC_EmitInteger, MVT::i1, 0, 
/*19584*/         OPC_EmitInteger, MVT::i1, 0, 
/*19587*/         OPC_EmitInteger, MVT::i1, 0, 
/*19590*/         OPC_EmitInteger, MVT::i1, 0, 
/*19593*/         OPC_EmitInteger, MVT::i1, 0, 
/*19596*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_LOAD_V2), 0,
                      1/*#VTs*/, MVT::v4i32, 10/*#Ops*/, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 
                  // Src: (intrinsic_wo_chain:v4i32 3224:iPTR, v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, (imm:i32)<<P:Predicate_TEX_MSAA>>) - Complexity = 12
                  // Dst: (IMAGE_LOAD_V2:v4i32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc)
/*19613*/       /*Scope*/ 46, /*->19660*/
/*19614*/         OPC_CheckPredicate, 43, // Predicate_TEX_ARRAY_MSAA
/*19616*/         OPC_MoveParent,
/*19617*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*19619*/         OPC_EmitInteger, MVT::i32, 15, 
/*19622*/         OPC_EmitInteger, MVT::i1, 0, 
/*19625*/         OPC_EmitInteger, MVT::i1, 0, 
/*19628*/         OPC_EmitInteger, MVT::i1, 1, 
/*19631*/         OPC_EmitInteger, MVT::i1, 0, 
/*19634*/         OPC_EmitInteger, MVT::i1, 0, 
/*19637*/         OPC_EmitInteger, MVT::i1, 0, 
/*19640*/         OPC_EmitInteger, MVT::i1, 0, 
/*19643*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_LOAD_V2), 0,
                      1/*#VTs*/, MVT::v4i32, 10/*#Ops*/, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 
                  // Src: (intrinsic_wo_chain:v4i32 3224:iPTR, v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, (imm:i32)<<P:Predicate_TEX_ARRAY_MSAA>>) - Complexity = 12
                  // Dst: (IMAGE_LOAD_V2:v4i32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc)
/*19660*/       /*Scope*/ 44, /*->19705*/
/*19661*/         OPC_MoveParent,
/*19662*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*19664*/         OPC_EmitInteger, MVT::i32, 15, 
/*19667*/         OPC_EmitInteger, MVT::i1, 0, 
/*19670*/         OPC_EmitInteger, MVT::i1, 0, 
/*19673*/         OPC_EmitInteger, MVT::i1, 0, 
/*19676*/         OPC_EmitInteger, MVT::i1, 0, 
/*19679*/         OPC_EmitInteger, MVT::i1, 0, 
/*19682*/         OPC_EmitInteger, MVT::i1, 0, 
/*19685*/         OPC_EmitInteger, MVT::i1, 0, 
/*19688*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_LOAD_MIP_V2), 0,
                      1/*#VTs*/, MVT::v4i32, 10/*#Ops*/, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 
                  // Src: (intrinsic_wo_chain:v4i32 3224:iPTR, v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, (imm:i32)) - Complexity = 11
                  // Dst: (IMAGE_LOAD_MIP_V2:v4i32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc)
/*19705*/       0, /*End of Scope*/
/*19706*/     /*Scope*/ 68|128,1/*196*/, /*->19904*/
/*19708*/       OPC_CheckChild1Type, MVT::v4i32,
/*19710*/       OPC_RecordChild2, // #1 = $rsrc
/*19711*/       OPC_MoveChild, 3,
/*19713*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19716*/       OPC_Scope, 46, /*->19764*/ // 4 children in Scope
/*19718*/         OPC_CheckPredicate, 41, // Predicate_TEX_ARRAY
/*19720*/         OPC_MoveParent,
/*19721*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*19723*/         OPC_EmitInteger, MVT::i32, 15, 
/*19726*/         OPC_EmitInteger, MVT::i1, 0, 
/*19729*/         OPC_EmitInteger, MVT::i1, 0, 
/*19732*/         OPC_EmitInteger, MVT::i1, 1, 
/*19735*/         OPC_EmitInteger, MVT::i1, 0, 
/*19738*/         OPC_EmitInteger, MVT::i1, 0, 
/*19741*/         OPC_EmitInteger, MVT::i1, 0, 
/*19744*/         OPC_EmitInteger, MVT::i1, 0, 
/*19747*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_LOAD_MIP_V4), 0,
                      1/*#VTs*/, MVT::v4i32, 10/*#Ops*/, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 
                  // Src: (intrinsic_wo_chain:v4i32 3224:iPTR, v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_LOAD_MIP_V4:v4i32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc)
/*19764*/       /*Scope*/ 46, /*->19811*/
/*19765*/         OPC_CheckPredicate, 42, // Predicate_TEX_MSAA
/*19767*/         OPC_MoveParent,
/*19768*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*19770*/         OPC_EmitInteger, MVT::i32, 15, 
/*19773*/         OPC_EmitInteger, MVT::i1, 0, 
/*19776*/         OPC_EmitInteger, MVT::i1, 0, 
/*19779*/         OPC_EmitInteger, MVT::i1, 0, 
/*19782*/         OPC_EmitInteger, MVT::i1, 0, 
/*19785*/         OPC_EmitInteger, MVT::i1, 0, 
/*19788*/         OPC_EmitInteger, MVT::i1, 0, 
/*19791*/         OPC_EmitInteger, MVT::i1, 0, 
/*19794*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_LOAD_V4), 0,
                      1/*#VTs*/, MVT::v4i32, 10/*#Ops*/, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 
                  // Src: (intrinsic_wo_chain:v4i32 3224:iPTR, v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, (imm:i32)<<P:Predicate_TEX_MSAA>>) - Complexity = 12
                  // Dst: (IMAGE_LOAD_V4:v4i32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc)
/*19811*/       /*Scope*/ 46, /*->19858*/
/*19812*/         OPC_CheckPredicate, 43, // Predicate_TEX_ARRAY_MSAA
/*19814*/         OPC_MoveParent,
/*19815*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*19817*/         OPC_EmitInteger, MVT::i32, 15, 
/*19820*/         OPC_EmitInteger, MVT::i1, 0, 
/*19823*/         OPC_EmitInteger, MVT::i1, 0, 
/*19826*/         OPC_EmitInteger, MVT::i1, 1, 
/*19829*/         OPC_EmitInteger, MVT::i1, 0, 
/*19832*/         OPC_EmitInteger, MVT::i1, 0, 
/*19835*/         OPC_EmitInteger, MVT::i1, 0, 
/*19838*/         OPC_EmitInteger, MVT::i1, 0, 
/*19841*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_LOAD_V4), 0,
                      1/*#VTs*/, MVT::v4i32, 10/*#Ops*/, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 
                  // Src: (intrinsic_wo_chain:v4i32 3224:iPTR, v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, (imm:i32)<<P:Predicate_TEX_ARRAY_MSAA>>) - Complexity = 12
                  // Dst: (IMAGE_LOAD_V4:v4i32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc)
/*19858*/       /*Scope*/ 44, /*->19903*/
/*19859*/         OPC_MoveParent,
/*19860*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*19862*/         OPC_EmitInteger, MVT::i32, 15, 
/*19865*/         OPC_EmitInteger, MVT::i1, 0, 
/*19868*/         OPC_EmitInteger, MVT::i1, 0, 
/*19871*/         OPC_EmitInteger, MVT::i1, 0, 
/*19874*/         OPC_EmitInteger, MVT::i1, 0, 
/*19877*/         OPC_EmitInteger, MVT::i1, 0, 
/*19880*/         OPC_EmitInteger, MVT::i1, 0, 
/*19883*/         OPC_EmitInteger, MVT::i1, 0, 
/*19886*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_LOAD_MIP_V4), 0,
                      1/*#VTs*/, MVT::v4i32, 10/*#Ops*/, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 
                  // Src: (intrinsic_wo_chain:v4i32 3224:iPTR, v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, (imm:i32)) - Complexity = 11
                  // Dst: (IMAGE_LOAD_MIP_V4:v4i32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc)
/*19903*/       0, /*End of Scope*/
/*19904*/     0, /*End of Scope*/
/*19905*/   /*Scope*/ 48|128,1/*176*/, /*->20083*/
/*19907*/     OPC_CheckInteger, 28|128,25/*3228*/, 
/*19910*/     OPC_MoveParent,
/*19911*/     OPC_RecordChild1, // #0 = $mipid
/*19912*/     OPC_RecordChild2, // #1 = $rsrc
/*19913*/     OPC_MoveChild, 3,
/*19915*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19918*/     OPC_Scope, 54, /*->19974*/ // 3 children in Scope
/*19920*/       OPC_CheckPredicate, 41, // Predicate_TEX_ARRAY
/*19922*/       OPC_MoveParent,
/*19923*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*19925*/       OPC_EmitInteger, MVT::i32, 15, 
/*19928*/       OPC_EmitInteger, MVT::i1, 0, 
/*19931*/       OPC_EmitInteger, MVT::i1, 0, 
/*19934*/       OPC_EmitInteger, MVT::i1, 1, 
/*19937*/       OPC_EmitInteger, MVT::i1, 0, 
/*19940*/       OPC_EmitInteger, MVT::i1, 0, 
/*19943*/       OPC_EmitInteger, MVT::i1, 0, 
/*19946*/       OPC_EmitInteger, MVT::i1, 0, 
/*19949*/       OPC_EmitNode, TARGET_VAL(AMDGPU::V_MOV_B32_e32), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0,  // Results = #10
/*19957*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_GET_RESINFO), 0,
                    1/*#VTs*/, MVT::v4i32, 10/*#Ops*/, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 
                // Src: (intrinsic_wo_chain:v4i32 3228:iPTR, i32:i32:$mipid, v32i8:v32i8:$rsrc, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 12
                // Dst: (IMAGE_GET_RESINFO:v4i32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, (V_MOV_B32_e32:i32 ?:i32:$mipid), ?:v32i8:$rsrc)
/*19974*/     /*Scope*/ 54, /*->20029*/
/*19975*/       OPC_CheckPredicate, 43, // Predicate_TEX_ARRAY_MSAA
/*19977*/       OPC_MoveParent,
/*19978*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*19980*/       OPC_EmitInteger, MVT::i32, 15, 
/*19983*/       OPC_EmitInteger, MVT::i1, 0, 
/*19986*/       OPC_EmitInteger, MVT::i1, 0, 
/*19989*/       OPC_EmitInteger, MVT::i1, 1, 
/*19992*/       OPC_EmitInteger, MVT::i1, 0, 
/*19995*/       OPC_EmitInteger, MVT::i1, 0, 
/*19998*/       OPC_EmitInteger, MVT::i1, 0, 
/*20001*/       OPC_EmitInteger, MVT::i1, 0, 
/*20004*/       OPC_EmitNode, TARGET_VAL(AMDGPU::V_MOV_B32_e32), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0,  // Results = #10
/*20012*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_GET_RESINFO), 0,
                    1/*#VTs*/, MVT::v4i32, 10/*#Ops*/, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 
                // Src: (intrinsic_wo_chain:v4i32 3228:iPTR, i32:i32:$mipid, v32i8:v32i8:$rsrc, (imm:i32)<<P:Predicate_TEX_ARRAY_MSAA>>) - Complexity = 12
                // Dst: (IMAGE_GET_RESINFO:v4i32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, (V_MOV_B32_e32:i32 ?:i32:$mipid), ?:v32i8:$rsrc)
/*20029*/     /*Scope*/ 52, /*->20082*/
/*20030*/       OPC_MoveParent,
/*20031*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20033*/       OPC_EmitInteger, MVT::i32, 15, 
/*20036*/       OPC_EmitInteger, MVT::i1, 0, 
/*20039*/       OPC_EmitInteger, MVT::i1, 0, 
/*20042*/       OPC_EmitInteger, MVT::i1, 0, 
/*20045*/       OPC_EmitInteger, MVT::i1, 0, 
/*20048*/       OPC_EmitInteger, MVT::i1, 0, 
/*20051*/       OPC_EmitInteger, MVT::i1, 0, 
/*20054*/       OPC_EmitInteger, MVT::i1, 0, 
/*20057*/       OPC_EmitNode, TARGET_VAL(AMDGPU::V_MOV_B32_e32), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0,  // Results = #10
/*20065*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_GET_RESINFO), 0,
                    1/*#VTs*/, MVT::v4i32, 10/*#Ops*/, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 
                // Src: (intrinsic_wo_chain:v4i32 3228:iPTR, i32:i32:$mipid, v32i8:v32i8:$rsrc, (imm:i32)) - Complexity = 11
                // Dst: (IMAGE_GET_RESINFO:v4i32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, (V_MOV_B32_e32:i32 ?:i32:$mipid), ?:v32i8:$rsrc)
/*20082*/     0, /*End of Scope*/
/*20083*/   /*Scope*/ 29, /*->20113*/
/*20084*/     OPC_CheckInteger, 1|128,25/*3201*/, 
/*20087*/     OPC_MoveParent,
/*20088*/     OPC_RecordChild1, // #0 = $ptr
/*20089*/     OPC_RecordChild2, // #1 = $BUFFER_ID
/*20090*/     OPC_MoveChild, 2,
/*20092*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*20095*/     OPC_MoveParent,
/*20096*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*20098*/     OPC_CheckComplexPat, /*CP*/5, /*#*/0, // SelectGlobalValueVariableOffset:$ptr #2 #3
/*20101*/     OPC_EmitConvertToTarget, 1,
/*20103*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TEX_VTX_TEXBUF), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 2, 3, 4, 
              // Src: (intrinsic_wo_chain:v4f32 3201:iPTR, ADDRGA_VAR_OFFSET:i32:$ptr, (imm:i32):$BUFFER_ID) - Complexity = 20
              // Dst: (TEX_VTX_TEXBUF:v4f32 ADDRGA_VAR_OFFSET:i32:$ptr, (imm:i32):$BUFFER_ID)
/*20113*/   /*Scope*/ 77, /*->20191*/
/*20114*/     OPC_CheckInteger, 39|128,24/*3111*/, 
/*20117*/     OPC_MoveParent,
/*20118*/     OPC_RecordChild1, // #0 = $src0
/*20119*/     OPC_RecordChild2, // #1 = $src1
/*20120*/     OPC_RecordChild3, // #2 = $src2
/*20121*/     OPC_RecordChild4, // #3 = $resourceId
/*20122*/     OPC_MoveChild, 4,
/*20124*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*20127*/     OPC_MoveParent,
/*20128*/     OPC_RecordChild5, // #4 = $samplerId
/*20129*/     OPC_MoveChild, 5,
/*20131*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*20134*/     OPC_MoveParent,
/*20135*/     OPC_RecordChild6, // #5 = $textureTarget
/*20136*/     OPC_MoveChild, 6,
/*20138*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*20141*/     OPC_Scope, 24, /*->20167*/ // 2 children in Scope
/*20143*/       OPC_CheckPredicate, 44, // Predicate_TEX_SHADOW
/*20145*/       OPC_MoveParent,
/*20146*/       OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*20148*/       OPC_EmitConvertToTarget, 3,
/*20150*/       OPC_EmitConvertToTarget, 4,
/*20152*/       OPC_EmitConvertToTarget, 5,
/*20154*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TXD_SHADOW), 0,
                    1/*#VTs*/, MVT::v4f32, 6/*#Ops*/, 0, 1, 2, 6, 7, 8, 
                // Src: (intrinsic_wo_chain:v4f32 3111:iPTR, v4f32:v4f32:$src0, v4f32:v4f32:$src1, v4f32:v4f32:$src2, (imm:i32):$resourceId, (imm:i32):$samplerId, (imm:i32)<<P:Predicate_TEX_SHADOW>>:$textureTarget) - Complexity = 18
                // Dst: (TXD_SHADOW:v4f32 v4f32:v4f32:$src0, v4f32:v4f32:$src1, v4f32:v4f32:$src2, (imm:i32):$resourceId, (imm:i32):$samplerId, (imm:i32):$textureTarget)
/*20167*/     /*Scope*/ 22, /*->20190*/
/*20168*/       OPC_MoveParent,
/*20169*/       OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*20171*/       OPC_EmitConvertToTarget, 3,
/*20173*/       OPC_EmitConvertToTarget, 4,
/*20175*/       OPC_EmitConvertToTarget, 5,
/*20177*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TXD), 0,
                    1/*#VTs*/, MVT::v4f32, 6/*#Ops*/, 0, 1, 2, 6, 7, 8, 
                // Src: (intrinsic_wo_chain:v4f32 3111:iPTR, v4f32:v4f32:$src0, v4f32:v4f32:$src1, v4f32:v4f32:$src2, (imm:i32):$resourceId, (imm:i32):$samplerId, (imm:i32):$textureTarget) - Complexity = 17
                // Dst: (TXD:v4f32 v4f32:v4f32:$src0, v4f32:v4f32:$src1, v4f32:v4f32:$src2, (imm:i32):$resourceId, (imm:i32):$samplerId, (imm:i32):$textureTarget)
/*20190*/     0, /*End of Scope*/
/*20191*/   /*Scope*/ 84|128,2/*340*/, /*->20533*/
/*20193*/     OPC_CheckInteger, 11|128,24/*3083*/, 
/*20196*/     OPC_MoveParent,
/*20197*/     OPC_RecordChild1, // #0 = $src0
/*20198*/     OPC_Scope, 10, /*->20210*/ // 3 children in Scope
/*20200*/       OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*20202*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CUBE_r600_pseudo), 0,
                    1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4f32 3083:iPTR, v4f32:v4f32:$src0) - Complexity = 8
                // Dst: (CUBE_r600_pseudo:v4f32 v4f32:v4f32:$src0)
/*20210*/     /*Scope*/ 10, /*->20221*/
/*20211*/       OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*20213*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CUBE_eg_pseudo), 0,
                    1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4f32 3083:iPTR, v4f32:v4f32:$src0) - Complexity = 8
                // Dst: (CUBE_eg_pseudo:v4f32 v4f32:v4f32:$src0)
/*20221*/     /*Scope*/ 53|128,2/*309*/, /*->20532*/
/*20223*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20225*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::v4f32, 0/*#Ops*/,  // Results = #1
/*20232*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*20235*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*20244*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*20247*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*20256*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*20259*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 6,  // Results = #7
/*20268*/       OPC_EmitInteger, MVT::i32, 0, 
/*20271*/       OPC_EmitInteger, MVT::i32, 0, 
/*20274*/       OPC_EmitInteger, MVT::i32, 0, 
/*20277*/       OPC_EmitInteger, MVT::i32, 0, 
/*20280*/       OPC_EmitNode, TARGET_VAL(AMDGPU::V_CUBETC_F32), 0,
                    1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 5, 7, 8, 9, 10, 11,  // Results = #12
/*20294*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*20297*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 1, 12, 13,  // Results = #14
/*20307*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*20310*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 15,  // Results = #16
/*20319*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*20322*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 17,  // Results = #18
/*20331*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*20334*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 19,  // Results = #20
/*20343*/       OPC_EmitInteger, MVT::i32, 0, 
/*20346*/       OPC_EmitInteger, MVT::i32, 0, 
/*20349*/       OPC_EmitInteger, MVT::i32, 0, 
/*20352*/       OPC_EmitInteger, MVT::i32, 0, 
/*20355*/       OPC_EmitNode, TARGET_VAL(AMDGPU::V_CUBESC_F32), 0,
                    1/*#VTs*/, MVT::i32, 7/*#Ops*/, 16, 18, 20, 21, 22, 23, 24,  // Results = #25
/*20369*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*20372*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 14, 25, 26,  // Results = #27
/*20382*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*20385*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 28,  // Results = #29
/*20394*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*20397*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 30,  // Results = #31
/*20406*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*20409*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 32,  // Results = #33
/*20418*/       OPC_EmitInteger, MVT::i32, 0, 
/*20421*/       OPC_EmitInteger, MVT::i32, 0, 
/*20424*/       OPC_EmitInteger, MVT::i32, 0, 
/*20427*/       OPC_EmitInteger, MVT::i32, 0, 
/*20430*/       OPC_EmitNode, TARGET_VAL(AMDGPU::V_CUBEMA_F32), 0,
                    1/*#VTs*/, MVT::i32, 7/*#Ops*/, 29, 31, 33, 34, 35, 36, 37,  // Results = #38
/*20444*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*20447*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 27, 38, 39,  // Results = #40
/*20457*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*20460*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 41,  // Results = #42
/*20469*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*20472*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 43,  // Results = #44
/*20481*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*20484*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 45,  // Results = #46
/*20493*/       OPC_EmitInteger, MVT::i32, 0, 
/*20496*/       OPC_EmitInteger, MVT::i32, 0, 
/*20499*/       OPC_EmitInteger, MVT::i32, 0, 
/*20502*/       OPC_EmitInteger, MVT::i32, 0, 
/*20505*/       OPC_EmitNode, TARGET_VAL(AMDGPU::V_CUBEID_F32), 0,
                    1/*#VTs*/, MVT::i32, 7/*#Ops*/, 42, 44, 46, 47, 48, 49, 50,  // Results = #51
/*20519*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*20522*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 40, 51, 52, 
                // Src: (intrinsic_wo_chain:v4f32 3083:iPTR, v4f32:v4f32:$src) - Complexity = 8
                // Dst: (INSERT_SUBREG:v4f32 (INSERT_SUBREG:v4f32 (INSERT_SUBREG:v4f32 (INSERT_SUBREG:v4f32 (IMPLICIT_DEF:v4f32), (V_CUBETC_F32:i32 (EXTRACT_SUBREG:i32 ?:v4f32:$src, sub0:i32), (EXTRACT_SUBREG:i32 ?:v4f32:$src, sub1:i32), (EXTRACT_SUBREG:i32 ?:v4f32:$src, sub2:i32)), sub0:i32), (V_CUBESC_F32:i32 (EXTRACT_SUBREG:i32 ?:v4f32:$src, sub0:i32), (EXTRACT_SUBREG:i32 ?:v4f32:$src, sub1:i32), (EXTRACT_SUBREG:i32 ?:v4f32:$src, sub2:i32)), sub1:i32), (V_CUBEMA_F32:i32 (EXTRACT_SUBREG:i32 ?:v4f32:$src, sub0:i32), (EXTRACT_SUBREG:i32 ?:v4f32:$src, sub1:i32), (EXTRACT_SUBREG:i32 ?:v4f32:$src, sub2:i32)), sub2:i32), (V_CUBEID_F32:i32 (EXTRACT_SUBREG:i32 ?:v4f32:$src, sub0:i32), (EXTRACT_SUBREG:i32 ?:v4f32:$src, sub1:i32), (EXTRACT_SUBREG:i32 ?:v4f32:$src, sub2:i32)), sub3:i32)
/*20532*/     0, /*End of Scope*/
/*20533*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 18|128,14/*1810*/,  TARGET_VAL(ISD::EXTRACT_VECTOR_ELT),// ->22348
/*20538*/   OPC_RecordChild0, // #0 = $src
/*20539*/   OPC_Scope, 30|128,1/*158*/, /*->20700*/ // 8 children in Scope
/*20542*/     OPC_CheckChild0Type, MVT::v4i32,
/*20544*/     OPC_MoveChild, 1,
/*20546*/     OPC_Scope, 37, /*->20585*/ // 4 children in Scope
/*20548*/       OPC_CheckInteger, 0, 
/*20550*/       OPC_MoveParent,
/*20551*/       OPC_CheckType, MVT::i32,
/*20553*/       OPC_Scope, 14, /*->20569*/ // 2 children in Scope
/*20555*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*20557*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*20560*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:i32 v4i32:v4i32:$src, 0:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:i32 ?:v4i32:$src, sub0:i32)
/*20569*/       /*Scope*/ 14, /*->20584*/
/*20570*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20572*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*20575*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:i32 v4i32:v4i32:$src, 0:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:i32 ?:v4i32:$src, sub0:i32)
/*20584*/       0, /*End of Scope*/
/*20585*/     /*Scope*/ 37, /*->20623*/
/*20586*/       OPC_CheckInteger, 1, 
/*20588*/       OPC_MoveParent,
/*20589*/       OPC_CheckType, MVT::i32,
/*20591*/       OPC_Scope, 14, /*->20607*/ // 2 children in Scope
/*20593*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*20595*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*20598*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:i32 v4i32:v4i32:$src, 1:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:i32 ?:v4i32:$src, sub1:i32)
/*20607*/       /*Scope*/ 14, /*->20622*/
/*20608*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20610*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*20613*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:i32 v4i32:v4i32:$src, 1:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:i32 ?:v4i32:$src, sub1:i32)
/*20622*/       0, /*End of Scope*/
/*20623*/     /*Scope*/ 37, /*->20661*/
/*20624*/       OPC_CheckInteger, 2, 
/*20626*/       OPC_MoveParent,
/*20627*/       OPC_CheckType, MVT::i32,
/*20629*/       OPC_Scope, 14, /*->20645*/ // 2 children in Scope
/*20631*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*20633*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*20636*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:i32 v4i32:v4i32:$src, 2:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:i32 ?:v4i32:$src, sub2:i32)
/*20645*/       /*Scope*/ 14, /*->20660*/
/*20646*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20648*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*20651*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:i32 v4i32:v4i32:$src, 2:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:i32 ?:v4i32:$src, sub2:i32)
/*20660*/       0, /*End of Scope*/
/*20661*/     /*Scope*/ 37, /*->20699*/
/*20662*/       OPC_CheckInteger, 3, 
/*20664*/       OPC_MoveParent,
/*20665*/       OPC_CheckType, MVT::i32,
/*20667*/       OPC_Scope, 14, /*->20683*/ // 2 children in Scope
/*20669*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*20671*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*20674*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:i32 v4i32:v4i32:$src, 3:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:i32 ?:v4i32:$src, sub3:i32)
/*20683*/       /*Scope*/ 14, /*->20698*/
/*20684*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20686*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*20689*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:i32 v4i32:v4i32:$src, 3:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:i32 ?:v4i32:$src, sub3:i32)
/*20698*/       0, /*End of Scope*/
/*20699*/     0, /*End of Scope*/
/*20700*/   /*Scope*/ 102, /*->20803*/
/*20701*/     OPC_CheckChild0Type, MVT::v2i32,
/*20703*/     OPC_MoveChild, 1,
/*20705*/     OPC_Scope, 37, /*->20744*/ // 3 children in Scope
/*20707*/       OPC_CheckInteger, 0, 
/*20709*/       OPC_MoveParent,
/*20710*/       OPC_CheckType, MVT::i32,
/*20712*/       OPC_Scope, 14, /*->20728*/ // 2 children in Scope
/*20714*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*20716*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*20719*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:i32 v2i32:v2i32:$src, 0:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:i32 ?:v2i32:$src, sub0:i32)
/*20728*/       /*Scope*/ 14, /*->20743*/
/*20729*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20731*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*20734*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:i32 v2i32:v2i32:$src, 0:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:i32 ?:v2i32:$src, sub0:i32)
/*20743*/       0, /*End of Scope*/
/*20744*/     /*Scope*/ 37, /*->20782*/
/*20745*/       OPC_CheckInteger, 1, 
/*20747*/       OPC_MoveParent,
/*20748*/       OPC_CheckType, MVT::i32,
/*20750*/       OPC_Scope, 14, /*->20766*/ // 2 children in Scope
/*20752*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*20754*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*20757*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:i32 v2i32:v2i32:$src, 1:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:i32 ?:v2i32:$src, sub1:i32)
/*20766*/       /*Scope*/ 14, /*->20781*/
/*20767*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20769*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*20772*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:i32 v2i32:v2i32:$src, 1:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:i32 ?:v2i32:$src, sub1:i32)
/*20781*/       0, /*End of Scope*/
/*20782*/     /*Scope*/ 19, /*->20802*/
/*20783*/       OPC_CheckInteger, 2, 
/*20785*/       OPC_MoveParent,
/*20786*/       OPC_CheckType, MVT::i32,
/*20788*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20790*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*20793*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v2i32:v2i32:$src, 2:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v2i32:$src, sub2:i32)
/*20802*/     0, /*End of Scope*/
/*20803*/   /*Scope*/ 38|128,1/*166*/, /*->20971*/
/*20805*/     OPC_CheckChild0Type, MVT::v8i32,
/*20807*/     OPC_MoveChild, 1,
/*20809*/     OPC_Scope, 19, /*->20830*/ // 8 children in Scope
/*20811*/       OPC_CheckInteger, 0, 
/*20813*/       OPC_MoveParent,
/*20814*/       OPC_CheckType, MVT::i32,
/*20816*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20818*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*20821*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v8i32:v8i32:$src, 0:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v8i32:$src, sub0:i32)
/*20830*/     /*Scope*/ 19, /*->20850*/
/*20831*/       OPC_CheckInteger, 1, 
/*20833*/       OPC_MoveParent,
/*20834*/       OPC_CheckType, MVT::i32,
/*20836*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20838*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*20841*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v8i32:v8i32:$src, 1:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v8i32:$src, sub1:i32)
/*20850*/     /*Scope*/ 19, /*->20870*/
/*20851*/       OPC_CheckInteger, 2, 
/*20853*/       OPC_MoveParent,
/*20854*/       OPC_CheckType, MVT::i32,
/*20856*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20858*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*20861*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v8i32:v8i32:$src, 2:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v8i32:$src, sub2:i32)
/*20870*/     /*Scope*/ 19, /*->20890*/
/*20871*/       OPC_CheckInteger, 3, 
/*20873*/       OPC_MoveParent,
/*20874*/       OPC_CheckType, MVT::i32,
/*20876*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20878*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*20881*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v8i32:v8i32:$src, 3:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v8i32:$src, sub3:i32)
/*20890*/     /*Scope*/ 19, /*->20910*/
/*20891*/       OPC_CheckInteger, 4, 
/*20893*/       OPC_MoveParent,
/*20894*/       OPC_CheckType, MVT::i32,
/*20896*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20898*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub4,
/*20901*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v8i32:v8i32:$src, 4:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v8i32:$src, sub4:i32)
/*20910*/     /*Scope*/ 19, /*->20930*/
/*20911*/       OPC_CheckInteger, 5, 
/*20913*/       OPC_MoveParent,
/*20914*/       OPC_CheckType, MVT::i32,
/*20916*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20918*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub5,
/*20921*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v8i32:v8i32:$src, 5:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v8i32:$src, sub5:i32)
/*20930*/     /*Scope*/ 19, /*->20950*/
/*20931*/       OPC_CheckInteger, 6, 
/*20933*/       OPC_MoveParent,
/*20934*/       OPC_CheckType, MVT::i32,
/*20936*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20938*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub6,
/*20941*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v8i32:v8i32:$src, 6:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v8i32:$src, sub6:i32)
/*20950*/     /*Scope*/ 19, /*->20970*/
/*20951*/       OPC_CheckInteger, 7, 
/*20953*/       OPC_MoveParent,
/*20954*/       OPC_CheckType, MVT::i32,
/*20956*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20958*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub7,
/*20961*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v8i32:v8i32:$src, 7:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v8i32:$src, sub7:i32)
/*20970*/     0, /*End of Scope*/
/*20971*/   /*Scope*/ 70|128,2/*326*/, /*->21299*/
/*20973*/     OPC_CheckChild0Type, MVT::v16i32,
/*20975*/     OPC_MoveChild, 1,
/*20977*/     OPC_Scope, 19, /*->20998*/ // 16 children in Scope
/*20979*/       OPC_CheckInteger, 0, 
/*20981*/       OPC_MoveParent,
/*20982*/       OPC_CheckType, MVT::i32,
/*20984*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20986*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*20989*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 0:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub0:i32)
/*20998*/     /*Scope*/ 19, /*->21018*/
/*20999*/       OPC_CheckInteger, 1, 
/*21001*/       OPC_MoveParent,
/*21002*/       OPC_CheckType, MVT::i32,
/*21004*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21006*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*21009*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 1:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub1:i32)
/*21018*/     /*Scope*/ 19, /*->21038*/
/*21019*/       OPC_CheckInteger, 2, 
/*21021*/       OPC_MoveParent,
/*21022*/       OPC_CheckType, MVT::i32,
/*21024*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21026*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*21029*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 2:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub2:i32)
/*21038*/     /*Scope*/ 19, /*->21058*/
/*21039*/       OPC_CheckInteger, 3, 
/*21041*/       OPC_MoveParent,
/*21042*/       OPC_CheckType, MVT::i32,
/*21044*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21046*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*21049*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 3:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub3:i32)
/*21058*/     /*Scope*/ 19, /*->21078*/
/*21059*/       OPC_CheckInteger, 4, 
/*21061*/       OPC_MoveParent,
/*21062*/       OPC_CheckType, MVT::i32,
/*21064*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21066*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub4,
/*21069*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 4:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub4:i32)
/*21078*/     /*Scope*/ 19, /*->21098*/
/*21079*/       OPC_CheckInteger, 5, 
/*21081*/       OPC_MoveParent,
/*21082*/       OPC_CheckType, MVT::i32,
/*21084*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21086*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub5,
/*21089*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 5:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub5:i32)
/*21098*/     /*Scope*/ 19, /*->21118*/
/*21099*/       OPC_CheckInteger, 6, 
/*21101*/       OPC_MoveParent,
/*21102*/       OPC_CheckType, MVT::i32,
/*21104*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21106*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub6,
/*21109*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 6:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub6:i32)
/*21118*/     /*Scope*/ 19, /*->21138*/
/*21119*/       OPC_CheckInteger, 7, 
/*21121*/       OPC_MoveParent,
/*21122*/       OPC_CheckType, MVT::i32,
/*21124*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21126*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub7,
/*21129*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 7:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub7:i32)
/*21138*/     /*Scope*/ 19, /*->21158*/
/*21139*/       OPC_CheckInteger, 8, 
/*21141*/       OPC_MoveParent,
/*21142*/       OPC_CheckType, MVT::i32,
/*21144*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21146*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub8,
/*21149*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 8:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub8:i32)
/*21158*/     /*Scope*/ 19, /*->21178*/
/*21159*/       OPC_CheckInteger, 9, 
/*21161*/       OPC_MoveParent,
/*21162*/       OPC_CheckType, MVT::i32,
/*21164*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21166*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub9,
/*21169*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 9:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub9:i32)
/*21178*/     /*Scope*/ 19, /*->21198*/
/*21179*/       OPC_CheckInteger, 10, 
/*21181*/       OPC_MoveParent,
/*21182*/       OPC_CheckType, MVT::i32,
/*21184*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21186*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub10,
/*21189*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 10:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub10:i32)
/*21198*/     /*Scope*/ 19, /*->21218*/
/*21199*/       OPC_CheckInteger, 11, 
/*21201*/       OPC_MoveParent,
/*21202*/       OPC_CheckType, MVT::i32,
/*21204*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21206*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub11,
/*21209*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 11:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub11:i32)
/*21218*/     /*Scope*/ 19, /*->21238*/
/*21219*/       OPC_CheckInteger, 12, 
/*21221*/       OPC_MoveParent,
/*21222*/       OPC_CheckType, MVT::i32,
/*21224*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21226*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub12,
/*21229*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 12:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub12:i32)
/*21238*/     /*Scope*/ 19, /*->21258*/
/*21239*/       OPC_CheckInteger, 13, 
/*21241*/       OPC_MoveParent,
/*21242*/       OPC_CheckType, MVT::i32,
/*21244*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21246*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub13,
/*21249*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 13:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub13:i32)
/*21258*/     /*Scope*/ 19, /*->21278*/
/*21259*/       OPC_CheckInteger, 14, 
/*21261*/       OPC_MoveParent,
/*21262*/       OPC_CheckType, MVT::i32,
/*21264*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21266*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub14,
/*21269*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 14:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub14:i32)
/*21278*/     /*Scope*/ 19, /*->21298*/
/*21279*/       OPC_CheckInteger, 15, 
/*21281*/       OPC_MoveParent,
/*21282*/       OPC_CheckType, MVT::i32,
/*21284*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21286*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub15,
/*21289*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 15:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub15:i32)
/*21298*/     0, /*End of Scope*/
/*21299*/   /*Scope*/ 46|128,1/*174*/, /*->21475*/
/*21301*/     OPC_CheckChild0Type, MVT::v2f32,
/*21303*/     OPC_Scope, 11|128,1/*139*/, /*->21445*/ // 2 children in Scope
/*21306*/       OPC_MoveChild, 1,
/*21308*/       OPC_Scope, 38, /*->21348*/ // 4 children in Scope
/*21310*/         OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*21313*/         OPC_RecordChild0, // #1 = $idx
/*21314*/         OPC_RecordChild1, // #2 = $off
/*21315*/         OPC_MoveChild, 1,
/*21317*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*21320*/         OPC_MoveParent,
/*21321*/         OPC_CheckType, MVT::i32,
/*21323*/         OPC_MoveParent,
/*21324*/         OPC_CheckType, MVT::f32,
/*21326*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21328*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #3
/*21335*/         OPC_EmitConvertToTarget, 2,
/*21337*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_SRC), 0,
                      1/*#VTs*/, MVT::f32, 4/*#Ops*/, 3, 0, 1, 4, 
                  // Src: (vector_extract:f32 v2f32:v2f32:$vec, (add:i32 i32:i32:$idx, (imm:i32):$off)) - Complexity = 9
                  // Dst: (SI_INDIRECT_SRC:f32 (IMPLICIT_DEF:i1), ?:v2f32:$vec, ?:i32:$idx, (imm:i32):$off)
/*21348*/       /*Scope*/ 37, /*->21386*/
/*21349*/         OPC_CheckInteger, 0, 
/*21351*/         OPC_MoveParent,
/*21352*/         OPC_CheckType, MVT::f32,
/*21354*/         OPC_Scope, 14, /*->21370*/ // 2 children in Scope
/*21356*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*21358*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*21361*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (vector_extract:f32 v2f32:v2f32:$src, 0:iPTR) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:f32 ?:v2f32:$src, sub0:i32)
/*21370*/         /*Scope*/ 14, /*->21385*/
/*21371*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21373*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*21376*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (vector_extract:f32 v2f32:v2f32:$src, 0:iPTR) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:f32 ?:v2f32:$src, sub0:i32)
/*21385*/         0, /*End of Scope*/
/*21386*/       /*Scope*/ 37, /*->21424*/
/*21387*/         OPC_CheckInteger, 1, 
/*21389*/         OPC_MoveParent,
/*21390*/         OPC_CheckType, MVT::f32,
/*21392*/         OPC_Scope, 14, /*->21408*/ // 2 children in Scope
/*21394*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*21396*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*21399*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (vector_extract:f32 v2f32:v2f32:$src, 1:iPTR) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:f32 ?:v2f32:$src, sub1:i32)
/*21408*/         /*Scope*/ 14, /*->21423*/
/*21409*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21411*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*21414*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (vector_extract:f32 v2f32:v2f32:$src, 1:iPTR) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:f32 ?:v2f32:$src, sub1:i32)
/*21423*/         0, /*End of Scope*/
/*21424*/       /*Scope*/ 19, /*->21444*/
/*21425*/         OPC_CheckInteger, 2, 
/*21427*/         OPC_MoveParent,
/*21428*/         OPC_CheckType, MVT::f32,
/*21430*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21432*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*21435*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v2f32:v2f32:$src, 2:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v2f32:$src, sub2:i32)
/*21444*/       0, /*End of Scope*/
/*21445*/     /*Scope*/ 28, /*->21474*/
/*21446*/       OPC_RecordChild1, // #1 = $idx
/*21447*/       OPC_CheckChild1Type, MVT::i32,
/*21449*/       OPC_CheckType, MVT::f32,
/*21451*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21453*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #2
/*21460*/       OPC_EmitInteger, MVT::i32, 0, 
/*21463*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_SRC), 0,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 0, 1, 3, 
                // Src: (vector_extract:f32 v2f32:v2f32:$vec, i32:i32:$idx) - Complexity = 3
                // Dst: (SI_INDIRECT_SRC:f32 (IMPLICIT_DEF:i1), ?:v2f32:$vec, ?:i32:$idx, 0:i32)
/*21474*/     0, /*End of Scope*/
/*21475*/   /*Scope*/ 102|128,1/*230*/, /*->21707*/
/*21477*/     OPC_CheckChild0Type, MVT::v4f32,
/*21479*/     OPC_Scope, 67|128,1/*195*/, /*->21677*/ // 2 children in Scope
/*21482*/       OPC_MoveChild, 1,
/*21484*/       OPC_Scope, 38, /*->21524*/ // 5 children in Scope
/*21486*/         OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*21489*/         OPC_RecordChild0, // #1 = $idx
/*21490*/         OPC_RecordChild1, // #2 = $off
/*21491*/         OPC_MoveChild, 1,
/*21493*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*21496*/         OPC_MoveParent,
/*21497*/         OPC_CheckType, MVT::i32,
/*21499*/         OPC_MoveParent,
/*21500*/         OPC_CheckType, MVT::f32,
/*21502*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21504*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #3
/*21511*/         OPC_EmitConvertToTarget, 2,
/*21513*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_SRC), 0,
                      1/*#VTs*/, MVT::f32, 4/*#Ops*/, 3, 0, 1, 4, 
                  // Src: (vector_extract:f32 v4f32:v4f32:$vec, (add:i32 i32:i32:$idx, (imm:i32):$off)) - Complexity = 9
                  // Dst: (SI_INDIRECT_SRC:f32 (IMPLICIT_DEF:i1), ?:v4f32:$vec, ?:i32:$idx, (imm:i32):$off)
/*21524*/       /*Scope*/ 37, /*->21562*/
/*21525*/         OPC_CheckInteger, 0, 
/*21527*/         OPC_MoveParent,
/*21528*/         OPC_CheckType, MVT::f32,
/*21530*/         OPC_Scope, 14, /*->21546*/ // 2 children in Scope
/*21532*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*21534*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*21537*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (vector_extract:f32 v4f32:v4f32:$src, 0:iPTR) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:f32 ?:v4f32:$src, sub0:i32)
/*21546*/         /*Scope*/ 14, /*->21561*/
/*21547*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21549*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*21552*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (vector_extract:f32 v4f32:v4f32:$src, 0:iPTR) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:f32 ?:v4f32:$src, sub0:i32)
/*21561*/         0, /*End of Scope*/
/*21562*/       /*Scope*/ 37, /*->21600*/
/*21563*/         OPC_CheckInteger, 1, 
/*21565*/         OPC_MoveParent,
/*21566*/         OPC_CheckType, MVT::f32,
/*21568*/         OPC_Scope, 14, /*->21584*/ // 2 children in Scope
/*21570*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*21572*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*21575*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (vector_extract:f32 v4f32:v4f32:$src, 1:iPTR) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:f32 ?:v4f32:$src, sub1:i32)
/*21584*/         /*Scope*/ 14, /*->21599*/
/*21585*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21587*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*21590*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (vector_extract:f32 v4f32:v4f32:$src, 1:iPTR) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:f32 ?:v4f32:$src, sub1:i32)
/*21599*/         0, /*End of Scope*/
/*21600*/       /*Scope*/ 37, /*->21638*/
/*21601*/         OPC_CheckInteger, 2, 
/*21603*/         OPC_MoveParent,
/*21604*/         OPC_CheckType, MVT::f32,
/*21606*/         OPC_Scope, 14, /*->21622*/ // 2 children in Scope
/*21608*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*21610*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*21613*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (vector_extract:f32 v4f32:v4f32:$src, 2:iPTR) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:f32 ?:v4f32:$src, sub2:i32)
/*21622*/         /*Scope*/ 14, /*->21637*/
/*21623*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21625*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*21628*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (vector_extract:f32 v4f32:v4f32:$src, 2:iPTR) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:f32 ?:v4f32:$src, sub2:i32)
/*21637*/         0, /*End of Scope*/
/*21638*/       /*Scope*/ 37, /*->21676*/
/*21639*/         OPC_CheckInteger, 3, 
/*21641*/         OPC_MoveParent,
/*21642*/         OPC_CheckType, MVT::f32,
/*21644*/         OPC_Scope, 14, /*->21660*/ // 2 children in Scope
/*21646*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*21648*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*21651*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (vector_extract:f32 v4f32:v4f32:$src, 3:iPTR) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:f32 ?:v4f32:$src, sub3:i32)
/*21660*/         /*Scope*/ 14, /*->21675*/
/*21661*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21663*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*21666*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (vector_extract:f32 v4f32:v4f32:$src, 3:iPTR) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:f32 ?:v4f32:$src, sub3:i32)
/*21675*/         0, /*End of Scope*/
/*21676*/       0, /*End of Scope*/
/*21677*/     /*Scope*/ 28, /*->21706*/
/*21678*/       OPC_RecordChild1, // #1 = $idx
/*21679*/       OPC_CheckChild1Type, MVT::i32,
/*21681*/       OPC_CheckType, MVT::f32,
/*21683*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21685*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #2
/*21692*/       OPC_EmitInteger, MVT::i32, 0, 
/*21695*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_SRC), 0,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 0, 1, 3, 
                // Src: (vector_extract:f32 v4f32:v4f32:$vec, i32:i32:$idx) - Complexity = 3
                // Dst: (SI_INDIRECT_SRC:f32 (IMPLICIT_DEF:i1), ?:v4f32:$vec, ?:i32:$idx, 0:i32)
/*21706*/     0, /*End of Scope*/
/*21707*/   /*Scope*/ 110|128,1/*238*/, /*->21947*/
/*21709*/     OPC_CheckChild0Type, MVT::v8f32,
/*21711*/     OPC_Scope, 75|128,1/*203*/, /*->21917*/ // 2 children in Scope
/*21714*/       OPC_MoveChild, 1,
/*21716*/       OPC_Scope, 38, /*->21756*/ // 9 children in Scope
/*21718*/         OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*21721*/         OPC_RecordChild0, // #1 = $idx
/*21722*/         OPC_RecordChild1, // #2 = $off
/*21723*/         OPC_MoveChild, 1,
/*21725*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*21728*/         OPC_MoveParent,
/*21729*/         OPC_CheckType, MVT::i32,
/*21731*/         OPC_MoveParent,
/*21732*/         OPC_CheckType, MVT::f32,
/*21734*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21736*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #3
/*21743*/         OPC_EmitConvertToTarget, 2,
/*21745*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_SRC), 0,
                      1/*#VTs*/, MVT::f32, 4/*#Ops*/, 3, 0, 1, 4, 
                  // Src: (vector_extract:f32 v8f32:v8f32:$vec, (add:i32 i32:i32:$idx, (imm:i32):$off)) - Complexity = 9
                  // Dst: (SI_INDIRECT_SRC:f32 (IMPLICIT_DEF:i1), ?:v8f32:$vec, ?:i32:$idx, (imm:i32):$off)
/*21756*/       /*Scope*/ 19, /*->21776*/
/*21757*/         OPC_CheckInteger, 0, 
/*21759*/         OPC_MoveParent,
/*21760*/         OPC_CheckType, MVT::f32,
/*21762*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21764*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*21767*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v8f32:v8f32:$src, 0:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v8f32:$src, sub0:i32)
/*21776*/       /*Scope*/ 19, /*->21796*/
/*21777*/         OPC_CheckInteger, 1, 
/*21779*/         OPC_MoveParent,
/*21780*/         OPC_CheckType, MVT::f32,
/*21782*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21784*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*21787*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v8f32:v8f32:$src, 1:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v8f32:$src, sub1:i32)
/*21796*/       /*Scope*/ 19, /*->21816*/
/*21797*/         OPC_CheckInteger, 2, 
/*21799*/         OPC_MoveParent,
/*21800*/         OPC_CheckType, MVT::f32,
/*21802*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21804*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*21807*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v8f32:v8f32:$src, 2:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v8f32:$src, sub2:i32)
/*21816*/       /*Scope*/ 19, /*->21836*/
/*21817*/         OPC_CheckInteger, 3, 
/*21819*/         OPC_MoveParent,
/*21820*/         OPC_CheckType, MVT::f32,
/*21822*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21824*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*21827*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v8f32:v8f32:$src, 3:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v8f32:$src, sub3:i32)
/*21836*/       /*Scope*/ 19, /*->21856*/
/*21837*/         OPC_CheckInteger, 4, 
/*21839*/         OPC_MoveParent,
/*21840*/         OPC_CheckType, MVT::f32,
/*21842*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21844*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub4,
/*21847*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v8f32:v8f32:$src, 4:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v8f32:$src, sub4:i32)
/*21856*/       /*Scope*/ 19, /*->21876*/
/*21857*/         OPC_CheckInteger, 5, 
/*21859*/         OPC_MoveParent,
/*21860*/         OPC_CheckType, MVT::f32,
/*21862*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21864*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub5,
/*21867*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v8f32:v8f32:$src, 5:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v8f32:$src, sub5:i32)
/*21876*/       /*Scope*/ 19, /*->21896*/
/*21877*/         OPC_CheckInteger, 6, 
/*21879*/         OPC_MoveParent,
/*21880*/         OPC_CheckType, MVT::f32,
/*21882*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21884*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub6,
/*21887*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v8f32:v8f32:$src, 6:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v8f32:$src, sub6:i32)
/*21896*/       /*Scope*/ 19, /*->21916*/
/*21897*/         OPC_CheckInteger, 7, 
/*21899*/         OPC_MoveParent,
/*21900*/         OPC_CheckType, MVT::f32,
/*21902*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21904*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub7,
/*21907*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v8f32:v8f32:$src, 7:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v8f32:$src, sub7:i32)
/*21916*/       0, /*End of Scope*/
/*21917*/     /*Scope*/ 28, /*->21946*/
/*21918*/       OPC_RecordChild1, // #1 = $idx
/*21919*/       OPC_CheckChild1Type, MVT::i32,
/*21921*/       OPC_CheckType, MVT::f32,
/*21923*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21925*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #2
/*21932*/       OPC_EmitInteger, MVT::i32, 0, 
/*21935*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_SRC), 0,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 0, 1, 3, 
                // Src: (vector_extract:f32 v8f32:v8f32:$vec, i32:i32:$idx) - Complexity = 3
                // Dst: (SI_INDIRECT_SRC:f32 (IMPLICIT_DEF:i1), ?:v8f32:$vec, ?:i32:$idx, 0:i32)
/*21946*/     0, /*End of Scope*/
/*21947*/   /*Scope*/ 14|128,3/*398*/, /*->22347*/
/*21949*/     OPC_CheckChild0Type, MVT::v16f32,
/*21951*/     OPC_Scope, 107|128,2/*363*/, /*->22317*/ // 2 children in Scope
/*21954*/       OPC_MoveChild, 1,
/*21956*/       OPC_Scope, 38, /*->21996*/ // 17 children in Scope
/*21958*/         OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*21961*/         OPC_RecordChild0, // #1 = $idx
/*21962*/         OPC_RecordChild1, // #2 = $off
/*21963*/         OPC_MoveChild, 1,
/*21965*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*21968*/         OPC_MoveParent,
/*21969*/         OPC_CheckType, MVT::i32,
/*21971*/         OPC_MoveParent,
/*21972*/         OPC_CheckType, MVT::f32,
/*21974*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21976*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #3
/*21983*/         OPC_EmitConvertToTarget, 2,
/*21985*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_SRC), 0,
                      1/*#VTs*/, MVT::f32, 4/*#Ops*/, 3, 0, 1, 4, 
                  // Src: (vector_extract:f32 v16f32:v16f32:$vec, (add:i32 i32:i32:$idx, (imm:i32):$off)) - Complexity = 9
                  // Dst: (SI_INDIRECT_SRC:f32 (IMPLICIT_DEF:i1), ?:v16f32:$vec, ?:i32:$idx, (imm:i32):$off)
/*21996*/       /*Scope*/ 19, /*->22016*/
/*21997*/         OPC_CheckInteger, 0, 
/*21999*/         OPC_MoveParent,
/*22000*/         OPC_CheckType, MVT::f32,
/*22002*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22004*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*22007*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v16f32:v16f32:$src, 0:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub0:i32)
/*22016*/       /*Scope*/ 19, /*->22036*/
/*22017*/         OPC_CheckInteger, 1, 
/*22019*/         OPC_MoveParent,
/*22020*/         OPC_CheckType, MVT::f32,
/*22022*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22024*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*22027*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v16f32:v16f32:$src, 1:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub1:i32)
/*22036*/       /*Scope*/ 19, /*->22056*/
/*22037*/         OPC_CheckInteger, 2, 
/*22039*/         OPC_MoveParent,
/*22040*/         OPC_CheckType, MVT::f32,
/*22042*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22044*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*22047*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v16f32:v16f32:$src, 2:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub2:i32)
/*22056*/       /*Scope*/ 19, /*->22076*/
/*22057*/         OPC_CheckInteger, 3, 
/*22059*/         OPC_MoveParent,
/*22060*/         OPC_CheckType, MVT::f32,
/*22062*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22064*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*22067*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v16f32:v16f32:$src, 3:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub3:i32)
/*22076*/       /*Scope*/ 19, /*->22096*/
/*22077*/         OPC_CheckInteger, 4, 
/*22079*/         OPC_MoveParent,
/*22080*/         OPC_CheckType, MVT::f32,
/*22082*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22084*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub4,
/*22087*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v16f32:v16f32:$src, 4:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub4:i32)
/*22096*/       /*Scope*/ 19, /*->22116*/
/*22097*/         OPC_CheckInteger, 5, 
/*22099*/         OPC_MoveParent,
/*22100*/         OPC_CheckType, MVT::f32,
/*22102*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22104*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub5,
/*22107*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v16f32:v16f32:$src, 5:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub5:i32)
/*22116*/       /*Scope*/ 19, /*->22136*/
/*22117*/         OPC_CheckInteger, 6, 
/*22119*/         OPC_MoveParent,
/*22120*/         OPC_CheckType, MVT::f32,
/*22122*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22124*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub6,
/*22127*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v16f32:v16f32:$src, 6:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub6:i32)
/*22136*/       /*Scope*/ 19, /*->22156*/
/*22137*/         OPC_CheckInteger, 7, 
/*22139*/         OPC_MoveParent,
/*22140*/         OPC_CheckType, MVT::f32,
/*22142*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22144*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub7,
/*22147*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v16f32:v16f32:$src, 7:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub7:i32)
/*22156*/       /*Scope*/ 19, /*->22176*/
/*22157*/         OPC_CheckInteger, 8, 
/*22159*/         OPC_MoveParent,
/*22160*/         OPC_CheckType, MVT::f32,
/*22162*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22164*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub8,
/*22167*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v16f32:v16f32:$src, 8:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub8:i32)
/*22176*/       /*Scope*/ 19, /*->22196*/
/*22177*/         OPC_CheckInteger, 9, 
/*22179*/         OPC_MoveParent,
/*22180*/         OPC_CheckType, MVT::f32,
/*22182*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22184*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub9,
/*22187*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v16f32:v16f32:$src, 9:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub9:i32)
/*22196*/       /*Scope*/ 19, /*->22216*/
/*22197*/         OPC_CheckInteger, 10, 
/*22199*/         OPC_MoveParent,
/*22200*/         OPC_CheckType, MVT::f32,
/*22202*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22204*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub10,
/*22207*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v16f32:v16f32:$src, 10:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub10:i32)
/*22216*/       /*Scope*/ 19, /*->22236*/
/*22217*/         OPC_CheckInteger, 11, 
/*22219*/         OPC_MoveParent,
/*22220*/         OPC_CheckType, MVT::f32,
/*22222*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22224*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub11,
/*22227*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v16f32:v16f32:$src, 11:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub11:i32)
/*22236*/       /*Scope*/ 19, /*->22256*/
/*22237*/         OPC_CheckInteger, 12, 
/*22239*/         OPC_MoveParent,
/*22240*/         OPC_CheckType, MVT::f32,
/*22242*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22244*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub12,
/*22247*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v16f32:v16f32:$src, 12:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub12:i32)
/*22256*/       /*Scope*/ 19, /*->22276*/
/*22257*/         OPC_CheckInteger, 13, 
/*22259*/         OPC_MoveParent,
/*22260*/         OPC_CheckType, MVT::f32,
/*22262*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22264*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub13,
/*22267*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v16f32:v16f32:$src, 13:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub13:i32)
/*22276*/       /*Scope*/ 19, /*->22296*/
/*22277*/         OPC_CheckInteger, 14, 
/*22279*/         OPC_MoveParent,
/*22280*/         OPC_CheckType, MVT::f32,
/*22282*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22284*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub14,
/*22287*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v16f32:v16f32:$src, 14:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub14:i32)
/*22296*/       /*Scope*/ 19, /*->22316*/
/*22297*/         OPC_CheckInteger, 15, 
/*22299*/         OPC_MoveParent,
/*22300*/         OPC_CheckType, MVT::f32,
/*22302*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22304*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub15,
/*22307*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v16f32:v16f32:$src, 15:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub15:i32)
/*22316*/       0, /*End of Scope*/
/*22317*/     /*Scope*/ 28, /*->22346*/
/*22318*/       OPC_RecordChild1, // #1 = $idx
/*22319*/       OPC_CheckChild1Type, MVT::i32,
/*22321*/       OPC_CheckType, MVT::f32,
/*22323*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22325*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #2
/*22332*/       OPC_EmitInteger, MVT::i32, 0, 
/*22335*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_SRC), 0,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 0, 1, 3, 
                // Src: (vector_extract:f32 v16f32:v16f32:$vec, i32:i32:$idx) - Complexity = 3
                // Dst: (SI_INDIRECT_SRC:f32 (IMPLICIT_DEF:i1), ?:v16f32:$vec, ?:i32:$idx, 0:i32)
/*22346*/     0, /*End of Scope*/
/*22347*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 110,  TARGET_VAL(ISD::INTRINSIC_W_CHAIN),// ->22461
/*22351*/   OPC_RecordNode,   // #0 = 'intrinsic_w_chain' chained node
/*22352*/   OPC_MoveChild, 1,
/*22354*/   OPC_Scope, 24, /*->22380*/ // 5 children in Scope
/*22356*/     OPC_CheckInteger, 22|128,25/*3222*/, 
/*22359*/     OPC_MoveParent,
/*22360*/     OPC_RecordChild2, // #1 = $vcc
/*22361*/     OPC_RecordChild3, // #2 = $target
/*22362*/     OPC_MoveChild, 3,
/*22364*/     OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*22367*/     OPC_MoveParent,
/*22368*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22370*/     OPC_EmitMergeInputChains1_0,
/*22371*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_IF), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i64 3222:iPTR, i1:i1:$vcc, (bb:Other):$target) - Complexity = 8
              // Dst: (SI_IF:i64 i1:i1:$vcc, (bb:Other):$target)
/*22380*/   /*Scope*/ 24, /*->22405*/
/*22381*/     OPC_CheckInteger, 16|128,25/*3216*/, 
/*22384*/     OPC_MoveParent,
/*22385*/     OPC_RecordChild2, // #1 = $src
/*22386*/     OPC_RecordChild3, // #2 = $target
/*22387*/     OPC_MoveChild, 3,
/*22389*/     OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*22392*/     OPC_MoveParent,
/*22393*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22395*/     OPC_EmitMergeInputChains1_0,
/*22396*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_ELSE), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i64 3216:iPTR, i64:i64:$src, (bb:Other):$target) - Complexity = 8
              // Dst: (SI_ELSE:i64 i64:i64:$src, (bb:Other):$target)
/*22405*/   /*Scope*/ 16, /*->22422*/
/*22406*/     OPC_CheckInteger, 15|128,25/*3215*/, 
/*22409*/     OPC_MoveParent,
/*22410*/     OPC_RecordChild2, // #1 = $src
/*22411*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22413*/     OPC_EmitMergeInputChains1_0,
/*22414*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_BREAK), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i64 3215:iPTR, i64:i64:$src) - Complexity = 8
              // Dst: (SI_BREAK:i64 i64:i64:$src)
/*22422*/   /*Scope*/ 18, /*->22441*/
/*22423*/     OPC_CheckInteger, 23|128,25/*3223*/, 
/*22426*/     OPC_MoveParent,
/*22427*/     OPC_RecordChild2, // #1 = $vcc
/*22428*/     OPC_RecordChild3, // #2 = $src
/*22429*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22431*/     OPC_EmitMergeInputChains1_0,
/*22432*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_IF_BREAK), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i64 3223:iPTR, i1:i1:$vcc, i64:i64:$src) - Complexity = 8
              // Dst: (SI_IF_BREAK:i64 i1:i1:$vcc, i64:i64:$src)
/*22441*/   /*Scope*/ 18, /*->22460*/
/*22442*/     OPC_CheckInteger, 17|128,25/*3217*/, 
/*22445*/     OPC_MoveParent,
/*22446*/     OPC_RecordChild2, // #1 = $src0
/*22447*/     OPC_RecordChild3, // #2 = $src1
/*22448*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22450*/     OPC_EmitMergeInputChains1_0,
/*22451*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_ELSE_BREAK), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i64 3217:iPTR, i64:i64:$src0, i64:i64:$src1) - Complexity = 8
              // Dst: (SI_ELSE_BREAK:i64 i64:i64:$src0, i64:i64:$src1)
/*22460*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 125|128,6/*893*/,  TARGET_VAL(ISD::STORE),// ->23358
/*22465*/   OPC_RecordMemRef,
/*22466*/   OPC_RecordNode,   // #0 = 'st' chained node
/*22467*/   OPC_RecordChild1, // #1 = $value
/*22468*/   OPC_Scope, 41|128,4/*553*/, /*->23024*/ // 4 children in Scope
/*22471*/     OPC_CheckChild1Type, MVT::i32,
/*22473*/     OPC_Scope, 106, /*->22581*/ // 2 children in Scope
/*22475*/       OPC_MoveChild, 2,
/*22477*/       OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*22480*/       OPC_RecordChild0, // #2 = $ptr
/*22481*/       OPC_RecordChild1, // #3 = $offset
/*22482*/       OPC_CheckType, MVT::i64,
/*22484*/       OPC_MoveParent,
/*22485*/       OPC_CheckPredicate, 45, // Predicate_unindexedstore
/*22487*/       OPC_Scope, 62, /*->22551*/ // 2 children in Scope
/*22489*/         OPC_CheckPredicate, 46, // Predicate_truncstore
/*22491*/         OPC_Scope, 28, /*->22521*/ // 2 children in Scope
/*22493*/           OPC_CheckPredicate, 47, // Predicate_truncstorei8
/*22495*/           OPC_CheckPredicate, 48, // Predicate_truncstorei8_global
/*22497*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22499*/           OPC_EmitMergeInputChains1_0,
/*22500*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 2,  // Results = #4
/*22508*/           OPC_EmitInteger, MVT::i16, 0, 
/*22511*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_STORE_BYTE), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 4, 3, 5, 
                    // Src: (st i32:i32:$value, (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>><<P:Predicate_truncstorei8_global>> - Complexity = 7
                    // Dst: (BUFFER_STORE_BYTE ?:i32:$value, (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*22521*/         /*Scope*/ 28, /*->22550*/
/*22522*/           OPC_CheckPredicate, 49, // Predicate_truncstorei16
/*22524*/           OPC_CheckPredicate, 50, // Predicate_truncstorei16_global
/*22526*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22528*/           OPC_EmitMergeInputChains1_0,
/*22529*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 2,  // Results = #4
/*22537*/           OPC_EmitInteger, MVT::i16, 0, 
/*22540*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_STORE_SHORT), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 4, 3, 5, 
                    // Src: (st i32:i32:$value, (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_truncstorei16_global>> - Complexity = 7
                    // Dst: (BUFFER_STORE_SHORT ?:i32:$value, (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*22550*/         0, /*End of Scope*/
/*22551*/       /*Scope*/ 28, /*->22580*/
/*22552*/         OPC_CheckPredicate, 51, // Predicate_store
/*22554*/         OPC_CheckPredicate, 52, // Predicate_global_store
/*22556*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22558*/         OPC_EmitMergeInputChains1_0,
/*22559*/         OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i128, 1/*#Ops*/, 2,  // Results = #4
/*22567*/         OPC_EmitInteger, MVT::i16, 0, 
/*22570*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_STORE_DWORD), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 1, 4, 3, 5, 
                  // Src: (st i32:i32:$value, (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_global_store>> - Complexity = 7
                  // Dst: (BUFFER_STORE_DWORD ?:i32:$value, (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*22580*/       0, /*End of Scope*/
/*22581*/     /*Scope*/ 56|128,3/*440*/, /*->23023*/
/*22583*/       OPC_RecordChild2, // #2 = $src0
/*22584*/       OPC_Scope, 71|128,2/*327*/, /*->22914*/ // 2 children in Scope
/*22587*/         OPC_CheckChild2Type, MVT::i32,
/*22589*/         OPC_CheckPredicate, 45, // Predicate_unindexedstore
/*22591*/         OPC_Scope, 61, /*->22654*/ // 5 children in Scope
/*22593*/           OPC_CheckPredicate, 51, // Predicate_store
/*22595*/           OPC_CheckPredicate, 53, // Predicate_local_store
/*22597*/           OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*22599*/           OPC_EmitMergeInputChains1_0,
/*22600*/           OPC_EmitInteger, MVT::i32, 0, 
/*22603*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*22615*/           OPC_EmitInteger, MVT::i32, 0, 
/*22618*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*22630*/           OPC_EmitInteger, MVT::i32, 1, 
/*22633*/           OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*22636*/           OPC_EmitInteger, MVT::i32, 0, 
/*22639*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::LDS_WRITE), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 9/*#Ops*/, 2, 3, 4, 1, 5, 6, 7, 8, 9, 
                    // Src: (st R600_Reg32:i32:$src1, R600_Reg32:i32:$src0)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_local_store>> - Complexity = 4
                    // Dst: (LDS_WRITE R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*22654*/         /*Scope*/ 0|128,1/*128*/, /*->22784*/
/*22656*/           OPC_CheckPredicate, 46, // Predicate_truncstore
/*22658*/           OPC_Scope, 61, /*->22721*/ // 2 children in Scope
/*22660*/             OPC_CheckPredicate, 47, // Predicate_truncstorei8
/*22662*/             OPC_CheckPredicate, 54, // Predicate_truncstorei8_local
/*22664*/             OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*22666*/             OPC_EmitMergeInputChains1_0,
/*22667*/             OPC_EmitInteger, MVT::i32, 0, 
/*22670*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*22682*/             OPC_EmitInteger, MVT::i32, 0, 
/*22685*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*22697*/             OPC_EmitInteger, MVT::i32, 1, 
/*22700*/             OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*22703*/             OPC_EmitInteger, MVT::i32, 0, 
/*22706*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::LDS_BYTE_WRITE), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 9/*#Ops*/, 2, 3, 4, 1, 5, 6, 7, 8, 9, 
                      // Src: (st i32:i32:$src1, i32:i32:$src0)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>><<P:Predicate_truncstorei8_local>> - Complexity = 4
                      // Dst: (LDS_BYTE_WRITE i32:i32:$src0, i32:i32:$src1)
/*22721*/           /*Scope*/ 61, /*->22783*/
/*22722*/             OPC_CheckPredicate, 49, // Predicate_truncstorei16
/*22724*/             OPC_CheckPredicate, 55, // Predicate_truncstorei16_local
/*22726*/             OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*22728*/             OPC_EmitMergeInputChains1_0,
/*22729*/             OPC_EmitInteger, MVT::i32, 0, 
/*22732*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*22744*/             OPC_EmitInteger, MVT::i32, 0, 
/*22747*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*22759*/             OPC_EmitInteger, MVT::i32, 1, 
/*22762*/             OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*22765*/             OPC_EmitInteger, MVT::i32, 0, 
/*22768*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::LDS_SHORT_WRITE), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 9/*#Ops*/, 2, 3, 4, 1, 5, 6, 7, 8, 9, 
                      // Src: (st i32:i32:$src1, i32:i32:$src0)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_truncstorei16_local>> - Complexity = 4
                      // Dst: (LDS_SHORT_WRITE i32:i32:$src0, i32:i32:$src1)
/*22783*/           0, /*End of Scope*/
/*22784*/         /*Scope*/ 15, /*->22800*/
/*22785*/           OPC_CheckPredicate, 51, // Predicate_store
/*22787*/           OPC_CheckPredicate, 52, // Predicate_global_store
/*22789*/           OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*22791*/           OPC_EmitMergeInputChains1_0,
/*22792*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RAT_STORE_DWORD32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (st i32:i32:$rw_gpr, i32:i32:$index_gpr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_global_store>> - Complexity = 4
                    // Dst: (RAT_STORE_DWORD32 i32:i32:$rw_gpr, i32:i32:$index_gpr)
/*22800*/         /*Scope*/ 62, /*->22863*/
/*22801*/           OPC_CheckPredicate, 46, // Predicate_truncstore
/*22803*/           OPC_Scope, 28, /*->22833*/ // 2 children in Scope
/*22805*/             OPC_CheckPredicate, 47, // Predicate_truncstorei8
/*22807*/             OPC_CheckPredicate, 54, // Predicate_truncstorei8_local
/*22809*/             OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22811*/             OPC_EmitMergeInputChains1_0,
/*22812*/             OPC_EmitInteger, MVT::i1, 0, 
/*22815*/             OPC_EmitInteger, MVT::i8, 0, 
/*22818*/             OPC_EmitInteger, MVT::i8, 0, 
/*22821*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::DS_WRITE_B8), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 6/*#Ops*/, 3, 2, 1, 1, 4, 5, 
                      // Src: (st i32:i32:$src1, i32:i32:$src0)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>><<P:Predicate_truncstorei8_local>> - Complexity = 4
                      // Dst: (DS_WRITE_B8 0:i1, ?:i32:$src0, ?:i32:$src1, ?:i32:$src1, 0:i8, 0:i8)
/*22833*/           /*Scope*/ 28, /*->22862*/
/*22834*/             OPC_CheckPredicate, 49, // Predicate_truncstorei16
/*22836*/             OPC_CheckPredicate, 55, // Predicate_truncstorei16_local
/*22838*/             OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22840*/             OPC_EmitMergeInputChains1_0,
/*22841*/             OPC_EmitInteger, MVT::i1, 0, 
/*22844*/             OPC_EmitInteger, MVT::i8, 0, 
/*22847*/             OPC_EmitInteger, MVT::i8, 0, 
/*22850*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::DS_WRITE_B16), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 6/*#Ops*/, 3, 2, 1, 1, 4, 5, 
                      // Src: (st i32:i32:$src1, i32:i32:$src0)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_truncstorei16_local>> - Complexity = 4
                      // Dst: (DS_WRITE_B16 0:i1, ?:i32:$src0, ?:i32:$src1, ?:i32:$src1, 0:i8, 0:i8)
/*22862*/           0, /*End of Scope*/
/*22863*/         /*Scope*/ 49, /*->22913*/
/*22864*/           OPC_CheckPredicate, 51, // Predicate_store
/*22866*/           OPC_Scope, 26, /*->22894*/ // 2 children in Scope
/*22868*/             OPC_CheckPredicate, 53, // Predicate_local_store
/*22870*/             OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22872*/             OPC_EmitMergeInputChains1_0,
/*22873*/             OPC_EmitInteger, MVT::i1, 0, 
/*22876*/             OPC_EmitInteger, MVT::i8, 0, 
/*22879*/             OPC_EmitInteger, MVT::i8, 0, 
/*22882*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::DS_WRITE_B32), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 6/*#Ops*/, 3, 2, 1, 1, 4, 5, 
                      // Src: (st i32:i32:$src1, i32:i32:$src0)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_local_store>> - Complexity = 4
                      // Dst: (DS_WRITE_B32 0:i1, ?:i32:$src0, ?:i32:$src1, ?:i32:$src1, 0:i8, 0:i8)
/*22894*/           /*Scope*/ 17, /*->22912*/
/*22895*/             OPC_CheckPredicate, 52, // Predicate_global_store
/*22897*/             OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*22899*/             OPC_EmitMergeInputChains1_0,
/*22900*/             OPC_EmitInteger, MVT::i32, 0, 
/*22903*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RAT_WRITE_CACHELESS_32_eg), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (st i32:i32:$rw_gpr, i32:i32:$index_gpr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_global_store>> - Complexity = 4
                      // Dst: (RAT_WRITE_CACHELESS_32_eg i32:i32:$rw_gpr, i32:i32:$index_gpr)
/*22912*/           0, /*End of Scope*/
/*22913*/         0, /*End of Scope*/
/*22914*/       /*Scope*/ 107, /*->23022*/
/*22915*/         OPC_CheckChild2Type, MVT::i64,
/*22917*/         OPC_CheckPredicate, 45, // Predicate_unindexedstore
/*22919*/         OPC_Scope, 68, /*->22989*/ // 2 children in Scope
/*22921*/           OPC_CheckPredicate, 46, // Predicate_truncstore
/*22923*/           OPC_Scope, 31, /*->22956*/ // 2 children in Scope
/*22925*/             OPC_CheckPredicate, 47, // Predicate_truncstorei8
/*22927*/             OPC_CheckPredicate, 48, // Predicate_truncstorei8_global
/*22929*/             OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22931*/             OPC_EmitMergeInputChains1_0,
/*22932*/             OPC_EmitInteger, MVT::i64, 0, 
/*22935*/             OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                          1/*#VTs*/, MVT::i128, 1/*#Ops*/, 3,  // Results = #4
/*22943*/             OPC_EmitInteger, MVT::i16, 0, 
/*22946*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_STORE_BYTE), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 4/*#Ops*/, 1, 4, 2, 5, 
                      // Src: (st i32:i32:$value, i64:i64:$ptr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>><<P:Predicate_truncstorei8_global>> - Complexity = 4
                      // Dst: (BUFFER_STORE_BYTE ?:i32:$value, (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, 0:i16)
/*22956*/           /*Scope*/ 31, /*->22988*/
/*22957*/             OPC_CheckPredicate, 49, // Predicate_truncstorei16
/*22959*/             OPC_CheckPredicate, 50, // Predicate_truncstorei16_global
/*22961*/             OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22963*/             OPC_EmitMergeInputChains1_0,
/*22964*/             OPC_EmitInteger, MVT::i64, 0, 
/*22967*/             OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                          1/*#VTs*/, MVT::i128, 1/*#Ops*/, 3,  // Results = #4
/*22975*/             OPC_EmitInteger, MVT::i16, 0, 
/*22978*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_STORE_SHORT), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 4/*#Ops*/, 1, 4, 2, 5, 
                      // Src: (st i32:i32:$value, i64:i64:$ptr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_truncstorei16_global>> - Complexity = 4
                      // Dst: (BUFFER_STORE_SHORT ?:i32:$value, (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, 0:i16)
/*22988*/           0, /*End of Scope*/
/*22989*/         /*Scope*/ 31, /*->23021*/
/*22990*/           OPC_CheckPredicate, 51, // Predicate_store
/*22992*/           OPC_CheckPredicate, 52, // Predicate_global_store
/*22994*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22996*/           OPC_EmitMergeInputChains1_0,
/*22997*/           OPC_EmitInteger, MVT::i64, 0, 
/*23000*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 3,  // Results = #4
/*23008*/           OPC_EmitInteger, MVT::i16, 0, 
/*23011*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_STORE_DWORD), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 4, 2, 5, 
                    // Src: (st i32:i32:$value, i64:i64:$ptr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_global_store>> - Complexity = 4
                    // Dst: (BUFFER_STORE_DWORD ?:i32:$value, (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, 0:i16)
/*23021*/         0, /*End of Scope*/
/*23022*/       0, /*End of Scope*/
/*23023*/     0, /*End of Scope*/
/*23024*/   /*Scope*/ 82, /*->23107*/
/*23025*/     OPC_CheckChild1Type, MVT::i64,
/*23027*/     OPC_Scope, 40, /*->23069*/ // 2 children in Scope
/*23029*/       OPC_MoveChild, 2,
/*23031*/       OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*23034*/       OPC_RecordChild0, // #2 = $ptr
/*23035*/       OPC_RecordChild1, // #3 = $offset
/*23036*/       OPC_CheckType, MVT::i64,
/*23038*/       OPC_MoveParent,
/*23039*/       OPC_CheckPredicate, 45, // Predicate_unindexedstore
/*23041*/       OPC_CheckPredicate, 51, // Predicate_store
/*23043*/       OPC_CheckPredicate, 52, // Predicate_global_store
/*23045*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*23047*/       OPC_EmitMergeInputChains1_0,
/*23048*/       OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i128, 1/*#Ops*/, 2,  // Results = #4
/*23056*/       OPC_EmitInteger, MVT::i16, 0, 
/*23059*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_STORE_DWORDX2), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 4/*#Ops*/, 1, 4, 3, 5, 
                // Src: (st i64:i64:$value, (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_global_store>> - Complexity = 7
                // Dst: (BUFFER_STORE_DWORDX2 ?:i64:$value, (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*23069*/     /*Scope*/ 36, /*->23106*/
/*23070*/       OPC_RecordChild2, // #2 = $ptr
/*23071*/       OPC_CheckChild2Type, MVT::i64,
/*23073*/       OPC_CheckPredicate, 45, // Predicate_unindexedstore
/*23075*/       OPC_CheckPredicate, 51, // Predicate_store
/*23077*/       OPC_CheckPredicate, 52, // Predicate_global_store
/*23079*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*23081*/       OPC_EmitMergeInputChains1_0,
/*23082*/       OPC_EmitInteger, MVT::i64, 0, 
/*23085*/       OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i128, 1/*#Ops*/, 3,  // Results = #4
/*23093*/       OPC_EmitInteger, MVT::i16, 0, 
/*23096*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_STORE_DWORDX2), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 4/*#Ops*/, 1, 4, 2, 5, 
                // Src: (st i64:i64:$value, i64:i64:$ptr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_global_store>> - Complexity = 4
                // Dst: (BUFFER_STORE_DWORDX2 ?:i64:$value, (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, 0:i16)
/*23106*/     0, /*End of Scope*/
/*23107*/   /*Scope*/ 124, /*->23232*/
/*23108*/     OPC_CheckChild1Type, MVT::v2i32,
/*23110*/     OPC_Scope, 40, /*->23152*/ // 2 children in Scope
/*23112*/       OPC_MoveChild, 2,
/*23114*/       OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*23117*/       OPC_RecordChild0, // #2 = $ptr
/*23118*/       OPC_RecordChild1, // #3 = $offset
/*23119*/       OPC_CheckType, MVT::i64,
/*23121*/       OPC_MoveParent,
/*23122*/       OPC_CheckPredicate, 45, // Predicate_unindexedstore
/*23124*/       OPC_CheckPredicate, 51, // Predicate_store
/*23126*/       OPC_CheckPredicate, 52, // Predicate_global_store
/*23128*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*23130*/       OPC_EmitMergeInputChains1_0,
/*23131*/       OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i128, 1/*#Ops*/, 2,  // Results = #4
/*23139*/       OPC_EmitInteger, MVT::i16, 0, 
/*23142*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_STORE_DWORDX2), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 4/*#Ops*/, 1, 4, 3, 5, 
                // Src: (st v2i32:v2i32:$value, (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_global_store>> - Complexity = 7
                // Dst: (BUFFER_STORE_DWORDX2 ?:v2i32:$value, (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*23152*/     /*Scope*/ 78, /*->23231*/
/*23153*/       OPC_RecordChild2, // #2 = $index_gpr
/*23154*/       OPC_Scope, 38, /*->23194*/ // 2 children in Scope
/*23156*/         OPC_CheckChild2Type, MVT::i32,
/*23158*/         OPC_CheckPredicate, 45, // Predicate_unindexedstore
/*23160*/         OPC_CheckPredicate, 51, // Predicate_store
/*23162*/         OPC_CheckPredicate, 52, // Predicate_global_store
/*23164*/         OPC_Scope, 11, /*->23177*/ // 2 children in Scope
/*23166*/           OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*23168*/           OPC_EmitMergeInputChains1_0,
/*23169*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RAT_STORE_DWORD64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (st v2i32:v2i32:$rw_gpr, i32:i32:$index_gpr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_global_store>> - Complexity = 4
                    // Dst: (RAT_STORE_DWORD64 v2i32:v2i32:$rw_gpr, i32:i32:$index_gpr)
/*23177*/         /*Scope*/ 15, /*->23193*/
/*23178*/           OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*23180*/           OPC_EmitMergeInputChains1_0,
/*23181*/           OPC_EmitInteger, MVT::i32, 0, 
/*23184*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RAT_WRITE_CACHELESS_64_eg), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (st v2i32:v2i32:$rw_gpr, i32:i32:$index_gpr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_global_store>> - Complexity = 4
                    // Dst: (RAT_WRITE_CACHELESS_64_eg v2i32:v2i32:$rw_gpr, i32:i32:$index_gpr)
/*23193*/         0, /*End of Scope*/
/*23194*/       /*Scope*/ 35, /*->23230*/
/*23195*/         OPC_CheckChild2Type, MVT::i64,
/*23197*/         OPC_CheckPredicate, 45, // Predicate_unindexedstore
/*23199*/         OPC_CheckPredicate, 51, // Predicate_store
/*23201*/         OPC_CheckPredicate, 52, // Predicate_global_store
/*23203*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*23205*/         OPC_EmitMergeInputChains1_0,
/*23206*/         OPC_EmitInteger, MVT::i64, 0, 
/*23209*/         OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i128, 1/*#Ops*/, 3,  // Results = #4
/*23217*/         OPC_EmitInteger, MVT::i16, 0, 
/*23220*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_STORE_DWORDX2), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 1, 4, 2, 5, 
                  // Src: (st v2i32:v2i32:$value, i64:i64:$ptr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_global_store>> - Complexity = 4
                  // Dst: (BUFFER_STORE_DWORDX2 ?:v2i32:$value, (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, 0:i16)
/*23230*/       0, /*End of Scope*/
/*23231*/     0, /*End of Scope*/
/*23232*/   /*Scope*/ 124, /*->23357*/
/*23233*/     OPC_CheckChild1Type, MVT::v4i32,
/*23235*/     OPC_Scope, 40, /*->23277*/ // 2 children in Scope
/*23237*/       OPC_MoveChild, 2,
/*23239*/       OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*23242*/       OPC_RecordChild0, // #2 = $ptr
/*23243*/       OPC_RecordChild1, // #3 = $offset
/*23244*/       OPC_CheckType, MVT::i64,
/*23246*/       OPC_MoveParent,
/*23247*/       OPC_CheckPredicate, 45, // Predicate_unindexedstore
/*23249*/       OPC_CheckPredicate, 51, // Predicate_store
/*23251*/       OPC_CheckPredicate, 52, // Predicate_global_store
/*23253*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*23255*/       OPC_EmitMergeInputChains1_0,
/*23256*/       OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i128, 1/*#Ops*/, 2,  // Results = #4
/*23264*/       OPC_EmitInteger, MVT::i16, 0, 
/*23267*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_STORE_DWORDX4), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 4/*#Ops*/, 1, 4, 3, 5, 
                // Src: (st v4i32:v4i32:$value, (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_global_store>> - Complexity = 7
                // Dst: (BUFFER_STORE_DWORDX4 ?:v4i32:$value, (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*23277*/     /*Scope*/ 78, /*->23356*/
/*23278*/       OPC_RecordChild2, // #2 = $index_gpr
/*23279*/       OPC_Scope, 38, /*->23319*/ // 2 children in Scope
/*23281*/         OPC_CheckChild2Type, MVT::i32,
/*23283*/         OPC_CheckPredicate, 45, // Predicate_unindexedstore
/*23285*/         OPC_CheckPredicate, 51, // Predicate_store
/*23287*/         OPC_CheckPredicate, 52, // Predicate_global_store
/*23289*/         OPC_Scope, 11, /*->23302*/ // 2 children in Scope
/*23291*/           OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*23293*/           OPC_EmitMergeInputChains1_0,
/*23294*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RAT_STORE_DWORD128), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (st v4i32:v4i32:$rw_gpr, i32:i32:$index_gpr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_global_store>> - Complexity = 4
                    // Dst: (RAT_STORE_DWORD128 v4i32:v4i32:$rw_gpr, i32:i32:$index_gpr)
/*23302*/         /*Scope*/ 15, /*->23318*/
/*23303*/           OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*23305*/           OPC_EmitMergeInputChains1_0,
/*23306*/           OPC_EmitInteger, MVT::i32, 0, 
/*23309*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RAT_WRITE_CACHELESS_128_eg), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (st v4i32:v4i32:$rw_gpr, i32:i32:$index_gpr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_global_store>> - Complexity = 4
                    // Dst: (RAT_WRITE_CACHELESS_128_eg v4i32:v4i32:$rw_gpr, i32:i32:$index_gpr)
/*23318*/         0, /*End of Scope*/
/*23319*/       /*Scope*/ 35, /*->23355*/
/*23320*/         OPC_CheckChild2Type, MVT::i64,
/*23322*/         OPC_CheckPredicate, 45, // Predicate_unindexedstore
/*23324*/         OPC_CheckPredicate, 51, // Predicate_store
/*23326*/         OPC_CheckPredicate, 52, // Predicate_global_store
/*23328*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*23330*/         OPC_EmitMergeInputChains1_0,
/*23331*/         OPC_EmitInteger, MVT::i64, 0, 
/*23334*/         OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i128, 1/*#Ops*/, 3,  // Results = #4
/*23342*/         OPC_EmitInteger, MVT::i16, 0, 
/*23345*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_STORE_DWORDX4), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 1, 4, 2, 5, 
                  // Src: (st v4i32:v4i32:$value, i64:i64:$ptr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_global_store>> - Complexity = 4
                  // Dst: (BUFFER_STORE_DWORDX4 ?:v4i32:$value, (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, 0:i16)
/*23355*/       0, /*End of Scope*/
/*23356*/     0, /*End of Scope*/
/*23357*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 21,  TARGET_VAL(AMDGPUISD::STORE_MSKOR),// ->23382
/*23361*/   OPC_RecordMemRef,
/*23362*/   OPC_RecordNode,   // #0 = 'AMDGPUstore_mskor' chained node
/*23363*/   OPC_RecordChild1, // #1 = $rw_gpr
/*23364*/   OPC_CheckChild1Type, MVT::v4i32,
/*23366*/   OPC_RecordChild2, // #2 = $index_gpr
/*23367*/   OPC_CheckChild2Type, MVT::i32,
/*23369*/   OPC_CheckPredicate, 56, // Predicate_mskor_global
/*23371*/   OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*23373*/   OPC_EmitMergeInputChains1_0,
/*23374*/   OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RAT_MSKOR), 0|OPFL_Chain|OPFL_MemRefs,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (AMDGPUstore_mskor v4i32:v4i32:$rw_gpr, i32:i32:$index_gpr)<<P:Predicate_mskor_global>> - Complexity = 4
            // Dst: (RAT_MSKOR v4i32:v4i32:$rw_gpr, i32:i32:$index_gpr)
          /*SwitchOpcode*/ 18|128,1/*146*/,  TARGET_VAL(ISD::Constant),// ->23532
/*23386*/   OPC_RecordNode,   // #0 = $imm
/*23387*/   OPC_SwitchType /*3 cases */, 46,  MVT::i32,// ->23436
/*23390*/     OPC_Scope, 14, /*->23406*/ // 2 children in Scope
/*23392*/       OPC_CheckPredicate, 57, // Predicate_anonymous.val.397
/*23394*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*23396*/       OPC_EmitConvertToTarget, 0,
/*23398*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_MOV_B32), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (imm:i32)<<P:Predicate_anonymous.val.397>>:$imm - Complexity = 4
                // Dst: (S_MOV_B32:i32 (imm:i32):$imm)
/*23406*/     /*Scope*/ 28, /*->23435*/
/*23407*/       OPC_Scope, 12, /*->23421*/ // 2 children in Scope
/*23409*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*23411*/         OPC_EmitConvertToTarget, 0,
/*23413*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MOV_B32_e32), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (imm:i32):$imm - Complexity = 3
                  // Dst: (V_MOV_B32_e32:i32 (imm:i32):$imm)
/*23421*/       /*Scope*/ 12, /*->23434*/
/*23422*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*23424*/         OPC_EmitConvertToTarget, 0,
/*23426*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MOV_IMM_I32), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (imm:i32):$val - Complexity = 3
                  // Dst: (MOV_IMM_I32:i32 (imm:i32):$val)
/*23434*/       0, /*End of Scope*/
/*23435*/     0, /*End of Scope*/
            /*SwitchType*/ 79,  MVT::i64,// ->23517
/*23438*/     OPC_Scope, 14, /*->23454*/ // 2 children in Scope
/*23440*/       OPC_CheckPredicate, 58, // Predicate_anonymous.val.399
/*23442*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*23444*/       OPC_EmitConvertToTarget, 0,
/*23446*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_MOV_B64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (imm:i64)<<P:Predicate_anonymous.val.399>>:$imm - Complexity = 4
                // Dst: (S_MOV_B64:i64 (imm:i64)<<P:Predicate_anonymous.val.400>>:$imm)
/*23454*/     /*Scope*/ 61, /*->23516*/
/*23455*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*23457*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::i64, 0/*#Ops*/,  // Results = #1
/*23464*/       OPC_EmitConvertToTarget, 0,
/*23466*/       OPC_EmitNodeXForm, 2, 2, // LO32
/*23469*/       OPC_EmitNode, TARGET_VAL(AMDGPU::S_MOV_B32), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*23477*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*23480*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 4, 5,  // Results = #6
/*23490*/       OPC_EmitConvertToTarget, 0,
/*23492*/       OPC_EmitNodeXForm, 3, 7, // HI32
/*23495*/       OPC_EmitNode, TARGET_VAL(AMDGPU::S_MOV_B32), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 8,  // Results = #9
/*23503*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*23506*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 6, 9, 10, 
                // Src: (imm:i64):$imm - Complexity = 3
                // Dst: (INSERT_SUBREG:i64 (INSERT_SUBREG:i64 (IMPLICIT_DEF:i64), (S_MOV_B32:i32 (LO32:i32 (imm:i64):$imm)), sub0:i32), (S_MOV_B32:i32 (HI32:i32 (imm:i64):$imm)), sub1:i32)
/*23516*/     0, /*End of Scope*/
            /*SwitchType*/ 12,  MVT::i1,// ->23531
/*23519*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*23521*/     OPC_EmitConvertToTarget, 0,
/*23523*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_MOV_B64), 0,
                  1/*#VTs*/, MVT::i1, 1/*#Ops*/, 1, 
              // Src: (imm:i1):$imm - Complexity = 3
              // Dst: (S_MOV_B64:i1 (imm:i1):$imm)
            0, // EndSwitchType
          /*SwitchOpcode*/ 47|128,1/*175*/,  TARGET_VAL(ISD::BITCAST),// ->23711
/*23536*/   OPC_RecordChild0, // #0 = $src0
/*23537*/   OPC_SwitchType /*10 cases */, 23,  MVT::i32,// ->23563
/*23540*/     OPC_CheckChild0Type, MVT::f32,
/*23542*/     OPC_Scope, 5, /*->23549*/ // 2 children in Scope
/*23544*/       OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*23546*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:i32 R600_Reg32:f32:$src0) - Complexity = 3
                // Dst: R600_Reg32:i32:$src0
/*23549*/     /*Scope*/ 12, /*->23562*/
/*23550*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*23552*/       OPC_Scope, 3, /*->23557*/ // 2 children in Scope
/*23554*/         OPC_CompleteMatch, 1, 0, 
                  // Src: (bitconvert:i32 SReg_32:f32:$src0) - Complexity = 3
                  // Dst: SReg_32:i32:$src0
/*23557*/       /*Scope*/ 3, /*->23561*/
/*23558*/         OPC_CompleteMatch, 1, 0, 
                  // Src: (bitconvert:i32 VReg_32:f32:$src0) - Complexity = 3
                  // Dst: VReg_32:i32:$src0
/*23561*/       0, /*End of Scope*/
/*23562*/     0, /*End of Scope*/
            /*SwitchType*/ 7,  MVT::i64,// ->23572
/*23565*/     OPC_CheckChild0Type, MVT::f64,
/*23567*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*23569*/     OPC_CompleteMatch, 1, 0, 
              // Src: (bitconvert:i64 VReg_64:f64:$src0) - Complexity = 3
              // Dst: VReg_64:i64:$src0
            /*SwitchType*/ 23,  MVT::f32,// ->23597
/*23574*/     OPC_CheckChild0Type, MVT::i32,
/*23576*/     OPC_Scope, 5, /*->23583*/ // 2 children in Scope
/*23578*/       OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*23580*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:f32 R600_Reg32:i32:$src0) - Complexity = 3
                // Dst: R600_Reg32:f32:$src0
/*23583*/     /*Scope*/ 12, /*->23596*/
/*23584*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*23586*/       OPC_Scope, 3, /*->23591*/ // 2 children in Scope
/*23588*/         OPC_CompleteMatch, 1, 0, 
                  // Src: (bitconvert:f32 SReg_32:i32:$src0) - Complexity = 3
                  // Dst: SReg_32:f32:$src0
/*23591*/       /*Scope*/ 3, /*->23595*/
/*23592*/         OPC_CompleteMatch, 1, 0, 
                  // Src: (bitconvert:f32 VReg_32:i32:$src0) - Complexity = 3
                  // Dst: VReg_32:f32:$src0
/*23595*/       0, /*End of Scope*/
/*23596*/     0, /*End of Scope*/
            /*SwitchType*/ 7,  MVT::f64,// ->23606
/*23599*/     OPC_CheckChild0Type, MVT::i64,
/*23601*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*23603*/     OPC_CompleteMatch, 1, 0, 
              // Src: (bitconvert:f64 VReg_64:i64:$src0) - Complexity = 3
              // Dst: VReg_64:f64:$src0
            /*SwitchType*/ 16,  MVT::v2i32,// ->23624
/*23608*/     OPC_CheckChild0Type, MVT::v2f32,
/*23610*/     OPC_Scope, 5, /*->23617*/ // 2 children in Scope
/*23612*/       OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*23614*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v2i32 R600_Reg64:v2f32:$src0) - Complexity = 3
                // Dst: R600_Reg64:v2i32:$src0
/*23617*/     /*Scope*/ 5, /*->23623*/
/*23618*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*23620*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v2i32 VReg_64:v2f32:$src0) - Complexity = 3
                // Dst: VReg_64:v2i32:$src0
/*23623*/     0, /*End of Scope*/
            /*SwitchType*/ 16,  MVT::v4i32,// ->23642
/*23626*/     OPC_CheckChild0Type, MVT::v4f32,
/*23628*/     OPC_Scope, 5, /*->23635*/ // 2 children in Scope
/*23630*/       OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*23632*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4i32 R600_Reg128:v4f32:$src0) - Complexity = 3
                // Dst: R600_Reg128:v4i32:$src0
/*23635*/     /*Scope*/ 5, /*->23641*/
/*23636*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*23638*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4i32 VReg_128:v4f32:$src0) - Complexity = 3
                // Dst: VReg_128:v4i32:$src0
/*23641*/     0, /*End of Scope*/
            /*SwitchType*/ 14,  MVT::v8i32,// ->23658
/*23644*/     OPC_CheckChild0Type, MVT::v32i8,
/*23646*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*23648*/     OPC_Scope, 3, /*->23653*/ // 2 children in Scope
/*23650*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v8i32 SReg_256:v32i8:$src0) - Complexity = 3
                // Dst: SReg_256:v8i32:$src0
/*23653*/     /*Scope*/ 3, /*->23657*/
/*23654*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v8i32 VReg_256:v32i8:$src0) - Complexity = 3
                // Dst: VReg_256:v8i32:$src0
/*23657*/     0, /*End of Scope*/
            /*SwitchType*/ 14,  MVT::v32i8,// ->23674
/*23660*/     OPC_CheckChild0Type, MVT::v8i32,
/*23662*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*23664*/     OPC_Scope, 3, /*->23669*/ // 2 children in Scope
/*23666*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v32i8 SReg_256:v8i32:$src0) - Complexity = 3
                // Dst: SReg_256:v32i8:$src0
/*23669*/     /*Scope*/ 3, /*->23673*/
/*23670*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v32i8 VReg_256:v8i32:$src0) - Complexity = 3
                // Dst: VReg_256:v32i8:$src0
/*23673*/     0, /*End of Scope*/
            /*SwitchType*/ 16,  MVT::v2f32,// ->23692
/*23676*/     OPC_CheckChild0Type, MVT::v2i32,
/*23678*/     OPC_Scope, 5, /*->23685*/ // 2 children in Scope
/*23680*/       OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*23682*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v2f32 R600_Reg64:v2i32:$src0) - Complexity = 3
                // Dst: R600_Reg64:v2f32:$src0
/*23685*/     /*Scope*/ 5, /*->23691*/
/*23686*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*23688*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v2f32 VReg_64:v2i32:$src0) - Complexity = 3
                // Dst: VReg_64:v2f32:$src0
/*23691*/     0, /*End of Scope*/
            /*SwitchType*/ 16,  MVT::v4f32,// ->23710
/*23694*/     OPC_CheckChild0Type, MVT::v4i32,
/*23696*/     OPC_Scope, 5, /*->23703*/ // 2 children in Scope
/*23698*/       OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*23700*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4f32 R600_Reg128:v4i32:$src0) - Complexity = 3
                // Dst: R600_Reg128:v4f32:$src0
/*23703*/     /*Scope*/ 5, /*->23709*/
/*23704*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*23706*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4f32 VReg_128:v4i32:$src0) - Complexity = 3
                // Dst: VReg_128:v4f32:$src0
/*23709*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 8,  TARGET_VAL(AMDGPUISD::DWORDADDR),// ->23722
/*23714*/   OPC_RecordChild0, // #0 = $addr
/*23715*/   OPC_CheckType, MVT::i32,
/*23717*/   OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*23719*/   OPC_CompleteMatch, 1, 0, 
            // Src: (AMDGPUdwordaddr:i32 R600_Reg32:i32:$addr) - Complexity = 3
            // Dst: R600_Reg32:i32:$addr
          /*SwitchOpcode*/ 120,  TARGET_VAL(ISD::SUB),// ->23845
/*23725*/   OPC_RecordChild0, // #0 = $src0
/*23726*/   OPC_RecordChild1, // #1 = $src1
/*23727*/   OPC_CheckType, MVT::i32,
/*23729*/   OPC_Scope, 101, /*->23832*/ // 2 children in Scope
/*23731*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*23733*/     OPC_EmitInteger, MVT::i32, 0, 
/*23736*/     OPC_EmitInteger, MVT::i32, 0, 
/*23739*/     OPC_EmitInteger, MVT::i32, 1, 
/*23742*/     OPC_EmitInteger, MVT::i32, 0, 
/*23745*/     OPC_EmitInteger, MVT::i32, 0, 
/*23748*/     OPC_EmitInteger, MVT::i32, 0, 
/*23751*/     OPC_EmitInteger, MVT::i32, 0, 
/*23754*/     OPC_EmitInteger, MVT::i32, 0, 
/*23757*/     OPC_EmitInteger, MVT::i32, 0, 
/*23760*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*23772*/     OPC_EmitInteger, MVT::i32, 0, 
/*23775*/     OPC_EmitInteger, MVT::i32, 0, 
/*23778*/     OPC_EmitInteger, MVT::i32, 0, 
/*23781*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*23793*/     OPC_EmitInteger, MVT::i32, 1, 
/*23796*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*23799*/     OPC_EmitInteger, MVT::i32, 0, 
/*23802*/     OPC_EmitInteger, MVT::i32, 0, 
/*23805*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SUB_INT), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (sub:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (SUB_INT:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*23832*/   /*Scope*/ 11, /*->23844*/
/*23833*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*23835*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_SUB_I32_e32), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sub:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
              // Dst: (V_SUB_I32_e32:i32 i32:i32:$src0, i32:i32:$src1)
/*23844*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 120,  TARGET_VAL(AMDGPUISD::SMAX),// ->23968
/*23848*/   OPC_RecordChild0, // #0 = $src0
/*23849*/   OPC_RecordChild1, // #1 = $src1
/*23850*/   OPC_CheckType, MVT::i32,
/*23852*/   OPC_Scope, 101, /*->23955*/ // 2 children in Scope
/*23854*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*23856*/     OPC_EmitInteger, MVT::i32, 0, 
/*23859*/     OPC_EmitInteger, MVT::i32, 0, 
/*23862*/     OPC_EmitInteger, MVT::i32, 1, 
/*23865*/     OPC_EmitInteger, MVT::i32, 0, 
/*23868*/     OPC_EmitInteger, MVT::i32, 0, 
/*23871*/     OPC_EmitInteger, MVT::i32, 0, 
/*23874*/     OPC_EmitInteger, MVT::i32, 0, 
/*23877*/     OPC_EmitInteger, MVT::i32, 0, 
/*23880*/     OPC_EmitInteger, MVT::i32, 0, 
/*23883*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*23895*/     OPC_EmitInteger, MVT::i32, 0, 
/*23898*/     OPC_EmitInteger, MVT::i32, 0, 
/*23901*/     OPC_EmitInteger, MVT::i32, 0, 
/*23904*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*23916*/     OPC_EmitInteger, MVT::i32, 1, 
/*23919*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*23922*/     OPC_EmitInteger, MVT::i32, 0, 
/*23925*/     OPC_EmitInteger, MVT::i32, 0, 
/*23928*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MAX_INT), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUsmax:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (MAX_INT:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*23955*/   /*Scope*/ 11, /*->23967*/
/*23956*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*23958*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MAX_I32_e32), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (AMDGPUsmax:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
              // Dst: (V_MAX_I32_e32:i32 i32:i32:$src0, i32:i32:$src1)
/*23967*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 120,  TARGET_VAL(AMDGPUISD::SMIN),// ->24091
/*23971*/   OPC_RecordChild0, // #0 = $src0
/*23972*/   OPC_RecordChild1, // #1 = $src1
/*23973*/   OPC_CheckType, MVT::i32,
/*23975*/   OPC_Scope, 101, /*->24078*/ // 2 children in Scope
/*23977*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*23979*/     OPC_EmitInteger, MVT::i32, 0, 
/*23982*/     OPC_EmitInteger, MVT::i32, 0, 
/*23985*/     OPC_EmitInteger, MVT::i32, 1, 
/*23988*/     OPC_EmitInteger, MVT::i32, 0, 
/*23991*/     OPC_EmitInteger, MVT::i32, 0, 
/*23994*/     OPC_EmitInteger, MVT::i32, 0, 
/*23997*/     OPC_EmitInteger, MVT::i32, 0, 
/*24000*/     OPC_EmitInteger, MVT::i32, 0, 
/*24003*/     OPC_EmitInteger, MVT::i32, 0, 
/*24006*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*24018*/     OPC_EmitInteger, MVT::i32, 0, 
/*24021*/     OPC_EmitInteger, MVT::i32, 0, 
/*24024*/     OPC_EmitInteger, MVT::i32, 0, 
/*24027*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*24039*/     OPC_EmitInteger, MVT::i32, 1, 
/*24042*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*24045*/     OPC_EmitInteger, MVT::i32, 0, 
/*24048*/     OPC_EmitInteger, MVT::i32, 0, 
/*24051*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MIN_INT), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUsmin:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (MIN_INT:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*24078*/   /*Scope*/ 11, /*->24090*/
/*24079*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*24081*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MIN_I32_e32), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (AMDGPUsmin:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
              // Dst: (V_MIN_I32_e32:i32 i32:i32:$src0, i32:i32:$src1)
/*24090*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 120,  TARGET_VAL(AMDGPUISD::UMAX),// ->24214
/*24094*/   OPC_RecordChild0, // #0 = $src0
/*24095*/   OPC_RecordChild1, // #1 = $src1
/*24096*/   OPC_CheckType, MVT::i32,
/*24098*/   OPC_Scope, 101, /*->24201*/ // 2 children in Scope
/*24100*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*24102*/     OPC_EmitInteger, MVT::i32, 0, 
/*24105*/     OPC_EmitInteger, MVT::i32, 0, 
/*24108*/     OPC_EmitInteger, MVT::i32, 1, 
/*24111*/     OPC_EmitInteger, MVT::i32, 0, 
/*24114*/     OPC_EmitInteger, MVT::i32, 0, 
/*24117*/     OPC_EmitInteger, MVT::i32, 0, 
/*24120*/     OPC_EmitInteger, MVT::i32, 0, 
/*24123*/     OPC_EmitInteger, MVT::i32, 0, 
/*24126*/     OPC_EmitInteger, MVT::i32, 0, 
/*24129*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*24141*/     OPC_EmitInteger, MVT::i32, 0, 
/*24144*/     OPC_EmitInteger, MVT::i32, 0, 
/*24147*/     OPC_EmitInteger, MVT::i32, 0, 
/*24150*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*24162*/     OPC_EmitInteger, MVT::i32, 1, 
/*24165*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*24168*/     OPC_EmitInteger, MVT::i32, 0, 
/*24171*/     OPC_EmitInteger, MVT::i32, 0, 
/*24174*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MAX_UINT), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUumax:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (MAX_UINT:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*24201*/   /*Scope*/ 11, /*->24213*/
/*24202*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*24204*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MAX_U32_e32), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (AMDGPUumax:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
              // Dst: (V_MAX_U32_e32:i32 i32:i32:$src0, i32:i32:$src1)
/*24213*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 120,  TARGET_VAL(AMDGPUISD::UMIN),// ->24337
/*24217*/   OPC_RecordChild0, // #0 = $src0
/*24218*/   OPC_RecordChild1, // #1 = $src1
/*24219*/   OPC_CheckType, MVT::i32,
/*24221*/   OPC_Scope, 101, /*->24324*/ // 2 children in Scope
/*24223*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*24225*/     OPC_EmitInteger, MVT::i32, 0, 
/*24228*/     OPC_EmitInteger, MVT::i32, 0, 
/*24231*/     OPC_EmitInteger, MVT::i32, 1, 
/*24234*/     OPC_EmitInteger, MVT::i32, 0, 
/*24237*/     OPC_EmitInteger, MVT::i32, 0, 
/*24240*/     OPC_EmitInteger, MVT::i32, 0, 
/*24243*/     OPC_EmitInteger, MVT::i32, 0, 
/*24246*/     OPC_EmitInteger, MVT::i32, 0, 
/*24249*/     OPC_EmitInteger, MVT::i32, 0, 
/*24252*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*24264*/     OPC_EmitInteger, MVT::i32, 0, 
/*24267*/     OPC_EmitInteger, MVT::i32, 0, 
/*24270*/     OPC_EmitInteger, MVT::i32, 0, 
/*24273*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*24285*/     OPC_EmitInteger, MVT::i32, 1, 
/*24288*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*24291*/     OPC_EmitInteger, MVT::i32, 0, 
/*24294*/     OPC_EmitInteger, MVT::i32, 0, 
/*24297*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MIN_UINT), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUumin:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (MIN_UINT:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*24324*/   /*Scope*/ 11, /*->24336*/
/*24325*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*24327*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MIN_U32_e32), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (AMDGPUumin:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
              // Dst: (V_MIN_U32_e32:i32 i32:i32:$src0, i32:i32:$src1)
/*24336*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 109|128,1/*237*/,  TARGET_VAL(ISD::FP_TO_SINT),// ->24578
/*24341*/   OPC_RecordChild0, // #0 = $src0
/*24342*/   OPC_CheckType, MVT::i32,
/*24344*/   OPC_Scope, 89|128,1/*217*/, /*->24564*/ // 2 children in Scope
/*24347*/     OPC_CheckChild0Type, MVT::f32,
/*24349*/     OPC_Scope, 67, /*->24418*/ // 3 children in Scope
/*24351*/       OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*24353*/       OPC_EmitInteger, MVT::i32, 1, 
/*24356*/       OPC_EmitInteger, MVT::i32, 0, 
/*24359*/       OPC_EmitInteger, MVT::i32, 0, 
/*24362*/       OPC_EmitInteger, MVT::i32, 0, 
/*24365*/       OPC_EmitInteger, MVT::i32, 0, 
/*24368*/       OPC_EmitInteger, MVT::i32, 0, 
/*24371*/       OPC_EmitInteger, MVT::i32, 0, 
/*24374*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*24386*/       OPC_EmitInteger, MVT::i32, 1, 
/*24389*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*24392*/       OPC_EmitInteger, MVT::i32, 0, 
/*24395*/       OPC_EmitInteger, MVT::i32, 0, 
/*24398*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::FLT_TO_INT_r600), 0,
                    1/*#VTs*/, MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (fp_to_sint:i32 R600_Reg32:f32:$src0) - Complexity = 3
                // Dst: (FLT_TO_INT_r600:i32 R600_Reg32:f32:$src0)
/*24418*/     /*Scope*/ 10, /*->24429*/
/*24419*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*24421*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CVT_I32_F32_e32), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (fp_to_sint:i32 f32:f32:$src0) - Complexity = 3
                // Dst: (V_CVT_I32_F32_e32:i32 f32:f32:$src0)
/*24429*/     /*Scope*/ 4|128,1/*132*/, /*->24563*/
/*24431*/       OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*24433*/       OPC_EmitInteger, MVT::i32, 1, 
/*24436*/       OPC_EmitInteger, MVT::i32, 0, 
/*24439*/       OPC_EmitInteger, MVT::i32, 0, 
/*24442*/       OPC_EmitInteger, MVT::i32, 0, 
/*24445*/       OPC_EmitInteger, MVT::i32, 1, 
/*24448*/       OPC_EmitInteger, MVT::i32, 0, 
/*24451*/       OPC_EmitInteger, MVT::i32, 0, 
/*24454*/       OPC_EmitInteger, MVT::i32, 0, 
/*24457*/       OPC_EmitInteger, MVT::i32, 0, 
/*24460*/       OPC_EmitInteger, MVT::i32, 0, 
/*24463*/       OPC_EmitInteger, MVT::i32, 0, 
/*24466*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*24478*/       OPC_EmitInteger, MVT::i32, 1, 
/*24481*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*24484*/       OPC_EmitInteger, MVT::i32, 0, 
/*24487*/       OPC_EmitInteger, MVT::i32, 0, 
/*24490*/       OPC_EmitNode, TARGET_VAL(AMDGPU::TRUNC), 0,
                    1/*#VTs*/, MVT::i32, 13/*#Ops*/, 5, 6, 7, 8, 0, 9, 10, 11, 12, 13, 14, 15, 16,  // Results = #17
/*24510*/       OPC_EmitInteger, MVT::i32, 0, 
/*24513*/       OPC_EmitInteger, MVT::i32, 0, 
/*24516*/       OPC_EmitInteger, MVT::i32, 0, 
/*24519*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*24531*/       OPC_EmitInteger, MVT::i32, 1, 
/*24534*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*24537*/       OPC_EmitInteger, MVT::i32, 0, 
/*24540*/       OPC_EmitInteger, MVT::i32, 0, 
/*24543*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::FLT_TO_INT_eg), 0,
                    1/*#VTs*/, MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 17, 18, 19, 20, 21, 22, 23, 24, 25, 
                // Src: (fp_to_sint:i32 f32:f32:$src0) - Complexity = 3
                // Dst: (FLT_TO_INT_eg:i32 (TRUNC:i32 ?:f32:$src0))
/*24563*/     0, /*End of Scope*/
/*24564*/   /*Scope*/ 12, /*->24577*/
/*24565*/     OPC_CheckChild0Type, MVT::f64,
/*24567*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*24569*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CVT_I32_F64_e32), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (fp_to_sint:i32 f64:f64:$src0) - Complexity = 3
              // Dst: (V_CVT_I32_F64_e32:i32 f64:f64:$src0)
/*24577*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 92|128,1/*220*/,  TARGET_VAL(ISD::FP_TO_UINT),// ->24802
/*24582*/   OPC_RecordChild0, // #0 = $src0
/*24583*/   OPC_CheckChild0Type, MVT::f32,
/*24585*/   OPC_CheckType, MVT::i32,
/*24587*/   OPC_Scope, 67, /*->24656*/ // 3 children in Scope
/*24589*/     OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*24591*/     OPC_EmitInteger, MVT::i32, 1, 
/*24594*/     OPC_EmitInteger, MVT::i32, 0, 
/*24597*/     OPC_EmitInteger, MVT::i32, 0, 
/*24600*/     OPC_EmitInteger, MVT::i32, 0, 
/*24603*/     OPC_EmitInteger, MVT::i32, 0, 
/*24606*/     OPC_EmitInteger, MVT::i32, 0, 
/*24609*/     OPC_EmitInteger, MVT::i32, 0, 
/*24612*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*24624*/     OPC_EmitInteger, MVT::i32, 1, 
/*24627*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*24630*/     OPC_EmitInteger, MVT::i32, 0, 
/*24633*/     OPC_EmitInteger, MVT::i32, 0, 
/*24636*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::FLT_TO_UINT_r600), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (fp_to_uint:i32 R600_Reg32:f32:$src0) - Complexity = 3
              // Dst: (FLT_TO_UINT_r600:i32 R600_Reg32:f32:$src0)
/*24656*/   /*Scope*/ 10, /*->24667*/
/*24657*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*24659*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CVT_U32_F32_e32), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (fp_to_uint:i32 f32:f32:$src0) - Complexity = 3
              // Dst: (V_CVT_U32_F32_e32:i32 f32:f32:$src0)
/*24667*/   /*Scope*/ 4|128,1/*132*/, /*->24801*/
/*24669*/     OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*24671*/     OPC_EmitInteger, MVT::i32, 1, 
/*24674*/     OPC_EmitInteger, MVT::i32, 0, 
/*24677*/     OPC_EmitInteger, MVT::i32, 0, 
/*24680*/     OPC_EmitInteger, MVT::i32, 0, 
/*24683*/     OPC_EmitInteger, MVT::i32, 1, 
/*24686*/     OPC_EmitInteger, MVT::i32, 0, 
/*24689*/     OPC_EmitInteger, MVT::i32, 0, 
/*24692*/     OPC_EmitInteger, MVT::i32, 0, 
/*24695*/     OPC_EmitInteger, MVT::i32, 0, 
/*24698*/     OPC_EmitInteger, MVT::i32, 0, 
/*24701*/     OPC_EmitInteger, MVT::i32, 0, 
/*24704*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*24716*/     OPC_EmitInteger, MVT::i32, 1, 
/*24719*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*24722*/     OPC_EmitInteger, MVT::i32, 0, 
/*24725*/     OPC_EmitInteger, MVT::i32, 0, 
/*24728*/     OPC_EmitNode, TARGET_VAL(AMDGPU::TRUNC), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 5, 6, 7, 8, 0, 9, 10, 11, 12, 13, 14, 15, 16,  // Results = #17
/*24748*/     OPC_EmitInteger, MVT::i32, 0, 
/*24751*/     OPC_EmitInteger, MVT::i32, 0, 
/*24754*/     OPC_EmitInteger, MVT::i32, 0, 
/*24757*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*24769*/     OPC_EmitInteger, MVT::i32, 1, 
/*24772*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*24775*/     OPC_EmitInteger, MVT::i32, 0, 
/*24778*/     OPC_EmitInteger, MVT::i32, 0, 
/*24781*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::FLT_TO_UINT_eg), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 17, 18, 19, 20, 21, 22, 23, 24, 25, 
              // Src: (fp_to_uint:i32 f32:f32:$src0) - Complexity = 3
              // Dst: (FLT_TO_UINT_eg:i32 (TRUNC:i32 ?:f32:$src0))
/*24801*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 112|128,1/*240*/,  TARGET_VAL(ISD::SRA),// ->25046
/*24806*/   OPC_RecordChild0, // #0 = $src0
/*24807*/   OPC_RecordChild1, // #1 = $src1
/*24808*/   OPC_CheckChild1Type, MVT::i32,
/*24810*/   OPC_SwitchType /*2 cases */, 90|128,1/*218*/,  MVT::i32,// ->25032
/*24814*/     OPC_Scope, 101, /*->24917*/ // 3 children in Scope
/*24816*/       OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*24818*/       OPC_EmitInteger, MVT::i32, 0, 
/*24821*/       OPC_EmitInteger, MVT::i32, 0, 
/*24824*/       OPC_EmitInteger, MVT::i32, 1, 
/*24827*/       OPC_EmitInteger, MVT::i32, 0, 
/*24830*/       OPC_EmitInteger, MVT::i32, 0, 
/*24833*/       OPC_EmitInteger, MVT::i32, 0, 
/*24836*/       OPC_EmitInteger, MVT::i32, 0, 
/*24839*/       OPC_EmitInteger, MVT::i32, 0, 
/*24842*/       OPC_EmitInteger, MVT::i32, 0, 
/*24845*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*24857*/       OPC_EmitInteger, MVT::i32, 0, 
/*24860*/       OPC_EmitInteger, MVT::i32, 0, 
/*24863*/       OPC_EmitInteger, MVT::i32, 0, 
/*24866*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*24878*/       OPC_EmitInteger, MVT::i32, 1, 
/*24881*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*24884*/       OPC_EmitInteger, MVT::i32, 0, 
/*24887*/       OPC_EmitInteger, MVT::i32, 0, 
/*24890*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::ASHR_r600), 0,
                    1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (sra:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
                // Dst: (ASHR_r600:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*24917*/     /*Scope*/ 101, /*->25019*/
/*24918*/       OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*24920*/       OPC_EmitInteger, MVT::i32, 0, 
/*24923*/       OPC_EmitInteger, MVT::i32, 0, 
/*24926*/       OPC_EmitInteger, MVT::i32, 1, 
/*24929*/       OPC_EmitInteger, MVT::i32, 0, 
/*24932*/       OPC_EmitInteger, MVT::i32, 0, 
/*24935*/       OPC_EmitInteger, MVT::i32, 0, 
/*24938*/       OPC_EmitInteger, MVT::i32, 0, 
/*24941*/       OPC_EmitInteger, MVT::i32, 0, 
/*24944*/       OPC_EmitInteger, MVT::i32, 0, 
/*24947*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*24959*/       OPC_EmitInteger, MVT::i32, 0, 
/*24962*/       OPC_EmitInteger, MVT::i32, 0, 
/*24965*/       OPC_EmitInteger, MVT::i32, 0, 
/*24968*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*24980*/       OPC_EmitInteger, MVT::i32, 1, 
/*24983*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*24986*/       OPC_EmitInteger, MVT::i32, 0, 
/*24989*/       OPC_EmitInteger, MVT::i32, 0, 
/*24992*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::ASHR_eg), 0,
                    1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (sra:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
                // Dst: (ASHR_eg:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*25019*/     /*Scope*/ 11, /*->25031*/
/*25020*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*25022*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_ASHR_I32_e32), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sra:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
                // Dst: (V_ASHR_I32_e32:i32 i32:i32:$src0, i32:i32:$src1)
/*25031*/     0, /*End of Scope*/
            /*SwitchType*/ 11,  MVT::i64,// ->25045
/*25034*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*25036*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_ASHR_I64), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (sra:i64 i64:i64:$src0, i32:i32:$src1) - Complexity = 3
              // Dst: (V_ASHR_I64:i64 i64:i64:$src0, i32:i32:$src1)
            0, // EndSwitchType
          /*SwitchOpcode*/ 112|128,1/*240*/,  TARGET_VAL(ISD::SRL),// ->25290
/*25050*/   OPC_RecordChild0, // #0 = $src0
/*25051*/   OPC_RecordChild1, // #1 = $src1
/*25052*/   OPC_CheckChild1Type, MVT::i32,
/*25054*/   OPC_SwitchType /*2 cases */, 90|128,1/*218*/,  MVT::i32,// ->25276
/*25058*/     OPC_Scope, 101, /*->25161*/ // 3 children in Scope
/*25060*/       OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*25062*/       OPC_EmitInteger, MVT::i32, 0, 
/*25065*/       OPC_EmitInteger, MVT::i32, 0, 
/*25068*/       OPC_EmitInteger, MVT::i32, 1, 
/*25071*/       OPC_EmitInteger, MVT::i32, 0, 
/*25074*/       OPC_EmitInteger, MVT::i32, 0, 
/*25077*/       OPC_EmitInteger, MVT::i32, 0, 
/*25080*/       OPC_EmitInteger, MVT::i32, 0, 
/*25083*/       OPC_EmitInteger, MVT::i32, 0, 
/*25086*/       OPC_EmitInteger, MVT::i32, 0, 
/*25089*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*25101*/       OPC_EmitInteger, MVT::i32, 0, 
/*25104*/       OPC_EmitInteger, MVT::i32, 0, 
/*25107*/       OPC_EmitInteger, MVT::i32, 0, 
/*25110*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*25122*/       OPC_EmitInteger, MVT::i32, 1, 
/*25125*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*25128*/       OPC_EmitInteger, MVT::i32, 0, 
/*25131*/       OPC_EmitInteger, MVT::i32, 0, 
/*25134*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::LSHR_r600), 0,
                    1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (srl:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
                // Dst: (LSHR_r600:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*25161*/     /*Scope*/ 101, /*->25263*/
/*25162*/       OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*25164*/       OPC_EmitInteger, MVT::i32, 0, 
/*25167*/       OPC_EmitInteger, MVT::i32, 0, 
/*25170*/       OPC_EmitInteger, MVT::i32, 1, 
/*25173*/       OPC_EmitInteger, MVT::i32, 0, 
/*25176*/       OPC_EmitInteger, MVT::i32, 0, 
/*25179*/       OPC_EmitInteger, MVT::i32, 0, 
/*25182*/       OPC_EmitInteger, MVT::i32, 0, 
/*25185*/       OPC_EmitInteger, MVT::i32, 0, 
/*25188*/       OPC_EmitInteger, MVT::i32, 0, 
/*25191*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*25203*/       OPC_EmitInteger, MVT::i32, 0, 
/*25206*/       OPC_EmitInteger, MVT::i32, 0, 
/*25209*/       OPC_EmitInteger, MVT::i32, 0, 
/*25212*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*25224*/       OPC_EmitInteger, MVT::i32, 1, 
/*25227*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*25230*/       OPC_EmitInteger, MVT::i32, 0, 
/*25233*/       OPC_EmitInteger, MVT::i32, 0, 
/*25236*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::LSHR_eg), 0,
                    1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (srl:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
                // Dst: (LSHR_eg:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*25263*/     /*Scope*/ 11, /*->25275*/
/*25264*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*25266*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_LSHR_B32_e32), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (srl:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
                // Dst: (V_LSHR_B32_e32:i32 i32:i32:$src0, i32:i32:$src1)
/*25275*/     0, /*End of Scope*/
            /*SwitchType*/ 11,  MVT::i64,// ->25289
/*25278*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*25280*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_LSHR_B64), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (srl:i64 i64:i64:$src0, i32:i32:$src1) - Complexity = 3
              // Dst: (V_LSHR_B64:i64 i64:i64:$src0, i32:i32:$src1)
            0, // EndSwitchType
          /*SwitchOpcode*/ 112|128,1/*240*/,  TARGET_VAL(ISD::SHL),// ->25534
/*25294*/   OPC_RecordChild0, // #0 = $src0
/*25295*/   OPC_RecordChild1, // #1 = $src1
/*25296*/   OPC_CheckChild1Type, MVT::i32,
/*25298*/   OPC_SwitchType /*2 cases */, 90|128,1/*218*/,  MVT::i32,// ->25520
/*25302*/     OPC_Scope, 101, /*->25405*/ // 3 children in Scope
/*25304*/       OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*25306*/       OPC_EmitInteger, MVT::i32, 0, 
/*25309*/       OPC_EmitInteger, MVT::i32, 0, 
/*25312*/       OPC_EmitInteger, MVT::i32, 1, 
/*25315*/       OPC_EmitInteger, MVT::i32, 0, 
/*25318*/       OPC_EmitInteger, MVT::i32, 0, 
/*25321*/       OPC_EmitInteger, MVT::i32, 0, 
/*25324*/       OPC_EmitInteger, MVT::i32, 0, 
/*25327*/       OPC_EmitInteger, MVT::i32, 0, 
/*25330*/       OPC_EmitInteger, MVT::i32, 0, 
/*25333*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*25345*/       OPC_EmitInteger, MVT::i32, 0, 
/*25348*/       OPC_EmitInteger, MVT::i32, 0, 
/*25351*/       OPC_EmitInteger, MVT::i32, 0, 
/*25354*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*25366*/       OPC_EmitInteger, MVT::i32, 1, 
/*25369*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*25372*/       OPC_EmitInteger, MVT::i32, 0, 
/*25375*/       OPC_EmitInteger, MVT::i32, 0, 
/*25378*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::LSHL_r600), 0,
                    1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (shl:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
                // Dst: (LSHL_r600:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*25405*/     /*Scope*/ 101, /*->25507*/
/*25406*/       OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*25408*/       OPC_EmitInteger, MVT::i32, 0, 
/*25411*/       OPC_EmitInteger, MVT::i32, 0, 
/*25414*/       OPC_EmitInteger, MVT::i32, 1, 
/*25417*/       OPC_EmitInteger, MVT::i32, 0, 
/*25420*/       OPC_EmitInteger, MVT::i32, 0, 
/*25423*/       OPC_EmitInteger, MVT::i32, 0, 
/*25426*/       OPC_EmitInteger, MVT::i32, 0, 
/*25429*/       OPC_EmitInteger, MVT::i32, 0, 
/*25432*/       OPC_EmitInteger, MVT::i32, 0, 
/*25435*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*25447*/       OPC_EmitInteger, MVT::i32, 0, 
/*25450*/       OPC_EmitInteger, MVT::i32, 0, 
/*25453*/       OPC_EmitInteger, MVT::i32, 0, 
/*25456*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*25468*/       OPC_EmitInteger, MVT::i32, 1, 
/*25471*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*25474*/       OPC_EmitInteger, MVT::i32, 0, 
/*25477*/       OPC_EmitInteger, MVT::i32, 0, 
/*25480*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::LSHL_eg), 0,
                    1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (shl:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
                // Dst: (LSHL_eg:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*25507*/     /*Scope*/ 11, /*->25519*/
/*25508*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*25510*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_LSHL_B32_e32), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (shl:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
                // Dst: (V_LSHL_B32_e32:i32 i32:i32:$src0, i32:i32:$src1)
/*25519*/     0, /*End of Scope*/
            /*SwitchType*/ 11,  MVT::i64,// ->25533
/*25522*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*25524*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_LSHL_B64), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (shl:i64 i64:i64:$src0, i32:i32:$src1) - Complexity = 3
              // Dst: (V_LSHL_B64:i64 i64:i64:$src0, i32:i32:$src1)
            0, // EndSwitchType
          /*SwitchOpcode*/ 88|128,2/*344*/,  TARGET_VAL(ISD::MULHS),// ->25882
/*25538*/   OPC_RecordChild0, // #0 = $src0
/*25539*/   OPC_RecordChild1, // #1 = $src1
/*25540*/   OPC_CheckType, MVT::i32,
/*25542*/   OPC_Scope, 101, /*->25645*/ // 4 children in Scope
/*25544*/     OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*25546*/     OPC_EmitInteger, MVT::i32, 0, 
/*25549*/     OPC_EmitInteger, MVT::i32, 0, 
/*25552*/     OPC_EmitInteger, MVT::i32, 1, 
/*25555*/     OPC_EmitInteger, MVT::i32, 0, 
/*25558*/     OPC_EmitInteger, MVT::i32, 0, 
/*25561*/     OPC_EmitInteger, MVT::i32, 0, 
/*25564*/     OPC_EmitInteger, MVT::i32, 0, 
/*25567*/     OPC_EmitInteger, MVT::i32, 0, 
/*25570*/     OPC_EmitInteger, MVT::i32, 0, 
/*25573*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*25585*/     OPC_EmitInteger, MVT::i32, 0, 
/*25588*/     OPC_EmitInteger, MVT::i32, 0, 
/*25591*/     OPC_EmitInteger, MVT::i32, 0, 
/*25594*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*25606*/     OPC_EmitInteger, MVT::i32, 1, 
/*25609*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*25612*/     OPC_EmitInteger, MVT::i32, 0, 
/*25615*/     OPC_EmitInteger, MVT::i32, 0, 
/*25618*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULHI_INT_r600), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (mulhs:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (MULHI_INT_r600:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*25645*/   /*Scope*/ 101, /*->25747*/
/*25646*/     OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*25648*/     OPC_EmitInteger, MVT::i32, 0, 
/*25651*/     OPC_EmitInteger, MVT::i32, 0, 
/*25654*/     OPC_EmitInteger, MVT::i32, 1, 
/*25657*/     OPC_EmitInteger, MVT::i32, 0, 
/*25660*/     OPC_EmitInteger, MVT::i32, 0, 
/*25663*/     OPC_EmitInteger, MVT::i32, 0, 
/*25666*/     OPC_EmitInteger, MVT::i32, 0, 
/*25669*/     OPC_EmitInteger, MVT::i32, 0, 
/*25672*/     OPC_EmitInteger, MVT::i32, 0, 
/*25675*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*25687*/     OPC_EmitInteger, MVT::i32, 0, 
/*25690*/     OPC_EmitInteger, MVT::i32, 0, 
/*25693*/     OPC_EmitInteger, MVT::i32, 0, 
/*25696*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*25708*/     OPC_EmitInteger, MVT::i32, 1, 
/*25711*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*25714*/     OPC_EmitInteger, MVT::i32, 0, 
/*25717*/     OPC_EmitInteger, MVT::i32, 0, 
/*25720*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULHI_INT_eg), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (mulhs:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (MULHI_INT_eg:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*25747*/   /*Scope*/ 101, /*->25849*/
/*25748*/     OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*25750*/     OPC_EmitInteger, MVT::i32, 0, 
/*25753*/     OPC_EmitInteger, MVT::i32, 0, 
/*25756*/     OPC_EmitInteger, MVT::i32, 1, 
/*25759*/     OPC_EmitInteger, MVT::i32, 0, 
/*25762*/     OPC_EmitInteger, MVT::i32, 0, 
/*25765*/     OPC_EmitInteger, MVT::i32, 0, 
/*25768*/     OPC_EmitInteger, MVT::i32, 0, 
/*25771*/     OPC_EmitInteger, MVT::i32, 0, 
/*25774*/     OPC_EmitInteger, MVT::i32, 0, 
/*25777*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*25789*/     OPC_EmitInteger, MVT::i32, 0, 
/*25792*/     OPC_EmitInteger, MVT::i32, 0, 
/*25795*/     OPC_EmitInteger, MVT::i32, 0, 
/*25798*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*25810*/     OPC_EmitInteger, MVT::i32, 1, 
/*25813*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*25816*/     OPC_EmitInteger, MVT::i32, 0, 
/*25819*/     OPC_EmitInteger, MVT::i32, 0, 
/*25822*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULHI_INT_cm), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (mulhs:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (MULHI_INT_cm:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*25849*/   /*Scope*/ 31, /*->25881*/
/*25850*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*25852*/     OPC_EmitInteger, MVT::i32, 0, 
/*25855*/     OPC_EmitInteger, MVT::i32, 0, 
/*25858*/     OPC_EmitInteger, MVT::i32, 0, 
/*25861*/     OPC_EmitInteger, MVT::i32, 0, 
/*25864*/     OPC_EmitInteger, MVT::i32, 0, 
/*25867*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MUL_HI_I32), 0,
                  1/*#VTs*/, MVT::i32, 7/*#Ops*/, 0, 1, 2, 3, 4, 5, 6, 
              // Src: (mulhs:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
              // Dst: (V_MUL_HI_I32:i32 ?:i32:$src0, ?:i32:$src1, 0:i32)
/*25881*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 88|128,2/*344*/,  TARGET_VAL(ISD::MULHU),// ->26230
/*25886*/   OPC_RecordChild0, // #0 = $src0
/*25887*/   OPC_RecordChild1, // #1 = $src1
/*25888*/   OPC_CheckType, MVT::i32,
/*25890*/   OPC_Scope, 101, /*->25993*/ // 4 children in Scope
/*25892*/     OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*25894*/     OPC_EmitInteger, MVT::i32, 0, 
/*25897*/     OPC_EmitInteger, MVT::i32, 0, 
/*25900*/     OPC_EmitInteger, MVT::i32, 1, 
/*25903*/     OPC_EmitInteger, MVT::i32, 0, 
/*25906*/     OPC_EmitInteger, MVT::i32, 0, 
/*25909*/     OPC_EmitInteger, MVT::i32, 0, 
/*25912*/     OPC_EmitInteger, MVT::i32, 0, 
/*25915*/     OPC_EmitInteger, MVT::i32, 0, 
/*25918*/     OPC_EmitInteger, MVT::i32, 0, 
/*25921*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*25933*/     OPC_EmitInteger, MVT::i32, 0, 
/*25936*/     OPC_EmitInteger, MVT::i32, 0, 
/*25939*/     OPC_EmitInteger, MVT::i32, 0, 
/*25942*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*25954*/     OPC_EmitInteger, MVT::i32, 1, 
/*25957*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*25960*/     OPC_EmitInteger, MVT::i32, 0, 
/*25963*/     OPC_EmitInteger, MVT::i32, 0, 
/*25966*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULHI_UINT_r600), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (mulhu:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (MULHI_UINT_r600:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*25993*/   /*Scope*/ 101, /*->26095*/
/*25994*/     OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*25996*/     OPC_EmitInteger, MVT::i32, 0, 
/*25999*/     OPC_EmitInteger, MVT::i32, 0, 
/*26002*/     OPC_EmitInteger, MVT::i32, 1, 
/*26005*/     OPC_EmitInteger, MVT::i32, 0, 
/*26008*/     OPC_EmitInteger, MVT::i32, 0, 
/*26011*/     OPC_EmitInteger, MVT::i32, 0, 
/*26014*/     OPC_EmitInteger, MVT::i32, 0, 
/*26017*/     OPC_EmitInteger, MVT::i32, 0, 
/*26020*/     OPC_EmitInteger, MVT::i32, 0, 
/*26023*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*26035*/     OPC_EmitInteger, MVT::i32, 0, 
/*26038*/     OPC_EmitInteger, MVT::i32, 0, 
/*26041*/     OPC_EmitInteger, MVT::i32, 0, 
/*26044*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*26056*/     OPC_EmitInteger, MVT::i32, 1, 
/*26059*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*26062*/     OPC_EmitInteger, MVT::i32, 0, 
/*26065*/     OPC_EmitInteger, MVT::i32, 0, 
/*26068*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULHI_UINT_eg), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (mulhu:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (MULHI_UINT_eg:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*26095*/   /*Scope*/ 101, /*->26197*/
/*26096*/     OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*26098*/     OPC_EmitInteger, MVT::i32, 0, 
/*26101*/     OPC_EmitInteger, MVT::i32, 0, 
/*26104*/     OPC_EmitInteger, MVT::i32, 1, 
/*26107*/     OPC_EmitInteger, MVT::i32, 0, 
/*26110*/     OPC_EmitInteger, MVT::i32, 0, 
/*26113*/     OPC_EmitInteger, MVT::i32, 0, 
/*26116*/     OPC_EmitInteger, MVT::i32, 0, 
/*26119*/     OPC_EmitInteger, MVT::i32, 0, 
/*26122*/     OPC_EmitInteger, MVT::i32, 0, 
/*26125*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*26137*/     OPC_EmitInteger, MVT::i32, 0, 
/*26140*/     OPC_EmitInteger, MVT::i32, 0, 
/*26143*/     OPC_EmitInteger, MVT::i32, 0, 
/*26146*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*26158*/     OPC_EmitInteger, MVT::i32, 1, 
/*26161*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*26164*/     OPC_EmitInteger, MVT::i32, 0, 
/*26167*/     OPC_EmitInteger, MVT::i32, 0, 
/*26170*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULHI_UINT_cm), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (mulhu:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (MULHI_UINT_cm:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*26197*/   /*Scope*/ 31, /*->26229*/
/*26198*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*26200*/     OPC_EmitInteger, MVT::i32, 0, 
/*26203*/     OPC_EmitInteger, MVT::i32, 0, 
/*26206*/     OPC_EmitInteger, MVT::i32, 0, 
/*26209*/     OPC_EmitInteger, MVT::i32, 0, 
/*26212*/     OPC_EmitInteger, MVT::i32, 0, 
/*26215*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MUL_HI_U32), 0,
                  1/*#VTs*/, MVT::i32, 7/*#Ops*/, 0, 1, 2, 3, 4, 5, 6, 
              // Src: (mulhu:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
              // Dst: (V_MUL_HI_U32:i32 ?:i32:$src0, ?:i32:$src1, 0:i32)
/*26229*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 113|128,3/*497*/,  TARGET_VAL(AMDGPUISD::URECIP),// ->26731
/*26234*/   OPC_RecordChild0, // #0 = $src0
/*26235*/   OPC_CheckType, MVT::i32,
/*26237*/   OPC_Scope, 67, /*->26306*/ // 4 children in Scope
/*26239*/     OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*26241*/     OPC_EmitInteger, MVT::i32, 1, 
/*26244*/     OPC_EmitInteger, MVT::i32, 0, 
/*26247*/     OPC_EmitInteger, MVT::i32, 0, 
/*26250*/     OPC_EmitInteger, MVT::i32, 0, 
/*26253*/     OPC_EmitInteger, MVT::i32, 0, 
/*26256*/     OPC_EmitInteger, MVT::i32, 0, 
/*26259*/     OPC_EmitInteger, MVT::i32, 0, 
/*26262*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*26274*/     OPC_EmitInteger, MVT::i32, 1, 
/*26277*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*26280*/     OPC_EmitInteger, MVT::i32, 0, 
/*26283*/     OPC_EmitInteger, MVT::i32, 0, 
/*26286*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RECIP_UINT_r600), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (AMDGPUurecip:i32 R600_Reg32:i32:$src0) - Complexity = 3
              // Dst: (RECIP_UINT_r600:i32 R600_Reg32:i32:$src0)
/*26306*/   /*Scope*/ 67, /*->26374*/
/*26307*/     OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*26309*/     OPC_EmitInteger, MVT::i32, 1, 
/*26312*/     OPC_EmitInteger, MVT::i32, 0, 
/*26315*/     OPC_EmitInteger, MVT::i32, 0, 
/*26318*/     OPC_EmitInteger, MVT::i32, 0, 
/*26321*/     OPC_EmitInteger, MVT::i32, 0, 
/*26324*/     OPC_EmitInteger, MVT::i32, 0, 
/*26327*/     OPC_EmitInteger, MVT::i32, 0, 
/*26330*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*26342*/     OPC_EmitInteger, MVT::i32, 1, 
/*26345*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*26348*/     OPC_EmitInteger, MVT::i32, 0, 
/*26351*/     OPC_EmitInteger, MVT::i32, 0, 
/*26354*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RECIP_UINT_eg), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (AMDGPUurecip:i32 R600_Reg32:i32:$src0) - Complexity = 3
              // Dst: (RECIP_UINT_eg:i32 R600_Reg32:i32:$src0)
/*26374*/   /*Scope*/ 42, /*->26417*/
/*26375*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*26377*/     OPC_EmitInteger, MVT::i32, 0|128,0|128,0|128,124|128,4/*1333788672*/, 
/*26384*/     OPC_EmitNode, TARGET_VAL(AMDGPU::V_CVT_F32_U32_e32), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0,  // Results = #2
/*26392*/     OPC_EmitNode, TARGET_VAL(AMDGPU::V_RCP_IFLAG_F32_e32), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*26400*/     OPC_EmitNode, TARGET_VAL(AMDGPU::V_MUL_F32_e32), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3,  // Results = #4
/*26409*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CVT_U32_F32_e32), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 4, 
              // Src: (AMDGPUurecip:i32 i32:i32:$src0) - Complexity = 3
              // Dst: (V_CVT_U32_F32_e32:i32 (V_MUL_F32_e32:i32 1333788672:i32, (V_RCP_IFLAG_F32_e32:i32 (V_CVT_F32_U32_e32:i32 ?:i32:$src0))))
/*26417*/   /*Scope*/ 55|128,2/*311*/, /*->26730*/
/*26419*/     OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*26421*/     OPC_EmitInteger, MVT::i32, 1, 
/*26424*/     OPC_EmitInteger, MVT::i32, 0, 
/*26427*/     OPC_EmitInteger, MVT::i32, 0, 
/*26430*/     OPC_EmitInteger, MVT::i32, 0, 
/*26433*/     OPC_EmitInteger, MVT::i32, 0, 
/*26436*/     OPC_EmitInteger, MVT::i32, 0, 
/*26439*/     OPC_EmitInteger, MVT::i32, 1, 
/*26442*/     OPC_EmitInteger, MVT::i32, 0, 
/*26445*/     OPC_EmitInteger, MVT::i32, 0, 
/*26448*/     OPC_EmitInteger, MVT::i32, 0, 
/*26451*/     OPC_EmitInteger, MVT::i32, 1, 
/*26454*/     OPC_EmitInteger, MVT::i32, 0, 
/*26457*/     OPC_EmitInteger, MVT::i32, 0, 
/*26460*/     OPC_EmitInteger, MVT::i32, 0, 
/*26463*/     OPC_EmitInteger, MVT::i32, 1, 
/*26466*/     OPC_EmitInteger, MVT::i32, 0, 
/*26469*/     OPC_EmitInteger, MVT::i32, 0, 
/*26472*/     OPC_EmitInteger, MVT::i32, 0, 
/*26475*/     OPC_EmitInteger, MVT::i32, 0, 
/*26478*/     OPC_EmitInteger, MVT::i32, 0, 
/*26481*/     OPC_EmitInteger, MVT::i32, 0, 
/*26484*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*26496*/     OPC_EmitInteger, MVT::i32, 1, 
/*26499*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*26502*/     OPC_EmitInteger, MVT::i32, 0, 
/*26505*/     OPC_EmitInteger, MVT::i32, 0, 
/*26508*/     OPC_EmitNode, TARGET_VAL(AMDGPU::UINT_TO_FLT_eg), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 15, 16, 17, 18, 0, 19, 20, 21, 22, 23, 24, 25, 26,  // Results = #27
/*26528*/     OPC_EmitInteger, MVT::i32, 0, 
/*26531*/     OPC_EmitInteger, MVT::i32, 0, 
/*26534*/     OPC_EmitInteger, MVT::i32, 0, 
/*26537*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*26549*/     OPC_EmitInteger, MVT::i32, 1, 
/*26552*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*26555*/     OPC_EmitInteger, MVT::i32, 0, 
/*26558*/     OPC_EmitInteger, MVT::i32, 0, 
/*26561*/     OPC_EmitNode, TARGET_VAL(AMDGPU::RECIP_IEEE_cm), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 11, 12, 13, 14, 27, 28, 29, 30, 31, 32, 33, 34, 35,  // Results = #36
/*26581*/     OPC_EmitInteger, MVT::i32, 0, 
/*26584*/     OPC_EmitInteger, MVT::i32, 0, 
/*26587*/     OPC_EmitInteger, MVT::i32, 0, 
/*26590*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*26602*/     OPC_EmitInteger, MVT::i32, 0|128,0|128,0|128,124|128,4/*1333788672*/, 
/*26609*/     OPC_EmitNode, TARGET_VAL(AMDGPU::MOV_IMM_I32), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 41,  // Results = #42
/*26617*/     OPC_EmitInteger, MVT::i32, 0, 
/*26620*/     OPC_EmitInteger, MVT::i32, 0, 
/*26623*/     OPC_EmitInteger, MVT::i32, 0, 
/*26626*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*26638*/     OPC_EmitInteger, MVT::i32, 1, 
/*26641*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*26644*/     OPC_EmitInteger, MVT::i32, 0, 
/*26647*/     OPC_EmitInteger, MVT::i32, 0, 
/*26650*/     OPC_EmitNode, TARGET_VAL(AMDGPU::MUL_IEEE), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 36, 37, 38, 39, 40, 42, 43, 44, 45, 46, 47, 48, 49, 50,  // Results = #51
/*26677*/     OPC_EmitInteger, MVT::i32, 0, 
/*26680*/     OPC_EmitInteger, MVT::i32, 0, 
/*26683*/     OPC_EmitInteger, MVT::i32, 0, 
/*26686*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*26698*/     OPC_EmitInteger, MVT::i32, 1, 
/*26701*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*26704*/     OPC_EmitInteger, MVT::i32, 0, 
/*26707*/     OPC_EmitInteger, MVT::i32, 0, 
/*26710*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::FLT_TO_UINT_eg), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 51, 52, 53, 54, 55, 56, 57, 58, 59, 
              // Src: (AMDGPUurecip:i32 i32:i32:$src0) - Complexity = 3
              // Dst: (FLT_TO_UINT_eg:i32 (MUL_IEEE:i32 (RECIP_IEEE_cm:i32 (UINT_TO_FLT_eg:i32 ?:i32:$src0)), (MOV_IMM_I32:i32 1333788672:i32)))
/*26730*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 9|128,1/*137*/,  TARGET_VAL(ISD::ROTR),// ->26872
/*26735*/   OPC_RecordChild0, // #0 = $src0
/*26736*/   OPC_RecordChild1, // #1 = $src1
/*26737*/   OPC_CheckChild1Type, MVT::i32,
/*26739*/   OPC_CheckType, MVT::i32,
/*26741*/   OPC_Scope, 99, /*->26842*/ // 2 children in Scope
/*26743*/     OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*26745*/     OPC_EmitInteger, MVT::i32, 0, 
/*26748*/     OPC_EmitInteger, MVT::i32, 0, 
/*26751*/     OPC_EmitInteger, MVT::i32, 0, 
/*26754*/     OPC_EmitInteger, MVT::i32, 0, 
/*26757*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*26769*/     OPC_EmitInteger, MVT::i32, 0, 
/*26772*/     OPC_EmitInteger, MVT::i32, 0, 
/*26775*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*26787*/     OPC_EmitInteger, MVT::i32, 0, 
/*26790*/     OPC_EmitInteger, MVT::i32, 0, 
/*26793*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*26805*/     OPC_EmitInteger, MVT::i32, 1, 
/*26808*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*26811*/     OPC_EmitInteger, MVT::i32, 0, 
/*26814*/     OPC_EmitInteger, MVT::i32, 0, 
/*26817*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BIT_ALIGN_INT_eg), 0,
                  1/*#VTs*/, MVT::i32, 18/*#Ops*/, 2, 3, 0, 4, 5, 6, 0, 7, 8, 9, 1, 10, 11, 12, 13, 14, 15, 16, 
              // Src: (rotr:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
              // Dst: (BIT_ALIGN_INT_eg:i32 ?:i32:$src0, ?:i32:$src0, ?:i32:$src1)
/*26842*/   /*Scope*/ 28, /*->26871*/
/*26843*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*26845*/     OPC_EmitInteger, MVT::i32, 0, 
/*26848*/     OPC_EmitInteger, MVT::i32, 0, 
/*26851*/     OPC_EmitInteger, MVT::i32, 0, 
/*26854*/     OPC_EmitInteger, MVT::i32, 0, 
/*26857*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_ALIGNBIT_B32), 0,
                  1/*#VTs*/, MVT::i32, 7/*#Ops*/, 0, 0, 1, 2, 3, 4, 5, 
              // Src: (rotr:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
              // Dst: (V_ALIGNBIT_B32:i32 ?:i32:$src0, ?:i32:$src0, ?:i32:$src1)
/*26871*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 96|128,5/*736*/,  TARGET_VAL(ISD::SETCC),// ->27612
/*26876*/   OPC_RecordChild0, // #0 = $src0
/*26877*/   OPC_Scope, 55|128,2/*311*/, /*->27191*/ // 3 children in Scope
/*26880*/     OPC_CheckChild0Type, MVT::f32,
/*26882*/     OPC_RecordChild1, // #1 = $src1
/*26883*/     OPC_MoveChild, 2,
/*26885*/     OPC_Scope, 108|128,1/*236*/, /*->27124*/ // 3 children in Scope
/*26888*/       OPC_CheckOpcode, TARGET_VAL(ISD::CONDCODE),
/*26891*/       OPC_Scope, 32, /*->26925*/ // 7 children in Scope
/*26893*/         OPC_CheckPredicate, 6, // Predicate_COND_LT
/*26895*/         OPC_MoveParent,
/*26896*/         OPC_CheckType, MVT::i1,
/*26898*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*26900*/         OPC_EmitInteger, MVT::i32, 0, 
/*26903*/         OPC_EmitInteger, MVT::i32, 0, 
/*26906*/         OPC_EmitInteger, MVT::i32, 0, 
/*26909*/         OPC_EmitInteger, MVT::i32, 0, 
/*26912*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_LT_F32_e64), 0,
                      1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                  // Src: (setcc:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1, (cond:Other)<<P:Predicate_COND_LT>>) - Complexity = 3
                  // Dst: (V_CMP_LT_F32_e64:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1)
/*26925*/       /*Scope*/ 32, /*->26958*/
/*26926*/         OPC_CheckPredicate, 2, // Predicate_COND_EQ
/*26928*/         OPC_MoveParent,
/*26929*/         OPC_CheckType, MVT::i1,
/*26931*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*26933*/         OPC_EmitInteger, MVT::i32, 0, 
/*26936*/         OPC_EmitInteger, MVT::i32, 0, 
/*26939*/         OPC_EmitInteger, MVT::i32, 0, 
/*26942*/         OPC_EmitInteger, MVT::i32, 0, 
/*26945*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_EQ_F32_e64), 0,
                      1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                  // Src: (setcc:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1, (cond:Other)<<P:Predicate_COND_EQ>>) - Complexity = 3
                  // Dst: (V_CMP_EQ_F32_e64:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1)
/*26958*/       /*Scope*/ 32, /*->26991*/
/*26959*/         OPC_CheckPredicate, 7, // Predicate_COND_LE
/*26961*/         OPC_MoveParent,
/*26962*/         OPC_CheckType, MVT::i1,
/*26964*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*26966*/         OPC_EmitInteger, MVT::i32, 0, 
/*26969*/         OPC_EmitInteger, MVT::i32, 0, 
/*26972*/         OPC_EmitInteger, MVT::i32, 0, 
/*26975*/         OPC_EmitInteger, MVT::i32, 0, 
/*26978*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_LE_F32_e64), 0,
                      1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                  // Src: (setcc:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1, (cond:Other)<<P:Predicate_COND_LE>>) - Complexity = 3
                  // Dst: (V_CMP_LE_F32_e64:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1)
/*26991*/       /*Scope*/ 32, /*->27024*/
/*26992*/         OPC_CheckPredicate, 3, // Predicate_COND_GT
/*26994*/         OPC_MoveParent,
/*26995*/         OPC_CheckType, MVT::i1,
/*26997*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*26999*/         OPC_EmitInteger, MVT::i32, 0, 
/*27002*/         OPC_EmitInteger, MVT::i32, 0, 
/*27005*/         OPC_EmitInteger, MVT::i32, 0, 
/*27008*/         OPC_EmitInteger, MVT::i32, 0, 
/*27011*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_GT_F32_e64), 0,
                      1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                  // Src: (setcc:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1, (cond:Other)<<P:Predicate_COND_GT>>) - Complexity = 3
                  // Dst: (V_CMP_GT_F32_e64:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1)
/*27024*/       /*Scope*/ 32, /*->27057*/
/*27025*/         OPC_CheckPredicate, 5, // Predicate_COND_NE
/*27027*/         OPC_MoveParent,
/*27028*/         OPC_CheckType, MVT::i1,
/*27030*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*27032*/         OPC_EmitInteger, MVT::i32, 0, 
/*27035*/         OPC_EmitInteger, MVT::i32, 0, 
/*27038*/         OPC_EmitInteger, MVT::i32, 0, 
/*27041*/         OPC_EmitInteger, MVT::i32, 0, 
/*27044*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_LG_F32_e64), 0,
                      1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                  // Src: (setcc:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1, (cond:Other)<<P:Predicate_COND_NE>>) - Complexity = 3
                  // Dst: (V_CMP_LG_F32_e64:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1)
/*27057*/       /*Scope*/ 32, /*->27090*/
/*27058*/         OPC_CheckPredicate, 4, // Predicate_COND_GE
/*27060*/         OPC_MoveParent,
/*27061*/         OPC_CheckType, MVT::i1,
/*27063*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*27065*/         OPC_EmitInteger, MVT::i32, 0, 
/*27068*/         OPC_EmitInteger, MVT::i32, 0, 
/*27071*/         OPC_EmitInteger, MVT::i32, 0, 
/*27074*/         OPC_EmitInteger, MVT::i32, 0, 
/*27077*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_GE_F32_e64), 0,
                      1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                  // Src: (setcc:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1, (cond:Other)<<P:Predicate_COND_GE>>) - Complexity = 3
                  // Dst: (V_CMP_GE_F32_e64:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1)
/*27090*/       /*Scope*/ 32, /*->27123*/
/*27091*/         OPC_CheckPredicate, 5, // Predicate_COND_NE
/*27093*/         OPC_MoveParent,
/*27094*/         OPC_CheckType, MVT::i1,
/*27096*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*27098*/         OPC_EmitInteger, MVT::i32, 0, 
/*27101*/         OPC_EmitInteger, MVT::i32, 0, 
/*27104*/         OPC_EmitInteger, MVT::i32, 0, 
/*27107*/         OPC_EmitInteger, MVT::i32, 0, 
/*27110*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_NEQ_F32_e64), 0,
                      1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                  // Src: (setcc:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1, (cond:Other)<<P:Predicate_COND_NE>>) - Complexity = 3
                  // Dst: (V_CMP_NEQ_F32_e64:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1)
/*27123*/       0, /*End of Scope*/
/*27124*/     /*Scope*/ 32, /*->27157*/
/*27125*/       OPC_CheckCondCode, ISD::SETO,
/*27127*/       OPC_MoveParent,
/*27128*/       OPC_CheckType, MVT::i1,
/*27130*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*27132*/       OPC_EmitInteger, MVT::i32, 0, 
/*27135*/       OPC_EmitInteger, MVT::i32, 0, 
/*27138*/       OPC_EmitInteger, MVT::i32, 0, 
/*27141*/       OPC_EmitInteger, MVT::i32, 0, 
/*27144*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_O_F32_e64), 0,
                    1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (setcc:i1 f32:f32:$src0, f32:f32:$src1, SETO:Other) - Complexity = 3
                // Dst: (V_CMP_O_F32_e64:i1 ?:f32:$src0, ?:f32:$src1)
/*27157*/     /*Scope*/ 32, /*->27190*/
/*27158*/       OPC_CheckCondCode, ISD::SETUO,
/*27160*/       OPC_MoveParent,
/*27161*/       OPC_CheckType, MVT::i1,
/*27163*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*27165*/       OPC_EmitInteger, MVT::i32, 0, 
/*27168*/       OPC_EmitInteger, MVT::i32, 0, 
/*27171*/       OPC_EmitInteger, MVT::i32, 0, 
/*27174*/       OPC_EmitInteger, MVT::i32, 0, 
/*27177*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_U_F32_e64), 0,
                    1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (setcc:i1 f32:f32:$src0, f32:f32:$src1, SETUO:Other) - Complexity = 3
                // Dst: (V_CMP_U_F32_e64:i1 ?:f32:$src0, ?:f32:$src1)
/*27190*/     0, /*End of Scope*/
/*27191*/   /*Scope*/ 80|128,1/*208*/, /*->27401*/
/*27193*/     OPC_CheckChild0Type, MVT::f64,
/*27195*/     OPC_RecordChild1, // #1 = $src1
/*27196*/     OPC_MoveChild, 2,
/*27198*/     OPC_CheckOpcode, TARGET_VAL(ISD::CONDCODE),
/*27201*/     OPC_Scope, 32, /*->27235*/ // 6 children in Scope
/*27203*/       OPC_CheckPredicate, 6, // Predicate_COND_LT
/*27205*/       OPC_MoveParent,
/*27206*/       OPC_CheckType, MVT::i1,
/*27208*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*27210*/       OPC_EmitInteger, MVT::i32, 0, 
/*27213*/       OPC_EmitInteger, MVT::i32, 0, 
/*27216*/       OPC_EmitInteger, MVT::i32, 0, 
/*27219*/       OPC_EmitInteger, MVT::i32, 0, 
/*27222*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_LT_F64_e64), 0,
                    1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (setcc:i1 VSrc_64:f64:$src0, VSrc_64:f64:$src1, (cond:Other)<<P:Predicate_COND_LT>>) - Complexity = 3
                // Dst: (V_CMP_LT_F64_e64:i1 VSrc_64:f64:$src0, VSrc_64:f64:$src1)
/*27235*/     /*Scope*/ 32, /*->27268*/
/*27236*/       OPC_CheckPredicate, 2, // Predicate_COND_EQ
/*27238*/       OPC_MoveParent,
/*27239*/       OPC_CheckType, MVT::i1,
/*27241*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*27243*/       OPC_EmitInteger, MVT::i32, 0, 
/*27246*/       OPC_EmitInteger, MVT::i32, 0, 
/*27249*/       OPC_EmitInteger, MVT::i32, 0, 
/*27252*/       OPC_EmitInteger, MVT::i32, 0, 
/*27255*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_EQ_F64_e64), 0,
                    1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (setcc:i1 VSrc_64:f64:$src0, VSrc_64:f64:$src1, (cond:Other)<<P:Predicate_COND_EQ>>) - Complexity = 3
                // Dst: (V_CMP_EQ_F64_e64:i1 VSrc_64:f64:$src0, VSrc_64:f64:$src1)
/*27268*/     /*Scope*/ 32, /*->27301*/
/*27269*/       OPC_CheckPredicate, 7, // Predicate_COND_LE
/*27271*/       OPC_MoveParent,
/*27272*/       OPC_CheckType, MVT::i1,
/*27274*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*27276*/       OPC_EmitInteger, MVT::i32, 0, 
/*27279*/       OPC_EmitInteger, MVT::i32, 0, 
/*27282*/       OPC_EmitInteger, MVT::i32, 0, 
/*27285*/       OPC_EmitInteger, MVT::i32, 0, 
/*27288*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_LE_F64_e64), 0,
                    1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (setcc:i1 VSrc_64:f64:$src0, VSrc_64:f64:$src1, (cond:Other)<<P:Predicate_COND_LE>>) - Complexity = 3
                // Dst: (V_CMP_LE_F64_e64:i1 VSrc_64:f64:$src0, VSrc_64:f64:$src1)
/*27301*/     /*Scope*/ 32, /*->27334*/
/*27302*/       OPC_CheckPredicate, 3, // Predicate_COND_GT
/*27304*/       OPC_MoveParent,
/*27305*/       OPC_CheckType, MVT::i1,
/*27307*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*27309*/       OPC_EmitInteger, MVT::i32, 0, 
/*27312*/       OPC_EmitInteger, MVT::i32, 0, 
/*27315*/       OPC_EmitInteger, MVT::i32, 0, 
/*27318*/       OPC_EmitInteger, MVT::i32, 0, 
/*27321*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_GT_F64_e64), 0,
                    1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (setcc:i1 VSrc_64:f64:$src0, VSrc_64:f64:$src1, (cond:Other)<<P:Predicate_COND_GT>>) - Complexity = 3
                // Dst: (V_CMP_GT_F64_e64:i1 VSrc_64:f64:$src0, VSrc_64:f64:$src1)
/*27334*/     /*Scope*/ 32, /*->27367*/
/*27335*/       OPC_CheckPredicate, 4, // Predicate_COND_GE
/*27337*/       OPC_MoveParent,
/*27338*/       OPC_CheckType, MVT::i1,
/*27340*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*27342*/       OPC_EmitInteger, MVT::i32, 0, 
/*27345*/       OPC_EmitInteger, MVT::i32, 0, 
/*27348*/       OPC_EmitInteger, MVT::i32, 0, 
/*27351*/       OPC_EmitInteger, MVT::i32, 0, 
/*27354*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_GE_F64_e64), 0,
                    1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (setcc:i1 VSrc_64:f64:$src0, VSrc_64:f64:$src1, (cond:Other)<<P:Predicate_COND_GE>>) - Complexity = 3
                // Dst: (V_CMP_GE_F64_e64:i1 VSrc_64:f64:$src0, VSrc_64:f64:$src1)
/*27367*/     /*Scope*/ 32, /*->27400*/
/*27368*/       OPC_CheckPredicate, 5, // Predicate_COND_NE
/*27370*/       OPC_MoveParent,
/*27371*/       OPC_CheckType, MVT::i1,
/*27373*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*27375*/       OPC_EmitInteger, MVT::i32, 0, 
/*27378*/       OPC_EmitInteger, MVT::i32, 0, 
/*27381*/       OPC_EmitInteger, MVT::i32, 0, 
/*27384*/       OPC_EmitInteger, MVT::i32, 0, 
/*27387*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_NEQ_F64_e64), 0,
                    1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (setcc:i1 VSrc_64:f64:$src0, VSrc_64:f64:$src1, (cond:Other)<<P:Predicate_COND_NE>>) - Complexity = 3
                // Dst: (V_CMP_NEQ_F64_e64:i1 VSrc_64:f64:$src0, VSrc_64:f64:$src1)
/*27400*/     0, /*End of Scope*/
/*27401*/   /*Scope*/ 80|128,1/*208*/, /*->27611*/
/*27403*/     OPC_CheckChild0Type, MVT::i32,
/*27405*/     OPC_RecordChild1, // #1 = $src1
/*27406*/     OPC_MoveChild, 2,
/*27408*/     OPC_CheckOpcode, TARGET_VAL(ISD::CONDCODE),
/*27411*/     OPC_Scope, 32, /*->27445*/ // 6 children in Scope
/*27413*/       OPC_CheckPredicate, 6, // Predicate_COND_LT
/*27415*/       OPC_MoveParent,
/*27416*/       OPC_CheckType, MVT::i1,
/*27418*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*27420*/       OPC_EmitInteger, MVT::i32, 0, 
/*27423*/       OPC_EmitInteger, MVT::i32, 0, 
/*27426*/       OPC_EmitInteger, MVT::i32, 0, 
/*27429*/       OPC_EmitInteger, MVT::i32, 0, 
/*27432*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_LT_I32_e64), 0,
                    1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (setcc:i1 VSrc_32:i32:$src0, VSrc_32:i32:$src1, (cond:Other)<<P:Predicate_COND_LT>>) - Complexity = 3
                // Dst: (V_CMP_LT_I32_e64:i1 VSrc_32:i32:$src0, VSrc_32:i32:$src1)
/*27445*/     /*Scope*/ 32, /*->27478*/
/*27446*/       OPC_CheckPredicate, 2, // Predicate_COND_EQ
/*27448*/       OPC_MoveParent,
/*27449*/       OPC_CheckType, MVT::i1,
/*27451*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*27453*/       OPC_EmitInteger, MVT::i32, 0, 
/*27456*/       OPC_EmitInteger, MVT::i32, 0, 
/*27459*/       OPC_EmitInteger, MVT::i32, 0, 
/*27462*/       OPC_EmitInteger, MVT::i32, 0, 
/*27465*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_EQ_I32_e64), 0,
                    1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (setcc:i1 VSrc_32:i32:$src0, VSrc_32:i32:$src1, (cond:Other)<<P:Predicate_COND_EQ>>) - Complexity = 3
                // Dst: (V_CMP_EQ_I32_e64:i1 VSrc_32:i32:$src0, VSrc_32:i32:$src1)
/*27478*/     /*Scope*/ 32, /*->27511*/
/*27479*/       OPC_CheckPredicate, 7, // Predicate_COND_LE
/*27481*/       OPC_MoveParent,
/*27482*/       OPC_CheckType, MVT::i1,
/*27484*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*27486*/       OPC_EmitInteger, MVT::i32, 0, 
/*27489*/       OPC_EmitInteger, MVT::i32, 0, 
/*27492*/       OPC_EmitInteger, MVT::i32, 0, 
/*27495*/       OPC_EmitInteger, MVT::i32, 0, 
/*27498*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_LE_I32_e64), 0,
                    1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (setcc:i1 VSrc_32:i32:$src0, VSrc_32:i32:$src1, (cond:Other)<<P:Predicate_COND_LE>>) - Complexity = 3
                // Dst: (V_CMP_LE_I32_e64:i1 VSrc_32:i32:$src0, VSrc_32:i32:$src1)
/*27511*/     /*Scope*/ 32, /*->27544*/
/*27512*/       OPC_CheckPredicate, 3, // Predicate_COND_GT
/*27514*/       OPC_MoveParent,
/*27515*/       OPC_CheckType, MVT::i1,
/*27517*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*27519*/       OPC_EmitInteger, MVT::i32, 0, 
/*27522*/       OPC_EmitInteger, MVT::i32, 0, 
/*27525*/       OPC_EmitInteger, MVT::i32, 0, 
/*27528*/       OPC_EmitInteger, MVT::i32, 0, 
/*27531*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_GT_I32_e64), 0,
                    1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (setcc:i1 VSrc_32:i32:$src0, VSrc_32:i32:$src1, (cond:Other)<<P:Predicate_COND_GT>>) - Complexity = 3
                // Dst: (V_CMP_GT_I32_e64:i1 VSrc_32:i32:$src0, VSrc_32:i32:$src1)
/*27544*/     /*Scope*/ 32, /*->27577*/
/*27545*/       OPC_CheckPredicate, 5, // Predicate_COND_NE
/*27547*/       OPC_MoveParent,
/*27548*/       OPC_CheckType, MVT::i1,
/*27550*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*27552*/       OPC_EmitInteger, MVT::i32, 0, 
/*27555*/       OPC_EmitInteger, MVT::i32, 0, 
/*27558*/       OPC_EmitInteger, MVT::i32, 0, 
/*27561*/       OPC_EmitInteger, MVT::i32, 0, 
/*27564*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_NE_I32_e64), 0,
                    1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (setcc:i1 VSrc_32:i32:$src0, VSrc_32:i32:$src1, (cond:Other)<<P:Predicate_COND_NE>>) - Complexity = 3
                // Dst: (V_CMP_NE_I32_e64:i1 VSrc_32:i32:$src0, VSrc_32:i32:$src1)
/*27577*/     /*Scope*/ 32, /*->27610*/
/*27578*/       OPC_CheckPredicate, 4, // Predicate_COND_GE
/*27580*/       OPC_MoveParent,
/*27581*/       OPC_CheckType, MVT::i1,
/*27583*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*27585*/       OPC_EmitInteger, MVT::i32, 0, 
/*27588*/       OPC_EmitInteger, MVT::i32, 0, 
/*27591*/       OPC_EmitInteger, MVT::i32, 0, 
/*27594*/       OPC_EmitInteger, MVT::i32, 0, 
/*27597*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_GE_I32_e64), 0,
                    1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (setcc:i1 VSrc_32:i32:$src0, VSrc_32:i32:$src1, (cond:Other)<<P:Predicate_COND_GE>>) - Complexity = 3
                // Dst: (V_CMP_GE_I32_e64:i1 VSrc_32:i32:$src0, VSrc_32:i32:$src1)
/*27610*/     0, /*End of Scope*/
/*27611*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 77|128,1/*205*/,  TARGET_VAL(ISD::SELECT),// ->27821
/*27616*/   OPC_RecordChild0, // #0 = $src2
/*27617*/   OPC_CheckChild0Type, MVT::i1,
/*27619*/   OPC_RecordChild1, // #1 = $src1
/*27620*/   OPC_RecordChild2, // #2 = $src0
/*27621*/   OPC_SwitchType /*3 cases */, 28,  MVT::i32,// ->27652
/*27624*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*27626*/     OPC_EmitInteger, MVT::i32, 0, 
/*27629*/     OPC_EmitInteger, MVT::i32, 0, 
/*27632*/     OPC_EmitInteger, MVT::i32, 0, 
/*27635*/     OPC_EmitInteger, MVT::i32, 0, 
/*27638*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CNDMASK_B32_e64), 0,
                  1/*#VTs*/, MVT::i32, 7/*#Ops*/, 2, 1, 0, 3, 4, 5, 6, 
              // Src: (select:i32 i1:i1:$src2, i32:i32:$src1, i32:i32:$src0) - Complexity = 3
              // Dst: (V_CNDMASK_B32_e64:i32 i32:i32:$src0, i32:i32:$src1, i1:i1:$src2)
            /*SwitchType*/ 28,  MVT::f32,// ->27682
/*27654*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*27656*/     OPC_EmitInteger, MVT::i32, 0, 
/*27659*/     OPC_EmitInteger, MVT::i32, 0, 
/*27662*/     OPC_EmitInteger, MVT::i32, 0, 
/*27665*/     OPC_EmitInteger, MVT::i32, 0, 
/*27668*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CNDMASK_B32_e64), 0,
                  1/*#VTs*/, MVT::f32, 7/*#Ops*/, 2, 1, 0, 3, 4, 5, 6, 
              // Src: (select:f32 i1:i1:$src2, f32:f32:$src1, f32:f32:$src0) - Complexity = 3
              // Dst: (V_CNDMASK_B32_e64:f32 ?:f32:$src0, ?:f32:$src1, ?:i1:$src2)
            /*SwitchType*/ 7|128,1/*135*/,  MVT::f64,// ->27820
/*27685*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*27687*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                  1/*#VTs*/, MVT::f64, 0/*#Ops*/,  // Results = #3
/*27694*/     OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*27697*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 4,  // Results = #5
/*27706*/     OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*27709*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 6,  // Results = #7
/*27718*/     OPC_EmitInteger, MVT::i32, 0, 
/*27721*/     OPC_EmitInteger, MVT::i32, 0, 
/*27724*/     OPC_EmitInteger, MVT::i32, 0, 
/*27727*/     OPC_EmitInteger, MVT::i32, 0, 
/*27730*/     OPC_EmitNode, TARGET_VAL(AMDGPU::V_CNDMASK_B32_e64), 0,
                  1/*#VTs*/, MVT::i32, 7/*#Ops*/, 5, 7, 0, 8, 9, 10, 11,  // Results = #12
/*27744*/     OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*27747*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                  1/*#VTs*/, MVT::f64, 3/*#Ops*/, 3, 12, 13,  // Results = #14
/*27757*/     OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*27760*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 15,  // Results = #16
/*27769*/     OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*27772*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 17,  // Results = #18
/*27781*/     OPC_EmitInteger, MVT::i32, 0, 
/*27784*/     OPC_EmitInteger, MVT::i32, 0, 
/*27787*/     OPC_EmitInteger, MVT::i32, 0, 
/*27790*/     OPC_EmitInteger, MVT::i32, 0, 
/*27793*/     OPC_EmitNode, TARGET_VAL(AMDGPU::V_CNDMASK_B32_e64), 0,
                  1/*#VTs*/, MVT::i32, 7/*#Ops*/, 16, 18, 0, 19, 20, 21, 22,  // Results = #23
/*27807*/     OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*27810*/     OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                  1/*#VTs*/, MVT::f64, 3/*#Ops*/, 14, 23, 24, 
              // Src: (select:f64 i1:i1:$src2, f64:f64:$src1, f64:f64:$src0) - Complexity = 3
              // Dst: (INSERT_SUBREG:f64 (INSERT_SUBREG:f64 (IMPLICIT_DEF:f64), (V_CNDMASK_B32_e64:i32 (EXTRACT_SUBREG:i32 ?:f64:$src0, sub0:i32), (EXTRACT_SUBREG:i32 ?:f64:$src1, sub0:i32), ?:i1:$src2), sub0:i32), (V_CNDMASK_B32_e64:i32 (EXTRACT_SUBREG:i32 ?:f64:$src0, sub1:i32), (EXTRACT_SUBREG:i32 ?:f64:$src1, sub1:i32), ?:i1:$src2), sub1:i32)
            0, // EndSwitchType
          /*SwitchOpcode*/ 48,  TARGET_VAL(ISD::SIGN_EXTEND),// ->27872
/*27824*/   OPC_RecordChild0, // #0 = $src0
/*27825*/   OPC_CheckChild0Type, MVT::i1,
/*27827*/   OPC_CheckType, MVT::i32,
/*27829*/   OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*27831*/   OPC_EmitInteger, MVT::i32, 0, 
/*27834*/   OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*27846*/   OPC_EmitInteger, MVT::i32, 0, 
/*27849*/   OPC_EmitInteger, MVT::i32, 0, 
/*27852*/   OPC_EmitInteger, MVT::i32, 0, 
/*27855*/   OPC_EmitInteger, MVT::i32, 0, 
/*27858*/   OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CNDMASK_B32_e64), 0,
                1/*#VTs*/, MVT::i32, 7/*#Ops*/, 1, 2, 0, 3, 4, 5, 6, 
            // Src: (sext:i32 i1:i1:$src0) - Complexity = 3
            // Dst: (V_CNDMASK_B32_e64:i32 0:i32, -1:i32, ?:i1:$src0)
          /*SwitchOpcode*/ 55|128,6/*823*/,  TARGET_VAL(ISD::FDIV),// ->28699
/*27876*/   OPC_Scope, 115|128,1/*243*/, /*->28122*/ // 2 children in Scope
/*27879*/     OPC_MoveChild, 0,
/*27881*/     OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/*27884*/     OPC_CheckPredicate, 8, // Predicate_FP_ONE
/*27886*/     OPC_MoveParent,
/*27887*/     OPC_RecordChild1, // #0 = $src0
/*27888*/     OPC_SwitchType /*2 cases */, 89|128,1/*217*/,  MVT::f32,// ->28109
/*27892*/       OPC_Scope, 67, /*->27961*/ // 4 children in Scope
/*27894*/         OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*27896*/         OPC_EmitInteger, MVT::i32, 1, 
/*27899*/         OPC_EmitInteger, MVT::i32, 0, 
/*27902*/         OPC_EmitInteger, MVT::i32, 0, 
/*27905*/         OPC_EmitInteger, MVT::i32, 0, 
/*27908*/         OPC_EmitInteger, MVT::i32, 0, 
/*27911*/         OPC_EmitInteger, MVT::i32, 0, 
/*27914*/         OPC_EmitInteger, MVT::i32, 0, 
/*27917*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*27929*/         OPC_EmitInteger, MVT::i32, 1, 
/*27932*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*27935*/         OPC_EmitInteger, MVT::i32, 0, 
/*27938*/         OPC_EmitInteger, MVT::i32, 0, 
/*27941*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RECIP_IEEE_r600), 0,
                      1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (fdiv:f32 (fpimm:f32)<<P:Predicate_FP_ONE>>, f32:f32:$src0) - Complexity = 7
                  // Dst: (RECIP_IEEE_r600:f32 f32:f32:$src0)
/*27961*/       /*Scope*/ 67, /*->28029*/
/*27962*/         OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*27964*/         OPC_EmitInteger, MVT::i32, 1, 
/*27967*/         OPC_EmitInteger, MVT::i32, 0, 
/*27970*/         OPC_EmitInteger, MVT::i32, 0, 
/*27973*/         OPC_EmitInteger, MVT::i32, 0, 
/*27976*/         OPC_EmitInteger, MVT::i32, 0, 
/*27979*/         OPC_EmitInteger, MVT::i32, 0, 
/*27982*/         OPC_EmitInteger, MVT::i32, 0, 
/*27985*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*27997*/         OPC_EmitInteger, MVT::i32, 1, 
/*28000*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*28003*/         OPC_EmitInteger, MVT::i32, 0, 
/*28006*/         OPC_EmitInteger, MVT::i32, 0, 
/*28009*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RECIP_IEEE_eg), 0,
                      1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (fdiv:f32 (fpimm:f32)<<P:Predicate_FP_ONE>>, f32:f32:$src0) - Complexity = 7
                  // Dst: (RECIP_IEEE_eg:f32 f32:f32:$src0)
/*28029*/       /*Scope*/ 67, /*->28097*/
/*28030*/         OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*28032*/         OPC_EmitInteger, MVT::i32, 1, 
/*28035*/         OPC_EmitInteger, MVT::i32, 0, 
/*28038*/         OPC_EmitInteger, MVT::i32, 0, 
/*28041*/         OPC_EmitInteger, MVT::i32, 0, 
/*28044*/         OPC_EmitInteger, MVT::i32, 0, 
/*28047*/         OPC_EmitInteger, MVT::i32, 0, 
/*28050*/         OPC_EmitInteger, MVT::i32, 0, 
/*28053*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28065*/         OPC_EmitInteger, MVT::i32, 1, 
/*28068*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*28071*/         OPC_EmitInteger, MVT::i32, 0, 
/*28074*/         OPC_EmitInteger, MVT::i32, 0, 
/*28077*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RECIP_IEEE_cm), 0,
                      1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (fdiv:f32 (fpimm:f32)<<P:Predicate_FP_ONE>>, f32:f32:$src0) - Complexity = 7
                  // Dst: (RECIP_IEEE_cm:f32 f32:f32:$src0)
/*28097*/       /*Scope*/ 10, /*->28108*/
/*28098*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*28100*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_RCP_F32_e32), 0,
                      1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                  // Src: (fdiv:f32 (fpimm:f32)<<P:Predicate_FP_ONE>>, f32:f32:$src0) - Complexity = 7
                  // Dst: (V_RCP_F32_e32:f32 f32:f32:$src0)
/*28108*/       0, /*End of Scope*/
              /*SwitchType*/ 10,  MVT::f64,// ->28121
/*28111*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*28113*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_RCP_F64_e32), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fdiv:f64 (fpimm:f64)<<P:Predicate_FP_ONE>>, f64:f64:$src0) - Complexity = 7
                // Dst: (V_RCP_F64_e32:f64 f64:f64:$src0)
              0, // EndSwitchType
/*28122*/   /*Scope*/ 62|128,4/*574*/, /*->28698*/
/*28124*/     OPC_RecordChild0, // #0 = $src0
/*28125*/     OPC_RecordChild1, // #1 = $src1
/*28126*/     OPC_SwitchType /*2 cases */, 14|128,4/*526*/,  MVT::f32,// ->28656
/*28130*/       OPC_Scope, 38|128,1/*166*/, /*->28299*/ // 4 children in Scope
/*28133*/         OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*28135*/         OPC_EmitInteger, MVT::i32, 0, 
/*28138*/         OPC_EmitInteger, MVT::i32, 0, 
/*28141*/         OPC_EmitInteger, MVT::i32, 1, 
/*28144*/         OPC_EmitInteger, MVT::i32, 0, 
/*28147*/         OPC_EmitInteger, MVT::i32, 0, 
/*28150*/         OPC_EmitInteger, MVT::i32, 0, 
/*28153*/         OPC_EmitInteger, MVT::i32, 0, 
/*28156*/         OPC_EmitInteger, MVT::i32, 0, 
/*28159*/         OPC_EmitInteger, MVT::i32, 0, 
/*28162*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28174*/         OPC_EmitInteger, MVT::i32, 1, 
/*28177*/         OPC_EmitInteger, MVT::i32, 0, 
/*28180*/         OPC_EmitInteger, MVT::i32, 0, 
/*28183*/         OPC_EmitInteger, MVT::i32, 0, 
/*28186*/         OPC_EmitInteger, MVT::i32, 0, 
/*28189*/         OPC_EmitInteger, MVT::i32, 0, 
/*28192*/         OPC_EmitInteger, MVT::i32, 0, 
/*28195*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28207*/         OPC_EmitInteger, MVT::i32, 1, 
/*28210*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*28213*/         OPC_EmitInteger, MVT::i32, 0, 
/*28216*/         OPC_EmitInteger, MVT::i32, 0, 
/*28219*/         OPC_EmitNode, TARGET_VAL(AMDGPU::RECIP_IEEE_r600), 0,
                      1/*#VTs*/, MVT::i32, 13/*#Ops*/, 12, 13, 14, 15, 1, 16, 17, 18, 19, 20, 21, 22, 23,  // Results = #24
/*28239*/         OPC_EmitInteger, MVT::i32, 0, 
/*28242*/         OPC_EmitInteger, MVT::i32, 0, 
/*28245*/         OPC_EmitInteger, MVT::i32, 0, 
/*28248*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28260*/         OPC_EmitInteger, MVT::i32, 1, 
/*28263*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*28266*/         OPC_EmitInteger, MVT::i32, 0, 
/*28269*/         OPC_EmitInteger, MVT::i32, 0, 
/*28272*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MUL_IEEE), 0,
                      1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 24, 25, 26, 27, 28, 29, 30, 31, 32, 
                  // Src: (fdiv:f32 f32:f32:$src0, f32:f32:$src1) - Complexity = 3
                  // Dst: (MUL_IEEE:f32 ?:f32:$src0, (RECIP_IEEE_r600:i32 ?:f32:$src1))
/*28299*/       /*Scope*/ 38|128,1/*166*/, /*->28467*/
/*28301*/         OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*28303*/         OPC_EmitInteger, MVT::i32, 0, 
/*28306*/         OPC_EmitInteger, MVT::i32, 0, 
/*28309*/         OPC_EmitInteger, MVT::i32, 1, 
/*28312*/         OPC_EmitInteger, MVT::i32, 0, 
/*28315*/         OPC_EmitInteger, MVT::i32, 0, 
/*28318*/         OPC_EmitInteger, MVT::i32, 0, 
/*28321*/         OPC_EmitInteger, MVT::i32, 0, 
/*28324*/         OPC_EmitInteger, MVT::i32, 0, 
/*28327*/         OPC_EmitInteger, MVT::i32, 0, 
/*28330*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28342*/         OPC_EmitInteger, MVT::i32, 1, 
/*28345*/         OPC_EmitInteger, MVT::i32, 0, 
/*28348*/         OPC_EmitInteger, MVT::i32, 0, 
/*28351*/         OPC_EmitInteger, MVT::i32, 0, 
/*28354*/         OPC_EmitInteger, MVT::i32, 0, 
/*28357*/         OPC_EmitInteger, MVT::i32, 0, 
/*28360*/         OPC_EmitInteger, MVT::i32, 0, 
/*28363*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28375*/         OPC_EmitInteger, MVT::i32, 1, 
/*28378*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*28381*/         OPC_EmitInteger, MVT::i32, 0, 
/*28384*/         OPC_EmitInteger, MVT::i32, 0, 
/*28387*/         OPC_EmitNode, TARGET_VAL(AMDGPU::RECIP_IEEE_eg), 0,
                      1/*#VTs*/, MVT::i32, 13/*#Ops*/, 12, 13, 14, 15, 1, 16, 17, 18, 19, 20, 21, 22, 23,  // Results = #24
/*28407*/         OPC_EmitInteger, MVT::i32, 0, 
/*28410*/         OPC_EmitInteger, MVT::i32, 0, 
/*28413*/         OPC_EmitInteger, MVT::i32, 0, 
/*28416*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28428*/         OPC_EmitInteger, MVT::i32, 1, 
/*28431*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*28434*/         OPC_EmitInteger, MVT::i32, 0, 
/*28437*/         OPC_EmitInteger, MVT::i32, 0, 
/*28440*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MUL_IEEE), 0,
                      1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 24, 25, 26, 27, 28, 29, 30, 31, 32, 
                  // Src: (fdiv:f32 f32:f32:$src0, f32:f32:$src1) - Complexity = 3
                  // Dst: (MUL_IEEE:f32 ?:f32:$src0, (RECIP_IEEE_eg:i32 ?:f32:$src1))
/*28467*/       /*Scope*/ 38|128,1/*166*/, /*->28635*/
/*28469*/         OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*28471*/         OPC_EmitInteger, MVT::i32, 0, 
/*28474*/         OPC_EmitInteger, MVT::i32, 0, 
/*28477*/         OPC_EmitInteger, MVT::i32, 1, 
/*28480*/         OPC_EmitInteger, MVT::i32, 0, 
/*28483*/         OPC_EmitInteger, MVT::i32, 0, 
/*28486*/         OPC_EmitInteger, MVT::i32, 0, 
/*28489*/         OPC_EmitInteger, MVT::i32, 0, 
/*28492*/         OPC_EmitInteger, MVT::i32, 0, 
/*28495*/         OPC_EmitInteger, MVT::i32, 0, 
/*28498*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28510*/         OPC_EmitInteger, MVT::i32, 1, 
/*28513*/         OPC_EmitInteger, MVT::i32, 0, 
/*28516*/         OPC_EmitInteger, MVT::i32, 0, 
/*28519*/         OPC_EmitInteger, MVT::i32, 0, 
/*28522*/         OPC_EmitInteger, MVT::i32, 0, 
/*28525*/         OPC_EmitInteger, MVT::i32, 0, 
/*28528*/         OPC_EmitInteger, MVT::i32, 0, 
/*28531*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28543*/         OPC_EmitInteger, MVT::i32, 1, 
/*28546*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*28549*/         OPC_EmitInteger, MVT::i32, 0, 
/*28552*/         OPC_EmitInteger, MVT::i32, 0, 
/*28555*/         OPC_EmitNode, TARGET_VAL(AMDGPU::RECIP_IEEE_cm), 0,
                      1/*#VTs*/, MVT::i32, 13/*#Ops*/, 12, 13, 14, 15, 1, 16, 17, 18, 19, 20, 21, 22, 23,  // Results = #24
/*28575*/         OPC_EmitInteger, MVT::i32, 0, 
/*28578*/         OPC_EmitInteger, MVT::i32, 0, 
/*28581*/         OPC_EmitInteger, MVT::i32, 0, 
/*28584*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28596*/         OPC_EmitInteger, MVT::i32, 1, 
/*28599*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*28602*/         OPC_EmitInteger, MVT::i32, 0, 
/*28605*/         OPC_EmitInteger, MVT::i32, 0, 
/*28608*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MUL_IEEE), 0,
                      1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 24, 25, 26, 27, 28, 29, 30, 31, 32, 
                  // Src: (fdiv:f32 f32:f32:$src0, f32:f32:$src1) - Complexity = 3
                  // Dst: (MUL_IEEE:f32 ?:f32:$src0, (RECIP_IEEE_cm:i32 ?:f32:$src1))
/*28635*/       /*Scope*/ 19, /*->28655*/
/*28636*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*28638*/         OPC_EmitNode, TARGET_VAL(AMDGPU::V_RCP_F32_e32), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*28646*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MUL_F32_e32), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 2, 
                  // Src: (fdiv:f32 f32:f32:$src0, f32:f32:$src1) - Complexity = 3
                  // Dst: (V_MUL_F32_e32:f32 ?:f32:$src0, (V_RCP_F32_e32:i32 ?:f32:$src1))
/*28655*/       0, /*End of Scope*/
              /*SwitchType*/ 39,  MVT::f64,// ->28697
/*28658*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*28660*/       OPC_EmitNode, TARGET_VAL(AMDGPU::V_RCP_F64_e32), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1,  // Results = #2
/*28668*/       OPC_EmitInteger, MVT::i64, 0, 
/*28671*/       OPC_EmitInteger, MVT::i32, 0, 
/*28674*/       OPC_EmitInteger, MVT::i32, 0, 
/*28677*/       OPC_EmitInteger, MVT::i32, 0, 
/*28680*/       OPC_EmitInteger, MVT::i32, 0, 
/*28683*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MUL_F64), 0,
                    1/*#VTs*/, MVT::f64, 7/*#Ops*/, 0, 2, 3, 4, 5, 6, 7, 
                // Src: (fdiv:f64 f64:f64:$src0, f64:f64:$src1) - Complexity = 3
                // Dst: (V_MUL_F64:f64 ?:f64:$src0, (V_RCP_F64_e32:i64 ?:f64:$src1), 0:i64)
              0, // EndSwitchType
/*28698*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 68,  TARGET_VAL(AMDGPUISD::LOAD_CONSTANT),// ->28770
/*28702*/   OPC_RecordMemRef,
/*28703*/   OPC_RecordChild0, // #0 = $sbase
/*28704*/   OPC_RecordChild1, // #1 = $offset
/*28705*/   OPC_Scope, 50, /*->28757*/ // 2 children in Scope
/*28707*/     OPC_MoveChild, 1,
/*28709*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*28712*/     OPC_Scope, 19, /*->28733*/ // 2 children in Scope
/*28714*/       OPC_CheckPredicate, 21, // Predicate_IMM8bitDWORD
/*28716*/       OPC_MoveParent,
/*28717*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*28719*/       OPC_EmitConvertToTarget, 1,
/*28721*/       OPC_EmitNodeXForm, 0, 2, // anonymous.val.396
/*28724*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_BUFFER_LOAD_DWORD_IMM), 0|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 3, 
                // Src: (SIload_constant:f32 i128:i128:$sbase, (imm:i32)<<P:Predicate_IMM8bitDWORD>><<X:anonymous.val.396>>:$offset) - Complexity = 7
                // Dst: (S_BUFFER_LOAD_DWORD_IMM:f32 ?:i128:$sbase, (anonymous.val.396:i32 (imm:i32)<<P:Predicate_IMM8bitDWORD>>:$offset))
/*28733*/     /*Scope*/ 22, /*->28756*/
/*28734*/       OPC_MoveParent,
/*28735*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*28737*/       OPC_EmitConvertToTarget, 1,
/*28739*/       OPC_EmitNode, TARGET_VAL(AMDGPU::S_MOV_B32), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*28747*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_BUFFER_LOAD_DWORD_SGPR), 0|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 3, 
                // Src: (SIload_constant:f32 i128:i128:$sbase, (imm:i32):$offset) - Complexity = 6
                // Dst: (S_BUFFER_LOAD_DWORD_SGPR:f32 ?:i128:$sbase, (S_MOV_B32:i32 (imm:i32):$offset))
/*28756*/     0, /*End of Scope*/
/*28757*/   /*Scope*/ 11, /*->28769*/
/*28758*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*28760*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORD_OFFEN), 0|OPFL_MemRefs,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (SIload_constant:f32 i128:i128:$sbase, i32:i32:$voff) - Complexity = 3
              // Dst: (BUFFER_LOAD_DWORD_OFFEN:f32 ?:i128:$sbase, ?:i32:$voff)
/*28769*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 10|128,5/*650*/,  TARGET_VAL(ISD::FADD),// ->29424
/*28774*/   OPC_Scope, 114|128,1/*242*/, /*->29019*/ // 2 children in Scope
/*28777*/     OPC_MoveChild, 0,
/*28779*/     OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*28782*/     OPC_RecordChild0, // #0 = $src0
/*28783*/     OPC_RecordChild1, // #1 = $src1
/*28784*/     OPC_MoveParent,
/*28785*/     OPC_RecordChild1, // #2 = $src2
/*28786*/     OPC_CheckType, MVT::f32,
/*28788*/     OPC_Scope, 99, /*->28889*/ // 3 children in Scope
/*28790*/       OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*28792*/       OPC_EmitInteger, MVT::i32, 0, 
/*28795*/       OPC_EmitInteger, MVT::i32, 0, 
/*28798*/       OPC_EmitInteger, MVT::i32, 0, 
/*28801*/       OPC_EmitInteger, MVT::i32, 0, 
/*28804*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28816*/       OPC_EmitInteger, MVT::i32, 0, 
/*28819*/       OPC_EmitInteger, MVT::i32, 0, 
/*28822*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28834*/       OPC_EmitInteger, MVT::i32, 0, 
/*28837*/       OPC_EmitInteger, MVT::i32, 0, 
/*28840*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28852*/       OPC_EmitInteger, MVT::i32, 1, 
/*28855*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*28858*/       OPC_EmitInteger, MVT::i32, 0, 
/*28861*/       OPC_EmitInteger, MVT::i32, 0, 
/*28864*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULADD_IEEE_r600), 0,
                    1/*#VTs*/, MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                // Src: (fadd:f32 (fmul:f32 f32:f32:$src0, f32:f32:$src1), f32:f32:$src2) - Complexity = 6
                // Dst: (MULADD_IEEE_r600:f32 f32:f32:$src0, f32:f32:$src1, f32:f32:$src2)
/*28889*/     /*Scope*/ 99, /*->28989*/
/*28890*/       OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*28892*/       OPC_EmitInteger, MVT::i32, 0, 
/*28895*/       OPC_EmitInteger, MVT::i32, 0, 
/*28898*/       OPC_EmitInteger, MVT::i32, 0, 
/*28901*/       OPC_EmitInteger, MVT::i32, 0, 
/*28904*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28916*/       OPC_EmitInteger, MVT::i32, 0, 
/*28919*/       OPC_EmitInteger, MVT::i32, 0, 
/*28922*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28934*/       OPC_EmitInteger, MVT::i32, 0, 
/*28937*/       OPC_EmitInteger, MVT::i32, 0, 
/*28940*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28952*/       OPC_EmitInteger, MVT::i32, 1, 
/*28955*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*28958*/       OPC_EmitInteger, MVT::i32, 0, 
/*28961*/       OPC_EmitInteger, MVT::i32, 0, 
/*28964*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULADD_IEEE_eg), 0,
                    1/*#VTs*/, MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                // Src: (fadd:f32 (fmul:f32 f32:f32:$src0, f32:f32:$src1), f32:f32:$src2) - Complexity = 6
                // Dst: (MULADD_IEEE_eg:f32 f32:f32:$src0, f32:f32:$src1, f32:f32:$src2)
/*28989*/     /*Scope*/ 28, /*->29018*/
/*28990*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*28992*/       OPC_EmitInteger, MVT::i32, 0, 
/*28995*/       OPC_EmitInteger, MVT::i32, 0, 
/*28998*/       OPC_EmitInteger, MVT::i32, 0, 
/*29001*/       OPC_EmitInteger, MVT::i32, 0, 
/*29004*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MAD_F32), 0,
                    1/*#VTs*/, MVT::f32, 7/*#Ops*/, 0, 1, 2, 3, 4, 5, 6, 
                // Src: (fadd:f32 (fmul:f32 f32:f32:$src0, f32:f32:$src1), f32:f32:$src2) - Complexity = 6
                // Dst: (V_MAD_F32:f32 ?:f32:$src0, ?:f32:$src1, ?:f32:$src2)
/*29018*/     0, /*End of Scope*/
/*29019*/   /*Scope*/ 18|128,3/*402*/, /*->29423*/
/*29021*/     OPC_RecordChild0, // #0 = $src2
/*29022*/     OPC_Scope, 113|128,1/*241*/, /*->29266*/ // 2 children in Scope
/*29025*/       OPC_MoveChild, 1,
/*29027*/       OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*29030*/       OPC_RecordChild0, // #1 = $src0
/*29031*/       OPC_RecordChild1, // #2 = $src1
/*29032*/       OPC_MoveParent,
/*29033*/       OPC_CheckType, MVT::f32,
/*29035*/       OPC_Scope, 99, /*->29136*/ // 3 children in Scope
/*29037*/         OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*29039*/         OPC_EmitInteger, MVT::i32, 0, 
/*29042*/         OPC_EmitInteger, MVT::i32, 0, 
/*29045*/         OPC_EmitInteger, MVT::i32, 0, 
/*29048*/         OPC_EmitInteger, MVT::i32, 0, 
/*29051*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*29063*/         OPC_EmitInteger, MVT::i32, 0, 
/*29066*/         OPC_EmitInteger, MVT::i32, 0, 
/*29069*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*29081*/         OPC_EmitInteger, MVT::i32, 0, 
/*29084*/         OPC_EmitInteger, MVT::i32, 0, 
/*29087*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*29099*/         OPC_EmitInteger, MVT::i32, 1, 
/*29102*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*29105*/         OPC_EmitInteger, MVT::i32, 0, 
/*29108*/         OPC_EmitInteger, MVT::i32, 0, 
/*29111*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULADD_IEEE_r600), 0,
                      1/*#VTs*/, MVT::f32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 2, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (fadd:f32 f32:f32:$src2, (fmul:f32 f32:f32:$src0, f32:f32:$src1)) - Complexity = 6
                  // Dst: (MULADD_IEEE_r600:f32 f32:f32:$src0, f32:f32:$src1, f32:f32:$src2)
/*29136*/       /*Scope*/ 99, /*->29236*/
/*29137*/         OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*29139*/         OPC_EmitInteger, MVT::i32, 0, 
/*29142*/         OPC_EmitInteger, MVT::i32, 0, 
/*29145*/         OPC_EmitInteger, MVT::i32, 0, 
/*29148*/         OPC_EmitInteger, MVT::i32, 0, 
/*29151*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*29163*/         OPC_EmitInteger, MVT::i32, 0, 
/*29166*/         OPC_EmitInteger, MVT::i32, 0, 
/*29169*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*29181*/         OPC_EmitInteger, MVT::i32, 0, 
/*29184*/         OPC_EmitInteger, MVT::i32, 0, 
/*29187*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*29199*/         OPC_EmitInteger, MVT::i32, 1, 
/*29202*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*29205*/         OPC_EmitInteger, MVT::i32, 0, 
/*29208*/         OPC_EmitInteger, MVT::i32, 0, 
/*29211*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULADD_IEEE_eg), 0,
                      1/*#VTs*/, MVT::f32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 2, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (fadd:f32 f32:f32:$src2, (fmul:f32 f32:f32:$src0, f32:f32:$src1)) - Complexity = 6
                  // Dst: (MULADD_IEEE_eg:f32 f32:f32:$src0, f32:f32:$src1, f32:f32:$src2)
/*29236*/       /*Scope*/ 28, /*->29265*/
/*29237*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*29239*/         OPC_EmitInteger, MVT::i32, 0, 
/*29242*/         OPC_EmitInteger, MVT::i32, 0, 
/*29245*/         OPC_EmitInteger, MVT::i32, 0, 
/*29248*/         OPC_EmitInteger, MVT::i32, 0, 
/*29251*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MAD_F32), 0,
                      1/*#VTs*/, MVT::f32, 7/*#Ops*/, 1, 2, 0, 3, 4, 5, 6, 
                  // Src: (fadd:f32 f32:f32:$src2, (fmul:f32 f32:f32:$src0, f32:f32:$src1)) - Complexity = 6
                  // Dst: (V_MAD_F32:f32 ?:f32:$src0, ?:f32:$src1, ?:f32:$src2)
/*29265*/       0, /*End of Scope*/
/*29266*/     /*Scope*/ 26|128,1/*154*/, /*->29422*/
/*29268*/       OPC_RecordChild1, // #1 = $src1
/*29269*/       OPC_SwitchType /*2 cases */, 116,  MVT::f32,// ->29388
/*29272*/         OPC_Scope, 101, /*->29375*/ // 2 children in Scope
/*29274*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*29276*/           OPC_EmitInteger, MVT::i32, 0, 
/*29279*/           OPC_EmitInteger, MVT::i32, 0, 
/*29282*/           OPC_EmitInteger, MVT::i32, 1, 
/*29285*/           OPC_EmitInteger, MVT::i32, 0, 
/*29288*/           OPC_EmitInteger, MVT::i32, 0, 
/*29291*/           OPC_EmitInteger, MVT::i32, 0, 
/*29294*/           OPC_EmitInteger, MVT::i32, 0, 
/*29297*/           OPC_EmitInteger, MVT::i32, 0, 
/*29300*/           OPC_EmitInteger, MVT::i32, 0, 
/*29303*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*29315*/           OPC_EmitInteger, MVT::i32, 0, 
/*29318*/           OPC_EmitInteger, MVT::i32, 0, 
/*29321*/           OPC_EmitInteger, MVT::i32, 0, 
/*29324*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*29336*/           OPC_EmitInteger, MVT::i32, 1, 
/*29339*/           OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*29342*/           OPC_EmitInteger, MVT::i32, 0, 
/*29345*/           OPC_EmitInteger, MVT::i32, 0, 
/*29348*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::ADD), 0,
                        1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                    // Src: (fadd:f32 R600_Reg32:f32:$src0, R600_Reg32:f32:$src1) - Complexity = 3
                    // Dst: (ADD:f32 R600_Reg32:f32:$src0, R600_Reg32:f32:$src1)
/*29375*/         /*Scope*/ 11, /*->29387*/
/*29376*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*29378*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_ADD_F32_e32), 0,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (fadd:f32 f32:f32:$src0, f32:f32:$src1) - Complexity = 3
                    // Dst: (V_ADD_F32_e32:f32 f32:f32:$src0, f32:f32:$src1)
/*29387*/         0, /*End of Scope*/
                /*SwitchType*/ 31,  MVT::f64,// ->29421
/*29390*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*29392*/         OPC_EmitInteger, MVT::i64, 0, 
/*29395*/         OPC_EmitInteger, MVT::i32, 0, 
/*29398*/         OPC_EmitInteger, MVT::i32, 0, 
/*29401*/         OPC_EmitInteger, MVT::i32, 0, 
/*29404*/         OPC_EmitInteger, MVT::i32, 0, 
/*29407*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_ADD_F64), 0,
                      1/*#VTs*/, MVT::f64, 7/*#Ops*/, 0, 1, 2, 3, 4, 5, 6, 
                  // Src: (fadd:f64 f64:f64:$src0, f64:f64:$src1) - Complexity = 3
                  // Dst: (V_ADD_F64:f64 ?:f64:$src0, ?:f64:$src1, 0:i64)
                0, // EndSwitchType
/*29422*/     0, /*End of Scope*/
/*29423*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 114,  TARGET_VAL(ISD::ConstantFP),// ->29541
/*29427*/   OPC_RecordNode,   // #0 = $imm
/*29428*/   OPC_SwitchType /*2 cases */, 46,  MVT::f32,// ->29477
/*29431*/     OPC_Scope, 14, /*->29447*/ // 2 children in Scope
/*29433*/       OPC_CheckPredicate, 59, // Predicate_anonymous.val.398
/*29435*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*29437*/       OPC_EmitConvertToTarget, 0,
/*29439*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_MOV_B32), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 1, 
                // Src: (fpimm:f32)<<P:Predicate_anonymous.val.398>>:$imm - Complexity = 4
                // Dst: (S_MOV_B32:f32 (fpimm:f32):$imm)
/*29447*/     /*Scope*/ 28, /*->29476*/
/*29448*/       OPC_Scope, 12, /*->29462*/ // 2 children in Scope
/*29450*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*29452*/         OPC_EmitConvertToTarget, 0,
/*29454*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MOV_B32_e32), 0,
                      1/*#VTs*/, MVT::f32, 1/*#Ops*/, 1, 
                  // Src: (fpimm:f32):$imm - Complexity = 3
                  // Dst: (V_MOV_B32_e32:f32 (fpimm:f32):$imm)
/*29462*/       /*Scope*/ 12, /*->29475*/
/*29463*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*29465*/         OPC_EmitConvertToTarget, 0,
/*29467*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MOV_IMM_F32), 0,
                      1/*#VTs*/, MVT::f32, 1/*#Ops*/, 1, 
                  // Src: (fpimm:f32):$val - Complexity = 3
                  // Dst: (MOV_IMM_F32:f32 (fpimm:f32):$val)
/*29475*/       0, /*End of Scope*/
/*29476*/     0, /*End of Scope*/
            /*SwitchType*/ 61,  MVT::f64,// ->29540
/*29479*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*29481*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                  1/*#VTs*/, MVT::f64, 0/*#Ops*/,  // Results = #1
/*29488*/     OPC_EmitConvertToTarget, 0,
/*29490*/     OPC_EmitNodeXForm, 4, 2, // LO32f
/*29493*/     OPC_EmitNode, TARGET_VAL(AMDGPU::V_MOV_B32_e32), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*29501*/     OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*29504*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                  1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 4, 5,  // Results = #6
/*29514*/     OPC_EmitConvertToTarget, 0,
/*29516*/     OPC_EmitNodeXForm, 5, 7, // HI32f
/*29519*/     OPC_EmitNode, TARGET_VAL(AMDGPU::V_MOV_B32_e32), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 8,  // Results = #9
/*29527*/     OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*29530*/     OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                  1/*#VTs*/, MVT::f64, 3/*#Ops*/, 6, 9, 10, 
              // Src: (fpimm:f64):$imm - Complexity = 3
              // Dst: (INSERT_SUBREG:f64 (INSERT_SUBREG:f64 (IMPLICIT_DEF:f64), (V_MOV_B32_e32:i32 (LO32f:f32 (fpimm:f64):$imm)), sub0:i32), (V_MOV_B32_e32:i32 (HI32f:f32 (fpimm:f64):$imm)), sub1:i32)
            0, // EndSwitchType
          /*SwitchOpcode*/ 27|128,1/*155*/,  TARGET_VAL(ISD::FMUL),// ->29700
/*29545*/   OPC_RecordChild0, // #0 = $src0
/*29546*/   OPC_RecordChild1, // #1 = $src1
/*29547*/   OPC_SwitchType /*2 cases */, 116,  MVT::f32,// ->29666
/*29550*/     OPC_Scope, 101, /*->29653*/ // 2 children in Scope
/*29552*/       OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*29554*/       OPC_EmitInteger, MVT::i32, 0, 
/*29557*/       OPC_EmitInteger, MVT::i32, 0, 
/*29560*/       OPC_EmitInteger, MVT::i32, 1, 
/*29563*/       OPC_EmitInteger, MVT::i32, 0, 
/*29566*/       OPC_EmitInteger, MVT::i32, 0, 
/*29569*/       OPC_EmitInteger, MVT::i32, 0, 
/*29572*/       OPC_EmitInteger, MVT::i32, 0, 
/*29575*/       OPC_EmitInteger, MVT::i32, 0, 
/*29578*/       OPC_EmitInteger, MVT::i32, 0, 
/*29581*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*29593*/       OPC_EmitInteger, MVT::i32, 0, 
/*29596*/       OPC_EmitInteger, MVT::i32, 0, 
/*29599*/       OPC_EmitInteger, MVT::i32, 0, 
/*29602*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*29614*/       OPC_EmitInteger, MVT::i32, 1, 
/*29617*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*29620*/       OPC_EmitInteger, MVT::i32, 0, 
/*29623*/       OPC_EmitInteger, MVT::i32, 0, 
/*29626*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MUL_IEEE), 0,
                    1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (fmul:f32 R600_Reg32:f32:$src0, R600_Reg32:f32:$src1) - Complexity = 3
                // Dst: (MUL_IEEE:f32 R600_Reg32:f32:$src0, R600_Reg32:f32:$src1)
/*29653*/     /*Scope*/ 11, /*->29665*/
/*29654*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*29656*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MUL_F32_e32), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fmul:f32 f32:f32:$src0, f32:f32:$src1) - Complexity = 3
                // Dst: (V_MUL_F32_e32:f32 f32:f32:$src0, f32:f32:$src1)
/*29665*/     0, /*End of Scope*/
            /*SwitchType*/ 31,  MVT::f64,// ->29699
/*29668*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*29670*/     OPC_EmitInteger, MVT::i64, 0, 
/*29673*/     OPC_EmitInteger, MVT::i32, 0, 
/*29676*/     OPC_EmitInteger, MVT::i32, 0, 
/*29679*/     OPC_EmitInteger, MVT::i32, 0, 
/*29682*/     OPC_EmitInteger, MVT::i32, 0, 
/*29685*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MUL_F64), 0,
                  1/*#VTs*/, MVT::f64, 7/*#Ops*/, 0, 1, 2, 3, 4, 5, 6, 
              // Src: (fmul:f64 f64:f64:$src0, f64:f64:$src1) - Complexity = 3
              // Dst: (V_MUL_F64:f64 ?:f64:$src0, ?:f64:$src1, 0:i64)
            0, // EndSwitchType
          /*SwitchOpcode*/ 120,  TARGET_VAL(AMDGPUISD::FMAX),// ->29823
/*29703*/   OPC_RecordChild0, // #0 = $src0
/*29704*/   OPC_RecordChild1, // #1 = $src1
/*29705*/   OPC_CheckType, MVT::f32,
/*29707*/   OPC_Scope, 101, /*->29810*/ // 2 children in Scope
/*29709*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*29711*/     OPC_EmitInteger, MVT::i32, 0, 
/*29714*/     OPC_EmitInteger, MVT::i32, 0, 
/*29717*/     OPC_EmitInteger, MVT::i32, 1, 
/*29720*/     OPC_EmitInteger, MVT::i32, 0, 
/*29723*/     OPC_EmitInteger, MVT::i32, 0, 
/*29726*/     OPC_EmitInteger, MVT::i32, 0, 
/*29729*/     OPC_EmitInteger, MVT::i32, 0, 
/*29732*/     OPC_EmitInteger, MVT::i32, 0, 
/*29735*/     OPC_EmitInteger, MVT::i32, 0, 
/*29738*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*29750*/     OPC_EmitInteger, MVT::i32, 0, 
/*29753*/     OPC_EmitInteger, MVT::i32, 0, 
/*29756*/     OPC_EmitInteger, MVT::i32, 0, 
/*29759*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*29771*/     OPC_EmitInteger, MVT::i32, 1, 
/*29774*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*29777*/     OPC_EmitInteger, MVT::i32, 0, 
/*29780*/     OPC_EmitInteger, MVT::i32, 0, 
/*29783*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MAX), 0,
                  1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUfmax:f32 R600_Reg32:f32:$src0, R600_Reg32:f32:$src1) - Complexity = 3
              // Dst: (MAX:f32 R600_Reg32:f32:$src0, R600_Reg32:f32:$src1)
/*29810*/   /*Scope*/ 11, /*->29822*/
/*29811*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*29813*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MAX_LEGACY_F32_e32), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (AMDGPUfmax:f32 f32:f32:$src0, f32:f32:$src1) - Complexity = 3
              // Dst: (V_MAX_LEGACY_F32_e32:f32 f32:f32:$src0, f32:f32:$src1)
/*29822*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 120,  TARGET_VAL(AMDGPUISD::FMIN),// ->29946
/*29826*/   OPC_RecordChild0, // #0 = $src0
/*29827*/   OPC_RecordChild1, // #1 = $src1
/*29828*/   OPC_CheckType, MVT::f32,
/*29830*/   OPC_Scope, 101, /*->29933*/ // 2 children in Scope
/*29832*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*29834*/     OPC_EmitInteger, MVT::i32, 0, 
/*29837*/     OPC_EmitInteger, MVT::i32, 0, 
/*29840*/     OPC_EmitInteger, MVT::i32, 1, 
/*29843*/     OPC_EmitInteger, MVT::i32, 0, 
/*29846*/     OPC_EmitInteger, MVT::i32, 0, 
/*29849*/     OPC_EmitInteger, MVT::i32, 0, 
/*29852*/     OPC_EmitInteger, MVT::i32, 0, 
/*29855*/     OPC_EmitInteger, MVT::i32, 0, 
/*29858*/     OPC_EmitInteger, MVT::i32, 0, 
/*29861*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*29873*/     OPC_EmitInteger, MVT::i32, 0, 
/*29876*/     OPC_EmitInteger, MVT::i32, 0, 
/*29879*/     OPC_EmitInteger, MVT::i32, 0, 
/*29882*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*29894*/     OPC_EmitInteger, MVT::i32, 1, 
/*29897*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*29900*/     OPC_EmitInteger, MVT::i32, 0, 
/*29903*/     OPC_EmitInteger, MVT::i32, 0, 
/*29906*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MIN), 0,
                  1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUfmin:f32 R600_Reg32:f32:$src0, R600_Reg32:f32:$src1) - Complexity = 3
              // Dst: (MIN:f32 R600_Reg32:f32:$src0, R600_Reg32:f32:$src1)
/*29933*/   /*Scope*/ 11, /*->29945*/
/*29934*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*29936*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MIN_LEGACY_F32_e32), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (AMDGPUfmin:f32 f32:f32:$src0, f32:f32:$src1) - Complexity = 3
              // Dst: (V_MIN_LEGACY_F32_e32:f32 f32:f32:$src0, f32:f32:$src1)
/*29945*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 84,  TARGET_VAL(AMDGPUISD::FRACT),// ->30033
/*29949*/   OPC_RecordChild0, // #0 = $src0
/*29950*/   OPC_CheckType, MVT::f32,
/*29952*/   OPC_Scope, 67, /*->30021*/ // 2 children in Scope
/*29954*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*29956*/     OPC_EmitInteger, MVT::i32, 1, 
/*29959*/     OPC_EmitInteger, MVT::i32, 0, 
/*29962*/     OPC_EmitInteger, MVT::i32, 0, 
/*29965*/     OPC_EmitInteger, MVT::i32, 0, 
/*29968*/     OPC_EmitInteger, MVT::i32, 0, 
/*29971*/     OPC_EmitInteger, MVT::i32, 0, 
/*29974*/     OPC_EmitInteger, MVT::i32, 0, 
/*29977*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*29989*/     OPC_EmitInteger, MVT::i32, 1, 
/*29992*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*29995*/     OPC_EmitInteger, MVT::i32, 0, 
/*29998*/     OPC_EmitInteger, MVT::i32, 0, 
/*30001*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::FRACT), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (AMDGPUfract:f32 R600_Reg32:f32:$src0) - Complexity = 3
              // Dst: (FRACT:f32 R600_Reg32:f32:$src0)
/*30021*/   /*Scope*/ 10, /*->30032*/
/*30022*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*30024*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_FRACT_F32_e32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (AMDGPUfract:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (V_FRACT_F32_e32:f32 f32:f32:$src0)
/*30032*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 84,  TARGET_VAL(ISD::FCEIL),// ->30120
/*30036*/   OPC_RecordChild0, // #0 = $src0
/*30037*/   OPC_CheckType, MVT::f32,
/*30039*/   OPC_Scope, 67, /*->30108*/ // 2 children in Scope
/*30041*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*30043*/     OPC_EmitInteger, MVT::i32, 1, 
/*30046*/     OPC_EmitInteger, MVT::i32, 0, 
/*30049*/     OPC_EmitInteger, MVT::i32, 0, 
/*30052*/     OPC_EmitInteger, MVT::i32, 0, 
/*30055*/     OPC_EmitInteger, MVT::i32, 0, 
/*30058*/     OPC_EmitInteger, MVT::i32, 0, 
/*30061*/     OPC_EmitInteger, MVT::i32, 0, 
/*30064*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30076*/     OPC_EmitInteger, MVT::i32, 1, 
/*30079*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*30082*/     OPC_EmitInteger, MVT::i32, 0, 
/*30085*/     OPC_EmitInteger, MVT::i32, 0, 
/*30088*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CEIL), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (fceil:f32 R600_Reg32:f32:$src0) - Complexity = 3
              // Dst: (CEIL:f32 R600_Reg32:f32:$src0)
/*30108*/   /*Scope*/ 10, /*->30119*/
/*30109*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*30111*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CEIL_F32_e32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fceil:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (V_CEIL_F32_e32:f32 f32:f32:$src0)
/*30119*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 84,  TARGET_VAL(ISD::FRINT),// ->30207
/*30123*/   OPC_RecordChild0, // #0 = $src0
/*30124*/   OPC_CheckType, MVT::f32,
/*30126*/   OPC_Scope, 67, /*->30195*/ // 2 children in Scope
/*30128*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*30130*/     OPC_EmitInteger, MVT::i32, 1, 
/*30133*/     OPC_EmitInteger, MVT::i32, 0, 
/*30136*/     OPC_EmitInteger, MVT::i32, 0, 
/*30139*/     OPC_EmitInteger, MVT::i32, 0, 
/*30142*/     OPC_EmitInteger, MVT::i32, 0, 
/*30145*/     OPC_EmitInteger, MVT::i32, 0, 
/*30148*/     OPC_EmitInteger, MVT::i32, 0, 
/*30151*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30163*/     OPC_EmitInteger, MVT::i32, 1, 
/*30166*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*30169*/     OPC_EmitInteger, MVT::i32, 0, 
/*30172*/     OPC_EmitInteger, MVT::i32, 0, 
/*30175*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RNDNE), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (frint:f32 R600_Reg32:f32:$src0) - Complexity = 3
              // Dst: (RNDNE:f32 R600_Reg32:f32:$src0)
/*30195*/   /*Scope*/ 10, /*->30206*/
/*30196*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*30198*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_RNDNE_F32_e32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (frint:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (V_RNDNE_F32_e32:f32 f32:f32:$src0)
/*30206*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 84,  TARGET_VAL(ISD::FFLOOR),// ->30294
/*30210*/   OPC_RecordChild0, // #0 = $src0
/*30211*/   OPC_CheckType, MVT::f32,
/*30213*/   OPC_Scope, 67, /*->30282*/ // 2 children in Scope
/*30215*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*30217*/     OPC_EmitInteger, MVT::i32, 1, 
/*30220*/     OPC_EmitInteger, MVT::i32, 0, 
/*30223*/     OPC_EmitInteger, MVT::i32, 0, 
/*30226*/     OPC_EmitInteger, MVT::i32, 0, 
/*30229*/     OPC_EmitInteger, MVT::i32, 0, 
/*30232*/     OPC_EmitInteger, MVT::i32, 0, 
/*30235*/     OPC_EmitInteger, MVT::i32, 0, 
/*30238*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30250*/     OPC_EmitInteger, MVT::i32, 1, 
/*30253*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*30256*/     OPC_EmitInteger, MVT::i32, 0, 
/*30259*/     OPC_EmitInteger, MVT::i32, 0, 
/*30262*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::FLOOR), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (ffloor:f32 R600_Reg32:f32:$src0) - Complexity = 3
              // Dst: (FLOOR:f32 R600_Reg32:f32:$src0)
/*30282*/   /*Scope*/ 10, /*->30293*/
/*30283*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*30285*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_FLOOR_F32_e32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (ffloor:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (V_FLOOR_F32_e32:f32 f32:f32:$src0)
/*30293*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 91|128,2/*347*/,  TARGET_VAL(AMDGPUISD::DOT4),// ->30645
/*30298*/   OPC_RecordChild0, // #0 = $src0_X
/*30299*/   OPC_RecordChild1, // #1 = $src1_X
/*30300*/   OPC_RecordChild2, // #2 = $src0_Y
/*30301*/   OPC_RecordChild3, // #3 = $src1_Y
/*30302*/   OPC_RecordChild4, // #4 = $src0_Z
/*30303*/   OPC_RecordChild5, // #5 = $src1_Z
/*30304*/   OPC_RecordChild6, // #6 = $src0_W
/*30305*/   OPC_RecordChild7, // #7 = $src1_W
/*30306*/   OPC_CheckType, MVT::f32,
/*30308*/   OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*30310*/   OPC_EmitInteger, MVT::i32, 0, 
/*30313*/   OPC_EmitInteger, MVT::i32, 0, 
/*30316*/   OPC_EmitInteger, MVT::i32, 1, 
/*30319*/   OPC_EmitInteger, MVT::i32, 0, 
/*30322*/   OPC_EmitInteger, MVT::i32, 0, 
/*30325*/   OPC_EmitInteger, MVT::i32, 0, 
/*30328*/   OPC_EmitInteger, MVT::i32, 0, 
/*30331*/   OPC_EmitInteger, MVT::i32, 0, 
/*30334*/   OPC_EmitInteger, MVT::i32, 0, 
/*30337*/   OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30349*/   OPC_EmitInteger, MVT::i32, 0, 
/*30352*/   OPC_EmitInteger, MVT::i32, 0, 
/*30355*/   OPC_EmitInteger, MVT::i32, 0, 
/*30358*/   OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30370*/   OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*30373*/   OPC_EmitInteger, MVT::i32, 0, 
/*30376*/   OPC_EmitInteger, MVT::i32, 0, 
/*30379*/   OPC_EmitInteger, MVT::i32, 1, 
/*30382*/   OPC_EmitInteger, MVT::i32, 0, 
/*30385*/   OPC_EmitInteger, MVT::i32, 0, 
/*30388*/   OPC_EmitInteger, MVT::i32, 0, 
/*30391*/   OPC_EmitInteger, MVT::i32, 0, 
/*30394*/   OPC_EmitInteger, MVT::i32, 0, 
/*30397*/   OPC_EmitInteger, MVT::i32, 0, 
/*30400*/   OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30412*/   OPC_EmitInteger, MVT::i32, 0, 
/*30415*/   OPC_EmitInteger, MVT::i32, 0, 
/*30418*/   OPC_EmitInteger, MVT::i32, 0, 
/*30421*/   OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30433*/   OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*30436*/   OPC_EmitInteger, MVT::i32, 0, 
/*30439*/   OPC_EmitInteger, MVT::i32, 0, 
/*30442*/   OPC_EmitInteger, MVT::i32, 1, 
/*30445*/   OPC_EmitInteger, MVT::i32, 0, 
/*30448*/   OPC_EmitInteger, MVT::i32, 0, 
/*30451*/   OPC_EmitInteger, MVT::i32, 0, 
/*30454*/   OPC_EmitInteger, MVT::i32, 0, 
/*30457*/   OPC_EmitInteger, MVT::i32, 0, 
/*30460*/   OPC_EmitInteger, MVT::i32, 0, 
/*30463*/   OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30475*/   OPC_EmitInteger, MVT::i32, 0, 
/*30478*/   OPC_EmitInteger, MVT::i32, 0, 
/*30481*/   OPC_EmitInteger, MVT::i32, 0, 
/*30484*/   OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30496*/   OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*30499*/   OPC_EmitInteger, MVT::i32, 0, 
/*30502*/   OPC_EmitInteger, MVT::i32, 0, 
/*30505*/   OPC_EmitInteger, MVT::i32, 1, 
/*30508*/   OPC_EmitInteger, MVT::i32, 0, 
/*30511*/   OPC_EmitInteger, MVT::i32, 0, 
/*30514*/   OPC_EmitInteger, MVT::i32, 0, 
/*30517*/   OPC_EmitInteger, MVT::i32, 0, 
/*30520*/   OPC_EmitInteger, MVT::i32, 0, 
/*30523*/   OPC_EmitInteger, MVT::i32, 0, 
/*30526*/   OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30538*/   OPC_EmitInteger, MVT::i32, 0, 
/*30541*/   OPC_EmitInteger, MVT::i32, 0, 
/*30544*/   OPC_EmitInteger, MVT::i32, 0, 
/*30547*/   OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30559*/   OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*30562*/   OPC_EmitInteger, MVT::i32, 0, 
/*30565*/   OPC_EmitInteger, MVT::i32, 0, 
/*30568*/   OPC_MorphNodeTo, TARGET_VAL(AMDGPU::DOT_4), 0,
                1/*#VTs*/, MVT::f32, 70/*#Ops*/, 8, 9, 10, 11, 12, 13, 0, 14, 15, 16, 17, 1, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 2, 29, 30, 31, 32, 3, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 4, 44, 45, 46, 47, 5, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 6, 59, 60, 61, 62, 7, 63, 64, 65, 66, 67, 68, 69, 
            // Src: (DOT4:f32 R600_TReg32_X:f32:$src0_X, R600_TReg32_X:f32:$src1_X, R600_TReg32_Y:f32:$src0_Y, R600_TReg32_Y:f32:$src1_Y, R600_TReg32_Z:f32:$src0_Z, R600_TReg32_Z:f32:$src1_Z, R600_TReg32_W:f32:$src0_W, R600_TReg32_W:f32:$src1_W) - Complexity = 3
            // Dst: (DOT_4:f32 R600_TReg32_X:f32:$src0_X, R600_TReg32_X:f32:$src1_X, R600_TReg32_Y:f32:$src0_Y, R600_TReg32_Y:f32:$src1_Y, R600_TReg32_Z:f32:$src0_Z, R600_TReg32_Z:f32:$src1_Z, R600_TReg32_W:f32:$src0_W, R600_TReg32_W:f32:$src1_W)
          /*SwitchOpcode*/ 92|128,1/*220*/,  TARGET_VAL(ISD::FEXP2),// ->30869
/*30649*/   OPC_RecordChild0, // #0 = $src0
/*30650*/   OPC_CheckType, MVT::f32,
/*30652*/   OPC_Scope, 67, /*->30721*/ // 4 children in Scope
/*30654*/     OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*30656*/     OPC_EmitInteger, MVT::i32, 1, 
/*30659*/     OPC_EmitInteger, MVT::i32, 0, 
/*30662*/     OPC_EmitInteger, MVT::i32, 0, 
/*30665*/     OPC_EmitInteger, MVT::i32, 0, 
/*30668*/     OPC_EmitInteger, MVT::i32, 0, 
/*30671*/     OPC_EmitInteger, MVT::i32, 0, 
/*30674*/     OPC_EmitInteger, MVT::i32, 0, 
/*30677*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30689*/     OPC_EmitInteger, MVT::i32, 1, 
/*30692*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*30695*/     OPC_EmitInteger, MVT::i32, 0, 
/*30698*/     OPC_EmitInteger, MVT::i32, 0, 
/*30701*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EXP_IEEE_r600), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (fexp2:f32 R600_Reg32:f32:$src0) - Complexity = 3
              // Dst: (EXP_IEEE_r600:f32 R600_Reg32:f32:$src0)
/*30721*/   /*Scope*/ 67, /*->30789*/
/*30722*/     OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*30724*/     OPC_EmitInteger, MVT::i32, 1, 
/*30727*/     OPC_EmitInteger, MVT::i32, 0, 
/*30730*/     OPC_EmitInteger, MVT::i32, 0, 
/*30733*/     OPC_EmitInteger, MVT::i32, 0, 
/*30736*/     OPC_EmitInteger, MVT::i32, 0, 
/*30739*/     OPC_EmitInteger, MVT::i32, 0, 
/*30742*/     OPC_EmitInteger, MVT::i32, 0, 
/*30745*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30757*/     OPC_EmitInteger, MVT::i32, 1, 
/*30760*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*30763*/     OPC_EmitInteger, MVT::i32, 0, 
/*30766*/     OPC_EmitInteger, MVT::i32, 0, 
/*30769*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EXP_IEEE_eg), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (fexp2:f32 R600_Reg32:f32:$src0) - Complexity = 3
              // Dst: (EXP_IEEE_eg:f32 R600_Reg32:f32:$src0)
/*30789*/   /*Scope*/ 67, /*->30857*/
/*30790*/     OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*30792*/     OPC_EmitInteger, MVT::i32, 1, 
/*30795*/     OPC_EmitInteger, MVT::i32, 0, 
/*30798*/     OPC_EmitInteger, MVT::i32, 0, 
/*30801*/     OPC_EmitInteger, MVT::i32, 0, 
/*30804*/     OPC_EmitInteger, MVT::i32, 0, 
/*30807*/     OPC_EmitInteger, MVT::i32, 0, 
/*30810*/     OPC_EmitInteger, MVT::i32, 0, 
/*30813*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30825*/     OPC_EmitInteger, MVT::i32, 1, 
/*30828*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*30831*/     OPC_EmitInteger, MVT::i32, 0, 
/*30834*/     OPC_EmitInteger, MVT::i32, 0, 
/*30837*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EXP_IEEE_cm), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (fexp2:f32 R600_Reg32:f32:$src0) - Complexity = 3
              // Dst: (EXP_IEEE_cm:f32 R600_Reg32:f32:$src0)
/*30857*/   /*Scope*/ 10, /*->30868*/
/*30858*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*30860*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_EXP_F32_e32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fexp2:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (V_EXP_F32_e32:f32 f32:f32:$src0)
/*30868*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 92|128,1/*220*/,  TARGET_VAL(ISD::FLOG2),// ->31093
/*30873*/   OPC_RecordChild0, // #0 = $src0
/*30874*/   OPC_CheckType, MVT::f32,
/*30876*/   OPC_Scope, 67, /*->30945*/ // 4 children in Scope
/*30878*/     OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*30880*/     OPC_EmitInteger, MVT::i32, 1, 
/*30883*/     OPC_EmitInteger, MVT::i32, 0, 
/*30886*/     OPC_EmitInteger, MVT::i32, 0, 
/*30889*/     OPC_EmitInteger, MVT::i32, 0, 
/*30892*/     OPC_EmitInteger, MVT::i32, 0, 
/*30895*/     OPC_EmitInteger, MVT::i32, 0, 
/*30898*/     OPC_EmitInteger, MVT::i32, 0, 
/*30901*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30913*/     OPC_EmitInteger, MVT::i32, 1, 
/*30916*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*30919*/     OPC_EmitInteger, MVT::i32, 0, 
/*30922*/     OPC_EmitInteger, MVT::i32, 0, 
/*30925*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::LOG_IEEE_r600), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (flog2:f32 R600_Reg32:f32:$src0) - Complexity = 3
              // Dst: (LOG_IEEE_r600:f32 R600_Reg32:f32:$src0)
/*30945*/   /*Scope*/ 67, /*->31013*/
/*30946*/     OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*30948*/     OPC_EmitInteger, MVT::i32, 1, 
/*30951*/     OPC_EmitInteger, MVT::i32, 0, 
/*30954*/     OPC_EmitInteger, MVT::i32, 0, 
/*30957*/     OPC_EmitInteger, MVT::i32, 0, 
/*30960*/     OPC_EmitInteger, MVT::i32, 0, 
/*30963*/     OPC_EmitInteger, MVT::i32, 0, 
/*30966*/     OPC_EmitInteger, MVT::i32, 0, 
/*30969*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30981*/     OPC_EmitInteger, MVT::i32, 1, 
/*30984*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*30987*/     OPC_EmitInteger, MVT::i32, 0, 
/*30990*/     OPC_EmitInteger, MVT::i32, 0, 
/*30993*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::LOG_IEEE_eg), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (flog2:f32 R600_Reg32:f32:$src0) - Complexity = 3
              // Dst: (LOG_IEEE_eg:f32 R600_Reg32:f32:$src0)
/*31013*/   /*Scope*/ 67, /*->31081*/
/*31014*/     OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*31016*/     OPC_EmitInteger, MVT::i32, 1, 
/*31019*/     OPC_EmitInteger, MVT::i32, 0, 
/*31022*/     OPC_EmitInteger, MVT::i32, 0, 
/*31025*/     OPC_EmitInteger, MVT::i32, 0, 
/*31028*/     OPC_EmitInteger, MVT::i32, 0, 
/*31031*/     OPC_EmitInteger, MVT::i32, 0, 
/*31034*/     OPC_EmitInteger, MVT::i32, 0, 
/*31037*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31049*/     OPC_EmitInteger, MVT::i32, 1, 
/*31052*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*31055*/     OPC_EmitInteger, MVT::i32, 0, 
/*31058*/     OPC_EmitInteger, MVT::i32, 0, 
/*31061*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::LOG_IEEE_cm), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (flog2:f32 R600_Reg32:f32:$src0) - Complexity = 3
              // Dst: (LOG_IEEE_cm:f32 R600_Reg32:f32:$src0)
/*31081*/   /*Scope*/ 10, /*->31092*/
/*31082*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*31084*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_LOG_F32_e32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (flog2:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (V_LOG_F32_e32:f32 f32:f32:$src0)
/*31092*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 41|128,1/*169*/,  TARGET_VAL(ISD::SINT_TO_FP),// ->31266
/*31097*/   OPC_RecordChild0, // #0 = $src0
/*31098*/   OPC_CheckChild0Type, MVT::i32,
/*31100*/   OPC_SwitchType /*2 cases */, 21|128,1/*149*/,  MVT::f32,// ->31253
/*31104*/     OPC_Scope, 67, /*->31173*/ // 3 children in Scope
/*31106*/       OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*31108*/       OPC_EmitInteger, MVT::i32, 1, 
/*31111*/       OPC_EmitInteger, MVT::i32, 0, 
/*31114*/       OPC_EmitInteger, MVT::i32, 0, 
/*31117*/       OPC_EmitInteger, MVT::i32, 0, 
/*31120*/       OPC_EmitInteger, MVT::i32, 0, 
/*31123*/       OPC_EmitInteger, MVT::i32, 0, 
/*31126*/       OPC_EmitInteger, MVT::i32, 0, 
/*31129*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31141*/       OPC_EmitInteger, MVT::i32, 1, 
/*31144*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*31147*/       OPC_EmitInteger, MVT::i32, 0, 
/*31150*/       OPC_EmitInteger, MVT::i32, 0, 
/*31153*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::INT_TO_FLT_r600), 0,
                    1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (sint_to_fp:f32 R600_Reg32:i32:$src0) - Complexity = 3
                // Dst: (INT_TO_FLT_r600:f32 R600_Reg32:i32:$src0)
/*31173*/     /*Scope*/ 67, /*->31241*/
/*31174*/       OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*31176*/       OPC_EmitInteger, MVT::i32, 1, 
/*31179*/       OPC_EmitInteger, MVT::i32, 0, 
/*31182*/       OPC_EmitInteger, MVT::i32, 0, 
/*31185*/       OPC_EmitInteger, MVT::i32, 0, 
/*31188*/       OPC_EmitInteger, MVT::i32, 0, 
/*31191*/       OPC_EmitInteger, MVT::i32, 0, 
/*31194*/       OPC_EmitInteger, MVT::i32, 0, 
/*31197*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31209*/       OPC_EmitInteger, MVT::i32, 1, 
/*31212*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*31215*/       OPC_EmitInteger, MVT::i32, 0, 
/*31218*/       OPC_EmitInteger, MVT::i32, 0, 
/*31221*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::INT_TO_FLT_eg), 0,
                    1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (sint_to_fp:f32 R600_Reg32:i32:$src0) - Complexity = 3
                // Dst: (INT_TO_FLT_eg:f32 R600_Reg32:i32:$src0)
/*31241*/     /*Scope*/ 10, /*->31252*/
/*31242*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*31244*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CVT_F32_I32_e32), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (sint_to_fp:f32 i32:i32:$src0) - Complexity = 3
                // Dst: (V_CVT_F32_I32_e32:f32 i32:i32:$src0)
/*31252*/     0, /*End of Scope*/
            /*SwitchType*/ 10,  MVT::f64,// ->31265
/*31255*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*31257*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CVT_F64_I32_e32), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (sint_to_fp:f64 i32:i32:$src0) - Complexity = 3
              // Dst: (V_CVT_F64_I32_e32:f64 i32:i32:$src0)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26|128,1/*154*/,  TARGET_VAL(ISD::UINT_TO_FP),// ->31424
/*31270*/   OPC_RecordChild0, // #0 = $src0
/*31271*/   OPC_CheckChild0Type, MVT::i32,
/*31273*/   OPC_CheckType, MVT::f32,
/*31275*/   OPC_Scope, 67, /*->31344*/ // 3 children in Scope
/*31277*/     OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*31279*/     OPC_EmitInteger, MVT::i32, 1, 
/*31282*/     OPC_EmitInteger, MVT::i32, 0, 
/*31285*/     OPC_EmitInteger, MVT::i32, 0, 
/*31288*/     OPC_EmitInteger, MVT::i32, 0, 
/*31291*/     OPC_EmitInteger, MVT::i32, 0, 
/*31294*/     OPC_EmitInteger, MVT::i32, 0, 
/*31297*/     OPC_EmitInteger, MVT::i32, 0, 
/*31300*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31312*/     OPC_EmitInteger, MVT::i32, 1, 
/*31315*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*31318*/     OPC_EmitInteger, MVT::i32, 0, 
/*31321*/     OPC_EmitInteger, MVT::i32, 0, 
/*31324*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::UINT_TO_FLT_r600), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (uint_to_fp:f32 R600_Reg32:i32:$src0) - Complexity = 3
              // Dst: (UINT_TO_FLT_r600:f32 R600_Reg32:i32:$src0)
/*31344*/   /*Scope*/ 67, /*->31412*/
/*31345*/     OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*31347*/     OPC_EmitInteger, MVT::i32, 1, 
/*31350*/     OPC_EmitInteger, MVT::i32, 0, 
/*31353*/     OPC_EmitInteger, MVT::i32, 0, 
/*31356*/     OPC_EmitInteger, MVT::i32, 0, 
/*31359*/     OPC_EmitInteger, MVT::i32, 0, 
/*31362*/     OPC_EmitInteger, MVT::i32, 0, 
/*31365*/     OPC_EmitInteger, MVT::i32, 0, 
/*31368*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31380*/     OPC_EmitInteger, MVT::i32, 1, 
/*31383*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*31386*/     OPC_EmitInteger, MVT::i32, 0, 
/*31389*/     OPC_EmitInteger, MVT::i32, 0, 
/*31392*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::UINT_TO_FLT_eg), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (uint_to_fp:f32 R600_Reg32:i32:$src0) - Complexity = 3
              // Dst: (UINT_TO_FLT_eg:f32 R600_Reg32:i32:$src0)
/*31412*/   /*Scope*/ 10, /*->31423*/
/*31413*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*31415*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CVT_F32_U32_e32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (uint_to_fp:f32 i32:i32:$src0) - Complexity = 3
              // Dst: (V_CVT_F32_U32_e32:f32 i32:i32:$src0)
/*31423*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 23|128,2/*279*/,  TARGET_VAL(AMDGPUISD::SIN_HW),// ->31707
/*31428*/   OPC_RecordChild0, // #0 = $src0
/*31429*/   OPC_CheckChild0Type, MVT::f32,
/*31431*/   OPC_CheckType, MVT::f32,
/*31433*/   OPC_Scope, 67, /*->31502*/ // 4 children in Scope
/*31435*/     OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*31437*/     OPC_EmitInteger, MVT::i32, 1, 
/*31440*/     OPC_EmitInteger, MVT::i32, 0, 
/*31443*/     OPC_EmitInteger, MVT::i32, 0, 
/*31446*/     OPC_EmitInteger, MVT::i32, 0, 
/*31449*/     OPC_EmitInteger, MVT::i32, 0, 
/*31452*/     OPC_EmitInteger, MVT::i32, 0, 
/*31455*/     OPC_EmitInteger, MVT::i32, 0, 
/*31458*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31470*/     OPC_EmitInteger, MVT::i32, 1, 
/*31473*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*31476*/     OPC_EmitInteger, MVT::i32, 0, 
/*31479*/     OPC_EmitInteger, MVT::i32, 0, 
/*31482*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SIN_r600), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (SIN_HW:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (SIN_r600:f32 f32:f32:$src0)
/*31502*/   /*Scope*/ 67, /*->31570*/
/*31503*/     OPC_CheckPatternPredicate, 6, // (Subtarget.getGeneration() == AMDGPUSubtarget::R700)
/*31505*/     OPC_EmitInteger, MVT::i32, 1, 
/*31508*/     OPC_EmitInteger, MVT::i32, 0, 
/*31511*/     OPC_EmitInteger, MVT::i32, 0, 
/*31514*/     OPC_EmitInteger, MVT::i32, 0, 
/*31517*/     OPC_EmitInteger, MVT::i32, 0, 
/*31520*/     OPC_EmitInteger, MVT::i32, 0, 
/*31523*/     OPC_EmitInteger, MVT::i32, 0, 
/*31526*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31538*/     OPC_EmitInteger, MVT::i32, 1, 
/*31541*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*31544*/     OPC_EmitInteger, MVT::i32, 0, 
/*31547*/     OPC_EmitInteger, MVT::i32, 0, 
/*31550*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SIN_r700), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (SIN_HW:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (SIN_r700:f32 f32:f32:$src0)
/*31570*/   /*Scope*/ 67, /*->31638*/
/*31571*/     OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*31573*/     OPC_EmitInteger, MVT::i32, 1, 
/*31576*/     OPC_EmitInteger, MVT::i32, 0, 
/*31579*/     OPC_EmitInteger, MVT::i32, 0, 
/*31582*/     OPC_EmitInteger, MVT::i32, 0, 
/*31585*/     OPC_EmitInteger, MVT::i32, 0, 
/*31588*/     OPC_EmitInteger, MVT::i32, 0, 
/*31591*/     OPC_EmitInteger, MVT::i32, 0, 
/*31594*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31606*/     OPC_EmitInteger, MVT::i32, 1, 
/*31609*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*31612*/     OPC_EmitInteger, MVT::i32, 0, 
/*31615*/     OPC_EmitInteger, MVT::i32, 0, 
/*31618*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SIN_eg), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (SIN_HW:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (SIN_eg:f32 f32:f32:$src0)
/*31638*/   /*Scope*/ 67, /*->31706*/
/*31639*/     OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*31641*/     OPC_EmitInteger, MVT::i32, 1, 
/*31644*/     OPC_EmitInteger, MVT::i32, 0, 
/*31647*/     OPC_EmitInteger, MVT::i32, 0, 
/*31650*/     OPC_EmitInteger, MVT::i32, 0, 
/*31653*/     OPC_EmitInteger, MVT::i32, 0, 
/*31656*/     OPC_EmitInteger, MVT::i32, 0, 
/*31659*/     OPC_EmitInteger, MVT::i32, 0, 
/*31662*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31674*/     OPC_EmitInteger, MVT::i32, 1, 
/*31677*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*31680*/     OPC_EmitInteger, MVT::i32, 0, 
/*31683*/     OPC_EmitInteger, MVT::i32, 0, 
/*31686*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SIN_cm), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (SIN_HW:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (SIN_cm:f32 f32:f32:$src0)
/*31706*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 23|128,2/*279*/,  TARGET_VAL(AMDGPUISD::COS_HW),// ->31990
/*31711*/   OPC_RecordChild0, // #0 = $src0
/*31712*/   OPC_CheckChild0Type, MVT::f32,
/*31714*/   OPC_CheckType, MVT::f32,
/*31716*/   OPC_Scope, 67, /*->31785*/ // 4 children in Scope
/*31718*/     OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*31720*/     OPC_EmitInteger, MVT::i32, 1, 
/*31723*/     OPC_EmitInteger, MVT::i32, 0, 
/*31726*/     OPC_EmitInteger, MVT::i32, 0, 
/*31729*/     OPC_EmitInteger, MVT::i32, 0, 
/*31732*/     OPC_EmitInteger, MVT::i32, 0, 
/*31735*/     OPC_EmitInteger, MVT::i32, 0, 
/*31738*/     OPC_EmitInteger, MVT::i32, 0, 
/*31741*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31753*/     OPC_EmitInteger, MVT::i32, 1, 
/*31756*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*31759*/     OPC_EmitInteger, MVT::i32, 0, 
/*31762*/     OPC_EmitInteger, MVT::i32, 0, 
/*31765*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::COS_r600), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (COS_HW:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (COS_r600:f32 f32:f32:$src0)
/*31785*/   /*Scope*/ 67, /*->31853*/
/*31786*/     OPC_CheckPatternPredicate, 6, // (Subtarget.getGeneration() == AMDGPUSubtarget::R700)
/*31788*/     OPC_EmitInteger, MVT::i32, 1, 
/*31791*/     OPC_EmitInteger, MVT::i32, 0, 
/*31794*/     OPC_EmitInteger, MVT::i32, 0, 
/*31797*/     OPC_EmitInteger, MVT::i32, 0, 
/*31800*/     OPC_EmitInteger, MVT::i32, 0, 
/*31803*/     OPC_EmitInteger, MVT::i32, 0, 
/*31806*/     OPC_EmitInteger, MVT::i32, 0, 
/*31809*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31821*/     OPC_EmitInteger, MVT::i32, 1, 
/*31824*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*31827*/     OPC_EmitInteger, MVT::i32, 0, 
/*31830*/     OPC_EmitInteger, MVT::i32, 0, 
/*31833*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::COS_r700), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (COS_HW:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (COS_r700:f32 f32:f32:$src0)
/*31853*/   /*Scope*/ 67, /*->31921*/
/*31854*/     OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*31856*/     OPC_EmitInteger, MVT::i32, 1, 
/*31859*/     OPC_EmitInteger, MVT::i32, 0, 
/*31862*/     OPC_EmitInteger, MVT::i32, 0, 
/*31865*/     OPC_EmitInteger, MVT::i32, 0, 
/*31868*/     OPC_EmitInteger, MVT::i32, 0, 
/*31871*/     OPC_EmitInteger, MVT::i32, 0, 
/*31874*/     OPC_EmitInteger, MVT::i32, 0, 
/*31877*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31889*/     OPC_EmitInteger, MVT::i32, 1, 
/*31892*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*31895*/     OPC_EmitInteger, MVT::i32, 0, 
/*31898*/     OPC_EmitInteger, MVT::i32, 0, 
/*31901*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::COS_eg), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (COS_HW:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (COS_eg:f32 f32:f32:$src0)
/*31921*/   /*Scope*/ 67, /*->31989*/
/*31922*/     OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*31924*/     OPC_EmitInteger, MVT::i32, 1, 
/*31927*/     OPC_EmitInteger, MVT::i32, 0, 
/*31930*/     OPC_EmitInteger, MVT::i32, 0, 
/*31933*/     OPC_EmitInteger, MVT::i32, 0, 
/*31936*/     OPC_EmitInteger, MVT::i32, 0, 
/*31939*/     OPC_EmitInteger, MVT::i32, 0, 
/*31942*/     OPC_EmitInteger, MVT::i32, 0, 
/*31945*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31957*/     OPC_EmitInteger, MVT::i32, 1, 
/*31960*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*31963*/     OPC_EmitInteger, MVT::i32, 0, 
/*31966*/     OPC_EmitInteger, MVT::i32, 0, 
/*31969*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::COS_cm), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (COS_HW:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (COS_cm:f32 f32:f32:$src0)
/*31989*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::FP_ROUND),// ->32006
/*31993*/   OPC_RecordChild0, // #0 = $src0
/*31994*/   OPC_CheckType, MVT::f32,
/*31996*/   OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*31998*/   OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CVT_F32_F64_e32), 0,
                1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
            // Src: (fround:f32 f64:f64:$src0) - Complexity = 3
            // Dst: (V_CVT_F32_F64_e32:f32 f64:f64:$src0)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::FP_EXTEND),// ->32024
/*32009*/   OPC_RecordChild0, // #0 = $src0
/*32010*/   OPC_CheckChild0Type, MVT::f32,
/*32012*/   OPC_CheckType, MVT::f64,
/*32014*/   OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*32016*/   OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CVT_F64_F32_e32), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (fextend:f64 f32:f32:$src0) - Complexity = 3
            // Dst: (V_CVT_F64_F32_e32:f64 f32:f32:$src0)
          /*SwitchOpcode*/ 23|128,4/*535*/,  TARGET_VAL(ISD::FSQRT),// ->32563
/*32028*/   OPC_RecordChild0, // #0 = $src0
/*32029*/   OPC_SwitchType /*2 cases */, 5|128,4/*517*/,  MVT::f32,// ->32550
/*32033*/     OPC_Scope, 10, /*->32045*/ // 4 children in Scope
/*32035*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*32037*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_SQRT_F32_e32), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fsqrt:f32 f32:f32:$src0) - Complexity = 3
                // Dst: (V_SQRT_F32_e32:f32 f32:f32:$src0)
/*32045*/     /*Scope*/ 38|128,1/*166*/, /*->32213*/
/*32047*/       OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*32049*/       OPC_EmitInteger, MVT::i32, 0, 
/*32052*/       OPC_EmitInteger, MVT::i32, 0, 
/*32055*/       OPC_EmitInteger, MVT::i32, 1, 
/*32058*/       OPC_EmitInteger, MVT::i32, 0, 
/*32061*/       OPC_EmitInteger, MVT::i32, 0, 
/*32064*/       OPC_EmitInteger, MVT::i32, 0, 
/*32067*/       OPC_EmitInteger, MVT::i32, 0, 
/*32070*/       OPC_EmitInteger, MVT::i32, 0, 
/*32073*/       OPC_EmitInteger, MVT::i32, 0, 
/*32076*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*32088*/       OPC_EmitInteger, MVT::i32, 1, 
/*32091*/       OPC_EmitInteger, MVT::i32, 0, 
/*32094*/       OPC_EmitInteger, MVT::i32, 0, 
/*32097*/       OPC_EmitInteger, MVT::i32, 0, 
/*32100*/       OPC_EmitInteger, MVT::i32, 0, 
/*32103*/       OPC_EmitInteger, MVT::i32, 0, 
/*32106*/       OPC_EmitInteger, MVT::i32, 0, 
/*32109*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*32121*/       OPC_EmitInteger, MVT::i32, 1, 
/*32124*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*32127*/       OPC_EmitInteger, MVT::i32, 0, 
/*32130*/       OPC_EmitInteger, MVT::i32, 0, 
/*32133*/       OPC_EmitNode, TARGET_VAL(AMDGPU::RECIPSQRT_CLAMPED_r600), 0,
                    1/*#VTs*/, MVT::i32, 13/*#Ops*/, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*32153*/       OPC_EmitInteger, MVT::i32, 0, 
/*32156*/       OPC_EmitInteger, MVT::i32, 0, 
/*32159*/       OPC_EmitInteger, MVT::i32, 0, 
/*32162*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*32174*/       OPC_EmitInteger, MVT::i32, 1, 
/*32177*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*32180*/       OPC_EmitInteger, MVT::i32, 0, 
/*32183*/       OPC_EmitInteger, MVT::i32, 0, 
/*32186*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MUL), 0,
                    1/*#VTs*/, MVT::f32, 20/*#Ops*/, 1, 2, 3, 4, 5, 6, 0, 7, 8, 9, 10, 23, 24, 25, 26, 27, 28, 29, 30, 31, 
                // Src: (fsqrt:f32 f32:f32:$src) - Complexity = 3
                // Dst: (MUL:f32 ?:f32:$src, (RECIPSQRT_CLAMPED_r600:i32 ?:f32:$src))
/*32213*/     /*Scope*/ 38|128,1/*166*/, /*->32381*/
/*32215*/       OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*32217*/       OPC_EmitInteger, MVT::i32, 0, 
/*32220*/       OPC_EmitInteger, MVT::i32, 0, 
/*32223*/       OPC_EmitInteger, MVT::i32, 1, 
/*32226*/       OPC_EmitInteger, MVT::i32, 0, 
/*32229*/       OPC_EmitInteger, MVT::i32, 0, 
/*32232*/       OPC_EmitInteger, MVT::i32, 0, 
/*32235*/       OPC_EmitInteger, MVT::i32, 0, 
/*32238*/       OPC_EmitInteger, MVT::i32, 0, 
/*32241*/       OPC_EmitInteger, MVT::i32, 0, 
/*32244*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*32256*/       OPC_EmitInteger, MVT::i32, 1, 
/*32259*/       OPC_EmitInteger, MVT::i32, 0, 
/*32262*/       OPC_EmitInteger, MVT::i32, 0, 
/*32265*/       OPC_EmitInteger, MVT::i32, 0, 
/*32268*/       OPC_EmitInteger, MVT::i32, 0, 
/*32271*/       OPC_EmitInteger, MVT::i32, 0, 
/*32274*/       OPC_EmitInteger, MVT::i32, 0, 
/*32277*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*32289*/       OPC_EmitInteger, MVT::i32, 1, 
/*32292*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*32295*/       OPC_EmitInteger, MVT::i32, 0, 
/*32298*/       OPC_EmitInteger, MVT::i32, 0, 
/*32301*/       OPC_EmitNode, TARGET_VAL(AMDGPU::RECIPSQRT_CLAMPED_eg), 0,
                    1/*#VTs*/, MVT::i32, 13/*#Ops*/, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*32321*/       OPC_EmitInteger, MVT::i32, 0, 
/*32324*/       OPC_EmitInteger, MVT::i32, 0, 
/*32327*/       OPC_EmitInteger, MVT::i32, 0, 
/*32330*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*32342*/       OPC_EmitInteger, MVT::i32, 1, 
/*32345*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*32348*/       OPC_EmitInteger, MVT::i32, 0, 
/*32351*/       OPC_EmitInteger, MVT::i32, 0, 
/*32354*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MUL), 0,
                    1/*#VTs*/, MVT::f32, 20/*#Ops*/, 1, 2, 3, 4, 5, 6, 0, 7, 8, 9, 10, 23, 24, 25, 26, 27, 28, 29, 30, 31, 
                // Src: (fsqrt:f32 f32:f32:$src) - Complexity = 3
                // Dst: (MUL:f32 ?:f32:$src, (RECIPSQRT_CLAMPED_eg:i32 ?:f32:$src))
/*32381*/     /*Scope*/ 38|128,1/*166*/, /*->32549*/
/*32383*/       OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*32385*/       OPC_EmitInteger, MVT::i32, 0, 
/*32388*/       OPC_EmitInteger, MVT::i32, 0, 
/*32391*/       OPC_EmitInteger, MVT::i32, 1, 
/*32394*/       OPC_EmitInteger, MVT::i32, 0, 
/*32397*/       OPC_EmitInteger, MVT::i32, 0, 
/*32400*/       OPC_EmitInteger, MVT::i32, 0, 
/*32403*/       OPC_EmitInteger, MVT::i32, 0, 
/*32406*/       OPC_EmitInteger, MVT::i32, 0, 
/*32409*/       OPC_EmitInteger, MVT::i32, 0, 
/*32412*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*32424*/       OPC_EmitInteger, MVT::i32, 1, 
/*32427*/       OPC_EmitInteger, MVT::i32, 0, 
/*32430*/       OPC_EmitInteger, MVT::i32, 0, 
/*32433*/       OPC_EmitInteger, MVT::i32, 0, 
/*32436*/       OPC_EmitInteger, MVT::i32, 0, 
/*32439*/       OPC_EmitInteger, MVT::i32, 0, 
/*32442*/       OPC_EmitInteger, MVT::i32, 0, 
/*32445*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*32457*/       OPC_EmitInteger, MVT::i32, 1, 
/*32460*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*32463*/       OPC_EmitInteger, MVT::i32, 0, 
/*32466*/       OPC_EmitInteger, MVT::i32, 0, 
/*32469*/       OPC_EmitNode, TARGET_VAL(AMDGPU::RECIPSQRT_CLAMPED_cm), 0,
                    1/*#VTs*/, MVT::i32, 13/*#Ops*/, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*32489*/       OPC_EmitInteger, MVT::i32, 0, 
/*32492*/       OPC_EmitInteger, MVT::i32, 0, 
/*32495*/       OPC_EmitInteger, MVT::i32, 0, 
/*32498*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*32510*/       OPC_EmitInteger, MVT::i32, 1, 
/*32513*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*32516*/       OPC_EmitInteger, MVT::i32, 0, 
/*32519*/       OPC_EmitInteger, MVT::i32, 0, 
/*32522*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MUL), 0,
                    1/*#VTs*/, MVT::f32, 20/*#Ops*/, 1, 2, 3, 4, 5, 6, 0, 7, 8, 9, 10, 23, 24, 25, 26, 27, 28, 29, 30, 31, 
                // Src: (fsqrt:f32 f32:f32:$src) - Complexity = 3
                // Dst: (MUL:f32 R600_Reg32:f32:$src, (RECIPSQRT_CLAMPED_cm:i32 ?:f32:$src))
/*32549*/     0, /*End of Scope*/
            /*SwitchType*/ 10,  MVT::f64,// ->32562
/*32552*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*32554*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_SQRT_F64_e32), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fsqrt:f64 f64:f64:$src0) - Complexity = 3
              // Dst: (V_SQRT_F64_e32:f64 f64:f64:$src0)
            0, // EndSwitchType
          /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::FSUB),// ->32596
/*32566*/   OPC_RecordChild0, // #0 = $src0
/*32567*/   OPC_RecordChild1, // #1 = $src1
/*32568*/   OPC_SwitchType /*2 cases */, 11,  MVT::f32,// ->32582
/*32571*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*32573*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_SUB_F32_e32), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fsub:f32 f32:f32:$src0, f32:f32:$src1) - Complexity = 3
              // Dst: (V_SUB_F32_e32:f32 f32:f32:$src0, f32:f32:$src1)
            /*SwitchType*/ 11,  MVT::f64,// ->32595
/*32584*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*32586*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_SUB_F64), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fsub:f64 f64:f64:$src0, f64:f64:$src1) - Complexity = 3
              // Dst: (V_SUB_F64:f64 ?:f64:$src0, ?:f64:$src1)
            0, // EndSwitchType
          /*SwitchOpcode*/ 65,  TARGET_VAL(ISD::FMA),// ->32664
/*32599*/   OPC_RecordChild0, // #0 = $src0
/*32600*/   OPC_RecordChild1, // #1 = $src1
/*32601*/   OPC_RecordChild2, // #2 = $src2
/*32602*/   OPC_SwitchType /*2 cases */, 28,  MVT::f32,// ->32633
/*32605*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*32607*/     OPC_EmitInteger, MVT::i32, 0, 
/*32610*/     OPC_EmitInteger, MVT::i32, 0, 
/*32613*/     OPC_EmitInteger, MVT::i32, 0, 
/*32616*/     OPC_EmitInteger, MVT::i32, 0, 
/*32619*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_FMA_F32), 0,
                  1/*#VTs*/, MVT::f32, 7/*#Ops*/, 0, 1, 2, 3, 4, 5, 6, 
              // Src: (fma:f32 f32:f32:$src0, f32:f32:$src1, f32:f32:$src2) - Complexity = 3
              // Dst: (V_FMA_F32:f32 f32:f32:$src0, f32:f32:$src1, f32:f32:$src2)
            /*SwitchType*/ 28,  MVT::f64,// ->32663
/*32635*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*32637*/     OPC_EmitInteger, MVT::i32, 0, 
/*32640*/     OPC_EmitInteger, MVT::i32, 0, 
/*32643*/     OPC_EmitInteger, MVT::i32, 0, 
/*32646*/     OPC_EmitInteger, MVT::i32, 0, 
/*32649*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_FMA_F64), 0,
                  1/*#VTs*/, MVT::f64, 7/*#Ops*/, 0, 1, 2, 3, 4, 5, 6, 
              // Src: (fma:f64 f64:f64:$src0, f64:f64:$src1, f64:f64:$src2) - Complexity = 3
              // Dst: (V_FMA_F64:f64 f64:f64:$src0, f64:f64:$src1, f64:f64:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 47,  TARGET_VAL(ISD::FABS),// ->32714
/*32667*/   OPC_RecordChild0, // #0 = $src
/*32668*/   OPC_CheckType, MVT::f32,
/*32670*/   OPC_Scope, 30, /*->32702*/ // 2 children in Scope
/*32672*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*32674*/     OPC_EmitInteger, MVT::i32, 0, 
/*32677*/     OPC_EmitInteger, MVT::i32, 1, 
/*32680*/     OPC_EmitInteger, MVT::i32, 0, 
/*32683*/     OPC_EmitInteger, MVT::i32, 0, 
/*32686*/     OPC_EmitInteger, MVT::i32, 0, 
/*32689*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_ADD_F32_e64), 0,
                  1/*#VTs*/, MVT::f32, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
              // Src: (fabs:f32 f32:f32:$src) - Complexity = 3
              // Dst: (V_ADD_F32_e64:f32 ?:f32:$src, 0:i32, 1:i32, 0:i32, 0:i32, 0:i32)
/*32702*/   /*Scope*/ 10, /*->32713*/
/*32703*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*32705*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::FABS_R600), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fabs:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (FABS_R600:f32 f32:f32:$src0)
/*32713*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 47,  TARGET_VAL(ISD::FNEG),// ->32764
/*32717*/   OPC_RecordChild0, // #0 = $src
/*32718*/   OPC_CheckType, MVT::f32,
/*32720*/   OPC_Scope, 30, /*->32752*/ // 2 children in Scope
/*32722*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*32724*/     OPC_EmitInteger, MVT::i32, 0, 
/*32727*/     OPC_EmitInteger, MVT::i32, 0, 
/*32730*/     OPC_EmitInteger, MVT::i32, 0, 
/*32733*/     OPC_EmitInteger, MVT::i32, 0, 
/*32736*/     OPC_EmitInteger, MVT::i32, 1, 
/*32739*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_ADD_F32_e64), 0,
                  1/*#VTs*/, MVT::f32, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
              // Src: (fneg:f32 f32:f32:$src) - Complexity = 3
              // Dst: (V_ADD_F32_e64:f32 ?:f32:$src, 0:i32, 0:i32, 0:i32, 0:i32, 1:i32)
/*32752*/   /*Scope*/ 10, /*->32763*/
/*32753*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*32755*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::FNEG_R600), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fneg:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (FNEG_R600:f32 f32:f32:$src0)
/*32763*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 93|128,5/*733*/,  TARGET_VAL(ISD::FPOW),// ->33501
/*32768*/   OPC_RecordChild0, // #0 = $src0
/*32769*/   OPC_RecordChild1, // #1 = $src1
/*32770*/   OPC_CheckType, MVT::f32,
/*32772*/   OPC_Scope, 103|128,1/*231*/, /*->33006*/ // 4 children in Scope
/*32775*/     OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*32777*/     OPC_EmitInteger, MVT::i32, 1, 
/*32780*/     OPC_EmitInteger, MVT::i32, 0, 
/*32783*/     OPC_EmitInteger, MVT::i32, 0, 
/*32786*/     OPC_EmitInteger, MVT::i32, 0, 
/*32789*/     OPC_EmitInteger, MVT::i32, 0, 
/*32792*/     OPC_EmitInteger, MVT::i32, 0, 
/*32795*/     OPC_EmitInteger, MVT::i32, 1, 
/*32798*/     OPC_EmitInteger, MVT::i32, 0, 
/*32801*/     OPC_EmitInteger, MVT::i32, 0, 
/*32804*/     OPC_EmitInteger, MVT::i32, 0, 
/*32807*/     OPC_EmitInteger, MVT::i32, 0, 
/*32810*/     OPC_EmitInteger, MVT::i32, 0, 
/*32813*/     OPC_EmitInteger, MVT::i32, 0, 
/*32816*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*32828*/     OPC_EmitInteger, MVT::i32, 1, 
/*32831*/     OPC_EmitInteger, MVT::i32, 0, 
/*32834*/     OPC_EmitInteger, MVT::i32, 0, 
/*32837*/     OPC_EmitInteger, MVT::i32, 0, 
/*32840*/     OPC_EmitInteger, MVT::i32, 0, 
/*32843*/     OPC_EmitInteger, MVT::i32, 0, 
/*32846*/     OPC_EmitInteger, MVT::i32, 0, 
/*32849*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*32861*/     OPC_EmitInteger, MVT::i32, 1, 
/*32864*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*32867*/     OPC_EmitInteger, MVT::i32, 0, 
/*32870*/     OPC_EmitInteger, MVT::i32, 0, 
/*32873*/     OPC_EmitNode, TARGET_VAL(AMDGPU::LOG_IEEE_r600), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 16, 17, 18, 19, 0, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/*32893*/     OPC_EmitInteger, MVT::i32, 0, 
/*32896*/     OPC_EmitInteger, MVT::i32, 0, 
/*32899*/     OPC_EmitInteger, MVT::i32, 0, 
/*32902*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*32914*/     OPC_EmitInteger, MVT::i32, 1, 
/*32917*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*32920*/     OPC_EmitInteger, MVT::i32, 0, 
/*32923*/     OPC_EmitInteger, MVT::i32, 0, 
/*32926*/     OPC_EmitNode, TARGET_VAL(AMDGPU::MUL), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 1, 12, 13, 14, 15, 28, 29, 30, 31, 32, 33, 34, 35, 36,  // Results = #37
/*32953*/     OPC_EmitInteger, MVT::i32, 0, 
/*32956*/     OPC_EmitInteger, MVT::i32, 0, 
/*32959*/     OPC_EmitInteger, MVT::i32, 0, 
/*32962*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*32974*/     OPC_EmitInteger, MVT::i32, 1, 
/*32977*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*32980*/     OPC_EmitInteger, MVT::i32, 0, 
/*32983*/     OPC_EmitInteger, MVT::i32, 0, 
/*32986*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EXP_IEEE_r600), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 2, 3, 4, 5, 37, 38, 39, 40, 41, 42, 43, 44, 45, 
              // Src: (fpow:f32 f32:f32:$src0, f32:f32:$src1) - Complexity = 3
              // Dst: (EXP_IEEE_r600:f32 (MUL:i32 f32:f32:$src1, (LOG_IEEE_r600:i32 f32:f32:$src0)))
/*33006*/   /*Scope*/ 103|128,1/*231*/, /*->33239*/
/*33008*/     OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*33010*/     OPC_EmitInteger, MVT::i32, 1, 
/*33013*/     OPC_EmitInteger, MVT::i32, 0, 
/*33016*/     OPC_EmitInteger, MVT::i32, 0, 
/*33019*/     OPC_EmitInteger, MVT::i32, 0, 
/*33022*/     OPC_EmitInteger, MVT::i32, 0, 
/*33025*/     OPC_EmitInteger, MVT::i32, 0, 
/*33028*/     OPC_EmitInteger, MVT::i32, 1, 
/*33031*/     OPC_EmitInteger, MVT::i32, 0, 
/*33034*/     OPC_EmitInteger, MVT::i32, 0, 
/*33037*/     OPC_EmitInteger, MVT::i32, 0, 
/*33040*/     OPC_EmitInteger, MVT::i32, 0, 
/*33043*/     OPC_EmitInteger, MVT::i32, 0, 
/*33046*/     OPC_EmitInteger, MVT::i32, 0, 
/*33049*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*33061*/     OPC_EmitInteger, MVT::i32, 1, 
/*33064*/     OPC_EmitInteger, MVT::i32, 0, 
/*33067*/     OPC_EmitInteger, MVT::i32, 0, 
/*33070*/     OPC_EmitInteger, MVT::i32, 0, 
/*33073*/     OPC_EmitInteger, MVT::i32, 0, 
/*33076*/     OPC_EmitInteger, MVT::i32, 0, 
/*33079*/     OPC_EmitInteger, MVT::i32, 0, 
/*33082*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*33094*/     OPC_EmitInteger, MVT::i32, 1, 
/*33097*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*33100*/     OPC_EmitInteger, MVT::i32, 0, 
/*33103*/     OPC_EmitInteger, MVT::i32, 0, 
/*33106*/     OPC_EmitNode, TARGET_VAL(AMDGPU::LOG_IEEE_eg), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 16, 17, 18, 19, 0, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/*33126*/     OPC_EmitInteger, MVT::i32, 0, 
/*33129*/     OPC_EmitInteger, MVT::i32, 0, 
/*33132*/     OPC_EmitInteger, MVT::i32, 0, 
/*33135*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*33147*/     OPC_EmitInteger, MVT::i32, 1, 
/*33150*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*33153*/     OPC_EmitInteger, MVT::i32, 0, 
/*33156*/     OPC_EmitInteger, MVT::i32, 0, 
/*33159*/     OPC_EmitNode, TARGET_VAL(AMDGPU::MUL), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 1, 12, 13, 14, 15, 28, 29, 30, 31, 32, 33, 34, 35, 36,  // Results = #37
/*33186*/     OPC_EmitInteger, MVT::i32, 0, 
/*33189*/     OPC_EmitInteger, MVT::i32, 0, 
/*33192*/     OPC_EmitInteger, MVT::i32, 0, 
/*33195*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*33207*/     OPC_EmitInteger, MVT::i32, 1, 
/*33210*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*33213*/     OPC_EmitInteger, MVT::i32, 0, 
/*33216*/     OPC_EmitInteger, MVT::i32, 0, 
/*33219*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EXP_IEEE_eg), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 2, 3, 4, 5, 37, 38, 39, 40, 41, 42, 43, 44, 45, 
              // Src: (fpow:f32 f32:f32:$src0, f32:f32:$src1) - Complexity = 3
              // Dst: (EXP_IEEE_eg:f32 (MUL:i32 f32:f32:$src1, (LOG_IEEE_eg:i32 f32:f32:$src0)))
/*33239*/   /*Scope*/ 103|128,1/*231*/, /*->33472*/
/*33241*/     OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*33243*/     OPC_EmitInteger, MVT::i32, 1, 
/*33246*/     OPC_EmitInteger, MVT::i32, 0, 
/*33249*/     OPC_EmitInteger, MVT::i32, 0, 
/*33252*/     OPC_EmitInteger, MVT::i32, 0, 
/*33255*/     OPC_EmitInteger, MVT::i32, 0, 
/*33258*/     OPC_EmitInteger, MVT::i32, 0, 
/*33261*/     OPC_EmitInteger, MVT::i32, 1, 
/*33264*/     OPC_EmitInteger, MVT::i32, 0, 
/*33267*/     OPC_EmitInteger, MVT::i32, 0, 
/*33270*/     OPC_EmitInteger, MVT::i32, 0, 
/*33273*/     OPC_EmitInteger, MVT::i32, 0, 
/*33276*/     OPC_EmitInteger, MVT::i32, 0, 
/*33279*/     OPC_EmitInteger, MVT::i32, 0, 
/*33282*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*33294*/     OPC_EmitInteger, MVT::i32, 1, 
/*33297*/     OPC_EmitInteger, MVT::i32, 0, 
/*33300*/     OPC_EmitInteger, MVT::i32, 0, 
/*33303*/     OPC_EmitInteger, MVT::i32, 0, 
/*33306*/     OPC_EmitInteger, MVT::i32, 0, 
/*33309*/     OPC_EmitInteger, MVT::i32, 0, 
/*33312*/     OPC_EmitInteger, MVT::i32, 0, 
/*33315*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*33327*/     OPC_EmitInteger, MVT::i32, 1, 
/*33330*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*33333*/     OPC_EmitInteger, MVT::i32, 0, 
/*33336*/     OPC_EmitInteger, MVT::i32, 0, 
/*33339*/     OPC_EmitNode, TARGET_VAL(AMDGPU::LOG_IEEE_cm), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 16, 17, 18, 19, 0, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/*33359*/     OPC_EmitInteger, MVT::i32, 0, 
/*33362*/     OPC_EmitInteger, MVT::i32, 0, 
/*33365*/     OPC_EmitInteger, MVT::i32, 0, 
/*33368*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*33380*/     OPC_EmitInteger, MVT::i32, 1, 
/*33383*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*33386*/     OPC_EmitInteger, MVT::i32, 0, 
/*33389*/     OPC_EmitInteger, MVT::i32, 0, 
/*33392*/     OPC_EmitNode, TARGET_VAL(AMDGPU::MUL), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 1, 12, 13, 14, 15, 28, 29, 30, 31, 32, 33, 34, 35, 36,  // Results = #37
/*33419*/     OPC_EmitInteger, MVT::i32, 0, 
/*33422*/     OPC_EmitInteger, MVT::i32, 0, 
/*33425*/     OPC_EmitInteger, MVT::i32, 0, 
/*33428*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*33440*/     OPC_EmitInteger, MVT::i32, 1, 
/*33443*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*33446*/     OPC_EmitInteger, MVT::i32, 0, 
/*33449*/     OPC_EmitInteger, MVT::i32, 0, 
/*33452*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EXP_IEEE_cm), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 2, 3, 4, 5, 37, 38, 39, 40, 41, 42, 43, 44, 45, 
              // Src: (fpow:f32 f32:f32:$src0, f32:f32:$src1) - Complexity = 3
              // Dst: (EXP_IEEE_cm:f32 (MUL:i32 f32:f32:$src1, (LOG_IEEE_cm:i32 f32:f32:$src0)))
/*33472*/   /*Scope*/ 27, /*->33500*/
/*33473*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33475*/     OPC_EmitNode, TARGET_VAL(AMDGPU::V_LOG_F32_e32), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0,  // Results = #2
/*33483*/     OPC_EmitNode, TARGET_VAL(AMDGPU::V_MUL_LEGACY_F32_e32), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*33492*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_EXP_F32_e32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 3, 
              // Src: (fpow:f32 f32:f32:$src0, f32:f32:$src1) - Complexity = 3
              // Dst: (V_EXP_F32_e32:f32 (V_MUL_LEGACY_F32_e32:i32 f32:f32:$src1, (V_LOG_F32_e32:i32 f32:f32:$src0)))
/*33500*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 37,  TARGET_VAL(ISD::FCOS),// ->33541
/*33504*/   OPC_RecordChild0, // #0 = $src0
/*33505*/   OPC_CheckType, MVT::f32,
/*33507*/   OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33509*/   OPC_EmitInteger, MVT::i32, 3|128,115|128,11|128,113|128,3/*1042479491*/, 
/*33516*/   OPC_EmitNode, TARGET_VAL(AMDGPU::V_MOV_B32_e32), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*33524*/   OPC_EmitNode, TARGET_VAL(AMDGPU::V_MUL_F32_e32), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*33533*/   OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_COS_F32_e32), 0,
                1/*#VTs*/, MVT::f32, 1/*#Ops*/, 3, 
            // Src: (fcos:f32 f32:f32:$src0) - Complexity = 3
            // Dst: (V_COS_F32_e32:f32 (V_MUL_F32_e32:i32 ?:f32:$src0, (V_MOV_B32_e32:i32 1042479491:i32)))
          /*SwitchOpcode*/ 37,  TARGET_VAL(ISD::FSIN),// ->33581
/*33544*/   OPC_RecordChild0, // #0 = $src0
/*33545*/   OPC_CheckType, MVT::f32,
/*33547*/   OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33549*/   OPC_EmitInteger, MVT::i32, 3|128,115|128,11|128,113|128,3/*1042479491*/, 
/*33556*/   OPC_EmitNode, TARGET_VAL(AMDGPU::V_MOV_B32_e32), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*33564*/   OPC_EmitNode, TARGET_VAL(AMDGPU::V_MUL_F32_e32), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*33573*/   OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_SIN_F32_e32), 0,
                1/*#VTs*/, MVT::f32, 1/*#Ops*/, 3, 
            // Src: (fsin:f32 f32:f32:$src0) - Complexity = 3
            // Dst: (V_SIN_F32_e32:f32 (V_MUL_F32_e32:i32 ?:f32:$src0, (V_MOV_B32_e32:i32 1042479491:i32)))
          /*SwitchOpcode*/ 29|128,13/*1693*/,  TARGET_VAL(ISD::INSERT_VECTOR_ELT),// ->35278
/*33585*/   OPC_RecordChild0, // #0 = $vec
/*33586*/   OPC_RecordChild1, // #1 = $elem
/*33587*/   OPC_Scope, 87|128,5/*727*/, /*->34317*/ // 2 children in Scope
/*33590*/     OPC_CheckChild1Type, MVT::i32,
/*33592*/     OPC_MoveChild, 2,
/*33594*/     OPC_Scope, 111, /*->33707*/ // 16 children in Scope
/*33596*/       OPC_CheckInteger, 0, 
/*33598*/       OPC_MoveParent,
/*33599*/       OPC_SwitchType /*4 cases */, 34,  MVT::v4i32,// ->33636
/*33602*/         OPC_Scope, 15, /*->33619*/ // 2 children in Scope
/*33604*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*33606*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*33609*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v4i32 v4i32:v4i32:$vec, i32:i32:$elem, 0:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v4i32 ?:v4i32:$vec, ?:i32:$elem, sub0:i32)
/*33619*/         /*Scope*/ 15, /*->33635*/
/*33620*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33622*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*33625*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v4i32 v4i32:v4i32:$vec, i32:i32:$elem, 0:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v4i32 ?:v4i32:$vec, ?:i32:$elem, sub0:i32)
/*33635*/         0, /*End of Scope*/
                /*SwitchType*/ 34,  MVT::v2i32,// ->33672
/*33638*/         OPC_Scope, 15, /*->33655*/ // 2 children in Scope
/*33640*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*33642*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*33645*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v2i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v2i32 v2i32:v2i32:$vec, i32:i32:$elem, 0:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v2i32 ?:v2i32:$vec, ?:i32:$elem, sub0:i32)
/*33655*/         /*Scope*/ 15, /*->33671*/
/*33656*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33658*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*33661*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v2i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v2i32 v2i32:v2i32:$vec, i32:i32:$elem, 0:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v2i32 ?:v2i32:$vec, ?:i32:$elem, sub0:i32)
/*33671*/         0, /*End of Scope*/
                /*SwitchType*/ 15,  MVT::v8i32,// ->33689
/*33674*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33676*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*33679*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v8i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v8i32 v8i32:v8i32:$vec, i32:i32:$elem, 0:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v8i32 ?:v8i32:$vec, ?:i32:$elem, sub0:i32)
                /*SwitchType*/ 15,  MVT::v16i32,// ->33706
/*33691*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33693*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*33696*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 0:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub0:i32)
                0, // EndSwitchType
/*33707*/     /*Scope*/ 111, /*->33819*/
/*33708*/       OPC_CheckInteger, 1, 
/*33710*/       OPC_MoveParent,
/*33711*/       OPC_SwitchType /*4 cases */, 34,  MVT::v4i32,// ->33748
/*33714*/         OPC_Scope, 15, /*->33731*/ // 2 children in Scope
/*33716*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*33718*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*33721*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v4i32 v4i32:v4i32:$vec, i32:i32:$elem, 1:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v4i32 ?:v4i32:$vec, ?:i32:$elem, sub1:i32)
/*33731*/         /*Scope*/ 15, /*->33747*/
/*33732*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33734*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*33737*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v4i32 v4i32:v4i32:$vec, i32:i32:$elem, 1:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v4i32 ?:v4i32:$vec, ?:i32:$elem, sub1:i32)
/*33747*/         0, /*End of Scope*/
                /*SwitchType*/ 34,  MVT::v2i32,// ->33784
/*33750*/         OPC_Scope, 15, /*->33767*/ // 2 children in Scope
/*33752*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*33754*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*33757*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v2i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v2i32 v2i32:v2i32:$vec, i32:i32:$elem, 1:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v2i32 ?:v2i32:$vec, ?:i32:$elem, sub1:i32)
/*33767*/         /*Scope*/ 15, /*->33783*/
/*33768*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33770*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*33773*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v2i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v2i32 v2i32:v2i32:$vec, i32:i32:$elem, 1:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v2i32 ?:v2i32:$vec, ?:i32:$elem, sub1:i32)
/*33783*/         0, /*End of Scope*/
                /*SwitchType*/ 15,  MVT::v8i32,// ->33801
/*33786*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33788*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*33791*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v8i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v8i32 v8i32:v8i32:$vec, i32:i32:$elem, 1:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v8i32 ?:v8i32:$vec, ?:i32:$elem, sub1:i32)
                /*SwitchType*/ 15,  MVT::v16i32,// ->33818
/*33803*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33805*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*33808*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 1:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub1:i32)
                0, // EndSwitchType
/*33819*/     /*Scope*/ 92, /*->33912*/
/*33820*/       OPC_CheckInteger, 2, 
/*33822*/       OPC_MoveParent,
/*33823*/       OPC_SwitchType /*4 cases */, 34,  MVT::v4i32,// ->33860
/*33826*/         OPC_Scope, 15, /*->33843*/ // 2 children in Scope
/*33828*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*33830*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*33833*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v4i32 v4i32:v4i32:$vec, i32:i32:$elem, 2:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v4i32 ?:v4i32:$vec, ?:i32:$elem, sub2:i32)
/*33843*/         /*Scope*/ 15, /*->33859*/
/*33844*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33846*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*33849*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v4i32 v4i32:v4i32:$vec, i32:i32:$elem, 2:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v4i32 ?:v4i32:$vec, ?:i32:$elem, sub2:i32)
/*33859*/         0, /*End of Scope*/
                /*SwitchType*/ 15,  MVT::v2i32,// ->33877
/*33862*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33864*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*33867*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v2i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v2i32 v2i32:v2i32:$vec, i32:i32:$elem, 2:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v2i32 ?:v2i32:$vec, ?:i32:$elem, sub2:i32)
                /*SwitchType*/ 15,  MVT::v8i32,// ->33894
/*33879*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33881*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*33884*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v8i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v8i32 v8i32:v8i32:$vec, i32:i32:$elem, 2:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v8i32 ?:v8i32:$vec, ?:i32:$elem, sub2:i32)
                /*SwitchType*/ 15,  MVT::v16i32,// ->33911
/*33896*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33898*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*33901*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 2:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub2:i32)
                0, // EndSwitchType
/*33912*/     /*Scope*/ 75, /*->33988*/
/*33913*/       OPC_CheckInteger, 3, 
/*33915*/       OPC_MoveParent,
/*33916*/       OPC_SwitchType /*3 cases */, 34,  MVT::v4i32,// ->33953
/*33919*/         OPC_Scope, 15, /*->33936*/ // 2 children in Scope
/*33921*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*33923*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*33926*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v4i32 v4i32:v4i32:$vec, i32:i32:$elem, 3:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v4i32 ?:v4i32:$vec, ?:i32:$elem, sub3:i32)
/*33936*/         /*Scope*/ 15, /*->33952*/
/*33937*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33939*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*33942*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v4i32 v4i32:v4i32:$vec, i32:i32:$elem, 3:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v4i32 ?:v4i32:$vec, ?:i32:$elem, sub3:i32)
/*33952*/         0, /*End of Scope*/
                /*SwitchType*/ 15,  MVT::v8i32,// ->33970
/*33955*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33957*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*33960*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v8i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v8i32 v8i32:v8i32:$vec, i32:i32:$elem, 3:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v8i32 ?:v8i32:$vec, ?:i32:$elem, sub3:i32)
                /*SwitchType*/ 15,  MVT::v16i32,// ->33987
/*33972*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33974*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*33977*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 3:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub3:i32)
                0, // EndSwitchType
/*33988*/     /*Scope*/ 39, /*->34028*/
/*33989*/       OPC_CheckInteger, 4, 
/*33991*/       OPC_MoveParent,
/*33992*/       OPC_SwitchType /*2 cases */, 15,  MVT::v8i32,// ->34010
/*33995*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33997*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub4,
/*34000*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v8i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v8i32 v8i32:v8i32:$vec, i32:i32:$elem, 4:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v8i32 ?:v8i32:$vec, ?:i32:$elem, sub4:i32)
                /*SwitchType*/ 15,  MVT::v16i32,// ->34027
/*34012*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34014*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub4,
/*34017*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 4:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub4:i32)
                0, // EndSwitchType
/*34028*/     /*Scope*/ 39, /*->34068*/
/*34029*/       OPC_CheckInteger, 5, 
/*34031*/       OPC_MoveParent,
/*34032*/       OPC_SwitchType /*2 cases */, 15,  MVT::v8i32,// ->34050
/*34035*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34037*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub5,
/*34040*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v8i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v8i32 v8i32:v8i32:$vec, i32:i32:$elem, 5:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v8i32 ?:v8i32:$vec, ?:i32:$elem, sub5:i32)
                /*SwitchType*/ 15,  MVT::v16i32,// ->34067
/*34052*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34054*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub5,
/*34057*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 5:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub5:i32)
                0, // EndSwitchType
/*34068*/     /*Scope*/ 39, /*->34108*/
/*34069*/       OPC_CheckInteger, 6, 
/*34071*/       OPC_MoveParent,
/*34072*/       OPC_SwitchType /*2 cases */, 15,  MVT::v8i32,// ->34090
/*34075*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34077*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub6,
/*34080*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v8i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v8i32 v8i32:v8i32:$vec, i32:i32:$elem, 6:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v8i32 ?:v8i32:$vec, ?:i32:$elem, sub6:i32)
                /*SwitchType*/ 15,  MVT::v16i32,// ->34107
/*34092*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34094*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub6,
/*34097*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 6:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub6:i32)
                0, // EndSwitchType
/*34108*/     /*Scope*/ 39, /*->34148*/
/*34109*/       OPC_CheckInteger, 7, 
/*34111*/       OPC_MoveParent,
/*34112*/       OPC_SwitchType /*2 cases */, 15,  MVT::v8i32,// ->34130
/*34115*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34117*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub7,
/*34120*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v8i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v8i32 v8i32:v8i32:$vec, i32:i32:$elem, 7:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v8i32 ?:v8i32:$vec, ?:i32:$elem, sub7:i32)
                /*SwitchType*/ 15,  MVT::v16i32,// ->34147
/*34132*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34134*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub7,
/*34137*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 7:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub7:i32)
                0, // EndSwitchType
/*34148*/     /*Scope*/ 20, /*->34169*/
/*34149*/       OPC_CheckInteger, 8, 
/*34151*/       OPC_MoveParent,
/*34152*/       OPC_CheckType, MVT::v16i32,
/*34154*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34156*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub8,
/*34159*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 8:iPTR) - Complexity = 8
                // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub8:i32)
/*34169*/     /*Scope*/ 20, /*->34190*/
/*34170*/       OPC_CheckInteger, 9, 
/*34172*/       OPC_MoveParent,
/*34173*/       OPC_CheckType, MVT::v16i32,
/*34175*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34177*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub9,
/*34180*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 9:iPTR) - Complexity = 8
                // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub9:i32)
/*34190*/     /*Scope*/ 20, /*->34211*/
/*34191*/       OPC_CheckInteger, 10, 
/*34193*/       OPC_MoveParent,
/*34194*/       OPC_CheckType, MVT::v16i32,
/*34196*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34198*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub10,
/*34201*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 10:iPTR) - Complexity = 8
                // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub10:i32)
/*34211*/     /*Scope*/ 20, /*->34232*/
/*34212*/       OPC_CheckInteger, 11, 
/*34214*/       OPC_MoveParent,
/*34215*/       OPC_CheckType, MVT::v16i32,
/*34217*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34219*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub11,
/*34222*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 11:iPTR) - Complexity = 8
                // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub11:i32)
/*34232*/     /*Scope*/ 20, /*->34253*/
/*34233*/       OPC_CheckInteger, 12, 
/*34235*/       OPC_MoveParent,
/*34236*/       OPC_CheckType, MVT::v16i32,
/*34238*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34240*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub12,
/*34243*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 12:iPTR) - Complexity = 8
                // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub12:i32)
/*34253*/     /*Scope*/ 20, /*->34274*/
/*34254*/       OPC_CheckInteger, 13, 
/*34256*/       OPC_MoveParent,
/*34257*/       OPC_CheckType, MVT::v16i32,
/*34259*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34261*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub13,
/*34264*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 13:iPTR) - Complexity = 8
                // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub13:i32)
/*34274*/     /*Scope*/ 20, /*->34295*/
/*34275*/       OPC_CheckInteger, 14, 
/*34277*/       OPC_MoveParent,
/*34278*/       OPC_CheckType, MVT::v16i32,
/*34280*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34282*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub14,
/*34285*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 14:iPTR) - Complexity = 8
                // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub14:i32)
/*34295*/     /*Scope*/ 20, /*->34316*/
/*34296*/       OPC_CheckInteger, 15, 
/*34298*/       OPC_MoveParent,
/*34299*/       OPC_CheckType, MVT::v16i32,
/*34301*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34303*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub15,
/*34306*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 15:iPTR) - Complexity = 8
                // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub15:i32)
/*34316*/     0, /*End of Scope*/
/*34317*/   /*Scope*/ 62|128,7/*958*/, /*->35277*/
/*34319*/     OPC_CheckChild1Type, MVT::f32,
/*34321*/     OPC_Scope, 74|128,6/*842*/, /*->35166*/ // 2 children in Scope
/*34324*/       OPC_MoveChild, 2,
/*34326*/       OPC_Scope, 116, /*->34444*/ // 17 children in Scope
/*34328*/         OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*34331*/         OPC_RecordChild0, // #2 = $idx
/*34332*/         OPC_RecordChild1, // #3 = $off
/*34333*/         OPC_MoveChild, 1,
/*34335*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*34338*/         OPC_MoveParent,
/*34339*/         OPC_CheckType, MVT::i32,
/*34341*/         OPC_MoveParent,
/*34342*/         OPC_SwitchType /*4 cases */, 23,  MVT::v2f32,// ->34368
/*34345*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34347*/           OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                        1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #4
/*34354*/           OPC_EmitConvertToTarget, 3,
/*34356*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_DST_V2), 0,
                        1/*#VTs*/, MVT::v2f32, 5/*#Ops*/, 4, 0, 2, 5, 1, 
                    // Src: (vector_insert:v2f32 v2f32:v2f32:$vec, f32:f32:$val, (add:i32 i32:i32:$idx, (imm:i32):$off)) - Complexity = 9
                    // Dst: (SI_INDIRECT_DST_V2:v2f32 (IMPLICIT_DEF:i1), ?:v2f32:$vec, ?:i32:$idx, (imm:i32):$off, ?:f32:$val)
                  /*SwitchType*/ 23,  MVT::v4f32,// ->34393
/*34370*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34372*/           OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                        1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #4
/*34379*/           OPC_EmitConvertToTarget, 3,
/*34381*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_DST_V4), 0,
                        1/*#VTs*/, MVT::v4f32, 5/*#Ops*/, 4, 0, 2, 5, 1, 
                    // Src: (vector_insert:v4f32 v4f32:v4f32:$vec, f32:f32:$val, (add:i32 i32:i32:$idx, (imm:i32):$off)) - Complexity = 9
                    // Dst: (SI_INDIRECT_DST_V4:v4f32 (IMPLICIT_DEF:i1), ?:v4f32:$vec, ?:i32:$idx, (imm:i32):$off, ?:f32:$val)
                  /*SwitchType*/ 23,  MVT::v8f32,// ->34418
/*34395*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34397*/           OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                        1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #4
/*34404*/           OPC_EmitConvertToTarget, 3,
/*34406*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_DST_V8), 0,
                        1/*#VTs*/, MVT::v8f32, 5/*#Ops*/, 4, 0, 2, 5, 1, 
                    // Src: (vector_insert:v8f32 v8f32:v8f32:$vec, f32:f32:$val, (add:i32 i32:i32:$idx, (imm:i32):$off)) - Complexity = 9
                    // Dst: (SI_INDIRECT_DST_V8:v8f32 (IMPLICIT_DEF:i1), ?:v8f32:$vec, ?:i32:$idx, (imm:i32):$off, ?:f32:$val)
                  /*SwitchType*/ 23,  MVT::v16f32,// ->34443
/*34420*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34422*/           OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                        1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #4
/*34429*/           OPC_EmitConvertToTarget, 3,
/*34431*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_DST_V16), 0,
                        1/*#VTs*/, MVT::v16f32, 5/*#Ops*/, 4, 0, 2, 5, 1, 
                    // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$val, (add:i32 i32:i32:$idx, (imm:i32):$off)) - Complexity = 9
                    // Dst: (SI_INDIRECT_DST_V16:v16f32 (IMPLICIT_DEF:i1), ?:v16f32:$vec, ?:i32:$idx, (imm:i32):$off, ?:f32:$val)
                  0, // EndSwitchType
/*34444*/       /*Scope*/ 111, /*->34556*/
/*34445*/         OPC_CheckInteger, 0, 
/*34447*/         OPC_MoveParent,
/*34448*/         OPC_SwitchType /*4 cases */, 34,  MVT::v4f32,// ->34485
/*34451*/           OPC_Scope, 15, /*->34468*/ // 2 children in Scope
/*34453*/             OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*34455*/             OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*34458*/             OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                          1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                      // Src: (vector_insert:v4f32 v4f32:v4f32:$vec, f32:f32:$elem, 0:iPTR) - Complexity = 8
                      // Dst: (INSERT_SUBREG:v4f32 ?:v4f32:$vec, ?:f32:$elem, sub0:i32)
/*34468*/           /*Scope*/ 15, /*->34484*/
/*34469*/             OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34471*/             OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*34474*/             OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                          1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                      // Src: (vector_insert:v4f32 v4f32:v4f32:$vec, f32:f32:$elem, 0:iPTR) - Complexity = 8
                      // Dst: (INSERT_SUBREG:v4f32 ?:v4f32:$vec, ?:f32:$elem, sub0:i32)
/*34484*/           0, /*End of Scope*/
                  /*SwitchType*/ 34,  MVT::v2f32,// ->34521
/*34487*/           OPC_Scope, 15, /*->34504*/ // 2 children in Scope
/*34489*/             OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*34491*/             OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*34494*/             OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                          1/*#VTs*/, MVT::v2f32, 3/*#Ops*/, 0, 1, 2, 
                      // Src: (vector_insert:v2f32 v2f32:v2f32:$vec, f32:f32:$elem, 0:iPTR) - Complexity = 8
                      // Dst: (INSERT_SUBREG:v2f32 ?:v2f32:$vec, ?:f32:$elem, sub0:i32)
/*34504*/           /*Scope*/ 15, /*->34520*/
/*34505*/             OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34507*/             OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*34510*/             OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                          1/*#VTs*/, MVT::v2f32, 3/*#Ops*/, 0, 1, 2, 
                      // Src: (vector_insert:v2f32 v2f32:v2f32:$vec, f32:f32:$elem, 0:iPTR) - Complexity = 8
                      // Dst: (INSERT_SUBREG:v2f32 ?:v2f32:$vec, ?:f32:$elem, sub0:i32)
/*34520*/           0, /*End of Scope*/
                  /*SwitchType*/ 15,  MVT::v8f32,// ->34538
/*34523*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34525*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*34528*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v8f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v8f32 v8f32:v8f32:$vec, f32:f32:$elem, 0:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v8f32 ?:v8f32:$vec, ?:f32:$elem, sub0:i32)
                  /*SwitchType*/ 15,  MVT::v16f32,// ->34555
/*34540*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34542*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*34545*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 0:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub0:i32)
                  0, // EndSwitchType
/*34556*/       /*Scope*/ 111, /*->34668*/
/*34557*/         OPC_CheckInteger, 1, 
/*34559*/         OPC_MoveParent,
/*34560*/         OPC_SwitchType /*4 cases */, 34,  MVT::v4f32,// ->34597
/*34563*/           OPC_Scope, 15, /*->34580*/ // 2 children in Scope
/*34565*/             OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*34567*/             OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*34570*/             OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                          1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                      // Src: (vector_insert:v4f32 v4f32:v4f32:$vec, f32:f32:$elem, 1:iPTR) - Complexity = 8
                      // Dst: (INSERT_SUBREG:v4f32 ?:v4f32:$vec, ?:f32:$elem, sub1:i32)
/*34580*/           /*Scope*/ 15, /*->34596*/
/*34581*/             OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34583*/             OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*34586*/             OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                          1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                      // Src: (vector_insert:v4f32 v4f32:v4f32:$vec, f32:f32:$elem, 1:iPTR) - Complexity = 8
                      // Dst: (INSERT_SUBREG:v4f32 ?:v4f32:$vec, ?:f32:$elem, sub1:i32)
/*34596*/           0, /*End of Scope*/
                  /*SwitchType*/ 34,  MVT::v2f32,// ->34633
/*34599*/           OPC_Scope, 15, /*->34616*/ // 2 children in Scope
/*34601*/             OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*34603*/             OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*34606*/             OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                          1/*#VTs*/, MVT::v2f32, 3/*#Ops*/, 0, 1, 2, 
                      // Src: (vector_insert:v2f32 v2f32:v2f32:$vec, f32:f32:$elem, 1:iPTR) - Complexity = 8
                      // Dst: (INSERT_SUBREG:v2f32 ?:v2f32:$vec, ?:f32:$elem, sub1:i32)
/*34616*/           /*Scope*/ 15, /*->34632*/
/*34617*/             OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34619*/             OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*34622*/             OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                          1/*#VTs*/, MVT::v2f32, 3/*#Ops*/, 0, 1, 2, 
                      // Src: (vector_insert:v2f32 v2f32:v2f32:$vec, f32:f32:$elem, 1:iPTR) - Complexity = 8
                      // Dst: (INSERT_SUBREG:v2f32 ?:v2f32:$vec, ?:f32:$elem, sub1:i32)
/*34632*/           0, /*End of Scope*/
                  /*SwitchType*/ 15,  MVT::v8f32,// ->34650
/*34635*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34637*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*34640*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v8f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v8f32 v8f32:v8f32:$vec, f32:f32:$elem, 1:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v8f32 ?:v8f32:$vec, ?:f32:$elem, sub1:i32)
                  /*SwitchType*/ 15,  MVT::v16f32,// ->34667
/*34652*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34654*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*34657*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 1:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub1:i32)
                  0, // EndSwitchType
/*34668*/       /*Scope*/ 92, /*->34761*/
/*34669*/         OPC_CheckInteger, 2, 
/*34671*/         OPC_MoveParent,
/*34672*/         OPC_SwitchType /*4 cases */, 34,  MVT::v4f32,// ->34709
/*34675*/           OPC_Scope, 15, /*->34692*/ // 2 children in Scope
/*34677*/             OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*34679*/             OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*34682*/             OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                          1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                      // Src: (vector_insert:v4f32 v4f32:v4f32:$vec, f32:f32:$elem, 2:iPTR) - Complexity = 8
                      // Dst: (INSERT_SUBREG:v4f32 ?:v4f32:$vec, ?:f32:$elem, sub2:i32)
/*34692*/           /*Scope*/ 15, /*->34708*/
/*34693*/             OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34695*/             OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*34698*/             OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                          1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                      // Src: (vector_insert:v4f32 v4f32:v4f32:$vec, f32:f32:$elem, 2:iPTR) - Complexity = 8
                      // Dst: (INSERT_SUBREG:v4f32 ?:v4f32:$vec, ?:f32:$elem, sub2:i32)
/*34708*/           0, /*End of Scope*/
                  /*SwitchType*/ 15,  MVT::v2f32,// ->34726
/*34711*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34713*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*34716*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v2f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v2f32 v2f32:v2f32:$vec, f32:f32:$elem, 2:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v2f32 ?:v2f32:$vec, ?:f32:$elem, sub2:i32)
                  /*SwitchType*/ 15,  MVT::v8f32,// ->34743
/*34728*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34730*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*34733*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v8f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v8f32 v8f32:v8f32:$vec, f32:f32:$elem, 2:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v8f32 ?:v8f32:$vec, ?:f32:$elem, sub2:i32)
                  /*SwitchType*/ 15,  MVT::v16f32,// ->34760
/*34745*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34747*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*34750*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 2:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub2:i32)
                  0, // EndSwitchType
/*34761*/       /*Scope*/ 75, /*->34837*/
/*34762*/         OPC_CheckInteger, 3, 
/*34764*/         OPC_MoveParent,
/*34765*/         OPC_SwitchType /*3 cases */, 34,  MVT::v4f32,// ->34802
/*34768*/           OPC_Scope, 15, /*->34785*/ // 2 children in Scope
/*34770*/             OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*34772*/             OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*34775*/             OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                          1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                      // Src: (vector_insert:v4f32 v4f32:v4f32:$vec, f32:f32:$elem, 3:iPTR) - Complexity = 8
                      // Dst: (INSERT_SUBREG:v4f32 ?:v4f32:$vec, ?:f32:$elem, sub3:i32)
/*34785*/           /*Scope*/ 15, /*->34801*/
/*34786*/             OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34788*/             OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*34791*/             OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                          1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                      // Src: (vector_insert:v4f32 v4f32:v4f32:$vec, f32:f32:$elem, 3:iPTR) - Complexity = 8
                      // Dst: (INSERT_SUBREG:v4f32 ?:v4f32:$vec, ?:f32:$elem, sub3:i32)
/*34801*/           0, /*End of Scope*/
                  /*SwitchType*/ 15,  MVT::v8f32,// ->34819
/*34804*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34806*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*34809*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v8f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v8f32 v8f32:v8f32:$vec, f32:f32:$elem, 3:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v8f32 ?:v8f32:$vec, ?:f32:$elem, sub3:i32)
                  /*SwitchType*/ 15,  MVT::v16f32,// ->34836
/*34821*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34823*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*34826*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 3:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub3:i32)
                  0, // EndSwitchType
/*34837*/       /*Scope*/ 39, /*->34877*/
/*34838*/         OPC_CheckInteger, 4, 
/*34840*/         OPC_MoveParent,
/*34841*/         OPC_SwitchType /*2 cases */, 15,  MVT::v8f32,// ->34859
/*34844*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34846*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub4,
/*34849*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v8f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v8f32 v8f32:v8f32:$vec, f32:f32:$elem, 4:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v8f32 ?:v8f32:$vec, ?:f32:$elem, sub4:i32)
                  /*SwitchType*/ 15,  MVT::v16f32,// ->34876
/*34861*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34863*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub4,
/*34866*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 4:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub4:i32)
                  0, // EndSwitchType
/*34877*/       /*Scope*/ 39, /*->34917*/
/*34878*/         OPC_CheckInteger, 5, 
/*34880*/         OPC_MoveParent,
/*34881*/         OPC_SwitchType /*2 cases */, 15,  MVT::v8f32,// ->34899
/*34884*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34886*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub5,
/*34889*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v8f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v8f32 v8f32:v8f32:$vec, f32:f32:$elem, 5:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v8f32 ?:v8f32:$vec, ?:f32:$elem, sub5:i32)
                  /*SwitchType*/ 15,  MVT::v16f32,// ->34916
/*34901*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34903*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub5,
/*34906*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 5:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub5:i32)
                  0, // EndSwitchType
/*34917*/       /*Scope*/ 39, /*->34957*/
/*34918*/         OPC_CheckInteger, 6, 
/*34920*/         OPC_MoveParent,
/*34921*/         OPC_SwitchType /*2 cases */, 15,  MVT::v8f32,// ->34939
/*34924*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34926*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub6,
/*34929*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v8f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v8f32 v8f32:v8f32:$vec, f32:f32:$elem, 6:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v8f32 ?:v8f32:$vec, ?:f32:$elem, sub6:i32)
                  /*SwitchType*/ 15,  MVT::v16f32,// ->34956
/*34941*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34943*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub6,
/*34946*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 6:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub6:i32)
                  0, // EndSwitchType
/*34957*/       /*Scope*/ 39, /*->34997*/
/*34958*/         OPC_CheckInteger, 7, 
/*34960*/         OPC_MoveParent,
/*34961*/         OPC_SwitchType /*2 cases */, 15,  MVT::v8f32,// ->34979
/*34964*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34966*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub7,
/*34969*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v8f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v8f32 v8f32:v8f32:$vec, f32:f32:$elem, 7:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v8f32 ?:v8f32:$vec, ?:f32:$elem, sub7:i32)
                  /*SwitchType*/ 15,  MVT::v16f32,// ->34996
/*34981*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34983*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub7,
/*34986*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 7:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub7:i32)
                  0, // EndSwitchType
/*34997*/       /*Scope*/ 20, /*->35018*/
/*34998*/         OPC_CheckInteger, 8, 
/*35000*/         OPC_MoveParent,
/*35001*/         OPC_CheckType, MVT::v16f32,
/*35003*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*35005*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub8,
/*35008*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 8:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub8:i32)
/*35018*/       /*Scope*/ 20, /*->35039*/
/*35019*/         OPC_CheckInteger, 9, 
/*35021*/         OPC_MoveParent,
/*35022*/         OPC_CheckType, MVT::v16f32,
/*35024*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*35026*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub9,
/*35029*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 9:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub9:i32)
/*35039*/       /*Scope*/ 20, /*->35060*/
/*35040*/         OPC_CheckInteger, 10, 
/*35042*/         OPC_MoveParent,
/*35043*/         OPC_CheckType, MVT::v16f32,
/*35045*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*35047*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub10,
/*35050*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 10:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub10:i32)
/*35060*/       /*Scope*/ 20, /*->35081*/
/*35061*/         OPC_CheckInteger, 11, 
/*35063*/         OPC_MoveParent,
/*35064*/         OPC_CheckType, MVT::v16f32,
/*35066*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*35068*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub11,
/*35071*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 11:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub11:i32)
/*35081*/       /*Scope*/ 20, /*->35102*/
/*35082*/         OPC_CheckInteger, 12, 
/*35084*/         OPC_MoveParent,
/*35085*/         OPC_CheckType, MVT::v16f32,
/*35087*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*35089*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub12,
/*35092*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 12:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub12:i32)
/*35102*/       /*Scope*/ 20, /*->35123*/
/*35103*/         OPC_CheckInteger, 13, 
/*35105*/         OPC_MoveParent,
/*35106*/         OPC_CheckType, MVT::v16f32,
/*35108*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*35110*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub13,
/*35113*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 13:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub13:i32)
/*35123*/       /*Scope*/ 20, /*->35144*/
/*35124*/         OPC_CheckInteger, 14, 
/*35126*/         OPC_MoveParent,
/*35127*/         OPC_CheckType, MVT::v16f32,
/*35129*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*35131*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub14,
/*35134*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 14:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub14:i32)
/*35144*/       /*Scope*/ 20, /*->35165*/
/*35145*/         OPC_CheckInteger, 15, 
/*35147*/         OPC_MoveParent,
/*35148*/         OPC_CheckType, MVT::v16f32,
/*35150*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*35152*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub15,
/*35155*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 15:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub15:i32)
/*35165*/       0, /*End of Scope*/
/*35166*/     /*Scope*/ 109, /*->35276*/
/*35167*/       OPC_RecordChild2, // #2 = $idx
/*35168*/       OPC_CheckChild2Type, MVT::i32,
/*35170*/       OPC_SwitchType /*4 cases */, 24,  MVT::v2f32,// ->35197
/*35173*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*35175*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #3
/*35182*/         OPC_EmitInteger, MVT::i32, 0, 
/*35185*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_DST_V2), 0,
                      1/*#VTs*/, MVT::v2f32, 5/*#Ops*/, 3, 0, 2, 4, 1, 
                  // Src: (vector_insert:v2f32 v2f32:v2f32:$vec, f32:f32:$val, i32:i32:$idx) - Complexity = 3
                  // Dst: (SI_INDIRECT_DST_V2:v2f32 (IMPLICIT_DEF:i1), ?:v2f32:$vec, ?:i32:$idx, 0:i32, ?:f32:$val)
                /*SwitchType*/ 24,  MVT::v4f32,// ->35223
/*35199*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*35201*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #3
/*35208*/         OPC_EmitInteger, MVT::i32, 0, 
/*35211*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_DST_V4), 0,
                      1/*#VTs*/, MVT::v4f32, 5/*#Ops*/, 3, 0, 2, 4, 1, 
                  // Src: (vector_insert:v4f32 v4f32:v4f32:$vec, f32:f32:$val, i32:i32:$idx) - Complexity = 3
                  // Dst: (SI_INDIRECT_DST_V4:v4f32 (IMPLICIT_DEF:i1), ?:v4f32:$vec, ?:i32:$idx, 0:i32, ?:f32:$val)
                /*SwitchType*/ 24,  MVT::v8f32,// ->35249
/*35225*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*35227*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #3
/*35234*/         OPC_EmitInteger, MVT::i32, 0, 
/*35237*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_DST_V8), 0,
                      1/*#VTs*/, MVT::v8f32, 5/*#Ops*/, 3, 0, 2, 4, 1, 
                  // Src: (vector_insert:v8f32 v8f32:v8f32:$vec, f32:f32:$val, i32:i32:$idx) - Complexity = 3
                  // Dst: (SI_INDIRECT_DST_V8:v8f32 (IMPLICIT_DEF:i1), ?:v8f32:$vec, ?:i32:$idx, 0:i32, ?:f32:$val)
                /*SwitchType*/ 24,  MVT::v16f32,// ->35275
/*35251*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*35253*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #3
/*35260*/         OPC_EmitInteger, MVT::i32, 0, 
/*35263*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_DST_V16), 0,
                      1/*#VTs*/, MVT::v16f32, 5/*#Ops*/, 3, 0, 2, 4, 1, 
                  // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$val, i32:i32:$idx) - Complexity = 3
                  // Dst: (SI_INDIRECT_DST_V16:v16f32 (IMPLICIT_DEF:i1), ?:v16f32:$vec, ?:i32:$idx, 0:i32, ?:f32:$val)
                0, // EndSwitchType
/*35276*/     0, /*End of Scope*/
/*35277*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 23|128,1/*151*/,  TARGET_VAL(ISD::BUILD_VECTOR),// ->35433
/*35282*/   OPC_RecordChild0, // #0 = $x
/*35283*/   OPC_SwitchType /*2 cases */, 72,  MVT::v4i32,// ->35358
/*35286*/     OPC_CheckChild0Type, MVT::i32,
/*35288*/     OPC_RecordChild1, // #1 = $y
/*35289*/     OPC_CheckChild1Type, MVT::i32,
/*35291*/     OPC_RecordChild2, // #2 = $z
/*35292*/     OPC_CheckChild2Type, MVT::i32,
/*35294*/     OPC_RecordChild3, // #3 = $w
/*35295*/     OPC_CheckChild3Type, MVT::i32,
/*35297*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*35299*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                  1/*#VTs*/, MVT::v4i32, 0/*#Ops*/,  // Results = #4
/*35306*/     OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*35309*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 4, 0, 5,  // Results = #6
/*35319*/     OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*35322*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 6, 1, 7,  // Results = #8
/*35332*/     OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*35335*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 8, 2, 9,  // Results = #10
/*35345*/     OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*35348*/     OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 10, 3, 11, 
              // Src: (build_vector:v4i32 i32:i32:$x, i32:i32:$y, i32:i32:$z, i32:i32:$w) - Complexity = 3
              // Dst: (INSERT_SUBREG:v4i32 (INSERT_SUBREG:v4i32 (INSERT_SUBREG:v4i32 (INSERT_SUBREG:v4i32 (IMPLICIT_DEF:v4i32), ?:i32:$x, sub0:i32), ?:i32:$y, sub1:i32), ?:i32:$z, sub2:i32), ?:i32:$w, sub3:i32)
            /*SwitchType*/ 72,  MVT::v4f32,// ->35432
/*35360*/     OPC_CheckChild0Type, MVT::f32,
/*35362*/     OPC_RecordChild1, // #1 = $y
/*35363*/     OPC_CheckChild1Type, MVT::f32,
/*35365*/     OPC_RecordChild2, // #2 = $z
/*35366*/     OPC_CheckChild2Type, MVT::f32,
/*35368*/     OPC_RecordChild3, // #3 = $w
/*35369*/     OPC_CheckChild3Type, MVT::f32,
/*35371*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*35373*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                  1/*#VTs*/, MVT::v4f32, 0/*#Ops*/,  // Results = #4
/*35380*/     OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*35383*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 4, 0, 5,  // Results = #6
/*35393*/     OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*35396*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 6, 1, 7,  // Results = #8
/*35406*/     OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*35409*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 8, 2, 9,  // Results = #10
/*35419*/     OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*35422*/     OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 10, 3, 11, 
              // Src: (build_vector:v4f32 f32:f32:$x, f32:f32:$y, f32:f32:$z, f32:f32:$w) - Complexity = 3
              // Dst: (INSERT_SUBREG:v4f32 (INSERT_SUBREG:v4f32 (INSERT_SUBREG:v4f32 (INSERT_SUBREG:v4f32 (IMPLICIT_DEF:v4f32), ?:f32:$x, sub0:i32), ?:f32:$y, sub1:i32), ?:f32:$z, sub2:i32), ?:f32:$w, sub3:i32)
            0, // EndSwitchType
          /*SwitchOpcode*/ 70|128,17/*2246*/,  TARGET_VAL(AMDGPUISD::TEXTURE_FETCH),// ->37683
/*35437*/   OPC_MoveChild, 0,
/*35439*/   OPC_CheckType, MVT::i32,
/*35441*/   OPC_Scope, 94|128,1/*222*/, /*->35666*/ // 10 children in Scope
/*35444*/     OPC_CheckInteger, 0, 
/*35446*/     OPC_MoveParent,
/*35447*/     OPC_RecordChild1, // #0 = $SRC_GPR
/*35448*/     OPC_CheckChild1Type, MVT::v4f32,
/*35450*/     OPC_RecordChild2, // #1 = $srcx
/*35451*/     OPC_MoveChild, 2,
/*35453*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35456*/     OPC_CheckType, MVT::i32,
/*35458*/     OPC_MoveParent,
/*35459*/     OPC_RecordChild3, // #2 = $srcy
/*35460*/     OPC_MoveChild, 3,
/*35462*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35465*/     OPC_CheckType, MVT::i32,
/*35467*/     OPC_MoveParent,
/*35468*/     OPC_RecordChild4, // #3 = $srcz
/*35469*/     OPC_MoveChild, 4,
/*35471*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35474*/     OPC_CheckType, MVT::i32,
/*35476*/     OPC_MoveParent,
/*35477*/     OPC_RecordChild5, // #4 = $srcw
/*35478*/     OPC_MoveChild, 5,
/*35480*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35483*/     OPC_CheckType, MVT::i32,
/*35485*/     OPC_MoveParent,
/*35486*/     OPC_RecordChild6, // #5 = $offsetx
/*35487*/     OPC_MoveChild, 6,
/*35489*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35492*/     OPC_CheckType, MVT::i32,
/*35494*/     OPC_MoveParent,
/*35495*/     OPC_RecordChild7, // #6 = $offsety
/*35496*/     OPC_MoveChild, 7,
/*35498*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35501*/     OPC_CheckType, MVT::i32,
/*35503*/     OPC_MoveParent,
/*35504*/     OPC_MoveChild, 8,
/*35506*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35509*/     OPC_RecordNode, // #7 = $offsetz
/*35510*/     OPC_CheckType, MVT::i32,
/*35512*/     OPC_MoveParent,
/*35513*/     OPC_MoveChild, 9,
/*35515*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35518*/     OPC_RecordNode, // #8 = $DST_SEL_X
/*35519*/     OPC_CheckType, MVT::i32,
/*35521*/     OPC_MoveParent,
/*35522*/     OPC_MoveChild, 10,
/*35524*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35527*/     OPC_RecordNode, // #9 = $DST_SEL_Y
/*35528*/     OPC_CheckType, MVT::i32,
/*35530*/     OPC_MoveParent,
/*35531*/     OPC_MoveChild, 11,
/*35533*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35536*/     OPC_RecordNode, // #10 = $DST_SEL_Z
/*35537*/     OPC_CheckType, MVT::i32,
/*35539*/     OPC_MoveParent,
/*35540*/     OPC_MoveChild, 12,
/*35542*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35545*/     OPC_RecordNode, // #11 = $DST_SEL_W
/*35546*/     OPC_CheckType, MVT::i32,
/*35548*/     OPC_MoveParent,
/*35549*/     OPC_MoveChild, 13,
/*35551*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35554*/     OPC_RecordNode, // #12 = $RESOURCE_ID
/*35555*/     OPC_CheckType, MVT::i32,
/*35557*/     OPC_MoveParent,
/*35558*/     OPC_MoveChild, 14,
/*35560*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35563*/     OPC_RecordNode, // #13 = $SAMPLER_ID
/*35564*/     OPC_CheckType, MVT::i32,
/*35566*/     OPC_MoveParent,
/*35567*/     OPC_MoveChild, 15,
/*35569*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35572*/     OPC_RecordNode, // #14 = $COORD_TYPE_X
/*35573*/     OPC_CheckType, MVT::i32,
/*35575*/     OPC_MoveParent,
/*35576*/     OPC_MoveChild, 16,
/*35578*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35581*/     OPC_RecordNode, // #15 = $COORD_TYPE_Y
/*35582*/     OPC_CheckType, MVT::i32,
/*35584*/     OPC_MoveParent,
/*35585*/     OPC_MoveChild, 17,
/*35587*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35590*/     OPC_RecordNode, // #16 = $COORD_TYPE_Z
/*35591*/     OPC_CheckType, MVT::i32,
/*35593*/     OPC_MoveParent,
/*35594*/     OPC_MoveChild, 18,
/*35596*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35599*/     OPC_RecordNode, // #17 = $COORD_TYPE_W
/*35600*/     OPC_CheckType, MVT::i32,
/*35602*/     OPC_MoveParent,
/*35603*/     OPC_CheckType, MVT::v4f32,
/*35605*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*35607*/     OPC_EmitConvertToTarget, 1,
/*35609*/     OPC_EmitConvertToTarget, 2,
/*35611*/     OPC_EmitConvertToTarget, 3,
/*35613*/     OPC_EmitConvertToTarget, 4,
/*35615*/     OPC_EmitConvertToTarget, 5,
/*35617*/     OPC_EmitConvertToTarget, 6,
/*35619*/     OPC_EmitConvertToTarget, 7,
/*35621*/     OPC_EmitConvertToTarget, 8,
/*35623*/     OPC_EmitConvertToTarget, 9,
/*35625*/     OPC_EmitConvertToTarget, 10,
/*35627*/     OPC_EmitConvertToTarget, 11,
/*35629*/     OPC_EmitConvertToTarget, 12,
/*35631*/     OPC_EmitConvertToTarget, 13,
/*35633*/     OPC_EmitConvertToTarget, 14,
/*35635*/     OPC_EmitConvertToTarget, 15,
/*35637*/     OPC_EmitConvertToTarget, 16,
/*35639*/     OPC_EmitConvertToTarget, 17,
/*35641*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TEX_SAMPLE), 0,
                  1/*#VTs*/, MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
              // Src: (TEXTURE_FETCH:v4f32 0:i32, v4f32:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W) - Complexity = 59
              // Dst: (TEX_SAMPLE:v4f32 R600_Reg128:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W)
/*35666*/   /*Scope*/ 94|128,1/*222*/, /*->35890*/
/*35668*/     OPC_CheckInteger, 1, 
/*35670*/     OPC_MoveParent,
/*35671*/     OPC_RecordChild1, // #0 = $SRC_GPR
/*35672*/     OPC_CheckChild1Type, MVT::v4f32,
/*35674*/     OPC_RecordChild2, // #1 = $srcx
/*35675*/     OPC_MoveChild, 2,
/*35677*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35680*/     OPC_CheckType, MVT::i32,
/*35682*/     OPC_MoveParent,
/*35683*/     OPC_RecordChild3, // #2 = $srcy
/*35684*/     OPC_MoveChild, 3,
/*35686*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35689*/     OPC_CheckType, MVT::i32,
/*35691*/     OPC_MoveParent,
/*35692*/     OPC_RecordChild4, // #3 = $srcz
/*35693*/     OPC_MoveChild, 4,
/*35695*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35698*/     OPC_CheckType, MVT::i32,
/*35700*/     OPC_MoveParent,
/*35701*/     OPC_RecordChild5, // #4 = $srcw
/*35702*/     OPC_MoveChild, 5,
/*35704*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35707*/     OPC_CheckType, MVT::i32,
/*35709*/     OPC_MoveParent,
/*35710*/     OPC_RecordChild6, // #5 = $offsetx
/*35711*/     OPC_MoveChild, 6,
/*35713*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35716*/     OPC_CheckType, MVT::i32,
/*35718*/     OPC_MoveParent,
/*35719*/     OPC_RecordChild7, // #6 = $offsety
/*35720*/     OPC_MoveChild, 7,
/*35722*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35725*/     OPC_CheckType, MVT::i32,
/*35727*/     OPC_MoveParent,
/*35728*/     OPC_MoveChild, 8,
/*35730*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35733*/     OPC_RecordNode, // #7 = $offsetz
/*35734*/     OPC_CheckType, MVT::i32,
/*35736*/     OPC_MoveParent,
/*35737*/     OPC_MoveChild, 9,
/*35739*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35742*/     OPC_RecordNode, // #8 = $DST_SEL_X
/*35743*/     OPC_CheckType, MVT::i32,
/*35745*/     OPC_MoveParent,
/*35746*/     OPC_MoveChild, 10,
/*35748*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35751*/     OPC_RecordNode, // #9 = $DST_SEL_Y
/*35752*/     OPC_CheckType, MVT::i32,
/*35754*/     OPC_MoveParent,
/*35755*/     OPC_MoveChild, 11,
/*35757*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35760*/     OPC_RecordNode, // #10 = $DST_SEL_Z
/*35761*/     OPC_CheckType, MVT::i32,
/*35763*/     OPC_MoveParent,
/*35764*/     OPC_MoveChild, 12,
/*35766*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35769*/     OPC_RecordNode, // #11 = $DST_SEL_W
/*35770*/     OPC_CheckType, MVT::i32,
/*35772*/     OPC_MoveParent,
/*35773*/     OPC_MoveChild, 13,
/*35775*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35778*/     OPC_RecordNode, // #12 = $RESOURCE_ID
/*35779*/     OPC_CheckType, MVT::i32,
/*35781*/     OPC_MoveParent,
/*35782*/     OPC_MoveChild, 14,
/*35784*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35787*/     OPC_RecordNode, // #13 = $SAMPLER_ID
/*35788*/     OPC_CheckType, MVT::i32,
/*35790*/     OPC_MoveParent,
/*35791*/     OPC_MoveChild, 15,
/*35793*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35796*/     OPC_RecordNode, // #14 = $COORD_TYPE_X
/*35797*/     OPC_CheckType, MVT::i32,
/*35799*/     OPC_MoveParent,
/*35800*/     OPC_MoveChild, 16,
/*35802*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35805*/     OPC_RecordNode, // #15 = $COORD_TYPE_Y
/*35806*/     OPC_CheckType, MVT::i32,
/*35808*/     OPC_MoveParent,
/*35809*/     OPC_MoveChild, 17,
/*35811*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35814*/     OPC_RecordNode, // #16 = $COORD_TYPE_Z
/*35815*/     OPC_CheckType, MVT::i32,
/*35817*/     OPC_MoveParent,
/*35818*/     OPC_MoveChild, 18,
/*35820*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35823*/     OPC_RecordNode, // #17 = $COORD_TYPE_W
/*35824*/     OPC_CheckType, MVT::i32,
/*35826*/     OPC_MoveParent,
/*35827*/     OPC_CheckType, MVT::v4f32,
/*35829*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*35831*/     OPC_EmitConvertToTarget, 1,
/*35833*/     OPC_EmitConvertToTarget, 2,
/*35835*/     OPC_EmitConvertToTarget, 3,
/*35837*/     OPC_EmitConvertToTarget, 4,
/*35839*/     OPC_EmitConvertToTarget, 5,
/*35841*/     OPC_EmitConvertToTarget, 6,
/*35843*/     OPC_EmitConvertToTarget, 7,
/*35845*/     OPC_EmitConvertToTarget, 8,
/*35847*/     OPC_EmitConvertToTarget, 9,
/*35849*/     OPC_EmitConvertToTarget, 10,
/*35851*/     OPC_EmitConvertToTarget, 11,
/*35853*/     OPC_EmitConvertToTarget, 12,
/*35855*/     OPC_EmitConvertToTarget, 13,
/*35857*/     OPC_EmitConvertToTarget, 14,
/*35859*/     OPC_EmitConvertToTarget, 15,
/*35861*/     OPC_EmitConvertToTarget, 16,
/*35863*/     OPC_EmitConvertToTarget, 17,
/*35865*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TEX_SAMPLE_C), 0,
                  1/*#VTs*/, MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
              // Src: (TEXTURE_FETCH:v4f32 1:i32, v4f32:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W) - Complexity = 59
              // Dst: (TEX_SAMPLE_C:v4f32 R600_Reg128:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W)
/*35890*/   /*Scope*/ 94|128,1/*222*/, /*->36114*/
/*35892*/     OPC_CheckInteger, 2, 
/*35894*/     OPC_MoveParent,
/*35895*/     OPC_RecordChild1, // #0 = $SRC_GPR
/*35896*/     OPC_CheckChild1Type, MVT::v4f32,
/*35898*/     OPC_RecordChild2, // #1 = $srcx
/*35899*/     OPC_MoveChild, 2,
/*35901*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35904*/     OPC_CheckType, MVT::i32,
/*35906*/     OPC_MoveParent,
/*35907*/     OPC_RecordChild3, // #2 = $srcy
/*35908*/     OPC_MoveChild, 3,
/*35910*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35913*/     OPC_CheckType, MVT::i32,
/*35915*/     OPC_MoveParent,
/*35916*/     OPC_RecordChild4, // #3 = $srcz
/*35917*/     OPC_MoveChild, 4,
/*35919*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35922*/     OPC_CheckType, MVT::i32,
/*35924*/     OPC_MoveParent,
/*35925*/     OPC_RecordChild5, // #4 = $srcw
/*35926*/     OPC_MoveChild, 5,
/*35928*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35931*/     OPC_CheckType, MVT::i32,
/*35933*/     OPC_MoveParent,
/*35934*/     OPC_RecordChild6, // #5 = $offsetx
/*35935*/     OPC_MoveChild, 6,
/*35937*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35940*/     OPC_CheckType, MVT::i32,
/*35942*/     OPC_MoveParent,
/*35943*/     OPC_RecordChild7, // #6 = $offsety
/*35944*/     OPC_MoveChild, 7,
/*35946*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35949*/     OPC_CheckType, MVT::i32,
/*35951*/     OPC_MoveParent,
/*35952*/     OPC_MoveChild, 8,
/*35954*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35957*/     OPC_RecordNode, // #7 = $offsetz
/*35958*/     OPC_CheckType, MVT::i32,
/*35960*/     OPC_MoveParent,
/*35961*/     OPC_MoveChild, 9,
/*35963*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35966*/     OPC_RecordNode, // #8 = $DST_SEL_X
/*35967*/     OPC_CheckType, MVT::i32,
/*35969*/     OPC_MoveParent,
/*35970*/     OPC_MoveChild, 10,
/*35972*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35975*/     OPC_RecordNode, // #9 = $DST_SEL_Y
/*35976*/     OPC_CheckType, MVT::i32,
/*35978*/     OPC_MoveParent,
/*35979*/     OPC_MoveChild, 11,
/*35981*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35984*/     OPC_RecordNode, // #10 = $DST_SEL_Z
/*35985*/     OPC_CheckType, MVT::i32,
/*35987*/     OPC_MoveParent,
/*35988*/     OPC_MoveChild, 12,
/*35990*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35993*/     OPC_RecordNode, // #11 = $DST_SEL_W
/*35994*/     OPC_CheckType, MVT::i32,
/*35996*/     OPC_MoveParent,
/*35997*/     OPC_MoveChild, 13,
/*35999*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36002*/     OPC_RecordNode, // #12 = $RESOURCE_ID
/*36003*/     OPC_CheckType, MVT::i32,
/*36005*/     OPC_MoveParent,
/*36006*/     OPC_MoveChild, 14,
/*36008*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36011*/     OPC_RecordNode, // #13 = $SAMPLER_ID
/*36012*/     OPC_CheckType, MVT::i32,
/*36014*/     OPC_MoveParent,
/*36015*/     OPC_MoveChild, 15,
/*36017*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36020*/     OPC_RecordNode, // #14 = $COORD_TYPE_X
/*36021*/     OPC_CheckType, MVT::i32,
/*36023*/     OPC_MoveParent,
/*36024*/     OPC_MoveChild, 16,
/*36026*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36029*/     OPC_RecordNode, // #15 = $COORD_TYPE_Y
/*36030*/     OPC_CheckType, MVT::i32,
/*36032*/     OPC_MoveParent,
/*36033*/     OPC_MoveChild, 17,
/*36035*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36038*/     OPC_RecordNode, // #16 = $COORD_TYPE_Z
/*36039*/     OPC_CheckType, MVT::i32,
/*36041*/     OPC_MoveParent,
/*36042*/     OPC_MoveChild, 18,
/*36044*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36047*/     OPC_RecordNode, // #17 = $COORD_TYPE_W
/*36048*/     OPC_CheckType, MVT::i32,
/*36050*/     OPC_MoveParent,
/*36051*/     OPC_CheckType, MVT::v4f32,
/*36053*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*36055*/     OPC_EmitConvertToTarget, 1,
/*36057*/     OPC_EmitConvertToTarget, 2,
/*36059*/     OPC_EmitConvertToTarget, 3,
/*36061*/     OPC_EmitConvertToTarget, 4,
/*36063*/     OPC_EmitConvertToTarget, 5,
/*36065*/     OPC_EmitConvertToTarget, 6,
/*36067*/     OPC_EmitConvertToTarget, 7,
/*36069*/     OPC_EmitConvertToTarget, 8,
/*36071*/     OPC_EmitConvertToTarget, 9,
/*36073*/     OPC_EmitConvertToTarget, 10,
/*36075*/     OPC_EmitConvertToTarget, 11,
/*36077*/     OPC_EmitConvertToTarget, 12,
/*36079*/     OPC_EmitConvertToTarget, 13,
/*36081*/     OPC_EmitConvertToTarget, 14,
/*36083*/     OPC_EmitConvertToTarget, 15,
/*36085*/     OPC_EmitConvertToTarget, 16,
/*36087*/     OPC_EmitConvertToTarget, 17,
/*36089*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TEX_SAMPLE_L), 0,
                  1/*#VTs*/, MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
              // Src: (TEXTURE_FETCH:v4f32 2:i32, v4f32:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W) - Complexity = 59
              // Dst: (TEX_SAMPLE_L:v4f32 R600_Reg128:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W)
/*36114*/   /*Scope*/ 94|128,1/*222*/, /*->36338*/
/*36116*/     OPC_CheckInteger, 3, 
/*36118*/     OPC_MoveParent,
/*36119*/     OPC_RecordChild1, // #0 = $SRC_GPR
/*36120*/     OPC_CheckChild1Type, MVT::v4f32,
/*36122*/     OPC_RecordChild2, // #1 = $srcx
/*36123*/     OPC_MoveChild, 2,
/*36125*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36128*/     OPC_CheckType, MVT::i32,
/*36130*/     OPC_MoveParent,
/*36131*/     OPC_RecordChild3, // #2 = $srcy
/*36132*/     OPC_MoveChild, 3,
/*36134*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36137*/     OPC_CheckType, MVT::i32,
/*36139*/     OPC_MoveParent,
/*36140*/     OPC_RecordChild4, // #3 = $srcz
/*36141*/     OPC_MoveChild, 4,
/*36143*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36146*/     OPC_CheckType, MVT::i32,
/*36148*/     OPC_MoveParent,
/*36149*/     OPC_RecordChild5, // #4 = $srcw
/*36150*/     OPC_MoveChild, 5,
/*36152*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36155*/     OPC_CheckType, MVT::i32,
/*36157*/     OPC_MoveParent,
/*36158*/     OPC_RecordChild6, // #5 = $offsetx
/*36159*/     OPC_MoveChild, 6,
/*36161*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36164*/     OPC_CheckType, MVT::i32,
/*36166*/     OPC_MoveParent,
/*36167*/     OPC_RecordChild7, // #6 = $offsety
/*36168*/     OPC_MoveChild, 7,
/*36170*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36173*/     OPC_CheckType, MVT::i32,
/*36175*/     OPC_MoveParent,
/*36176*/     OPC_MoveChild, 8,
/*36178*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36181*/     OPC_RecordNode, // #7 = $offsetz
/*36182*/     OPC_CheckType, MVT::i32,
/*36184*/     OPC_MoveParent,
/*36185*/     OPC_MoveChild, 9,
/*36187*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36190*/     OPC_RecordNode, // #8 = $DST_SEL_X
/*36191*/     OPC_CheckType, MVT::i32,
/*36193*/     OPC_MoveParent,
/*36194*/     OPC_MoveChild, 10,
/*36196*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36199*/     OPC_RecordNode, // #9 = $DST_SEL_Y
/*36200*/     OPC_CheckType, MVT::i32,
/*36202*/     OPC_MoveParent,
/*36203*/     OPC_MoveChild, 11,
/*36205*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36208*/     OPC_RecordNode, // #10 = $DST_SEL_Z
/*36209*/     OPC_CheckType, MVT::i32,
/*36211*/     OPC_MoveParent,
/*36212*/     OPC_MoveChild, 12,
/*36214*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36217*/     OPC_RecordNode, // #11 = $DST_SEL_W
/*36218*/     OPC_CheckType, MVT::i32,
/*36220*/     OPC_MoveParent,
/*36221*/     OPC_MoveChild, 13,
/*36223*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36226*/     OPC_RecordNode, // #12 = $RESOURCE_ID
/*36227*/     OPC_CheckType, MVT::i32,
/*36229*/     OPC_MoveParent,
/*36230*/     OPC_MoveChild, 14,
/*36232*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36235*/     OPC_RecordNode, // #13 = $SAMPLER_ID
/*36236*/     OPC_CheckType, MVT::i32,
/*36238*/     OPC_MoveParent,
/*36239*/     OPC_MoveChild, 15,
/*36241*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36244*/     OPC_RecordNode, // #14 = $COORD_TYPE_X
/*36245*/     OPC_CheckType, MVT::i32,
/*36247*/     OPC_MoveParent,
/*36248*/     OPC_MoveChild, 16,
/*36250*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36253*/     OPC_RecordNode, // #15 = $COORD_TYPE_Y
/*36254*/     OPC_CheckType, MVT::i32,
/*36256*/     OPC_MoveParent,
/*36257*/     OPC_MoveChild, 17,
/*36259*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36262*/     OPC_RecordNode, // #16 = $COORD_TYPE_Z
/*36263*/     OPC_CheckType, MVT::i32,
/*36265*/     OPC_MoveParent,
/*36266*/     OPC_MoveChild, 18,
/*36268*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36271*/     OPC_RecordNode, // #17 = $COORD_TYPE_W
/*36272*/     OPC_CheckType, MVT::i32,
/*36274*/     OPC_MoveParent,
/*36275*/     OPC_CheckType, MVT::v4f32,
/*36277*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*36279*/     OPC_EmitConvertToTarget, 1,
/*36281*/     OPC_EmitConvertToTarget, 2,
/*36283*/     OPC_EmitConvertToTarget, 3,
/*36285*/     OPC_EmitConvertToTarget, 4,
/*36287*/     OPC_EmitConvertToTarget, 5,
/*36289*/     OPC_EmitConvertToTarget, 6,
/*36291*/     OPC_EmitConvertToTarget, 7,
/*36293*/     OPC_EmitConvertToTarget, 8,
/*36295*/     OPC_EmitConvertToTarget, 9,
/*36297*/     OPC_EmitConvertToTarget, 10,
/*36299*/     OPC_EmitConvertToTarget, 11,
/*36301*/     OPC_EmitConvertToTarget, 12,
/*36303*/     OPC_EmitConvertToTarget, 13,
/*36305*/     OPC_EmitConvertToTarget, 14,
/*36307*/     OPC_EmitConvertToTarget, 15,
/*36309*/     OPC_EmitConvertToTarget, 16,
/*36311*/     OPC_EmitConvertToTarget, 17,
/*36313*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TEX_SAMPLE_C_L), 0,
                  1/*#VTs*/, MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
              // Src: (TEXTURE_FETCH:v4f32 3:i32, v4f32:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W) - Complexity = 59
              // Dst: (TEX_SAMPLE_C_L:v4f32 R600_Reg128:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W)
/*36338*/   /*Scope*/ 94|128,1/*222*/, /*->36562*/
/*36340*/     OPC_CheckInteger, 4, 
/*36342*/     OPC_MoveParent,
/*36343*/     OPC_RecordChild1, // #0 = $SRC_GPR
/*36344*/     OPC_CheckChild1Type, MVT::v4f32,
/*36346*/     OPC_RecordChild2, // #1 = $srcx
/*36347*/     OPC_MoveChild, 2,
/*36349*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36352*/     OPC_CheckType, MVT::i32,
/*36354*/     OPC_MoveParent,
/*36355*/     OPC_RecordChild3, // #2 = $srcy
/*36356*/     OPC_MoveChild, 3,
/*36358*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36361*/     OPC_CheckType, MVT::i32,
/*36363*/     OPC_MoveParent,
/*36364*/     OPC_RecordChild4, // #3 = $srcz
/*36365*/     OPC_MoveChild, 4,
/*36367*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36370*/     OPC_CheckType, MVT::i32,
/*36372*/     OPC_MoveParent,
/*36373*/     OPC_RecordChild5, // #4 = $srcw
/*36374*/     OPC_MoveChild, 5,
/*36376*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36379*/     OPC_CheckType, MVT::i32,
/*36381*/     OPC_MoveParent,
/*36382*/     OPC_RecordChild6, // #5 = $offsetx
/*36383*/     OPC_MoveChild, 6,
/*36385*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36388*/     OPC_CheckType, MVT::i32,
/*36390*/     OPC_MoveParent,
/*36391*/     OPC_RecordChild7, // #6 = $offsety
/*36392*/     OPC_MoveChild, 7,
/*36394*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36397*/     OPC_CheckType, MVT::i32,
/*36399*/     OPC_MoveParent,
/*36400*/     OPC_MoveChild, 8,
/*36402*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36405*/     OPC_RecordNode, // #7 = $offsetz
/*36406*/     OPC_CheckType, MVT::i32,
/*36408*/     OPC_MoveParent,
/*36409*/     OPC_MoveChild, 9,
/*36411*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36414*/     OPC_RecordNode, // #8 = $DST_SEL_X
/*36415*/     OPC_CheckType, MVT::i32,
/*36417*/     OPC_MoveParent,
/*36418*/     OPC_MoveChild, 10,
/*36420*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36423*/     OPC_RecordNode, // #9 = $DST_SEL_Y
/*36424*/     OPC_CheckType, MVT::i32,
/*36426*/     OPC_MoveParent,
/*36427*/     OPC_MoveChild, 11,
/*36429*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36432*/     OPC_RecordNode, // #10 = $DST_SEL_Z
/*36433*/     OPC_CheckType, MVT::i32,
/*36435*/     OPC_MoveParent,
/*36436*/     OPC_MoveChild, 12,
/*36438*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36441*/     OPC_RecordNode, // #11 = $DST_SEL_W
/*36442*/     OPC_CheckType, MVT::i32,
/*36444*/     OPC_MoveParent,
/*36445*/     OPC_MoveChild, 13,
/*36447*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36450*/     OPC_RecordNode, // #12 = $RESOURCE_ID
/*36451*/     OPC_CheckType, MVT::i32,
/*36453*/     OPC_MoveParent,
/*36454*/     OPC_MoveChild, 14,
/*36456*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36459*/     OPC_RecordNode, // #13 = $SAMPLER_ID
/*36460*/     OPC_CheckType, MVT::i32,
/*36462*/     OPC_MoveParent,
/*36463*/     OPC_MoveChild, 15,
/*36465*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36468*/     OPC_RecordNode, // #14 = $COORD_TYPE_X
/*36469*/     OPC_CheckType, MVT::i32,
/*36471*/     OPC_MoveParent,
/*36472*/     OPC_MoveChild, 16,
/*36474*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36477*/     OPC_RecordNode, // #15 = $COORD_TYPE_Y
/*36478*/     OPC_CheckType, MVT::i32,
/*36480*/     OPC_MoveParent,
/*36481*/     OPC_MoveChild, 17,
/*36483*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36486*/     OPC_RecordNode, // #16 = $COORD_TYPE_Z
/*36487*/     OPC_CheckType, MVT::i32,
/*36489*/     OPC_MoveParent,
/*36490*/     OPC_MoveChild, 18,
/*36492*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36495*/     OPC_RecordNode, // #17 = $COORD_TYPE_W
/*36496*/     OPC_CheckType, MVT::i32,
/*36498*/     OPC_MoveParent,
/*36499*/     OPC_CheckType, MVT::v4f32,
/*36501*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*36503*/     OPC_EmitConvertToTarget, 1,
/*36505*/     OPC_EmitConvertToTarget, 2,
/*36507*/     OPC_EmitConvertToTarget, 3,
/*36509*/     OPC_EmitConvertToTarget, 4,
/*36511*/     OPC_EmitConvertToTarget, 5,
/*36513*/     OPC_EmitConvertToTarget, 6,
/*36515*/     OPC_EmitConvertToTarget, 7,
/*36517*/     OPC_EmitConvertToTarget, 8,
/*36519*/     OPC_EmitConvertToTarget, 9,
/*36521*/     OPC_EmitConvertToTarget, 10,
/*36523*/     OPC_EmitConvertToTarget, 11,
/*36525*/     OPC_EmitConvertToTarget, 12,
/*36527*/     OPC_EmitConvertToTarget, 13,
/*36529*/     OPC_EmitConvertToTarget, 14,
/*36531*/     OPC_EmitConvertToTarget, 15,
/*36533*/     OPC_EmitConvertToTarget, 16,
/*36535*/     OPC_EmitConvertToTarget, 17,
/*36537*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TEX_SAMPLE_LB), 0,
                  1/*#VTs*/, MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
              // Src: (TEXTURE_FETCH:v4f32 4:i32, v4f32:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W) - Complexity = 59
              // Dst: (TEX_SAMPLE_LB:v4f32 R600_Reg128:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W)
/*36562*/   /*Scope*/ 94|128,1/*222*/, /*->36786*/
/*36564*/     OPC_CheckInteger, 5, 
/*36566*/     OPC_MoveParent,
/*36567*/     OPC_RecordChild1, // #0 = $SRC_GPR
/*36568*/     OPC_CheckChild1Type, MVT::v4f32,
/*36570*/     OPC_RecordChild2, // #1 = $srcx
/*36571*/     OPC_MoveChild, 2,
/*36573*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36576*/     OPC_CheckType, MVT::i32,
/*36578*/     OPC_MoveParent,
/*36579*/     OPC_RecordChild3, // #2 = $srcy
/*36580*/     OPC_MoveChild, 3,
/*36582*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36585*/     OPC_CheckType, MVT::i32,
/*36587*/     OPC_MoveParent,
/*36588*/     OPC_RecordChild4, // #3 = $srcz
/*36589*/     OPC_MoveChild, 4,
/*36591*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36594*/     OPC_CheckType, MVT::i32,
/*36596*/     OPC_MoveParent,
/*36597*/     OPC_RecordChild5, // #4 = $srcw
/*36598*/     OPC_MoveChild, 5,
/*36600*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36603*/     OPC_CheckType, MVT::i32,
/*36605*/     OPC_MoveParent,
/*36606*/     OPC_RecordChild6, // #5 = $offsetx
/*36607*/     OPC_MoveChild, 6,
/*36609*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36612*/     OPC_CheckType, MVT::i32,
/*36614*/     OPC_MoveParent,
/*36615*/     OPC_RecordChild7, // #6 = $offsety
/*36616*/     OPC_MoveChild, 7,
/*36618*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36621*/     OPC_CheckType, MVT::i32,
/*36623*/     OPC_MoveParent,
/*36624*/     OPC_MoveChild, 8,
/*36626*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36629*/     OPC_RecordNode, // #7 = $offsetz
/*36630*/     OPC_CheckType, MVT::i32,
/*36632*/     OPC_MoveParent,
/*36633*/     OPC_MoveChild, 9,
/*36635*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36638*/     OPC_RecordNode, // #8 = $DST_SEL_X
/*36639*/     OPC_CheckType, MVT::i32,
/*36641*/     OPC_MoveParent,
/*36642*/     OPC_MoveChild, 10,
/*36644*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36647*/     OPC_RecordNode, // #9 = $DST_SEL_Y
/*36648*/     OPC_CheckType, MVT::i32,
/*36650*/     OPC_MoveParent,
/*36651*/     OPC_MoveChild, 11,
/*36653*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36656*/     OPC_RecordNode, // #10 = $DST_SEL_Z
/*36657*/     OPC_CheckType, MVT::i32,
/*36659*/     OPC_MoveParent,
/*36660*/     OPC_MoveChild, 12,
/*36662*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36665*/     OPC_RecordNode, // #11 = $DST_SEL_W
/*36666*/     OPC_CheckType, MVT::i32,
/*36668*/     OPC_MoveParent,
/*36669*/     OPC_MoveChild, 13,
/*36671*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36674*/     OPC_RecordNode, // #12 = $RESOURCE_ID
/*36675*/     OPC_CheckType, MVT::i32,
/*36677*/     OPC_MoveParent,
/*36678*/     OPC_MoveChild, 14,
/*36680*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36683*/     OPC_RecordNode, // #13 = $SAMPLER_ID
/*36684*/     OPC_CheckType, MVT::i32,
/*36686*/     OPC_MoveParent,
/*36687*/     OPC_MoveChild, 15,
/*36689*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36692*/     OPC_RecordNode, // #14 = $COORD_TYPE_X
/*36693*/     OPC_CheckType, MVT::i32,
/*36695*/     OPC_MoveParent,
/*36696*/     OPC_MoveChild, 16,
/*36698*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36701*/     OPC_RecordNode, // #15 = $COORD_TYPE_Y
/*36702*/     OPC_CheckType, MVT::i32,
/*36704*/     OPC_MoveParent,
/*36705*/     OPC_MoveChild, 17,
/*36707*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36710*/     OPC_RecordNode, // #16 = $COORD_TYPE_Z
/*36711*/     OPC_CheckType, MVT::i32,
/*36713*/     OPC_MoveParent,
/*36714*/     OPC_MoveChild, 18,
/*36716*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36719*/     OPC_RecordNode, // #17 = $COORD_TYPE_W
/*36720*/     OPC_CheckType, MVT::i32,
/*36722*/     OPC_MoveParent,
/*36723*/     OPC_CheckType, MVT::v4f32,
/*36725*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*36727*/     OPC_EmitConvertToTarget, 1,
/*36729*/     OPC_EmitConvertToTarget, 2,
/*36731*/     OPC_EmitConvertToTarget, 3,
/*36733*/     OPC_EmitConvertToTarget, 4,
/*36735*/     OPC_EmitConvertToTarget, 5,
/*36737*/     OPC_EmitConvertToTarget, 6,
/*36739*/     OPC_EmitConvertToTarget, 7,
/*36741*/     OPC_EmitConvertToTarget, 8,
/*36743*/     OPC_EmitConvertToTarget, 9,
/*36745*/     OPC_EmitConvertToTarget, 10,
/*36747*/     OPC_EmitConvertToTarget, 11,
/*36749*/     OPC_EmitConvertToTarget, 12,
/*36751*/     OPC_EmitConvertToTarget, 13,
/*36753*/     OPC_EmitConvertToTarget, 14,
/*36755*/     OPC_EmitConvertToTarget, 15,
/*36757*/     OPC_EmitConvertToTarget, 16,
/*36759*/     OPC_EmitConvertToTarget, 17,
/*36761*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TEX_SAMPLE_C_LB), 0,
                  1/*#VTs*/, MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
              // Src: (TEXTURE_FETCH:v4f32 5:i32, v4f32:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W) - Complexity = 59
              // Dst: (TEX_SAMPLE_C_LB:v4f32 R600_Reg128:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W)
/*36786*/   /*Scope*/ 94|128,1/*222*/, /*->37010*/
/*36788*/     OPC_CheckInteger, 6, 
/*36790*/     OPC_MoveParent,
/*36791*/     OPC_RecordChild1, // #0 = $SRC_GPR
/*36792*/     OPC_CheckChild1Type, MVT::v4i32,
/*36794*/     OPC_RecordChild2, // #1 = $srcx
/*36795*/     OPC_MoveChild, 2,
/*36797*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36800*/     OPC_CheckType, MVT::i32,
/*36802*/     OPC_MoveParent,
/*36803*/     OPC_RecordChild3, // #2 = $srcy
/*36804*/     OPC_MoveChild, 3,
/*36806*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36809*/     OPC_CheckType, MVT::i32,
/*36811*/     OPC_MoveParent,
/*36812*/     OPC_RecordChild4, // #3 = $srcz
/*36813*/     OPC_MoveChild, 4,
/*36815*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36818*/     OPC_CheckType, MVT::i32,
/*36820*/     OPC_MoveParent,
/*36821*/     OPC_RecordChild5, // #4 = $srcw
/*36822*/     OPC_MoveChild, 5,
/*36824*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36827*/     OPC_CheckType, MVT::i32,
/*36829*/     OPC_MoveParent,
/*36830*/     OPC_RecordChild6, // #5 = $offsetx
/*36831*/     OPC_MoveChild, 6,
/*36833*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36836*/     OPC_CheckType, MVT::i32,
/*36838*/     OPC_MoveParent,
/*36839*/     OPC_RecordChild7, // #6 = $offsety
/*36840*/     OPC_MoveChild, 7,
/*36842*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36845*/     OPC_CheckType, MVT::i32,
/*36847*/     OPC_MoveParent,
/*36848*/     OPC_MoveChild, 8,
/*36850*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36853*/     OPC_RecordNode, // #7 = $offsetz
/*36854*/     OPC_CheckType, MVT::i32,
/*36856*/     OPC_MoveParent,
/*36857*/     OPC_MoveChild, 9,
/*36859*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36862*/     OPC_RecordNode, // #8 = $DST_SEL_X
/*36863*/     OPC_CheckType, MVT::i32,
/*36865*/     OPC_MoveParent,
/*36866*/     OPC_MoveChild, 10,
/*36868*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36871*/     OPC_RecordNode, // #9 = $DST_SEL_Y
/*36872*/     OPC_CheckType, MVT::i32,
/*36874*/     OPC_MoveParent,
/*36875*/     OPC_MoveChild, 11,
/*36877*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36880*/     OPC_RecordNode, // #10 = $DST_SEL_Z
/*36881*/     OPC_CheckType, MVT::i32,
/*36883*/     OPC_MoveParent,
/*36884*/     OPC_MoveChild, 12,
/*36886*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36889*/     OPC_RecordNode, // #11 = $DST_SEL_W
/*36890*/     OPC_CheckType, MVT::i32,
/*36892*/     OPC_MoveParent,
/*36893*/     OPC_MoveChild, 13,
/*36895*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36898*/     OPC_RecordNode, // #12 = $RESOURCE_ID
/*36899*/     OPC_CheckType, MVT::i32,
/*36901*/     OPC_MoveParent,
/*36902*/     OPC_MoveChild, 14,
/*36904*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36907*/     OPC_RecordNode, // #13 = $SAMPLER_ID
/*36908*/     OPC_CheckType, MVT::i32,
/*36910*/     OPC_MoveParent,
/*36911*/     OPC_MoveChild, 15,
/*36913*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36916*/     OPC_RecordNode, // #14 = $COORD_TYPE_X
/*36917*/     OPC_CheckType, MVT::i32,
/*36919*/     OPC_MoveParent,
/*36920*/     OPC_MoveChild, 16,
/*36922*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36925*/     OPC_RecordNode, // #15 = $COORD_TYPE_Y
/*36926*/     OPC_CheckType, MVT::i32,
/*36928*/     OPC_MoveParent,
/*36929*/     OPC_MoveChild, 17,
/*36931*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36934*/     OPC_RecordNode, // #16 = $COORD_TYPE_Z
/*36935*/     OPC_CheckType, MVT::i32,
/*36937*/     OPC_MoveParent,
/*36938*/     OPC_MoveChild, 18,
/*36940*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36943*/     OPC_RecordNode, // #17 = $COORD_TYPE_W
/*36944*/     OPC_CheckType, MVT::i32,
/*36946*/     OPC_MoveParent,
/*36947*/     OPC_CheckType, MVT::v4f32,
/*36949*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*36951*/     OPC_EmitConvertToTarget, 1,
/*36953*/     OPC_EmitConvertToTarget, 2,
/*36955*/     OPC_EmitConvertToTarget, 3,
/*36957*/     OPC_EmitConvertToTarget, 4,
/*36959*/     OPC_EmitConvertToTarget, 5,
/*36961*/     OPC_EmitConvertToTarget, 6,
/*36963*/     OPC_EmitConvertToTarget, 7,
/*36965*/     OPC_EmitConvertToTarget, 8,
/*36967*/     OPC_EmitConvertToTarget, 9,
/*36969*/     OPC_EmitConvertToTarget, 10,
/*36971*/     OPC_EmitConvertToTarget, 11,
/*36973*/     OPC_EmitConvertToTarget, 12,
/*36975*/     OPC_EmitConvertToTarget, 13,
/*36977*/     OPC_EmitConvertToTarget, 14,
/*36979*/     OPC_EmitConvertToTarget, 15,
/*36981*/     OPC_EmitConvertToTarget, 16,
/*36983*/     OPC_EmitConvertToTarget, 17,
/*36985*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TEX_LD), 0,
                  1/*#VTs*/, MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
              // Src: (TEXTURE_FETCH:v4f32 6:i32, v4i32:v4i32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W) - Complexity = 59
              // Dst: (TEX_LD:v4f32 R600_Reg128:v4i32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W)
/*37010*/   /*Scope*/ 94|128,1/*222*/, /*->37234*/
/*37012*/     OPC_CheckInteger, 7, 
/*37014*/     OPC_MoveParent,
/*37015*/     OPC_RecordChild1, // #0 = $SRC_GPR
/*37016*/     OPC_CheckChild1Type, MVT::v4i32,
/*37018*/     OPC_RecordChild2, // #1 = $srcx
/*37019*/     OPC_MoveChild, 2,
/*37021*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37024*/     OPC_CheckType, MVT::i32,
/*37026*/     OPC_MoveParent,
/*37027*/     OPC_RecordChild3, // #2 = $srcy
/*37028*/     OPC_MoveChild, 3,
/*37030*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37033*/     OPC_CheckType, MVT::i32,
/*37035*/     OPC_MoveParent,
/*37036*/     OPC_RecordChild4, // #3 = $srcz
/*37037*/     OPC_MoveChild, 4,
/*37039*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37042*/     OPC_CheckType, MVT::i32,
/*37044*/     OPC_MoveParent,
/*37045*/     OPC_RecordChild5, // #4 = $srcw
/*37046*/     OPC_MoveChild, 5,
/*37048*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37051*/     OPC_CheckType, MVT::i32,
/*37053*/     OPC_MoveParent,
/*37054*/     OPC_RecordChild6, // #5 = $offsetx
/*37055*/     OPC_MoveChild, 6,
/*37057*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37060*/     OPC_CheckType, MVT::i32,
/*37062*/     OPC_MoveParent,
/*37063*/     OPC_RecordChild7, // #6 = $offsety
/*37064*/     OPC_MoveChild, 7,
/*37066*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37069*/     OPC_CheckType, MVT::i32,
/*37071*/     OPC_MoveParent,
/*37072*/     OPC_MoveChild, 8,
/*37074*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37077*/     OPC_RecordNode, // #7 = $offsetz
/*37078*/     OPC_CheckType, MVT::i32,
/*37080*/     OPC_MoveParent,
/*37081*/     OPC_MoveChild, 9,
/*37083*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37086*/     OPC_RecordNode, // #8 = $DST_SEL_X
/*37087*/     OPC_CheckType, MVT::i32,
/*37089*/     OPC_MoveParent,
/*37090*/     OPC_MoveChild, 10,
/*37092*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37095*/     OPC_RecordNode, // #9 = $DST_SEL_Y
/*37096*/     OPC_CheckType, MVT::i32,
/*37098*/     OPC_MoveParent,
/*37099*/     OPC_MoveChild, 11,
/*37101*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37104*/     OPC_RecordNode, // #10 = $DST_SEL_Z
/*37105*/     OPC_CheckType, MVT::i32,
/*37107*/     OPC_MoveParent,
/*37108*/     OPC_MoveChild, 12,
/*37110*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37113*/     OPC_RecordNode, // #11 = $DST_SEL_W
/*37114*/     OPC_CheckType, MVT::i32,
/*37116*/     OPC_MoveParent,
/*37117*/     OPC_MoveChild, 13,
/*37119*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37122*/     OPC_RecordNode, // #12 = $RESOURCE_ID
/*37123*/     OPC_CheckType, MVT::i32,
/*37125*/     OPC_MoveParent,
/*37126*/     OPC_MoveChild, 14,
/*37128*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37131*/     OPC_RecordNode, // #13 = $SAMPLER_ID
/*37132*/     OPC_CheckType, MVT::i32,
/*37134*/     OPC_MoveParent,
/*37135*/     OPC_MoveChild, 15,
/*37137*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37140*/     OPC_RecordNode, // #14 = $COORD_TYPE_X
/*37141*/     OPC_CheckType, MVT::i32,
/*37143*/     OPC_MoveParent,
/*37144*/     OPC_MoveChild, 16,
/*37146*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37149*/     OPC_RecordNode, // #15 = $COORD_TYPE_Y
/*37150*/     OPC_CheckType, MVT::i32,
/*37152*/     OPC_MoveParent,
/*37153*/     OPC_MoveChild, 17,
/*37155*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37158*/     OPC_RecordNode, // #16 = $COORD_TYPE_Z
/*37159*/     OPC_CheckType, MVT::i32,
/*37161*/     OPC_MoveParent,
/*37162*/     OPC_MoveChild, 18,
/*37164*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37167*/     OPC_RecordNode, // #17 = $COORD_TYPE_W
/*37168*/     OPC_CheckType, MVT::i32,
/*37170*/     OPC_MoveParent,
/*37171*/     OPC_CheckType, MVT::v4f32,
/*37173*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*37175*/     OPC_EmitConvertToTarget, 1,
/*37177*/     OPC_EmitConvertToTarget, 2,
/*37179*/     OPC_EmitConvertToTarget, 3,
/*37181*/     OPC_EmitConvertToTarget, 4,
/*37183*/     OPC_EmitConvertToTarget, 5,
/*37185*/     OPC_EmitConvertToTarget, 6,
/*37187*/     OPC_EmitConvertToTarget, 7,
/*37189*/     OPC_EmitConvertToTarget, 8,
/*37191*/     OPC_EmitConvertToTarget, 9,
/*37193*/     OPC_EmitConvertToTarget, 10,
/*37195*/     OPC_EmitConvertToTarget, 11,
/*37197*/     OPC_EmitConvertToTarget, 12,
/*37199*/     OPC_EmitConvertToTarget, 13,
/*37201*/     OPC_EmitConvertToTarget, 14,
/*37203*/     OPC_EmitConvertToTarget, 15,
/*37205*/     OPC_EmitConvertToTarget, 16,
/*37207*/     OPC_EmitConvertToTarget, 17,
/*37209*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TEX_GET_TEXTURE_RESINFO), 0,
                  1/*#VTs*/, MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
              // Src: (TEXTURE_FETCH:v4f32 7:i32, v4i32:v4i32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W) - Complexity = 59
              // Dst: (TEX_GET_TEXTURE_RESINFO:v4f32 R600_Reg128:v4i32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W)
/*37234*/   /*Scope*/ 94|128,1/*222*/, /*->37458*/
/*37236*/     OPC_CheckInteger, 8, 
/*37238*/     OPC_MoveParent,
/*37239*/     OPC_RecordChild1, // #0 = $SRC_GPR
/*37240*/     OPC_CheckChild1Type, MVT::v4f32,
/*37242*/     OPC_RecordChild2, // #1 = $srcx
/*37243*/     OPC_MoveChild, 2,
/*37245*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37248*/     OPC_CheckType, MVT::i32,
/*37250*/     OPC_MoveParent,
/*37251*/     OPC_RecordChild3, // #2 = $srcy
/*37252*/     OPC_MoveChild, 3,
/*37254*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37257*/     OPC_CheckType, MVT::i32,
/*37259*/     OPC_MoveParent,
/*37260*/     OPC_RecordChild4, // #3 = $srcz
/*37261*/     OPC_MoveChild, 4,
/*37263*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37266*/     OPC_CheckType, MVT::i32,
/*37268*/     OPC_MoveParent,
/*37269*/     OPC_RecordChild5, // #4 = $srcw
/*37270*/     OPC_MoveChild, 5,
/*37272*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37275*/     OPC_CheckType, MVT::i32,
/*37277*/     OPC_MoveParent,
/*37278*/     OPC_RecordChild6, // #5 = $offsetx
/*37279*/     OPC_MoveChild, 6,
/*37281*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37284*/     OPC_CheckType, MVT::i32,
/*37286*/     OPC_MoveParent,
/*37287*/     OPC_RecordChild7, // #6 = $offsety
/*37288*/     OPC_MoveChild, 7,
/*37290*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37293*/     OPC_CheckType, MVT::i32,
/*37295*/     OPC_MoveParent,
/*37296*/     OPC_MoveChild, 8,
/*37298*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37301*/     OPC_RecordNode, // #7 = $offsetz
/*37302*/     OPC_CheckType, MVT::i32,
/*37304*/     OPC_MoveParent,
/*37305*/     OPC_MoveChild, 9,
/*37307*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37310*/     OPC_RecordNode, // #8 = $DST_SEL_X
/*37311*/     OPC_CheckType, MVT::i32,
/*37313*/     OPC_MoveParent,
/*37314*/     OPC_MoveChild, 10,
/*37316*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37319*/     OPC_RecordNode, // #9 = $DST_SEL_Y
/*37320*/     OPC_CheckType, MVT::i32,
/*37322*/     OPC_MoveParent,
/*37323*/     OPC_MoveChild, 11,
/*37325*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37328*/     OPC_RecordNode, // #10 = $DST_SEL_Z
/*37329*/     OPC_CheckType, MVT::i32,
/*37331*/     OPC_MoveParent,
/*37332*/     OPC_MoveChild, 12,
/*37334*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37337*/     OPC_RecordNode, // #11 = $DST_SEL_W
/*37338*/     OPC_CheckType, MVT::i32,
/*37340*/     OPC_MoveParent,
/*37341*/     OPC_MoveChild, 13,
/*37343*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37346*/     OPC_RecordNode, // #12 = $RESOURCE_ID
/*37347*/     OPC_CheckType, MVT::i32,
/*37349*/     OPC_MoveParent,
/*37350*/     OPC_MoveChild, 14,
/*37352*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37355*/     OPC_RecordNode, // #13 = $SAMPLER_ID
/*37356*/     OPC_CheckType, MVT::i32,
/*37358*/     OPC_MoveParent,
/*37359*/     OPC_MoveChild, 15,
/*37361*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37364*/     OPC_RecordNode, // #14 = $COORD_TYPE_X
/*37365*/     OPC_CheckType, MVT::i32,
/*37367*/     OPC_MoveParent,
/*37368*/     OPC_MoveChild, 16,
/*37370*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37373*/     OPC_RecordNode, // #15 = $COORD_TYPE_Y
/*37374*/     OPC_CheckType, MVT::i32,
/*37376*/     OPC_MoveParent,
/*37377*/     OPC_MoveChild, 17,
/*37379*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37382*/     OPC_RecordNode, // #16 = $COORD_TYPE_Z
/*37383*/     OPC_CheckType, MVT::i32,
/*37385*/     OPC_MoveParent,
/*37386*/     OPC_MoveChild, 18,
/*37388*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37391*/     OPC_RecordNode, // #17 = $COORD_TYPE_W
/*37392*/     OPC_CheckType, MVT::i32,
/*37394*/     OPC_MoveParent,
/*37395*/     OPC_CheckType, MVT::v4f32,
/*37397*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*37399*/     OPC_EmitConvertToTarget, 1,
/*37401*/     OPC_EmitConvertToTarget, 2,
/*37403*/     OPC_EmitConvertToTarget, 3,
/*37405*/     OPC_EmitConvertToTarget, 4,
/*37407*/     OPC_EmitConvertToTarget, 5,
/*37409*/     OPC_EmitConvertToTarget, 6,
/*37411*/     OPC_EmitConvertToTarget, 7,
/*37413*/     OPC_EmitConvertToTarget, 8,
/*37415*/     OPC_EmitConvertToTarget, 9,
/*37417*/     OPC_EmitConvertToTarget, 10,
/*37419*/     OPC_EmitConvertToTarget, 11,
/*37421*/     OPC_EmitConvertToTarget, 12,
/*37423*/     OPC_EmitConvertToTarget, 13,
/*37425*/     OPC_EmitConvertToTarget, 14,
/*37427*/     OPC_EmitConvertToTarget, 15,
/*37429*/     OPC_EmitConvertToTarget, 16,
/*37431*/     OPC_EmitConvertToTarget, 17,
/*37433*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TEX_GET_GRADIENTS_H), 0,
                  1/*#VTs*/, MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
              // Src: (TEXTURE_FETCH:v4f32 8:i32, v4f32:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W) - Complexity = 59
              // Dst: (TEX_GET_GRADIENTS_H:v4f32 R600_Reg128:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W)
/*37458*/   /*Scope*/ 94|128,1/*222*/, /*->37682*/
/*37460*/     OPC_CheckInteger, 9, 
/*37462*/     OPC_MoveParent,
/*37463*/     OPC_RecordChild1, // #0 = $SRC_GPR
/*37464*/     OPC_CheckChild1Type, MVT::v4f32,
/*37466*/     OPC_RecordChild2, // #1 = $srcx
/*37467*/     OPC_MoveChild, 2,
/*37469*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37472*/     OPC_CheckType, MVT::i32,
/*37474*/     OPC_MoveParent,
/*37475*/     OPC_RecordChild3, // #2 = $srcy
/*37476*/     OPC_MoveChild, 3,
/*37478*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37481*/     OPC_CheckType, MVT::i32,
/*37483*/     OPC_MoveParent,
/*37484*/     OPC_RecordChild4, // #3 = $srcz
/*37485*/     OPC_MoveChild, 4,
/*37487*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37490*/     OPC_CheckType, MVT::i32,
/*37492*/     OPC_MoveParent,
/*37493*/     OPC_RecordChild5, // #4 = $srcw
/*37494*/     OPC_MoveChild, 5,
/*37496*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37499*/     OPC_CheckType, MVT::i32,
/*37501*/     OPC_MoveParent,
/*37502*/     OPC_RecordChild6, // #5 = $offsetx
/*37503*/     OPC_MoveChild, 6,
/*37505*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37508*/     OPC_CheckType, MVT::i32,
/*37510*/     OPC_MoveParent,
/*37511*/     OPC_RecordChild7, // #6 = $offsety
/*37512*/     OPC_MoveChild, 7,
/*37514*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37517*/     OPC_CheckType, MVT::i32,
/*37519*/     OPC_MoveParent,
/*37520*/     OPC_MoveChild, 8,
/*37522*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37525*/     OPC_RecordNode, // #7 = $offsetz
/*37526*/     OPC_CheckType, MVT::i32,
/*37528*/     OPC_MoveParent,
/*37529*/     OPC_MoveChild, 9,
/*37531*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37534*/     OPC_RecordNode, // #8 = $DST_SEL_X
/*37535*/     OPC_CheckType, MVT::i32,
/*37537*/     OPC_MoveParent,
/*37538*/     OPC_MoveChild, 10,
/*37540*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37543*/     OPC_RecordNode, // #9 = $DST_SEL_Y
/*37544*/     OPC_CheckType, MVT::i32,
/*37546*/     OPC_MoveParent,
/*37547*/     OPC_MoveChild, 11,
/*37549*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37552*/     OPC_RecordNode, // #10 = $DST_SEL_Z
/*37553*/     OPC_CheckType, MVT::i32,
/*37555*/     OPC_MoveParent,
/*37556*/     OPC_MoveChild, 12,
/*37558*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37561*/     OPC_RecordNode, // #11 = $DST_SEL_W
/*37562*/     OPC_CheckType, MVT::i32,
/*37564*/     OPC_MoveParent,
/*37565*/     OPC_MoveChild, 13,
/*37567*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37570*/     OPC_RecordNode, // #12 = $RESOURCE_ID
/*37571*/     OPC_CheckType, MVT::i32,
/*37573*/     OPC_MoveParent,
/*37574*/     OPC_MoveChild, 14,
/*37576*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37579*/     OPC_RecordNode, // #13 = $SAMPLER_ID
/*37580*/     OPC_CheckType, MVT::i32,
/*37582*/     OPC_MoveParent,
/*37583*/     OPC_MoveChild, 15,
/*37585*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37588*/     OPC_RecordNode, // #14 = $COORD_TYPE_X
/*37589*/     OPC_CheckType, MVT::i32,
/*37591*/     OPC_MoveParent,
/*37592*/     OPC_MoveChild, 16,
/*37594*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37597*/     OPC_RecordNode, // #15 = $COORD_TYPE_Y
/*37598*/     OPC_CheckType, MVT::i32,
/*37600*/     OPC_MoveParent,
/*37601*/     OPC_MoveChild, 17,
/*37603*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37606*/     OPC_RecordNode, // #16 = $COORD_TYPE_Z
/*37607*/     OPC_CheckType, MVT::i32,
/*37609*/     OPC_MoveParent,
/*37610*/     OPC_MoveChild, 18,
/*37612*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37615*/     OPC_RecordNode, // #17 = $COORD_TYPE_W
/*37616*/     OPC_CheckType, MVT::i32,
/*37618*/     OPC_MoveParent,
/*37619*/     OPC_CheckType, MVT::v4f32,
/*37621*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*37623*/     OPC_EmitConvertToTarget, 1,
/*37625*/     OPC_EmitConvertToTarget, 2,
/*37627*/     OPC_EmitConvertToTarget, 3,
/*37629*/     OPC_EmitConvertToTarget, 4,
/*37631*/     OPC_EmitConvertToTarget, 5,
/*37633*/     OPC_EmitConvertToTarget, 6,
/*37635*/     OPC_EmitConvertToTarget, 7,
/*37637*/     OPC_EmitConvertToTarget, 8,
/*37639*/     OPC_EmitConvertToTarget, 9,
/*37641*/     OPC_EmitConvertToTarget, 10,
/*37643*/     OPC_EmitConvertToTarget, 11,
/*37645*/     OPC_EmitConvertToTarget, 12,
/*37647*/     OPC_EmitConvertToTarget, 13,
/*37649*/     OPC_EmitConvertToTarget, 14,
/*37651*/     OPC_EmitConvertToTarget, 15,
/*37653*/     OPC_EmitConvertToTarget, 16,
/*37655*/     OPC_EmitConvertToTarget, 17,
/*37657*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TEX_GET_GRADIENTS_V), 0,
                  1/*#VTs*/, MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
              // Src: (TEXTURE_FETCH:v4f32 9:i32, v4f32:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W) - Complexity = 59
              // Dst: (TEX_GET_GRADIENTS_V:v4f32 R600_Reg128:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W)
/*37682*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 25,  TARGET_VAL(AMDGPUISD::LOAD_INPUT),// ->37711
/*37686*/   OPC_RecordChild0, // #0 = $tlst
/*37687*/   OPC_RecordChild1, // #1 = $attr_offset
/*37688*/   OPC_MoveChild, 1,
/*37690*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37693*/   OPC_CheckPredicate, 23, // Predicate_IMM12bit
/*37695*/   OPC_MoveParent,
/*37696*/   OPC_RecordChild2, // #2 = $buf_idx_vgpr
/*37697*/   OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*37699*/   OPC_EmitConvertToTarget, 1,
/*37701*/   OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_FORMAT_XYZW_IDXEN), 0,
                1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 2, 3, 
            // Src: (SIload_input:v4f32 i128:i128:$tlst, (imm:i16)<<P:Predicate_IMM12bit>>:$attr_offset, i32:i32:$buf_idx_vgpr) - Complexity = 7
            // Dst: (BUFFER_LOAD_FORMAT_XYZW_IDXEN:v4f32 ?:i128:$tlst, ?:i32:$buf_idx_vgpr, (imm:i16):$attr_offset)
          /*SwitchOpcode*/ 38|128,8/*1062*/,  TARGET_VAL(AMDGPUISD::SAMPLE),// ->38777
/*37715*/   OPC_RecordChild0, // #0 = $addr
/*37716*/   OPC_Scope, 121|128,1/*249*/, /*->37968*/ // 5 children in Scope
/*37719*/     OPC_CheckChild0Type, MVT::v2i32,
/*37721*/     OPC_RecordChild1, // #1 = $rsrc
/*37722*/     OPC_RecordChild2, // #2 = $sampler
/*37723*/     OPC_MoveChild, 3,
/*37725*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37728*/     OPC_Scope, 47, /*->37777*/ // 5 children in Scope
/*37730*/       OPC_CheckPredicate, 60, // Predicate_TEX_RECT
/*37732*/       OPC_MoveParent,
/*37733*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*37735*/       OPC_EmitInteger, MVT::i32, 15, 
/*37738*/       OPC_EmitInteger, MVT::i1, 1, 
/*37741*/       OPC_EmitInteger, MVT::i1, 0, 
/*37744*/       OPC_EmitInteger, MVT::i1, 0, 
/*37747*/       OPC_EmitInteger, MVT::i1, 0, 
/*37750*/       OPC_EmitInteger, MVT::i1, 0, 
/*37753*/       OPC_EmitInteger, MVT::i1, 0, 
/*37756*/       OPC_EmitInteger, MVT::i1, 0, 
/*37759*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_V2), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsample:v4f32 v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_RECT>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_V2:v4f32 15:i32, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*37777*/     /*Scope*/ 47, /*->37825*/
/*37778*/       OPC_CheckPredicate, 41, // Predicate_TEX_ARRAY
/*37780*/       OPC_MoveParent,
/*37781*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*37783*/       OPC_EmitInteger, MVT::i32, 15, 
/*37786*/       OPC_EmitInteger, MVT::i1, 0, 
/*37789*/       OPC_EmitInteger, MVT::i1, 0, 
/*37792*/       OPC_EmitInteger, MVT::i1, 1, 
/*37795*/       OPC_EmitInteger, MVT::i1, 0, 
/*37798*/       OPC_EmitInteger, MVT::i1, 0, 
/*37801*/       OPC_EmitInteger, MVT::i1, 0, 
/*37804*/       OPC_EmitInteger, MVT::i1, 0, 
/*37807*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_V2), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsample:v4f32 v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_V2:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*37825*/     /*Scope*/ 47, /*->37873*/
/*37826*/       OPC_CheckPredicate, 44, // Predicate_TEX_SHADOW
/*37828*/       OPC_MoveParent,
/*37829*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*37831*/       OPC_EmitInteger, MVT::i32, 15, 
/*37834*/       OPC_EmitInteger, MVT::i1, 0, 
/*37837*/       OPC_EmitInteger, MVT::i1, 0, 
/*37840*/       OPC_EmitInteger, MVT::i1, 0, 
/*37843*/       OPC_EmitInteger, MVT::i1, 0, 
/*37846*/       OPC_EmitInteger, MVT::i1, 0, 
/*37849*/       OPC_EmitInteger, MVT::i1, 0, 
/*37852*/       OPC_EmitInteger, MVT::i1, 0, 
/*37855*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_V2), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsample:v4f32 v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_V2:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*37873*/     /*Scope*/ 47, /*->37921*/
/*37874*/       OPC_CheckPredicate, 61, // Predicate_TEX_SHADOW_ARRAY
/*37876*/       OPC_MoveParent,
/*37877*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*37879*/       OPC_EmitInteger, MVT::i32, 15, 
/*37882*/       OPC_EmitInteger, MVT::i1, 0, 
/*37885*/       OPC_EmitInteger, MVT::i1, 0, 
/*37888*/       OPC_EmitInteger, MVT::i1, 1, 
/*37891*/       OPC_EmitInteger, MVT::i1, 0, 
/*37894*/       OPC_EmitInteger, MVT::i1, 0, 
/*37897*/       OPC_EmitInteger, MVT::i1, 0, 
/*37900*/       OPC_EmitInteger, MVT::i1, 0, 
/*37903*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_V2), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsample:v4f32 v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_V2:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*37921*/     /*Scope*/ 45, /*->37967*/
/*37922*/       OPC_MoveParent,
/*37923*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*37925*/       OPC_EmitInteger, MVT::i32, 15, 
/*37928*/       OPC_EmitInteger, MVT::i1, 0, 
/*37931*/       OPC_EmitInteger, MVT::i1, 0, 
/*37934*/       OPC_EmitInteger, MVT::i1, 0, 
/*37937*/       OPC_EmitInteger, MVT::i1, 0, 
/*37940*/       OPC_EmitInteger, MVT::i1, 0, 
/*37943*/       OPC_EmitInteger, MVT::i1, 0, 
/*37946*/       OPC_EmitInteger, MVT::i1, 0, 
/*37949*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_V2), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsample:v4f32 v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)) - Complexity = 6
                // Dst: (IMAGE_SAMPLE_V2:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*37967*/     0, /*End of Scope*/
/*37968*/   /*Scope*/ 121|128,1/*249*/, /*->38219*/
/*37970*/     OPC_CheckChild0Type, MVT::v4i32,
/*37972*/     OPC_RecordChild1, // #1 = $rsrc
/*37973*/     OPC_RecordChild2, // #2 = $sampler
/*37974*/     OPC_MoveChild, 3,
/*37976*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37979*/     OPC_Scope, 47, /*->38028*/ // 5 children in Scope
/*37981*/       OPC_CheckPredicate, 60, // Predicate_TEX_RECT
/*37983*/       OPC_MoveParent,
/*37984*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*37986*/       OPC_EmitInteger, MVT::i32, 15, 
/*37989*/       OPC_EmitInteger, MVT::i1, 1, 
/*37992*/       OPC_EmitInteger, MVT::i1, 0, 
/*37995*/       OPC_EmitInteger, MVT::i1, 0, 
/*37998*/       OPC_EmitInteger, MVT::i1, 0, 
/*38001*/       OPC_EmitInteger, MVT::i1, 0, 
/*38004*/       OPC_EmitInteger, MVT::i1, 0, 
/*38007*/       OPC_EmitInteger, MVT::i1, 0, 
/*38010*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_V4), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsample:v4f32 v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_RECT>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_V4:v4f32 15:i32, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*38028*/     /*Scope*/ 47, /*->38076*/
/*38029*/       OPC_CheckPredicate, 41, // Predicate_TEX_ARRAY
/*38031*/       OPC_MoveParent,
/*38032*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*38034*/       OPC_EmitInteger, MVT::i32, 15, 
/*38037*/       OPC_EmitInteger, MVT::i1, 0, 
/*38040*/       OPC_EmitInteger, MVT::i1, 0, 
/*38043*/       OPC_EmitInteger, MVT::i1, 1, 
/*38046*/       OPC_EmitInteger, MVT::i1, 0, 
/*38049*/       OPC_EmitInteger, MVT::i1, 0, 
/*38052*/       OPC_EmitInteger, MVT::i1, 0, 
/*38055*/       OPC_EmitInteger, MVT::i1, 0, 
/*38058*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_V4), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsample:v4f32 v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_V4:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*38076*/     /*Scope*/ 47, /*->38124*/
/*38077*/       OPC_CheckPredicate, 44, // Predicate_TEX_SHADOW
/*38079*/       OPC_MoveParent,
/*38080*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*38082*/       OPC_EmitInteger, MVT::i32, 15, 
/*38085*/       OPC_EmitInteger, MVT::i1, 0, 
/*38088*/       OPC_EmitInteger, MVT::i1, 0, 
/*38091*/       OPC_EmitInteger, MVT::i1, 0, 
/*38094*/       OPC_EmitInteger, MVT::i1, 0, 
/*38097*/       OPC_EmitInteger, MVT::i1, 0, 
/*38100*/       OPC_EmitInteger, MVT::i1, 0, 
/*38103*/       OPC_EmitInteger, MVT::i1, 0, 
/*38106*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_V4), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsample:v4f32 v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_V4:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*38124*/     /*Scope*/ 47, /*->38172*/
/*38125*/       OPC_CheckPredicate, 61, // Predicate_TEX_SHADOW_ARRAY
/*38127*/       OPC_MoveParent,
/*38128*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*38130*/       OPC_EmitInteger, MVT::i32, 15, 
/*38133*/       OPC_EmitInteger, MVT::i1, 0, 
/*38136*/       OPC_EmitInteger, MVT::i1, 0, 
/*38139*/       OPC_EmitInteger, MVT::i1, 1, 
/*38142*/       OPC_EmitInteger, MVT::i1, 0, 
/*38145*/       OPC_EmitInteger, MVT::i1, 0, 
/*38148*/       OPC_EmitInteger, MVT::i1, 0, 
/*38151*/       OPC_EmitInteger, MVT::i1, 0, 
/*38154*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_V4), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsample:v4f32 v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_V4:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*38172*/     /*Scope*/ 45, /*->38218*/
/*38173*/       OPC_MoveParent,
/*38174*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*38176*/       OPC_EmitInteger, MVT::i32, 15, 
/*38179*/       OPC_EmitInteger, MVT::i1, 0, 
/*38182*/       OPC_EmitInteger, MVT::i1, 0, 
/*38185*/       OPC_EmitInteger, MVT::i1, 0, 
/*38188*/       OPC_EmitInteger, MVT::i1, 0, 
/*38191*/       OPC_EmitInteger, MVT::i1, 0, 
/*38194*/       OPC_EmitInteger, MVT::i1, 0, 
/*38197*/       OPC_EmitInteger, MVT::i1, 0, 
/*38200*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_V4), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsample:v4f32 v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)) - Complexity = 6
                // Dst: (IMAGE_SAMPLE_V4:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*38218*/     0, /*End of Scope*/
/*38219*/   /*Scope*/ 121|128,1/*249*/, /*->38470*/
/*38221*/     OPC_CheckChild0Type, MVT::v8i32,
/*38223*/     OPC_RecordChild1, // #1 = $rsrc
/*38224*/     OPC_RecordChild2, // #2 = $sampler
/*38225*/     OPC_MoveChild, 3,
/*38227*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38230*/     OPC_Scope, 47, /*->38279*/ // 5 children in Scope
/*38232*/       OPC_CheckPredicate, 60, // Predicate_TEX_RECT
/*38234*/       OPC_MoveParent,
/*38235*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*38237*/       OPC_EmitInteger, MVT::i32, 15, 
/*38240*/       OPC_EmitInteger, MVT::i1, 1, 
/*38243*/       OPC_EmitInteger, MVT::i1, 0, 
/*38246*/       OPC_EmitInteger, MVT::i1, 0, 
/*38249*/       OPC_EmitInteger, MVT::i1, 0, 
/*38252*/       OPC_EmitInteger, MVT::i1, 0, 
/*38255*/       OPC_EmitInteger, MVT::i1, 0, 
/*38258*/       OPC_EmitInteger, MVT::i1, 0, 
/*38261*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_V8), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsample:v4f32 v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_RECT>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_V8:v4f32 15:i32, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*38279*/     /*Scope*/ 47, /*->38327*/
/*38280*/       OPC_CheckPredicate, 41, // Predicate_TEX_ARRAY
/*38282*/       OPC_MoveParent,
/*38283*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*38285*/       OPC_EmitInteger, MVT::i32, 15, 
/*38288*/       OPC_EmitInteger, MVT::i1, 0, 
/*38291*/       OPC_EmitInteger, MVT::i1, 0, 
/*38294*/       OPC_EmitInteger, MVT::i1, 1, 
/*38297*/       OPC_EmitInteger, MVT::i1, 0, 
/*38300*/       OPC_EmitInteger, MVT::i1, 0, 
/*38303*/       OPC_EmitInteger, MVT::i1, 0, 
/*38306*/       OPC_EmitInteger, MVT::i1, 0, 
/*38309*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_V8), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsample:v4f32 v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_V8:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*38327*/     /*Scope*/ 47, /*->38375*/
/*38328*/       OPC_CheckPredicate, 44, // Predicate_TEX_SHADOW
/*38330*/       OPC_MoveParent,
/*38331*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*38333*/       OPC_EmitInteger, MVT::i32, 15, 
/*38336*/       OPC_EmitInteger, MVT::i1, 0, 
/*38339*/       OPC_EmitInteger, MVT::i1, 0, 
/*38342*/       OPC_EmitInteger, MVT::i1, 0, 
/*38345*/       OPC_EmitInteger, MVT::i1, 0, 
/*38348*/       OPC_EmitInteger, MVT::i1, 0, 
/*38351*/       OPC_EmitInteger, MVT::i1, 0, 
/*38354*/       OPC_EmitInteger, MVT::i1, 0, 
/*38357*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_V8), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsample:v4f32 v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_V8:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*38375*/     /*Scope*/ 47, /*->38423*/
/*38376*/       OPC_CheckPredicate, 61, // Predicate_TEX_SHADOW_ARRAY
/*38378*/       OPC_MoveParent,
/*38379*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*38381*/       OPC_EmitInteger, MVT::i32, 15, 
/*38384*/       OPC_EmitInteger, MVT::i1, 0, 
/*38387*/       OPC_EmitInteger, MVT::i1, 0, 
/*38390*/       OPC_EmitInteger, MVT::i1, 1, 
/*38393*/       OPC_EmitInteger, MVT::i1, 0, 
/*38396*/       OPC_EmitInteger, MVT::i1, 0, 
/*38399*/       OPC_EmitInteger, MVT::i1, 0, 
/*38402*/       OPC_EmitInteger, MVT::i1, 0, 
/*38405*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_V8), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsample:v4f32 v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_V8:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*38423*/     /*Scope*/ 45, /*->38469*/
/*38424*/       OPC_MoveParent,
/*38425*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*38427*/       OPC_EmitInteger, MVT::i32, 15, 
/*38430*/       OPC_EmitInteger, MVT::i1, 0, 
/*38433*/       OPC_EmitInteger, MVT::i1, 0, 
/*38436*/       OPC_EmitInteger, MVT::i1, 0, 
/*38439*/       OPC_EmitInteger, MVT::i1, 0, 
/*38442*/       OPC_EmitInteger, MVT::i1, 0, 
/*38445*/       OPC_EmitInteger, MVT::i1, 0, 
/*38448*/       OPC_EmitInteger, MVT::i1, 0, 
/*38451*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_V8), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsample:v4f32 v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)) - Complexity = 6
                // Dst: (IMAGE_SAMPLE_V8:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*38469*/     0, /*End of Scope*/
/*38470*/   /*Scope*/ 121|128,1/*249*/, /*->38721*/
/*38472*/     OPC_CheckChild0Type, MVT::v16i32,
/*38474*/     OPC_RecordChild1, // #1 = $rsrc
/*38475*/     OPC_RecordChild2, // #2 = $sampler
/*38476*/     OPC_MoveChild, 3,
/*38478*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38481*/     OPC_Scope, 47, /*->38530*/ // 5 children in Scope
/*38483*/       OPC_CheckPredicate, 60, // Predicate_TEX_RECT
/*38485*/       OPC_MoveParent,
/*38486*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*38488*/       OPC_EmitInteger, MVT::i32, 15, 
/*38491*/       OPC_EmitInteger, MVT::i1, 1, 
/*38494*/       OPC_EmitInteger, MVT::i1, 0, 
/*38497*/       OPC_EmitInteger, MVT::i1, 0, 
/*38500*/       OPC_EmitInteger, MVT::i1, 0, 
/*38503*/       OPC_EmitInteger, MVT::i1, 0, 
/*38506*/       OPC_EmitInteger, MVT::i1, 0, 
/*38509*/       OPC_EmitInteger, MVT::i1, 0, 
/*38512*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_V16), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsample:v4f32 v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_RECT>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_V16:v4f32 15:i32, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*38530*/     /*Scope*/ 47, /*->38578*/
/*38531*/       OPC_CheckPredicate, 41, // Predicate_TEX_ARRAY
/*38533*/       OPC_MoveParent,
/*38534*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*38536*/       OPC_EmitInteger, MVT::i32, 15, 
/*38539*/       OPC_EmitInteger, MVT::i1, 0, 
/*38542*/       OPC_EmitInteger, MVT::i1, 0, 
/*38545*/       OPC_EmitInteger, MVT::i1, 1, 
/*38548*/       OPC_EmitInteger, MVT::i1, 0, 
/*38551*/       OPC_EmitInteger, MVT::i1, 0, 
/*38554*/       OPC_EmitInteger, MVT::i1, 0, 
/*38557*/       OPC_EmitInteger, MVT::i1, 0, 
/*38560*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_V16), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsample:v4f32 v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_V16:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*38578*/     /*Scope*/ 47, /*->38626*/
/*38579*/       OPC_CheckPredicate, 44, // Predicate_TEX_SHADOW
/*38581*/       OPC_MoveParent,
/*38582*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*38584*/       OPC_EmitInteger, MVT::i32, 15, 
/*38587*/       OPC_EmitInteger, MVT::i1, 0, 
/*38590*/       OPC_EmitInteger, MVT::i1, 0, 
/*38593*/       OPC_EmitInteger, MVT::i1, 0, 
/*38596*/       OPC_EmitInteger, MVT::i1, 0, 
/*38599*/       OPC_EmitInteger, MVT::i1, 0, 
/*38602*/       OPC_EmitInteger, MVT::i1, 0, 
/*38605*/       OPC_EmitInteger, MVT::i1, 0, 
/*38608*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_V16), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsample:v4f32 v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_V16:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*38626*/     /*Scope*/ 47, /*->38674*/
/*38627*/       OPC_CheckPredicate, 61, // Predicate_TEX_SHADOW_ARRAY
/*38629*/       OPC_MoveParent,
/*38630*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*38632*/       OPC_EmitInteger, MVT::i32, 15, 
/*38635*/       OPC_EmitInteger, MVT::i1, 0, 
/*38638*/       OPC_EmitInteger, MVT::i1, 0, 
/*38641*/       OPC_EmitInteger, MVT::i1, 1, 
/*38644*/       OPC_EmitInteger, MVT::i1, 0, 
/*38647*/       OPC_EmitInteger, MVT::i1, 0, 
/*38650*/       OPC_EmitInteger, MVT::i1, 0, 
/*38653*/       OPC_EmitInteger, MVT::i1, 0, 
/*38656*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_V16), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsample:v4f32 v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_V16:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*38674*/     /*Scope*/ 45, /*->38720*/
/*38675*/       OPC_MoveParent,
/*38676*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*38678*/       OPC_EmitInteger, MVT::i32, 15, 
/*38681*/       OPC_EmitInteger, MVT::i1, 0, 
/*38684*/       OPC_EmitInteger, MVT::i1, 0, 
/*38687*/       OPC_EmitInteger, MVT::i1, 0, 
/*38690*/       OPC_EmitInteger, MVT::i1, 0, 
/*38693*/       OPC_EmitInteger, MVT::i1, 0, 
/*38696*/       OPC_EmitInteger, MVT::i1, 0, 
/*38699*/       OPC_EmitInteger, MVT::i1, 0, 
/*38702*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_V16), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsample:v4f32 v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)) - Complexity = 6
                // Dst: (IMAGE_SAMPLE_V16:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*38720*/     0, /*End of Scope*/
/*38721*/   /*Scope*/ 54, /*->38776*/
/*38722*/     OPC_CheckChild0Type, MVT::i32,
/*38724*/     OPC_RecordChild1, // #1 = $rsrc
/*38725*/     OPC_RecordChild2, // #2 = $sampler
/*38726*/     OPC_MoveChild, 3,
/*38728*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38731*/     OPC_MoveParent,
/*38732*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*38734*/     OPC_EmitInteger, MVT::i32, 15, 
/*38737*/     OPC_EmitInteger, MVT::i1, 0, 
/*38740*/     OPC_EmitInteger, MVT::i1, 0, 
/*38743*/     OPC_EmitInteger, MVT::i1, 0, 
/*38746*/     OPC_EmitInteger, MVT::i1, 0, 
/*38749*/     OPC_EmitInteger, MVT::i1, 0, 
/*38752*/     OPC_EmitInteger, MVT::i1, 0, 
/*38755*/     OPC_EmitInteger, MVT::i1, 0, 
/*38758*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_V1), 0,
                  1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
              // Src: (SIsample:v4f32 i32:i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)) - Complexity = 6
              // Dst: (IMAGE_SAMPLE_V1:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*38776*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 47|128,6/*815*/,  TARGET_VAL(AMDGPUISD::SAMPLEL),// ->39596
/*38781*/   OPC_RecordChild0, // #0 = $addr
/*38782*/   OPC_Scope, 73|128,1/*201*/, /*->38986*/ // 4 children in Scope
/*38785*/     OPC_CheckChild0Type, MVT::v2i32,
/*38787*/     OPC_RecordChild1, // #1 = $rsrc
/*38788*/     OPC_RecordChild2, // #2 = $sampler
/*38789*/     OPC_MoveChild, 3,
/*38791*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38794*/     OPC_Scope, 47, /*->38843*/ // 4 children in Scope
/*38796*/       OPC_CheckPredicate, 41, // Predicate_TEX_ARRAY
/*38798*/       OPC_MoveParent,
/*38799*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*38801*/       OPC_EmitInteger, MVT::i32, 15, 
/*38804*/       OPC_EmitInteger, MVT::i1, 0, 
/*38807*/       OPC_EmitInteger, MVT::i1, 0, 
/*38810*/       OPC_EmitInteger, MVT::i1, 1, 
/*38813*/       OPC_EmitInteger, MVT::i1, 0, 
/*38816*/       OPC_EmitInteger, MVT::i1, 0, 
/*38819*/       OPC_EmitInteger, MVT::i1, 0, 
/*38822*/       OPC_EmitInteger, MVT::i1, 0, 
/*38825*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_L_V2), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsamplel:v4f32 v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_L_V2:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*38843*/     /*Scope*/ 47, /*->38891*/
/*38844*/       OPC_CheckPredicate, 44, // Predicate_TEX_SHADOW
/*38846*/       OPC_MoveParent,
/*38847*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*38849*/       OPC_EmitInteger, MVT::i32, 15, 
/*38852*/       OPC_EmitInteger, MVT::i1, 0, 
/*38855*/       OPC_EmitInteger, MVT::i1, 0, 
/*38858*/       OPC_EmitInteger, MVT::i1, 0, 
/*38861*/       OPC_EmitInteger, MVT::i1, 0, 
/*38864*/       OPC_EmitInteger, MVT::i1, 0, 
/*38867*/       OPC_EmitInteger, MVT::i1, 0, 
/*38870*/       OPC_EmitInteger, MVT::i1, 0, 
/*38873*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_L_V2), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsamplel:v4f32 v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_L_V2:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*38891*/     /*Scope*/ 47, /*->38939*/
/*38892*/       OPC_CheckPredicate, 61, // Predicate_TEX_SHADOW_ARRAY
/*38894*/       OPC_MoveParent,
/*38895*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*38897*/       OPC_EmitInteger, MVT::i32, 15, 
/*38900*/       OPC_EmitInteger, MVT::i1, 0, 
/*38903*/       OPC_EmitInteger, MVT::i1, 0, 
/*38906*/       OPC_EmitInteger, MVT::i1, 1, 
/*38909*/       OPC_EmitInteger, MVT::i1, 0, 
/*38912*/       OPC_EmitInteger, MVT::i1, 0, 
/*38915*/       OPC_EmitInteger, MVT::i1, 0, 
/*38918*/       OPC_EmitInteger, MVT::i1, 0, 
/*38921*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_L_V2), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsamplel:v4f32 v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_L_V2:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*38939*/     /*Scope*/ 45, /*->38985*/
/*38940*/       OPC_MoveParent,
/*38941*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*38943*/       OPC_EmitInteger, MVT::i32, 15, 
/*38946*/       OPC_EmitInteger, MVT::i1, 0, 
/*38949*/       OPC_EmitInteger, MVT::i1, 0, 
/*38952*/       OPC_EmitInteger, MVT::i1, 0, 
/*38955*/       OPC_EmitInteger, MVT::i1, 0, 
/*38958*/       OPC_EmitInteger, MVT::i1, 0, 
/*38961*/       OPC_EmitInteger, MVT::i1, 0, 
/*38964*/       OPC_EmitInteger, MVT::i1, 0, 
/*38967*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_L_V2), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsamplel:v4f32 v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)) - Complexity = 6
                // Dst: (IMAGE_SAMPLE_L_V2:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*38985*/     0, /*End of Scope*/
/*38986*/   /*Scope*/ 73|128,1/*201*/, /*->39189*/
/*38988*/     OPC_CheckChild0Type, MVT::v4i32,
/*38990*/     OPC_RecordChild1, // #1 = $rsrc
/*38991*/     OPC_RecordChild2, // #2 = $sampler
/*38992*/     OPC_MoveChild, 3,
/*38994*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38997*/     OPC_Scope, 47, /*->39046*/ // 4 children in Scope
/*38999*/       OPC_CheckPredicate, 41, // Predicate_TEX_ARRAY
/*39001*/       OPC_MoveParent,
/*39002*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*39004*/       OPC_EmitInteger, MVT::i32, 15, 
/*39007*/       OPC_EmitInteger, MVT::i1, 0, 
/*39010*/       OPC_EmitInteger, MVT::i1, 0, 
/*39013*/       OPC_EmitInteger, MVT::i1, 1, 
/*39016*/       OPC_EmitInteger, MVT::i1, 0, 
/*39019*/       OPC_EmitInteger, MVT::i1, 0, 
/*39022*/       OPC_EmitInteger, MVT::i1, 0, 
/*39025*/       OPC_EmitInteger, MVT::i1, 0, 
/*39028*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_L_V4), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsamplel:v4f32 v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_L_V4:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*39046*/     /*Scope*/ 47, /*->39094*/
/*39047*/       OPC_CheckPredicate, 44, // Predicate_TEX_SHADOW
/*39049*/       OPC_MoveParent,
/*39050*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*39052*/       OPC_EmitInteger, MVT::i32, 15, 
/*39055*/       OPC_EmitInteger, MVT::i1, 0, 
/*39058*/       OPC_EmitInteger, MVT::i1, 0, 
/*39061*/       OPC_EmitInteger, MVT::i1, 0, 
/*39064*/       OPC_EmitInteger, MVT::i1, 0, 
/*39067*/       OPC_EmitInteger, MVT::i1, 0, 
/*39070*/       OPC_EmitInteger, MVT::i1, 0, 
/*39073*/       OPC_EmitInteger, MVT::i1, 0, 
/*39076*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_L_V4), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsamplel:v4f32 v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_L_V4:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*39094*/     /*Scope*/ 47, /*->39142*/
/*39095*/       OPC_CheckPredicate, 61, // Predicate_TEX_SHADOW_ARRAY
/*39097*/       OPC_MoveParent,
/*39098*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*39100*/       OPC_EmitInteger, MVT::i32, 15, 
/*39103*/       OPC_EmitInteger, MVT::i1, 0, 
/*39106*/       OPC_EmitInteger, MVT::i1, 0, 
/*39109*/       OPC_EmitInteger, MVT::i1, 1, 
/*39112*/       OPC_EmitInteger, MVT::i1, 0, 
/*39115*/       OPC_EmitInteger, MVT::i1, 0, 
/*39118*/       OPC_EmitInteger, MVT::i1, 0, 
/*39121*/       OPC_EmitInteger, MVT::i1, 0, 
/*39124*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_L_V4), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsamplel:v4f32 v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_L_V4:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*39142*/     /*Scope*/ 45, /*->39188*/
/*39143*/       OPC_MoveParent,
/*39144*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*39146*/       OPC_EmitInteger, MVT::i32, 15, 
/*39149*/       OPC_EmitInteger, MVT::i1, 0, 
/*39152*/       OPC_EmitInteger, MVT::i1, 0, 
/*39155*/       OPC_EmitInteger, MVT::i1, 0, 
/*39158*/       OPC_EmitInteger, MVT::i1, 0, 
/*39161*/       OPC_EmitInteger, MVT::i1, 0, 
/*39164*/       OPC_EmitInteger, MVT::i1, 0, 
/*39167*/       OPC_EmitInteger, MVT::i1, 0, 
/*39170*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_L_V4), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsamplel:v4f32 v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)) - Complexity = 6
                // Dst: (IMAGE_SAMPLE_L_V4:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*39188*/     0, /*End of Scope*/
/*39189*/   /*Scope*/ 73|128,1/*201*/, /*->39392*/
/*39191*/     OPC_CheckChild0Type, MVT::v8i32,
/*39193*/     OPC_RecordChild1, // #1 = $rsrc
/*39194*/     OPC_RecordChild2, // #2 = $sampler
/*39195*/     OPC_MoveChild, 3,
/*39197*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39200*/     OPC_Scope, 47, /*->39249*/ // 4 children in Scope
/*39202*/       OPC_CheckPredicate, 41, // Predicate_TEX_ARRAY
/*39204*/       OPC_MoveParent,
/*39205*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*39207*/       OPC_EmitInteger, MVT::i32, 15, 
/*39210*/       OPC_EmitInteger, MVT::i1, 0, 
/*39213*/       OPC_EmitInteger, MVT::i1, 0, 
/*39216*/       OPC_EmitInteger, MVT::i1, 1, 
/*39219*/       OPC_EmitInteger, MVT::i1, 0, 
/*39222*/       OPC_EmitInteger, MVT::i1, 0, 
/*39225*/       OPC_EmitInteger, MVT::i1, 0, 
/*39228*/       OPC_EmitInteger, MVT::i1, 0, 
/*39231*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_L_V8), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsamplel:v4f32 v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_L_V8:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*39249*/     /*Scope*/ 47, /*->39297*/
/*39250*/       OPC_CheckPredicate, 44, // Predicate_TEX_SHADOW
/*39252*/       OPC_MoveParent,
/*39253*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*39255*/       OPC_EmitInteger, MVT::i32, 15, 
/*39258*/       OPC_EmitInteger, MVT::i1, 0, 
/*39261*/       OPC_EmitInteger, MVT::i1, 0, 
/*39264*/       OPC_EmitInteger, MVT::i1, 0, 
/*39267*/       OPC_EmitInteger, MVT::i1, 0, 
/*39270*/       OPC_EmitInteger, MVT::i1, 0, 
/*39273*/       OPC_EmitInteger, MVT::i1, 0, 
/*39276*/       OPC_EmitInteger, MVT::i1, 0, 
/*39279*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_L_V8), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsamplel:v4f32 v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_L_V8:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*39297*/     /*Scope*/ 47, /*->39345*/
/*39298*/       OPC_CheckPredicate, 61, // Predicate_TEX_SHADOW_ARRAY
/*39300*/       OPC_MoveParent,
/*39301*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*39303*/       OPC_EmitInteger, MVT::i32, 15, 
/*39306*/       OPC_EmitInteger, MVT::i1, 0, 
/*39309*/       OPC_EmitInteger, MVT::i1, 0, 
/*39312*/       OPC_EmitInteger, MVT::i1, 1, 
/*39315*/       OPC_EmitInteger, MVT::i1, 0, 
/*39318*/       OPC_EmitInteger, MVT::i1, 0, 
/*39321*/       OPC_EmitInteger, MVT::i1, 0, 
/*39324*/       OPC_EmitInteger, MVT::i1, 0, 
/*39327*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_L_V8), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsamplel:v4f32 v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_L_V8:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*39345*/     /*Scope*/ 45, /*->39391*/
/*39346*/       OPC_MoveParent,
/*39347*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*39349*/       OPC_EmitInteger, MVT::i32, 15, 
/*39352*/       OPC_EmitInteger, MVT::i1, 0, 
/*39355*/       OPC_EmitInteger, MVT::i1, 0, 
/*39358*/       OPC_EmitInteger, MVT::i1, 0, 
/*39361*/       OPC_EmitInteger, MVT::i1, 0, 
/*39364*/       OPC_EmitInteger, MVT::i1, 0, 
/*39367*/       OPC_EmitInteger, MVT::i1, 0, 
/*39370*/       OPC_EmitInteger, MVT::i1, 0, 
/*39373*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_L_V8), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsamplel:v4f32 v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)) - Complexity = 6
                // Dst: (IMAGE_SAMPLE_L_V8:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*39391*/     0, /*End of Scope*/
/*39392*/   /*Scope*/ 73|128,1/*201*/, /*->39595*/
/*39394*/     OPC_CheckChild0Type, MVT::v16i32,
/*39396*/     OPC_RecordChild1, // #1 = $rsrc
/*39397*/     OPC_RecordChild2, // #2 = $sampler
/*39398*/     OPC_MoveChild, 3,
/*39400*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39403*/     OPC_Scope, 47, /*->39452*/ // 4 children in Scope
/*39405*/       OPC_CheckPredicate, 41, // Predicate_TEX_ARRAY
/*39407*/       OPC_MoveParent,
/*39408*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*39410*/       OPC_EmitInteger, MVT::i32, 15, 
/*39413*/       OPC_EmitInteger, MVT::i1, 0, 
/*39416*/       OPC_EmitInteger, MVT::i1, 0, 
/*39419*/       OPC_EmitInteger, MVT::i1, 1, 
/*39422*/       OPC_EmitInteger, MVT::i1, 0, 
/*39425*/       OPC_EmitInteger, MVT::i1, 0, 
/*39428*/       OPC_EmitInteger, MVT::i1, 0, 
/*39431*/       OPC_EmitInteger, MVT::i1, 0, 
/*39434*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_L_V16), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsamplel:v4f32 v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_L_V16:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*39452*/     /*Scope*/ 47, /*->39500*/
/*39453*/       OPC_CheckPredicate, 44, // Predicate_TEX_SHADOW
/*39455*/       OPC_MoveParent,
/*39456*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*39458*/       OPC_EmitInteger, MVT::i32, 15, 
/*39461*/       OPC_EmitInteger, MVT::i1, 0, 
/*39464*/       OPC_EmitInteger, MVT::i1, 0, 
/*39467*/       OPC_EmitInteger, MVT::i1, 0, 
/*39470*/       OPC_EmitInteger, MVT::i1, 0, 
/*39473*/       OPC_EmitInteger, MVT::i1, 0, 
/*39476*/       OPC_EmitInteger, MVT::i1, 0, 
/*39479*/       OPC_EmitInteger, MVT::i1, 0, 
/*39482*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_L_V16), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsamplel:v4f32 v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_L_V16:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*39500*/     /*Scope*/ 47, /*->39548*/
/*39501*/       OPC_CheckPredicate, 61, // Predicate_TEX_SHADOW_ARRAY
/*39503*/       OPC_MoveParent,
/*39504*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*39506*/       OPC_EmitInteger, MVT::i32, 15, 
/*39509*/       OPC_EmitInteger, MVT::i1, 0, 
/*39512*/       OPC_EmitInteger, MVT::i1, 0, 
/*39515*/       OPC_EmitInteger, MVT::i1, 1, 
/*39518*/       OPC_EmitInteger, MVT::i1, 0, 
/*39521*/       OPC_EmitInteger, MVT::i1, 0, 
/*39524*/       OPC_EmitInteger, MVT::i1, 0, 
/*39527*/       OPC_EmitInteger, MVT::i1, 0, 
/*39530*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_L_V16), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsamplel:v4f32 v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_L_V16:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*39548*/     /*Scope*/ 45, /*->39594*/
/*39549*/       OPC_MoveParent,
/*39550*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*39552*/       OPC_EmitInteger, MVT::i32, 15, 
/*39555*/       OPC_EmitInteger, MVT::i1, 0, 
/*39558*/       OPC_EmitInteger, MVT::i1, 0, 
/*39561*/       OPC_EmitInteger, MVT::i1, 0, 
/*39564*/       OPC_EmitInteger, MVT::i1, 0, 
/*39567*/       OPC_EmitInteger, MVT::i1, 0, 
/*39570*/       OPC_EmitInteger, MVT::i1, 0, 
/*39573*/       OPC_EmitInteger, MVT::i1, 0, 
/*39576*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_L_V16), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsamplel:v4f32 v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)) - Complexity = 6
                // Dst: (IMAGE_SAMPLE_L_V16:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*39594*/     0, /*End of Scope*/
/*39595*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 47|128,6/*815*/,  TARGET_VAL(AMDGPUISD::SAMPLEB),// ->40415
/*39600*/   OPC_RecordChild0, // #0 = $addr
/*39601*/   OPC_Scope, 73|128,1/*201*/, /*->39805*/ // 4 children in Scope
/*39604*/     OPC_CheckChild0Type, MVT::v2i32,
/*39606*/     OPC_RecordChild1, // #1 = $rsrc
/*39607*/     OPC_RecordChild2, // #2 = $sampler
/*39608*/     OPC_MoveChild, 3,
/*39610*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39613*/     OPC_Scope, 47, /*->39662*/ // 4 children in Scope
/*39615*/       OPC_CheckPredicate, 41, // Predicate_TEX_ARRAY
/*39617*/       OPC_MoveParent,
/*39618*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*39620*/       OPC_EmitInteger, MVT::i32, 15, 
/*39623*/       OPC_EmitInteger, MVT::i1, 0, 
/*39626*/       OPC_EmitInteger, MVT::i1, 0, 
/*39629*/       OPC_EmitInteger, MVT::i1, 1, 
/*39632*/       OPC_EmitInteger, MVT::i1, 0, 
/*39635*/       OPC_EmitInteger, MVT::i1, 0, 
/*39638*/       OPC_EmitInteger, MVT::i1, 0, 
/*39641*/       OPC_EmitInteger, MVT::i1, 0, 
/*39644*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_B_V2), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampleb:v4f32 v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_B_V2:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*39662*/     /*Scope*/ 47, /*->39710*/
/*39663*/       OPC_CheckPredicate, 44, // Predicate_TEX_SHADOW
/*39665*/       OPC_MoveParent,
/*39666*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*39668*/       OPC_EmitInteger, MVT::i32, 15, 
/*39671*/       OPC_EmitInteger, MVT::i1, 0, 
/*39674*/       OPC_EmitInteger, MVT::i1, 0, 
/*39677*/       OPC_EmitInteger, MVT::i1, 0, 
/*39680*/       OPC_EmitInteger, MVT::i1, 0, 
/*39683*/       OPC_EmitInteger, MVT::i1, 0, 
/*39686*/       OPC_EmitInteger, MVT::i1, 0, 
/*39689*/       OPC_EmitInteger, MVT::i1, 0, 
/*39692*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_B_V2), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampleb:v4f32 v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_B_V2:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*39710*/     /*Scope*/ 47, /*->39758*/
/*39711*/       OPC_CheckPredicate, 61, // Predicate_TEX_SHADOW_ARRAY
/*39713*/       OPC_MoveParent,
/*39714*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*39716*/       OPC_EmitInteger, MVT::i32, 15, 
/*39719*/       OPC_EmitInteger, MVT::i1, 0, 
/*39722*/       OPC_EmitInteger, MVT::i1, 0, 
/*39725*/       OPC_EmitInteger, MVT::i1, 1, 
/*39728*/       OPC_EmitInteger, MVT::i1, 0, 
/*39731*/       OPC_EmitInteger, MVT::i1, 0, 
/*39734*/       OPC_EmitInteger, MVT::i1, 0, 
/*39737*/       OPC_EmitInteger, MVT::i1, 0, 
/*39740*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_B_V2), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampleb:v4f32 v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_B_V2:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*39758*/     /*Scope*/ 45, /*->39804*/
/*39759*/       OPC_MoveParent,
/*39760*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*39762*/       OPC_EmitInteger, MVT::i32, 15, 
/*39765*/       OPC_EmitInteger, MVT::i1, 0, 
/*39768*/       OPC_EmitInteger, MVT::i1, 0, 
/*39771*/       OPC_EmitInteger, MVT::i1, 0, 
/*39774*/       OPC_EmitInteger, MVT::i1, 0, 
/*39777*/       OPC_EmitInteger, MVT::i1, 0, 
/*39780*/       OPC_EmitInteger, MVT::i1, 0, 
/*39783*/       OPC_EmitInteger, MVT::i1, 0, 
/*39786*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_B_V2), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampleb:v4f32 v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)) - Complexity = 6
                // Dst: (IMAGE_SAMPLE_B_V2:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*39804*/     0, /*End of Scope*/
/*39805*/   /*Scope*/ 73|128,1/*201*/, /*->40008*/
/*39807*/     OPC_CheckChild0Type, MVT::v4i32,
/*39809*/     OPC_RecordChild1, // #1 = $rsrc
/*39810*/     OPC_RecordChild2, // #2 = $sampler
/*39811*/     OPC_MoveChild, 3,
/*39813*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39816*/     OPC_Scope, 47, /*->39865*/ // 4 children in Scope
/*39818*/       OPC_CheckPredicate, 41, // Predicate_TEX_ARRAY
/*39820*/       OPC_MoveParent,
/*39821*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*39823*/       OPC_EmitInteger, MVT::i32, 15, 
/*39826*/       OPC_EmitInteger, MVT::i1, 0, 
/*39829*/       OPC_EmitInteger, MVT::i1, 0, 
/*39832*/       OPC_EmitInteger, MVT::i1, 1, 
/*39835*/       OPC_EmitInteger, MVT::i1, 0, 
/*39838*/       OPC_EmitInteger, MVT::i1, 0, 
/*39841*/       OPC_EmitInteger, MVT::i1, 0, 
/*39844*/       OPC_EmitInteger, MVT::i1, 0, 
/*39847*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_B_V4), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampleb:v4f32 v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_B_V4:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*39865*/     /*Scope*/ 47, /*->39913*/
/*39866*/       OPC_CheckPredicate, 44, // Predicate_TEX_SHADOW
/*39868*/       OPC_MoveParent,
/*39869*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*39871*/       OPC_EmitInteger, MVT::i32, 15, 
/*39874*/       OPC_EmitInteger, MVT::i1, 0, 
/*39877*/       OPC_EmitInteger, MVT::i1, 0, 
/*39880*/       OPC_EmitInteger, MVT::i1, 0, 
/*39883*/       OPC_EmitInteger, MVT::i1, 0, 
/*39886*/       OPC_EmitInteger, MVT::i1, 0, 
/*39889*/       OPC_EmitInteger, MVT::i1, 0, 
/*39892*/       OPC_EmitInteger, MVT::i1, 0, 
/*39895*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_B_V4), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampleb:v4f32 v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_B_V4:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*39913*/     /*Scope*/ 47, /*->39961*/
/*39914*/       OPC_CheckPredicate, 61, // Predicate_TEX_SHADOW_ARRAY
/*39916*/       OPC_MoveParent,
/*39917*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*39919*/       OPC_EmitInteger, MVT::i32, 15, 
/*39922*/       OPC_EmitInteger, MVT::i1, 0, 
/*39925*/       OPC_EmitInteger, MVT::i1, 0, 
/*39928*/       OPC_EmitInteger, MVT::i1, 1, 
/*39931*/       OPC_EmitInteger, MVT::i1, 0, 
/*39934*/       OPC_EmitInteger, MVT::i1, 0, 
/*39937*/       OPC_EmitInteger, MVT::i1, 0, 
/*39940*/       OPC_EmitInteger, MVT::i1, 0, 
/*39943*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_B_V4), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampleb:v4f32 v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_B_V4:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*39961*/     /*Scope*/ 45, /*->40007*/
/*39962*/       OPC_MoveParent,
/*39963*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*39965*/       OPC_EmitInteger, MVT::i32, 15, 
/*39968*/       OPC_EmitInteger, MVT::i1, 0, 
/*39971*/       OPC_EmitInteger, MVT::i1, 0, 
/*39974*/       OPC_EmitInteger, MVT::i1, 0, 
/*39977*/       OPC_EmitInteger, MVT::i1, 0, 
/*39980*/       OPC_EmitInteger, MVT::i1, 0, 
/*39983*/       OPC_EmitInteger, MVT::i1, 0, 
/*39986*/       OPC_EmitInteger, MVT::i1, 0, 
/*39989*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_B_V4), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampleb:v4f32 v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)) - Complexity = 6
                // Dst: (IMAGE_SAMPLE_B_V4:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*40007*/     0, /*End of Scope*/
/*40008*/   /*Scope*/ 73|128,1/*201*/, /*->40211*/
/*40010*/     OPC_CheckChild0Type, MVT::v8i32,
/*40012*/     OPC_RecordChild1, // #1 = $rsrc
/*40013*/     OPC_RecordChild2, // #2 = $sampler
/*40014*/     OPC_MoveChild, 3,
/*40016*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40019*/     OPC_Scope, 47, /*->40068*/ // 4 children in Scope
/*40021*/       OPC_CheckPredicate, 41, // Predicate_TEX_ARRAY
/*40023*/       OPC_MoveParent,
/*40024*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*40026*/       OPC_EmitInteger, MVT::i32, 15, 
/*40029*/       OPC_EmitInteger, MVT::i1, 0, 
/*40032*/       OPC_EmitInteger, MVT::i1, 0, 
/*40035*/       OPC_EmitInteger, MVT::i1, 1, 
/*40038*/       OPC_EmitInteger, MVT::i1, 0, 
/*40041*/       OPC_EmitInteger, MVT::i1, 0, 
/*40044*/       OPC_EmitInteger, MVT::i1, 0, 
/*40047*/       OPC_EmitInteger, MVT::i1, 0, 
/*40050*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_B_V8), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampleb:v4f32 v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_B_V8:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*40068*/     /*Scope*/ 47, /*->40116*/
/*40069*/       OPC_CheckPredicate, 44, // Predicate_TEX_SHADOW
/*40071*/       OPC_MoveParent,
/*40072*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*40074*/       OPC_EmitInteger, MVT::i32, 15, 
/*40077*/       OPC_EmitInteger, MVT::i1, 0, 
/*40080*/       OPC_EmitInteger, MVT::i1, 0, 
/*40083*/       OPC_EmitInteger, MVT::i1, 0, 
/*40086*/       OPC_EmitInteger, MVT::i1, 0, 
/*40089*/       OPC_EmitInteger, MVT::i1, 0, 
/*40092*/       OPC_EmitInteger, MVT::i1, 0, 
/*40095*/       OPC_EmitInteger, MVT::i1, 0, 
/*40098*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_B_V8), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampleb:v4f32 v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_B_V8:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*40116*/     /*Scope*/ 47, /*->40164*/
/*40117*/       OPC_CheckPredicate, 61, // Predicate_TEX_SHADOW_ARRAY
/*40119*/       OPC_MoveParent,
/*40120*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*40122*/       OPC_EmitInteger, MVT::i32, 15, 
/*40125*/       OPC_EmitInteger, MVT::i1, 0, 
/*40128*/       OPC_EmitInteger, MVT::i1, 0, 
/*40131*/       OPC_EmitInteger, MVT::i1, 1, 
/*40134*/       OPC_EmitInteger, MVT::i1, 0, 
/*40137*/       OPC_EmitInteger, MVT::i1, 0, 
/*40140*/       OPC_EmitInteger, MVT::i1, 0, 
/*40143*/       OPC_EmitInteger, MVT::i1, 0, 
/*40146*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_B_V8), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampleb:v4f32 v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_B_V8:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*40164*/     /*Scope*/ 45, /*->40210*/
/*40165*/       OPC_MoveParent,
/*40166*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*40168*/       OPC_EmitInteger, MVT::i32, 15, 
/*40171*/       OPC_EmitInteger, MVT::i1, 0, 
/*40174*/       OPC_EmitInteger, MVT::i1, 0, 
/*40177*/       OPC_EmitInteger, MVT::i1, 0, 
/*40180*/       OPC_EmitInteger, MVT::i1, 0, 
/*40183*/       OPC_EmitInteger, MVT::i1, 0, 
/*40186*/       OPC_EmitInteger, MVT::i1, 0, 
/*40189*/       OPC_EmitInteger, MVT::i1, 0, 
/*40192*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_B_V8), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampleb:v4f32 v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)) - Complexity = 6
                // Dst: (IMAGE_SAMPLE_B_V8:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*40210*/     0, /*End of Scope*/
/*40211*/   /*Scope*/ 73|128,1/*201*/, /*->40414*/
/*40213*/     OPC_CheckChild0Type, MVT::v16i32,
/*40215*/     OPC_RecordChild1, // #1 = $rsrc
/*40216*/     OPC_RecordChild2, // #2 = $sampler
/*40217*/     OPC_MoveChild, 3,
/*40219*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40222*/     OPC_Scope, 47, /*->40271*/ // 4 children in Scope
/*40224*/       OPC_CheckPredicate, 41, // Predicate_TEX_ARRAY
/*40226*/       OPC_MoveParent,
/*40227*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*40229*/       OPC_EmitInteger, MVT::i32, 15, 
/*40232*/       OPC_EmitInteger, MVT::i1, 0, 
/*40235*/       OPC_EmitInteger, MVT::i1, 0, 
/*40238*/       OPC_EmitInteger, MVT::i1, 1, 
/*40241*/       OPC_EmitInteger, MVT::i1, 0, 
/*40244*/       OPC_EmitInteger, MVT::i1, 0, 
/*40247*/       OPC_EmitInteger, MVT::i1, 0, 
/*40250*/       OPC_EmitInteger, MVT::i1, 0, 
/*40253*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_B_V16), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampleb:v4f32 v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_B_V16:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*40271*/     /*Scope*/ 47, /*->40319*/
/*40272*/       OPC_CheckPredicate, 44, // Predicate_TEX_SHADOW
/*40274*/       OPC_MoveParent,
/*40275*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*40277*/       OPC_EmitInteger, MVT::i32, 15, 
/*40280*/       OPC_EmitInteger, MVT::i1, 0, 
/*40283*/       OPC_EmitInteger, MVT::i1, 0, 
/*40286*/       OPC_EmitInteger, MVT::i1, 0, 
/*40289*/       OPC_EmitInteger, MVT::i1, 0, 
/*40292*/       OPC_EmitInteger, MVT::i1, 0, 
/*40295*/       OPC_EmitInteger, MVT::i1, 0, 
/*40298*/       OPC_EmitInteger, MVT::i1, 0, 
/*40301*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_B_V16), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampleb:v4f32 v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_B_V16:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*40319*/     /*Scope*/ 47, /*->40367*/
/*40320*/       OPC_CheckPredicate, 61, // Predicate_TEX_SHADOW_ARRAY
/*40322*/       OPC_MoveParent,
/*40323*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*40325*/       OPC_EmitInteger, MVT::i32, 15, 
/*40328*/       OPC_EmitInteger, MVT::i1, 0, 
/*40331*/       OPC_EmitInteger, MVT::i1, 0, 
/*40334*/       OPC_EmitInteger, MVT::i1, 1, 
/*40337*/       OPC_EmitInteger, MVT::i1, 0, 
/*40340*/       OPC_EmitInteger, MVT::i1, 0, 
/*40343*/       OPC_EmitInteger, MVT::i1, 0, 
/*40346*/       OPC_EmitInteger, MVT::i1, 0, 
/*40349*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_B_V16), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampleb:v4f32 v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_B_V16:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*40367*/     /*Scope*/ 45, /*->40413*/
/*40368*/       OPC_MoveParent,
/*40369*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*40371*/       OPC_EmitInteger, MVT::i32, 15, 
/*40374*/       OPC_EmitInteger, MVT::i1, 0, 
/*40377*/       OPC_EmitInteger, MVT::i1, 0, 
/*40380*/       OPC_EmitInteger, MVT::i1, 0, 
/*40383*/       OPC_EmitInteger, MVT::i1, 0, 
/*40386*/       OPC_EmitInteger, MVT::i1, 0, 
/*40389*/       OPC_EmitInteger, MVT::i1, 0, 
/*40392*/       OPC_EmitInteger, MVT::i1, 0, 
/*40395*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_B_V16), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampleb:v4f32 v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)) - Complexity = 6
                // Dst: (IMAGE_SAMPLE_B_V16:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*40413*/     0, /*End of Scope*/
/*40414*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 47|128,6/*815*/,  TARGET_VAL(AMDGPUISD::SAMPLED),// ->41234
/*40419*/   OPC_RecordChild0, // #0 = $addr
/*40420*/   OPC_Scope, 73|128,1/*201*/, /*->40624*/ // 4 children in Scope
/*40423*/     OPC_CheckChild0Type, MVT::v2i32,
/*40425*/     OPC_RecordChild1, // #1 = $rsrc
/*40426*/     OPC_RecordChild2, // #2 = $sampler
/*40427*/     OPC_MoveChild, 3,
/*40429*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40432*/     OPC_Scope, 47, /*->40481*/ // 4 children in Scope
/*40434*/       OPC_CheckPredicate, 41, // Predicate_TEX_ARRAY
/*40436*/       OPC_MoveParent,
/*40437*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*40439*/       OPC_EmitInteger, MVT::i32, 15, 
/*40442*/       OPC_EmitInteger, MVT::i1, 0, 
/*40445*/       OPC_EmitInteger, MVT::i1, 0, 
/*40448*/       OPC_EmitInteger, MVT::i1, 1, 
/*40451*/       OPC_EmitInteger, MVT::i1, 0, 
/*40454*/       OPC_EmitInteger, MVT::i1, 0, 
/*40457*/       OPC_EmitInteger, MVT::i1, 0, 
/*40460*/       OPC_EmitInteger, MVT::i1, 0, 
/*40463*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_D_V2), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampled:v4f32 v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_D_V2:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*40481*/     /*Scope*/ 47, /*->40529*/
/*40482*/       OPC_CheckPredicate, 44, // Predicate_TEX_SHADOW
/*40484*/       OPC_MoveParent,
/*40485*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*40487*/       OPC_EmitInteger, MVT::i32, 15, 
/*40490*/       OPC_EmitInteger, MVT::i1, 0, 
/*40493*/       OPC_EmitInteger, MVT::i1, 0, 
/*40496*/       OPC_EmitInteger, MVT::i1, 0, 
/*40499*/       OPC_EmitInteger, MVT::i1, 0, 
/*40502*/       OPC_EmitInteger, MVT::i1, 0, 
/*40505*/       OPC_EmitInteger, MVT::i1, 0, 
/*40508*/       OPC_EmitInteger, MVT::i1, 0, 
/*40511*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_D_V2), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampled:v4f32 v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_D_V2:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*40529*/     /*Scope*/ 47, /*->40577*/
/*40530*/       OPC_CheckPredicate, 61, // Predicate_TEX_SHADOW_ARRAY
/*40532*/       OPC_MoveParent,
/*40533*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*40535*/       OPC_EmitInteger, MVT::i32, 15, 
/*40538*/       OPC_EmitInteger, MVT::i1, 0, 
/*40541*/       OPC_EmitInteger, MVT::i1, 0, 
/*40544*/       OPC_EmitInteger, MVT::i1, 1, 
/*40547*/       OPC_EmitInteger, MVT::i1, 0, 
/*40550*/       OPC_EmitInteger, MVT::i1, 0, 
/*40553*/       OPC_EmitInteger, MVT::i1, 0, 
/*40556*/       OPC_EmitInteger, MVT::i1, 0, 
/*40559*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_D_V2), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampled:v4f32 v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_D_V2:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*40577*/     /*Scope*/ 45, /*->40623*/
/*40578*/       OPC_MoveParent,
/*40579*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*40581*/       OPC_EmitInteger, MVT::i32, 15, 
/*40584*/       OPC_EmitInteger, MVT::i1, 0, 
/*40587*/       OPC_EmitInteger, MVT::i1, 0, 
/*40590*/       OPC_EmitInteger, MVT::i1, 0, 
/*40593*/       OPC_EmitInteger, MVT::i1, 0, 
/*40596*/       OPC_EmitInteger, MVT::i1, 0, 
/*40599*/       OPC_EmitInteger, MVT::i1, 0, 
/*40602*/       OPC_EmitInteger, MVT::i1, 0, 
/*40605*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_D_V2), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampled:v4f32 v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)) - Complexity = 6
                // Dst: (IMAGE_SAMPLE_D_V2:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*40623*/     0, /*End of Scope*/
/*40624*/   /*Scope*/ 73|128,1/*201*/, /*->40827*/
/*40626*/     OPC_CheckChild0Type, MVT::v4i32,
/*40628*/     OPC_RecordChild1, // #1 = $rsrc
/*40629*/     OPC_RecordChild2, // #2 = $sampler
/*40630*/     OPC_MoveChild, 3,
/*40632*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40635*/     OPC_Scope, 47, /*->40684*/ // 4 children in Scope
/*40637*/       OPC_CheckPredicate, 41, // Predicate_TEX_ARRAY
/*40639*/       OPC_MoveParent,
/*40640*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*40642*/       OPC_EmitInteger, MVT::i32, 15, 
/*40645*/       OPC_EmitInteger, MVT::i1, 0, 
/*40648*/       OPC_EmitInteger, MVT::i1, 0, 
/*40651*/       OPC_EmitInteger, MVT::i1, 1, 
/*40654*/       OPC_EmitInteger, MVT::i1, 0, 
/*40657*/       OPC_EmitInteger, MVT::i1, 0, 
/*40660*/       OPC_EmitInteger, MVT::i1, 0, 
/*40663*/       OPC_EmitInteger, MVT::i1, 0, 
/*40666*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_D_V4), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampled:v4f32 v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_D_V4:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*40684*/     /*Scope*/ 47, /*->40732*/
/*40685*/       OPC_CheckPredicate, 44, // Predicate_TEX_SHADOW
/*40687*/       OPC_MoveParent,
/*40688*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*40690*/       OPC_EmitInteger, MVT::i32, 15, 
/*40693*/       OPC_EmitInteger, MVT::i1, 0, 
/*40696*/       OPC_EmitInteger, MVT::i1, 0, 
/*40699*/       OPC_EmitInteger, MVT::i1, 0, 
/*40702*/       OPC_EmitInteger, MVT::i1, 0, 
/*40705*/       OPC_EmitInteger, MVT::i1, 0, 
/*40708*/       OPC_EmitInteger, MVT::i1, 0, 
/*40711*/       OPC_EmitInteger, MVT::i1, 0, 
/*40714*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_D_V4), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampled:v4f32 v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_D_V4:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*40732*/     /*Scope*/ 47, /*->40780*/
/*40733*/       OPC_CheckPredicate, 61, // Predicate_TEX_SHADOW_ARRAY
/*40735*/       OPC_MoveParent,
/*40736*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*40738*/       OPC_EmitInteger, MVT::i32, 15, 
/*40741*/       OPC_EmitInteger, MVT::i1, 0, 
/*40744*/       OPC_EmitInteger, MVT::i1, 0, 
/*40747*/       OPC_EmitInteger, MVT::i1, 1, 
/*40750*/       OPC_EmitInteger, MVT::i1, 0, 
/*40753*/       OPC_EmitInteger, MVT::i1, 0, 
/*40756*/       OPC_EmitInteger, MVT::i1, 0, 
/*40759*/       OPC_EmitInteger, MVT::i1, 0, 
/*40762*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_D_V4), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampled:v4f32 v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_D_V4:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*40780*/     /*Scope*/ 45, /*->40826*/
/*40781*/       OPC_MoveParent,
/*40782*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*40784*/       OPC_EmitInteger, MVT::i32, 15, 
/*40787*/       OPC_EmitInteger, MVT::i1, 0, 
/*40790*/       OPC_EmitInteger, MVT::i1, 0, 
/*40793*/       OPC_EmitInteger, MVT::i1, 0, 
/*40796*/       OPC_EmitInteger, MVT::i1, 0, 
/*40799*/       OPC_EmitInteger, MVT::i1, 0, 
/*40802*/       OPC_EmitInteger, MVT::i1, 0, 
/*40805*/       OPC_EmitInteger, MVT::i1, 0, 
/*40808*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_D_V4), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampled:v4f32 v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)) - Complexity = 6
                // Dst: (IMAGE_SAMPLE_D_V4:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*40826*/     0, /*End of Scope*/
/*40827*/   /*Scope*/ 73|128,1/*201*/, /*->41030*/
/*40829*/     OPC_CheckChild0Type, MVT::v8i32,
/*40831*/     OPC_RecordChild1, // #1 = $rsrc
/*40832*/     OPC_RecordChild2, // #2 = $sampler
/*40833*/     OPC_MoveChild, 3,
/*40835*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40838*/     OPC_Scope, 47, /*->40887*/ // 4 children in Scope
/*40840*/       OPC_CheckPredicate, 41, // Predicate_TEX_ARRAY
/*40842*/       OPC_MoveParent,
/*40843*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*40845*/       OPC_EmitInteger, MVT::i32, 15, 
/*40848*/       OPC_EmitInteger, MVT::i1, 0, 
/*40851*/       OPC_EmitInteger, MVT::i1, 0, 
/*40854*/       OPC_EmitInteger, MVT::i1, 1, 
/*40857*/       OPC_EmitInteger, MVT::i1, 0, 
/*40860*/       OPC_EmitInteger, MVT::i1, 0, 
/*40863*/       OPC_EmitInteger, MVT::i1, 0, 
/*40866*/       OPC_EmitInteger, MVT::i1, 0, 
/*40869*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_D_V8), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampled:v4f32 v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_D_V8:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*40887*/     /*Scope*/ 47, /*->40935*/
/*40888*/       OPC_CheckPredicate, 44, // Predicate_TEX_SHADOW
/*40890*/       OPC_MoveParent,
/*40891*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*40893*/       OPC_EmitInteger, MVT::i32, 15, 
/*40896*/       OPC_EmitInteger, MVT::i1, 0, 
/*40899*/       OPC_EmitInteger, MVT::i1, 0, 
/*40902*/       OPC_EmitInteger, MVT::i1, 0, 
/*40905*/       OPC_EmitInteger, MVT::i1, 0, 
/*40908*/       OPC_EmitInteger, MVT::i1, 0, 
/*40911*/       OPC_EmitInteger, MVT::i1, 0, 
/*40914*/       OPC_EmitInteger, MVT::i1, 0, 
/*40917*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_D_V8), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampled:v4f32 v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_D_V8:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*40935*/     /*Scope*/ 47, /*->40983*/
/*40936*/       OPC_CheckPredicate, 61, // Predicate_TEX_SHADOW_ARRAY
/*40938*/       OPC_MoveParent,
/*40939*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*40941*/       OPC_EmitInteger, MVT::i32, 15, 
/*40944*/       OPC_EmitInteger, MVT::i1, 0, 
/*40947*/       OPC_EmitInteger, MVT::i1, 0, 
/*40950*/       OPC_EmitInteger, MVT::i1, 1, 
/*40953*/       OPC_EmitInteger, MVT::i1, 0, 
/*40956*/       OPC_EmitInteger, MVT::i1, 0, 
/*40959*/       OPC_EmitInteger, MVT::i1, 0, 
/*40962*/       OPC_EmitInteger, MVT::i1, 0, 
/*40965*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_D_V8), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampled:v4f32 v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_D_V8:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*40983*/     /*Scope*/ 45, /*->41029*/
/*40984*/       OPC_MoveParent,
/*40985*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*40987*/       OPC_EmitInteger, MVT::i32, 15, 
/*40990*/       OPC_EmitInteger, MVT::i1, 0, 
/*40993*/       OPC_EmitInteger, MVT::i1, 0, 
/*40996*/       OPC_EmitInteger, MVT::i1, 0, 
/*40999*/       OPC_EmitInteger, MVT::i1, 0, 
/*41002*/       OPC_EmitInteger, MVT::i1, 0, 
/*41005*/       OPC_EmitInteger, MVT::i1, 0, 
/*41008*/       OPC_EmitInteger, MVT::i1, 0, 
/*41011*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_D_V8), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampled:v4f32 v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)) - Complexity = 6
                // Dst: (IMAGE_SAMPLE_D_V8:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*41029*/     0, /*End of Scope*/
/*41030*/   /*Scope*/ 73|128,1/*201*/, /*->41233*/
/*41032*/     OPC_CheckChild0Type, MVT::v16i32,
/*41034*/     OPC_RecordChild1, // #1 = $rsrc
/*41035*/     OPC_RecordChild2, // #2 = $sampler
/*41036*/     OPC_MoveChild, 3,
/*41038*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*41041*/     OPC_Scope, 47, /*->41090*/ // 4 children in Scope
/*41043*/       OPC_CheckPredicate, 41, // Predicate_TEX_ARRAY
/*41045*/       OPC_MoveParent,
/*41046*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*41048*/       OPC_EmitInteger, MVT::i32, 15, 
/*41051*/       OPC_EmitInteger, MVT::i1, 0, 
/*41054*/       OPC_EmitInteger, MVT::i1, 0, 
/*41057*/       OPC_EmitInteger, MVT::i1, 1, 
/*41060*/       OPC_EmitInteger, MVT::i1, 0, 
/*41063*/       OPC_EmitInteger, MVT::i1, 0, 
/*41066*/       OPC_EmitInteger, MVT::i1, 0, 
/*41069*/       OPC_EmitInteger, MVT::i1, 0, 
/*41072*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_D_V16), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampled:v4f32 v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_D_V16:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*41090*/     /*Scope*/ 47, /*->41138*/
/*41091*/       OPC_CheckPredicate, 44, // Predicate_TEX_SHADOW
/*41093*/       OPC_MoveParent,
/*41094*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*41096*/       OPC_EmitInteger, MVT::i32, 15, 
/*41099*/       OPC_EmitInteger, MVT::i1, 0, 
/*41102*/       OPC_EmitInteger, MVT::i1, 0, 
/*41105*/       OPC_EmitInteger, MVT::i1, 0, 
/*41108*/       OPC_EmitInteger, MVT::i1, 0, 
/*41111*/       OPC_EmitInteger, MVT::i1, 0, 
/*41114*/       OPC_EmitInteger, MVT::i1, 0, 
/*41117*/       OPC_EmitInteger, MVT::i1, 0, 
/*41120*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_D_V16), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampled:v4f32 v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_D_V16:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*41138*/     /*Scope*/ 47, /*->41186*/
/*41139*/       OPC_CheckPredicate, 61, // Predicate_TEX_SHADOW_ARRAY
/*41141*/       OPC_MoveParent,
/*41142*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*41144*/       OPC_EmitInteger, MVT::i32, 15, 
/*41147*/       OPC_EmitInteger, MVT::i1, 0, 
/*41150*/       OPC_EmitInteger, MVT::i1, 0, 
/*41153*/       OPC_EmitInteger, MVT::i1, 1, 
/*41156*/       OPC_EmitInteger, MVT::i1, 0, 
/*41159*/       OPC_EmitInteger, MVT::i1, 0, 
/*41162*/       OPC_EmitInteger, MVT::i1, 0, 
/*41165*/       OPC_EmitInteger, MVT::i1, 0, 
/*41168*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_D_V16), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampled:v4f32 v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_D_V16:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*41186*/     /*Scope*/ 45, /*->41232*/
/*41187*/       OPC_MoveParent,
/*41188*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*41190*/       OPC_EmitInteger, MVT::i32, 15, 
/*41193*/       OPC_EmitInteger, MVT::i1, 0, 
/*41196*/       OPC_EmitInteger, MVT::i1, 0, 
/*41199*/       OPC_EmitInteger, MVT::i1, 0, 
/*41202*/       OPC_EmitInteger, MVT::i1, 0, 
/*41205*/       OPC_EmitInteger, MVT::i1, 0, 
/*41208*/       OPC_EmitInteger, MVT::i1, 0, 
/*41211*/       OPC_EmitInteger, MVT::i1, 0, 
/*41214*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_D_V16), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampled:v4f32 v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)) - Complexity = 6
                // Dst: (IMAGE_SAMPLE_D_V16:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*41232*/     0, /*End of Scope*/
/*41233*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 24,  TARGET_VAL(AMDGPUISD::RET_FLAG),// ->41261
/*41237*/   OPC_RecordNode,   // #0 = 'IL_retflag' chained node
/*41238*/   OPC_CaptureGlueInput,
/*41239*/   OPC_Scope, 9, /*->41250*/ // 2 children in Scope
/*41241*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*41243*/     OPC_EmitMergeInputChains1_0,
/*41244*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_ENDPGM), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (IL_retflag) - Complexity = 3
              // Dst: (S_ENDPGM)
/*41250*/   /*Scope*/ 9, /*->41260*/
/*41251*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*41253*/     OPC_EmitMergeInputChains1_0,
/*41254*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RETURN), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (IL_retflag) - Complexity = 3
              // Dst: (RETURN)
/*41260*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 32,  TARGET_VAL(ISD::BR),// ->41296
/*41264*/   OPC_RecordNode,   // #0 = 'br' chained node
/*41265*/   OPC_RecordChild1, // #1 = $target
/*41266*/   OPC_MoveChild, 1,
/*41268*/   OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*41271*/   OPC_MoveParent,
/*41272*/   OPC_Scope, 10, /*->41284*/ // 2 children in Scope
/*41274*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*41276*/     OPC_EmitMergeInputChains1_0,
/*41277*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_BRANCH), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (br (bb:Other):$target) - Complexity = 3
              // Dst: (S_BRANCH (bb:Other):$target)
/*41284*/   /*Scope*/ 10, /*->41295*/
/*41285*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*41287*/     OPC_EmitMergeInputChains1_0,
/*41288*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BRANCH), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (br (bb:Other):$target) - Complexity = 3
              // Dst: (BRANCH (bb:Other):$target)
/*41295*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 39,  TARGET_VAL(AMDGPUISD::BRANCH_COND),// ->41338
/*41299*/   OPC_RecordNode,   // #0 = 'IL_brcond' chained node
/*41300*/   OPC_RecordChild1, // #1 = $target
/*41301*/   OPC_MoveChild, 1,
/*41303*/   OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*41306*/   OPC_MoveParent,
/*41307*/   OPC_RecordChild2, // #2 = $src0
/*41308*/   OPC_Scope, 13, /*->41323*/ // 2 children in Scope
/*41310*/     OPC_CheckChild2Type, MVT::i32,
/*41312*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*41314*/     OPC_EmitMergeInputChains1_0,
/*41315*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BRANCH_COND_i32), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (IL_brcond (bb:Other):$target, GPRI32:i32:$src0) - Complexity = 3
              // Dst: (BRANCH_COND_i32 (bb:Other):$target, GPRI32:i32:$src0)
/*41323*/   /*Scope*/ 13, /*->41337*/
/*41324*/     OPC_CheckChild2Type, MVT::f32,
/*41326*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*41328*/     OPC_EmitMergeInputChains1_0,
/*41329*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BRANCH_COND_f32), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (IL_brcond (bb:Other):$target, GPRF32:f32:$src0) - Complexity = 3
              // Dst: (BRANCH_COND_f32 (bb:Other):$target, GPRF32:f32:$src0)
/*41337*/   0, /*End of Scope*/
          0, // EndSwitchOpcode
    0
  }; // Total Array size is 41340 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 276
  // #OPC_RecordNode                     = 126
  // #OPC_RecordChild                    = 436
  // #OPC_RecordMemRef                   = 4
  // #OPC_CaptureGlueInput               = 1
  // #OPC_MoveChild                      = 411
  // #OPC_MoveParent                     = 746
  // #OPC_CheckSame                      = 84
  // #OPC_CheckPatternPredicate          = 740
  // #OPC_CheckPredicate                 = 339
  // #OPC_CheckOpcode                    = 315
  // #OPC_SwitchOpcode                   = 1
  // #OPC_CheckType                      = 474
  // #OPC_SwitchType                     = 53
  // #OPC_CheckChildType                 = 109
  // #OPC_CheckInteger                   = 160
  // #OPC_CheckCondCode                  = 19
  // #OPC_CheckValueType                 = 0
  // #OPC_CheckComplexPat                = 49
  // #OPC_CheckAndImm                    = 0
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 0
  // #OPC_EmitInteger                    = 4255
  // #OPC_EmitStringInteger              = 188
  // #OPC_EmitRegister                   = 223
  // #OPC_EmitConvertToTarget            = 255
  // #OPC_EmitMergeInputChains           = 149
  // #OPC_EmitCopyToReg                  = 0
  // #OPC_EmitNode                       = 209
  // #OPC_EmitNodeXForm                  = 20
  // #OPC_MarkGlueResults                = 0
  // #OPC_CompleteMatch                  = 21
  // #OPC_MorphNodeTo                    = 731

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}

virtual bool CheckPatternPredicate(unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: return (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS);
  case 1: return (Subtarget.getGeneration() <= AMDGPUSubtarget::R700);
  case 2: return (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS);
  case 3: return (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS);
  case 4: return (Subtarget.hasCaymanISA());
  case 5: return (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA());
  case 6: return (Subtarget.getGeneration() == AMDGPUSubtarget::R700);
  }
}

virtual bool CheckNodePredicate(SDNode *Node,
                                unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: { // Predicate_legalshift32
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return Imm >=0 && Imm < 32;
  }
  case 1: { // Predicate_bfemask
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
return isMask_32(N->getZExtValue());
  }
  case 2: { // Predicate_COND_EQ
    CondCodeSDNode*N = cast<CondCodeSDNode>(Node);
switch(N->get()){{default: return false;
                     case ISD::SETOEQ: case ISD::SETUEQ:
                     case ISD::SETEQ: return true;}}
  }
  case 3: { // Predicate_COND_GT
    CondCodeSDNode*N = cast<CondCodeSDNode>(Node);
switch(N->get()){{default: return false;
                     case ISD::SETOGT: case ISD::SETUGT:
                     case ISD::SETGT: return true;}}
  }
  case 4: { // Predicate_COND_GE
    CondCodeSDNode*N = cast<CondCodeSDNode>(Node);
switch(N->get()){{default: return false;
                     case ISD::SETOGE: case ISD::SETUGE:
                     case ISD::SETGE: return true;}}
  }
  case 5: { // Predicate_COND_NE
    CondCodeSDNode*N = cast<CondCodeSDNode>(Node);
switch(N->get()){{default: return false;
                     case ISD::SETONE: case ISD::SETUNE:
                     case ISD::SETNE: return true;}}
  }
  case 6: { // Predicate_COND_LT
    CondCodeSDNode*N = cast<CondCodeSDNode>(Node);
switch(N->get()){{default: return false;
                     case ISD::SETOLT: case ISD::SETULT:
                     case ISD::SETLT: return true;}}
  }
  case 7: { // Predicate_COND_LE
    CondCodeSDNode*N = cast<CondCodeSDNode>(Node);
switch(N->get()){{default: return false;
                     case ISD::SETOLE: case ISD::SETULE:
                     case ISD::SETLE: return true;}}
  }
  case 8: { // Predicate_FP_ONE
    ConstantFPSDNode*N = cast<ConstantFPSDNode>(Node);
return N->isExactlyValue(1.0);
  }
  case 9: { // Predicate_FP_ZERO
    ConstantFPSDNode*N = cast<ConstantFPSDNode>(Node);
return N->getValueAPF().isZero();
  }
  case 10: { // Predicate_unindexedload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 11: { // Predicate_az_extload
    SDNode *N = Node;

  LoadSDNode *L = cast<LoadSDNode>(N);
  return L->getExtensionType() == ISD::ZEXTLOAD ||
         L->getExtensionType() == ISD::EXTLOAD;

  }
  case 12: { // Predicate_az_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 13: { // Predicate_load_param_exti8
    SDNode *N = Node;
 return isConstantLoad(dyn_cast<LoadSDNode>(N), 0); 
  }
  case 14: { // Predicate_az_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 15: { // Predicate_load_param_exti16
    SDNode *N = Node;
 return isConstantLoad(dyn_cast<LoadSDNode>(N), 0); 
  }
  case 16: { // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 17: { // Predicate_load_param
    SDNode *N = Node;
 return isConstantLoad(dyn_cast<LoadSDNode>(N), 0); 
  }
  case 18: { // Predicate_az_extloadi8_global
    SDNode *N = Node;

    return isGlobalLoad(dyn_cast<LoadSDNode>(N));

  }
  case 19: { // Predicate_az_extloadi16_global
    SDNode *N = Node;

    return isGlobalLoad(dyn_cast<LoadSDNode>(N));

  }
  case 20: { // Predicate_global_load
    SDNode *N = Node;

    return isGlobalLoad(dyn_cast<LoadSDNode>(N));

  }
  case 21: { // Predicate_IMM8bitDWORD
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();

    return (Imm & ~0x3FC) == 0;
  
  }
  case 22: { // Predicate_constant_load
    SDNode *N = Node;

    return isConstantLoad(dyn_cast<LoadSDNode>(N), -1);

  }
  case 23: { // Predicate_IMM12bit
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
return isUInt<12>(N->getZExtValue());
  }
  case 24: { // Predicate_sextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::SEXTLOAD;

  }
  case 25: { // Predicate_sextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 26: { // Predicate_sextloadi8_global
    SDNode *N = Node;

    return isGlobalLoad(dyn_cast<LoadSDNode>(N));

  }
  case 27: { // Predicate_sextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 28: { // Predicate_sextloadi16_global
    SDNode *N = Node;

    return isGlobalLoad(dyn_cast<LoadSDNode>(N));

  }
  case 29: { // Predicate_az_extloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 30: { // Predicate_az_extloadi32_global
    SDNode *N = Node;

  return isGlobalLoad(dyn_cast<LoadSDNode>(N));

  }
  case 31: { // Predicate_sextloadi8_constant
    SDNode *N = Node;

    return isConstantLoad(dyn_cast<LoadSDNode>(N), -1);

  }
  case 32: { // Predicate_az_extloadi8_constant
    SDNode *N = Node;

    return isConstantLoad(dyn_cast<LoadSDNode>(N), -1);

  }
  case 33: { // Predicate_sextloadi16_constant
    SDNode *N = Node;

    return isConstantLoad(dyn_cast<LoadSDNode>(N), -1);

  }
  case 34: { // Predicate_az_extloadi16_constant
    SDNode *N = Node;

    return isConstantLoad(dyn_cast<LoadSDNode>(N), -1);

  }
  case 35: { // Predicate_az_extloadi32_constant
    SDNode *N = Node;

  return isConstantLoad(dyn_cast<LoadSDNode>(N), -1);

  }
  case 36: { // Predicate_sextloadi8_local
    SDNode *N = Node;

    return isLocalLoad(dyn_cast<LoadSDNode>(N));

  }
  case 37: { // Predicate_az_extloadi8_local
    SDNode *N = Node;

    return isLocalLoad(dyn_cast<LoadSDNode>(N));

  }
  case 38: { // Predicate_sextloadi16_local
    SDNode *N = Node;

    return isLocalLoad(dyn_cast<LoadSDNode>(N));

  }
  case 39: { // Predicate_az_extloadi16_local
    SDNode *N = Node;

    return isLocalLoad(dyn_cast<LoadSDNode>(N));

  }
  case 40: { // Predicate_local_load
    SDNode *N = Node;

    return isLocalLoad(dyn_cast<LoadSDNode>(N));

  }
  case 41: { // Predicate_TEX_ARRAY
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
uint32_t TType = (uint32_t)N->getZExtValue();
    return TType == 9 || TType == 10 || TType == 16;
  
  }
  case 42: { // Predicate_TEX_MSAA
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
uint32_t TType = (uint32_t)N->getZExtValue();
    return TType == 14;
  
  }
  case 43: { // Predicate_TEX_ARRAY_MSAA
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
uint32_t TType = (uint32_t)N->getZExtValue();
    return TType == 15;
  
  }
  case 44: { // Predicate_TEX_SHADOW
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
uint32_t TType = (uint32_t)N->getZExtValue();
    return (TType >= 6 && TType <= 8) || (TType >= 11 && TType <= 13);
  
  }
  case 45: { // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 46: { // Predicate_truncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 47: { // Predicate_truncstorei8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 48: { // Predicate_truncstorei8_global
    SDNode *N = Node;

  return isGlobalStore(dyn_cast<StoreSDNode>(N));

  }
  case 49: { // Predicate_truncstorei16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 50: { // Predicate_truncstorei16_global
    SDNode *N = Node;

  return isGlobalStore(dyn_cast<StoreSDNode>(N));

  }
  case 51: { // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 52: { // Predicate_global_store
    SDNode *N = Node;

        return isGlobalStore(dyn_cast<StoreSDNode>(N));

  }
  case 53: { // Predicate_local_store
    SDNode *N = Node;

  return isLocalStore(dyn_cast<StoreSDNode>(N));

  }
  case 54: { // Predicate_truncstorei8_local
    SDNode *N = Node;

  return isLocalStore(dyn_cast<StoreSDNode>(N));

  }
  case 55: { // Predicate_truncstorei16_local
    SDNode *N = Node;

  return isLocalStore(dyn_cast<StoreSDNode>(N));

  }
  case 56: { // Predicate_mskor_global
    SDNode *N = Node;

  return dyn_cast<MemSDNode>(N)->getAddressSpace() == AMDGPUAS::GLOBAL_ADDRESS;

  }
  case 57: { // Predicate_anonymous.val.397
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  if (TM.getSubtarget<AMDGPUSubtarget>().getGeneration() <
      AMDGPUSubtarget::SOUTHERN_ISLANDS) {
    return false;
  }
  const SIRegisterInfo *SIRI =
                       static_cast<const SIRegisterInfo*>(TM.getRegisterInfo());
  for (SDNode::use_iterator U = N->use_begin(), E = SDNode::use_end();
                                                U != E; ++U) {
    if (SIRI->isSGPRClass(getOperandRegClass(*U, U.getOperandNo()))) {
      return true;
    }
  }
  return false;

  }
  case 58: { // Predicate_anonymous.val.399
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return
    (*(const SITargetLowering *)getTargetLowering()).analyzeImmediate(N) == 0;

  }
  case 59: { // Predicate_anonymous.val.398
    ConstantFPSDNode*N = cast<ConstantFPSDNode>(Node);

  if (TM.getSubtarget<AMDGPUSubtarget>().getGeneration() <
      AMDGPUSubtarget::SOUTHERN_ISLANDS) {
    return false;
  }
  const SIRegisterInfo *SIRI =
                       static_cast<const SIRegisterInfo*>(TM.getRegisterInfo());
  for (SDNode::use_iterator U = N->use_begin(), E = SDNode::use_end();
                                                U != E; ++U) {
    if (SIRI->isSGPRClass(getOperandRegClass(*U, U.getOperandNo()))) {
      return true;
    }
  }
  return false;

  }
  case 60: { // Predicate_TEX_RECT
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
uint32_t TType = (uint32_t)N->getZExtValue();
    return TType == 5;
  
  }
  case 61: { // Predicate_TEX_SHADOW_ARRAY
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
uint32_t TType = (uint32_t)N->getZExtValue();
    return TType == 11 || TType == 12 || TType == 17;
  
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
    Result.resize(NextRes+1);
    return SelectU24(N, Result[NextRes+0].first);
  case 1:
    Result.resize(NextRes+1);
    return SelectI24(N, Result[NextRes+0].first);
  case 2:
    Result.resize(NextRes+2);
    return SelectADDRIndirect(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 3:
    Result.resize(NextRes+2);
    return SelectADDRVTX_READ(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 4:
    Result.resize(NextRes+1);
    return SelectGlobalValueConstantOffset(N, Result[NextRes+0].first);
  case 5:
    Result.resize(NextRes+2);
    return SelectGlobalValueVariableOffset(N, Result[NextRes+0].first, Result[NextRes+1].first);
  }
}

virtual SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) {
  switch (XFormNo) {
  default: llvm_unreachable("Invalid xform # in table?");
  case 0: {  // anonymous.val.396
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

    return CurDAG->getTargetConstant(
      N->getZExtValue() >> 2, MVT::i32);
  
  }
  case 1: {  // as_i16imm
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(N->getSExtValue(), MVT::i16);

  }
  case 2: {  // LO32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(N->getZExtValue() & 0xffffffff, MVT::i32);

  }
  case 3: {  // HI32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(N->getZExtValue() >> 32, MVT::i32);

  }
  case 4: {  // LO32f
    ConstantFPSDNode *N = cast<ConstantFPSDNode>(V.getNode());

  APInt V = N->getValueAPF().bitcastToAPInt().trunc(32);
  return CurDAG->getTargetConstantFP(APFloat(APFloat::IEEEsingle, V), MVT::f32);

  }
  case 5: {  // HI32f
    ConstantFPSDNode *N = cast<ConstantFPSDNode>(V.getNode());

  APInt V = N->getValueAPF().bitcastToAPInt().lshr(32).trunc(32);
  return CurDAG->getTargetConstantFP(APFloat(APFloat::IEEEsingle, V), MVT::f32);

  }
  }
}

