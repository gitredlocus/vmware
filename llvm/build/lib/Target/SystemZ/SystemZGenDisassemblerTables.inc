/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* * SystemZ Disassembler                                                     *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#include "llvm/MC/MCInst.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/DataTypes.h"
#include "llvm/Support/LEB128.h"
#include "llvm/Support/raw_ostream.h"
#include <assert.h>

namespace llvm {

// Helper function for extracting fields from encoded instructions.
template<typename InsnType>
static InsnType fieldFromInstruction(InsnType insn, unsigned startBit,
                                     unsigned numBits) {
    assert(startBit + numBits <= (sizeof(InsnType)*8) &&
           "Instruction field out of bounds!");
    InsnType fieldMask;
    if (numBits == sizeof(InsnType)*8)
      fieldMask = (InsnType)(-1LL);
    else
      fieldMask = (((InsnType)1 << numBits) - 1) << startBit;
    return (insn & fieldMask) >> startBit;
}

static const uint8_t DecoderTable16[] = {
/* 0 */       MCD::OPC_ExtractField, 8, 8,  // Inst{15-8} ...
/* 3 */       MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 17
/* 7 */       MCD::OPC_CheckField, 4, 4, 15, 138, 0, // Skip to: 151
/* 13 */      MCD::OPC_Decode, 183, 2, 0, // Opcode: BR
/* 17 */      MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 25
/* 21 */      MCD::OPC_Decode, 135, 1, 1, // Opcode: AsmBASR
/* 25 */      MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 33
/* 29 */      MCD::OPC_Decode, 143, 4, 2, // Opcode: LPR
/* 33 */      MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 41
/* 37 */      MCD::OPC_Decode, 133, 4, 2, // Opcode: LNR
/* 41 */      MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 49
/* 45 */      MCD::OPC_Decode, 160, 4, 2, // Opcode: LTR
/* 49 */      MCD::OPC_FilterValue, 19, 4, 0, // Skip to: 57
/* 53 */      MCD::OPC_Decode, 204, 3, 2, // Opcode: LCR
/* 57 */      MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 65
/* 61 */      MCD::OPC_Decode, 230, 4, 3, // Opcode: NR
/* 65 */      MCD::OPC_FilterValue, 21, 4, 0, // Skip to: 73
/* 69 */      MCD::OPC_Decode, 245, 2, 2, // Opcode: CLR
/* 73 */      MCD::OPC_FilterValue, 22, 4, 0, // Skip to: 81
/* 77 */      MCD::OPC_Decode, 248, 4, 3, // Opcode: OR
/* 81 */      MCD::OPC_FilterValue, 23, 4, 0, // Skip to: 89
/* 85 */      MCD::OPC_Decode, 233, 5, 3, // Opcode: XR
/* 89 */      MCD::OPC_FilterValue, 24, 4, 0, // Skip to: 97
/* 93 */      MCD::OPC_Decode, 145, 4, 2, // Opcode: LR
/* 97 */      MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 105
/* 101 */     MCD::OPC_Decode, 254, 2, 2, // Opcode: CR
/* 105 */     MCD::OPC_FilterValue, 26, 3, 0, // Skip to: 112
/* 109 */     MCD::OPC_Decode, 57, 3, // Opcode: AR
/* 112 */     MCD::OPC_FilterValue, 27, 4, 0, // Skip to: 120
/* 116 */     MCD::OPC_Decode, 171, 5, 3, // Opcode: SR
/* 120 */     MCD::OPC_FilterValue, 30, 3, 0, // Skip to: 127
/* 124 */     MCD::OPC_Decode, 54, 3, // Opcode: ALR
/* 127 */     MCD::OPC_FilterValue, 31, 4, 0, // Skip to: 135
/* 131 */     MCD::OPC_Decode, 163, 5, 3, // Opcode: SLR
/* 135 */     MCD::OPC_FilterValue, 40, 4, 0, // Skip to: 143
/* 139 */     MCD::OPC_Decode, 210, 3, 4, // Opcode: LDR
/* 143 */     MCD::OPC_FilterValue, 56, 4, 0, // Skip to: 151
/* 147 */     MCD::OPC_Decode, 215, 3, 5, // Opcode: LER
/* 151 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTable32[] = {
/* 0 */       MCD::OPC_ExtractField, 24, 8,  // Inst{31-24} ...
/* 3 */       MCD::OPC_FilterValue, 64, 4, 0, // Skip to: 11
/* 7 */       MCD::OPC_Decode, 195, 5, 6, // Opcode: STH
/* 11 */      MCD::OPC_FilterValue, 65, 4, 0, // Skip to: 19
/* 15 */      MCD::OPC_Decode, 195, 3, 6, // Opcode: LA
/* 19 */      MCD::OPC_FilterValue, 66, 4, 0, // Skip to: 27
/* 23 */      MCD::OPC_Decode, 185, 5, 6, // Opcode: STC
/* 27 */      MCD::OPC_FilterValue, 67, 4, 0, // Skip to: 35
/* 31 */      MCD::OPC_Decode, 177, 3, 7, // Opcode: IC
/* 35 */      MCD::OPC_FilterValue, 72, 4, 0, // Skip to: 43
/* 39 */      MCD::OPC_Decode, 232, 3, 8, // Opcode: LH
/* 43 */      MCD::OPC_FilterValue, 73, 4, 0, // Skip to: 51
/* 47 */      MCD::OPC_Decode, 219, 2, 8, // Opcode: CH
/* 51 */      MCD::OPC_FilterValue, 74, 3, 0, // Skip to: 58
/* 55 */      MCD::OPC_Decode, 36, 9, // Opcode: AH
/* 58 */      MCD::OPC_FilterValue, 75, 4, 0, // Skip to: 66
/* 62 */      MCD::OPC_Decode, 146, 5, 9, // Opcode: SH
/* 66 */      MCD::OPC_FilterValue, 76, 4, 0, // Skip to: 74
/* 70 */      MCD::OPC_Decode, 184, 4, 9, // Opcode: MH
/* 74 */      MCD::OPC_FilterValue, 80, 4, 0, // Skip to: 82
/* 78 */      MCD::OPC_Decode, 181, 5, 6, // Opcode: ST
/* 82 */      MCD::OPC_FilterValue, 84, 4, 0, // Skip to: 90
/* 86 */      MCD::OPC_Decode, 215, 4, 9, // Opcode: N
/* 90 */      MCD::OPC_FilterValue, 85, 4, 0, // Skip to: 98
/* 94 */      MCD::OPC_Decode, 226, 2, 8, // Opcode: CL
/* 98 */      MCD::OPC_FilterValue, 86, 4, 0, // Skip to: 106
/* 102 */     MCD::OPC_Decode, 233, 4, 9, // Opcode: O
/* 106 */     MCD::OPC_FilterValue, 87, 4, 0, // Skip to: 114
/* 110 */     MCD::OPC_Decode, 224, 5, 9, // Opcode: X
/* 114 */     MCD::OPC_FilterValue, 88, 4, 0, // Skip to: 122
/* 118 */     MCD::OPC_Decode, 193, 3, 8, // Opcode: L
/* 122 */     MCD::OPC_FilterValue, 89, 4, 0, // Skip to: 130
/* 126 */     MCD::OPC_Decode, 190, 2, 8, // Opcode: C
/* 130 */     MCD::OPC_FilterValue, 90, 3, 0, // Skip to: 137
/* 134 */     MCD::OPC_Decode, 17, 9, // Opcode: A
/* 137 */     MCD::OPC_FilterValue, 91, 4, 0, // Skip to: 145
/* 141 */     MCD::OPC_Decode, 136, 5, 9, // Opcode: S
/* 145 */     MCD::OPC_FilterValue, 94, 3, 0, // Skip to: 152
/* 149 */     MCD::OPC_Decode, 40, 9, // Opcode: AL
/* 152 */     MCD::OPC_FilterValue, 95, 4, 0, // Skip to: 160
/* 156 */     MCD::OPC_Decode, 148, 5, 9, // Opcode: SL
/* 160 */     MCD::OPC_FilterValue, 96, 4, 0, // Skip to: 168
/* 164 */     MCD::OPC_Decode, 189, 5, 10, // Opcode: STD
/* 168 */     MCD::OPC_FilterValue, 104, 4, 0, // Skip to: 176
/* 172 */     MCD::OPC_Decode, 206, 3, 10, // Opcode: LD
/* 176 */     MCD::OPC_FilterValue, 112, 4, 0, // Skip to: 184
/* 180 */     MCD::OPC_Decode, 191, 5, 11, // Opcode: STE
/* 184 */     MCD::OPC_FilterValue, 113, 4, 0, // Skip to: 192
/* 188 */     MCD::OPC_Decode, 189, 4, 9, // Opcode: MS
/* 192 */     MCD::OPC_FilterValue, 120, 4, 0, // Skip to: 200
/* 196 */     MCD::OPC_Decode, 213, 3, 11, // Opcode: LE
/* 200 */     MCD::OPC_FilterValue, 136, 1, 10, 0, // Skip to: 215
/* 205 */     MCD::OPC_CheckField, 16, 4, 0, 29, 11, // Skip to: 3056
/* 211 */     MCD::OPC_Decode, 176, 5, 12, // Opcode: SRL
/* 215 */     MCD::OPC_FilterValue, 137, 1, 10, 0, // Skip to: 230
/* 220 */     MCD::OPC_CheckField, 16, 4, 0, 14, 11, // Skip to: 3056
/* 226 */     MCD::OPC_Decode, 160, 5, 12, // Opcode: SLL
/* 230 */     MCD::OPC_FilterValue, 138, 1, 10, 0, // Skip to: 245
/* 235 */     MCD::OPC_CheckField, 16, 4, 0, 255, 10, // Skip to: 3056
/* 241 */     MCD::OPC_Decode, 172, 5, 12, // Opcode: SRA
/* 245 */     MCD::OPC_FilterValue, 146, 1, 4, 0, // Skip to: 254
/* 250 */     MCD::OPC_Decode, 208, 4, 13, // Opcode: MVI
/* 254 */     MCD::OPC_FilterValue, 148, 1, 4, 0, // Skip to: 263
/* 259 */     MCD::OPC_Decode, 219, 4, 13, // Opcode: NI
/* 263 */     MCD::OPC_FilterValue, 149, 1, 4, 0, // Skip to: 272
/* 268 */     MCD::OPC_Decode, 243, 2, 13, // Opcode: CLI
/* 272 */     MCD::OPC_FilterValue, 150, 1, 4, 0, // Skip to: 281
/* 277 */     MCD::OPC_Decode, 237, 4, 13, // Opcode: OI
/* 281 */     MCD::OPC_FilterValue, 151, 1, 4, 0, // Skip to: 290
/* 286 */     MCD::OPC_Decode, 228, 5, 13, // Opcode: XI
/* 290 */     MCD::OPC_FilterValue, 165, 1, 131, 0, // Skip to: 426
/* 295 */     MCD::OPC_ExtractField, 16, 4,  // Inst{19-16} ...
/* 298 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 306
/* 302 */     MCD::OPC_Decode, 182, 3, 14, // Opcode: IIHH
/* 306 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 314
/* 310 */     MCD::OPC_Decode, 183, 3, 14, // Opcode: IIHL
/* 314 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 322
/* 318 */     MCD::OPC_Decode, 186, 3, 14, // Opcode: IILH
/* 322 */     MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 330
/* 326 */     MCD::OPC_Decode, 188, 3, 14, // Opcode: IILL
/* 330 */     MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 338
/* 334 */     MCD::OPC_Decode, 221, 4, 14, // Opcode: NIHH
/* 338 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 346
/* 342 */     MCD::OPC_Decode, 222, 4, 14, // Opcode: NIHL
/* 346 */     MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 354
/* 350 */     MCD::OPC_Decode, 225, 4, 14, // Opcode: NILH
/* 354 */     MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 362
/* 358 */     MCD::OPC_Decode, 227, 4, 14, // Opcode: NILL
/* 362 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 370
/* 366 */     MCD::OPC_Decode, 239, 4, 14, // Opcode: OIHH
/* 370 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 378
/* 374 */     MCD::OPC_Decode, 240, 4, 14, // Opcode: OIHL
/* 378 */     MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 386
/* 382 */     MCD::OPC_Decode, 243, 4, 14, // Opcode: OILH
/* 386 */     MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 394
/* 390 */     MCD::OPC_Decode, 245, 4, 14, // Opcode: OILL
/* 394 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 402
/* 398 */     MCD::OPC_Decode, 251, 3, 15, // Opcode: LLIHH
/* 402 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 410
/* 406 */     MCD::OPC_Decode, 252, 3, 15, // Opcode: LLIHL
/* 410 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 418
/* 414 */     MCD::OPC_Decode, 254, 3, 15, // Opcode: LLILH
/* 418 */     MCD::OPC_FilterValue, 15, 74, 10, // Skip to: 3056
/* 422 */     MCD::OPC_Decode, 255, 3, 15, // Opcode: LLILL
/* 426 */     MCD::OPC_FilterValue, 167, 1, 252, 0, // Skip to: 683
/* 431 */     MCD::OPC_ExtractField, 16, 4,  // Inst{19-16} ...
/* 434 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 442
/* 438 */     MCD::OPC_Decode, 220, 5, 15, // Opcode: TMLH
/* 442 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 450
/* 446 */     MCD::OPC_Decode, 222, 5, 15, // Opcode: TMLL
/* 450 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 458
/* 454 */     MCD::OPC_Decode, 218, 5, 15, // Opcode: TMHH
/* 458 */     MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 466
/* 462 */     MCD::OPC_Decode, 219, 5, 15, // Opcode: TMHL
/* 466 */     MCD::OPC_FilterValue, 4, 127, 0, // Skip to: 597
/* 470 */     MCD::OPC_ExtractField, 20, 4,  // Inst{23-20} ...
/* 473 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 481
/* 477 */     MCD::OPC_Decode, 172, 2, 16, // Opcode: AsmOJ
/* 481 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 489
/* 485 */     MCD::OPC_Decode, 160, 1, 16, // Opcode: AsmHJ
/* 489 */     MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 497
/* 493 */     MCD::OPC_Decode, 140, 2, 16, // Opcode: AsmNLEJ
/* 497 */     MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 505
/* 501 */     MCD::OPC_Decode, 232, 1, 16, // Opcode: AsmLJ
/* 505 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 513
/* 509 */     MCD::OPC_Decode, 252, 1, 16, // Opcode: AsmNHEJ
/* 513 */     MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 521
/* 517 */     MCD::OPC_Decode, 224, 1, 16, // Opcode: AsmLHJ
/* 521 */     MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 529
/* 525 */     MCD::OPC_Decode, 244, 1, 16, // Opcode: AsmNEJ
/* 529 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 537
/* 533 */     MCD::OPC_Decode, 144, 1, 16, // Opcode: AsmEJ
/* 537 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 545
/* 541 */     MCD::OPC_Decode, 148, 2, 16, // Opcode: AsmNLHJ
/* 545 */     MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 553
/* 549 */     MCD::OPC_Decode, 152, 1, 16, // Opcode: AsmHEJ
/* 553 */     MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 561
/* 557 */     MCD::OPC_Decode, 156, 2, 16, // Opcode: AsmNLJ
/* 561 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 569
/* 565 */     MCD::OPC_Decode, 216, 1, 16, // Opcode: AsmLEJ
/* 569 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 577
/* 573 */     MCD::OPC_Decode, 132, 2, 16, // Opcode: AsmNHJ
/* 577 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 585
/* 581 */     MCD::OPC_Decode, 164, 2, 16, // Opcode: AsmNOJ
/* 585 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 593
/* 589 */     MCD::OPC_Decode, 191, 3, 16, // Opcode: J
/* 593 */     MCD::OPC_Decode, 138, 1, 17, // Opcode: AsmBRC
/* 597 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 605
/* 601 */     MCD::OPC_Decode, 136, 1, 18, // Opcode: AsmBRAS
/* 605 */     MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 613
/* 609 */     MCD::OPC_Decode, 188, 2, 19, // Opcode: BRCT
/* 613 */     MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 621
/* 617 */     MCD::OPC_Decode, 189, 2, 20, // Opcode: BRCTG
/* 621 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 629
/* 625 */     MCD::OPC_Decode, 233, 3, 21, // Opcode: LHI
/* 629 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 637
/* 633 */     MCD::OPC_Decode, 227, 3, 22, // Opcode: LGHI
/* 637 */     MCD::OPC_FilterValue, 10, 3, 0, // Skip to: 644
/* 641 */     MCD::OPC_Decode, 37, 23, // Opcode: AHI
/* 644 */     MCD::OPC_FilterValue, 11, 3, 0, // Skip to: 651
/* 648 */     MCD::OPC_Decode, 31, 24, // Opcode: AGHI
/* 651 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 659
/* 655 */     MCD::OPC_Decode, 185, 4, 23, // Opcode: MHI
/* 659 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 667
/* 663 */     MCD::OPC_Decode, 183, 4, 24, // Opcode: MGHI
/* 667 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 675
/* 671 */     MCD::OPC_Decode, 221, 2, 21, // Opcode: CHI
/* 675 */     MCD::OPC_FilterValue, 15, 73, 9, // Skip to: 3056
/* 679 */     MCD::OPC_Decode, 211, 2, 22, // Opcode: CGHI
/* 683 */     MCD::OPC_FilterValue, 178, 1, 68, 0, // Skip to: 756
/* 688 */     MCD::OPC_ExtractField, 8, 16,  // Inst{23-8} ...
/* 691 */     MCD::OPC_FilterValue, 128, 68, 10, 0, // Skip to: 706
/* 696 */     MCD::OPC_CheckField, 0, 4, 0, 50, 9, // Skip to: 3056
/* 702 */     MCD::OPC_Decode, 190, 3, 25, // Opcode: IPM
/* 706 */     MCD::OPC_FilterValue, 128, 158, 1, 4, 0, // Skip to: 716
/* 712 */     MCD::OPC_Decode, 169, 3, 26, // Opcode: EAR
/* 716 */     MCD::OPC_FilterValue, 128, 164, 1, 4, 0, // Skip to: 726
/* 722 */     MCD::OPC_Decode, 200, 4, 3, // Opcode: MSR
/* 726 */     MCD::OPC_FilterValue, 128, 170, 1, 4, 0, // Skip to: 736
/* 732 */     MCD::OPC_Decode, 210, 4, 27, // Opcode: MVST
/* 736 */     MCD::OPC_FilterValue, 128, 186, 1, 4, 0, // Skip to: 746
/* 742 */     MCD::OPC_Decode, 247, 2, 27, // Opcode: CLST
/* 746 */     MCD::OPC_FilterValue, 128, 188, 1, 0, 9, // Skip to: 3056
/* 752 */     MCD::OPC_Decode, 179, 5, 27, // Opcode: SRST
/* 756 */     MCD::OPC_FilterValue, 179, 1, 185, 3, // Skip to: 1714
/* 761 */     MCD::OPC_ExtractField, 16, 8,  // Inst{23-16} ...
/* 764 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 778
/* 768 */     MCD::OPC_CheckField, 8, 8, 0, 234, 8, // Skip to: 3056
/* 774 */     MCD::OPC_Decode, 140, 4, 5, // Opcode: LPEBR
/* 778 */     MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 792
/* 782 */     MCD::OPC_CheckField, 8, 8, 0, 220, 8, // Skip to: 3056
/* 788 */     MCD::OPC_Decode, 130, 4, 5, // Opcode: LNEBR
/* 792 */     MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 806
/* 796 */     MCD::OPC_CheckField, 8, 8, 0, 206, 8, // Skip to: 3056
/* 802 */     MCD::OPC_Decode, 154, 4, 5, // Opcode: LTEBR
/* 806 */     MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 820
/* 810 */     MCD::OPC_CheckField, 8, 8, 0, 192, 8, // Skip to: 3056
/* 816 */     MCD::OPC_Decode, 201, 3, 5, // Opcode: LCEBR
/* 820 */     MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 834
/* 824 */     MCD::OPC_CheckField, 8, 8, 0, 178, 8, // Skip to: 3056
/* 830 */     MCD::OPC_Decode, 208, 3, 28, // Opcode: LDEBR
/* 834 */     MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 848
/* 838 */     MCD::OPC_CheckField, 8, 8, 0, 164, 8, // Skip to: 3056
/* 844 */     MCD::OPC_Decode, 165, 4, 29, // Opcode: LXDBR
/* 848 */     MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 862
/* 852 */     MCD::OPC_CheckField, 8, 8, 0, 150, 8, // Skip to: 3056
/* 858 */     MCD::OPC_Decode, 167, 4, 30, // Opcode: LXEBR
/* 862 */     MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 876
/* 866 */     MCD::OPC_CheckField, 8, 8, 0, 136, 8, // Skip to: 3056
/* 872 */     MCD::OPC_Decode, 214, 4, 31, // Opcode: MXDBR
/* 876 */     MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 890
/* 880 */     MCD::OPC_CheckField, 8, 8, 0, 122, 8, // Skip to: 3056
/* 886 */     MCD::OPC_Decode, 196, 2, 5, // Opcode: CEBR
/* 890 */     MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 903
/* 894 */     MCD::OPC_CheckField, 8, 8, 0, 108, 8, // Skip to: 3056
/* 900 */     MCD::OPC_Decode, 24, 32, // Opcode: AEBR
/* 903 */     MCD::OPC_FilterValue, 11, 10, 0, // Skip to: 917
/* 907 */     MCD::OPC_CheckField, 8, 8, 0, 95, 8, // Skip to: 3056
/* 913 */     MCD::OPC_Decode, 140, 5, 32, // Opcode: SEBR
/* 917 */     MCD::OPC_FilterValue, 12, 10, 0, // Skip to: 931
/* 921 */     MCD::OPC_CheckField, 8, 8, 0, 81, 8, // Skip to: 3056
/* 927 */     MCD::OPC_Decode, 180, 4, 33, // Opcode: MDEBR
/* 931 */     MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 945
/* 935 */     MCD::OPC_CheckField, 8, 8, 0, 67, 8, // Skip to: 3056
/* 941 */     MCD::OPC_Decode, 159, 3, 32, // Opcode: DEBR
/* 945 */     MCD::OPC_FilterValue, 14, 10, 0, // Skip to: 959
/* 949 */     MCD::OPC_CheckField, 8, 4, 0, 53, 8, // Skip to: 3056
/* 955 */     MCD::OPC_Decode, 176, 4, 34, // Opcode: MAEBR
/* 959 */     MCD::OPC_FilterValue, 15, 10, 0, // Skip to: 973
/* 963 */     MCD::OPC_CheckField, 8, 4, 0, 39, 8, // Skip to: 3056
/* 969 */     MCD::OPC_Decode, 193, 4, 34, // Opcode: MSEBR
/* 973 */     MCD::OPC_FilterValue, 16, 10, 0, // Skip to: 987
/* 977 */     MCD::OPC_CheckField, 8, 8, 0, 25, 8, // Skip to: 3056
/* 983 */     MCD::OPC_Decode, 139, 4, 4, // Opcode: LPDBR
/* 987 */     MCD::OPC_FilterValue, 17, 10, 0, // Skip to: 1001
/* 991 */     MCD::OPC_CheckField, 8, 8, 0, 11, 8, // Skip to: 3056
/* 997 */     MCD::OPC_Decode, 129, 4, 4, // Opcode: LNDBR
/* 1001 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 1015
/* 1005 */    MCD::OPC_CheckField, 8, 8, 0, 253, 7, // Skip to: 3056
/* 1011 */    MCD::OPC_Decode, 152, 4, 4, // Opcode: LTDBR
/* 1015 */    MCD::OPC_FilterValue, 19, 10, 0, // Skip to: 1029
/* 1019 */    MCD::OPC_CheckField, 8, 8, 0, 239, 7, // Skip to: 3056
/* 1025 */    MCD::OPC_Decode, 200, 3, 4, // Opcode: LCDBR
/* 1029 */    MCD::OPC_FilterValue, 20, 10, 0, // Skip to: 1043
/* 1033 */    MCD::OPC_CheckField, 8, 8, 0, 225, 7, // Skip to: 3056
/* 1039 */    MCD::OPC_Decode, 169, 5, 5, // Opcode: SQEBR
/* 1043 */    MCD::OPC_FilterValue, 21, 10, 0, // Skip to: 1057
/* 1047 */    MCD::OPC_CheckField, 8, 8, 0, 211, 7, // Skip to: 3056
/* 1053 */    MCD::OPC_Decode, 167, 5, 4, // Opcode: SQDBR
/* 1057 */    MCD::OPC_FilterValue, 22, 10, 0, // Skip to: 1071
/* 1061 */    MCD::OPC_CheckField, 8, 8, 0, 197, 7, // Skip to: 3056
/* 1067 */    MCD::OPC_Decode, 170, 5, 35, // Opcode: SQXBR
/* 1071 */    MCD::OPC_FilterValue, 23, 10, 0, // Skip to: 1085
/* 1075 */    MCD::OPC_CheckField, 8, 8, 0, 183, 7, // Skip to: 3056
/* 1081 */    MCD::OPC_Decode, 182, 4, 32, // Opcode: MEEBR
/* 1085 */    MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 1099
/* 1089 */    MCD::OPC_CheckField, 8, 8, 0, 169, 7, // Skip to: 3056
/* 1095 */    MCD::OPC_Decode, 192, 2, 4, // Opcode: CDBR
/* 1099 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 1112
/* 1103 */    MCD::OPC_CheckField, 8, 8, 0, 155, 7, // Skip to: 3056
/* 1109 */    MCD::OPC_Decode, 19, 36, // Opcode: ADBR
/* 1112 */    MCD::OPC_FilterValue, 27, 10, 0, // Skip to: 1126
/* 1116 */    MCD::OPC_CheckField, 8, 8, 0, 142, 7, // Skip to: 3056
/* 1122 */    MCD::OPC_Decode, 138, 5, 36, // Opcode: SDBR
/* 1126 */    MCD::OPC_FilterValue, 28, 10, 0, // Skip to: 1140
/* 1130 */    MCD::OPC_CheckField, 8, 8, 0, 128, 7, // Skip to: 3056
/* 1136 */    MCD::OPC_Decode, 178, 4, 36, // Opcode: MDBR
/* 1140 */    MCD::OPC_FilterValue, 29, 10, 0, // Skip to: 1154
/* 1144 */    MCD::OPC_CheckField, 8, 8, 0, 114, 7, // Skip to: 3056
/* 1150 */    MCD::OPC_Decode, 157, 3, 36, // Opcode: DDBR
/* 1154 */    MCD::OPC_FilterValue, 30, 10, 0, // Skip to: 1168
/* 1158 */    MCD::OPC_CheckField, 8, 4, 0, 100, 7, // Skip to: 3056
/* 1164 */    MCD::OPC_Decode, 174, 4, 37, // Opcode: MADBR
/* 1168 */    MCD::OPC_FilterValue, 31, 10, 0, // Skip to: 1182
/* 1172 */    MCD::OPC_CheckField, 8, 4, 0, 86, 7, // Skip to: 3056
/* 1178 */    MCD::OPC_Decode, 191, 4, 37, // Opcode: MSDBR
/* 1182 */    MCD::OPC_FilterValue, 64, 10, 0, // Skip to: 1196
/* 1186 */    MCD::OPC_CheckField, 8, 8, 0, 72, 7, // Skip to: 3056
/* 1192 */    MCD::OPC_Decode, 144, 4, 35, // Opcode: LPXBR
/* 1196 */    MCD::OPC_FilterValue, 65, 10, 0, // Skip to: 1210
/* 1200 */    MCD::OPC_CheckField, 8, 8, 0, 58, 7, // Skip to: 3056
/* 1206 */    MCD::OPC_Decode, 134, 4, 35, // Opcode: LNXBR
/* 1210 */    MCD::OPC_FilterValue, 66, 10, 0, // Skip to: 1224
/* 1214 */    MCD::OPC_CheckField, 8, 8, 0, 44, 7, // Skip to: 3056
/* 1220 */    MCD::OPC_Decode, 161, 4, 35, // Opcode: LTXBR
/* 1224 */    MCD::OPC_FilterValue, 67, 10, 0, // Skip to: 1238
/* 1228 */    MCD::OPC_CheckField, 8, 8, 0, 30, 7, // Skip to: 3056
/* 1234 */    MCD::OPC_Decode, 205, 3, 35, // Opcode: LCXBR
/* 1238 */    MCD::OPC_FilterValue, 68, 10, 0, // Skip to: 1252
/* 1242 */    MCD::OPC_CheckField, 8, 8, 0, 16, 7, // Skip to: 3056
/* 1248 */    MCD::OPC_Decode, 214, 3, 38, // Opcode: LEDBR
/* 1252 */    MCD::OPC_FilterValue, 69, 10, 0, // Skip to: 1266
/* 1256 */    MCD::OPC_CheckField, 8, 8, 0, 2, 7, // Skip to: 3056
/* 1262 */    MCD::OPC_Decode, 211, 3, 35, // Opcode: LDXBR
/* 1266 */    MCD::OPC_FilterValue, 70, 10, 0, // Skip to: 1280
/* 1270 */    MCD::OPC_CheckField, 8, 8, 0, 244, 6, // Skip to: 3056
/* 1276 */    MCD::OPC_Decode, 216, 3, 35, // Opcode: LEXBR
/* 1280 */    MCD::OPC_FilterValue, 71, 18, 0, // Skip to: 1302
/* 1284 */    MCD::OPC_CheckField, 8, 4, 0, 4, 0, // Skip to: 1294
/* 1290 */    MCD::OPC_Decode, 174, 3, 39, // Opcode: FIXBR
/* 1294 */    MCD::OPC_CheckPredicate, 0, 222, 6, // Skip to: 3056
/* 1298 */    MCD::OPC_Decode, 175, 3, 40, // Opcode: FIXBRA
/* 1302 */    MCD::OPC_FilterValue, 73, 10, 0, // Skip to: 1316
/* 1306 */    MCD::OPC_CheckField, 8, 8, 0, 208, 6, // Skip to: 3056
/* 1312 */    MCD::OPC_Decode, 132, 3, 35, // Opcode: CXBR
/* 1316 */    MCD::OPC_FilterValue, 74, 10, 0, // Skip to: 1330
/* 1320 */    MCD::OPC_CheckField, 8, 8, 0, 194, 6, // Skip to: 3056
/* 1326 */    MCD::OPC_Decode, 133, 1, 41, // Opcode: AXBR
/* 1330 */    MCD::OPC_FilterValue, 75, 10, 0, // Skip to: 1344
/* 1334 */    MCD::OPC_CheckField, 8, 8, 0, 180, 6, // Skip to: 3056
/* 1340 */    MCD::OPC_Decode, 211, 5, 41, // Opcode: SXBR
/* 1344 */    MCD::OPC_FilterValue, 76, 10, 0, // Skip to: 1358
/* 1348 */    MCD::OPC_CheckField, 8, 8, 0, 166, 6, // Skip to: 3056
/* 1354 */    MCD::OPC_Decode, 212, 4, 41, // Opcode: MXBR
/* 1358 */    MCD::OPC_FilterValue, 77, 10, 0, // Skip to: 1372
/* 1362 */    MCD::OPC_CheckField, 8, 8, 0, 152, 6, // Skip to: 3056
/* 1368 */    MCD::OPC_Decode, 168, 3, 41, // Opcode: DXBR
/* 1372 */    MCD::OPC_FilterValue, 87, 18, 0, // Skip to: 1394
/* 1376 */    MCD::OPC_CheckField, 8, 4, 0, 4, 0, // Skip to: 1386
/* 1382 */    MCD::OPC_Decode, 172, 3, 42, // Opcode: FIEBR
/* 1386 */    MCD::OPC_CheckPredicate, 0, 130, 6, // Skip to: 3056
/* 1390 */    MCD::OPC_Decode, 173, 3, 43, // Opcode: FIEBRA
/* 1394 */    MCD::OPC_FilterValue, 95, 18, 0, // Skip to: 1416
/* 1398 */    MCD::OPC_CheckField, 8, 4, 0, 4, 0, // Skip to: 1408
/* 1404 */    MCD::OPC_Decode, 170, 3, 44, // Opcode: FIDBR
/* 1408 */    MCD::OPC_CheckPredicate, 0, 108, 6, // Skip to: 3056
/* 1412 */    MCD::OPC_Decode, 171, 3, 45, // Opcode: FIDBRA
/* 1416 */    MCD::OPC_FilterValue, 101, 10, 0, // Skip to: 1430
/* 1420 */    MCD::OPC_CheckField, 8, 8, 0, 94, 6, // Skip to: 3056
/* 1426 */    MCD::OPC_Decode, 168, 4, 35, // Opcode: LXR
/* 1430 */    MCD::OPC_FilterValue, 114, 10, 0, // Skip to: 1444
/* 1434 */    MCD::OPC_CheckField, 8, 4, 0, 80, 6, // Skip to: 3056
/* 1440 */    MCD::OPC_Decode, 250, 2, 46, // Opcode: CPSDRdd
/* 1444 */    MCD::OPC_FilterValue, 116, 16, 0, // Skip to: 1464
/* 1448 */    MCD::OPC_CheckField, 8, 8, 0, 66, 6, // Skip to: 3056
/* 1454 */    MCD::OPC_CheckField, 0, 4, 0, 60, 6, // Skip to: 3056
/* 1460 */    MCD::OPC_Decode, 171, 4, 47, // Opcode: LZER
/* 1464 */    MCD::OPC_FilterValue, 117, 16, 0, // Skip to: 1484
/* 1468 */    MCD::OPC_CheckField, 8, 8, 0, 46, 6, // Skip to: 3056
/* 1474 */    MCD::OPC_CheckField, 0, 4, 0, 40, 6, // Skip to: 3056
/* 1480 */    MCD::OPC_Decode, 170, 4, 48, // Opcode: LZDR
/* 1484 */    MCD::OPC_FilterValue, 118, 16, 0, // Skip to: 1504
/* 1488 */    MCD::OPC_CheckField, 8, 8, 0, 26, 6, // Skip to: 3056
/* 1494 */    MCD::OPC_CheckField, 0, 4, 0, 20, 6, // Skip to: 3056
/* 1500 */    MCD::OPC_Decode, 172, 4, 49, // Opcode: LZXR
/* 1504 */    MCD::OPC_FilterValue, 148, 1, 10, 0, // Skip to: 1519
/* 1509 */    MCD::OPC_CheckField, 8, 8, 0, 5, 6, // Skip to: 3056
/* 1515 */    MCD::OPC_Decode, 197, 2, 50, // Opcode: CEFBR
/* 1519 */    MCD::OPC_FilterValue, 149, 1, 10, 0, // Skip to: 1534
/* 1524 */    MCD::OPC_CheckField, 8, 8, 0, 246, 5, // Skip to: 3056
/* 1530 */    MCD::OPC_Decode, 193, 2, 51, // Opcode: CDFBR
/* 1534 */    MCD::OPC_FilterValue, 150, 1, 10, 0, // Skip to: 1549
/* 1539 */    MCD::OPC_CheckField, 8, 8, 0, 231, 5, // Skip to: 3056
/* 1545 */    MCD::OPC_Decode, 133, 3, 52, // Opcode: CXFBR
/* 1549 */    MCD::OPC_FilterValue, 152, 1, 10, 0, // Skip to: 1564
/* 1554 */    MCD::OPC_CheckField, 8, 4, 0, 216, 5, // Skip to: 3056
/* 1560 */    MCD::OPC_Decode, 200, 2, 53, // Opcode: CFEBR
/* 1564 */    MCD::OPC_FilterValue, 153, 1, 10, 0, // Skip to: 1579
/* 1569 */    MCD::OPC_CheckField, 8, 4, 0, 201, 5, // Skip to: 3056
/* 1575 */    MCD::OPC_Decode, 199, 2, 54, // Opcode: CFDBR
/* 1579 */    MCD::OPC_FilterValue, 154, 1, 10, 0, // Skip to: 1594
/* 1584 */    MCD::OPC_CheckField, 8, 4, 0, 186, 5, // Skip to: 3056
/* 1590 */    MCD::OPC_Decode, 202, 2, 55, // Opcode: CFXBR
/* 1594 */    MCD::OPC_FilterValue, 164, 1, 10, 0, // Skip to: 1609
/* 1599 */    MCD::OPC_CheckField, 8, 8, 0, 171, 5, // Skip to: 3056
/* 1605 */    MCD::OPC_Decode, 198, 2, 56, // Opcode: CEGBR
/* 1609 */    MCD::OPC_FilterValue, 165, 1, 10, 0, // Skip to: 1624
/* 1614 */    MCD::OPC_CheckField, 8, 8, 0, 156, 5, // Skip to: 3056
/* 1620 */    MCD::OPC_Decode, 194, 2, 57, // Opcode: CDGBR
/* 1624 */    MCD::OPC_FilterValue, 166, 1, 10, 0, // Skip to: 1639
/* 1629 */    MCD::OPC_CheckField, 8, 8, 0, 141, 5, // Skip to: 3056
/* 1635 */    MCD::OPC_Decode, 134, 3, 58, // Opcode: CXGBR
/* 1639 */    MCD::OPC_FilterValue, 168, 1, 10, 0, // Skip to: 1654
/* 1644 */    MCD::OPC_CheckField, 8, 4, 0, 126, 5, // Skip to: 3056
/* 1650 */    MCD::OPC_Decode, 205, 2, 59, // Opcode: CGEBR
/* 1654 */    MCD::OPC_FilterValue, 169, 1, 10, 0, // Skip to: 1669
/* 1659 */    MCD::OPC_CheckField, 8, 4, 0, 111, 5, // Skip to: 3056
/* 1665 */    MCD::OPC_Decode, 204, 2, 60, // Opcode: CGDBR
/* 1669 */    MCD::OPC_FilterValue, 170, 1, 10, 0, // Skip to: 1684
/* 1674 */    MCD::OPC_CheckField, 8, 4, 0, 96, 5, // Skip to: 3056
/* 1680 */    MCD::OPC_Decode, 218, 2, 61, // Opcode: CGXBR
/* 1684 */    MCD::OPC_FilterValue, 193, 1, 10, 0, // Skip to: 1699
/* 1689 */    MCD::OPC_CheckField, 8, 8, 0, 81, 5, // Skip to: 3056
/* 1695 */    MCD::OPC_Decode, 209, 3, 57, // Opcode: LDGR
/* 1699 */    MCD::OPC_FilterValue, 205, 1, 72, 5, // Skip to: 3056
/* 1704 */    MCD::OPC_CheckField, 8, 8, 0, 66, 5, // Skip to: 3056
/* 1710 */    MCD::OPC_Decode, 221, 3, 62, // Opcode: LGDR
/* 1714 */    MCD::OPC_FilterValue, 185, 1, 48, 5, // Skip to: 3047
/* 1719 */    MCD::OPC_ExtractField, 16, 8,  // Inst{23-16} ...
/* 1722 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1736
/* 1726 */    MCD::OPC_CheckField, 8, 8, 0, 44, 5, // Skip to: 3056
/* 1732 */    MCD::OPC_Decode, 142, 4, 63, // Opcode: LPGR
/* 1736 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 1750
/* 1740 */    MCD::OPC_CheckField, 8, 8, 0, 30, 5, // Skip to: 3056
/* 1746 */    MCD::OPC_Decode, 132, 4, 63, // Opcode: LNGR
/* 1750 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 1764
/* 1754 */    MCD::OPC_CheckField, 8, 8, 0, 16, 5, // Skip to: 3056
/* 1760 */    MCD::OPC_Decode, 159, 4, 63, // Opcode: LTGR
/* 1764 */    MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 1778
/* 1768 */    MCD::OPC_CheckField, 8, 8, 0, 2, 5, // Skip to: 3056
/* 1774 */    MCD::OPC_Decode, 203, 3, 63, // Opcode: LCGR
/* 1778 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 1792
/* 1782 */    MCD::OPC_CheckField, 8, 8, 0, 244, 4, // Skip to: 3056
/* 1788 */    MCD::OPC_Decode, 230, 3, 63, // Opcode: LGR
/* 1792 */    MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 1806
/* 1796 */    MCD::OPC_CheckField, 8, 8, 0, 230, 4, // Skip to: 3056
/* 1802 */    MCD::OPC_Decode, 220, 3, 63, // Opcode: LGBR
/* 1806 */    MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 1820
/* 1810 */    MCD::OPC_CheckField, 8, 8, 0, 216, 4, // Skip to: 3056
/* 1816 */    MCD::OPC_Decode, 228, 3, 63, // Opcode: LGHR
/* 1820 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 1833
/* 1824 */    MCD::OPC_CheckField, 8, 8, 0, 202, 4, // Skip to: 3056
/* 1830 */    MCD::OPC_Decode, 33, 64, // Opcode: AGR
/* 1833 */    MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 1847
/* 1837 */    MCD::OPC_CheckField, 8, 8, 0, 189, 4, // Skip to: 3056
/* 1843 */    MCD::OPC_Decode, 144, 5, 64, // Opcode: SGR
/* 1847 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 1860
/* 1851 */    MCD::OPC_CheckField, 8, 8, 0, 175, 4, // Skip to: 3056
/* 1857 */    MCD::OPC_Decode, 51, 64, // Opcode: ALGR
/* 1860 */    MCD::OPC_FilterValue, 11, 10, 0, // Skip to: 1874
/* 1864 */    MCD::OPC_CheckField, 8, 8, 0, 162, 4, // Skip to: 3056
/* 1870 */    MCD::OPC_Decode, 158, 5, 64, // Opcode: SLGR
/* 1874 */    MCD::OPC_FilterValue, 12, 10, 0, // Skip to: 1888
/* 1878 */    MCD::OPC_CheckField, 8, 8, 0, 148, 4, // Skip to: 3056
/* 1884 */    MCD::OPC_Decode, 199, 4, 64, // Opcode: MSGR
/* 1888 */    MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 1902
/* 1892 */    MCD::OPC_CheckField, 8, 8, 0, 134, 4, // Skip to: 3056
/* 1898 */    MCD::OPC_Decode, 167, 3, 65, // Opcode: DSGR
/* 1902 */    MCD::OPC_FilterValue, 15, 10, 0, // Skip to: 1916
/* 1906 */    MCD::OPC_CheckField, 8, 8, 0, 120, 4, // Skip to: 3056
/* 1912 */    MCD::OPC_Decode, 149, 4, 63, // Opcode: LRVGR
/* 1916 */    MCD::OPC_FilterValue, 16, 10, 0, // Skip to: 1930
/* 1920 */    MCD::OPC_CheckField, 8, 8, 0, 106, 4, // Skip to: 3056
/* 1926 */    MCD::OPC_Decode, 141, 4, 66, // Opcode: LPGFR
/* 1930 */    MCD::OPC_FilterValue, 17, 10, 0, // Skip to: 1944
/* 1934 */    MCD::OPC_CheckField, 8, 8, 0, 92, 4, // Skip to: 3056
/* 1940 */    MCD::OPC_Decode, 131, 4, 66, // Opcode: LNGFR
/* 1944 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 1958
/* 1948 */    MCD::OPC_CheckField, 8, 8, 0, 78, 4, // Skip to: 3056
/* 1954 */    MCD::OPC_Decode, 158, 4, 63, // Opcode: LTGFR
/* 1958 */    MCD::OPC_FilterValue, 19, 10, 0, // Skip to: 1972
/* 1962 */    MCD::OPC_CheckField, 8, 8, 0, 64, 4, // Skip to: 3056
/* 1968 */    MCD::OPC_Decode, 202, 3, 66, // Opcode: LCGFR
/* 1972 */    MCD::OPC_FilterValue, 20, 10, 0, // Skip to: 1986
/* 1976 */    MCD::OPC_CheckField, 8, 8, 0, 50, 4, // Skip to: 3056
/* 1982 */    MCD::OPC_Decode, 224, 3, 66, // Opcode: LGFR
/* 1986 */    MCD::OPC_FilterValue, 22, 10, 0, // Skip to: 2000
/* 1990 */    MCD::OPC_CheckField, 8, 8, 0, 36, 4, // Skip to: 3056
/* 1996 */    MCD::OPC_Decode, 242, 3, 66, // Opcode: LLGFR
/* 2000 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 2013
/* 2004 */    MCD::OPC_CheckField, 8, 8, 0, 22, 4, // Skip to: 3056
/* 2010 */    MCD::OPC_Decode, 30, 67, // Opcode: AGFR
/* 2013 */    MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 2027
/* 2017 */    MCD::OPC_CheckField, 8, 8, 0, 9, 4, // Skip to: 3056
/* 2023 */    MCD::OPC_Decode, 143, 5, 67, // Opcode: SGFR
/* 2027 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 2040
/* 2031 */    MCD::OPC_CheckField, 8, 8, 0, 251, 3, // Skip to: 3056
/* 2037 */    MCD::OPC_Decode, 49, 67, // Opcode: ALGFR
/* 2040 */    MCD::OPC_FilterValue, 27, 10, 0, // Skip to: 2054
/* 2044 */    MCD::OPC_CheckField, 8, 8, 0, 238, 3, // Skip to: 3056
/* 2050 */    MCD::OPC_Decode, 157, 5, 67, // Opcode: SLGFR
/* 2054 */    MCD::OPC_FilterValue, 28, 10, 0, // Skip to: 2068
/* 2058 */    MCD::OPC_CheckField, 8, 8, 0, 224, 3, // Skip to: 3056
/* 2064 */    MCD::OPC_Decode, 198, 4, 67, // Opcode: MSGFR
/* 2068 */    MCD::OPC_FilterValue, 29, 10, 0, // Skip to: 2082
/* 2072 */    MCD::OPC_CheckField, 8, 8, 0, 210, 3, // Skip to: 3056
/* 2078 */    MCD::OPC_Decode, 166, 3, 68, // Opcode: DSGFR
/* 2082 */    MCD::OPC_FilterValue, 31, 10, 0, // Skip to: 2096
/* 2086 */    MCD::OPC_CheckField, 8, 8, 0, 196, 3, // Skip to: 3056
/* 2092 */    MCD::OPC_Decode, 150, 4, 2, // Opcode: LRVR
/* 2096 */    MCD::OPC_FilterValue, 32, 10, 0, // Skip to: 2110
/* 2100 */    MCD::OPC_CheckField, 8, 8, 0, 182, 3, // Skip to: 3056
/* 2106 */    MCD::OPC_Decode, 215, 2, 63, // Opcode: CGR
/* 2110 */    MCD::OPC_FilterValue, 33, 10, 0, // Skip to: 2124
/* 2114 */    MCD::OPC_CheckField, 8, 8, 0, 168, 3, // Skip to: 3056
/* 2120 */    MCD::OPC_Decode, 239, 2, 63, // Opcode: CLGR
/* 2124 */    MCD::OPC_FilterValue, 38, 10, 0, // Skip to: 2138
/* 2128 */    MCD::OPC_CheckField, 8, 8, 0, 154, 3, // Skip to: 3056
/* 2134 */    MCD::OPC_Decode, 199, 3, 2, // Opcode: LBR
/* 2138 */    MCD::OPC_FilterValue, 39, 10, 0, // Skip to: 2152
/* 2142 */    MCD::OPC_CheckField, 8, 8, 0, 140, 3, // Skip to: 3056
/* 2148 */    MCD::OPC_Decode, 234, 3, 2, // Opcode: LHR
/* 2152 */    MCD::OPC_FilterValue, 48, 10, 0, // Skip to: 2166
/* 2156 */    MCD::OPC_CheckField, 8, 8, 0, 126, 3, // Skip to: 3056
/* 2162 */    MCD::OPC_Decode, 208, 2, 66, // Opcode: CGFR
/* 2166 */    MCD::OPC_FilterValue, 49, 10, 0, // Skip to: 2180
/* 2170 */    MCD::OPC_CheckField, 8, 8, 0, 112, 3, // Skip to: 3056
/* 2176 */    MCD::OPC_Decode, 235, 2, 66, // Opcode: CLGFR
/* 2180 */    MCD::OPC_FilterValue, 128, 1, 10, 0, // Skip to: 2195
/* 2185 */    MCD::OPC_CheckField, 8, 8, 0, 97, 3, // Skip to: 3056
/* 2191 */    MCD::OPC_Decode, 217, 4, 64, // Opcode: NGR
/* 2195 */    MCD::OPC_FilterValue, 129, 1, 10, 0, // Skip to: 2210
/* 2200 */    MCD::OPC_CheckField, 8, 8, 0, 82, 3, // Skip to: 3056
/* 2206 */    MCD::OPC_Decode, 235, 4, 64, // Opcode: OGR
/* 2210 */    MCD::OPC_FilterValue, 130, 1, 10, 0, // Skip to: 2225
/* 2215 */    MCD::OPC_CheckField, 8, 8, 0, 67, 3, // Skip to: 3056
/* 2221 */    MCD::OPC_Decode, 226, 5, 64, // Opcode: XGR
/* 2225 */    MCD::OPC_FilterValue, 131, 1, 10, 0, // Skip to: 2240
/* 2230 */    MCD::OPC_CheckField, 8, 8, 0, 52, 3, // Skip to: 3056
/* 2236 */    MCD::OPC_Decode, 176, 3, 69, // Opcode: FLOGR
/* 2240 */    MCD::OPC_FilterValue, 132, 1, 10, 0, // Skip to: 2255
/* 2245 */    MCD::OPC_CheckField, 8, 8, 0, 37, 3, // Skip to: 3056
/* 2251 */    MCD::OPC_Decode, 240, 3, 63, // Opcode: LLGCR
/* 2255 */    MCD::OPC_FilterValue, 133, 1, 10, 0, // Skip to: 2270
/* 2260 */    MCD::OPC_CheckField, 8, 8, 0, 22, 3, // Skip to: 3056
/* 2266 */    MCD::OPC_Decode, 245, 3, 63, // Opcode: LLGHR
/* 2270 */    MCD::OPC_FilterValue, 134, 1, 10, 0, // Skip to: 2285
/* 2275 */    MCD::OPC_CheckField, 8, 8, 0, 7, 3, // Skip to: 3056
/* 2281 */    MCD::OPC_Decode, 188, 4, 65, // Opcode: MLGR
/* 2285 */    MCD::OPC_FilterValue, 135, 1, 10, 0, // Skip to: 2300
/* 2290 */    MCD::OPC_CheckField, 8, 8, 0, 248, 2, // Skip to: 3056
/* 2296 */    MCD::OPC_Decode, 162, 3, 65, // Opcode: DLGR
/* 2300 */    MCD::OPC_FilterValue, 136, 1, 9, 0, // Skip to: 2314
/* 2305 */    MCD::OPC_CheckField, 8, 8, 0, 233, 2, // Skip to: 3056
/* 2311 */    MCD::OPC_Decode, 43, 64, // Opcode: ALCGR
/* 2314 */    MCD::OPC_FilterValue, 137, 1, 10, 0, // Skip to: 2329
/* 2319 */    MCD::OPC_CheckField, 8, 8, 0, 219, 2, // Skip to: 3056
/* 2325 */    MCD::OPC_Decode, 154, 5, 64, // Opcode: SLGBR
/* 2329 */    MCD::OPC_FilterValue, 148, 1, 10, 0, // Skip to: 2344
/* 2334 */    MCD::OPC_CheckField, 8, 8, 0, 204, 2, // Skip to: 3056
/* 2340 */    MCD::OPC_Decode, 238, 3, 2, // Opcode: LLCR
/* 2344 */    MCD::OPC_FilterValue, 149, 1, 10, 0, // Skip to: 2359
/* 2349 */    MCD::OPC_CheckField, 8, 8, 0, 189, 2, // Skip to: 3056
/* 2355 */    MCD::OPC_Decode, 248, 3, 2, // Opcode: LLHR
/* 2359 */    MCD::OPC_FilterValue, 151, 1, 10, 0, // Skip to: 2374
/* 2364 */    MCD::OPC_CheckField, 8, 8, 0, 174, 2, // Skip to: 3056
/* 2370 */    MCD::OPC_Decode, 163, 3, 68, // Opcode: DLR
/* 2374 */    MCD::OPC_FilterValue, 152, 1, 9, 0, // Skip to: 2388
/* 2379 */    MCD::OPC_CheckField, 8, 8, 0, 159, 2, // Skip to: 3056
/* 2385 */    MCD::OPC_Decode, 44, 3, // Opcode: ALCR
/* 2388 */    MCD::OPC_FilterValue, 153, 1, 10, 0, // Skip to: 2403
/* 2393 */    MCD::OPC_CheckField, 8, 8, 0, 145, 2, // Skip to: 3056
/* 2399 */    MCD::OPC_Decode, 151, 5, 3, // Opcode: SLBR
/* 2403 */    MCD::OPC_FilterValue, 226, 1, 186, 0, // Skip to: 2594
/* 2408 */    MCD::OPC_ExtractField, 8, 4,  // Inst{11-8} ...
/* 2411 */    MCD::OPC_FilterValue, 0, 129, 2, // Skip to: 3056
/* 2415 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 2418 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2430
/* 2422 */    MCD::OPC_CheckPredicate, 1, 160, 0, // Skip to: 2586
/* 2426 */    MCD::OPC_Decode, 176, 2, 64, // Opcode: AsmOLOCGR
/* 2430 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2442
/* 2434 */    MCD::OPC_CheckPredicate, 1, 148, 0, // Skip to: 2586
/* 2438 */    MCD::OPC_Decode, 164, 1, 64, // Opcode: AsmHLOCGR
/* 2442 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 2454
/* 2446 */    MCD::OPC_CheckPredicate, 1, 136, 0, // Skip to: 2586
/* 2450 */    MCD::OPC_Decode, 144, 2, 64, // Opcode: AsmNLELOCGR
/* 2454 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 2466
/* 2458 */    MCD::OPC_CheckPredicate, 1, 124, 0, // Skip to: 2586
/* 2462 */    MCD::OPC_Decode, 236, 1, 64, // Opcode: AsmLLOCGR
/* 2466 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 2478
/* 2470 */    MCD::OPC_CheckPredicate, 1, 112, 0, // Skip to: 2586
/* 2474 */    MCD::OPC_Decode, 128, 2, 64, // Opcode: AsmNHELOCGR
/* 2478 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 2490
/* 2482 */    MCD::OPC_CheckPredicate, 1, 100, 0, // Skip to: 2586
/* 2486 */    MCD::OPC_Decode, 228, 1, 64, // Opcode: AsmLHLOCGR
/* 2490 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 2502
/* 2494 */    MCD::OPC_CheckPredicate, 1, 88, 0, // Skip to: 2586
/* 2498 */    MCD::OPC_Decode, 248, 1, 64, // Opcode: AsmNELOCGR
/* 2502 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 2514
/* 2506 */    MCD::OPC_CheckPredicate, 1, 76, 0, // Skip to: 2586
/* 2510 */    MCD::OPC_Decode, 148, 1, 64, // Opcode: AsmELOCGR
/* 2514 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 2526
/* 2518 */    MCD::OPC_CheckPredicate, 1, 64, 0, // Skip to: 2586
/* 2522 */    MCD::OPC_Decode, 152, 2, 64, // Opcode: AsmNLHLOCGR
/* 2526 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 2538
/* 2530 */    MCD::OPC_CheckPredicate, 1, 52, 0, // Skip to: 2586
/* 2534 */    MCD::OPC_Decode, 156, 1, 64, // Opcode: AsmHELOCGR
/* 2538 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 2550
/* 2542 */    MCD::OPC_CheckPredicate, 1, 40, 0, // Skip to: 2586
/* 2546 */    MCD::OPC_Decode, 160, 2, 64, // Opcode: AsmNLLOCGR
/* 2550 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 2562
/* 2554 */    MCD::OPC_CheckPredicate, 1, 28, 0, // Skip to: 2586
/* 2558 */    MCD::OPC_Decode, 220, 1, 64, // Opcode: AsmLELOCGR
/* 2562 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 2574
/* 2566 */    MCD::OPC_CheckPredicate, 1, 16, 0, // Skip to: 2586
/* 2570 */    MCD::OPC_Decode, 136, 2, 64, // Opcode: AsmNHLOCGR
/* 2574 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 2586
/* 2578 */    MCD::OPC_CheckPredicate, 1, 4, 0, // Skip to: 2586
/* 2582 */    MCD::OPC_Decode, 168, 2, 64, // Opcode: AsmNOLOCGR
/* 2586 */    MCD::OPC_CheckPredicate, 1, 210, 1, // Skip to: 3056
/* 2590 */    MCD::OPC_Decode, 240, 1, 70, // Opcode: AsmLOCGR
/* 2594 */    MCD::OPC_FilterValue, 228, 1, 14, 0, // Skip to: 2613
/* 2599 */    MCD::OPC_CheckPredicate, 2, 197, 1, // Skip to: 3056
/* 2603 */    MCD::OPC_CheckField, 8, 4, 0, 191, 1, // Skip to: 3056
/* 2609 */    MCD::OPC_Decode, 218, 4, 71, // Opcode: NGRK
/* 2613 */    MCD::OPC_FilterValue, 230, 1, 14, 0, // Skip to: 2632
/* 2618 */    MCD::OPC_CheckPredicate, 2, 178, 1, // Skip to: 3056
/* 2622 */    MCD::OPC_CheckField, 8, 4, 0, 172, 1, // Skip to: 3056
/* 2628 */    MCD::OPC_Decode, 236, 4, 71, // Opcode: OGRK
/* 2632 */    MCD::OPC_FilterValue, 231, 1, 14, 0, // Skip to: 2651
/* 2637 */    MCD::OPC_CheckPredicate, 2, 159, 1, // Skip to: 3056
/* 2641 */    MCD::OPC_CheckField, 8, 4, 0, 153, 1, // Skip to: 3056
/* 2647 */    MCD::OPC_Decode, 227, 5, 71, // Opcode: XGRK
/* 2651 */    MCD::OPC_FilterValue, 232, 1, 13, 0, // Skip to: 2669
/* 2656 */    MCD::OPC_CheckPredicate, 2, 140, 1, // Skip to: 3056
/* 2660 */    MCD::OPC_CheckField, 8, 4, 0, 134, 1, // Skip to: 3056
/* 2666 */    MCD::OPC_Decode, 34, 71, // Opcode: AGRK
/* 2669 */    MCD::OPC_FilterValue, 233, 1, 14, 0, // Skip to: 2688
/* 2674 */    MCD::OPC_CheckPredicate, 2, 122, 1, // Skip to: 3056
/* 2678 */    MCD::OPC_CheckField, 8, 4, 0, 116, 1, // Skip to: 3056
/* 2684 */    MCD::OPC_Decode, 145, 5, 71, // Opcode: SGRK
/* 2688 */    MCD::OPC_FilterValue, 234, 1, 13, 0, // Skip to: 2706
/* 2693 */    MCD::OPC_CheckPredicate, 2, 103, 1, // Skip to: 3056
/* 2697 */    MCD::OPC_CheckField, 8, 4, 0, 97, 1, // Skip to: 3056
/* 2703 */    MCD::OPC_Decode, 52, 71, // Opcode: ALGRK
/* 2706 */    MCD::OPC_FilterValue, 235, 1, 14, 0, // Skip to: 2725
/* 2711 */    MCD::OPC_CheckPredicate, 2, 85, 1, // Skip to: 3056
/* 2715 */    MCD::OPC_CheckField, 8, 4, 0, 79, 1, // Skip to: 3056
/* 2721 */    MCD::OPC_Decode, 159, 5, 71, // Opcode: SLGRK
/* 2725 */    MCD::OPC_FilterValue, 242, 1, 186, 0, // Skip to: 2916
/* 2730 */    MCD::OPC_ExtractField, 8, 4,  // Inst{11-8} ...
/* 2733 */    MCD::OPC_FilterValue, 0, 63, 1, // Skip to: 3056
/* 2737 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 2740 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2752
/* 2744 */    MCD::OPC_CheckPredicate, 1, 160, 0, // Skip to: 2908
/* 2748 */    MCD::OPC_Decode, 177, 2, 3, // Opcode: AsmOLOCR
/* 2752 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2764
/* 2756 */    MCD::OPC_CheckPredicate, 1, 148, 0, // Skip to: 2908
/* 2760 */    MCD::OPC_Decode, 165, 1, 3, // Opcode: AsmHLOCR
/* 2764 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 2776
/* 2768 */    MCD::OPC_CheckPredicate, 1, 136, 0, // Skip to: 2908
/* 2772 */    MCD::OPC_Decode, 145, 2, 3, // Opcode: AsmNLELOCR
/* 2776 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 2788
/* 2780 */    MCD::OPC_CheckPredicate, 1, 124, 0, // Skip to: 2908
/* 2784 */    MCD::OPC_Decode, 237, 1, 3, // Opcode: AsmLLOCR
/* 2788 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 2800
/* 2792 */    MCD::OPC_CheckPredicate, 1, 112, 0, // Skip to: 2908
/* 2796 */    MCD::OPC_Decode, 129, 2, 3, // Opcode: AsmNHELOCR
/* 2800 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 2812
/* 2804 */    MCD::OPC_CheckPredicate, 1, 100, 0, // Skip to: 2908
/* 2808 */    MCD::OPC_Decode, 229, 1, 3, // Opcode: AsmLHLOCR
/* 2812 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 2824
/* 2816 */    MCD::OPC_CheckPredicate, 1, 88, 0, // Skip to: 2908
/* 2820 */    MCD::OPC_Decode, 249, 1, 3, // Opcode: AsmNELOCR
/* 2824 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 2836
/* 2828 */    MCD::OPC_CheckPredicate, 1, 76, 0, // Skip to: 2908
/* 2832 */    MCD::OPC_Decode, 149, 1, 3, // Opcode: AsmELOCR
/* 2836 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 2848
/* 2840 */    MCD::OPC_CheckPredicate, 1, 64, 0, // Skip to: 2908
/* 2844 */    MCD::OPC_Decode, 153, 2, 3, // Opcode: AsmNLHLOCR
/* 2848 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 2860
/* 2852 */    MCD::OPC_CheckPredicate, 1, 52, 0, // Skip to: 2908
/* 2856 */    MCD::OPC_Decode, 157, 1, 3, // Opcode: AsmHELOCR
/* 2860 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 2872
/* 2864 */    MCD::OPC_CheckPredicate, 1, 40, 0, // Skip to: 2908
/* 2868 */    MCD::OPC_Decode, 161, 2, 3, // Opcode: AsmNLLOCR
/* 2872 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 2884
/* 2876 */    MCD::OPC_CheckPredicate, 1, 28, 0, // Skip to: 2908
/* 2880 */    MCD::OPC_Decode, 221, 1, 3, // Opcode: AsmLELOCR
/* 2884 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 2896
/* 2888 */    MCD::OPC_CheckPredicate, 1, 16, 0, // Skip to: 2908
/* 2892 */    MCD::OPC_Decode, 137, 2, 3, // Opcode: AsmNHLOCR
/* 2896 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 2908
/* 2900 */    MCD::OPC_CheckPredicate, 1, 4, 0, // Skip to: 2908
/* 2904 */    MCD::OPC_Decode, 169, 2, 3, // Opcode: AsmNOLOCR
/* 2908 */    MCD::OPC_CheckPredicate, 1, 144, 0, // Skip to: 3056
/* 2912 */    MCD::OPC_Decode, 241, 1, 72, // Opcode: AsmLOCR
/* 2916 */    MCD::OPC_FilterValue, 244, 1, 14, 0, // Skip to: 2935
/* 2921 */    MCD::OPC_CheckPredicate, 2, 131, 0, // Skip to: 3056
/* 2925 */    MCD::OPC_CheckField, 8, 4, 0, 125, 0, // Skip to: 3056
/* 2931 */    MCD::OPC_Decode, 231, 4, 73, // Opcode: NRK
/* 2935 */    MCD::OPC_FilterValue, 246, 1, 14, 0, // Skip to: 2954
/* 2940 */    MCD::OPC_CheckPredicate, 2, 112, 0, // Skip to: 3056
/* 2944 */    MCD::OPC_CheckField, 8, 4, 0, 106, 0, // Skip to: 3056
/* 2950 */    MCD::OPC_Decode, 249, 4, 73, // Opcode: ORK
/* 2954 */    MCD::OPC_FilterValue, 247, 1, 14, 0, // Skip to: 2973
/* 2959 */    MCD::OPC_CheckPredicate, 2, 93, 0, // Skip to: 3056
/* 2963 */    MCD::OPC_CheckField, 8, 4, 0, 87, 0, // Skip to: 3056
/* 2969 */    MCD::OPC_Decode, 234, 5, 73, // Opcode: XRK
/* 2973 */    MCD::OPC_FilterValue, 248, 1, 13, 0, // Skip to: 2991
/* 2978 */    MCD::OPC_CheckPredicate, 2, 74, 0, // Skip to: 3056
/* 2982 */    MCD::OPC_CheckField, 8, 4, 0, 68, 0, // Skip to: 3056
/* 2988 */    MCD::OPC_Decode, 58, 73, // Opcode: ARK
/* 2991 */    MCD::OPC_FilterValue, 249, 1, 14, 0, // Skip to: 3010
/* 2996 */    MCD::OPC_CheckPredicate, 2, 56, 0, // Skip to: 3056
/* 3000 */    MCD::OPC_CheckField, 8, 4, 0, 50, 0, // Skip to: 3056
/* 3006 */    MCD::OPC_Decode, 175, 5, 73, // Opcode: SRK
/* 3010 */    MCD::OPC_FilterValue, 250, 1, 13, 0, // Skip to: 3028
/* 3015 */    MCD::OPC_CheckPredicate, 2, 37, 0, // Skip to: 3056
/* 3019 */    MCD::OPC_CheckField, 8, 4, 0, 31, 0, // Skip to: 3056
/* 3025 */    MCD::OPC_Decode, 55, 73, // Opcode: ALRK
/* 3028 */    MCD::OPC_FilterValue, 251, 1, 23, 0, // Skip to: 3056
/* 3033 */    MCD::OPC_CheckPredicate, 2, 19, 0, // Skip to: 3056
/* 3037 */    MCD::OPC_CheckField, 8, 4, 0, 13, 0, // Skip to: 3056
/* 3043 */    MCD::OPC_Decode, 164, 5, 73, // Opcode: SLRK
/* 3047 */    MCD::OPC_FilterValue, 186, 1, 4, 0, // Skip to: 3056
/* 3052 */    MCD::OPC_Decode, 129, 3, 74, // Opcode: CS
/* 3056 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTable48[] = {
/* 0 */       MCD::OPC_ExtractField, 40, 8,  // Inst{47-40} ...
/* 3 */       MCD::OPC_FilterValue, 192, 1, 238, 0, // Skip to: 246
/* 8 */       MCD::OPC_ExtractField, 32, 4,  // Inst{35-32} ...
/* 11 */      MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 19
/* 15 */      MCD::OPC_Decode, 196, 3, 75, // Opcode: LARL
/* 19 */      MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 27
/* 23 */      MCD::OPC_Decode, 223, 3, 76, // Opcode: LGFI
/* 27 */      MCD::OPC_FilterValue, 4, 127, 0, // Skip to: 158
/* 31 */      MCD::OPC_ExtractField, 36, 4,  // Inst{39-36} ...
/* 34 */      MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 42
/* 38 */      MCD::OPC_Decode, 173, 2, 77, // Opcode: AsmOJG
/* 42 */      MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 50
/* 46 */      MCD::OPC_Decode, 161, 1, 77, // Opcode: AsmHJG
/* 50 */      MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 58
/* 54 */      MCD::OPC_Decode, 141, 2, 77, // Opcode: AsmNLEJG
/* 58 */      MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 66
/* 62 */      MCD::OPC_Decode, 233, 1, 77, // Opcode: AsmLJG
/* 66 */      MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 74
/* 70 */      MCD::OPC_Decode, 253, 1, 77, // Opcode: AsmNHEJG
/* 74 */      MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 82
/* 78 */      MCD::OPC_Decode, 225, 1, 77, // Opcode: AsmLHJG
/* 82 */      MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 90
/* 86 */      MCD::OPC_Decode, 245, 1, 77, // Opcode: AsmNEJG
/* 90 */      MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 98
/* 94 */      MCD::OPC_Decode, 145, 1, 77, // Opcode: AsmEJG
/* 98 */      MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 106
/* 102 */     MCD::OPC_Decode, 149, 2, 77, // Opcode: AsmNLHJG
/* 106 */     MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 114
/* 110 */     MCD::OPC_Decode, 153, 1, 77, // Opcode: AsmHEJG
/* 114 */     MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 122
/* 118 */     MCD::OPC_Decode, 157, 2, 77, // Opcode: AsmNLJG
/* 122 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 130
/* 126 */     MCD::OPC_Decode, 217, 1, 77, // Opcode: AsmLEJG
/* 130 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 138
/* 134 */     MCD::OPC_Decode, 133, 2, 77, // Opcode: AsmNHJG
/* 138 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 146
/* 142 */     MCD::OPC_Decode, 165, 2, 77, // Opcode: AsmNOJG
/* 146 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 154
/* 150 */     MCD::OPC_Decode, 192, 3, 77, // Opcode: JG
/* 154 */     MCD::OPC_Decode, 139, 1, 78, // Opcode: AsmBRCL
/* 158 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 166
/* 162 */     MCD::OPC_Decode, 137, 1, 75, // Opcode: AsmBRASL
/* 166 */     MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 174
/* 170 */     MCD::OPC_Decode, 229, 5, 79, // Opcode: XIHF
/* 174 */     MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 182
/* 178 */     MCD::OPC_Decode, 230, 5, 79, // Opcode: XILF
/* 182 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 190
/* 186 */     MCD::OPC_Decode, 181, 3, 79, // Opcode: IIHF
/* 190 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 198
/* 194 */     MCD::OPC_Decode, 184, 3, 79, // Opcode: IILF
/* 198 */     MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 206
/* 202 */     MCD::OPC_Decode, 220, 4, 79, // Opcode: NIHF
/* 206 */     MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 214
/* 210 */     MCD::OPC_Decode, 223, 4, 79, // Opcode: NILF
/* 214 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 222
/* 218 */     MCD::OPC_Decode, 238, 4, 79, // Opcode: OIHF
/* 222 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 230
/* 226 */     MCD::OPC_Decode, 241, 4, 79, // Opcode: OILF
/* 230 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 238
/* 234 */     MCD::OPC_Decode, 250, 3, 80, // Opcode: LLIHF
/* 238 */     MCD::OPC_FilterValue, 15, 19, 10, // Skip to: 2821
/* 242 */     MCD::OPC_Decode, 253, 3, 80, // Opcode: LLILF
/* 246 */     MCD::OPC_FilterValue, 194, 1, 95, 0, // Skip to: 346
/* 251 */     MCD::OPC_ExtractField, 32, 4,  // Inst{35-32} ...
/* 254 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 262
/* 258 */     MCD::OPC_Decode, 197, 4, 81, // Opcode: MSGFI
/* 262 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 270
/* 266 */     MCD::OPC_Decode, 194, 4, 82, // Opcode: MSFI
/* 270 */     MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 278
/* 274 */     MCD::OPC_Decode, 156, 5, 79, // Opcode: SLGFI
/* 278 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 286
/* 282 */     MCD::OPC_Decode, 152, 5, 83, // Opcode: SLFI
/* 286 */     MCD::OPC_FilterValue, 8, 3, 0, // Skip to: 293
/* 290 */     MCD::OPC_Decode, 29, 81, // Opcode: AGFI
/* 293 */     MCD::OPC_FilterValue, 9, 3, 0, // Skip to: 300
/* 297 */     MCD::OPC_Decode, 26, 82, // Opcode: AFI
/* 300 */     MCD::OPC_FilterValue, 10, 3, 0, // Skip to: 307
/* 304 */     MCD::OPC_Decode, 48, 79, // Opcode: ALGFI
/* 307 */     MCD::OPC_FilterValue, 11, 3, 0, // Skip to: 314
/* 311 */     MCD::OPC_Decode, 45, 83, // Opcode: ALFI
/* 314 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 322
/* 318 */     MCD::OPC_Decode, 207, 2, 76, // Opcode: CGFI
/* 322 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 330
/* 326 */     MCD::OPC_Decode, 201, 2, 84, // Opcode: CFI
/* 330 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 338
/* 334 */     MCD::OPC_Decode, 234, 2, 80, // Opcode: CLGFI
/* 338 */     MCD::OPC_FilterValue, 15, 175, 9, // Skip to: 2821
/* 342 */     MCD::OPC_Decode, 231, 2, 85, // Opcode: CLFI
/* 346 */     MCD::OPC_FilterValue, 196, 1, 91, 0, // Skip to: 442
/* 351 */     MCD::OPC_ExtractField, 32, 4,  // Inst{35-32} ...
/* 354 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 362
/* 358 */     MCD::OPC_Decode, 249, 3, 86, // Opcode: LLHRL
/* 362 */     MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 370
/* 366 */     MCD::OPC_Decode, 229, 3, 75, // Opcode: LGHRL
/* 370 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 378
/* 374 */     MCD::OPC_Decode, 235, 3, 86, // Opcode: LHRL
/* 378 */     MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 386
/* 382 */     MCD::OPC_Decode, 246, 3, 75, // Opcode: LLGHRL
/* 386 */     MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 394
/* 390 */     MCD::OPC_Decode, 198, 5, 75, // Opcode: STHRL
/* 394 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 402
/* 398 */     MCD::OPC_Decode, 231, 3, 75, // Opcode: LGRL
/* 402 */     MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 410
/* 406 */     MCD::OPC_Decode, 194, 5, 75, // Opcode: STGRL
/* 410 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 418
/* 414 */     MCD::OPC_Decode, 225, 3, 75, // Opcode: LGFRL
/* 418 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 426
/* 422 */     MCD::OPC_Decode, 146, 4, 86, // Opcode: LRL
/* 426 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 434
/* 430 */     MCD::OPC_Decode, 243, 3, 75, // Opcode: LLGFRL
/* 434 */     MCD::OPC_FilterValue, 15, 79, 9, // Skip to: 2821
/* 438 */     MCD::OPC_Decode, 205, 5, 75, // Opcode: STRL
/* 442 */     MCD::OPC_FilterValue, 198, 1, 91, 0, // Skip to: 538
/* 447 */     MCD::OPC_ExtractField, 32, 4,  // Inst{35-32} ...
/* 450 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 458
/* 454 */     MCD::OPC_Decode, 252, 4, 78, // Opcode: PFDRL
/* 458 */     MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 466
/* 462 */     MCD::OPC_Decode, 212, 2, 75, // Opcode: CGHRL
/* 466 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 474
/* 470 */     MCD::OPC_Decode, 222, 2, 86, // Opcode: CHRL
/* 474 */     MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 482
/* 478 */     MCD::OPC_Decode, 237, 2, 75, // Opcode: CLGHRL
/* 482 */     MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 490
/* 486 */     MCD::OPC_Decode, 242, 2, 86, // Opcode: CLHRL
/* 490 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 498
/* 494 */     MCD::OPC_Decode, 217, 2, 75, // Opcode: CGRL
/* 498 */     MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 506
/* 502 */     MCD::OPC_Decode, 240, 2, 75, // Opcode: CLGRL
/* 506 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 514
/* 510 */     MCD::OPC_Decode, 209, 2, 75, // Opcode: CGFRL
/* 514 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 522
/* 518 */     MCD::OPC_Decode, 128, 3, 86, // Opcode: CRL
/* 522 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 530
/* 526 */     MCD::OPC_Decode, 236, 2, 75, // Opcode: CLGFRL
/* 530 */     MCD::OPC_FilterValue, 15, 239, 8, // Skip to: 2821
/* 534 */     MCD::OPC_Decode, 246, 2, 86, // Opcode: CLRL
/* 538 */     MCD::OPC_FilterValue, 210, 1, 4, 0, // Skip to: 547
/* 543 */     MCD::OPC_Decode, 202, 4, 87, // Opcode: MVC
/* 547 */     MCD::OPC_FilterValue, 213, 1, 4, 0, // Skip to: 556
/* 552 */     MCD::OPC_Decode, 227, 2, 87, // Opcode: CLC
/* 556 */     MCD::OPC_FilterValue, 227, 1, 33, 2, // Skip to: 1106
/* 561 */     MCD::OPC_ExtractField, 0, 8,  // Inst{7-0} ...
/* 564 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 572
/* 568 */     MCD::OPC_Decode, 156, 4, 88, // Opcode: LTG
/* 572 */     MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 580
/* 576 */     MCD::OPC_Decode, 218, 3, 88, // Opcode: LG
/* 580 */     MCD::OPC_FilterValue, 8, 3, 0, // Skip to: 587
/* 584 */     MCD::OPC_Decode, 27, 89, // Opcode: AG
/* 587 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 595
/* 591 */     MCD::OPC_Decode, 141, 5, 89, // Opcode: SG
/* 595 */     MCD::OPC_FilterValue, 10, 3, 0, // Skip to: 602
/* 599 */     MCD::OPC_Decode, 46, 89, // Opcode: ALG
/* 602 */     MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 610
/* 606 */     MCD::OPC_Decode, 153, 5, 89, // Opcode: SLG
/* 610 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 618
/* 614 */     MCD::OPC_Decode, 195, 4, 89, // Opcode: MSG
/* 618 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 626
/* 622 */     MCD::OPC_Decode, 164, 3, 90, // Opcode: DSG
/* 626 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 634
/* 630 */     MCD::OPC_Decode, 148, 4, 88, // Opcode: LRVG
/* 634 */     MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 642
/* 638 */     MCD::OPC_Decode, 151, 4, 91, // Opcode: LT
/* 642 */     MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 650
/* 646 */     MCD::OPC_Decode, 222, 3, 88, // Opcode: LGF
/* 650 */     MCD::OPC_FilterValue, 21, 4, 0, // Skip to: 658
/* 654 */     MCD::OPC_Decode, 226, 3, 88, // Opcode: LGH
/* 658 */     MCD::OPC_FilterValue, 22, 4, 0, // Skip to: 666
/* 662 */     MCD::OPC_Decode, 241, 3, 88, // Opcode: LLGF
/* 666 */     MCD::OPC_FilterValue, 24, 3, 0, // Skip to: 673
/* 670 */     MCD::OPC_Decode, 28, 89, // Opcode: AGF
/* 673 */     MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 681
/* 677 */     MCD::OPC_Decode, 142, 5, 89, // Opcode: SGF
/* 681 */     MCD::OPC_FilterValue, 26, 3, 0, // Skip to: 688
/* 685 */     MCD::OPC_Decode, 47, 89, // Opcode: ALGF
/* 688 */     MCD::OPC_FilterValue, 27, 4, 0, // Skip to: 696
/* 692 */     MCD::OPC_Decode, 155, 5, 89, // Opcode: SLGF
/* 696 */     MCD::OPC_FilterValue, 28, 4, 0, // Skip to: 704
/* 700 */     MCD::OPC_Decode, 196, 4, 89, // Opcode: MSGF
/* 704 */     MCD::OPC_FilterValue, 29, 4, 0, // Skip to: 712
/* 708 */     MCD::OPC_Decode, 165, 3, 90, // Opcode: DSGF
/* 712 */     MCD::OPC_FilterValue, 30, 4, 0, // Skip to: 720
/* 716 */     MCD::OPC_Decode, 147, 4, 91, // Opcode: LRV
/* 720 */     MCD::OPC_FilterValue, 32, 4, 0, // Skip to: 728
/* 724 */     MCD::OPC_Decode, 203, 2, 88, // Opcode: CG
/* 728 */     MCD::OPC_FilterValue, 33, 4, 0, // Skip to: 736
/* 732 */     MCD::OPC_Decode, 232, 2, 88, // Opcode: CLG
/* 736 */     MCD::OPC_FilterValue, 36, 4, 0, // Skip to: 744
/* 740 */     MCD::OPC_Decode, 193, 5, 88, // Opcode: STG
/* 744 */     MCD::OPC_FilterValue, 47, 4, 0, // Skip to: 752
/* 748 */     MCD::OPC_Decode, 208, 5, 88, // Opcode: STRVG
/* 752 */     MCD::OPC_FilterValue, 48, 4, 0, // Skip to: 760
/* 756 */     MCD::OPC_Decode, 206, 2, 88, // Opcode: CGF
/* 760 */     MCD::OPC_FilterValue, 49, 4, 0, // Skip to: 768
/* 764 */     MCD::OPC_Decode, 233, 2, 88, // Opcode: CLGF
/* 768 */     MCD::OPC_FilterValue, 50, 4, 0, // Skip to: 776
/* 772 */     MCD::OPC_Decode, 157, 4, 88, // Opcode: LTGF
/* 776 */     MCD::OPC_FilterValue, 52, 4, 0, // Skip to: 784
/* 780 */     MCD::OPC_Decode, 210, 2, 88, // Opcode: CGH
/* 784 */     MCD::OPC_FilterValue, 54, 4, 0, // Skip to: 792
/* 788 */     MCD::OPC_Decode, 251, 4, 92, // Opcode: PFD
/* 792 */     MCD::OPC_FilterValue, 62, 4, 0, // Skip to: 800
/* 796 */     MCD::OPC_Decode, 207, 5, 91, // Opcode: STRV
/* 800 */     MCD::OPC_FilterValue, 80, 4, 0, // Skip to: 808
/* 804 */     MCD::OPC_Decode, 210, 5, 88, // Opcode: STY
/* 808 */     MCD::OPC_FilterValue, 81, 4, 0, // Skip to: 816
/* 812 */     MCD::OPC_Decode, 201, 4, 93, // Opcode: MSY
/* 816 */     MCD::OPC_FilterValue, 84, 4, 0, // Skip to: 824
/* 820 */     MCD::OPC_Decode, 232, 4, 93, // Opcode: NY
/* 824 */     MCD::OPC_FilterValue, 85, 4, 0, // Skip to: 832
/* 828 */     MCD::OPC_Decode, 249, 2, 91, // Opcode: CLY
/* 832 */     MCD::OPC_FilterValue, 86, 4, 0, // Skip to: 840
/* 836 */     MCD::OPC_Decode, 250, 4, 93, // Opcode: OY
/* 840 */     MCD::OPC_FilterValue, 87, 4, 0, // Skip to: 848
/* 844 */     MCD::OPC_Decode, 235, 5, 93, // Opcode: XY
/* 848 */     MCD::OPC_FilterValue, 88, 4, 0, // Skip to: 856
/* 852 */     MCD::OPC_Decode, 169, 4, 91, // Opcode: LY
/* 856 */     MCD::OPC_FilterValue, 89, 4, 0, // Skip to: 864
/* 860 */     MCD::OPC_Decode, 135, 3, 91, // Opcode: CY
/* 864 */     MCD::OPC_FilterValue, 90, 4, 0, // Skip to: 872
/* 868 */     MCD::OPC_Decode, 134, 1, 93, // Opcode: AY
/* 872 */     MCD::OPC_FilterValue, 91, 4, 0, // Skip to: 880
/* 876 */     MCD::OPC_Decode, 212, 5, 93, // Opcode: SY
/* 880 */     MCD::OPC_FilterValue, 94, 3, 0, // Skip to: 887
/* 884 */     MCD::OPC_Decode, 56, 93, // Opcode: ALY
/* 887 */     MCD::OPC_FilterValue, 95, 4, 0, // Skip to: 895
/* 891 */     MCD::OPC_Decode, 165, 5, 93, // Opcode: SLY
/* 895 */     MCD::OPC_FilterValue, 112, 4, 0, // Skip to: 903
/* 899 */     MCD::OPC_Decode, 200, 5, 88, // Opcode: STHY
/* 903 */     MCD::OPC_FilterValue, 113, 4, 0, // Skip to: 911
/* 907 */     MCD::OPC_Decode, 197, 3, 88, // Opcode: LAY
/* 911 */     MCD::OPC_FilterValue, 114, 4, 0, // Skip to: 919
/* 915 */     MCD::OPC_Decode, 188, 5, 88, // Opcode: STCY
/* 919 */     MCD::OPC_FilterValue, 115, 4, 0, // Skip to: 927
/* 923 */     MCD::OPC_Decode, 180, 3, 89, // Opcode: ICY
/* 927 */     MCD::OPC_FilterValue, 118, 4, 0, // Skip to: 935
/* 931 */     MCD::OPC_Decode, 198, 3, 91, // Opcode: LB
/* 935 */     MCD::OPC_FilterValue, 119, 4, 0, // Skip to: 943
/* 939 */     MCD::OPC_Decode, 219, 3, 88, // Opcode: LGB
/* 943 */     MCD::OPC_FilterValue, 120, 4, 0, // Skip to: 951
/* 947 */     MCD::OPC_Decode, 236, 3, 91, // Opcode: LHY
/* 951 */     MCD::OPC_FilterValue, 121, 4, 0, // Skip to: 959
/* 955 */     MCD::OPC_Decode, 224, 2, 91, // Opcode: CHY
/* 959 */     MCD::OPC_FilterValue, 122, 3, 0, // Skip to: 966
/* 963 */     MCD::OPC_Decode, 39, 93, // Opcode: AHY
/* 966 */     MCD::OPC_FilterValue, 123, 4, 0, // Skip to: 974
/* 970 */     MCD::OPC_Decode, 147, 5, 93, // Opcode: SHY
/* 974 */     MCD::OPC_FilterValue, 124, 4, 0, // Skip to: 982
/* 978 */     MCD::OPC_Decode, 186, 4, 93, // Opcode: MHY
/* 982 */     MCD::OPC_FilterValue, 128, 1, 4, 0, // Skip to: 991
/* 987 */     MCD::OPC_Decode, 216, 4, 89, // Opcode: NG
/* 991 */     MCD::OPC_FilterValue, 129, 1, 4, 0, // Skip to: 1000
/* 996 */     MCD::OPC_Decode, 234, 4, 89, // Opcode: OG
/* 1000 */    MCD::OPC_FilterValue, 130, 1, 4, 0, // Skip to: 1009
/* 1005 */    MCD::OPC_Decode, 225, 5, 89, // Opcode: XG
/* 1009 */    MCD::OPC_FilterValue, 134, 1, 4, 0, // Skip to: 1018
/* 1014 */    MCD::OPC_Decode, 187, 4, 90, // Opcode: MLG
/* 1018 */    MCD::OPC_FilterValue, 135, 1, 4, 0, // Skip to: 1027
/* 1023 */    MCD::OPC_Decode, 161, 3, 90, // Opcode: DLG
/* 1027 */    MCD::OPC_FilterValue, 136, 1, 3, 0, // Skip to: 1035
/* 1032 */    MCD::OPC_Decode, 42, 89, // Opcode: ALCG
/* 1035 */    MCD::OPC_FilterValue, 137, 1, 4, 0, // Skip to: 1044
/* 1040 */    MCD::OPC_Decode, 150, 5, 89, // Opcode: SLBG
/* 1044 */    MCD::OPC_FilterValue, 144, 1, 4, 0, // Skip to: 1053
/* 1049 */    MCD::OPC_Decode, 239, 3, 88, // Opcode: LLGC
/* 1053 */    MCD::OPC_FilterValue, 145, 1, 4, 0, // Skip to: 1062
/* 1058 */    MCD::OPC_Decode, 244, 3, 88, // Opcode: LLGH
/* 1062 */    MCD::OPC_FilterValue, 148, 1, 4, 0, // Skip to: 1071
/* 1067 */    MCD::OPC_Decode, 237, 3, 91, // Opcode: LLC
/* 1071 */    MCD::OPC_FilterValue, 149, 1, 4, 0, // Skip to: 1080
/* 1076 */    MCD::OPC_Decode, 247, 3, 91, // Opcode: LLH
/* 1080 */    MCD::OPC_FilterValue, 151, 1, 4, 0, // Skip to: 1089
/* 1085 */    MCD::OPC_Decode, 160, 3, 90, // Opcode: DL
/* 1089 */    MCD::OPC_FilterValue, 152, 1, 3, 0, // Skip to: 1097
/* 1094 */    MCD::OPC_Decode, 41, 93, // Opcode: ALC
/* 1097 */    MCD::OPC_FilterValue, 153, 1, 183, 6, // Skip to: 2821
/* 1102 */    MCD::OPC_Decode, 149, 5, 93, // Opcode: SLB
/* 1106 */    MCD::OPC_FilterValue, 229, 1, 75, 0, // Skip to: 1186
/* 1111 */    MCD::OPC_ExtractField, 32, 8,  // Inst{39-32} ...
/* 1114 */    MCD::OPC_FilterValue, 68, 4, 0, // Skip to: 1122
/* 1118 */    MCD::OPC_Decode, 206, 4, 94, // Opcode: MVHHI
/* 1122 */    MCD::OPC_FilterValue, 72, 4, 0, // Skip to: 1130
/* 1126 */    MCD::OPC_Decode, 205, 4, 94, // Opcode: MVGHI
/* 1130 */    MCD::OPC_FilterValue, 76, 4, 0, // Skip to: 1138
/* 1134 */    MCD::OPC_Decode, 207, 4, 94, // Opcode: MVHI
/* 1138 */    MCD::OPC_FilterValue, 84, 4, 0, // Skip to: 1146
/* 1142 */    MCD::OPC_Decode, 220, 2, 94, // Opcode: CHHSI
/* 1146 */    MCD::OPC_FilterValue, 85, 4, 0, // Skip to: 1154
/* 1150 */    MCD::OPC_Decode, 241, 2, 95, // Opcode: CLHHSI
/* 1154 */    MCD::OPC_FilterValue, 88, 4, 0, // Skip to: 1162
/* 1158 */    MCD::OPC_Decode, 213, 2, 94, // Opcode: CGHSI
/* 1162 */    MCD::OPC_FilterValue, 89, 4, 0, // Skip to: 1170
/* 1166 */    MCD::OPC_Decode, 238, 2, 95, // Opcode: CLGHSI
/* 1170 */    MCD::OPC_FilterValue, 92, 4, 0, // Skip to: 1178
/* 1174 */    MCD::OPC_Decode, 223, 2, 94, // Opcode: CHSI
/* 1178 */    MCD::OPC_FilterValue, 93, 103, 6, // Skip to: 2821
/* 1182 */    MCD::OPC_Decode, 230, 2, 95, // Opcode: CLFHSI
/* 1186 */    MCD::OPC_FilterValue, 235, 1, 136, 3, // Skip to: 2095
/* 1191 */    MCD::OPC_ExtractField, 0, 8,  // Inst{7-0} ...
/* 1194 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 1202
/* 1198 */    MCD::OPC_Decode, 128, 4, 96, // Opcode: LMG
/* 1202 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 1210
/* 1206 */    MCD::OPC_Decode, 173, 5, 97, // Opcode: SRAG
/* 1210 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 1218
/* 1214 */    MCD::OPC_Decode, 177, 5, 97, // Opcode: SRLG
/* 1218 */    MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 1226
/* 1222 */    MCD::OPC_Decode, 161, 5, 97, // Opcode: SLLG
/* 1226 */    MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 1234
/* 1230 */    MCD::OPC_Decode, 131, 3, 98, // Opcode: CSY
/* 1234 */    MCD::OPC_FilterValue, 28, 4, 0, // Skip to: 1242
/* 1238 */    MCD::OPC_Decode, 132, 5, 97, // Opcode: RLLG
/* 1242 */    MCD::OPC_FilterValue, 29, 4, 0, // Skip to: 1250
/* 1246 */    MCD::OPC_Decode, 131, 5, 99, // Opcode: RLL
/* 1250 */    MCD::OPC_FilterValue, 36, 4, 0, // Skip to: 1258
/* 1254 */    MCD::OPC_Decode, 201, 5, 96, // Opcode: STMG
/* 1258 */    MCD::OPC_FilterValue, 48, 4, 0, // Skip to: 1266
/* 1262 */    MCD::OPC_Decode, 130, 3, 100, // Opcode: CSG
/* 1266 */    MCD::OPC_FilterValue, 82, 4, 0, // Skip to: 1274
/* 1270 */    MCD::OPC_Decode, 209, 4, 101, // Opcode: MVIY
/* 1274 */    MCD::OPC_FilterValue, 84, 4, 0, // Skip to: 1282
/* 1278 */    MCD::OPC_Decode, 229, 4, 101, // Opcode: NIY
/* 1282 */    MCD::OPC_FilterValue, 85, 4, 0, // Skip to: 1290
/* 1286 */    MCD::OPC_Decode, 244, 2, 101, // Opcode: CLIY
/* 1290 */    MCD::OPC_FilterValue, 86, 4, 0, // Skip to: 1298
/* 1294 */    MCD::OPC_Decode, 247, 4, 101, // Opcode: OIY
/* 1298 */    MCD::OPC_FilterValue, 87, 4, 0, // Skip to: 1306
/* 1302 */    MCD::OPC_Decode, 232, 5, 101, // Opcode: XIY
/* 1306 */    MCD::OPC_FilterValue, 106, 3, 0, // Skip to: 1313
/* 1310 */    MCD::OPC_Decode, 59, 102, // Opcode: ASI
/* 1313 */    MCD::OPC_FilterValue, 122, 3, 0, // Skip to: 1320
/* 1317 */    MCD::OPC_Decode, 35, 102, // Opcode: AGSI
/* 1320 */    MCD::OPC_FilterValue, 220, 1, 8, 0, // Skip to: 1333
/* 1325 */    MCD::OPC_CheckPredicate, 2, 212, 5, // Skip to: 2821
/* 1329 */    MCD::OPC_Decode, 174, 5, 99, // Opcode: SRAK
/* 1333 */    MCD::OPC_FilterValue, 222, 1, 8, 0, // Skip to: 1346
/* 1338 */    MCD::OPC_CheckPredicate, 2, 199, 5, // Skip to: 2821
/* 1342 */    MCD::OPC_Decode, 178, 5, 99, // Opcode: SRLK
/* 1346 */    MCD::OPC_FilterValue, 223, 1, 8, 0, // Skip to: 1359
/* 1351 */    MCD::OPC_CheckPredicate, 2, 186, 5, // Skip to: 2821
/* 1355 */    MCD::OPC_Decode, 162, 5, 99, // Opcode: SLLK
/* 1359 */    MCD::OPC_FilterValue, 226, 1, 179, 0, // Skip to: 1543
/* 1364 */    MCD::OPC_ExtractField, 32, 4,  // Inst{35-32} ...
/* 1367 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1379
/* 1371 */    MCD::OPC_CheckPredicate, 1, 160, 0, // Skip to: 1535
/* 1375 */    MCD::OPC_Decode, 175, 2, 103, // Opcode: AsmOLOCG
/* 1379 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1391
/* 1383 */    MCD::OPC_CheckPredicate, 1, 148, 0, // Skip to: 1535
/* 1387 */    MCD::OPC_Decode, 163, 1, 103, // Opcode: AsmHLOCG
/* 1391 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1403
/* 1395 */    MCD::OPC_CheckPredicate, 1, 136, 0, // Skip to: 1535
/* 1399 */    MCD::OPC_Decode, 143, 2, 103, // Opcode: AsmNLELOCG
/* 1403 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 1415
/* 1407 */    MCD::OPC_CheckPredicate, 1, 124, 0, // Skip to: 1535
/* 1411 */    MCD::OPC_Decode, 235, 1, 103, // Opcode: AsmLLOCG
/* 1415 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 1427
/* 1419 */    MCD::OPC_CheckPredicate, 1, 112, 0, // Skip to: 1535
/* 1423 */    MCD::OPC_Decode, 255, 1, 103, // Opcode: AsmNHELOCG
/* 1427 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 1439
/* 1431 */    MCD::OPC_CheckPredicate, 1, 100, 0, // Skip to: 1535
/* 1435 */    MCD::OPC_Decode, 227, 1, 103, // Opcode: AsmLHLOCG
/* 1439 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 1451
/* 1443 */    MCD::OPC_CheckPredicate, 1, 88, 0, // Skip to: 1535
/* 1447 */    MCD::OPC_Decode, 247, 1, 103, // Opcode: AsmNELOCG
/* 1451 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 1463
/* 1455 */    MCD::OPC_CheckPredicate, 1, 76, 0, // Skip to: 1535
/* 1459 */    MCD::OPC_Decode, 147, 1, 103, // Opcode: AsmELOCG
/* 1463 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 1475
/* 1467 */    MCD::OPC_CheckPredicate, 1, 64, 0, // Skip to: 1535
/* 1471 */    MCD::OPC_Decode, 151, 2, 103, // Opcode: AsmNLHLOCG
/* 1475 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 1487
/* 1479 */    MCD::OPC_CheckPredicate, 1, 52, 0, // Skip to: 1535
/* 1483 */    MCD::OPC_Decode, 155, 1, 103, // Opcode: AsmHELOCG
/* 1487 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1499
/* 1491 */    MCD::OPC_CheckPredicate, 1, 40, 0, // Skip to: 1535
/* 1495 */    MCD::OPC_Decode, 159, 2, 103, // Opcode: AsmNLLOCG
/* 1499 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 1511
/* 1503 */    MCD::OPC_CheckPredicate, 1, 28, 0, // Skip to: 1535
/* 1507 */    MCD::OPC_Decode, 219, 1, 103, // Opcode: AsmLELOCG
/* 1511 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 1523
/* 1515 */    MCD::OPC_CheckPredicate, 1, 16, 0, // Skip to: 1535
/* 1519 */    MCD::OPC_Decode, 135, 2, 103, // Opcode: AsmNHLOCG
/* 1523 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 1535
/* 1527 */    MCD::OPC_CheckPredicate, 1, 4, 0, // Skip to: 1535
/* 1531 */    MCD::OPC_Decode, 167, 2, 103, // Opcode: AsmNOLOCG
/* 1535 */    MCD::OPC_CheckPredicate, 1, 2, 5, // Skip to: 2821
/* 1539 */    MCD::OPC_Decode, 239, 1, 104, // Opcode: AsmLOCG
/* 1543 */    MCD::OPC_FilterValue, 227, 1, 179, 0, // Skip to: 1727
/* 1548 */    MCD::OPC_ExtractField, 32, 4,  // Inst{35-32} ...
/* 1551 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1563
/* 1555 */    MCD::OPC_CheckPredicate, 1, 160, 0, // Skip to: 1719
/* 1559 */    MCD::OPC_Decode, 179, 2, 105, // Opcode: AsmOSTOCG
/* 1563 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1575
/* 1567 */    MCD::OPC_CheckPredicate, 1, 148, 0, // Skip to: 1719
/* 1571 */    MCD::OPC_Decode, 167, 1, 105, // Opcode: AsmHSTOCG
/* 1575 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1587
/* 1579 */    MCD::OPC_CheckPredicate, 1, 136, 0, // Skip to: 1719
/* 1583 */    MCD::OPC_Decode, 147, 2, 105, // Opcode: AsmNLESTOCG
/* 1587 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 1599
/* 1591 */    MCD::OPC_CheckPredicate, 1, 124, 0, // Skip to: 1719
/* 1595 */    MCD::OPC_Decode, 243, 1, 105, // Opcode: AsmLSTOCG
/* 1599 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 1611
/* 1603 */    MCD::OPC_CheckPredicate, 1, 112, 0, // Skip to: 1719
/* 1607 */    MCD::OPC_Decode, 131, 2, 105, // Opcode: AsmNHESTOCG
/* 1611 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 1623
/* 1615 */    MCD::OPC_CheckPredicate, 1, 100, 0, // Skip to: 1719
/* 1619 */    MCD::OPC_Decode, 231, 1, 105, // Opcode: AsmLHSTOCG
/* 1623 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 1635
/* 1627 */    MCD::OPC_CheckPredicate, 1, 88, 0, // Skip to: 1719
/* 1631 */    MCD::OPC_Decode, 251, 1, 105, // Opcode: AsmNESTOCG
/* 1635 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 1647
/* 1639 */    MCD::OPC_CheckPredicate, 1, 76, 0, // Skip to: 1719
/* 1643 */    MCD::OPC_Decode, 151, 1, 105, // Opcode: AsmESTOCG
/* 1647 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 1659
/* 1651 */    MCD::OPC_CheckPredicate, 1, 64, 0, // Skip to: 1719
/* 1655 */    MCD::OPC_Decode, 155, 2, 105, // Opcode: AsmNLHSTOCG
/* 1659 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 1671
/* 1663 */    MCD::OPC_CheckPredicate, 1, 52, 0, // Skip to: 1719
/* 1667 */    MCD::OPC_Decode, 159, 1, 105, // Opcode: AsmHESTOCG
/* 1671 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1683
/* 1675 */    MCD::OPC_CheckPredicate, 1, 40, 0, // Skip to: 1719
/* 1679 */    MCD::OPC_Decode, 163, 2, 105, // Opcode: AsmNLSTOCG
/* 1683 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 1695
/* 1687 */    MCD::OPC_CheckPredicate, 1, 28, 0, // Skip to: 1719
/* 1691 */    MCD::OPC_Decode, 223, 1, 105, // Opcode: AsmLESTOCG
/* 1695 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 1707
/* 1699 */    MCD::OPC_CheckPredicate, 1, 16, 0, // Skip to: 1719
/* 1703 */    MCD::OPC_Decode, 139, 2, 105, // Opcode: AsmNHSTOCG
/* 1707 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 1719
/* 1711 */    MCD::OPC_CheckPredicate, 1, 4, 0, // Skip to: 1719
/* 1715 */    MCD::OPC_Decode, 171, 2, 105, // Opcode: AsmNOSTOCG
/* 1719 */    MCD::OPC_CheckPredicate, 1, 74, 4, // Skip to: 2821
/* 1723 */    MCD::OPC_Decode, 181, 2, 106, // Opcode: AsmSTOCG
/* 1727 */    MCD::OPC_FilterValue, 242, 1, 179, 0, // Skip to: 1911
/* 1732 */    MCD::OPC_ExtractField, 32, 4,  // Inst{35-32} ...
/* 1735 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1747
/* 1739 */    MCD::OPC_CheckPredicate, 1, 160, 0, // Skip to: 1903
/* 1743 */    MCD::OPC_Decode, 174, 2, 107, // Opcode: AsmOLOC
/* 1747 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1759
/* 1751 */    MCD::OPC_CheckPredicate, 1, 148, 0, // Skip to: 1903
/* 1755 */    MCD::OPC_Decode, 162, 1, 107, // Opcode: AsmHLOC
/* 1759 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1771
/* 1763 */    MCD::OPC_CheckPredicate, 1, 136, 0, // Skip to: 1903
/* 1767 */    MCD::OPC_Decode, 142, 2, 107, // Opcode: AsmNLELOC
/* 1771 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 1783
/* 1775 */    MCD::OPC_CheckPredicate, 1, 124, 0, // Skip to: 1903
/* 1779 */    MCD::OPC_Decode, 234, 1, 107, // Opcode: AsmLLOC
/* 1783 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 1795
/* 1787 */    MCD::OPC_CheckPredicate, 1, 112, 0, // Skip to: 1903
/* 1791 */    MCD::OPC_Decode, 254, 1, 107, // Opcode: AsmNHELOC
/* 1795 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 1807
/* 1799 */    MCD::OPC_CheckPredicate, 1, 100, 0, // Skip to: 1903
/* 1803 */    MCD::OPC_Decode, 226, 1, 107, // Opcode: AsmLHLOC
/* 1807 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 1819
/* 1811 */    MCD::OPC_CheckPredicate, 1, 88, 0, // Skip to: 1903
/* 1815 */    MCD::OPC_Decode, 246, 1, 107, // Opcode: AsmNELOC
/* 1819 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 1831
/* 1823 */    MCD::OPC_CheckPredicate, 1, 76, 0, // Skip to: 1903
/* 1827 */    MCD::OPC_Decode, 146, 1, 107, // Opcode: AsmELOC
/* 1831 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 1843
/* 1835 */    MCD::OPC_CheckPredicate, 1, 64, 0, // Skip to: 1903
/* 1839 */    MCD::OPC_Decode, 150, 2, 107, // Opcode: AsmNLHLOC
/* 1843 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 1855
/* 1847 */    MCD::OPC_CheckPredicate, 1, 52, 0, // Skip to: 1903
/* 1851 */    MCD::OPC_Decode, 154, 1, 107, // Opcode: AsmHELOC
/* 1855 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1867
/* 1859 */    MCD::OPC_CheckPredicate, 1, 40, 0, // Skip to: 1903
/* 1863 */    MCD::OPC_Decode, 158, 2, 107, // Opcode: AsmNLLOC
/* 1867 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 1879
/* 1871 */    MCD::OPC_CheckPredicate, 1, 28, 0, // Skip to: 1903
/* 1875 */    MCD::OPC_Decode, 218, 1, 107, // Opcode: AsmLELOC
/* 1879 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 1891
/* 1883 */    MCD::OPC_CheckPredicate, 1, 16, 0, // Skip to: 1903
/* 1887 */    MCD::OPC_Decode, 134, 2, 107, // Opcode: AsmNHLOC
/* 1891 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 1903
/* 1895 */    MCD::OPC_CheckPredicate, 1, 4, 0, // Skip to: 1903
/* 1899 */    MCD::OPC_Decode, 166, 2, 107, // Opcode: AsmNOLOC
/* 1903 */    MCD::OPC_CheckPredicate, 1, 146, 3, // Skip to: 2821
/* 1907 */    MCD::OPC_Decode, 238, 1, 108, // Opcode: AsmLOC
/* 1911 */    MCD::OPC_FilterValue, 243, 1, 137, 3, // Skip to: 2821
/* 1916 */    MCD::OPC_ExtractField, 32, 4,  // Inst{35-32} ...
/* 1919 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1931
/* 1923 */    MCD::OPC_CheckPredicate, 1, 160, 0, // Skip to: 2087
/* 1927 */    MCD::OPC_Decode, 178, 2, 109, // Opcode: AsmOSTOC
/* 1931 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1943
/* 1935 */    MCD::OPC_CheckPredicate, 1, 148, 0, // Skip to: 2087
/* 1939 */    MCD::OPC_Decode, 166, 1, 109, // Opcode: AsmHSTOC
/* 1943 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1955
/* 1947 */    MCD::OPC_CheckPredicate, 1, 136, 0, // Skip to: 2087
/* 1951 */    MCD::OPC_Decode, 146, 2, 109, // Opcode: AsmNLESTOC
/* 1955 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 1967
/* 1959 */    MCD::OPC_CheckPredicate, 1, 124, 0, // Skip to: 2087
/* 1963 */    MCD::OPC_Decode, 242, 1, 109, // Opcode: AsmLSTOC
/* 1967 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 1979
/* 1971 */    MCD::OPC_CheckPredicate, 1, 112, 0, // Skip to: 2087
/* 1975 */    MCD::OPC_Decode, 130, 2, 109, // Opcode: AsmNHESTOC
/* 1979 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 1991
/* 1983 */    MCD::OPC_CheckPredicate, 1, 100, 0, // Skip to: 2087
/* 1987 */    MCD::OPC_Decode, 230, 1, 109, // Opcode: AsmLHSTOC
/* 1991 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 2003
/* 1995 */    MCD::OPC_CheckPredicate, 1, 88, 0, // Skip to: 2087
/* 1999 */    MCD::OPC_Decode, 250, 1, 109, // Opcode: AsmNESTOC
/* 2003 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 2015
/* 2007 */    MCD::OPC_CheckPredicate, 1, 76, 0, // Skip to: 2087
/* 2011 */    MCD::OPC_Decode, 150, 1, 109, // Opcode: AsmESTOC
/* 2015 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 2027
/* 2019 */    MCD::OPC_CheckPredicate, 1, 64, 0, // Skip to: 2087
/* 2023 */    MCD::OPC_Decode, 154, 2, 109, // Opcode: AsmNLHSTOC
/* 2027 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 2039
/* 2031 */    MCD::OPC_CheckPredicate, 1, 52, 0, // Skip to: 2087
/* 2035 */    MCD::OPC_Decode, 158, 1, 109, // Opcode: AsmHESTOC
/* 2039 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 2051
/* 2043 */    MCD::OPC_CheckPredicate, 1, 40, 0, // Skip to: 2087
/* 2047 */    MCD::OPC_Decode, 162, 2, 109, // Opcode: AsmNLSTOC
/* 2051 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 2063
/* 2055 */    MCD::OPC_CheckPredicate, 1, 28, 0, // Skip to: 2087
/* 2059 */    MCD::OPC_Decode, 222, 1, 109, // Opcode: AsmLESTOC
/* 2063 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 2075
/* 2067 */    MCD::OPC_CheckPredicate, 1, 16, 0, // Skip to: 2087
/* 2071 */    MCD::OPC_Decode, 138, 2, 109, // Opcode: AsmNHSTOC
/* 2075 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 2087
/* 2079 */    MCD::OPC_CheckPredicate, 1, 4, 0, // Skip to: 2087
/* 2083 */    MCD::OPC_Decode, 170, 2, 109, // Opcode: AsmNOSTOC
/* 2087 */    MCD::OPC_CheckPredicate, 1, 218, 2, // Skip to: 2821
/* 2091 */    MCD::OPC_Decode, 180, 2, 110, // Opcode: AsmSTOC
/* 2095 */    MCD::OPC_FilterValue, 236, 1, 125, 1, // Skip to: 2481
/* 2100 */    MCD::OPC_ExtractField, 0, 8,  // Inst{7-0} ...
/* 2103 */    MCD::OPC_FilterValue, 81, 8, 0, // Skip to: 2115
/* 2107 */    MCD::OPC_CheckPredicate, 3, 198, 2, // Skip to: 2821
/* 2111 */    MCD::OPC_Decode, 129, 5, 111, // Opcode: RISBLG
/* 2115 */    MCD::OPC_FilterValue, 84, 4, 0, // Skip to: 2123
/* 2119 */    MCD::OPC_Decode, 133, 5, 111, // Opcode: RNSBG
/* 2123 */    MCD::OPC_FilterValue, 85, 4, 0, // Skip to: 2131
/* 2127 */    MCD::OPC_Decode, 254, 4, 111, // Opcode: RISBG
/* 2131 */    MCD::OPC_FilterValue, 86, 4, 0, // Skip to: 2139
/* 2135 */    MCD::OPC_Decode, 134, 5, 111, // Opcode: ROSBG
/* 2139 */    MCD::OPC_FilterValue, 87, 4, 0, // Skip to: 2147
/* 2143 */    MCD::OPC_Decode, 135, 5, 111, // Opcode: RXSBG
/* 2147 */    MCD::OPC_FilterValue, 93, 8, 0, // Skip to: 2159
/* 2151 */    MCD::OPC_CheckPredicate, 3, 154, 2, // Skip to: 2821
/* 2155 */    MCD::OPC_Decode, 128, 5, 111, // Opcode: RISBHG
/* 2159 */    MCD::OPC_FilterValue, 100, 62, 0, // Skip to: 2225
/* 2163 */    MCD::OPC_ExtractField, 8, 4,  // Inst{11-8} ...
/* 2166 */    MCD::OPC_FilterValue, 0, 139, 2, // Skip to: 2821
/* 2170 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 2173 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 2181
/* 2177 */    MCD::OPC_Decode, 181, 1, 112, // Opcode: AsmJHCGR
/* 2181 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 2189
/* 2185 */    MCD::OPC_Decode, 197, 1, 112, // Opcode: AsmJLCGR
/* 2189 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 2197
/* 2193 */    MCD::OPC_Decode, 213, 1, 112, // Opcode: AsmJLHCGR
/* 2197 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 2205
/* 2201 */    MCD::OPC_Decode, 173, 1, 112, // Opcode: AsmJECGR
/* 2205 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 2213
/* 2209 */    MCD::OPC_Decode, 189, 1, 112, // Opcode: AsmJHECGR
/* 2213 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 2221
/* 2217 */    MCD::OPC_Decode, 205, 1, 112, // Opcode: AsmJLECGR
/* 2221 */    MCD::OPC_Decode, 141, 1, 113, // Opcode: AsmCGRJ
/* 2225 */    MCD::OPC_FilterValue, 118, 62, 0, // Skip to: 2291
/* 2229 */    MCD::OPC_ExtractField, 8, 4,  // Inst{11-8} ...
/* 2232 */    MCD::OPC_FilterValue, 0, 73, 2, // Skip to: 2821
/* 2236 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 2239 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 2247
/* 2243 */    MCD::OPC_Decode, 183, 1, 114, // Opcode: AsmJHCR
/* 2247 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 2255
/* 2251 */    MCD::OPC_Decode, 199, 1, 114, // Opcode: AsmJLCR
/* 2255 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 2263
/* 2259 */    MCD::OPC_Decode, 215, 1, 114, // Opcode: AsmJLHCR
/* 2263 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 2271
/* 2267 */    MCD::OPC_Decode, 175, 1, 114, // Opcode: AsmJECR
/* 2271 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 2279
/* 2275 */    MCD::OPC_Decode, 191, 1, 114, // Opcode: AsmJHECR
/* 2279 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 2287
/* 2283 */    MCD::OPC_Decode, 207, 1, 114, // Opcode: AsmJLECR
/* 2287 */    MCD::OPC_Decode, 143, 1, 115, // Opcode: AsmCRJ
/* 2291 */    MCD::OPC_FilterValue, 124, 55, 0, // Skip to: 2350
/* 2295 */    MCD::OPC_ExtractField, 32, 4,  // Inst{35-32} ...
/* 2298 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 2306
/* 2302 */    MCD::OPC_Decode, 180, 1, 116, // Opcode: AsmJHCGI
/* 2306 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 2314
/* 2310 */    MCD::OPC_Decode, 196, 1, 116, // Opcode: AsmJLCGI
/* 2314 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 2322
/* 2318 */    MCD::OPC_Decode, 212, 1, 116, // Opcode: AsmJLHCGI
/* 2322 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 2330
/* 2326 */    MCD::OPC_Decode, 172, 1, 116, // Opcode: AsmJECGI
/* 2330 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 2338
/* 2334 */    MCD::OPC_Decode, 188, 1, 116, // Opcode: AsmJHECGI
/* 2338 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 2346
/* 2342 */    MCD::OPC_Decode, 204, 1, 116, // Opcode: AsmJLECGI
/* 2346 */    MCD::OPC_Decode, 140, 1, 117, // Opcode: AsmCGIJ
/* 2350 */    MCD::OPC_FilterValue, 126, 55, 0, // Skip to: 2409
/* 2354 */    MCD::OPC_ExtractField, 32, 4,  // Inst{35-32} ...
/* 2357 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 2365
/* 2361 */    MCD::OPC_Decode, 182, 1, 118, // Opcode: AsmJHCI
/* 2365 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 2373
/* 2369 */    MCD::OPC_Decode, 198, 1, 118, // Opcode: AsmJLCI
/* 2373 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 2381
/* 2377 */    MCD::OPC_Decode, 214, 1, 118, // Opcode: AsmJLHCI
/* 2381 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 2389
/* 2385 */    MCD::OPC_Decode, 174, 1, 118, // Opcode: AsmJECI
/* 2389 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 2397
/* 2393 */    MCD::OPC_Decode, 190, 1, 118, // Opcode: AsmJHECI
/* 2397 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 2405
/* 2401 */    MCD::OPC_Decode, 206, 1, 118, // Opcode: AsmJLECI
/* 2405 */    MCD::OPC_Decode, 142, 1, 119, // Opcode: AsmCIJ
/* 2409 */    MCD::OPC_FilterValue, 216, 1, 13, 0, // Skip to: 2427
/* 2414 */    MCD::OPC_CheckPredicate, 2, 147, 1, // Skip to: 2821
/* 2418 */    MCD::OPC_CheckField, 8, 8, 0, 141, 1, // Skip to: 2821
/* 2424 */    MCD::OPC_Decode, 38, 120, // Opcode: AHIK
/* 2427 */    MCD::OPC_FilterValue, 217, 1, 13, 0, // Skip to: 2445
/* 2432 */    MCD::OPC_CheckPredicate, 2, 129, 1, // Skip to: 2821
/* 2436 */    MCD::OPC_CheckField, 8, 8, 0, 123, 1, // Skip to: 2821
/* 2442 */    MCD::OPC_Decode, 32, 121, // Opcode: AGHIK
/* 2445 */    MCD::OPC_FilterValue, 218, 1, 13, 0, // Skip to: 2463
/* 2450 */    MCD::OPC_CheckPredicate, 2, 111, 1, // Skip to: 2821
/* 2454 */    MCD::OPC_CheckField, 8, 8, 0, 105, 1, // Skip to: 2821
/* 2460 */    MCD::OPC_Decode, 53, 120, // Opcode: ALHSIK
/* 2463 */    MCD::OPC_FilterValue, 219, 1, 97, 1, // Skip to: 2821
/* 2468 */    MCD::OPC_CheckPredicate, 2, 93, 1, // Skip to: 2821
/* 2472 */    MCD::OPC_CheckField, 8, 8, 0, 87, 1, // Skip to: 2821
/* 2478 */    MCD::OPC_Decode, 50, 121, // Opcode: ALGHSIK
/* 2481 */    MCD::OPC_FilterValue, 237, 1, 79, 1, // Skip to: 2821
/* 2486 */    MCD::OPC_ExtractField, 0, 8,  // Inst{7-0} ...
/* 2489 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 2503
/* 2493 */    MCD::OPC_CheckField, 8, 8, 0, 66, 1, // Skip to: 2821
/* 2499 */    MCD::OPC_Decode, 207, 3, 122, // Opcode: LDEB
/* 2503 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 2517
/* 2507 */    MCD::OPC_CheckField, 8, 8, 0, 52, 1, // Skip to: 2821
/* 2513 */    MCD::OPC_Decode, 164, 4, 123, // Opcode: LXDB
/* 2517 */    MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 2531
/* 2521 */    MCD::OPC_CheckField, 8, 8, 0, 38, 1, // Skip to: 2821
/* 2527 */    MCD::OPC_Decode, 166, 4, 123, // Opcode: LXEB
/* 2531 */    MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 2545
/* 2535 */    MCD::OPC_CheckField, 8, 8, 0, 24, 1, // Skip to: 2821
/* 2541 */    MCD::OPC_Decode, 213, 4, 124, // Opcode: MXDB
/* 2545 */    MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 2559
/* 2549 */    MCD::OPC_CheckField, 8, 8, 0, 10, 1, // Skip to: 2821
/* 2555 */    MCD::OPC_Decode, 195, 2, 125, // Opcode: CEB
/* 2559 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 2572
/* 2563 */    MCD::OPC_CheckField, 8, 8, 0, 252, 0, // Skip to: 2821
/* 2569 */    MCD::OPC_Decode, 23, 126, // Opcode: AEB
/* 2572 */    MCD::OPC_FilterValue, 11, 10, 0, // Skip to: 2586
/* 2576 */    MCD::OPC_CheckField, 8, 8, 0, 239, 0, // Skip to: 2821
/* 2582 */    MCD::OPC_Decode, 139, 5, 126, // Opcode: SEB
/* 2586 */    MCD::OPC_FilterValue, 12, 10, 0, // Skip to: 2600
/* 2590 */    MCD::OPC_CheckField, 8, 8, 0, 225, 0, // Skip to: 2821
/* 2596 */    MCD::OPC_Decode, 179, 4, 127, // Opcode: MDEB
/* 2600 */    MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 2614
/* 2604 */    MCD::OPC_CheckField, 8, 8, 0, 211, 0, // Skip to: 2821
/* 2610 */    MCD::OPC_Decode, 158, 3, 126, // Opcode: DEB
/* 2614 */    MCD::OPC_FilterValue, 14, 11, 0, // Skip to: 2629
/* 2618 */    MCD::OPC_CheckField, 8, 4, 0, 197, 0, // Skip to: 2821
/* 2624 */    MCD::OPC_Decode, 175, 4, 128, 1, // Opcode: MAEB
/* 2629 */    MCD::OPC_FilterValue, 15, 11, 0, // Skip to: 2644
/* 2633 */    MCD::OPC_CheckField, 8, 4, 0, 182, 0, // Skip to: 2821
/* 2639 */    MCD::OPC_Decode, 192, 4, 128, 1, // Opcode: MSEB
/* 2644 */    MCD::OPC_FilterValue, 20, 10, 0, // Skip to: 2658
/* 2648 */    MCD::OPC_CheckField, 8, 8, 0, 167, 0, // Skip to: 2821
/* 2654 */    MCD::OPC_Decode, 168, 5, 125, // Opcode: SQEB
/* 2658 */    MCD::OPC_FilterValue, 21, 10, 0, // Skip to: 2672
/* 2662 */    MCD::OPC_CheckField, 8, 8, 0, 153, 0, // Skip to: 2821
/* 2668 */    MCD::OPC_Decode, 166, 5, 122, // Opcode: SQDB
/* 2672 */    MCD::OPC_FilterValue, 23, 10, 0, // Skip to: 2686
/* 2676 */    MCD::OPC_CheckField, 8, 8, 0, 139, 0, // Skip to: 2821
/* 2682 */    MCD::OPC_Decode, 181, 4, 126, // Opcode: MEEB
/* 2686 */    MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 2700
/* 2690 */    MCD::OPC_CheckField, 8, 8, 0, 125, 0, // Skip to: 2821
/* 2696 */    MCD::OPC_Decode, 191, 2, 122, // Opcode: CDB
/* 2700 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 2713
/* 2704 */    MCD::OPC_CheckField, 8, 8, 0, 111, 0, // Skip to: 2821
/* 2710 */    MCD::OPC_Decode, 18, 127, // Opcode: ADB
/* 2713 */    MCD::OPC_FilterValue, 27, 10, 0, // Skip to: 2727
/* 2717 */    MCD::OPC_CheckField, 8, 8, 0, 98, 0, // Skip to: 2821
/* 2723 */    MCD::OPC_Decode, 137, 5, 127, // Opcode: SDB
/* 2727 */    MCD::OPC_FilterValue, 28, 10, 0, // Skip to: 2741
/* 2731 */    MCD::OPC_CheckField, 8, 8, 0, 84, 0, // Skip to: 2821
/* 2737 */    MCD::OPC_Decode, 177, 4, 127, // Opcode: MDB
/* 2741 */    MCD::OPC_FilterValue, 29, 10, 0, // Skip to: 2755
/* 2745 */    MCD::OPC_CheckField, 8, 8, 0, 70, 0, // Skip to: 2821
/* 2751 */    MCD::OPC_Decode, 156, 3, 127, // Opcode: DDB
/* 2755 */    MCD::OPC_FilterValue, 30, 11, 0, // Skip to: 2770
/* 2759 */    MCD::OPC_CheckField, 8, 4, 0, 56, 0, // Skip to: 2821
/* 2765 */    MCD::OPC_Decode, 173, 4, 129, 1, // Opcode: MADB
/* 2770 */    MCD::OPC_FilterValue, 31, 11, 0, // Skip to: 2785
/* 2774 */    MCD::OPC_CheckField, 8, 4, 0, 41, 0, // Skip to: 2821
/* 2780 */    MCD::OPC_Decode, 190, 4, 129, 1, // Opcode: MSDB
/* 2785 */    MCD::OPC_FilterValue, 100, 5, 0, // Skip to: 2794
/* 2789 */    MCD::OPC_Decode, 217, 3, 130, 1, // Opcode: LEY
/* 2794 */    MCD::OPC_FilterValue, 101, 5, 0, // Skip to: 2803
/* 2798 */    MCD::OPC_Decode, 212, 3, 131, 1, // Opcode: LDY
/* 2803 */    MCD::OPC_FilterValue, 102, 5, 0, // Skip to: 2812
/* 2807 */    MCD::OPC_Decode, 192, 5, 130, 1, // Opcode: STEY
/* 2812 */    MCD::OPC_FilterValue, 103, 5, 0, // Skip to: 2821
/* 2816 */    MCD::OPC_Decode, 190, 5, 131, 1, // Opcode: STDY
/* 2821 */    MCD::OPC_Fail,
  0
};

static bool checkDecoderPredicate(unsigned Idx, uint64_t Bits) {
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    return ((Bits & SystemZ::FeatureFPExtension));
  case 1:
    return ((Bits & SystemZ::FeatureLoadStoreOnCond));
  case 2:
    return ((Bits & SystemZ::FeatureDistinctOps));
  case 3:
    return ((Bits & SystemZ::FeatureHighWord));
  }
}

template<typename InsnType>
static DecodeStatus decodeToMCInst(DecodeStatus S, unsigned Idx, InsnType insn, MCInst &MI,
                                   uint64_t Address, const void *Decoder) {
  InsnType tmp;
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeADDR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 1:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeADDR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 2:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 3:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 4:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 5:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 6:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 7:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 8:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 9:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 10:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeBDAddr32Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeBDAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 8);
    if (decodeU8ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeU16ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 15:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeU16ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 16:
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 17:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 18:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 19:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 20:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 21:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeS16ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 22:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeS16ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 23:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeS16ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 24:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeS16ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 25:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 26:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (decodeAccessRegOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 27:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 28:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 29:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 30:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 31:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 32:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 33:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 34:
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 35:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 36:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 37:
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 38:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 39:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 40:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 41:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 42:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 43:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 44:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 45:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 46:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 47:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 48:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 49:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 50:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 51:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 52:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 53:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 54:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 55:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 56:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 57:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 58:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 59:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 60:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 61:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 62:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 63:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 64:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 65:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 66:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 67:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 68:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 69:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 70:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 71:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 72:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 73:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 74:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeBDAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 75:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodePC32DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 76:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodeS32ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 77:
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodePC32DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 78:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodePC32DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 79:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodeU32ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 80:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodeU32ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 81:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodeS32ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 82:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodeS32ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 83:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodeU32ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 84:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodeS32ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 85:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodeU32ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 86:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodePC32DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 87:
    tmp = fieldFromInstruction(insn, 16, 24);
    if (decodeBDLAddr64Disp12Len8Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeBDAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 88:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 28);
    if (decodeBDXAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 89:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 28);
    if (decodeBDXAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 90:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 28);
    if (decodeBDXAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 91:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 28);
    if (decodeBDXAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 92:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 28);
    if (decodeBDXAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 93:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 28);
    if (decodeBDXAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 94:
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodeBDAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeS16ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 95:
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodeBDAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeU16ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 96:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 97:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr32Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 98:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 99:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr32Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 100:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 101:
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 8);
    if (decodeU8ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 102:
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 8);
    if (decodeS8ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 103:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 104:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 105:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 106:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 107:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 108:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 109:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 110:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 111:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 24, 8);
    if (decodeU8ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 8);
    if (decodeU8ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 8);
    if (decodeU6ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 112:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 113:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 114:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 115:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 116:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 8);
    if (decodeS8ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 117:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 8);
    if (decodeS8ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 118:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 8);
    if (decodeS8ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 119:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 8);
    if (decodeS8ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 120:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodeS16ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 121:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodeS16ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 122:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 123:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 124:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 125:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 126:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 127:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 128:
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 129:
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 130:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 28);
    if (decodeBDXAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 131:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 28);
    if (decodeBDXAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  }
}

template<typename InsnType>
static DecodeStatus decodeInstruction(const uint8_t DecodeTable[], MCInst &MI,
                                      InsnType insn, uint64_t Address,
                                      const void *DisAsm,
                                      const MCSubtargetInfo &STI) {
  uint64_t Bits = STI.getFeatureBits();

  const uint8_t *Ptr = DecodeTable;
  uint32_t CurFieldValue = 0;
  DecodeStatus S = MCDisassembler::Success;
  for (;;) {
    ptrdiff_t Loc = Ptr - DecodeTable;
    switch (*Ptr) {
    default:
      errs() << Loc << ": Unexpected decode table opcode!\n";
      return MCDisassembler::Fail;
    case MCD::OPC_ExtractField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      ++Ptr;
      CurFieldValue = fieldFromInstruction(insn, Start, Len);
      DEBUG(dbgs() << Loc << ": OPC_ExtractField(" << Start << ", "
                   << Len << "): " << CurFieldValue << "\n");
      break;
    }
    case MCD::OPC_FilterValue: {
      // Decode the field value.
      unsigned Len;
      InsnType Val = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;

      // Perform the filter operation.
      if (Val != CurFieldValue)
        Ptr += NumToSkip;
      DEBUG(dbgs() << Loc << ": OPC_FilterValue(" << Val << ", " << NumToSkip
                   << "): " << ((Val != CurFieldValue) ? "FAIL:" : "PASS:")
                   << " continuing at " << (Ptr - DecodeTable) << "\n");

      break;
    }
    case MCD::OPC_CheckField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      InsnType FieldValue = fieldFromInstruction(insn, Start, Len);
      // Decode the field value.
      uint32_t ExpectedValue = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;

      // If the actual and expected values don't match, skip.
      if (ExpectedValue != FieldValue)
        Ptr += NumToSkip;
      DEBUG(dbgs() << Loc << ": OPC_CheckField(" << Start << ", "
                   << Len << ", " << ExpectedValue << ", " << NumToSkip
                   << "): FieldValue = " << FieldValue << ", ExpectedValue = "
                   << ExpectedValue << ": "
                   << ((ExpectedValue == FieldValue) ? "PASS\n" : "FAIL\n"));
      break;
    }
    case MCD::OPC_CheckPredicate: {
      unsigned Len;
      // Decode the Predicate Index value.
      unsigned PIdx = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;
      // Check the predicate.
      bool Pred;
      if (!(Pred = checkDecoderPredicate(PIdx, Bits)))
        Ptr += NumToSkip;
      (void)Pred;
      DEBUG(dbgs() << Loc << ": OPC_CheckPredicate(" << PIdx << "): "
            << (Pred ? "PASS\n" : "FAIL\n"));

      break;
    }
    case MCD::OPC_Decode: {
      unsigned Len;
      // Decode the Opcode value.
      unsigned Opc = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      unsigned DecodeIdx = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      DEBUG(dbgs() << Loc << ": OPC_Decode: opcode " << Opc
                   << ", using decoder " << DecodeIdx << "\n" );
      DEBUG(dbgs() << "----- DECODE SUCCESSFUL -----\n");

      MI.setOpcode(Opc);
      return decodeToMCInst(S, DecodeIdx, insn, MI, Address, DisAsm);
    }
    case MCD::OPC_SoftFail: {
      // Decode the mask values.
      unsigned Len;
      InsnType PositiveMask = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      InsnType NegativeMask = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      bool Fail = (insn & PositiveMask) || (~insn & NegativeMask);
      if (Fail)
        S = MCDisassembler::SoftFail;
      DEBUG(dbgs() << Loc << ": OPC_SoftFail: " << (Fail ? "FAIL\n":"PASS\n"));
      break;
    }
    case MCD::OPC_Fail: {
      DEBUG(dbgs() << Loc << ": OPC_Fail\n");
      return MCDisassembler::Fail;
    }
    }
  }
  llvm_unreachable("bogosity detected in disassembler state machine!");
}


} // End llvm namespace
