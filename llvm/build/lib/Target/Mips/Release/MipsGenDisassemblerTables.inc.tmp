/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* * Mips Disassembler                                                        *|
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
/* 0 */       MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 3 */       MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 15
/* 7 */       MCD::OPC_CheckPredicate, 0, 166, 1, // Skip to: 433
/* 11 */      MCD::OPC_Decode, 222, 1, 0, // Opcode: BeqzRxImm16
/* 15 */      MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 27
/* 19 */      MCD::OPC_CheckPredicate, 0, 154, 1, // Skip to: 433
/* 23 */      MCD::OPC_Decode, 225, 1, 0, // Opcode: BnezRxImm16
/* 27 */      MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 39
/* 31 */      MCD::OPC_CheckPredicate, 0, 142, 1, // Skip to: 433
/* 35 */      MCD::OPC_Decode, 136, 1, 1, // Opcode: AddiuRxRxImm16
/* 39 */      MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 51
/* 43 */      MCD::OPC_CheckPredicate, 0, 130, 1, // Skip to: 433
/* 47 */      MCD::OPC_Decode, 236, 9, 0, // Opcode: SltiRxImm16
/* 51 */      MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 63
/* 55 */      MCD::OPC_CheckPredicate, 0, 118, 1, // Skip to: 433
/* 59 */      MCD::OPC_Decode, 239, 9, 0, // Opcode: SltiuRxImm16
/* 63 */      MCD::OPC_FilterValue, 12, 39, 0, // Skip to: 106
/* 67 */      MCD::OPC_ExtractField, 8, 3,  // Inst{10-8} ...
/* 70 */      MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 82
/* 74 */      MCD::OPC_CheckPredicate, 0, 99, 1, // Skip to: 433
/* 78 */      MCD::OPC_Decode, 139, 1, 2, // Opcode: AddiuSpImm16
/* 82 */      MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 94
/* 86 */      MCD::OPC_CheckPredicate, 0, 87, 1, // Skip to: 433
/* 90 */      MCD::OPC_Decode, 135, 7, 3, // Opcode: Move32R16
/* 94 */      MCD::OPC_FilterValue, 7, 79, 1, // Skip to: 433
/* 98 */      MCD::OPC_CheckPredicate, 0, 75, 1, // Skip to: 433
/* 102 */     MCD::OPC_Decode, 136, 7, 4, // Opcode: MoveR3216
/* 106 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 118
/* 110 */     MCD::OPC_CheckPredicate, 0, 63, 1, // Skip to: 433
/* 114 */     MCD::OPC_Decode, 218, 5, 0, // Opcode: LiRxImm16
/* 118 */     MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 130
/* 122 */     MCD::OPC_CheckPredicate, 0, 51, 1, // Skip to: 433
/* 126 */     MCD::OPC_Decode, 248, 2, 0, // Opcode: CmpiRxImm16
/* 130 */     MCD::OPC_FilterValue, 28, 27, 0, // Skip to: 161
/* 134 */     MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 137 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 149
/* 141 */     MCD::OPC_CheckPredicate, 0, 32, 1, // Skip to: 433
/* 145 */     MCD::OPC_Decode, 141, 1, 5, // Opcode: AdduRxRyRz16
/* 149 */     MCD::OPC_FilterValue, 3, 24, 1, // Skip to: 433
/* 153 */     MCD::OPC_CheckPredicate, 0, 20, 1, // Skip to: 433
/* 157 */     MCD::OPC_Decode, 248, 9, 5, // Opcode: SubuRxRyRz16
/* 161 */     MCD::OPC_FilterValue, 29, 12, 1, // Skip to: 433
/* 165 */     MCD::OPC_ExtractField, 0, 5,  // Inst{4-0} ...
/* 168 */     MCD::OPC_FilterValue, 0, 63, 0, // Skip to: 235
/* 172 */     MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 175 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 187
/* 179 */     MCD::OPC_CheckPredicate, 0, 250, 0, // Skip to: 433
/* 183 */     MCD::OPC_Decode, 155, 5, 2, // Opcode: JumpLinkReg16
/* 187 */     MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 205
/* 191 */     MCD::OPC_CheckPredicate, 0, 238, 0, // Skip to: 433
/* 195 */     MCD::OPC_CheckField, 8, 3, 0, 232, 0, // Skip to: 433
/* 201 */     MCD::OPC_Decode, 152, 5, 2, // Opcode: JrRa16
/* 205 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 217
/* 209 */     MCD::OPC_CheckPredicate, 0, 220, 0, // Skip to: 433
/* 213 */     MCD::OPC_Decode, 154, 5, 0, // Opcode: JrcRx16
/* 217 */     MCD::OPC_FilterValue, 7, 212, 0, // Skip to: 433
/* 221 */     MCD::OPC_CheckPredicate, 0, 208, 0, // Skip to: 433
/* 225 */     MCD::OPC_CheckField, 8, 3, 0, 202, 0, // Skip to: 433
/* 231 */     MCD::OPC_Decode, 153, 5, 2, // Opcode: JrcRa16
/* 235 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 247
/* 239 */     MCD::OPC_CheckPredicate, 0, 190, 0, // Skip to: 433
/* 243 */     MCD::OPC_Decode, 234, 9, 6, // Opcode: SltRxRy16
/* 247 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 259
/* 251 */     MCD::OPC_CheckPredicate, 0, 178, 0, // Skip to: 433
/* 255 */     MCD::OPC_Decode, 242, 9, 6, // Opcode: SltuRxRy16
/* 259 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 271
/* 263 */     MCD::OPC_CheckPredicate, 0, 166, 0, // Skip to: 433
/* 267 */     MCD::OPC_Decode, 232, 9, 7, // Opcode: SllvRxRy16
/* 271 */     MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 289
/* 275 */     MCD::OPC_CheckPredicate, 0, 154, 0, // Skip to: 433
/* 279 */     MCD::OPC_CheckField, 5, 6, 0, 148, 0, // Skip to: 433
/* 285 */     MCD::OPC_Decode, 227, 1, 2, // Opcode: Break16
/* 289 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 301
/* 293 */     MCD::OPC_CheckPredicate, 0, 136, 0, // Skip to: 433
/* 297 */     MCD::OPC_Decode, 247, 9, 7, // Opcode: SrlvRxRy16
/* 301 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 313
/* 305 */     MCD::OPC_CheckPredicate, 0, 124, 0, // Skip to: 433
/* 309 */     MCD::OPC_Decode, 245, 9, 7, // Opcode: SravRxRy16
/* 313 */     MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 325
/* 317 */     MCD::OPC_CheckPredicate, 0, 112, 0, // Skip to: 433
/* 321 */     MCD::OPC_Decode, 247, 2, 6, // Opcode: CmpRxRy16
/* 325 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 337
/* 329 */     MCD::OPC_CheckPredicate, 0, 100, 0, // Skip to: 433
/* 333 */     MCD::OPC_Decode, 142, 1, 7, // Opcode: AndRxRxRy16
/* 337 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 349
/* 341 */     MCD::OPC_CheckPredicate, 0, 88, 0, // Skip to: 433
/* 345 */     MCD::OPC_Decode, 171, 7, 7, // Opcode: OrRxRxRy16
/* 349 */     MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 361
/* 353 */     MCD::OPC_CheckPredicate, 0, 76, 0, // Skip to: 433
/* 357 */     MCD::OPC_Decode, 160, 10, 7, // Opcode: XorRxRxRy16
/* 361 */     MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 373
/* 365 */     MCD::OPC_CheckPredicate, 0, 64, 0, // Skip to: 433
/* 369 */     MCD::OPC_Decode, 162, 7, 6, // Opcode: NotRxRy16
/* 373 */     MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 385
/* 377 */     MCD::OPC_CheckPredicate, 0, 52, 0, // Skip to: 433
/* 381 */     MCD::OPC_Decode, 133, 7, 0, // Opcode: Mfhi16
/* 385 */     MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 397
/* 389 */     MCD::OPC_CheckPredicate, 0, 40, 0, // Skip to: 433
/* 393 */     MCD::OPC_Decode, 134, 7, 0, // Opcode: Mflo16
/* 397 */     MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 409
/* 401 */     MCD::OPC_CheckPredicate, 0, 28, 0, // Skip to: 433
/* 405 */     MCD::OPC_Decode, 206, 3, 6, // Opcode: DivRxRy16
/* 409 */     MCD::OPC_FilterValue, 27, 8, 0, // Skip to: 421
/* 413 */     MCD::OPC_CheckPredicate, 0, 16, 0, // Skip to: 433
/* 417 */     MCD::OPC_Decode, 207, 3, 6, // Opcode: DivuRxRy16
/* 421 */     MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 433
/* 425 */     MCD::OPC_CheckPredicate, 0, 4, 0, // Skip to: 433
/* 429 */     MCD::OPC_Decode, 161, 7, 6, // Opcode: NegRxRy16
/* 433 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTable32[] = {
/* 0 */       MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 3 */       MCD::OPC_FilterValue, 1, 20, 0, // Skip to: 27
/* 7 */       MCD::OPC_CheckPredicate, 0, 174, 1, // Skip to: 441
/* 11 */      MCD::OPC_CheckField, 27, 5, 30, 168, 1, // Skip to: 441
/* 17 */      MCD::OPC_CheckField, 5, 3, 0, 162, 1, // Skip to: 441
/* 23 */      MCD::OPC_Decode, 135, 1, 0, // Opcode: AddiuRxPcImmX16
/* 27 */      MCD::OPC_FilterValue, 2, 20, 0, // Skip to: 51
/* 31 */      MCD::OPC_CheckPredicate, 0, 150, 1, // Skip to: 441
/* 35 */      MCD::OPC_CheckField, 27, 5, 30, 144, 1, // Skip to: 441
/* 41 */      MCD::OPC_CheckField, 5, 6, 0, 138, 1, // Skip to: 441
/* 47 */      MCD::OPC_Decode, 224, 1, 8, // Opcode: BimmX16
/* 51 */      MCD::OPC_FilterValue, 4, 20, 0, // Skip to: 75
/* 55 */      MCD::OPC_CheckPredicate, 0, 126, 1, // Skip to: 441
/* 59 */      MCD::OPC_CheckField, 27, 5, 30, 120, 1, // Skip to: 441
/* 65 */      MCD::OPC_CheckField, 5, 3, 0, 114, 1, // Skip to: 441
/* 71 */      MCD::OPC_Decode, 223, 1, 0, // Opcode: BeqzRxImmX16
/* 75 */      MCD::OPC_FilterValue, 5, 20, 0, // Skip to: 99
/* 79 */      MCD::OPC_CheckPredicate, 0, 102, 1, // Skip to: 441
/* 83 */      MCD::OPC_CheckField, 27, 5, 30, 96, 1, // Skip to: 441
/* 89 */      MCD::OPC_CheckField, 5, 3, 0, 90, 1, // Skip to: 441
/* 95 */      MCD::OPC_Decode, 226, 1, 0, // Opcode: BnezRxImmX16
/* 99 */      MCD::OPC_FilterValue, 6, 92, 0, // Skip to: 195
/* 103 */     MCD::OPC_ExtractField, 27, 5,  // Inst{31-27} ...
/* 106 */     MCD::OPC_FilterValue, 30, 75, 1, // Skip to: 441
/* 110 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 113 */     MCD::OPC_FilterValue, 0, 39, 0, // Skip to: 156
/* 117 */     MCD::OPC_ExtractField, 0, 5,  // Inst{4-0} ...
/* 120 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 132
/* 124 */     MCD::OPC_CheckPredicate, 0, 28, 0, // Skip to: 156
/* 128 */     MCD::OPC_Decode, 231, 9, 6, // Opcode: SllX16
/* 132 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 144
/* 136 */     MCD::OPC_CheckPredicate, 0, 16, 0, // Skip to: 156
/* 140 */     MCD::OPC_Decode, 246, 9, 6, // Opcode: SrlX16
/* 144 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 156
/* 148 */     MCD::OPC_CheckPredicate, 0, 4, 0, // Skip to: 156
/* 152 */     MCD::OPC_Decode, 244, 9, 6, // Opcode: SraX16
/* 156 */     MCD::OPC_ExtractField, 5, 6,  // Inst{10-5} ...
/* 159 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 171
/* 163 */     MCD::OPC_CheckPredicate, 0, 18, 1, // Skip to: 441
/* 167 */     MCD::OPC_Decode, 234, 1, 2, // Opcode: BteqzX16
/* 171 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 183
/* 175 */     MCD::OPC_CheckPredicate, 0, 6, 1, // Skip to: 441
/* 179 */     MCD::OPC_Decode, 241, 1, 2, // Opcode: BtnezX16
/* 183 */     MCD::OPC_FilterValue, 24, 254, 0, // Skip to: 441
/* 187 */     MCD::OPC_CheckPredicate, 0, 250, 0, // Skip to: 441
/* 191 */     MCD::OPC_Decode, 140, 1, 2, // Opcode: AddiuSpImmX16
/* 195 */     MCD::OPC_FilterValue, 8, 20, 0, // Skip to: 219
/* 199 */     MCD::OPC_CheckPredicate, 0, 238, 0, // Skip to: 441
/* 203 */     MCD::OPC_CheckField, 27, 5, 30, 232, 0, // Skip to: 441
/* 209 */     MCD::OPC_CheckField, 4, 1, 0, 226, 0, // Skip to: 441
/* 215 */     MCD::OPC_Decode, 138, 1, 9, // Opcode: AddiuRxRyOffMemX16
/* 219 */     MCD::OPC_FilterValue, 9, 20, 0, // Skip to: 243
/* 223 */     MCD::OPC_CheckPredicate, 0, 214, 0, // Skip to: 441
/* 227 */     MCD::OPC_CheckField, 27, 5, 30, 208, 0, // Skip to: 441
/* 233 */     MCD::OPC_CheckField, 5, 3, 0, 202, 0, // Skip to: 441
/* 239 */     MCD::OPC_Decode, 134, 1, 0, // Opcode: AddiuRxImmX16
/* 243 */     MCD::OPC_FilterValue, 10, 20, 0, // Skip to: 267
/* 247 */     MCD::OPC_CheckPredicate, 0, 190, 0, // Skip to: 441
/* 251 */     MCD::OPC_CheckField, 27, 5, 30, 184, 0, // Skip to: 441
/* 257 */     MCD::OPC_CheckField, 5, 3, 0, 178, 0, // Skip to: 441
/* 263 */     MCD::OPC_Decode, 237, 9, 0, // Opcode: SltiRxImmX16
/* 267 */     MCD::OPC_FilterValue, 11, 20, 0, // Skip to: 291
/* 271 */     MCD::OPC_CheckPredicate, 0, 166, 0, // Skip to: 441
/* 275 */     MCD::OPC_CheckField, 27, 5, 30, 160, 0, // Skip to: 441
/* 281 */     MCD::OPC_CheckField, 5, 3, 0, 154, 0, // Skip to: 441
/* 287 */     MCD::OPC_Decode, 240, 9, 0, // Opcode: SltiuRxImmX16
/* 291 */     MCD::OPC_FilterValue, 13, 20, 0, // Skip to: 315
/* 295 */     MCD::OPC_CheckPredicate, 0, 142, 0, // Skip to: 441
/* 299 */     MCD::OPC_CheckField, 27, 5, 30, 136, 0, // Skip to: 441
/* 305 */     MCD::OPC_CheckField, 5, 3, 0, 130, 0, // Skip to: 441
/* 311 */     MCD::OPC_Decode, 219, 5, 0, // Opcode: LiRxImmX16
/* 315 */     MCD::OPC_FilterValue, 14, 20, 0, // Skip to: 339
/* 319 */     MCD::OPC_CheckPredicate, 0, 118, 0, // Skip to: 441
/* 323 */     MCD::OPC_CheckField, 27, 5, 30, 112, 0, // Skip to: 441
/* 329 */     MCD::OPC_CheckField, 5, 3, 0, 106, 0, // Skip to: 441
/* 335 */     MCD::OPC_Decode, 249, 2, 0, // Opcode: CmpiRxImmX16
/* 339 */     MCD::OPC_FilterValue, 22, 20, 0, // Skip to: 363
/* 343 */     MCD::OPC_CheckPredicate, 0, 94, 0, // Skip to: 441
/* 347 */     MCD::OPC_CheckField, 27, 5, 30, 88, 0, // Skip to: 441
/* 353 */     MCD::OPC_CheckField, 5, 3, 0, 82, 0, // Skip to: 441
/* 359 */     MCD::OPC_Decode, 225, 5, 0, // Opcode: LwRxSpImmX16
/* 363 */     MCD::OPC_FilterValue, 24, 14, 0, // Skip to: 381
/* 367 */     MCD::OPC_CheckPredicate, 0, 70, 0, // Skip to: 441
/* 371 */     MCD::OPC_CheckField, 27, 5, 30, 64, 0, // Skip to: 441
/* 377 */     MCD::OPC_Decode, 215, 9, 9, // Opcode: SbRxRyOffMemX16
/* 381 */     MCD::OPC_FilterValue, 25, 14, 0, // Skip to: 399
/* 385 */     MCD::OPC_CheckPredicate, 0, 52, 0, // Skip to: 441
/* 389 */     MCD::OPC_CheckField, 27, 5, 30, 46, 0, // Skip to: 441
/* 395 */     MCD::OPC_Decode, 230, 9, 9, // Opcode: ShRxRyOffMemX16
/* 399 */     MCD::OPC_FilterValue, 26, 20, 0, // Skip to: 423
/* 403 */     MCD::OPC_CheckPredicate, 0, 34, 0, // Skip to: 441
/* 407 */     MCD::OPC_CheckField, 27, 5, 30, 28, 0, // Skip to: 441
/* 413 */     MCD::OPC_CheckField, 5, 3, 0, 22, 0, // Skip to: 441
/* 419 */     MCD::OPC_Decode, 250, 9, 0, // Opcode: SwRxSpImmX16
/* 423 */     MCD::OPC_FilterValue, 27, 14, 0, // Skip to: 441
/* 427 */     MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 441
/* 431 */     MCD::OPC_CheckField, 27, 5, 30, 4, 0, // Skip to: 441
/* 437 */     MCD::OPC_Decode, 249, 9, 9, // Opcode: SwRxRyOffMemX16
/* 441 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMicroMips32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 19, 1, // Skip to: 282
/* 7 */       MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 10 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 22
/* 14 */      MCD::OPC_CheckPredicate, 1, 2, 2, // Skip to: 532
/* 18 */      MCD::OPC_Decode, 201, 8, 10, // Opcode: SLL_MM
/* 22 */      MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 34
/* 26 */      MCD::OPC_CheckPredicate, 1, 246, 1, // Skip to: 532
/* 30 */      MCD::OPC_Decode, 197, 8, 11, // Opcode: SLLV_MM
/* 34 */      MCD::OPC_FilterValue, 64, 8, 0, // Skip to: 46
/* 38 */      MCD::OPC_CheckPredicate, 1, 234, 1, // Skip to: 532
/* 42 */      MCD::OPC_Decode, 138, 9, 10, // Opcode: SRL_MM
/* 46 */      MCD::OPC_FilterValue, 80, 8, 0, // Skip to: 58
/* 50 */      MCD::OPC_CheckPredicate, 1, 222, 1, // Skip to: 532
/* 54 */      MCD::OPC_Decode, 134, 9, 11, // Opcode: SRLV_MM
/* 58 */      MCD::OPC_FilterValue, 128, 1, 8, 0, // Skip to: 71
/* 63 */      MCD::OPC_CheckPredicate, 1, 209, 1, // Skip to: 532
/* 67 */      MCD::OPC_Decode, 246, 8, 10, // Opcode: SRA_MM
/* 71 */      MCD::OPC_FilterValue, 144, 1, 8, 0, // Skip to: 84
/* 76 */      MCD::OPC_CheckPredicate, 1, 196, 1, // Skip to: 532
/* 80 */      MCD::OPC_Decode, 242, 8, 11, // Opcode: SRAV_MM
/* 84 */      MCD::OPC_FilterValue, 192, 1, 8, 0, // Skip to: 97
/* 89 */      MCD::OPC_CheckPredicate, 1, 183, 1, // Skip to: 532
/* 93 */      MCD::OPC_Decode, 244, 7, 10, // Opcode: ROTR_MM
/* 97 */      MCD::OPC_FilterValue, 208, 1, 8, 0, // Skip to: 110
/* 102 */     MCD::OPC_CheckPredicate, 1, 170, 1, // Skip to: 532
/* 106 */     MCD::OPC_Decode, 243, 7, 11, // Opcode: ROTRV_MM
/* 110 */     MCD::OPC_FilterValue, 144, 2, 7, 0, // Skip to: 122
/* 115 */     MCD::OPC_CheckPredicate, 1, 157, 1, // Skip to: 532
/* 119 */     MCD::OPC_Decode, 60, 12, // Opcode: ADD_MM
/* 122 */     MCD::OPC_FilterValue, 208, 2, 7, 0, // Skip to: 134
/* 127 */     MCD::OPC_CheckPredicate, 1, 145, 1, // Skip to: 532
/* 131 */     MCD::OPC_Decode, 66, 12, // Opcode: ADDu_MM
/* 134 */     MCD::OPC_FilterValue, 144, 3, 8, 0, // Skip to: 147
/* 139 */     MCD::OPC_CheckPredicate, 1, 133, 1, // Skip to: 532
/* 143 */     MCD::OPC_Decode, 190, 9, 12, // Opcode: SUB_MM
/* 147 */     MCD::OPC_FilterValue, 208, 3, 8, 0, // Skip to: 160
/* 152 */     MCD::OPC_CheckPredicate, 1, 120, 1, // Skip to: 532
/* 156 */     MCD::OPC_Decode, 192, 9, 12, // Opcode: SUBu_MM
/* 160 */     MCD::OPC_FilterValue, 144, 4, 8, 0, // Skip to: 173
/* 165 */     MCD::OPC_CheckPredicate, 1, 107, 1, // Skip to: 532
/* 169 */     MCD::OPC_Decode, 128, 7, 12, // Opcode: MUL_MM
/* 173 */     MCD::OPC_FilterValue, 208, 4, 7, 0, // Skip to: 185
/* 178 */     MCD::OPC_CheckPredicate, 1, 94, 1, // Skip to: 532
/* 182 */     MCD::OPC_Decode, 72, 12, // Opcode: AND_MM
/* 185 */     MCD::OPC_FilterValue, 144, 5, 8, 0, // Skip to: 198
/* 190 */     MCD::OPC_CheckPredicate, 1, 82, 1, // Skip to: 532
/* 194 */     MCD::OPC_Decode, 166, 7, 12, // Opcode: OR_MM
/* 198 */     MCD::OPC_FilterValue, 208, 5, 8, 0, // Skip to: 211
/* 203 */     MCD::OPC_CheckPredicate, 1, 69, 1, // Skip to: 532
/* 207 */     MCD::OPC_Decode, 159, 7, 12, // Opcode: NOR_MM
/* 211 */     MCD::OPC_FilterValue, 144, 6, 8, 0, // Skip to: 224
/* 216 */     MCD::OPC_CheckPredicate, 1, 56, 1, // Skip to: 532
/* 220 */     MCD::OPC_Decode, 155, 10, 12, // Opcode: XOR_MM
/* 224 */     MCD::OPC_FilterValue, 188, 6, 27, 0, // Skip to: 256
/* 229 */     MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 232 */     MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 244
/* 236 */     MCD::OPC_CheckPredicate, 1, 36, 1, // Skip to: 532
/* 240 */     MCD::OPC_Decode, 249, 6, 13, // Opcode: MULT_MM
/* 244 */     MCD::OPC_FilterValue, 19, 28, 1, // Skip to: 532
/* 248 */     MCD::OPC_CheckPredicate, 1, 24, 1, // Skip to: 532
/* 252 */     MCD::OPC_Decode, 251, 6, 13, // Opcode: MULTu_MM
/* 256 */     MCD::OPC_FilterValue, 208, 6, 8, 0, // Skip to: 269
/* 261 */     MCD::OPC_CheckPredicate, 1, 11, 1, // Skip to: 532
/* 265 */     MCD::OPC_Decode, 205, 8, 12, // Opcode: SLT_MM
/* 269 */     MCD::OPC_FilterValue, 144, 7, 2, 1, // Skip to: 532
/* 274 */     MCD::OPC_CheckPredicate, 1, 254, 0, // Skip to: 532
/* 278 */     MCD::OPC_Decode, 214, 8, 12, // Opcode: SLTu_MM
/* 282 */     MCD::OPC_FilterValue, 4, 7, 0, // Skip to: 293
/* 286 */     MCD::OPC_CheckPredicate, 1, 242, 0, // Skip to: 532
/* 290 */     MCD::OPC_Decode, 62, 14, // Opcode: ADDi_MM
/* 293 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 305
/* 297 */     MCD::OPC_CheckPredicate, 1, 231, 0, // Skip to: 532
/* 301 */     MCD::OPC_Decode, 162, 5, 15, // Opcode: LBu_MM
/* 305 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 317
/* 309 */     MCD::OPC_CheckPredicate, 1, 219, 0, // Skip to: 532
/* 313 */     MCD::OPC_Decode, 136, 8, 15, // Opcode: SB_MM
/* 317 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 329
/* 321 */     MCD::OPC_CheckPredicate, 1, 207, 0, // Skip to: 532
/* 325 */     MCD::OPC_Decode, 159, 5, 15, // Opcode: LB_MM
/* 329 */     MCD::OPC_FilterValue, 12, 7, 0, // Skip to: 340
/* 333 */     MCD::OPC_CheckPredicate, 1, 195, 0, // Skip to: 532
/* 337 */     MCD::OPC_Decode, 64, 14, // Opcode: ADDiu_MM
/* 340 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 352
/* 344 */     MCD::OPC_CheckPredicate, 1, 184, 0, // Skip to: 532
/* 348 */     MCD::OPC_Decode, 189, 5, 15, // Opcode: LHu_MM
/* 352 */     MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 364
/* 356 */     MCD::OPC_CheckPredicate, 1, 172, 0, // Skip to: 532
/* 360 */     MCD::OPC_Decode, 180, 8, 15, // Opcode: SH_MM
/* 364 */     MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 376
/* 368 */     MCD::OPC_CheckPredicate, 1, 160, 0, // Skip to: 532
/* 372 */     MCD::OPC_Decode, 186, 5, 15, // Opcode: LH_MM
/* 376 */     MCD::OPC_FilterValue, 16, 14, 0, // Skip to: 394
/* 380 */     MCD::OPC_CheckPredicate, 1, 148, 0, // Skip to: 532
/* 384 */     MCD::OPC_CheckField, 21, 5, 13, 142, 0, // Skip to: 532
/* 390 */     MCD::OPC_Decode, 200, 5, 16, // Opcode: LUi_MM
/* 394 */     MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 406
/* 398 */     MCD::OPC_CheckPredicate, 1, 130, 0, // Skip to: 532
/* 402 */     MCD::OPC_Decode, 170, 7, 17, // Opcode: ORi_MM
/* 406 */     MCD::OPC_FilterValue, 24, 51, 0, // Skip to: 461
/* 410 */     MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 413 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 425
/* 417 */     MCD::OPC_CheckPredicate, 1, 111, 0, // Skip to: 532
/* 421 */     MCD::OPC_Decode, 206, 5, 18, // Opcode: LWL_MM
/* 425 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 437
/* 429 */     MCD::OPC_CheckPredicate, 1, 99, 0, // Skip to: 532
/* 433 */     MCD::OPC_Decode, 209, 5, 18, // Opcode: LWR_MM
/* 437 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 449
/* 441 */     MCD::OPC_CheckPredicate, 1, 87, 0, // Skip to: 532
/* 445 */     MCD::OPC_Decode, 200, 9, 19, // Opcode: SWL_MM
/* 449 */     MCD::OPC_FilterValue, 9, 79, 0, // Skip to: 532
/* 453 */     MCD::OPC_CheckPredicate, 1, 75, 0, // Skip to: 532
/* 457 */     MCD::OPC_Decode, 203, 9, 19, // Opcode: SWR_MM
/* 461 */     MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 473
/* 465 */     MCD::OPC_CheckPredicate, 1, 63, 0, // Skip to: 532
/* 469 */     MCD::OPC_Decode, 159, 10, 17, // Opcode: XORi_MM
/* 473 */     MCD::OPC_FilterValue, 36, 8, 0, // Skip to: 485
/* 477 */     MCD::OPC_CheckPredicate, 1, 51, 0, // Skip to: 532
/* 481 */     MCD::OPC_Decode, 208, 8, 20, // Opcode: SLTi_MM
/* 485 */     MCD::OPC_FilterValue, 44, 8, 0, // Skip to: 497
/* 489 */     MCD::OPC_CheckPredicate, 1, 39, 0, // Skip to: 532
/* 493 */     MCD::OPC_Decode, 211, 8, 20, // Opcode: SLTiu_MM
/* 497 */     MCD::OPC_FilterValue, 52, 7, 0, // Skip to: 508
/* 501 */     MCD::OPC_CheckPredicate, 1, 27, 0, // Skip to: 532
/* 505 */     MCD::OPC_Decode, 76, 17, // Opcode: ANDi_MM
/* 508 */     MCD::OPC_FilterValue, 62, 8, 0, // Skip to: 520
/* 512 */     MCD::OPC_CheckPredicate, 1, 16, 0, // Skip to: 532
/* 516 */     MCD::OPC_Decode, 205, 9, 15, // Opcode: SW_MM
/* 520 */     MCD::OPC_FilterValue, 63, 8, 0, // Skip to: 532
/* 524 */     MCD::OPC_CheckPredicate, 1, 4, 0, // Skip to: 532
/* 528 */     MCD::OPC_Decode, 212, 5, 15, // Opcode: LW_MM
/* 532 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 65, 3, // Skip to: 840
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 28
/* 14 */      MCD::OPC_CheckPredicate, 2, 15, 49, // Skip to: 12577
/* 18 */      MCD::OPC_CheckField, 21, 5, 0, 9, 49, // Skip to: 12577
/* 24 */      MCD::OPC_Decode, 189, 8, 21, // Opcode: SLL
/* 28 */      MCD::OPC_FilterValue, 1, 39, 0, // Skip to: 71
/* 32 */      MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 35 */      MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 53
/* 39 */      MCD::OPC_CheckPredicate, 2, 246, 48, // Skip to: 12577
/* 43 */      MCD::OPC_CheckField, 6, 5, 0, 240, 48, // Skip to: 12577
/* 49 */      MCD::OPC_Decode, 181, 6, 22, // Opcode: MOVF_I
/* 53 */      MCD::OPC_FilterValue, 1, 232, 48, // Skip to: 12577
/* 57 */      MCD::OPC_CheckPredicate, 2, 228, 48, // Skip to: 12577
/* 61 */      MCD::OPC_CheckField, 6, 5, 0, 222, 48, // Skip to: 12577
/* 67 */      MCD::OPC_Decode, 195, 6, 22, // Opcode: MOVT_I
/* 71 */      MCD::OPC_FilterValue, 2, 27, 0, // Skip to: 102
/* 75 */      MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 78 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 90
/* 82 */      MCD::OPC_CheckPredicate, 2, 203, 48, // Skip to: 12577
/* 86 */      MCD::OPC_Decode, 248, 8, 21, // Opcode: SRL
/* 90 */      MCD::OPC_FilterValue, 1, 195, 48, // Skip to: 12577
/* 94 */      MCD::OPC_CheckPredicate, 3, 191, 48, // Skip to: 12577
/* 98 */      MCD::OPC_Decode, 241, 7, 21, // Opcode: ROTR
/* 102 */     MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 120
/* 106 */     MCD::OPC_CheckPredicate, 2, 179, 48, // Skip to: 12577
/* 110 */     MCD::OPC_CheckField, 21, 5, 0, 173, 48, // Skip to: 12577
/* 116 */     MCD::OPC_Decode, 228, 8, 21, // Opcode: SRA
/* 120 */     MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 138
/* 124 */     MCD::OPC_CheckPredicate, 2, 161, 48, // Skip to: 12577
/* 128 */     MCD::OPC_CheckField, 6, 5, 0, 155, 48, // Skip to: 12577
/* 134 */     MCD::OPC_Decode, 196, 8, 12, // Opcode: SLLV
/* 138 */     MCD::OPC_FilterValue, 6, 27, 0, // Skip to: 169
/* 142 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 145 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 157
/* 149 */     MCD::OPC_CheckPredicate, 2, 136, 48, // Skip to: 12577
/* 153 */     MCD::OPC_Decode, 133, 9, 12, // Opcode: SRLV
/* 157 */     MCD::OPC_FilterValue, 1, 128, 48, // Skip to: 12577
/* 161 */     MCD::OPC_CheckPredicate, 3, 124, 48, // Skip to: 12577
/* 165 */     MCD::OPC_Decode, 242, 7, 12, // Opcode: ROTRV
/* 169 */     MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 187
/* 173 */     MCD::OPC_CheckPredicate, 2, 112, 48, // Skip to: 12577
/* 177 */     MCD::OPC_CheckField, 6, 5, 0, 106, 48, // Skip to: 12577
/* 183 */     MCD::OPC_Decode, 241, 8, 12, // Opcode: SRAV
/* 187 */     MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 205
/* 191 */     MCD::OPC_CheckPredicate, 2, 94, 48, // Skip to: 12577
/* 195 */     MCD::OPC_CheckField, 6, 15, 0, 88, 48, // Skip to: 12577
/* 201 */     MCD::OPC_Decode, 149, 5, 23, // Opcode: JR
/* 205 */     MCD::OPC_FilterValue, 9, 20, 0, // Skip to: 229
/* 209 */     MCD::OPC_CheckPredicate, 2, 76, 48, // Skip to: 12577
/* 213 */     MCD::OPC_CheckField, 16, 5, 0, 70, 48, // Skip to: 12577
/* 219 */     MCD::OPC_CheckField, 6, 5, 0, 64, 48, // Skip to: 12577
/* 225 */     MCD::OPC_Decode, 145, 5, 24, // Opcode: JALR
/* 229 */     MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 247
/* 233 */     MCD::OPC_CheckPredicate, 2, 52, 48, // Skip to: 12577
/* 237 */     MCD::OPC_CheckField, 6, 5, 0, 46, 48, // Skip to: 12577
/* 243 */     MCD::OPC_Decode, 204, 6, 25, // Opcode: MOVZ_I_I
/* 247 */     MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 265
/* 251 */     MCD::OPC_CheckPredicate, 2, 34, 48, // Skip to: 12577
/* 255 */     MCD::OPC_CheckField, 6, 5, 0, 28, 48, // Skip to: 12577
/* 261 */     MCD::OPC_Decode, 190, 6, 25, // Opcode: MOVN_I_I
/* 265 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 277
/* 269 */     MCD::OPC_CheckPredicate, 2, 16, 48, // Skip to: 12577
/* 273 */     MCD::OPC_Decode, 207, 9, 26, // Opcode: SYSCALL
/* 277 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 289
/* 281 */     MCD::OPC_CheckPredicate, 2, 4, 48, // Skip to: 12577
/* 285 */     MCD::OPC_Decode, 206, 1, 27, // Opcode: BREAK
/* 289 */     MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 301
/* 293 */     MCD::OPC_CheckPredicate, 2, 248, 47, // Skip to: 12577
/* 297 */     MCD::OPC_Decode, 206, 9, 28, // Opcode: SYNC
/* 301 */     MCD::OPC_FilterValue, 16, 43, 0, // Skip to: 348
/* 305 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 308 */     MCD::OPC_FilterValue, 0, 233, 47, // Skip to: 12577
/* 312 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 315 */     MCD::OPC_FilterValue, 0, 226, 47, // Skip to: 12577
/* 319 */     MCD::OPC_ExtractField, 23, 3,  // Inst{25-23} ...
/* 322 */     MCD::OPC_FilterValue, 0, 219, 47, // Skip to: 12577
/* 326 */     MCD::OPC_CheckPredicate, 2, 10, 0, // Skip to: 340
/* 330 */     MCD::OPC_CheckField, 21, 2, 0, 4, 0, // Skip to: 340
/* 336 */     MCD::OPC_Decode, 141, 6, 29, // Opcode: MFHI
/* 340 */     MCD::OPC_CheckPredicate, 4, 201, 47, // Skip to: 12577
/* 344 */     MCD::OPC_Decode, 143, 6, 30, // Opcode: MFHI_DSP
/* 348 */     MCD::OPC_FilterValue, 17, 36, 0, // Skip to: 388
/* 352 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 355 */     MCD::OPC_FilterValue, 0, 186, 47, // Skip to: 12577
/* 359 */     MCD::OPC_ExtractField, 13, 8,  // Inst{20-13} ...
/* 362 */     MCD::OPC_FilterValue, 0, 179, 47, // Skip to: 12577
/* 366 */     MCD::OPC_CheckPredicate, 2, 10, 0, // Skip to: 380
/* 370 */     MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 380
/* 376 */     MCD::OPC_Decode, 226, 6, 23, // Opcode: MTHI
/* 380 */     MCD::OPC_CheckPredicate, 4, 161, 47, // Skip to: 12577
/* 384 */     MCD::OPC_Decode, 228, 6, 31, // Opcode: MTHI_DSP
/* 388 */     MCD::OPC_FilterValue, 18, 43, 0, // Skip to: 435
/* 392 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 395 */     MCD::OPC_FilterValue, 0, 146, 47, // Skip to: 12577
/* 399 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 402 */     MCD::OPC_FilterValue, 0, 139, 47, // Skip to: 12577
/* 406 */     MCD::OPC_ExtractField, 23, 3,  // Inst{25-23} ...
/* 409 */     MCD::OPC_FilterValue, 0, 132, 47, // Skip to: 12577
/* 413 */     MCD::OPC_CheckPredicate, 2, 10, 0, // Skip to: 427
/* 417 */     MCD::OPC_CheckField, 21, 2, 0, 4, 0, // Skip to: 427
/* 423 */     MCD::OPC_Decode, 144, 6, 29, // Opcode: MFLO
/* 427 */     MCD::OPC_CheckPredicate, 4, 114, 47, // Skip to: 12577
/* 431 */     MCD::OPC_Decode, 146, 6, 32, // Opcode: MFLO_DSP
/* 435 */     MCD::OPC_FilterValue, 19, 36, 0, // Skip to: 475
/* 439 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 442 */     MCD::OPC_FilterValue, 0, 99, 47, // Skip to: 12577
/* 446 */     MCD::OPC_ExtractField, 13, 8,  // Inst{20-13} ...
/* 449 */     MCD::OPC_FilterValue, 0, 92, 47, // Skip to: 12577
/* 453 */     MCD::OPC_CheckPredicate, 2, 10, 0, // Skip to: 467
/* 457 */     MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 467
/* 463 */     MCD::OPC_Decode, 230, 6, 23, // Opcode: MTLO
/* 467 */     MCD::OPC_CheckPredicate, 4, 74, 47, // Skip to: 12577
/* 471 */     MCD::OPC_Decode, 232, 6, 33, // Opcode: MTLO_DSP
/* 475 */     MCD::OPC_FilterValue, 24, 36, 0, // Skip to: 515
/* 479 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 482 */     MCD::OPC_FilterValue, 0, 59, 47, // Skip to: 12577
/* 486 */     MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 489 */     MCD::OPC_FilterValue, 0, 52, 47, // Skip to: 12577
/* 493 */     MCD::OPC_CheckPredicate, 2, 10, 0, // Skip to: 507
/* 497 */     MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 507
/* 503 */     MCD::OPC_Decode, 246, 6, 34, // Opcode: MULT
/* 507 */     MCD::OPC_CheckPredicate, 4, 34, 47, // Skip to: 12577
/* 511 */     MCD::OPC_Decode, 248, 6, 35, // Opcode: MULT_DSP
/* 515 */     MCD::OPC_FilterValue, 25, 36, 0, // Skip to: 555
/* 519 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 522 */     MCD::OPC_FilterValue, 0, 19, 47, // Skip to: 12577
/* 526 */     MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 529 */     MCD::OPC_FilterValue, 0, 12, 47, // Skip to: 12577
/* 533 */     MCD::OPC_CheckPredicate, 2, 10, 0, // Skip to: 547
/* 537 */     MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 547
/* 543 */     MCD::OPC_Decode, 250, 6, 34, // Opcode: MULTu
/* 547 */     MCD::OPC_CheckPredicate, 4, 250, 46, // Skip to: 12577
/* 551 */     MCD::OPC_Decode, 247, 6, 35, // Opcode: MULTU_DSP
/* 555 */     MCD::OPC_FilterValue, 26, 14, 0, // Skip to: 573
/* 559 */     MCD::OPC_CheckPredicate, 2, 238, 46, // Skip to: 12577
/* 563 */     MCD::OPC_CheckField, 6, 10, 0, 232, 46, // Skip to: 12577
/* 569 */     MCD::OPC_Decode, 142, 8, 34, // Opcode: SDIV
/* 573 */     MCD::OPC_FilterValue, 27, 14, 0, // Skip to: 591
/* 577 */     MCD::OPC_CheckPredicate, 2, 220, 46, // Skip to: 12577
/* 581 */     MCD::OPC_CheckField, 6, 10, 0, 214, 46, // Skip to: 12577
/* 587 */     MCD::OPC_Decode, 144, 10, 34, // Opcode: UDIV
/* 591 */     MCD::OPC_FilterValue, 32, 13, 0, // Skip to: 608
/* 595 */     MCD::OPC_CheckPredicate, 2, 202, 46, // Skip to: 12577
/* 599 */     MCD::OPC_CheckField, 6, 5, 0, 196, 46, // Skip to: 12577
/* 605 */     MCD::OPC_Decode, 20, 11, // Opcode: ADD
/* 608 */     MCD::OPC_FilterValue, 33, 13, 0, // Skip to: 625
/* 612 */     MCD::OPC_CheckPredicate, 2, 185, 46, // Skip to: 12577
/* 616 */     MCD::OPC_CheckField, 6, 5, 0, 179, 46, // Skip to: 12577
/* 622 */     MCD::OPC_Decode, 65, 11, // Opcode: ADDu
/* 625 */     MCD::OPC_FilterValue, 34, 14, 0, // Skip to: 643
/* 629 */     MCD::OPC_CheckPredicate, 2, 168, 46, // Skip to: 12577
/* 633 */     MCD::OPC_CheckField, 6, 5, 0, 162, 46, // Skip to: 12577
/* 639 */     MCD::OPC_Decode, 152, 9, 11, // Opcode: SUB
/* 643 */     MCD::OPC_FilterValue, 35, 14, 0, // Skip to: 661
/* 647 */     MCD::OPC_CheckPredicate, 2, 150, 46, // Skip to: 12577
/* 651 */     MCD::OPC_CheckField, 6, 5, 0, 144, 46, // Skip to: 12577
/* 657 */     MCD::OPC_Decode, 191, 9, 11, // Opcode: SUBu
/* 661 */     MCD::OPC_FilterValue, 36, 13, 0, // Skip to: 678
/* 665 */     MCD::OPC_CheckPredicate, 2, 132, 46, // Skip to: 12577
/* 669 */     MCD::OPC_CheckField, 6, 5, 0, 126, 46, // Skip to: 12577
/* 675 */     MCD::OPC_Decode, 69, 11, // Opcode: AND
/* 678 */     MCD::OPC_FilterValue, 37, 14, 0, // Skip to: 696
/* 682 */     MCD::OPC_CheckPredicate, 2, 115, 46, // Skip to: 12577
/* 686 */     MCD::OPC_CheckField, 6, 5, 0, 109, 46, // Skip to: 12577
/* 692 */     MCD::OPC_Decode, 163, 7, 11, // Opcode: OR
/* 696 */     MCD::OPC_FilterValue, 38, 14, 0, // Skip to: 714
/* 700 */     MCD::OPC_CheckPredicate, 2, 97, 46, // Skip to: 12577
/* 704 */     MCD::OPC_CheckField, 6, 5, 0, 91, 46, // Skip to: 12577
/* 710 */     MCD::OPC_Decode, 152, 10, 11, // Opcode: XOR
/* 714 */     MCD::OPC_FilterValue, 39, 14, 0, // Skip to: 732
/* 718 */     MCD::OPC_CheckPredicate, 2, 79, 46, // Skip to: 12577
/* 722 */     MCD::OPC_CheckField, 6, 5, 0, 73, 46, // Skip to: 12577
/* 728 */     MCD::OPC_Decode, 156, 7, 11, // Opcode: NOR
/* 732 */     MCD::OPC_FilterValue, 42, 14, 0, // Skip to: 750
/* 736 */     MCD::OPC_CheckPredicate, 2, 61, 46, // Skip to: 12577
/* 740 */     MCD::OPC_CheckField, 6, 5, 0, 55, 46, // Skip to: 12577
/* 746 */     MCD::OPC_Decode, 203, 8, 11, // Opcode: SLT
/* 750 */     MCD::OPC_FilterValue, 43, 14, 0, // Skip to: 768
/* 754 */     MCD::OPC_CheckPredicate, 2, 43, 46, // Skip to: 12577
/* 758 */     MCD::OPC_CheckField, 6, 5, 0, 37, 46, // Skip to: 12577
/* 764 */     MCD::OPC_Decode, 212, 8, 11, // Opcode: SLTu
/* 768 */     MCD::OPC_FilterValue, 48, 8, 0, // Skip to: 780
/* 772 */     MCD::OPC_CheckPredicate, 2, 25, 46, // Skip to: 12577
/* 776 */     MCD::OPC_Decode, 128, 10, 36, // Opcode: TGE
/* 780 */     MCD::OPC_FilterValue, 49, 8, 0, // Skip to: 792
/* 784 */     MCD::OPC_CheckPredicate, 2, 13, 46, // Skip to: 12577
/* 788 */     MCD::OPC_Decode, 131, 10, 36, // Opcode: TGEU
/* 792 */     MCD::OPC_FilterValue, 50, 8, 0, // Skip to: 804
/* 796 */     MCD::OPC_CheckPredicate, 2, 1, 46, // Skip to: 12577
/* 800 */     MCD::OPC_Decode, 132, 10, 36, // Opcode: TLT
/* 804 */     MCD::OPC_FilterValue, 51, 8, 0, // Skip to: 816
/* 808 */     MCD::OPC_CheckPredicate, 2, 245, 45, // Skip to: 12577
/* 812 */     MCD::OPC_Decode, 134, 10, 36, // Opcode: TLTU
/* 816 */     MCD::OPC_FilterValue, 52, 8, 0, // Skip to: 828
/* 820 */     MCD::OPC_CheckPredicate, 2, 233, 45, // Skip to: 12577
/* 824 */     MCD::OPC_Decode, 254, 9, 36, // Opcode: TEQ
/* 828 */     MCD::OPC_FilterValue, 54, 225, 45, // Skip to: 12577
/* 832 */     MCD::OPC_CheckPredicate, 2, 221, 45, // Skip to: 12577
/* 836 */     MCD::OPC_Decode, 135, 10, 36, // Opcode: TNE
/* 840 */     MCD::OPC_FilterValue, 1, 141, 0, // Skip to: 985
/* 844 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 847 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 859
/* 851 */     MCD::OPC_CheckPredicate, 2, 202, 45, // Skip to: 12577
/* 855 */     MCD::OPC_Decode, 182, 1, 37, // Opcode: BLTZ
/* 859 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 871
/* 863 */     MCD::OPC_CheckPredicate, 2, 190, 45, // Skip to: 12577
/* 867 */     MCD::OPC_Decode, 158, 1, 37, // Opcode: BGEZ
/* 871 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 883
/* 875 */     MCD::OPC_CheckPredicate, 2, 178, 45, // Skip to: 12577
/* 879 */     MCD::OPC_Decode, 129, 10, 38, // Opcode: TGEI
/* 883 */     MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 895
/* 887 */     MCD::OPC_CheckPredicate, 2, 166, 45, // Skip to: 12577
/* 891 */     MCD::OPC_Decode, 130, 10, 38, // Opcode: TGEIU
/* 895 */     MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 907
/* 899 */     MCD::OPC_CheckPredicate, 2, 154, 45, // Skip to: 12577
/* 903 */     MCD::OPC_Decode, 133, 10, 38, // Opcode: TLTI
/* 907 */     MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 919
/* 911 */     MCD::OPC_CheckPredicate, 2, 142, 45, // Skip to: 12577
/* 915 */     MCD::OPC_Decode, 143, 10, 38, // Opcode: TTLTIU
/* 919 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 931
/* 923 */     MCD::OPC_CheckPredicate, 2, 130, 45, // Skip to: 12577
/* 927 */     MCD::OPC_Decode, 255, 9, 38, // Opcode: TEQI
/* 931 */     MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 943
/* 935 */     MCD::OPC_CheckPredicate, 2, 118, 45, // Skip to: 12577
/* 939 */     MCD::OPC_Decode, 136, 10, 38, // Opcode: TNEI
/* 943 */     MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 955
/* 947 */     MCD::OPC_CheckPredicate, 2, 106, 45, // Skip to: 12577
/* 951 */     MCD::OPC_Decode, 184, 1, 37, // Opcode: BLTZAL
/* 955 */     MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 967
/* 959 */     MCD::OPC_CheckPredicate, 2, 94, 45, // Skip to: 12577
/* 963 */     MCD::OPC_Decode, 160, 1, 37, // Opcode: BGEZAL
/* 967 */     MCD::OPC_FilterValue, 28, 86, 45, // Skip to: 12577
/* 971 */     MCD::OPC_CheckPredicate, 4, 82, 45, // Skip to: 12577
/* 975 */     MCD::OPC_CheckField, 21, 5, 0, 76, 45, // Skip to: 12577
/* 981 */     MCD::OPC_Decode, 204, 1, 39, // Opcode: BPOSGE32
/* 985 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 997
/* 989 */     MCD::OPC_CheckPredicate, 5, 64, 45, // Skip to: 12577
/* 993 */     MCD::OPC_Decode, 143, 5, 40, // Opcode: J
/* 997 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1009
/* 1001 */    MCD::OPC_CheckPredicate, 2, 52, 45, // Skip to: 12577
/* 1005 */    MCD::OPC_Decode, 144, 5, 40, // Opcode: JAL
/* 1009 */    MCD::OPC_FilterValue, 4, 22, 0, // Skip to: 1035
/* 1013 */    MCD::OPC_CheckPredicate, 5, 10, 0, // Skip to: 1027
/* 1017 */    MCD::OPC_CheckField, 16, 10, 0, 4, 0, // Skip to: 1027
/* 1023 */    MCD::OPC_Decode, 143, 1, 39, // Opcode: B
/* 1027 */    MCD::OPC_CheckPredicate, 2, 26, 45, // Skip to: 12577
/* 1031 */    MCD::OPC_Decode, 156, 1, 41, // Opcode: BEQ
/* 1035 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 1047
/* 1039 */    MCD::OPC_CheckPredicate, 2, 14, 45, // Skip to: 12577
/* 1043 */    MCD::OPC_Decode, 189, 1, 41, // Opcode: BNE
/* 1047 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 1065
/* 1051 */    MCD::OPC_CheckPredicate, 2, 2, 45, // Skip to: 12577
/* 1055 */    MCD::OPC_CheckField, 16, 5, 0, 252, 44, // Skip to: 12577
/* 1061 */    MCD::OPC_Decode, 180, 1, 37, // Opcode: BLEZ
/* 1065 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 1083
/* 1069 */    MCD::OPC_CheckPredicate, 2, 240, 44, // Skip to: 12577
/* 1073 */    MCD::OPC_CheckField, 16, 5, 0, 234, 44, // Skip to: 12577
/* 1079 */    MCD::OPC_Decode, 161, 1, 37, // Opcode: BGTZ
/* 1083 */    MCD::OPC_FilterValue, 8, 7, 0, // Skip to: 1094
/* 1087 */    MCD::OPC_CheckPredicate, 2, 222, 44, // Skip to: 12577
/* 1091 */    MCD::OPC_Decode, 61, 20, // Opcode: ADDi
/* 1094 */    MCD::OPC_FilterValue, 9, 7, 0, // Skip to: 1105
/* 1098 */    MCD::OPC_CheckPredicate, 2, 211, 44, // Skip to: 12577
/* 1102 */    MCD::OPC_Decode, 63, 20, // Opcode: ADDiu
/* 1105 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 1117
/* 1109 */    MCD::OPC_CheckPredicate, 2, 200, 44, // Skip to: 12577
/* 1113 */    MCD::OPC_Decode, 206, 8, 20, // Opcode: SLTi
/* 1117 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1129
/* 1121 */    MCD::OPC_CheckPredicate, 2, 188, 44, // Skip to: 12577
/* 1125 */    MCD::OPC_Decode, 209, 8, 20, // Opcode: SLTiu
/* 1129 */    MCD::OPC_FilterValue, 12, 7, 0, // Skip to: 1140
/* 1133 */    MCD::OPC_CheckPredicate, 2, 176, 44, // Skip to: 12577
/* 1137 */    MCD::OPC_Decode, 74, 42, // Opcode: ANDi
/* 1140 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 1152
/* 1144 */    MCD::OPC_CheckPredicate, 2, 165, 44, // Skip to: 12577
/* 1148 */    MCD::OPC_Decode, 168, 7, 42, // Opcode: ORi
/* 1152 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 1164
/* 1156 */    MCD::OPC_CheckPredicate, 2, 153, 44, // Skip to: 12577
/* 1160 */    MCD::OPC_Decode, 157, 10, 42, // Opcode: XORi
/* 1164 */    MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 1182
/* 1168 */    MCD::OPC_CheckPredicate, 2, 141, 44, // Skip to: 12577
/* 1172 */    MCD::OPC_CheckField, 21, 5, 0, 135, 44, // Skip to: 12577
/* 1178 */    MCD::OPC_Decode, 198, 5, 16, // Opcode: LUi
/* 1182 */    MCD::OPC_FilterValue, 16, 117, 0, // Skip to: 1303
/* 1186 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1189 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 1207
/* 1193 */    MCD::OPC_CheckPredicate, 2, 116, 44, // Skip to: 12577
/* 1197 */    MCD::OPC_CheckField, 3, 8, 0, 110, 44, // Skip to: 12577
/* 1203 */    MCD::OPC_Decode, 137, 6, 43, // Opcode: MFC0
/* 1207 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 1225
/* 1211 */    MCD::OPC_CheckPredicate, 2, 98, 44, // Skip to: 12577
/* 1215 */    MCD::OPC_CheckField, 3, 8, 0, 92, 44, // Skip to: 12577
/* 1221 */    MCD::OPC_Decode, 222, 6, 43, // Opcode: MTC0
/* 1225 */    MCD::OPC_FilterValue, 11, 31, 0, // Skip to: 1260
/* 1229 */    MCD::OPC_ExtractField, 0, 16,  // Inst{15-0} ...
/* 1232 */    MCD::OPC_FilterValue, 128, 192, 1, 8, 0, // Skip to: 1246
/* 1238 */    MCD::OPC_CheckPredicate, 2, 71, 44, // Skip to: 12577
/* 1242 */    MCD::OPC_Decode, 133, 3, 44, // Opcode: DI
/* 1246 */    MCD::OPC_FilterValue, 160, 192, 1, 61, 44, // Skip to: 12577
/* 1252 */    MCD::OPC_CheckPredicate, 2, 57, 44, // Skip to: 12577
/* 1256 */    MCD::OPC_Decode, 208, 3, 44, // Opcode: EI
/* 1260 */    MCD::OPC_FilterValue, 16, 49, 44, // Skip to: 12577
/* 1264 */    MCD::OPC_ExtractField, 0, 21,  // Inst{20-0} ...
/* 1267 */    MCD::OPC_FilterValue, 24, 8, 0, // Skip to: 1279
/* 1271 */    MCD::OPC_CheckPredicate, 2, 38, 44, // Skip to: 12577
/* 1275 */    MCD::OPC_Decode, 209, 3, 2, // Opcode: ERET
/* 1279 */    MCD::OPC_FilterValue, 31, 8, 0, // Skip to: 1291
/* 1283 */    MCD::OPC_CheckPredicate, 2, 26, 44, // Skip to: 12577
/* 1287 */    MCD::OPC_Decode, 129, 3, 2, // Opcode: DERET
/* 1291 */    MCD::OPC_FilterValue, 32, 18, 44, // Skip to: 12577
/* 1295 */    MCD::OPC_CheckPredicate, 2, 14, 44, // Skip to: 12577
/* 1299 */    MCD::OPC_Decode, 149, 10, 2, // Opcode: WAIT
/* 1303 */    MCD::OPC_FilterValue, 17, 133, 5, // Skip to: 2720
/* 1307 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1310 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 1328
/* 1314 */    MCD::OPC_CheckPredicate, 2, 251, 43, // Skip to: 12577
/* 1318 */    MCD::OPC_CheckField, 0, 11, 0, 245, 43, // Skip to: 12577
/* 1324 */    MCD::OPC_Decode, 138, 6, 45, // Opcode: MFC1
/* 1328 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 1346
/* 1332 */    MCD::OPC_CheckPredicate, 2, 233, 43, // Skip to: 12577
/* 1336 */    MCD::OPC_CheckField, 0, 11, 0, 227, 43, // Skip to: 12577
/* 1342 */    MCD::OPC_Decode, 146, 3, 46, // Opcode: DMFC1
/* 1346 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 1364
/* 1350 */    MCD::OPC_CheckPredicate, 2, 215, 43, // Skip to: 12577
/* 1354 */    MCD::OPC_CheckField, 0, 11, 0, 209, 43, // Skip to: 12577
/* 1360 */    MCD::OPC_Decode, 129, 2, 47, // Opcode: CFC1
/* 1364 */    MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 1382
/* 1368 */    MCD::OPC_CheckPredicate, 2, 197, 43, // Skip to: 12577
/* 1372 */    MCD::OPC_CheckField, 0, 11, 0, 191, 43, // Skip to: 12577
/* 1378 */    MCD::OPC_Decode, 140, 6, 48, // Opcode: MFHC1
/* 1382 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 1400
/* 1386 */    MCD::OPC_CheckPredicate, 2, 179, 43, // Skip to: 12577
/* 1390 */    MCD::OPC_CheckField, 0, 11, 0, 173, 43, // Skip to: 12577
/* 1396 */    MCD::OPC_Decode, 223, 6, 49, // Opcode: MTC1
/* 1400 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 1418
/* 1404 */    MCD::OPC_CheckPredicate, 2, 161, 43, // Skip to: 12577
/* 1408 */    MCD::OPC_CheckField, 0, 11, 0, 155, 43, // Skip to: 12577
/* 1414 */    MCD::OPC_Decode, 149, 3, 50, // Opcode: DMTC1
/* 1418 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 1436
/* 1422 */    MCD::OPC_CheckPredicate, 2, 143, 43, // Skip to: 12577
/* 1426 */    MCD::OPC_CheckField, 0, 11, 0, 137, 43, // Skip to: 12577
/* 1432 */    MCD::OPC_Decode, 183, 2, 51, // Opcode: CTC1
/* 1436 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 1454
/* 1440 */    MCD::OPC_CheckPredicate, 2, 125, 43, // Skip to: 12577
/* 1444 */    MCD::OPC_CheckField, 0, 11, 0, 119, 43, // Skip to: 12577
/* 1450 */    MCD::OPC_Decode, 225, 6, 52, // Opcode: MTHC1
/* 1454 */    MCD::OPC_FilterValue, 8, 27, 0, // Skip to: 1485
/* 1458 */    MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 1461 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1473
/* 1465 */    MCD::OPC_CheckPredicate, 2, 100, 43, // Skip to: 12577
/* 1469 */    MCD::OPC_Decode, 146, 1, 53, // Opcode: BC1F
/* 1473 */    MCD::OPC_FilterValue, 1, 92, 43, // Skip to: 12577
/* 1477 */    MCD::OPC_CheckPredicate, 2, 88, 43, // Skip to: 12577
/* 1481 */    MCD::OPC_Decode, 147, 1, 53, // Opcode: BC1T
/* 1485 */    MCD::OPC_FilterValue, 16, 80, 2, // Skip to: 2081
/* 1489 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1492 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1504
/* 1496 */    MCD::OPC_CheckPredicate, 2, 69, 43, // Skip to: 12577
/* 1500 */    MCD::OPC_Decode, 231, 3, 54, // Opcode: FADD_S
/* 1504 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1516
/* 1508 */    MCD::OPC_CheckPredicate, 2, 57, 43, // Skip to: 12577
/* 1512 */    MCD::OPC_Decode, 212, 4, 54, // Opcode: FSUB_S
/* 1516 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1528
/* 1520 */    MCD::OPC_CheckPredicate, 2, 45, 43, // Skip to: 12577
/* 1524 */    MCD::OPC_Decode, 181, 4, 54, // Opcode: FMUL_S
/* 1528 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1540
/* 1532 */    MCD::OPC_CheckPredicate, 2, 33, 43, // Skip to: 12577
/* 1536 */    MCD::OPC_Decode, 135, 4, 54, // Opcode: FDIV_S
/* 1540 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 1558
/* 1544 */    MCD::OPC_CheckPredicate, 2, 21, 43, // Skip to: 12577
/* 1548 */    MCD::OPC_CheckField, 16, 5, 0, 15, 43, // Skip to: 12577
/* 1554 */    MCD::OPC_Decode, 207, 4, 55, // Opcode: FSQRT_S
/* 1558 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 1576
/* 1562 */    MCD::OPC_CheckPredicate, 5, 3, 43, // Skip to: 12577
/* 1566 */    MCD::OPC_CheckField, 16, 5, 0, 253, 42, // Skip to: 12577
/* 1572 */    MCD::OPC_Decode, 227, 3, 55, // Opcode: FABS_S
/* 1576 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 1594
/* 1580 */    MCD::OPC_CheckPredicate, 2, 241, 42, // Skip to: 12577
/* 1584 */    MCD::OPC_CheckField, 16, 5, 0, 235, 42, // Skip to: 12577
/* 1590 */    MCD::OPC_Decode, 175, 4, 55, // Opcode: FMOV_S
/* 1594 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 1612
/* 1598 */    MCD::OPC_CheckPredicate, 5, 223, 42, // Skip to: 12577
/* 1602 */    MCD::OPC_CheckField, 16, 5, 0, 217, 42, // Skip to: 12577
/* 1608 */    MCD::OPC_Decode, 185, 4, 55, // Opcode: FNEG_S
/* 1612 */    MCD::OPC_FilterValue, 12, 14, 0, // Skip to: 1630
/* 1616 */    MCD::OPC_CheckPredicate, 2, 205, 42, // Skip to: 12577
/* 1620 */    MCD::OPC_CheckField, 16, 5, 0, 199, 42, // Skip to: 12577
/* 1626 */    MCD::OPC_Decode, 249, 7, 55, // Opcode: ROUND_W_S
/* 1630 */    MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 1648
/* 1634 */    MCD::OPC_CheckPredicate, 2, 187, 42, // Skip to: 12577
/* 1638 */    MCD::OPC_CheckField, 16, 5, 0, 181, 42, // Skip to: 12577
/* 1644 */    MCD::OPC_Decode, 142, 10, 55, // Opcode: TRUNC_W_S
/* 1648 */    MCD::OPC_FilterValue, 14, 14, 0, // Skip to: 1666
/* 1652 */    MCD::OPC_CheckPredicate, 2, 169, 42, // Skip to: 12577
/* 1656 */    MCD::OPC_CheckField, 16, 5, 0, 163, 42, // Skip to: 12577
/* 1662 */    MCD::OPC_Decode, 248, 1, 55, // Opcode: CEIL_W_S
/* 1666 */    MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 1684
/* 1670 */    MCD::OPC_CheckPredicate, 2, 151, 42, // Skip to: 12577
/* 1674 */    MCD::OPC_CheckField, 16, 5, 0, 145, 42, // Skip to: 12577
/* 1680 */    MCD::OPC_Decode, 162, 4, 55, // Opcode: FLOOR_W_S
/* 1684 */    MCD::OPC_FilterValue, 17, 27, 0, // Skip to: 1715
/* 1688 */    MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 1691 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1703
/* 1695 */    MCD::OPC_CheckPredicate, 2, 126, 42, // Skip to: 12577
/* 1699 */    MCD::OPC_Decode, 183, 6, 56, // Opcode: MOVF_S
/* 1703 */    MCD::OPC_FilterValue, 1, 118, 42, // Skip to: 12577
/* 1707 */    MCD::OPC_CheckPredicate, 2, 114, 42, // Skip to: 12577
/* 1711 */    MCD::OPC_Decode, 197, 6, 56, // Opcode: MOVT_S
/* 1715 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 1727
/* 1719 */    MCD::OPC_CheckPredicate, 2, 102, 42, // Skip to: 12577
/* 1723 */    MCD::OPC_Decode, 206, 6, 57, // Opcode: MOVZ_I_S
/* 1727 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 1739
/* 1731 */    MCD::OPC_CheckPredicate, 2, 90, 42, // Skip to: 12577
/* 1735 */    MCD::OPC_Decode, 192, 6, 57, // Opcode: MOVN_I_S
/* 1739 */    MCD::OPC_FilterValue, 33, 14, 0, // Skip to: 1757
/* 1743 */    MCD::OPC_CheckPredicate, 6, 78, 42, // Skip to: 12577
/* 1747 */    MCD::OPC_CheckField, 16, 5, 0, 72, 42, // Skip to: 12577
/* 1753 */    MCD::OPC_Decode, 185, 2, 58, // Opcode: CVT_D32_S
/* 1757 */    MCD::OPC_FilterValue, 36, 14, 0, // Skip to: 1775
/* 1761 */    MCD::OPC_CheckPredicate, 2, 60, 42, // Skip to: 12577
/* 1765 */    MCD::OPC_CheckField, 16, 5, 0, 54, 42, // Skip to: 12577
/* 1771 */    MCD::OPC_Decode, 198, 2, 55, // Opcode: CVT_W_S
/* 1775 */    MCD::OPC_FilterValue, 37, 14, 0, // Skip to: 1793
/* 1779 */    MCD::OPC_CheckPredicate, 2, 42, 42, // Skip to: 12577
/* 1783 */    MCD::OPC_CheckField, 16, 5, 0, 36, 42, // Skip to: 12577
/* 1789 */    MCD::OPC_Decode, 191, 2, 59, // Opcode: CVT_L_S
/* 1793 */    MCD::OPC_FilterValue, 48, 14, 0, // Skip to: 1811
/* 1797 */    MCD::OPC_CheckPredicate, 2, 24, 42, // Skip to: 12577
/* 1801 */    MCD::OPC_CheckField, 6, 5, 0, 18, 42, // Skip to: 12577
/* 1807 */    MCD::OPC_Decode, 204, 2, 60, // Opcode: C_F_S
/* 1811 */    MCD::OPC_FilterValue, 49, 14, 0, // Skip to: 1829
/* 1815 */    MCD::OPC_CheckPredicate, 2, 6, 42, // Skip to: 12577
/* 1819 */    MCD::OPC_CheckField, 6, 5, 0, 0, 42, // Skip to: 12577
/* 1825 */    MCD::OPC_Decode, 246, 2, 60, // Opcode: C_UN_S
/* 1829 */    MCD::OPC_FilterValue, 50, 14, 0, // Skip to: 1847
/* 1833 */    MCD::OPC_CheckPredicate, 2, 244, 41, // Skip to: 12577
/* 1837 */    MCD::OPC_CheckField, 6, 5, 0, 238, 41, // Skip to: 12577
/* 1843 */    MCD::OPC_Decode, 201, 2, 60, // Opcode: C_EQ_S
/* 1847 */    MCD::OPC_FilterValue, 51, 14, 0, // Skip to: 1865
/* 1851 */    MCD::OPC_CheckPredicate, 2, 226, 41, // Skip to: 12577
/* 1855 */    MCD::OPC_CheckField, 6, 5, 0, 220, 41, // Skip to: 12577
/* 1861 */    MCD::OPC_Decode, 237, 2, 60, // Opcode: C_UEQ_S
/* 1865 */    MCD::OPC_FilterValue, 52, 14, 0, // Skip to: 1883
/* 1869 */    MCD::OPC_CheckPredicate, 2, 208, 41, // Skip to: 12577
/* 1873 */    MCD::OPC_CheckField, 6, 5, 0, 202, 41, // Skip to: 12577
/* 1879 */    MCD::OPC_Decode, 228, 2, 60, // Opcode: C_OLT_S
/* 1883 */    MCD::OPC_FilterValue, 53, 14, 0, // Skip to: 1901
/* 1887 */    MCD::OPC_CheckPredicate, 2, 190, 41, // Skip to: 12577
/* 1891 */    MCD::OPC_CheckField, 6, 5, 0, 184, 41, // Skip to: 12577
/* 1897 */    MCD::OPC_Decode, 243, 2, 60, // Opcode: C_ULT_S
/* 1901 */    MCD::OPC_FilterValue, 54, 14, 0, // Skip to: 1919
/* 1905 */    MCD::OPC_CheckPredicate, 2, 172, 41, // Skip to: 12577
/* 1909 */    MCD::OPC_CheckField, 6, 5, 0, 166, 41, // Skip to: 12577
/* 1915 */    MCD::OPC_Decode, 225, 2, 60, // Opcode: C_OLE_S
/* 1919 */    MCD::OPC_FilterValue, 55, 14, 0, // Skip to: 1937
/* 1923 */    MCD::OPC_CheckPredicate, 2, 154, 41, // Skip to: 12577
/* 1927 */    MCD::OPC_CheckField, 6, 5, 0, 148, 41, // Skip to: 12577
/* 1933 */    MCD::OPC_Decode, 240, 2, 60, // Opcode: C_ULE_S
/* 1937 */    MCD::OPC_FilterValue, 56, 14, 0, // Skip to: 1955
/* 1941 */    MCD::OPC_CheckPredicate, 2, 136, 41, // Skip to: 12577
/* 1945 */    MCD::OPC_CheckField, 6, 5, 0, 130, 41, // Skip to: 12577
/* 1951 */    MCD::OPC_Decode, 234, 2, 60, // Opcode: C_SF_S
/* 1955 */    MCD::OPC_FilterValue, 57, 14, 0, // Skip to: 1973
/* 1959 */    MCD::OPC_CheckPredicate, 2, 118, 41, // Skip to: 12577
/* 1963 */    MCD::OPC_CheckField, 6, 5, 0, 112, 41, // Skip to: 12577
/* 1969 */    MCD::OPC_Decode, 216, 2, 60, // Opcode: C_NGLE_S
/* 1973 */    MCD::OPC_FilterValue, 58, 14, 0, // Skip to: 1991
/* 1977 */    MCD::OPC_CheckPredicate, 2, 100, 41, // Skip to: 12577
/* 1981 */    MCD::OPC_CheckField, 6, 5, 0, 94, 41, // Skip to: 12577
/* 1987 */    MCD::OPC_Decode, 231, 2, 60, // Opcode: C_SEQ_S
/* 1991 */    MCD::OPC_FilterValue, 59, 14, 0, // Skip to: 2009
/* 1995 */    MCD::OPC_CheckPredicate, 2, 82, 41, // Skip to: 12577
/* 1999 */    MCD::OPC_CheckField, 6, 5, 0, 76, 41, // Skip to: 12577
/* 2005 */    MCD::OPC_Decode, 219, 2, 60, // Opcode: C_NGL_S
/* 2009 */    MCD::OPC_FilterValue, 60, 14, 0, // Skip to: 2027
/* 2013 */    MCD::OPC_CheckPredicate, 2, 64, 41, // Skip to: 12577
/* 2017 */    MCD::OPC_CheckField, 6, 5, 0, 58, 41, // Skip to: 12577
/* 2023 */    MCD::OPC_Decode, 210, 2, 60, // Opcode: C_LT_S
/* 2027 */    MCD::OPC_FilterValue, 61, 14, 0, // Skip to: 2045
/* 2031 */    MCD::OPC_CheckPredicate, 2, 46, 41, // Skip to: 12577
/* 2035 */    MCD::OPC_CheckField, 6, 5, 0, 40, 41, // Skip to: 12577
/* 2041 */    MCD::OPC_Decode, 213, 2, 60, // Opcode: C_NGE_S
/* 2045 */    MCD::OPC_FilterValue, 62, 14, 0, // Skip to: 2063
/* 2049 */    MCD::OPC_CheckPredicate, 2, 28, 41, // Skip to: 12577
/* 2053 */    MCD::OPC_CheckField, 6, 5, 0, 22, 41, // Skip to: 12577
/* 2059 */    MCD::OPC_Decode, 207, 2, 60, // Opcode: C_LE_S
/* 2063 */    MCD::OPC_FilterValue, 63, 14, 41, // Skip to: 12577
/* 2067 */    MCD::OPC_CheckPredicate, 2, 10, 41, // Skip to: 12577
/* 2071 */    MCD::OPC_CheckField, 6, 5, 0, 4, 41, // Skip to: 12577
/* 2077 */    MCD::OPC_Decode, 222, 2, 60, // Opcode: C_NGT_S
/* 2081 */    MCD::OPC_FilterValue, 17, 80, 2, // Skip to: 2677
/* 2085 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 2088 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2100
/* 2092 */    MCD::OPC_CheckPredicate, 6, 241, 40, // Skip to: 12577
/* 2096 */    MCD::OPC_Decode, 229, 3, 61, // Opcode: FADD_D32
/* 2100 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2112
/* 2104 */    MCD::OPC_CheckPredicate, 6, 229, 40, // Skip to: 12577
/* 2108 */    MCD::OPC_Decode, 210, 4, 61, // Opcode: FSUB_D32
/* 2112 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2124
/* 2116 */    MCD::OPC_CheckPredicate, 6, 217, 40, // Skip to: 12577
/* 2120 */    MCD::OPC_Decode, 179, 4, 61, // Opcode: FMUL_D32
/* 2124 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 2136
/* 2128 */    MCD::OPC_CheckPredicate, 6, 205, 40, // Skip to: 12577
/* 2132 */    MCD::OPC_Decode, 133, 4, 61, // Opcode: FDIV_D32
/* 2136 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 2154
/* 2140 */    MCD::OPC_CheckPredicate, 6, 193, 40, // Skip to: 12577
/* 2144 */    MCD::OPC_CheckField, 16, 5, 0, 187, 40, // Skip to: 12577
/* 2150 */    MCD::OPC_Decode, 205, 4, 62, // Opcode: FSQRT_D32
/* 2154 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 2172
/* 2158 */    MCD::OPC_CheckPredicate, 5, 175, 40, // Skip to: 12577
/* 2162 */    MCD::OPC_CheckField, 16, 5, 0, 169, 40, // Skip to: 12577
/* 2168 */    MCD::OPC_Decode, 225, 3, 62, // Opcode: FABS_D32
/* 2172 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 2190
/* 2176 */    MCD::OPC_CheckPredicate, 6, 157, 40, // Skip to: 12577
/* 2180 */    MCD::OPC_CheckField, 16, 5, 0, 151, 40, // Skip to: 12577
/* 2186 */    MCD::OPC_Decode, 173, 4, 62, // Opcode: FMOV_D32
/* 2190 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 2208
/* 2194 */    MCD::OPC_CheckPredicate, 5, 139, 40, // Skip to: 12577
/* 2198 */    MCD::OPC_CheckField, 16, 5, 0, 133, 40, // Skip to: 12577
/* 2204 */    MCD::OPC_Decode, 183, 4, 62, // Opcode: FNEG_D32
/* 2208 */    MCD::OPC_FilterValue, 12, 14, 0, // Skip to: 2226
/* 2212 */    MCD::OPC_CheckPredicate, 6, 121, 40, // Skip to: 12577
/* 2216 */    MCD::OPC_CheckField, 16, 5, 0, 115, 40, // Skip to: 12577
/* 2222 */    MCD::OPC_Decode, 247, 7, 63, // Opcode: ROUND_W_D32
/* 2226 */    MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 2244
/* 2230 */    MCD::OPC_CheckPredicate, 6, 103, 40, // Skip to: 12577
/* 2234 */    MCD::OPC_CheckField, 16, 5, 0, 97, 40, // Skip to: 12577
/* 2240 */    MCD::OPC_Decode, 140, 10, 63, // Opcode: TRUNC_W_D32
/* 2244 */    MCD::OPC_FilterValue, 14, 14, 0, // Skip to: 2262
/* 2248 */    MCD::OPC_CheckPredicate, 6, 85, 40, // Skip to: 12577
/* 2252 */    MCD::OPC_CheckField, 16, 5, 0, 79, 40, // Skip to: 12577
/* 2258 */    MCD::OPC_Decode, 246, 1, 63, // Opcode: CEIL_W_D32
/* 2262 */    MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 2280
/* 2266 */    MCD::OPC_CheckPredicate, 6, 67, 40, // Skip to: 12577
/* 2270 */    MCD::OPC_CheckField, 16, 5, 0, 61, 40, // Skip to: 12577
/* 2276 */    MCD::OPC_Decode, 160, 4, 63, // Opcode: FLOOR_W_D32
/* 2280 */    MCD::OPC_FilterValue, 17, 27, 0, // Skip to: 2311
/* 2284 */    MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 2287 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2299
/* 2291 */    MCD::OPC_CheckPredicate, 6, 42, 40, // Skip to: 12577
/* 2295 */    MCD::OPC_Decode, 179, 6, 64, // Opcode: MOVF_D32
/* 2299 */    MCD::OPC_FilterValue, 1, 34, 40, // Skip to: 12577
/* 2303 */    MCD::OPC_CheckPredicate, 6, 30, 40, // Skip to: 12577
/* 2307 */    MCD::OPC_Decode, 193, 6, 64, // Opcode: MOVT_D32
/* 2311 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 2323
/* 2315 */    MCD::OPC_CheckPredicate, 6, 18, 40, // Skip to: 12577
/* 2319 */    MCD::OPC_Decode, 202, 6, 65, // Opcode: MOVZ_I_D32
/* 2323 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 2335
/* 2327 */    MCD::OPC_CheckPredicate, 6, 6, 40, // Skip to: 12577
/* 2331 */    MCD::OPC_Decode, 188, 6, 65, // Opcode: MOVN_I_D32
/* 2335 */    MCD::OPC_FilterValue, 32, 14, 0, // Skip to: 2353
/* 2339 */    MCD::OPC_CheckPredicate, 6, 250, 39, // Skip to: 12577
/* 2343 */    MCD::OPC_CheckField, 16, 5, 0, 244, 39, // Skip to: 12577
/* 2349 */    MCD::OPC_Decode, 192, 2, 63, // Opcode: CVT_S_D32
/* 2353 */    MCD::OPC_FilterValue, 36, 14, 0, // Skip to: 2371
/* 2357 */    MCD::OPC_CheckPredicate, 6, 232, 39, // Skip to: 12577
/* 2361 */    MCD::OPC_CheckField, 16, 5, 0, 226, 39, // Skip to: 12577
/* 2367 */    MCD::OPC_Decode, 196, 2, 63, // Opcode: CVT_W_D32
/* 2371 */    MCD::OPC_FilterValue, 37, 14, 0, // Skip to: 2389
/* 2375 */    MCD::OPC_CheckPredicate, 2, 214, 39, // Skip to: 12577
/* 2379 */    MCD::OPC_CheckField, 16, 5, 0, 208, 39, // Skip to: 12577
/* 2385 */    MCD::OPC_Decode, 190, 2, 66, // Opcode: CVT_L_D64
/* 2389 */    MCD::OPC_FilterValue, 48, 14, 0, // Skip to: 2407
/* 2393 */    MCD::OPC_CheckPredicate, 6, 196, 39, // Skip to: 12577
/* 2397 */    MCD::OPC_CheckField, 6, 5, 0, 190, 39, // Skip to: 12577
/* 2403 */    MCD::OPC_Decode, 202, 2, 67, // Opcode: C_F_D32
/* 2407 */    MCD::OPC_FilterValue, 49, 14, 0, // Skip to: 2425
/* 2411 */    MCD::OPC_CheckPredicate, 6, 178, 39, // Skip to: 12577
/* 2415 */    MCD::OPC_CheckField, 6, 5, 0, 172, 39, // Skip to: 12577
/* 2421 */    MCD::OPC_Decode, 244, 2, 67, // Opcode: C_UN_D32
/* 2425 */    MCD::OPC_FilterValue, 50, 14, 0, // Skip to: 2443
/* 2429 */    MCD::OPC_CheckPredicate, 6, 160, 39, // Skip to: 12577
/* 2433 */    MCD::OPC_CheckField, 6, 5, 0, 154, 39, // Skip to: 12577
/* 2439 */    MCD::OPC_Decode, 199, 2, 67, // Opcode: C_EQ_D32
/* 2443 */    MCD::OPC_FilterValue, 51, 14, 0, // Skip to: 2461
/* 2447 */    MCD::OPC_CheckPredicate, 6, 142, 39, // Skip to: 12577
/* 2451 */    MCD::OPC_CheckField, 6, 5, 0, 136, 39, // Skip to: 12577
/* 2457 */    MCD::OPC_Decode, 235, 2, 67, // Opcode: C_UEQ_D32
/* 2461 */    MCD::OPC_FilterValue, 52, 14, 0, // Skip to: 2479
/* 2465 */    MCD::OPC_CheckPredicate, 6, 124, 39, // Skip to: 12577
/* 2469 */    MCD::OPC_CheckField, 6, 5, 0, 118, 39, // Skip to: 12577
/* 2475 */    MCD::OPC_Decode, 226, 2, 67, // Opcode: C_OLT_D32
/* 2479 */    MCD::OPC_FilterValue, 53, 14, 0, // Skip to: 2497
/* 2483 */    MCD::OPC_CheckPredicate, 6, 106, 39, // Skip to: 12577
/* 2487 */    MCD::OPC_CheckField, 6, 5, 0, 100, 39, // Skip to: 12577
/* 2493 */    MCD::OPC_Decode, 241, 2, 67, // Opcode: C_ULT_D32
/* 2497 */    MCD::OPC_FilterValue, 54, 14, 0, // Skip to: 2515
/* 2501 */    MCD::OPC_CheckPredicate, 6, 88, 39, // Skip to: 12577
/* 2505 */    MCD::OPC_CheckField, 6, 5, 0, 82, 39, // Skip to: 12577
/* 2511 */    MCD::OPC_Decode, 223, 2, 67, // Opcode: C_OLE_D32
/* 2515 */    MCD::OPC_FilterValue, 55, 14, 0, // Skip to: 2533
/* 2519 */    MCD::OPC_CheckPredicate, 6, 70, 39, // Skip to: 12577
/* 2523 */    MCD::OPC_CheckField, 6, 5, 0, 64, 39, // Skip to: 12577
/* 2529 */    MCD::OPC_Decode, 238, 2, 67, // Opcode: C_ULE_D32
/* 2533 */    MCD::OPC_FilterValue, 56, 14, 0, // Skip to: 2551
/* 2537 */    MCD::OPC_CheckPredicate, 6, 52, 39, // Skip to: 12577
/* 2541 */    MCD::OPC_CheckField, 6, 5, 0, 46, 39, // Skip to: 12577
/* 2547 */    MCD::OPC_Decode, 232, 2, 67, // Opcode: C_SF_D32
/* 2551 */    MCD::OPC_FilterValue, 57, 14, 0, // Skip to: 2569
/* 2555 */    MCD::OPC_CheckPredicate, 6, 34, 39, // Skip to: 12577
/* 2559 */    MCD::OPC_CheckField, 6, 5, 0, 28, 39, // Skip to: 12577
/* 2565 */    MCD::OPC_Decode, 214, 2, 67, // Opcode: C_NGLE_D32
/* 2569 */    MCD::OPC_FilterValue, 58, 14, 0, // Skip to: 2587
/* 2573 */    MCD::OPC_CheckPredicate, 6, 16, 39, // Skip to: 12577
/* 2577 */    MCD::OPC_CheckField, 6, 5, 0, 10, 39, // Skip to: 12577
/* 2583 */    MCD::OPC_Decode, 229, 2, 67, // Opcode: C_SEQ_D32
/* 2587 */    MCD::OPC_FilterValue, 59, 14, 0, // Skip to: 2605
/* 2591 */    MCD::OPC_CheckPredicate, 6, 254, 38, // Skip to: 12577
/* 2595 */    MCD::OPC_CheckField, 6, 5, 0, 248, 38, // Skip to: 12577
/* 2601 */    MCD::OPC_Decode, 217, 2, 67, // Opcode: C_NGL_D32
/* 2605 */    MCD::OPC_FilterValue, 60, 14, 0, // Skip to: 2623
/* 2609 */    MCD::OPC_CheckPredicate, 6, 236, 38, // Skip to: 12577
/* 2613 */    MCD::OPC_CheckField, 6, 5, 0, 230, 38, // Skip to: 12577
/* 2619 */    MCD::OPC_Decode, 208, 2, 67, // Opcode: C_LT_D32
/* 2623 */    MCD::OPC_FilterValue, 61, 14, 0, // Skip to: 2641
/* 2627 */    MCD::OPC_CheckPredicate, 6, 218, 38, // Skip to: 12577
/* 2631 */    MCD::OPC_CheckField, 6, 5, 0, 212, 38, // Skip to: 12577
/* 2637 */    MCD::OPC_Decode, 211, 2, 67, // Opcode: C_NGE_D32
/* 2641 */    MCD::OPC_FilterValue, 62, 14, 0, // Skip to: 2659
/* 2645 */    MCD::OPC_CheckPredicate, 6, 200, 38, // Skip to: 12577
/* 2649 */    MCD::OPC_CheckField, 6, 5, 0, 194, 38, // Skip to: 12577
/* 2655 */    MCD::OPC_Decode, 205, 2, 67, // Opcode: C_LE_D32
/* 2659 */    MCD::OPC_FilterValue, 63, 186, 38, // Skip to: 12577
/* 2663 */    MCD::OPC_CheckPredicate, 6, 182, 38, // Skip to: 12577
/* 2667 */    MCD::OPC_CheckField, 6, 5, 0, 176, 38, // Skip to: 12577
/* 2673 */    MCD::OPC_Decode, 220, 2, 67, // Opcode: C_NGT_D32
/* 2677 */    MCD::OPC_FilterValue, 20, 168, 38, // Skip to: 12577
/* 2681 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 2684 */    MCD::OPC_FilterValue, 32, 14, 0, // Skip to: 2702
/* 2688 */    MCD::OPC_CheckPredicate, 2, 157, 38, // Skip to: 12577
/* 2692 */    MCD::OPC_CheckField, 16, 5, 0, 151, 38, // Skip to: 12577
/* 2698 */    MCD::OPC_Decode, 195, 2, 55, // Opcode: CVT_S_W
/* 2702 */    MCD::OPC_FilterValue, 33, 143, 38, // Skip to: 12577
/* 2706 */    MCD::OPC_CheckPredicate, 6, 139, 38, // Skip to: 12577
/* 2710 */    MCD::OPC_CheckField, 16, 5, 0, 133, 38, // Skip to: 12577
/* 2716 */    MCD::OPC_Decode, 186, 2, 58, // Opcode: CVT_D32_W
/* 2720 */    MCD::OPC_FilterValue, 18, 39, 0, // Skip to: 2763
/* 2724 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 2727 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 2745
/* 2731 */    MCD::OPC_CheckPredicate, 2, 114, 38, // Skip to: 12577
/* 2735 */    MCD::OPC_CheckField, 3, 8, 0, 108, 38, // Skip to: 12577
/* 2741 */    MCD::OPC_Decode, 139, 6, 43, // Opcode: MFC2
/* 2745 */    MCD::OPC_FilterValue, 4, 100, 38, // Skip to: 12577
/* 2749 */    MCD::OPC_CheckPredicate, 2, 96, 38, // Skip to: 12577
/* 2753 */    MCD::OPC_CheckField, 3, 8, 0, 90, 38, // Skip to: 12577
/* 2759 */    MCD::OPC_Decode, 224, 6, 43, // Opcode: MTC2
/* 2763 */    MCD::OPC_FilterValue, 19, 207, 0, // Skip to: 2974
/* 2767 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 2770 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 2788
/* 2774 */    MCD::OPC_CheckPredicate, 7, 71, 38, // Skip to: 12577
/* 2778 */    MCD::OPC_CheckField, 11, 5, 0, 65, 38, // Skip to: 12577
/* 2784 */    MCD::OPC_Decode, 211, 5, 68, // Opcode: LWXC1
/* 2788 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 2806
/* 2792 */    MCD::OPC_CheckPredicate, 8, 53, 38, // Skip to: 12577
/* 2796 */    MCD::OPC_CheckField, 11, 5, 0, 47, 38, // Skip to: 12577
/* 2802 */    MCD::OPC_Decode, 171, 5, 69, // Opcode: LDXC1
/* 2806 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 2824
/* 2810 */    MCD::OPC_CheckPredicate, 6, 35, 38, // Skip to: 12577
/* 2814 */    MCD::OPC_CheckField, 11, 5, 0, 29, 38, // Skip to: 12577
/* 2820 */    MCD::OPC_Decode, 196, 5, 69, // Opcode: LUXC1
/* 2824 */    MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 2842
/* 2828 */    MCD::OPC_CheckPredicate, 7, 17, 38, // Skip to: 12577
/* 2832 */    MCD::OPC_CheckField, 6, 5, 0, 11, 38, // Skip to: 12577
/* 2838 */    MCD::OPC_Decode, 204, 9, 70, // Opcode: SWXC1
/* 2842 */    MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 2860
/* 2846 */    MCD::OPC_CheckPredicate, 8, 255, 37, // Skip to: 12577
/* 2850 */    MCD::OPC_CheckField, 6, 5, 0, 249, 37, // Skip to: 12577
/* 2856 */    MCD::OPC_Decode, 145, 8, 71, // Opcode: SDXC1
/* 2860 */    MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 2878
/* 2864 */    MCD::OPC_CheckPredicate, 6, 237, 37, // Skip to: 12577
/* 2868 */    MCD::OPC_CheckField, 6, 5, 0, 231, 37, // Skip to: 12577
/* 2874 */    MCD::OPC_Decode, 193, 9, 71, // Opcode: SUXC1
/* 2878 */    MCD::OPC_FilterValue, 32, 8, 0, // Skip to: 2890
/* 2882 */    MCD::OPC_CheckPredicate, 3, 219, 37, // Skip to: 12577
/* 2886 */    MCD::OPC_Decode, 240, 5, 72, // Opcode: MADD_S
/* 2890 */    MCD::OPC_FilterValue, 33, 8, 0, // Skip to: 2902
/* 2894 */    MCD::OPC_CheckPredicate, 9, 207, 37, // Skip to: 12577
/* 2898 */    MCD::OPC_Decode, 235, 5, 73, // Opcode: MADD_D32
/* 2902 */    MCD::OPC_FilterValue, 40, 8, 0, // Skip to: 2914
/* 2906 */    MCD::OPC_CheckPredicate, 3, 195, 37, // Skip to: 12577
/* 2910 */    MCD::OPC_Decode, 221, 6, 72, // Opcode: MSUB_S
/* 2914 */    MCD::OPC_FilterValue, 41, 8, 0, // Skip to: 2926
/* 2918 */    MCD::OPC_CheckPredicate, 9, 183, 37, // Skip to: 12577
/* 2922 */    MCD::OPC_Decode, 216, 6, 73, // Opcode: MSUB_D32
/* 2926 */    MCD::OPC_FilterValue, 48, 8, 0, // Skip to: 2938
/* 2930 */    MCD::OPC_CheckPredicate, 10, 171, 37, // Skip to: 12577
/* 2934 */    MCD::OPC_Decode, 151, 7, 72, // Opcode: NMADD_S
/* 2938 */    MCD::OPC_FilterValue, 49, 8, 0, // Skip to: 2950
/* 2942 */    MCD::OPC_CheckPredicate, 11, 159, 37, // Skip to: 12577
/* 2946 */    MCD::OPC_Decode, 149, 7, 73, // Opcode: NMADD_D32
/* 2950 */    MCD::OPC_FilterValue, 56, 8, 0, // Skip to: 2962
/* 2954 */    MCD::OPC_CheckPredicate, 10, 147, 37, // Skip to: 12577
/* 2958 */    MCD::OPC_Decode, 154, 7, 72, // Opcode: NMSUB_S
/* 2962 */    MCD::OPC_FilterValue, 57, 139, 37, // Skip to: 12577
/* 2966 */    MCD::OPC_CheckPredicate, 11, 135, 37, // Skip to: 12577
/* 2970 */    MCD::OPC_Decode, 152, 7, 73, // Opcode: NMSUB_D32
/* 2974 */    MCD::OPC_FilterValue, 28, 171, 0, // Skip to: 3149
/* 2978 */    MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 2981 */    MCD::OPC_FilterValue, 0, 29, 0, // Skip to: 3014
/* 2985 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 2988 */    MCD::OPC_FilterValue, 0, 113, 37, // Skip to: 12577
/* 2992 */    MCD::OPC_CheckPredicate, 2, 10, 0, // Skip to: 3006
/* 2996 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3006
/* 3002 */    MCD::OPC_Decode, 226, 5, 34, // Opcode: MADD
/* 3006 */    MCD::OPC_CheckPredicate, 4, 95, 37, // Skip to: 12577
/* 3010 */    MCD::OPC_Decode, 237, 5, 74, // Opcode: MADD_DSP
/* 3014 */    MCD::OPC_FilterValue, 1, 29, 0, // Skip to: 3047
/* 3018 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 3021 */    MCD::OPC_FilterValue, 0, 80, 37, // Skip to: 12577
/* 3025 */    MCD::OPC_CheckPredicate, 2, 10, 0, // Skip to: 3039
/* 3029 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3039
/* 3035 */    MCD::OPC_Decode, 229, 5, 34, // Opcode: MADDU
/* 3039 */    MCD::OPC_CheckPredicate, 4, 62, 37, // Skip to: 12577
/* 3043 */    MCD::OPC_Decode, 230, 5, 74, // Opcode: MADDU_DSP
/* 3047 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3059
/* 3051 */    MCD::OPC_CheckPredicate, 2, 50, 37, // Skip to: 12577
/* 3055 */    MCD::OPC_Decode, 233, 6, 11, // Opcode: MUL
/* 3059 */    MCD::OPC_FilterValue, 4, 29, 0, // Skip to: 3092
/* 3063 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 3066 */    MCD::OPC_FilterValue, 0, 35, 37, // Skip to: 12577
/* 3070 */    MCD::OPC_CheckPredicate, 2, 10, 0, // Skip to: 3084
/* 3074 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3084
/* 3080 */    MCD::OPC_Decode, 207, 6, 34, // Opcode: MSUB
/* 3084 */    MCD::OPC_CheckPredicate, 4, 17, 37, // Skip to: 12577
/* 3088 */    MCD::OPC_Decode, 218, 6, 74, // Opcode: MSUB_DSP
/* 3092 */    MCD::OPC_FilterValue, 5, 29, 0, // Skip to: 3125
/* 3096 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 3099 */    MCD::OPC_FilterValue, 0, 2, 37, // Skip to: 12577
/* 3103 */    MCD::OPC_CheckPredicate, 2, 10, 0, // Skip to: 3117
/* 3107 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3117
/* 3113 */    MCD::OPC_Decode, 210, 6, 34, // Opcode: MSUBU
/* 3117 */    MCD::OPC_CheckPredicate, 4, 240, 36, // Skip to: 12577
/* 3121 */    MCD::OPC_Decode, 211, 6, 74, // Opcode: MSUBU_DSP
/* 3125 */    MCD::OPC_FilterValue, 32, 8, 0, // Skip to: 3137
/* 3129 */    MCD::OPC_CheckPredicate, 12, 228, 36, // Skip to: 12577
/* 3133 */    MCD::OPC_Decode, 164, 2, 75, // Opcode: CLZ
/* 3137 */    MCD::OPC_FilterValue, 33, 220, 36, // Skip to: 12577
/* 3141 */    MCD::OPC_CheckPredicate, 12, 216, 36, // Skip to: 12577
/* 3145 */    MCD::OPC_Decode, 147, 2, 75, // Opcode: CLO
/* 3149 */    MCD::OPC_FilterValue, 30, 250, 26, // Skip to: 10059
/* 3153 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 3156 */    MCD::OPC_FilterValue, 0, 50, 0, // Skip to: 3210
/* 3160 */    MCD::OPC_ExtractField, 24, 2,  // Inst{25-24} ...
/* 3163 */    MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 3174
/* 3167 */    MCD::OPC_CheckPredicate, 13, 190, 36, // Skip to: 12577
/* 3171 */    MCD::OPC_Decode, 71, 2, // Opcode: ANDI_B
/* 3174 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3186
/* 3178 */    MCD::OPC_CheckPredicate, 13, 179, 36, // Skip to: 12577
/* 3182 */    MCD::OPC_Decode, 165, 7, 2, // Opcode: ORI_B
/* 3186 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3198
/* 3190 */    MCD::OPC_CheckPredicate, 13, 167, 36, // Skip to: 12577
/* 3194 */    MCD::OPC_Decode, 158, 7, 2, // Opcode: NORI_B
/* 3198 */    MCD::OPC_FilterValue, 3, 159, 36, // Skip to: 12577
/* 3202 */    MCD::OPC_CheckPredicate, 13, 155, 36, // Skip to: 12577
/* 3206 */    MCD::OPC_Decode, 154, 10, 2, // Opcode: XORI_B
/* 3210 */    MCD::OPC_FilterValue, 1, 39, 0, // Skip to: 3253
/* 3214 */    MCD::OPC_ExtractField, 24, 2,  // Inst{25-24} ...
/* 3217 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3229
/* 3221 */    MCD::OPC_CheckPredicate, 13, 136, 36, // Skip to: 12577
/* 3225 */    MCD::OPC_Decode, 185, 1, 2, // Opcode: BMNZI_B
/* 3229 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3241
/* 3233 */    MCD::OPC_CheckPredicate, 13, 124, 36, // Skip to: 12577
/* 3237 */    MCD::OPC_Decode, 187, 1, 2, // Opcode: BMZI_B
/* 3241 */    MCD::OPC_FilterValue, 2, 116, 36, // Skip to: 12577
/* 3245 */    MCD::OPC_CheckPredicate, 13, 112, 36, // Skip to: 12577
/* 3249 */    MCD::OPC_Decode, 207, 1, 2, // Opcode: BSELI_B
/* 3253 */    MCD::OPC_FilterValue, 2, 39, 0, // Skip to: 3296
/* 3257 */    MCD::OPC_ExtractField, 24, 2,  // Inst{25-24} ...
/* 3260 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3272
/* 3264 */    MCD::OPC_CheckPredicate, 13, 93, 36, // Skip to: 12577
/* 3268 */    MCD::OPC_Decode, 153, 8, 2, // Opcode: SHF_B
/* 3272 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3284
/* 3276 */    MCD::OPC_CheckPredicate, 13, 81, 36, // Skip to: 12577
/* 3280 */    MCD::OPC_Decode, 154, 8, 2, // Opcode: SHF_H
/* 3284 */    MCD::OPC_FilterValue, 2, 73, 36, // Skip to: 12577
/* 3288 */    MCD::OPC_CheckPredicate, 13, 69, 36, // Skip to: 12577
/* 3292 */    MCD::OPC_Decode, 155, 8, 2, // Opcode: SHF_W
/* 3296 */    MCD::OPC_FilterValue, 6, 31, 1, // Skip to: 3587
/* 3300 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 3303 */    MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 3314
/* 3307 */    MCD::OPC_CheckPredicate, 13, 50, 36, // Skip to: 12577
/* 3311 */    MCD::OPC_Decode, 47, 2, // Opcode: ADDVI_B
/* 3314 */    MCD::OPC_FilterValue, 1, 7, 0, // Skip to: 3325
/* 3318 */    MCD::OPC_CheckPredicate, 13, 39, 36, // Skip to: 12577
/* 3322 */    MCD::OPC_Decode, 49, 2, // Opcode: ADDVI_H
/* 3325 */    MCD::OPC_FilterValue, 2, 7, 0, // Skip to: 3336
/* 3329 */    MCD::OPC_CheckPredicate, 13, 28, 36, // Skip to: 12577
/* 3333 */    MCD::OPC_Decode, 50, 2, // Opcode: ADDVI_W
/* 3336 */    MCD::OPC_FilterValue, 3, 7, 0, // Skip to: 3347
/* 3340 */    MCD::OPC_CheckPredicate, 13, 17, 36, // Skip to: 12577
/* 3344 */    MCD::OPC_Decode, 48, 2, // Opcode: ADDVI_D
/* 3347 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 3359
/* 3351 */    MCD::OPC_CheckPredicate, 13, 6, 36, // Skip to: 12577
/* 3355 */    MCD::OPC_Decode, 182, 9, 2, // Opcode: SUBVI_B
/* 3359 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 3371
/* 3363 */    MCD::OPC_CheckPredicate, 13, 250, 35, // Skip to: 12577
/* 3367 */    MCD::OPC_Decode, 184, 9, 2, // Opcode: SUBVI_H
/* 3371 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 3383
/* 3375 */    MCD::OPC_CheckPredicate, 13, 238, 35, // Skip to: 12577
/* 3379 */    MCD::OPC_Decode, 185, 9, 2, // Opcode: SUBVI_W
/* 3383 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 3395
/* 3387 */    MCD::OPC_CheckPredicate, 13, 226, 35, // Skip to: 12577
/* 3391 */    MCD::OPC_Decode, 183, 9, 2, // Opcode: SUBVI_D
/* 3395 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 3407
/* 3399 */    MCD::OPC_CheckPredicate, 13, 214, 35, // Skip to: 12577
/* 3403 */    MCD::OPC_Decode, 245, 5, 2, // Opcode: MAXI_S_B
/* 3407 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 3419
/* 3411 */    MCD::OPC_CheckPredicate, 13, 202, 35, // Skip to: 12577
/* 3415 */    MCD::OPC_Decode, 247, 5, 2, // Opcode: MAXI_S_H
/* 3419 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 3431
/* 3423 */    MCD::OPC_CheckPredicate, 13, 190, 35, // Skip to: 12577
/* 3427 */    MCD::OPC_Decode, 248, 5, 2, // Opcode: MAXI_S_W
/* 3431 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 3443
/* 3435 */    MCD::OPC_CheckPredicate, 13, 178, 35, // Skip to: 12577
/* 3439 */    MCD::OPC_Decode, 246, 5, 2, // Opcode: MAXI_S_D
/* 3443 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 3455
/* 3447 */    MCD::OPC_CheckPredicate, 13, 166, 35, // Skip to: 12577
/* 3451 */    MCD::OPC_Decode, 249, 5, 2, // Opcode: MAXI_U_B
/* 3455 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 3467
/* 3459 */    MCD::OPC_CheckPredicate, 13, 154, 35, // Skip to: 12577
/* 3463 */    MCD::OPC_Decode, 251, 5, 2, // Opcode: MAXI_U_H
/* 3467 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 3479
/* 3471 */    MCD::OPC_CheckPredicate, 13, 142, 35, // Skip to: 12577
/* 3475 */    MCD::OPC_Decode, 252, 5, 2, // Opcode: MAXI_U_W
/* 3479 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 3491
/* 3483 */    MCD::OPC_CheckPredicate, 13, 130, 35, // Skip to: 12577
/* 3487 */    MCD::OPC_Decode, 250, 5, 2, // Opcode: MAXI_U_D
/* 3491 */    MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 3503
/* 3495 */    MCD::OPC_CheckPredicate, 13, 118, 35, // Skip to: 12577
/* 3499 */    MCD::OPC_Decode, 147, 6, 2, // Opcode: MINI_S_B
/* 3503 */    MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 3515
/* 3507 */    MCD::OPC_CheckPredicate, 13, 106, 35, // Skip to: 12577
/* 3511 */    MCD::OPC_Decode, 149, 6, 2, // Opcode: MINI_S_H
/* 3515 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 3527
/* 3519 */    MCD::OPC_CheckPredicate, 13, 94, 35, // Skip to: 12577
/* 3523 */    MCD::OPC_Decode, 150, 6, 2, // Opcode: MINI_S_W
/* 3527 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 3539
/* 3531 */    MCD::OPC_CheckPredicate, 13, 82, 35, // Skip to: 12577
/* 3535 */    MCD::OPC_Decode, 148, 6, 2, // Opcode: MINI_S_D
/* 3539 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 3551
/* 3543 */    MCD::OPC_CheckPredicate, 13, 70, 35, // Skip to: 12577
/* 3547 */    MCD::OPC_Decode, 151, 6, 2, // Opcode: MINI_U_B
/* 3551 */    MCD::OPC_FilterValue, 21, 8, 0, // Skip to: 3563
/* 3555 */    MCD::OPC_CheckPredicate, 13, 58, 35, // Skip to: 12577
/* 3559 */    MCD::OPC_Decode, 153, 6, 2, // Opcode: MINI_U_H
/* 3563 */    MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 3575
/* 3567 */    MCD::OPC_CheckPredicate, 13, 46, 35, // Skip to: 12577
/* 3571 */    MCD::OPC_Decode, 154, 6, 2, // Opcode: MINI_U_W
/* 3575 */    MCD::OPC_FilterValue, 23, 38, 35, // Skip to: 12577
/* 3579 */    MCD::OPC_CheckPredicate, 13, 34, 35, // Skip to: 12577
/* 3583 */    MCD::OPC_Decode, 152, 6, 2, // Opcode: MINI_U_D
/* 3587 */    MCD::OPC_FilterValue, 7, 83, 1, // Skip to: 3930
/* 3591 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 3594 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3606
/* 3598 */    MCD::OPC_CheckPredicate, 13, 15, 35, // Skip to: 12577
/* 3602 */    MCD::OPC_Decode, 249, 1, 2, // Opcode: CEQI_B
/* 3606 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3618
/* 3610 */    MCD::OPC_CheckPredicate, 13, 3, 35, // Skip to: 12577
/* 3614 */    MCD::OPC_Decode, 251, 1, 2, // Opcode: CEQI_H
/* 3618 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3630
/* 3622 */    MCD::OPC_CheckPredicate, 13, 247, 34, // Skip to: 12577
/* 3626 */    MCD::OPC_Decode, 252, 1, 2, // Opcode: CEQI_W
/* 3630 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 3642
/* 3634 */    MCD::OPC_CheckPredicate, 13, 235, 34, // Skip to: 12577
/* 3638 */    MCD::OPC_Decode, 250, 1, 2, // Opcode: CEQI_D
/* 3642 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 3654
/* 3646 */    MCD::OPC_CheckPredicate, 13, 223, 34, // Skip to: 12577
/* 3650 */    MCD::OPC_Decode, 148, 2, 2, // Opcode: CLTI_S_B
/* 3654 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 3666
/* 3658 */    MCD::OPC_CheckPredicate, 13, 211, 34, // Skip to: 12577
/* 3662 */    MCD::OPC_Decode, 150, 2, 2, // Opcode: CLTI_S_H
/* 3666 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 3678
/* 3670 */    MCD::OPC_CheckPredicate, 13, 199, 34, // Skip to: 12577
/* 3674 */    MCD::OPC_Decode, 151, 2, 2, // Opcode: CLTI_S_W
/* 3678 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 3690
/* 3682 */    MCD::OPC_CheckPredicate, 13, 187, 34, // Skip to: 12577
/* 3686 */    MCD::OPC_Decode, 149, 2, 2, // Opcode: CLTI_S_D
/* 3690 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 3702
/* 3694 */    MCD::OPC_CheckPredicate, 13, 175, 34, // Skip to: 12577
/* 3698 */    MCD::OPC_Decode, 152, 2, 2, // Opcode: CLTI_U_B
/* 3702 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 3714
/* 3706 */    MCD::OPC_CheckPredicate, 13, 163, 34, // Skip to: 12577
/* 3710 */    MCD::OPC_Decode, 154, 2, 2, // Opcode: CLTI_U_H
/* 3714 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 3726
/* 3718 */    MCD::OPC_CheckPredicate, 13, 151, 34, // Skip to: 12577
/* 3722 */    MCD::OPC_Decode, 155, 2, 2, // Opcode: CLTI_U_W
/* 3726 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 3738
/* 3730 */    MCD::OPC_CheckPredicate, 13, 139, 34, // Skip to: 12577
/* 3734 */    MCD::OPC_Decode, 153, 2, 2, // Opcode: CLTI_U_D
/* 3738 */    MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 3750
/* 3742 */    MCD::OPC_CheckPredicate, 13, 127, 34, // Skip to: 12577
/* 3746 */    MCD::OPC_Decode, 131, 2, 2, // Opcode: CLEI_S_B
/* 3750 */    MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 3762
/* 3754 */    MCD::OPC_CheckPredicate, 13, 115, 34, // Skip to: 12577
/* 3758 */    MCD::OPC_Decode, 133, 2, 2, // Opcode: CLEI_S_H
/* 3762 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 3774
/* 3766 */    MCD::OPC_CheckPredicate, 13, 103, 34, // Skip to: 12577
/* 3770 */    MCD::OPC_Decode, 134, 2, 2, // Opcode: CLEI_S_W
/* 3774 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 3786
/* 3778 */    MCD::OPC_CheckPredicate, 13, 91, 34, // Skip to: 12577
/* 3782 */    MCD::OPC_Decode, 132, 2, 2, // Opcode: CLEI_S_D
/* 3786 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 3798
/* 3790 */    MCD::OPC_CheckPredicate, 13, 79, 34, // Skip to: 12577
/* 3794 */    MCD::OPC_Decode, 135, 2, 2, // Opcode: CLEI_U_B
/* 3798 */    MCD::OPC_FilterValue, 21, 8, 0, // Skip to: 3810
/* 3802 */    MCD::OPC_CheckPredicate, 13, 67, 34, // Skip to: 12577
/* 3806 */    MCD::OPC_Decode, 137, 2, 2, // Opcode: CLEI_U_H
/* 3810 */    MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 3822
/* 3814 */    MCD::OPC_CheckPredicate, 13, 55, 34, // Skip to: 12577
/* 3818 */    MCD::OPC_Decode, 138, 2, 2, // Opcode: CLEI_U_W
/* 3822 */    MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 3834
/* 3826 */    MCD::OPC_CheckPredicate, 13, 43, 34, // Skip to: 12577
/* 3830 */    MCD::OPC_Decode, 136, 2, 2, // Opcode: CLEI_U_D
/* 3834 */    MCD::OPC_FilterValue, 24, 8, 0, // Skip to: 3846
/* 3838 */    MCD::OPC_CheckPredicate, 13, 31, 34, // Skip to: 12577
/* 3842 */    MCD::OPC_Decode, 177, 5, 2, // Opcode: LD_B
/* 3846 */    MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 3858
/* 3850 */    MCD::OPC_CheckPredicate, 13, 19, 34, // Skip to: 12577
/* 3854 */    MCD::OPC_Decode, 179, 5, 2, // Opcode: LD_H
/* 3858 */    MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 3870
/* 3862 */    MCD::OPC_CheckPredicate, 13, 7, 34, // Skip to: 12577
/* 3866 */    MCD::OPC_Decode, 180, 5, 2, // Opcode: LD_W
/* 3870 */    MCD::OPC_FilterValue, 27, 8, 0, // Skip to: 3882
/* 3874 */    MCD::OPC_CheckPredicate, 13, 251, 33, // Skip to: 12577
/* 3878 */    MCD::OPC_Decode, 178, 5, 2, // Opcode: LD_D
/* 3882 */    MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 3894
/* 3886 */    MCD::OPC_CheckPredicate, 13, 239, 33, // Skip to: 12577
/* 3890 */    MCD::OPC_Decode, 148, 9, 2, // Opcode: ST_B
/* 3894 */    MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 3906
/* 3898 */    MCD::OPC_CheckPredicate, 13, 227, 33, // Skip to: 12577
/* 3902 */    MCD::OPC_Decode, 150, 9, 2, // Opcode: ST_H
/* 3906 */    MCD::OPC_FilterValue, 30, 8, 0, // Skip to: 3918
/* 3910 */    MCD::OPC_CheckPredicate, 13, 215, 33, // Skip to: 12577
/* 3914 */    MCD::OPC_Decode, 151, 9, 2, // Opcode: ST_W
/* 3918 */    MCD::OPC_FilterValue, 31, 207, 33, // Skip to: 12577
/* 3922 */    MCD::OPC_CheckPredicate, 13, 203, 33, // Skip to: 12577
/* 3926 */    MCD::OPC_Decode, 149, 9, 2, // Opcode: ST_D
/* 3930 */    MCD::OPC_FilterValue, 9, 35, 2, // Skip to: 4481
/* 3934 */    MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 3937 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3949
/* 3941 */    MCD::OPC_CheckPredicate, 13, 184, 33, // Skip to: 12577
/* 3945 */    MCD::OPC_Decode, 193, 8, 2, // Opcode: SLLI_D
/* 3949 */    MCD::OPC_FilterValue, 1, 52, 0, // Skip to: 4005
/* 3953 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 3956 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3968
/* 3960 */    MCD::OPC_CheckPredicate, 13, 165, 33, // Skip to: 12577
/* 3964 */    MCD::OPC_Decode, 195, 8, 2, // Opcode: SLLI_W
/* 3968 */    MCD::OPC_FilterValue, 1, 157, 33, // Skip to: 12577
/* 3972 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 3975 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3987
/* 3979 */    MCD::OPC_CheckPredicate, 13, 146, 33, // Skip to: 12577
/* 3983 */    MCD::OPC_Decode, 194, 8, 2, // Opcode: SLLI_H
/* 3987 */    MCD::OPC_FilterValue, 1, 138, 33, // Skip to: 12577
/* 3991 */    MCD::OPC_CheckPredicate, 13, 134, 33, // Skip to: 12577
/* 3995 */    MCD::OPC_CheckField, 19, 1, 0, 128, 33, // Skip to: 12577
/* 4001 */    MCD::OPC_Decode, 192, 8, 2, // Opcode: SLLI_B
/* 4005 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 4017
/* 4009 */    MCD::OPC_CheckPredicate, 13, 116, 33, // Skip to: 12577
/* 4013 */    MCD::OPC_Decode, 230, 8, 2, // Opcode: SRAI_D
/* 4017 */    MCD::OPC_FilterValue, 3, 52, 0, // Skip to: 4073
/* 4021 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 4024 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4036
/* 4028 */    MCD::OPC_CheckPredicate, 13, 97, 33, // Skip to: 12577
/* 4032 */    MCD::OPC_Decode, 232, 8, 2, // Opcode: SRAI_W
/* 4036 */    MCD::OPC_FilterValue, 1, 89, 33, // Skip to: 12577
/* 4040 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 4043 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4055
/* 4047 */    MCD::OPC_CheckPredicate, 13, 78, 33, // Skip to: 12577
/* 4051 */    MCD::OPC_Decode, 231, 8, 2, // Opcode: SRAI_H
/* 4055 */    MCD::OPC_FilterValue, 1, 70, 33, // Skip to: 12577
/* 4059 */    MCD::OPC_CheckPredicate, 13, 66, 33, // Skip to: 12577
/* 4063 */    MCD::OPC_CheckField, 19, 1, 0, 60, 33, // Skip to: 12577
/* 4069 */    MCD::OPC_Decode, 229, 8, 2, // Opcode: SRAI_B
/* 4073 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 4085
/* 4077 */    MCD::OPC_CheckPredicate, 13, 48, 33, // Skip to: 12577
/* 4081 */    MCD::OPC_Decode, 250, 8, 2, // Opcode: SRLI_D
/* 4085 */    MCD::OPC_FilterValue, 5, 52, 0, // Skip to: 4141
/* 4089 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 4092 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4104
/* 4096 */    MCD::OPC_CheckPredicate, 13, 29, 33, // Skip to: 12577
/* 4100 */    MCD::OPC_Decode, 252, 8, 2, // Opcode: SRLI_W
/* 4104 */    MCD::OPC_FilterValue, 1, 21, 33, // Skip to: 12577
/* 4108 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 4111 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4123
/* 4115 */    MCD::OPC_CheckPredicate, 13, 10, 33, // Skip to: 12577
/* 4119 */    MCD::OPC_Decode, 251, 8, 2, // Opcode: SRLI_H
/* 4123 */    MCD::OPC_FilterValue, 1, 2, 33, // Skip to: 12577
/* 4127 */    MCD::OPC_CheckPredicate, 13, 254, 32, // Skip to: 12577
/* 4131 */    MCD::OPC_CheckField, 19, 1, 0, 248, 32, // Skip to: 12577
/* 4137 */    MCD::OPC_Decode, 249, 8, 2, // Opcode: SRLI_B
/* 4141 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 4153
/* 4145 */    MCD::OPC_CheckPredicate, 13, 236, 32, // Skip to: 12577
/* 4149 */    MCD::OPC_Decode, 149, 1, 2, // Opcode: BCLRI_D
/* 4153 */    MCD::OPC_FilterValue, 7, 52, 0, // Skip to: 4209
/* 4157 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 4160 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4172
/* 4164 */    MCD::OPC_CheckPredicate, 13, 217, 32, // Skip to: 12577
/* 4168 */    MCD::OPC_Decode, 151, 1, 2, // Opcode: BCLRI_W
/* 4172 */    MCD::OPC_FilterValue, 1, 209, 32, // Skip to: 12577
/* 4176 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 4179 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4191
/* 4183 */    MCD::OPC_CheckPredicate, 13, 198, 32, // Skip to: 12577
/* 4187 */    MCD::OPC_Decode, 150, 1, 2, // Opcode: BCLRI_H
/* 4191 */    MCD::OPC_FilterValue, 1, 190, 32, // Skip to: 12577
/* 4195 */    MCD::OPC_CheckPredicate, 13, 186, 32, // Skip to: 12577
/* 4199 */    MCD::OPC_CheckField, 19, 1, 0, 180, 32, // Skip to: 12577
/* 4205 */    MCD::OPC_Decode, 148, 1, 2, // Opcode: BCLRI_B
/* 4209 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 4221
/* 4213 */    MCD::OPC_CheckPredicate, 13, 168, 32, // Skip to: 12577
/* 4217 */    MCD::OPC_Decode, 210, 1, 2, // Opcode: BSETI_D
/* 4221 */    MCD::OPC_FilterValue, 9, 52, 0, // Skip to: 4277
/* 4225 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 4228 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4240
/* 4232 */    MCD::OPC_CheckPredicate, 13, 149, 32, // Skip to: 12577
/* 4236 */    MCD::OPC_Decode, 212, 1, 2, // Opcode: BSETI_W
/* 4240 */    MCD::OPC_FilterValue, 1, 141, 32, // Skip to: 12577
/* 4244 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 4247 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4259
/* 4251 */    MCD::OPC_CheckPredicate, 13, 130, 32, // Skip to: 12577
/* 4255 */    MCD::OPC_Decode, 211, 1, 2, // Opcode: BSETI_H
/* 4259 */    MCD::OPC_FilterValue, 1, 122, 32, // Skip to: 12577
/* 4263 */    MCD::OPC_CheckPredicate, 13, 118, 32, // Skip to: 12577
/* 4267 */    MCD::OPC_CheckField, 19, 1, 0, 112, 32, // Skip to: 12577
/* 4273 */    MCD::OPC_Decode, 209, 1, 2, // Opcode: BSETI_B
/* 4277 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 4289
/* 4281 */    MCD::OPC_CheckPredicate, 13, 100, 32, // Skip to: 12577
/* 4285 */    MCD::OPC_Decode, 192, 1, 2, // Opcode: BNEGI_D
/* 4289 */    MCD::OPC_FilterValue, 11, 52, 0, // Skip to: 4345
/* 4293 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 4296 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4308
/* 4300 */    MCD::OPC_CheckPredicate, 13, 81, 32, // Skip to: 12577
/* 4304 */    MCD::OPC_Decode, 194, 1, 2, // Opcode: BNEGI_W
/* 4308 */    MCD::OPC_FilterValue, 1, 73, 32, // Skip to: 12577
/* 4312 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 4315 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4327
/* 4319 */    MCD::OPC_CheckPredicate, 13, 62, 32, // Skip to: 12577
/* 4323 */    MCD::OPC_Decode, 193, 1, 2, // Opcode: BNEGI_H
/* 4327 */    MCD::OPC_FilterValue, 1, 54, 32, // Skip to: 12577
/* 4331 */    MCD::OPC_CheckPredicate, 13, 50, 32, // Skip to: 12577
/* 4335 */    MCD::OPC_CheckField, 19, 1, 0, 44, 32, // Skip to: 12577
/* 4341 */    MCD::OPC_Decode, 191, 1, 2, // Opcode: BNEGI_B
/* 4345 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 4357
/* 4349 */    MCD::OPC_CheckPredicate, 13, 32, 32, // Skip to: 12577
/* 4353 */    MCD::OPC_Decode, 164, 1, 2, // Opcode: BINSLI_D
/* 4357 */    MCD::OPC_FilterValue, 13, 52, 0, // Skip to: 4413
/* 4361 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 4364 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4376
/* 4368 */    MCD::OPC_CheckPredicate, 13, 13, 32, // Skip to: 12577
/* 4372 */    MCD::OPC_Decode, 166, 1, 2, // Opcode: BINSLI_W
/* 4376 */    MCD::OPC_FilterValue, 1, 5, 32, // Skip to: 12577
/* 4380 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 4383 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4395
/* 4387 */    MCD::OPC_CheckPredicate, 13, 250, 31, // Skip to: 12577
/* 4391 */    MCD::OPC_Decode, 165, 1, 2, // Opcode: BINSLI_H
/* 4395 */    MCD::OPC_FilterValue, 1, 242, 31, // Skip to: 12577
/* 4399 */    MCD::OPC_CheckPredicate, 13, 238, 31, // Skip to: 12577
/* 4403 */    MCD::OPC_CheckField, 19, 1, 0, 232, 31, // Skip to: 12577
/* 4409 */    MCD::OPC_Decode, 163, 1, 2, // Opcode: BINSLI_B
/* 4413 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 4425
/* 4417 */    MCD::OPC_CheckPredicate, 13, 220, 31, // Skip to: 12577
/* 4421 */    MCD::OPC_Decode, 172, 1, 2, // Opcode: BINSRI_D
/* 4425 */    MCD::OPC_FilterValue, 15, 212, 31, // Skip to: 12577
/* 4429 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 4432 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4444
/* 4436 */    MCD::OPC_CheckPredicate, 13, 201, 31, // Skip to: 12577
/* 4440 */    MCD::OPC_Decode, 174, 1, 2, // Opcode: BINSRI_W
/* 4444 */    MCD::OPC_FilterValue, 1, 193, 31, // Skip to: 12577
/* 4448 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 4451 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4463
/* 4455 */    MCD::OPC_CheckPredicate, 13, 182, 31, // Skip to: 12577
/* 4459 */    MCD::OPC_Decode, 173, 1, 2, // Opcode: BINSRI_H
/* 4463 */    MCD::OPC_FilterValue, 1, 174, 31, // Skip to: 12577
/* 4467 */    MCD::OPC_CheckPredicate, 13, 170, 31, // Skip to: 12577
/* 4471 */    MCD::OPC_CheckField, 19, 1, 0, 164, 31, // Skip to: 12577
/* 4477 */    MCD::OPC_Decode, 171, 1, 2, // Opcode: BINSRI_B
/* 4481 */    MCD::OPC_FilterValue, 10, 19, 1, // Skip to: 4760
/* 4485 */    MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 4488 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4500
/* 4492 */    MCD::OPC_CheckPredicate, 13, 145, 31, // Skip to: 12577
/* 4496 */    MCD::OPC_Decode, 255, 7, 2, // Opcode: SAT_S_D
/* 4500 */    MCD::OPC_FilterValue, 1, 52, 0, // Skip to: 4556
/* 4504 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 4507 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4519
/* 4511 */    MCD::OPC_CheckPredicate, 13, 126, 31, // Skip to: 12577
/* 4515 */    MCD::OPC_Decode, 129, 8, 2, // Opcode: SAT_S_W
/* 4519 */    MCD::OPC_FilterValue, 1, 118, 31, // Skip to: 12577
/* 4523 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 4526 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4538
/* 4530 */    MCD::OPC_CheckPredicate, 13, 107, 31, // Skip to: 12577
/* 4534 */    MCD::OPC_Decode, 128, 8, 2, // Opcode: SAT_S_H
/* 4538 */    MCD::OPC_FilterValue, 1, 99, 31, // Skip to: 12577
/* 4542 */    MCD::OPC_CheckPredicate, 13, 95, 31, // Skip to: 12577
/* 4546 */    MCD::OPC_CheckField, 19, 1, 0, 89, 31, // Skip to: 12577
/* 4552 */    MCD::OPC_Decode, 254, 7, 2, // Opcode: SAT_S_B
/* 4556 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 4568
/* 4560 */    MCD::OPC_CheckPredicate, 13, 77, 31, // Skip to: 12577
/* 4564 */    MCD::OPC_Decode, 131, 8, 2, // Opcode: SAT_U_D
/* 4568 */    MCD::OPC_FilterValue, 3, 52, 0, // Skip to: 4624
/* 4572 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 4575 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4587
/* 4579 */    MCD::OPC_CheckPredicate, 13, 58, 31, // Skip to: 12577
/* 4583 */    MCD::OPC_Decode, 133, 8, 2, // Opcode: SAT_U_W
/* 4587 */    MCD::OPC_FilterValue, 1, 50, 31, // Skip to: 12577
/* 4591 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 4594 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4606
/* 4598 */    MCD::OPC_CheckPredicate, 13, 39, 31, // Skip to: 12577
/* 4602 */    MCD::OPC_Decode, 132, 8, 2, // Opcode: SAT_U_H
/* 4606 */    MCD::OPC_FilterValue, 1, 31, 31, // Skip to: 12577
/* 4610 */    MCD::OPC_CheckPredicate, 13, 27, 31, // Skip to: 12577
/* 4614 */    MCD::OPC_CheckField, 19, 1, 0, 21, 31, // Skip to: 12577
/* 4620 */    MCD::OPC_Decode, 130, 8, 2, // Opcode: SAT_U_B
/* 4624 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 4636
/* 4628 */    MCD::OPC_CheckPredicate, 13, 9, 31, // Skip to: 12577
/* 4632 */    MCD::OPC_Decode, 234, 8, 2, // Opcode: SRARI_D
/* 4636 */    MCD::OPC_FilterValue, 5, 52, 0, // Skip to: 4692
/* 4640 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 4643 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4655
/* 4647 */    MCD::OPC_CheckPredicate, 13, 246, 30, // Skip to: 12577
/* 4651 */    MCD::OPC_Decode, 236, 8, 2, // Opcode: SRARI_W
/* 4655 */    MCD::OPC_FilterValue, 1, 238, 30, // Skip to: 12577
/* 4659 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 4662 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4674
/* 4666 */    MCD::OPC_CheckPredicate, 13, 227, 30, // Skip to: 12577
/* 4670 */    MCD::OPC_Decode, 235, 8, 2, // Opcode: SRARI_H
/* 4674 */    MCD::OPC_FilterValue, 1, 219, 30, // Skip to: 12577
/* 4678 */    MCD::OPC_CheckPredicate, 13, 215, 30, // Skip to: 12577
/* 4682 */    MCD::OPC_CheckField, 19, 1, 0, 209, 30, // Skip to: 12577
/* 4688 */    MCD::OPC_Decode, 233, 8, 2, // Opcode: SRARI_B
/* 4692 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 4704
/* 4696 */    MCD::OPC_CheckPredicate, 13, 197, 30, // Skip to: 12577
/* 4700 */    MCD::OPC_Decode, 254, 8, 2, // Opcode: SRLRI_D
/* 4704 */    MCD::OPC_FilterValue, 7, 189, 30, // Skip to: 12577
/* 4708 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 4711 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4723
/* 4715 */    MCD::OPC_CheckPredicate, 13, 178, 30, // Skip to: 12577
/* 4719 */    MCD::OPC_Decode, 128, 9, 2, // Opcode: SRLRI_W
/* 4723 */    MCD::OPC_FilterValue, 1, 170, 30, // Skip to: 12577
/* 4727 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 4730 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4742
/* 4734 */    MCD::OPC_CheckPredicate, 13, 159, 30, // Skip to: 12577
/* 4738 */    MCD::OPC_Decode, 255, 8, 2, // Opcode: SRLRI_H
/* 4742 */    MCD::OPC_FilterValue, 1, 151, 30, // Skip to: 12577
/* 4746 */    MCD::OPC_CheckPredicate, 13, 147, 30, // Skip to: 12577
/* 4750 */    MCD::OPC_CheckField, 19, 1, 0, 141, 30, // Skip to: 12577
/* 4756 */    MCD::OPC_Decode, 253, 8, 2, // Opcode: SRLRI_B
/* 4760 */    MCD::OPC_FilterValue, 12, 135, 0, // Skip to: 4899
/* 4764 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 4767 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4779
/* 4771 */    MCD::OPC_CheckPredicate, 13, 122, 30, // Skip to: 12577
/* 4775 */    MCD::OPC_Decode, 199, 1, 2, // Opcode: BNZ_B
/* 4779 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 4791
/* 4783 */    MCD::OPC_CheckPredicate, 13, 110, 30, // Skip to: 12577
/* 4787 */    MCD::OPC_Decode, 201, 1, 2, // Opcode: BNZ_H
/* 4791 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 4803
/* 4795 */    MCD::OPC_CheckPredicate, 13, 98, 30, // Skip to: 12577
/* 4799 */    MCD::OPC_Decode, 203, 1, 2, // Opcode: BNZ_W
/* 4803 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 4815
/* 4807 */    MCD::OPC_CheckPredicate, 13, 86, 30, // Skip to: 12577
/* 4811 */    MCD::OPC_Decode, 200, 1, 2, // Opcode: BNZ_D
/* 4815 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 4827
/* 4819 */    MCD::OPC_CheckPredicate, 13, 74, 30, // Skip to: 12577
/* 4823 */    MCD::OPC_Decode, 217, 1, 2, // Opcode: BZ_B
/* 4827 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 4839
/* 4831 */    MCD::OPC_CheckPredicate, 13, 62, 30, // Skip to: 12577
/* 4835 */    MCD::OPC_Decode, 219, 1, 2, // Opcode: BZ_H
/* 4839 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 4851
/* 4843 */    MCD::OPC_CheckPredicate, 13, 50, 30, // Skip to: 12577
/* 4847 */    MCD::OPC_Decode, 221, 1, 2, // Opcode: BZ_W
/* 4851 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 4863
/* 4855 */    MCD::OPC_CheckPredicate, 13, 38, 30, // Skip to: 12577
/* 4859 */    MCD::OPC_Decode, 218, 1, 2, // Opcode: BZ_D
/* 4863 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 4875
/* 4867 */    MCD::OPC_CheckPredicate, 13, 26, 30, // Skip to: 12577
/* 4871 */    MCD::OPC_Decode, 166, 5, 2, // Opcode: LDI_B
/* 4875 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 4887
/* 4879 */    MCD::OPC_CheckPredicate, 13, 14, 30, // Skip to: 12577
/* 4883 */    MCD::OPC_Decode, 167, 5, 2, // Opcode: LDI_H
/* 4887 */    MCD::OPC_FilterValue, 10, 6, 30, // Skip to: 12577
/* 4891 */    MCD::OPC_CheckPredicate, 13, 2, 30, // Skip to: 12577
/* 4895 */    MCD::OPC_Decode, 168, 5, 2, // Opcode: LDI_W
/* 4899 */    MCD::OPC_FilterValue, 13, 131, 1, // Skip to: 5290
/* 4903 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 4906 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4918
/* 4910 */    MCD::OPC_CheckPredicate, 13, 239, 29, // Skip to: 12577
/* 4914 */    MCD::OPC_Decode, 198, 8, 2, // Opcode: SLL_B
/* 4918 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 4930
/* 4922 */    MCD::OPC_CheckPredicate, 13, 227, 29, // Skip to: 12577
/* 4926 */    MCD::OPC_Decode, 200, 8, 2, // Opcode: SLL_H
/* 4930 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 4942
/* 4934 */    MCD::OPC_CheckPredicate, 13, 215, 29, // Skip to: 12577
/* 4938 */    MCD::OPC_Decode, 202, 8, 2, // Opcode: SLL_W
/* 4942 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 4954
/* 4946 */    MCD::OPC_CheckPredicate, 13, 203, 29, // Skip to: 12577
/* 4950 */    MCD::OPC_Decode, 199, 8, 2, // Opcode: SLL_D
/* 4954 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 4966
/* 4958 */    MCD::OPC_CheckPredicate, 13, 191, 29, // Skip to: 12577
/* 4962 */    MCD::OPC_Decode, 243, 8, 2, // Opcode: SRA_B
/* 4966 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 4978
/* 4970 */    MCD::OPC_CheckPredicate, 13, 179, 29, // Skip to: 12577
/* 4974 */    MCD::OPC_Decode, 245, 8, 2, // Opcode: SRA_H
/* 4978 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 4990
/* 4982 */    MCD::OPC_CheckPredicate, 13, 167, 29, // Skip to: 12577
/* 4986 */    MCD::OPC_Decode, 247, 8, 2, // Opcode: SRA_W
/* 4990 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 5002
/* 4994 */    MCD::OPC_CheckPredicate, 13, 155, 29, // Skip to: 12577
/* 4998 */    MCD::OPC_Decode, 244, 8, 2, // Opcode: SRA_D
/* 5002 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 5014
/* 5006 */    MCD::OPC_CheckPredicate, 13, 143, 29, // Skip to: 12577
/* 5010 */    MCD::OPC_Decode, 135, 9, 2, // Opcode: SRL_B
/* 5014 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 5026
/* 5018 */    MCD::OPC_CheckPredicate, 13, 131, 29, // Skip to: 12577
/* 5022 */    MCD::OPC_Decode, 137, 9, 2, // Opcode: SRL_H
/* 5026 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 5038
/* 5030 */    MCD::OPC_CheckPredicate, 13, 119, 29, // Skip to: 12577
/* 5034 */    MCD::OPC_Decode, 139, 9, 2, // Opcode: SRL_W
/* 5038 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 5050
/* 5042 */    MCD::OPC_CheckPredicate, 13, 107, 29, // Skip to: 12577
/* 5046 */    MCD::OPC_Decode, 136, 9, 2, // Opcode: SRL_D
/* 5050 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 5062
/* 5054 */    MCD::OPC_CheckPredicate, 13, 95, 29, // Skip to: 12577
/* 5058 */    MCD::OPC_Decode, 152, 1, 2, // Opcode: BCLR_B
/* 5062 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 5074
/* 5066 */    MCD::OPC_CheckPredicate, 13, 83, 29, // Skip to: 12577
/* 5070 */    MCD::OPC_Decode, 154, 1, 2, // Opcode: BCLR_H
/* 5074 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 5086
/* 5078 */    MCD::OPC_CheckPredicate, 13, 71, 29, // Skip to: 12577
/* 5082 */    MCD::OPC_Decode, 155, 1, 2, // Opcode: BCLR_W
/* 5086 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 5098
/* 5090 */    MCD::OPC_CheckPredicate, 13, 59, 29, // Skip to: 12577
/* 5094 */    MCD::OPC_Decode, 153, 1, 2, // Opcode: BCLR_D
/* 5098 */    MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 5110
/* 5102 */    MCD::OPC_CheckPredicate, 13, 47, 29, // Skip to: 12577
/* 5106 */    MCD::OPC_Decode, 213, 1, 2, // Opcode: BSET_B
/* 5110 */    MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 5122
/* 5114 */    MCD::OPC_CheckPredicate, 13, 35, 29, // Skip to: 12577
/* 5118 */    MCD::OPC_Decode, 215, 1, 2, // Opcode: BSET_H
/* 5122 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 5134
/* 5126 */    MCD::OPC_CheckPredicate, 13, 23, 29, // Skip to: 12577
/* 5130 */    MCD::OPC_Decode, 216, 1, 2, // Opcode: BSET_W
/* 5134 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 5146
/* 5138 */    MCD::OPC_CheckPredicate, 13, 11, 29, // Skip to: 12577
/* 5142 */    MCD::OPC_Decode, 214, 1, 2, // Opcode: BSET_D
/* 5146 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 5158
/* 5150 */    MCD::OPC_CheckPredicate, 13, 255, 28, // Skip to: 12577
/* 5154 */    MCD::OPC_Decode, 195, 1, 2, // Opcode: BNEG_B
/* 5158 */    MCD::OPC_FilterValue, 21, 8, 0, // Skip to: 5170
/* 5162 */    MCD::OPC_CheckPredicate, 13, 243, 28, // Skip to: 12577
/* 5166 */    MCD::OPC_Decode, 197, 1, 2, // Opcode: BNEG_H
/* 5170 */    MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 5182
/* 5174 */    MCD::OPC_CheckPredicate, 13, 231, 28, // Skip to: 12577
/* 5178 */    MCD::OPC_Decode, 198, 1, 2, // Opcode: BNEG_W
/* 5182 */    MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 5194
/* 5186 */    MCD::OPC_CheckPredicate, 13, 219, 28, // Skip to: 12577
/* 5190 */    MCD::OPC_Decode, 196, 1, 2, // Opcode: BNEG_D
/* 5194 */    MCD::OPC_FilterValue, 24, 8, 0, // Skip to: 5206
/* 5198 */    MCD::OPC_CheckPredicate, 13, 207, 28, // Skip to: 12577
/* 5202 */    MCD::OPC_Decode, 167, 1, 2, // Opcode: BINSL_B
/* 5206 */    MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 5218
/* 5210 */    MCD::OPC_CheckPredicate, 13, 195, 28, // Skip to: 12577
/* 5214 */    MCD::OPC_Decode, 169, 1, 2, // Opcode: BINSL_H
/* 5218 */    MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 5230
/* 5222 */    MCD::OPC_CheckPredicate, 13, 183, 28, // Skip to: 12577
/* 5226 */    MCD::OPC_Decode, 170, 1, 2, // Opcode: BINSL_W
/* 5230 */    MCD::OPC_FilterValue, 27, 8, 0, // Skip to: 5242
/* 5234 */    MCD::OPC_CheckPredicate, 13, 171, 28, // Skip to: 12577
/* 5238 */    MCD::OPC_Decode, 168, 1, 2, // Opcode: BINSL_D
/* 5242 */    MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 5254
/* 5246 */    MCD::OPC_CheckPredicate, 13, 159, 28, // Skip to: 12577
/* 5250 */    MCD::OPC_Decode, 175, 1, 2, // Opcode: BINSR_B
/* 5254 */    MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 5266
/* 5258 */    MCD::OPC_CheckPredicate, 13, 147, 28, // Skip to: 12577
/* 5262 */    MCD::OPC_Decode, 177, 1, 2, // Opcode: BINSR_H
/* 5266 */    MCD::OPC_FilterValue, 30, 8, 0, // Skip to: 5278
/* 5270 */    MCD::OPC_CheckPredicate, 13, 135, 28, // Skip to: 12577
/* 5274 */    MCD::OPC_Decode, 178, 1, 2, // Opcode: BINSR_W
/* 5278 */    MCD::OPC_FilterValue, 31, 127, 28, // Skip to: 12577
/* 5282 */    MCD::OPC_CheckPredicate, 13, 123, 28, // Skip to: 12577
/* 5286 */    MCD::OPC_Decode, 176, 1, 2, // Opcode: BINSR_D
/* 5290 */    MCD::OPC_FilterValue, 14, 127, 1, // Skip to: 5677
/* 5294 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 5297 */    MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 5308
/* 5301 */    MCD::OPC_CheckPredicate, 13, 104, 28, // Skip to: 12577
/* 5305 */    MCD::OPC_Decode, 51, 2, // Opcode: ADDV_B
/* 5308 */    MCD::OPC_FilterValue, 1, 7, 0, // Skip to: 5319
/* 5312 */    MCD::OPC_CheckPredicate, 13, 93, 28, // Skip to: 12577
/* 5316 */    MCD::OPC_Decode, 53, 2, // Opcode: ADDV_H
/* 5319 */    MCD::OPC_FilterValue, 2, 7, 0, // Skip to: 5330
/* 5323 */    MCD::OPC_CheckPredicate, 13, 82, 28, // Skip to: 12577
/* 5327 */    MCD::OPC_Decode, 54, 2, // Opcode: ADDV_W
/* 5330 */    MCD::OPC_FilterValue, 3, 7, 0, // Skip to: 5341
/* 5334 */    MCD::OPC_CheckPredicate, 13, 71, 28, // Skip to: 12577
/* 5338 */    MCD::OPC_Decode, 52, 2, // Opcode: ADDV_D
/* 5341 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 5353
/* 5345 */    MCD::OPC_CheckPredicate, 13, 60, 28, // Skip to: 12577
/* 5349 */    MCD::OPC_Decode, 186, 9, 2, // Opcode: SUBV_B
/* 5353 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 5365
/* 5357 */    MCD::OPC_CheckPredicate, 13, 48, 28, // Skip to: 12577
/* 5361 */    MCD::OPC_Decode, 188, 9, 2, // Opcode: SUBV_H
/* 5365 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 5377
/* 5369 */    MCD::OPC_CheckPredicate, 13, 36, 28, // Skip to: 12577
/* 5373 */    MCD::OPC_Decode, 189, 9, 2, // Opcode: SUBV_W
/* 5377 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 5389
/* 5381 */    MCD::OPC_CheckPredicate, 13, 24, 28, // Skip to: 12577
/* 5385 */    MCD::OPC_Decode, 187, 9, 2, // Opcode: SUBV_D
/* 5389 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 5401
/* 5393 */    MCD::OPC_CheckPredicate, 13, 12, 28, // Skip to: 12577
/* 5397 */    MCD::OPC_Decode, 129, 6, 2, // Opcode: MAX_S_B
/* 5401 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 5413
/* 5405 */    MCD::OPC_CheckPredicate, 13, 0, 28, // Skip to: 12577
/* 5409 */    MCD::OPC_Decode, 131, 6, 2, // Opcode: MAX_S_H
/* 5413 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 5425
/* 5417 */    MCD::OPC_CheckPredicate, 13, 244, 27, // Skip to: 12577
/* 5421 */    MCD::OPC_Decode, 132, 6, 2, // Opcode: MAX_S_W
/* 5425 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 5437
/* 5429 */    MCD::OPC_CheckPredicate, 13, 232, 27, // Skip to: 12577
/* 5433 */    MCD::OPC_Decode, 130, 6, 2, // Opcode: MAX_S_D
/* 5437 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 5449
/* 5441 */    MCD::OPC_CheckPredicate, 13, 220, 27, // Skip to: 12577
/* 5445 */    MCD::OPC_Decode, 133, 6, 2, // Opcode: MAX_U_B
/* 5449 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 5461
/* 5453 */    MCD::OPC_CheckPredicate, 13, 208, 27, // Skip to: 12577
/* 5457 */    MCD::OPC_Decode, 135, 6, 2, // Opcode: MAX_U_H
/* 5461 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 5473
/* 5465 */    MCD::OPC_CheckPredicate, 13, 196, 27, // Skip to: 12577
/* 5469 */    MCD::OPC_Decode, 136, 6, 2, // Opcode: MAX_U_W
/* 5473 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 5485
/* 5477 */    MCD::OPC_CheckPredicate, 13, 184, 27, // Skip to: 12577
/* 5481 */    MCD::OPC_Decode, 134, 6, 2, // Opcode: MAX_U_D
/* 5485 */    MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 5497
/* 5489 */    MCD::OPC_CheckPredicate, 13, 172, 27, // Skip to: 12577
/* 5493 */    MCD::OPC_Decode, 159, 6, 2, // Opcode: MIN_S_B
/* 5497 */    MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 5509
/* 5501 */    MCD::OPC_CheckPredicate, 13, 160, 27, // Skip to: 12577
/* 5505 */    MCD::OPC_Decode, 161, 6, 2, // Opcode: MIN_S_H
/* 5509 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 5521
/* 5513 */    MCD::OPC_CheckPredicate, 13, 148, 27, // Skip to: 12577
/* 5517 */    MCD::OPC_Decode, 162, 6, 2, // Opcode: MIN_S_W
/* 5521 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 5533
/* 5525 */    MCD::OPC_CheckPredicate, 13, 136, 27, // Skip to: 12577
/* 5529 */    MCD::OPC_Decode, 160, 6, 2, // Opcode: MIN_S_D
/* 5533 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 5545
/* 5537 */    MCD::OPC_CheckPredicate, 13, 124, 27, // Skip to: 12577
/* 5541 */    MCD::OPC_Decode, 163, 6, 2, // Opcode: MIN_U_B
/* 5545 */    MCD::OPC_FilterValue, 21, 8, 0, // Skip to: 5557
/* 5549 */    MCD::OPC_CheckPredicate, 13, 112, 27, // Skip to: 12577
/* 5553 */    MCD::OPC_Decode, 165, 6, 2, // Opcode: MIN_U_H
/* 5557 */    MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 5569
/* 5561 */    MCD::OPC_CheckPredicate, 13, 100, 27, // Skip to: 12577
/* 5565 */    MCD::OPC_Decode, 166, 6, 2, // Opcode: MIN_U_W
/* 5569 */    MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 5581
/* 5573 */    MCD::OPC_CheckPredicate, 13, 88, 27, // Skip to: 12577
/* 5577 */    MCD::OPC_Decode, 164, 6, 2, // Opcode: MIN_U_D
/* 5581 */    MCD::OPC_FilterValue, 24, 8, 0, // Skip to: 5593
/* 5585 */    MCD::OPC_CheckPredicate, 13, 76, 27, // Skip to: 12577
/* 5589 */    MCD::OPC_Decode, 253, 5, 2, // Opcode: MAX_A_B
/* 5593 */    MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 5605
/* 5597 */    MCD::OPC_CheckPredicate, 13, 64, 27, // Skip to: 12577
/* 5601 */    MCD::OPC_Decode, 255, 5, 2, // Opcode: MAX_A_H
/* 5605 */    MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 5617
/* 5609 */    MCD::OPC_CheckPredicate, 13, 52, 27, // Skip to: 12577
/* 5613 */    MCD::OPC_Decode, 128, 6, 2, // Opcode: MAX_A_W
/* 5617 */    MCD::OPC_FilterValue, 27, 8, 0, // Skip to: 5629
/* 5621 */    MCD::OPC_CheckPredicate, 13, 40, 27, // Skip to: 12577
/* 5625 */    MCD::OPC_Decode, 254, 5, 2, // Opcode: MAX_A_D
/* 5629 */    MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 5641
/* 5633 */    MCD::OPC_CheckPredicate, 13, 28, 27, // Skip to: 12577
/* 5637 */    MCD::OPC_Decode, 155, 6, 2, // Opcode: MIN_A_B
/* 5641 */    MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 5653
/* 5645 */    MCD::OPC_CheckPredicate, 13, 16, 27, // Skip to: 12577
/* 5649 */    MCD::OPC_Decode, 157, 6, 2, // Opcode: MIN_A_H
/* 5653 */    MCD::OPC_FilterValue, 30, 8, 0, // Skip to: 5665
/* 5657 */    MCD::OPC_CheckPredicate, 13, 4, 27, // Skip to: 12577
/* 5661 */    MCD::OPC_Decode, 158, 6, 2, // Opcode: MIN_A_W
/* 5665 */    MCD::OPC_FilterValue, 31, 252, 26, // Skip to: 12577
/* 5669 */    MCD::OPC_CheckPredicate, 13, 248, 26, // Skip to: 12577
/* 5673 */    MCD::OPC_Decode, 156, 6, 2, // Opcode: MIN_A_D
/* 5677 */    MCD::OPC_FilterValue, 15, 83, 1, // Skip to: 6020
/* 5681 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 5684 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 5696
/* 5688 */    MCD::OPC_CheckPredicate, 13, 229, 26, // Skip to: 12577
/* 5692 */    MCD::OPC_Decode, 253, 1, 2, // Opcode: CEQ_B
/* 5696 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 5708
/* 5700 */    MCD::OPC_CheckPredicate, 13, 217, 26, // Skip to: 12577
/* 5704 */    MCD::OPC_Decode, 255, 1, 2, // Opcode: CEQ_H
/* 5708 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 5720
/* 5712 */    MCD::OPC_CheckPredicate, 13, 205, 26, // Skip to: 12577
/* 5716 */    MCD::OPC_Decode, 128, 2, 2, // Opcode: CEQ_W
/* 5720 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 5732
/* 5724 */    MCD::OPC_CheckPredicate, 13, 193, 26, // Skip to: 12577
/* 5728 */    MCD::OPC_Decode, 254, 1, 2, // Opcode: CEQ_D
/* 5732 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 5744
/* 5736 */    MCD::OPC_CheckPredicate, 13, 181, 26, // Skip to: 12577
/* 5740 */    MCD::OPC_Decode, 156, 2, 2, // Opcode: CLT_S_B
/* 5744 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 5756
/* 5748 */    MCD::OPC_CheckPredicate, 13, 169, 26, // Skip to: 12577
/* 5752 */    MCD::OPC_Decode, 158, 2, 2, // Opcode: CLT_S_H
/* 5756 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 5768
/* 5760 */    MCD::OPC_CheckPredicate, 13, 157, 26, // Skip to: 12577
/* 5764 */    MCD::OPC_Decode, 159, 2, 2, // Opcode: CLT_S_W
/* 5768 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 5780
/* 5772 */    MCD::OPC_CheckPredicate, 13, 145, 26, // Skip to: 12577
/* 5776 */    MCD::OPC_Decode, 157, 2, 2, // Opcode: CLT_S_D
/* 5780 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 5792
/* 5784 */    MCD::OPC_CheckPredicate, 13, 133, 26, // Skip to: 12577
/* 5788 */    MCD::OPC_Decode, 160, 2, 2, // Opcode: CLT_U_B
/* 5792 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 5804
/* 5796 */    MCD::OPC_CheckPredicate, 13, 121, 26, // Skip to: 12577
/* 5800 */    MCD::OPC_Decode, 162, 2, 2, // Opcode: CLT_U_H
/* 5804 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 5816
/* 5808 */    MCD::OPC_CheckPredicate, 13, 109, 26, // Skip to: 12577
/* 5812 */    MCD::OPC_Decode, 163, 2, 2, // Opcode: CLT_U_W
/* 5816 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 5828
/* 5820 */    MCD::OPC_CheckPredicate, 13, 97, 26, // Skip to: 12577
/* 5824 */    MCD::OPC_Decode, 161, 2, 2, // Opcode: CLT_U_D
/* 5828 */    MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 5840
/* 5832 */    MCD::OPC_CheckPredicate, 13, 85, 26, // Skip to: 12577
/* 5836 */    MCD::OPC_Decode, 139, 2, 2, // Opcode: CLE_S_B
/* 5840 */    MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 5852
/* 5844 */    MCD::OPC_CheckPredicate, 13, 73, 26, // Skip to: 12577
/* 5848 */    MCD::OPC_Decode, 141, 2, 2, // Opcode: CLE_S_H
/* 5852 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 5864
/* 5856 */    MCD::OPC_CheckPredicate, 13, 61, 26, // Skip to: 12577
/* 5860 */    MCD::OPC_Decode, 142, 2, 2, // Opcode: CLE_S_W
/* 5864 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 5876
/* 5868 */    MCD::OPC_CheckPredicate, 13, 49, 26, // Skip to: 12577
/* 5872 */    MCD::OPC_Decode, 140, 2, 2, // Opcode: CLE_S_D
/* 5876 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 5888
/* 5880 */    MCD::OPC_CheckPredicate, 13, 37, 26, // Skip to: 12577
/* 5884 */    MCD::OPC_Decode, 143, 2, 2, // Opcode: CLE_U_B
/* 5888 */    MCD::OPC_FilterValue, 21, 8, 0, // Skip to: 5900
/* 5892 */    MCD::OPC_CheckPredicate, 13, 25, 26, // Skip to: 12577
/* 5896 */    MCD::OPC_Decode, 145, 2, 2, // Opcode: CLE_U_H
/* 5900 */    MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 5912
/* 5904 */    MCD::OPC_CheckPredicate, 13, 13, 26, // Skip to: 12577
/* 5908 */    MCD::OPC_Decode, 146, 2, 2, // Opcode: CLE_U_W
/* 5912 */    MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 5924
/* 5916 */    MCD::OPC_CheckPredicate, 13, 1, 26, // Skip to: 12577
/* 5920 */    MCD::OPC_Decode, 144, 2, 2, // Opcode: CLE_U_D
/* 5924 */    MCD::OPC_FilterValue, 24, 8, 0, // Skip to: 5936
/* 5928 */    MCD::OPC_CheckPredicate, 13, 245, 25, // Skip to: 12577
/* 5932 */    MCD::OPC_Decode, 173, 5, 2, // Opcode: LDX_B
/* 5936 */    MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 5948
/* 5940 */    MCD::OPC_CheckPredicate, 13, 233, 25, // Skip to: 12577
/* 5944 */    MCD::OPC_Decode, 175, 5, 2, // Opcode: LDX_H
/* 5948 */    MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 5960
/* 5952 */    MCD::OPC_CheckPredicate, 13, 221, 25, // Skip to: 12577
/* 5956 */    MCD::OPC_Decode, 176, 5, 2, // Opcode: LDX_W
/* 5960 */    MCD::OPC_FilterValue, 27, 8, 0, // Skip to: 5972
/* 5964 */    MCD::OPC_CheckPredicate, 13, 209, 25, // Skip to: 12577
/* 5968 */    MCD::OPC_Decode, 174, 5, 2, // Opcode: LDX_D
/* 5972 */    MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 5984
/* 5976 */    MCD::OPC_CheckPredicate, 13, 197, 25, // Skip to: 12577
/* 5980 */    MCD::OPC_Decode, 144, 9, 2, // Opcode: STX_B
/* 5984 */    MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 5996
/* 5988 */    MCD::OPC_CheckPredicate, 13, 185, 25, // Skip to: 12577
/* 5992 */    MCD::OPC_Decode, 146, 9, 2, // Opcode: STX_H
/* 5996 */    MCD::OPC_FilterValue, 30, 8, 0, // Skip to: 6008
/* 6000 */    MCD::OPC_CheckPredicate, 13, 173, 25, // Skip to: 12577
/* 6004 */    MCD::OPC_Decode, 147, 9, 2, // Opcode: STX_W
/* 6008 */    MCD::OPC_FilterValue, 31, 165, 25, // Skip to: 12577
/* 6012 */    MCD::OPC_CheckPredicate, 13, 161, 25, // Skip to: 12577
/* 6016 */    MCD::OPC_Decode, 145, 9, 2, // Opcode: STX_D
/* 6020 */    MCD::OPC_FilterValue, 16, 105, 1, // Skip to: 6385
/* 6024 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 6027 */    MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 6038
/* 6031 */    MCD::OPC_CheckPredicate, 13, 142, 25, // Skip to: 12577
/* 6035 */    MCD::OPC_Decode, 56, 2, // Opcode: ADD_A_B
/* 6038 */    MCD::OPC_FilterValue, 1, 7, 0, // Skip to: 6049
/* 6042 */    MCD::OPC_CheckPredicate, 13, 131, 25, // Skip to: 12577
/* 6046 */    MCD::OPC_Decode, 58, 2, // Opcode: ADD_A_H
/* 6049 */    MCD::OPC_FilterValue, 2, 7, 0, // Skip to: 6060
/* 6053 */    MCD::OPC_CheckPredicate, 13, 120, 25, // Skip to: 12577
/* 6057 */    MCD::OPC_Decode, 59, 2, // Opcode: ADD_A_W
/* 6060 */    MCD::OPC_FilterValue, 3, 7, 0, // Skip to: 6071
/* 6064 */    MCD::OPC_CheckPredicate, 13, 109, 25, // Skip to: 12577
/* 6068 */    MCD::OPC_Decode, 57, 2, // Opcode: ADD_A_D
/* 6071 */    MCD::OPC_FilterValue, 4, 7, 0, // Skip to: 6082
/* 6075 */    MCD::OPC_CheckPredicate, 13, 98, 25, // Skip to: 12577
/* 6079 */    MCD::OPC_Decode, 29, 2, // Opcode: ADDS_A_B
/* 6082 */    MCD::OPC_FilterValue, 5, 7, 0, // Skip to: 6093
/* 6086 */    MCD::OPC_CheckPredicate, 13, 87, 25, // Skip to: 12577
/* 6090 */    MCD::OPC_Decode, 31, 2, // Opcode: ADDS_A_H
/* 6093 */    MCD::OPC_FilterValue, 6, 7, 0, // Skip to: 6104
/* 6097 */    MCD::OPC_CheckPredicate, 13, 76, 25, // Skip to: 12577
/* 6101 */    MCD::OPC_Decode, 32, 2, // Opcode: ADDS_A_W
/* 6104 */    MCD::OPC_FilterValue, 7, 7, 0, // Skip to: 6115
/* 6108 */    MCD::OPC_CheckPredicate, 13, 65, 25, // Skip to: 12577
/* 6112 */    MCD::OPC_Decode, 30, 2, // Opcode: ADDS_A_D
/* 6115 */    MCD::OPC_FilterValue, 8, 7, 0, // Skip to: 6126
/* 6119 */    MCD::OPC_CheckPredicate, 13, 54, 25, // Skip to: 12577
/* 6123 */    MCD::OPC_Decode, 33, 2, // Opcode: ADDS_S_B
/* 6126 */    MCD::OPC_FilterValue, 9, 7, 0, // Skip to: 6137
/* 6130 */    MCD::OPC_CheckPredicate, 13, 43, 25, // Skip to: 12577
/* 6134 */    MCD::OPC_Decode, 35, 2, // Opcode: ADDS_S_H
/* 6137 */    MCD::OPC_FilterValue, 10, 7, 0, // Skip to: 6148
/* 6141 */    MCD::OPC_CheckPredicate, 13, 32, 25, // Skip to: 12577
/* 6145 */    MCD::OPC_Decode, 36, 2, // Opcode: ADDS_S_W
/* 6148 */    MCD::OPC_FilterValue, 11, 7, 0, // Skip to: 6159
/* 6152 */    MCD::OPC_CheckPredicate, 13, 21, 25, // Skip to: 12577
/* 6156 */    MCD::OPC_Decode, 34, 2, // Opcode: ADDS_S_D
/* 6159 */    MCD::OPC_FilterValue, 12, 7, 0, // Skip to: 6170
/* 6163 */    MCD::OPC_CheckPredicate, 13, 10, 25, // Skip to: 12577
/* 6167 */    MCD::OPC_Decode, 37, 2, // Opcode: ADDS_U_B
/* 6170 */    MCD::OPC_FilterValue, 13, 7, 0, // Skip to: 6181
/* 6174 */    MCD::OPC_CheckPredicate, 13, 255, 24, // Skip to: 12577
/* 6178 */    MCD::OPC_Decode, 39, 2, // Opcode: ADDS_U_H
/* 6181 */    MCD::OPC_FilterValue, 14, 7, 0, // Skip to: 6192
/* 6185 */    MCD::OPC_CheckPredicate, 13, 244, 24, // Skip to: 12577
/* 6189 */    MCD::OPC_Decode, 40, 2, // Opcode: ADDS_U_W
/* 6192 */    MCD::OPC_FilterValue, 15, 7, 0, // Skip to: 6203
/* 6196 */    MCD::OPC_CheckPredicate, 13, 233, 24, // Skip to: 12577
/* 6200 */    MCD::OPC_Decode, 38, 2, // Opcode: ADDS_U_D
/* 6203 */    MCD::OPC_FilterValue, 16, 7, 0, // Skip to: 6214
/* 6207 */    MCD::OPC_CheckPredicate, 13, 222, 24, // Skip to: 12577
/* 6211 */    MCD::OPC_Decode, 126, 2, // Opcode: AVE_S_B
/* 6214 */    MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 6226
/* 6218 */    MCD::OPC_CheckPredicate, 13, 211, 24, // Skip to: 12577
/* 6222 */    MCD::OPC_Decode, 128, 1, 2, // Opcode: AVE_S_H
/* 6226 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 6238
/* 6230 */    MCD::OPC_CheckPredicate, 13, 199, 24, // Skip to: 12577
/* 6234 */    MCD::OPC_Decode, 129, 1, 2, // Opcode: AVE_S_W
/* 6238 */    MCD::OPC_FilterValue, 19, 7, 0, // Skip to: 6249
/* 6242 */    MCD::OPC_CheckPredicate, 13, 187, 24, // Skip to: 12577
/* 6246 */    MCD::OPC_Decode, 127, 2, // Opcode: AVE_S_D
/* 6249 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 6261
/* 6253 */    MCD::OPC_CheckPredicate, 13, 176, 24, // Skip to: 12577
/* 6257 */    MCD::OPC_Decode, 130, 1, 2, // Opcode: AVE_U_B
/* 6261 */    MCD::OPC_FilterValue, 21, 8, 0, // Skip to: 6273
/* 6265 */    MCD::OPC_CheckPredicate, 13, 164, 24, // Skip to: 12577
/* 6269 */    MCD::OPC_Decode, 132, 1, 2, // Opcode: AVE_U_H
/* 6273 */    MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 6285
/* 6277 */    MCD::OPC_CheckPredicate, 13, 152, 24, // Skip to: 12577
/* 6281 */    MCD::OPC_Decode, 133, 1, 2, // Opcode: AVE_U_W
/* 6285 */    MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 6297
/* 6289 */    MCD::OPC_CheckPredicate, 13, 140, 24, // Skip to: 12577
/* 6293 */    MCD::OPC_Decode, 131, 1, 2, // Opcode: AVE_U_D
/* 6297 */    MCD::OPC_FilterValue, 24, 7, 0, // Skip to: 6308
/* 6301 */    MCD::OPC_CheckPredicate, 13, 128, 24, // Skip to: 12577
/* 6305 */    MCD::OPC_Decode, 118, 2, // Opcode: AVER_S_B
/* 6308 */    MCD::OPC_FilterValue, 25, 7, 0, // Skip to: 6319
/* 6312 */    MCD::OPC_CheckPredicate, 13, 117, 24, // Skip to: 12577
/* 6316 */    MCD::OPC_Decode, 120, 2, // Opcode: AVER_S_H
/* 6319 */    MCD::OPC_FilterValue, 26, 7, 0, // Skip to: 6330
/* 6323 */    MCD::OPC_CheckPredicate, 13, 106, 24, // Skip to: 12577
/* 6327 */    MCD::OPC_Decode, 121, 2, // Opcode: AVER_S_W
/* 6330 */    MCD::OPC_FilterValue, 27, 7, 0, // Skip to: 6341
/* 6334 */    MCD::OPC_CheckPredicate, 13, 95, 24, // Skip to: 12577
/* 6338 */    MCD::OPC_Decode, 119, 2, // Opcode: AVER_S_D
/* 6341 */    MCD::OPC_FilterValue, 28, 7, 0, // Skip to: 6352
/* 6345 */    MCD::OPC_CheckPredicate, 13, 84, 24, // Skip to: 12577
/* 6349 */    MCD::OPC_Decode, 122, 2, // Opcode: AVER_U_B
/* 6352 */    MCD::OPC_FilterValue, 29, 7, 0, // Skip to: 6363
/* 6356 */    MCD::OPC_CheckPredicate, 13, 73, 24, // Skip to: 12577
/* 6360 */    MCD::OPC_Decode, 124, 2, // Opcode: AVER_U_H
/* 6363 */    MCD::OPC_FilterValue, 30, 7, 0, // Skip to: 6374
/* 6367 */    MCD::OPC_CheckPredicate, 13, 62, 24, // Skip to: 12577
/* 6371 */    MCD::OPC_Decode, 125, 2, // Opcode: AVER_U_W
/* 6374 */    MCD::OPC_FilterValue, 31, 55, 24, // Skip to: 12577
/* 6378 */    MCD::OPC_CheckPredicate, 13, 51, 24, // Skip to: 12577
/* 6382 */    MCD::OPC_Decode, 123, 2, // Opcode: AVER_U_D
/* 6385 */    MCD::OPC_FilterValue, 17, 27, 1, // Skip to: 6672
/* 6389 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 6392 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 6404
/* 6396 */    MCD::OPC_CheckPredicate, 13, 33, 24, // Skip to: 12577
/* 6400 */    MCD::OPC_Decode, 168, 9, 2, // Opcode: SUBS_S_B
/* 6404 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 6416
/* 6408 */    MCD::OPC_CheckPredicate, 13, 21, 24, // Skip to: 12577
/* 6412 */    MCD::OPC_Decode, 170, 9, 2, // Opcode: SUBS_S_H
/* 6416 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 6428
/* 6420 */    MCD::OPC_CheckPredicate, 13, 9, 24, // Skip to: 12577
/* 6424 */    MCD::OPC_Decode, 171, 9, 2, // Opcode: SUBS_S_W
/* 6428 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 6440
/* 6432 */    MCD::OPC_CheckPredicate, 13, 253, 23, // Skip to: 12577
/* 6436 */    MCD::OPC_Decode, 169, 9, 2, // Opcode: SUBS_S_D
/* 6440 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 6452
/* 6444 */    MCD::OPC_CheckPredicate, 13, 241, 23, // Skip to: 12577
/* 6448 */    MCD::OPC_Decode, 172, 9, 2, // Opcode: SUBS_U_B
/* 6452 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 6464
/* 6456 */    MCD::OPC_CheckPredicate, 13, 229, 23, // Skip to: 12577
/* 6460 */    MCD::OPC_Decode, 174, 9, 2, // Opcode: SUBS_U_H
/* 6464 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 6476
/* 6468 */    MCD::OPC_CheckPredicate, 13, 217, 23, // Skip to: 12577
/* 6472 */    MCD::OPC_Decode, 175, 9, 2, // Opcode: SUBS_U_W
/* 6476 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 6488
/* 6480 */    MCD::OPC_CheckPredicate, 13, 205, 23, // Skip to: 12577
/* 6484 */    MCD::OPC_Decode, 173, 9, 2, // Opcode: SUBS_U_D
/* 6488 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 6500
/* 6492 */    MCD::OPC_CheckPredicate, 13, 193, 23, // Skip to: 12577
/* 6496 */    MCD::OPC_Decode, 164, 9, 2, // Opcode: SUBSUU_S_B
/* 6500 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 6512
/* 6504 */    MCD::OPC_CheckPredicate, 13, 181, 23, // Skip to: 12577
/* 6508 */    MCD::OPC_Decode, 166, 9, 2, // Opcode: SUBSUU_S_H
/* 6512 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 6524
/* 6516 */    MCD::OPC_CheckPredicate, 13, 169, 23, // Skip to: 12577
/* 6520 */    MCD::OPC_Decode, 167, 9, 2, // Opcode: SUBSUU_S_W
/* 6524 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 6536
/* 6528 */    MCD::OPC_CheckPredicate, 13, 157, 23, // Skip to: 12577
/* 6532 */    MCD::OPC_Decode, 165, 9, 2, // Opcode: SUBSUU_S_D
/* 6536 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 6548
/* 6540 */    MCD::OPC_CheckPredicate, 13, 145, 23, // Skip to: 12577
/* 6544 */    MCD::OPC_Decode, 160, 9, 2, // Opcode: SUBSUS_U_B
/* 6548 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 6560
/* 6552 */    MCD::OPC_CheckPredicate, 13, 133, 23, // Skip to: 12577
/* 6556 */    MCD::OPC_Decode, 162, 9, 2, // Opcode: SUBSUS_U_H
/* 6560 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 6572
/* 6564 */    MCD::OPC_CheckPredicate, 13, 121, 23, // Skip to: 12577
/* 6568 */    MCD::OPC_Decode, 163, 9, 2, // Opcode: SUBSUS_U_W
/* 6572 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 6584
/* 6576 */    MCD::OPC_CheckPredicate, 13, 109, 23, // Skip to: 12577
/* 6580 */    MCD::OPC_Decode, 161, 9, 2, // Opcode: SUBSUS_U_D
/* 6584 */    MCD::OPC_FilterValue, 16, 7, 0, // Skip to: 6595
/* 6588 */    MCD::OPC_CheckPredicate, 13, 97, 23, // Skip to: 12577
/* 6592 */    MCD::OPC_Decode, 78, 2, // Opcode: ASUB_S_B
/* 6595 */    MCD::OPC_FilterValue, 17, 7, 0, // Skip to: 6606
/* 6599 */    MCD::OPC_CheckPredicate, 13, 86, 23, // Skip to: 12577
/* 6603 */    MCD::OPC_Decode, 80, 2, // Opcode: ASUB_S_H
/* 6606 */    MCD::OPC_FilterValue, 18, 7, 0, // Skip to: 6617
/* 6610 */    MCD::OPC_CheckPredicate, 13, 75, 23, // Skip to: 12577
/* 6614 */    MCD::OPC_Decode, 81, 2, // Opcode: ASUB_S_W
/* 6617 */    MCD::OPC_FilterValue, 19, 7, 0, // Skip to: 6628
/* 6621 */    MCD::OPC_CheckPredicate, 13, 64, 23, // Skip to: 12577
/* 6625 */    MCD::OPC_Decode, 79, 2, // Opcode: ASUB_S_D
/* 6628 */    MCD::OPC_FilterValue, 20, 7, 0, // Skip to: 6639
/* 6632 */    MCD::OPC_CheckPredicate, 13, 53, 23, // Skip to: 12577
/* 6636 */    MCD::OPC_Decode, 82, 2, // Opcode: ASUB_U_B
/* 6639 */    MCD::OPC_FilterValue, 21, 7, 0, // Skip to: 6650
/* 6643 */    MCD::OPC_CheckPredicate, 13, 42, 23, // Skip to: 12577
/* 6647 */    MCD::OPC_Decode, 84, 2, // Opcode: ASUB_U_H
/* 6650 */    MCD::OPC_FilterValue, 22, 7, 0, // Skip to: 6661
/* 6654 */    MCD::OPC_CheckPredicate, 13, 31, 23, // Skip to: 12577
/* 6658 */    MCD::OPC_Decode, 85, 2, // Opcode: ASUB_U_W
/* 6661 */    MCD::OPC_FilterValue, 23, 24, 23, // Skip to: 12577
/* 6665 */    MCD::OPC_CheckPredicate, 13, 20, 23, // Skip to: 12577
/* 6669 */    MCD::OPC_Decode, 83, 2, // Opcode: ASUB_U_D
/* 6672 */    MCD::OPC_FilterValue, 18, 83, 1, // Skip to: 7015
/* 6676 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 6679 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 6691
/* 6683 */    MCD::OPC_CheckPredicate, 13, 2, 23, // Skip to: 12577
/* 6687 */    MCD::OPC_Decode, 252, 6, 2, // Opcode: MULV_B
/* 6691 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 6703
/* 6695 */    MCD::OPC_CheckPredicate, 13, 246, 22, // Skip to: 12577
/* 6699 */    MCD::OPC_Decode, 254, 6, 2, // Opcode: MULV_H
/* 6703 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 6715
/* 6707 */    MCD::OPC_CheckPredicate, 13, 234, 22, // Skip to: 12577
/* 6711 */    MCD::OPC_Decode, 255, 6, 2, // Opcode: MULV_W
/* 6715 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 6727
/* 6719 */    MCD::OPC_CheckPredicate, 13, 222, 22, // Skip to: 12577
/* 6723 */    MCD::OPC_Decode, 253, 6, 2, // Opcode: MULV_D
/* 6727 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 6739
/* 6731 */    MCD::OPC_CheckPredicate, 13, 210, 22, // Skip to: 12577
/* 6735 */    MCD::OPC_Decode, 231, 5, 2, // Opcode: MADDV_B
/* 6739 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 6751
/* 6743 */    MCD::OPC_CheckPredicate, 13, 198, 22, // Skip to: 12577
/* 6747 */    MCD::OPC_Decode, 233, 5, 2, // Opcode: MADDV_H
/* 6751 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 6763
/* 6755 */    MCD::OPC_CheckPredicate, 13, 186, 22, // Skip to: 12577
/* 6759 */    MCD::OPC_Decode, 234, 5, 2, // Opcode: MADDV_W
/* 6763 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 6775
/* 6767 */    MCD::OPC_CheckPredicate, 13, 174, 22, // Skip to: 12577
/* 6771 */    MCD::OPC_Decode, 232, 5, 2, // Opcode: MADDV_D
/* 6775 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 6787
/* 6779 */    MCD::OPC_CheckPredicate, 13, 162, 22, // Skip to: 12577
/* 6783 */    MCD::OPC_Decode, 212, 6, 2, // Opcode: MSUBV_B
/* 6787 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 6799
/* 6791 */    MCD::OPC_CheckPredicate, 13, 150, 22, // Skip to: 12577
/* 6795 */    MCD::OPC_Decode, 214, 6, 2, // Opcode: MSUBV_H
/* 6799 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 6811
/* 6803 */    MCD::OPC_CheckPredicate, 13, 138, 22, // Skip to: 12577
/* 6807 */    MCD::OPC_Decode, 215, 6, 2, // Opcode: MSUBV_W
/* 6811 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 6823
/* 6815 */    MCD::OPC_CheckPredicate, 13, 126, 22, // Skip to: 12577
/* 6819 */    MCD::OPC_Decode, 213, 6, 2, // Opcode: MSUBV_D
/* 6823 */    MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 6835
/* 6827 */    MCD::OPC_CheckPredicate, 13, 114, 22, // Skip to: 12577
/* 6831 */    MCD::OPC_Decode, 137, 3, 2, // Opcode: DIV_S_B
/* 6835 */    MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 6847
/* 6839 */    MCD::OPC_CheckPredicate, 13, 102, 22, // Skip to: 12577
/* 6843 */    MCD::OPC_Decode, 139, 3, 2, // Opcode: DIV_S_H
/* 6847 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 6859
/* 6851 */    MCD::OPC_CheckPredicate, 13, 90, 22, // Skip to: 12577
/* 6855 */    MCD::OPC_Decode, 140, 3, 2, // Opcode: DIV_S_W
/* 6859 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 6871
/* 6863 */    MCD::OPC_CheckPredicate, 13, 78, 22, // Skip to: 12577
/* 6867 */    MCD::OPC_Decode, 138, 3, 2, // Opcode: DIV_S_D
/* 6871 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 6883
/* 6875 */    MCD::OPC_CheckPredicate, 13, 66, 22, // Skip to: 12577
/* 6879 */    MCD::OPC_Decode, 141, 3, 2, // Opcode: DIV_U_B
/* 6883 */    MCD::OPC_FilterValue, 21, 8, 0, // Skip to: 6895
/* 6887 */    MCD::OPC_CheckPredicate, 13, 54, 22, // Skip to: 12577
/* 6891 */    MCD::OPC_Decode, 143, 3, 2, // Opcode: DIV_U_H
/* 6895 */    MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 6907
/* 6899 */    MCD::OPC_CheckPredicate, 13, 42, 22, // Skip to: 12577
/* 6903 */    MCD::OPC_Decode, 144, 3, 2, // Opcode: DIV_U_W
/* 6907 */    MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 6919
/* 6911 */    MCD::OPC_CheckPredicate, 13, 30, 22, // Skip to: 12577
/* 6915 */    MCD::OPC_Decode, 142, 3, 2, // Opcode: DIV_U_D
/* 6919 */    MCD::OPC_FilterValue, 24, 8, 0, // Skip to: 6931
/* 6923 */    MCD::OPC_CheckPredicate, 13, 18, 22, // Skip to: 12577
/* 6927 */    MCD::OPC_Decode, 170, 6, 2, // Opcode: MOD_S_B
/* 6931 */    MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 6943
/* 6935 */    MCD::OPC_CheckPredicate, 13, 6, 22, // Skip to: 12577
/* 6939 */    MCD::OPC_Decode, 172, 6, 2, // Opcode: MOD_S_H
/* 6943 */    MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 6955
/* 6947 */    MCD::OPC_CheckPredicate, 13, 250, 21, // Skip to: 12577
/* 6951 */    MCD::OPC_Decode, 173, 6, 2, // Opcode: MOD_S_W
/* 6955 */    MCD::OPC_FilterValue, 27, 8, 0, // Skip to: 6967
/* 6959 */    MCD::OPC_CheckPredicate, 13, 238, 21, // Skip to: 12577
/* 6963 */    MCD::OPC_Decode, 171, 6, 2, // Opcode: MOD_S_D
/* 6967 */    MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 6979
/* 6971 */    MCD::OPC_CheckPredicate, 13, 226, 21, // Skip to: 12577
/* 6975 */    MCD::OPC_Decode, 174, 6, 2, // Opcode: MOD_U_B
/* 6979 */    MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 6991
/* 6983 */    MCD::OPC_CheckPredicate, 13, 214, 21, // Skip to: 12577
/* 6987 */    MCD::OPC_Decode, 176, 6, 2, // Opcode: MOD_U_H
/* 6991 */    MCD::OPC_FilterValue, 30, 8, 0, // Skip to: 7003
/* 6995 */    MCD::OPC_CheckPredicate, 13, 202, 21, // Skip to: 12577
/* 6999 */    MCD::OPC_Decode, 177, 6, 2, // Opcode: MOD_U_W
/* 7003 */    MCD::OPC_FilterValue, 31, 194, 21, // Skip to: 12577
/* 7007 */    MCD::OPC_CheckPredicate, 13, 190, 21, // Skip to: 12577
/* 7011 */    MCD::OPC_Decode, 175, 6, 2, // Opcode: MOD_U_D
/* 7015 */    MCD::OPC_FilterValue, 19, 243, 0, // Skip to: 7262
/* 7019 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 7022 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 7034
/* 7026 */    MCD::OPC_CheckPredicate, 13, 171, 21, // Skip to: 12577
/* 7030 */    MCD::OPC_Decode, 153, 3, 2, // Opcode: DOTP_S_B
/* 7034 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 7046
/* 7038 */    MCD::OPC_CheckPredicate, 13, 159, 21, // Skip to: 12577
/* 7042 */    MCD::OPC_Decode, 155, 3, 2, // Opcode: DOTP_S_H
/* 7046 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 7058
/* 7050 */    MCD::OPC_CheckPredicate, 13, 147, 21, // Skip to: 12577
/* 7054 */    MCD::OPC_Decode, 156, 3, 2, // Opcode: DOTP_S_W
/* 7058 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 7070
/* 7062 */    MCD::OPC_CheckPredicate, 13, 135, 21, // Skip to: 12577
/* 7066 */    MCD::OPC_Decode, 154, 3, 2, // Opcode: DOTP_S_D
/* 7070 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 7082
/* 7074 */    MCD::OPC_CheckPredicate, 13, 123, 21, // Skip to: 12577
/* 7078 */    MCD::OPC_Decode, 157, 3, 2, // Opcode: DOTP_U_B
/* 7082 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 7094
/* 7086 */    MCD::OPC_CheckPredicate, 13, 111, 21, // Skip to: 12577
/* 7090 */    MCD::OPC_Decode, 159, 3, 2, // Opcode: DOTP_U_H
/* 7094 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 7106
/* 7098 */    MCD::OPC_CheckPredicate, 13, 99, 21, // Skip to: 12577
/* 7102 */    MCD::OPC_Decode, 160, 3, 2, // Opcode: DOTP_U_W
/* 7106 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 7118
/* 7110 */    MCD::OPC_CheckPredicate, 13, 87, 21, // Skip to: 12577
/* 7114 */    MCD::OPC_Decode, 158, 3, 2, // Opcode: DOTP_U_D
/* 7118 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 7130
/* 7122 */    MCD::OPC_CheckPredicate, 13, 75, 21, // Skip to: 12577
/* 7126 */    MCD::OPC_Decode, 162, 3, 2, // Opcode: DPADD_S_H
/* 7130 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 7142
/* 7134 */    MCD::OPC_CheckPredicate, 13, 63, 21, // Skip to: 12577
/* 7138 */    MCD::OPC_Decode, 163, 3, 2, // Opcode: DPADD_S_W
/* 7142 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 7154
/* 7146 */    MCD::OPC_CheckPredicate, 13, 51, 21, // Skip to: 12577
/* 7150 */    MCD::OPC_Decode, 161, 3, 2, // Opcode: DPADD_S_D
/* 7154 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 7166
/* 7158 */    MCD::OPC_CheckPredicate, 13, 39, 21, // Skip to: 12577
/* 7162 */    MCD::OPC_Decode, 165, 3, 2, // Opcode: DPADD_U_H
/* 7166 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 7178
/* 7170 */    MCD::OPC_CheckPredicate, 13, 27, 21, // Skip to: 12577
/* 7174 */    MCD::OPC_Decode, 166, 3, 2, // Opcode: DPADD_U_W
/* 7178 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 7190
/* 7182 */    MCD::OPC_CheckPredicate, 13, 15, 21, // Skip to: 12577
/* 7186 */    MCD::OPC_Decode, 164, 3, 2, // Opcode: DPADD_U_D
/* 7190 */    MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 7202
/* 7194 */    MCD::OPC_CheckPredicate, 13, 3, 21, // Skip to: 12577
/* 7198 */    MCD::OPC_Decode, 180, 3, 2, // Opcode: DPSUB_S_H
/* 7202 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 7214
/* 7206 */    MCD::OPC_CheckPredicate, 13, 247, 20, // Skip to: 12577
/* 7210 */    MCD::OPC_Decode, 181, 3, 2, // Opcode: DPSUB_S_W
/* 7214 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 7226
/* 7218 */    MCD::OPC_CheckPredicate, 13, 235, 20, // Skip to: 12577
/* 7222 */    MCD::OPC_Decode, 179, 3, 2, // Opcode: DPSUB_S_D
/* 7226 */    MCD::OPC_FilterValue, 21, 8, 0, // Skip to: 7238
/* 7230 */    MCD::OPC_CheckPredicate, 13, 223, 20, // Skip to: 12577
/* 7234 */    MCD::OPC_Decode, 183, 3, 2, // Opcode: DPSUB_U_H
/* 7238 */    MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 7250
/* 7242 */    MCD::OPC_CheckPredicate, 13, 211, 20, // Skip to: 12577
/* 7246 */    MCD::OPC_Decode, 184, 3, 2, // Opcode: DPSUB_U_W
/* 7250 */    MCD::OPC_FilterValue, 23, 203, 20, // Skip to: 12577
/* 7254 */    MCD::OPC_CheckPredicate, 13, 199, 20, // Skip to: 12577
/* 7258 */    MCD::OPC_Decode, 182, 3, 2, // Opcode: DPSUB_U_D
/* 7262 */    MCD::OPC_FilterValue, 20, 131, 1, // Skip to: 7653
/* 7266 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 7269 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 7281
/* 7273 */    MCD::OPC_CheckPredicate, 13, 180, 20, // Skip to: 12577
/* 7277 */    MCD::OPC_Decode, 185, 8, 2, // Opcode: SLD_B
/* 7281 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 7293
/* 7285 */    MCD::OPC_CheckPredicate, 13, 168, 20, // Skip to: 12577
/* 7289 */    MCD::OPC_Decode, 187, 8, 2, // Opcode: SLD_H
/* 7293 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 7305
/* 7297 */    MCD::OPC_CheckPredicate, 13, 156, 20, // Skip to: 12577
/* 7301 */    MCD::OPC_Decode, 188, 8, 2, // Opcode: SLD_W
/* 7305 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 7317
/* 7309 */    MCD::OPC_CheckPredicate, 13, 144, 20, // Skip to: 12577
/* 7313 */    MCD::OPC_Decode, 186, 8, 2, // Opcode: SLD_D
/* 7317 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 7329
/* 7321 */    MCD::OPC_CheckPredicate, 13, 132, 20, // Skip to: 12577
/* 7325 */    MCD::OPC_Decode, 224, 8, 2, // Opcode: SPLAT_B
/* 7329 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 7341
/* 7333 */    MCD::OPC_CheckPredicate, 13, 120, 20, // Skip to: 12577
/* 7337 */    MCD::OPC_Decode, 226, 8, 2, // Opcode: SPLAT_H
/* 7341 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 7353
/* 7345 */    MCD::OPC_CheckPredicate, 13, 108, 20, // Skip to: 12577
/* 7349 */    MCD::OPC_Decode, 227, 8, 2, // Opcode: SPLAT_W
/* 7353 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 7365
/* 7357 */    MCD::OPC_CheckPredicate, 13, 96, 20, // Skip to: 12577
/* 7361 */    MCD::OPC_Decode, 225, 8, 2, // Opcode: SPLAT_D
/* 7365 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 7377
/* 7369 */    MCD::OPC_CheckPredicate, 13, 84, 20, // Skip to: 12577
/* 7373 */    MCD::OPC_Decode, 173, 7, 2, // Opcode: PCKEV_B
/* 7377 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 7389
/* 7381 */    MCD::OPC_CheckPredicate, 13, 72, 20, // Skip to: 12577
/* 7385 */    MCD::OPC_Decode, 175, 7, 2, // Opcode: PCKEV_H
/* 7389 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 7401
/* 7393 */    MCD::OPC_CheckPredicate, 13, 60, 20, // Skip to: 12577
/* 7397 */    MCD::OPC_Decode, 176, 7, 2, // Opcode: PCKEV_W
/* 7401 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 7413
/* 7405 */    MCD::OPC_CheckPredicate, 13, 48, 20, // Skip to: 12577
/* 7409 */    MCD::OPC_Decode, 174, 7, 2, // Opcode: PCKEV_D
/* 7413 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 7425
/* 7417 */    MCD::OPC_CheckPredicate, 13, 36, 20, // Skip to: 12577
/* 7421 */    MCD::OPC_Decode, 177, 7, 2, // Opcode: PCKOD_B
/* 7425 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 7437
/* 7429 */    MCD::OPC_CheckPredicate, 13, 24, 20, // Skip to: 12577
/* 7433 */    MCD::OPC_Decode, 179, 7, 2, // Opcode: PCKOD_H
/* 7437 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 7449
/* 7441 */    MCD::OPC_CheckPredicate, 13, 12, 20, // Skip to: 12577
/* 7445 */    MCD::OPC_Decode, 180, 7, 2, // Opcode: PCKOD_W
/* 7449 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 7461
/* 7453 */    MCD::OPC_CheckPredicate, 13, 0, 20, // Skip to: 12577
/* 7457 */    MCD::OPC_Decode, 178, 7, 2, // Opcode: PCKOD_D
/* 7461 */    MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 7473
/* 7465 */    MCD::OPC_CheckPredicate, 13, 244, 19, // Skip to: 12577
/* 7469 */    MCD::OPC_Decode, 250, 4, 2, // Opcode: ILVL_B
/* 7473 */    MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 7485
/* 7477 */    MCD::OPC_CheckPredicate, 13, 232, 19, // Skip to: 12577
/* 7481 */    MCD::OPC_Decode, 252, 4, 2, // Opcode: ILVL_H
/* 7485 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 7497
/* 7489 */    MCD::OPC_CheckPredicate, 13, 220, 19, // Skip to: 12577
/* 7493 */    MCD::OPC_Decode, 253, 4, 2, // Opcode: ILVL_W
/* 7497 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 7509
/* 7501 */    MCD::OPC_CheckPredicate, 13, 208, 19, // Skip to: 12577
/* 7505 */    MCD::OPC_Decode, 251, 4, 2, // Opcode: ILVL_D
/* 7509 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 7521
/* 7513 */    MCD::OPC_CheckPredicate, 13, 196, 19, // Skip to: 12577
/* 7517 */    MCD::OPC_Decode, 130, 5, 2, // Opcode: ILVR_B
/* 7521 */    MCD::OPC_FilterValue, 21, 8, 0, // Skip to: 7533
/* 7525 */    MCD::OPC_CheckPredicate, 13, 184, 19, // Skip to: 12577
/* 7529 */    MCD::OPC_Decode, 132, 5, 2, // Opcode: ILVR_H
/* 7533 */    MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 7545
/* 7537 */    MCD::OPC_CheckPredicate, 13, 172, 19, // Skip to: 12577
/* 7541 */    MCD::OPC_Decode, 133, 5, 2, // Opcode: ILVR_W
/* 7545 */    MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 7557
/* 7549 */    MCD::OPC_CheckPredicate, 13, 160, 19, // Skip to: 12577
/* 7553 */    MCD::OPC_Decode, 131, 5, 2, // Opcode: ILVR_D
/* 7557 */    MCD::OPC_FilterValue, 24, 8, 0, // Skip to: 7569
/* 7561 */    MCD::OPC_CheckPredicate, 13, 148, 19, // Skip to: 12577
/* 7565 */    MCD::OPC_Decode, 246, 4, 2, // Opcode: ILVEV_B
/* 7569 */    MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 7581
/* 7573 */    MCD::OPC_CheckPredicate, 13, 136, 19, // Skip to: 12577
/* 7577 */    MCD::OPC_Decode, 248, 4, 2, // Opcode: ILVEV_H
/* 7581 */    MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 7593
/* 7585 */    MCD::OPC_CheckPredicate, 13, 124, 19, // Skip to: 12577
/* 7589 */    MCD::OPC_Decode, 249, 4, 2, // Opcode: ILVEV_W
/* 7593 */    MCD::OPC_FilterValue, 27, 8, 0, // Skip to: 7605
/* 7597 */    MCD::OPC_CheckPredicate, 13, 112, 19, // Skip to: 12577
/* 7601 */    MCD::OPC_Decode, 247, 4, 2, // Opcode: ILVEV_D
/* 7605 */    MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 7617
/* 7609 */    MCD::OPC_CheckPredicate, 13, 100, 19, // Skip to: 12577
/* 7613 */    MCD::OPC_Decode, 254, 4, 2, // Opcode: ILVOD_B
/* 7617 */    MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 7629
/* 7621 */    MCD::OPC_CheckPredicate, 13, 88, 19, // Skip to: 12577
/* 7625 */    MCD::OPC_Decode, 128, 5, 2, // Opcode: ILVOD_H
/* 7629 */    MCD::OPC_FilterValue, 30, 8, 0, // Skip to: 7641
/* 7633 */    MCD::OPC_CheckPredicate, 13, 76, 19, // Skip to: 12577
/* 7637 */    MCD::OPC_Decode, 129, 5, 2, // Opcode: ILVOD_W
/* 7641 */    MCD::OPC_FilterValue, 31, 68, 19, // Skip to: 12577
/* 7645 */    MCD::OPC_CheckPredicate, 13, 64, 19, // Skip to: 12577
/* 7649 */    MCD::OPC_Decode, 255, 4, 2, // Opcode: ILVOD_D
/* 7653 */    MCD::OPC_FilterValue, 21, 35, 1, // Skip to: 7948
/* 7657 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 7660 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 7672
/* 7664 */    MCD::OPC_CheckPredicate, 13, 45, 19, // Skip to: 12577
/* 7668 */    MCD::OPC_Decode, 145, 10, 2, // Opcode: VSHF_B
/* 7672 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 7684
/* 7676 */    MCD::OPC_CheckPredicate, 13, 33, 19, // Skip to: 12577
/* 7680 */    MCD::OPC_Decode, 147, 10, 2, // Opcode: VSHF_H
/* 7684 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 7696
/* 7688 */    MCD::OPC_CheckPredicate, 13, 21, 19, // Skip to: 12577
/* 7692 */    MCD::OPC_Decode, 148, 10, 2, // Opcode: VSHF_W
/* 7696 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 7708
/* 7700 */    MCD::OPC_CheckPredicate, 13, 9, 19, // Skip to: 12577
/* 7704 */    MCD::OPC_Decode, 146, 10, 2, // Opcode: VSHF_D
/* 7708 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 7720
/* 7712 */    MCD::OPC_CheckPredicate, 13, 253, 18, // Skip to: 12577
/* 7716 */    MCD::OPC_Decode, 237, 8, 2, // Opcode: SRAR_B
/* 7720 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 7732
/* 7724 */    MCD::OPC_CheckPredicate, 13, 241, 18, // Skip to: 12577
/* 7728 */    MCD::OPC_Decode, 239, 8, 2, // Opcode: SRAR_H
/* 7732 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 7744
/* 7736 */    MCD::OPC_CheckPredicate, 13, 229, 18, // Skip to: 12577
/* 7740 */    MCD::OPC_Decode, 240, 8, 2, // Opcode: SRAR_W
/* 7744 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 7756
/* 7748 */    MCD::OPC_CheckPredicate, 13, 217, 18, // Skip to: 12577
/* 7752 */    MCD::OPC_Decode, 238, 8, 2, // Opcode: SRAR_D
/* 7756 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 7768
/* 7760 */    MCD::OPC_CheckPredicate, 13, 205, 18, // Skip to: 12577
/* 7764 */    MCD::OPC_Decode, 129, 9, 2, // Opcode: SRLR_B
/* 7768 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 7780
/* 7772 */    MCD::OPC_CheckPredicate, 13, 193, 18, // Skip to: 12577
/* 7776 */    MCD::OPC_Decode, 131, 9, 2, // Opcode: SRLR_H
/* 7780 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 7792
/* 7784 */    MCD::OPC_CheckPredicate, 13, 181, 18, // Skip to: 12577
/* 7788 */    MCD::OPC_Decode, 132, 9, 2, // Opcode: SRLR_W
/* 7792 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 7804
/* 7796 */    MCD::OPC_CheckPredicate, 13, 169, 18, // Skip to: 12577
/* 7800 */    MCD::OPC_Decode, 130, 9, 2, // Opcode: SRLR_D
/* 7804 */    MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 7816
/* 7808 */    MCD::OPC_CheckPredicate, 13, 157, 18, // Skip to: 12577
/* 7812 */    MCD::OPC_Decode, 235, 4, 2, // Opcode: HADD_S_H
/* 7816 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 7828
/* 7820 */    MCD::OPC_CheckPredicate, 13, 145, 18, // Skip to: 12577
/* 7824 */    MCD::OPC_Decode, 236, 4, 2, // Opcode: HADD_S_W
/* 7828 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 7840
/* 7832 */    MCD::OPC_CheckPredicate, 13, 133, 18, // Skip to: 12577
/* 7836 */    MCD::OPC_Decode, 234, 4, 2, // Opcode: HADD_S_D
/* 7840 */    MCD::OPC_FilterValue, 21, 8, 0, // Skip to: 7852
/* 7844 */    MCD::OPC_CheckPredicate, 13, 121, 18, // Skip to: 12577
/* 7848 */    MCD::OPC_Decode, 238, 4, 2, // Opcode: HADD_U_H
/* 7852 */    MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 7864
/* 7856 */    MCD::OPC_CheckPredicate, 13, 109, 18, // Skip to: 12577
/* 7860 */    MCD::OPC_Decode, 239, 4, 2, // Opcode: HADD_U_W
/* 7864 */    MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 7876
/* 7868 */    MCD::OPC_CheckPredicate, 13, 97, 18, // Skip to: 12577
/* 7872 */    MCD::OPC_Decode, 237, 4, 2, // Opcode: HADD_U_D
/* 7876 */    MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 7888
/* 7880 */    MCD::OPC_CheckPredicate, 13, 85, 18, // Skip to: 12577
/* 7884 */    MCD::OPC_Decode, 241, 4, 2, // Opcode: HSUB_S_H
/* 7888 */    MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 7900
/* 7892 */    MCD::OPC_CheckPredicate, 13, 73, 18, // Skip to: 12577
/* 7896 */    MCD::OPC_Decode, 242, 4, 2, // Opcode: HSUB_S_W
/* 7900 */    MCD::OPC_FilterValue, 27, 8, 0, // Skip to: 7912
/* 7904 */    MCD::OPC_CheckPredicate, 13, 61, 18, // Skip to: 12577
/* 7908 */    MCD::OPC_Decode, 240, 4, 2, // Opcode: HSUB_S_D
/* 7912 */    MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 7924
/* 7916 */    MCD::OPC_CheckPredicate, 13, 49, 18, // Skip to: 12577
/* 7920 */    MCD::OPC_Decode, 244, 4, 2, // Opcode: HSUB_U_H
/* 7924 */    MCD::OPC_FilterValue, 30, 8, 0, // Skip to: 7936
/* 7928 */    MCD::OPC_CheckPredicate, 13, 37, 18, // Skip to: 12577
/* 7932 */    MCD::OPC_Decode, 245, 4, 2, // Opcode: HSUB_U_W
/* 7936 */    MCD::OPC_FilterValue, 31, 29, 18, // Skip to: 12577
/* 7940 */    MCD::OPC_CheckPredicate, 13, 25, 18, // Skip to: 12577
/* 7944 */    MCD::OPC_Decode, 243, 4, 2, // Opcode: HSUB_U_D
/* 7948 */    MCD::OPC_FilterValue, 25, 147, 1, // Skip to: 8355
/* 7952 */    MCD::OPC_ExtractField, 20, 6,  // Inst{25-20} ...
/* 7955 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 7967
/* 7959 */    MCD::OPC_CheckPredicate, 13, 6, 18, // Skip to: 12577
/* 7963 */    MCD::OPC_Decode, 181, 8, 2, // Opcode: SLDI_B
/* 7967 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 7985
/* 7971 */    MCD::OPC_CheckPredicate, 13, 250, 17, // Skip to: 12577
/* 7975 */    MCD::OPC_CheckField, 19, 1, 0, 244, 17, // Skip to: 12577
/* 7981 */    MCD::OPC_Decode, 183, 8, 2, // Opcode: SLDI_H
/* 7985 */    MCD::OPC_FilterValue, 3, 51, 0, // Skip to: 8040
/* 7989 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 7992 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 8004
/* 7996 */    MCD::OPC_CheckPredicate, 13, 225, 17, // Skip to: 12577
/* 8000 */    MCD::OPC_Decode, 184, 8, 2, // Opcode: SLDI_W
/* 8004 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 8022
/* 8008 */    MCD::OPC_CheckPredicate, 13, 213, 17, // Skip to: 12577
/* 8012 */    MCD::OPC_CheckField, 17, 1, 0, 207, 17, // Skip to: 12577
/* 8018 */    MCD::OPC_Decode, 182, 8, 2, // Opcode: SLDI_D
/* 8022 */    MCD::OPC_FilterValue, 3, 199, 17, // Skip to: 12577
/* 8026 */    MCD::OPC_CheckPredicate, 13, 195, 17, // Skip to: 12577
/* 8030 */    MCD::OPC_CheckField, 16, 2, 2, 189, 17, // Skip to: 12577
/* 8036 */    MCD::OPC_Decode, 184, 2, 2, // Opcode: CTCMSA
/* 8040 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 8052
/* 8044 */    MCD::OPC_CheckPredicate, 13, 177, 17, // Skip to: 12577
/* 8048 */    MCD::OPC_Decode, 220, 8, 2, // Opcode: SPLATI_B
/* 8052 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 8070
/* 8056 */    MCD::OPC_CheckPredicate, 13, 165, 17, // Skip to: 12577
/* 8060 */    MCD::OPC_CheckField, 19, 1, 0, 159, 17, // Skip to: 12577
/* 8066 */    MCD::OPC_Decode, 222, 8, 2, // Opcode: SPLATI_H
/* 8070 */    MCD::OPC_FilterValue, 7, 51, 0, // Skip to: 8125
/* 8074 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 8077 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 8089
/* 8081 */    MCD::OPC_CheckPredicate, 13, 140, 17, // Skip to: 12577
/* 8085 */    MCD::OPC_Decode, 223, 8, 2, // Opcode: SPLATI_W
/* 8089 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 8107
/* 8093 */    MCD::OPC_CheckPredicate, 13, 128, 17, // Skip to: 12577
/* 8097 */    MCD::OPC_CheckField, 17, 1, 0, 122, 17, // Skip to: 12577
/* 8103 */    MCD::OPC_Decode, 221, 8, 2, // Opcode: SPLATI_D
/* 8107 */    MCD::OPC_FilterValue, 3, 114, 17, // Skip to: 12577
/* 8111 */    MCD::OPC_CheckPredicate, 13, 110, 17, // Skip to: 12577
/* 8115 */    MCD::OPC_CheckField, 16, 2, 2, 104, 17, // Skip to: 12577
/* 8121 */    MCD::OPC_Decode, 130, 2, 2, // Opcode: CFCMSA
/* 8125 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 8137
/* 8129 */    MCD::OPC_CheckPredicate, 13, 92, 17, // Skip to: 12577
/* 8133 */    MCD::OPC_Decode, 177, 2, 2, // Opcode: COPY_S_B
/* 8137 */    MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 8155
/* 8141 */    MCD::OPC_CheckPredicate, 13, 80, 17, // Skip to: 12577
/* 8145 */    MCD::OPC_CheckField, 19, 1, 0, 74, 17, // Skip to: 12577
/* 8151 */    MCD::OPC_Decode, 178, 2, 2, // Opcode: COPY_S_H
/* 8155 */    MCD::OPC_FilterValue, 11, 33, 0, // Skip to: 8192
/* 8159 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 8162 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 8174
/* 8166 */    MCD::OPC_CheckPredicate, 13, 55, 17, // Skip to: 12577
/* 8170 */    MCD::OPC_Decode, 179, 2, 2, // Opcode: COPY_S_W
/* 8174 */    MCD::OPC_FilterValue, 3, 47, 17, // Skip to: 12577
/* 8178 */    MCD::OPC_CheckPredicate, 13, 43, 17, // Skip to: 12577
/* 8182 */    MCD::OPC_CheckField, 16, 2, 2, 37, 17, // Skip to: 12577
/* 8188 */    MCD::OPC_Decode, 178, 6, 2, // Opcode: MOVE_V
/* 8192 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 8204
/* 8196 */    MCD::OPC_CheckPredicate, 13, 25, 17, // Skip to: 12577
/* 8200 */    MCD::OPC_Decode, 180, 2, 2, // Opcode: COPY_U_B
/* 8204 */    MCD::OPC_FilterValue, 14, 14, 0, // Skip to: 8222
/* 8208 */    MCD::OPC_CheckPredicate, 13, 13, 17, // Skip to: 12577
/* 8212 */    MCD::OPC_CheckField, 19, 1, 0, 7, 17, // Skip to: 12577
/* 8218 */    MCD::OPC_Decode, 181, 2, 2, // Opcode: COPY_U_H
/* 8222 */    MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 8240
/* 8226 */    MCD::OPC_CheckPredicate, 13, 251, 16, // Skip to: 12577
/* 8230 */    MCD::OPC_CheckField, 18, 2, 0, 245, 16, // Skip to: 12577
/* 8236 */    MCD::OPC_Decode, 182, 2, 2, // Opcode: COPY_U_W
/* 8240 */    MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 8252
/* 8244 */    MCD::OPC_CheckPredicate, 13, 233, 16, // Skip to: 12577
/* 8248 */    MCD::OPC_Decode, 135, 5, 2, // Opcode: INSERT_B
/* 8252 */    MCD::OPC_FilterValue, 18, 14, 0, // Skip to: 8270
/* 8256 */    MCD::OPC_CheckPredicate, 13, 221, 16, // Skip to: 12577
/* 8260 */    MCD::OPC_CheckField, 19, 1, 0, 215, 16, // Skip to: 12577
/* 8266 */    MCD::OPC_Decode, 136, 5, 2, // Opcode: INSERT_H
/* 8270 */    MCD::OPC_FilterValue, 19, 14, 0, // Skip to: 8288
/* 8274 */    MCD::OPC_CheckPredicate, 13, 203, 16, // Skip to: 12577
/* 8278 */    MCD::OPC_CheckField, 18, 2, 0, 197, 16, // Skip to: 12577
/* 8284 */    MCD::OPC_Decode, 137, 5, 2, // Opcode: INSERT_W
/* 8288 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 8300
/* 8292 */    MCD::OPC_CheckPredicate, 13, 185, 16, // Skip to: 12577
/* 8296 */    MCD::OPC_Decode, 139, 5, 2, // Opcode: INSVE_B
/* 8300 */    MCD::OPC_FilterValue, 22, 14, 0, // Skip to: 8318
/* 8304 */    MCD::OPC_CheckPredicate, 13, 173, 16, // Skip to: 12577
/* 8308 */    MCD::OPC_CheckField, 19, 1, 0, 167, 16, // Skip to: 12577
/* 8314 */    MCD::OPC_Decode, 141, 5, 2, // Opcode: INSVE_H
/* 8318 */    MCD::OPC_FilterValue, 23, 159, 16, // Skip to: 12577
/* 8322 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 8325 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 8337
/* 8329 */    MCD::OPC_CheckPredicate, 13, 148, 16, // Skip to: 12577
/* 8333 */    MCD::OPC_Decode, 142, 5, 2, // Opcode: INSVE_W
/* 8337 */    MCD::OPC_FilterValue, 2, 140, 16, // Skip to: 12577
/* 8341 */    MCD::OPC_CheckPredicate, 13, 136, 16, // Skip to: 12577
/* 8345 */    MCD::OPC_CheckField, 17, 1, 0, 130, 16, // Skip to: 12577
/* 8351 */    MCD::OPC_Decode, 140, 5, 2, // Opcode: INSVE_D
/* 8355 */    MCD::OPC_FilterValue, 26, 131, 1, // Skip to: 8746
/* 8359 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 8362 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 8374
/* 8366 */    MCD::OPC_CheckPredicate, 13, 111, 16, // Skip to: 12577
/* 8370 */    MCD::OPC_Decode, 234, 3, 2, // Opcode: FCAF_W
/* 8374 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 8386
/* 8378 */    MCD::OPC_CheckPredicate, 13, 99, 16, // Skip to: 12577
/* 8382 */    MCD::OPC_Decode, 233, 3, 2, // Opcode: FCAF_D
/* 8386 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 8398
/* 8390 */    MCD::OPC_CheckPredicate, 13, 87, 16, // Skip to: 12577
/* 8394 */    MCD::OPC_Decode, 131, 4, 2, // Opcode: FCUN_W
/* 8398 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 8410
/* 8402 */    MCD::OPC_CheckPredicate, 13, 75, 16, // Skip to: 12577
/* 8406 */    MCD::OPC_Decode, 130, 4, 2, // Opcode: FCUN_D
/* 8410 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 8422
/* 8414 */    MCD::OPC_CheckPredicate, 13, 63, 16, // Skip to: 12577
/* 8418 */    MCD::OPC_Decode, 236, 3, 2, // Opcode: FCEQ_W
/* 8422 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 8434
/* 8426 */    MCD::OPC_CheckPredicate, 13, 51, 16, // Skip to: 12577
/* 8430 */    MCD::OPC_Decode, 235, 3, 2, // Opcode: FCEQ_D
/* 8434 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 8446
/* 8438 */    MCD::OPC_CheckPredicate, 13, 39, 16, // Skip to: 12577
/* 8442 */    MCD::OPC_Decode, 251, 3, 2, // Opcode: FCUEQ_W
/* 8446 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 8458
/* 8450 */    MCD::OPC_CheckPredicate, 13, 27, 16, // Skip to: 12577
/* 8454 */    MCD::OPC_Decode, 250, 3, 2, // Opcode: FCUEQ_D
/* 8458 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 8470
/* 8462 */    MCD::OPC_CheckPredicate, 13, 15, 16, // Skip to: 12577
/* 8466 */    MCD::OPC_Decode, 242, 3, 2, // Opcode: FCLT_W
/* 8470 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 8482
/* 8474 */    MCD::OPC_CheckPredicate, 13, 3, 16, // Skip to: 12577
/* 8478 */    MCD::OPC_Decode, 241, 3, 2, // Opcode: FCLT_D
/* 8482 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 8494
/* 8486 */    MCD::OPC_CheckPredicate, 13, 247, 15, // Skip to: 12577
/* 8490 */    MCD::OPC_Decode, 255, 3, 2, // Opcode: FCULT_W
/* 8494 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 8506
/* 8498 */    MCD::OPC_CheckPredicate, 13, 235, 15, // Skip to: 12577
/* 8502 */    MCD::OPC_Decode, 254, 3, 2, // Opcode: FCULT_D
/* 8506 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 8518
/* 8510 */    MCD::OPC_CheckPredicate, 13, 223, 15, // Skip to: 12577
/* 8514 */    MCD::OPC_Decode, 240, 3, 2, // Opcode: FCLE_W
/* 8518 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 8530
/* 8522 */    MCD::OPC_CheckPredicate, 13, 211, 15, // Skip to: 12577
/* 8526 */    MCD::OPC_Decode, 239, 3, 2, // Opcode: FCLE_D
/* 8530 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 8542
/* 8534 */    MCD::OPC_CheckPredicate, 13, 199, 15, // Skip to: 12577
/* 8538 */    MCD::OPC_Decode, 253, 3, 2, // Opcode: FCULE_W
/* 8542 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 8554
/* 8546 */    MCD::OPC_CheckPredicate, 13, 187, 15, // Skip to: 12577
/* 8550 */    MCD::OPC_Decode, 252, 3, 2, // Opcode: FCULE_D
/* 8554 */    MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 8566
/* 8558 */    MCD::OPC_CheckPredicate, 13, 175, 15, // Skip to: 12577
/* 8562 */    MCD::OPC_Decode, 193, 4, 2, // Opcode: FSAF_W
/* 8566 */    MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 8578
/* 8570 */    MCD::OPC_CheckPredicate, 13, 163, 15, // Skip to: 12577
/* 8574 */    MCD::OPC_Decode, 192, 4, 2, // Opcode: FSAF_D
/* 8578 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 8590
/* 8582 */    MCD::OPC_CheckPredicate, 13, 151, 15, // Skip to: 12577
/* 8586 */    MCD::OPC_Decode, 223, 4, 2, // Opcode: FSUN_W
/* 8590 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 8602
/* 8594 */    MCD::OPC_CheckPredicate, 13, 139, 15, // Skip to: 12577
/* 8598 */    MCD::OPC_Decode, 222, 4, 2, // Opcode: FSUN_D
/* 8602 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 8614
/* 8606 */    MCD::OPC_CheckPredicate, 13, 127, 15, // Skip to: 12577
/* 8610 */    MCD::OPC_Decode, 195, 4, 2, // Opcode: FSEQ_W
/* 8614 */    MCD::OPC_FilterValue, 21, 8, 0, // Skip to: 8626
/* 8618 */    MCD::OPC_CheckPredicate, 13, 115, 15, // Skip to: 12577
/* 8622 */    MCD::OPC_Decode, 194, 4, 2, // Opcode: FSEQ_D
/* 8626 */    MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 8638
/* 8630 */    MCD::OPC_CheckPredicate, 13, 103, 15, // Skip to: 12577
/* 8634 */    MCD::OPC_Decode, 215, 4, 2, // Opcode: FSUEQ_W
/* 8638 */    MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 8650
/* 8642 */    MCD::OPC_CheckPredicate, 13, 91, 15, // Skip to: 12577
/* 8646 */    MCD::OPC_Decode, 214, 4, 2, // Opcode: FSUEQ_D
/* 8650 */    MCD::OPC_FilterValue, 24, 8, 0, // Skip to: 8662
/* 8654 */    MCD::OPC_CheckPredicate, 13, 79, 15, // Skip to: 12577
/* 8658 */    MCD::OPC_Decode, 199, 4, 2, // Opcode: FSLT_W
/* 8662 */    MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 8674
/* 8666 */    MCD::OPC_CheckPredicate, 13, 67, 15, // Skip to: 12577
/* 8670 */    MCD::OPC_Decode, 198, 4, 2, // Opcode: FSLT_D
/* 8674 */    MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 8686
/* 8678 */    MCD::OPC_CheckPredicate, 13, 55, 15, // Skip to: 12577
/* 8682 */    MCD::OPC_Decode, 219, 4, 2, // Opcode: FSULT_W
/* 8686 */    MCD::OPC_FilterValue, 27, 8, 0, // Skip to: 8698
/* 8690 */    MCD::OPC_CheckPredicate, 13, 43, 15, // Skip to: 12577
/* 8694 */    MCD::OPC_Decode, 218, 4, 2, // Opcode: FSULT_D
/* 8698 */    MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 8710
/* 8702 */    MCD::OPC_CheckPredicate, 13, 31, 15, // Skip to: 12577
/* 8706 */    MCD::OPC_Decode, 197, 4, 2, // Opcode: FSLE_W
/* 8710 */    MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 8722
/* 8714 */    MCD::OPC_CheckPredicate, 13, 19, 15, // Skip to: 12577
/* 8718 */    MCD::OPC_Decode, 196, 4, 2, // Opcode: FSLE_D
/* 8722 */    MCD::OPC_FilterValue, 30, 8, 0, // Skip to: 8734
/* 8726 */    MCD::OPC_CheckPredicate, 13, 7, 15, // Skip to: 12577
/* 8730 */    MCD::OPC_Decode, 217, 4, 2, // Opcode: FSULE_W
/* 8734 */    MCD::OPC_FilterValue, 31, 255, 14, // Skip to: 12577
/* 8738 */    MCD::OPC_CheckPredicate, 13, 251, 14, // Skip to: 12577
/* 8742 */    MCD::OPC_Decode, 216, 4, 2, // Opcode: FSULE_D
/* 8746 */    MCD::OPC_FilterValue, 27, 59, 1, // Skip to: 9065
/* 8750 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 8753 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 8765
/* 8757 */    MCD::OPC_CheckPredicate, 13, 232, 14, // Skip to: 12577
/* 8761 */    MCD::OPC_Decode, 232, 3, 2, // Opcode: FADD_W
/* 8765 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 8777
/* 8769 */    MCD::OPC_CheckPredicate, 13, 220, 14, // Skip to: 12577
/* 8773 */    MCD::OPC_Decode, 228, 3, 2, // Opcode: FADD_D
/* 8777 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 8789
/* 8781 */    MCD::OPC_CheckPredicate, 13, 208, 14, // Skip to: 12577
/* 8785 */    MCD::OPC_Decode, 213, 4, 2, // Opcode: FSUB_W
/* 8789 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 8801
/* 8793 */    MCD::OPC_CheckPredicate, 13, 196, 14, // Skip to: 12577
/* 8797 */    MCD::OPC_Decode, 209, 4, 2, // Opcode: FSUB_D
/* 8801 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 8813
/* 8805 */    MCD::OPC_CheckPredicate, 13, 184, 14, // Skip to: 12577
/* 8809 */    MCD::OPC_Decode, 182, 4, 2, // Opcode: FMUL_W
/* 8813 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 8825
/* 8817 */    MCD::OPC_CheckPredicate, 13, 172, 14, // Skip to: 12577
/* 8821 */    MCD::OPC_Decode, 178, 4, 2, // Opcode: FMUL_D
/* 8825 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 8837
/* 8829 */    MCD::OPC_CheckPredicate, 13, 160, 14, // Skip to: 12577
/* 8833 */    MCD::OPC_Decode, 136, 4, 2, // Opcode: FDIV_W
/* 8837 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 8849
/* 8841 */    MCD::OPC_CheckPredicate, 13, 148, 14, // Skip to: 12577
/* 8845 */    MCD::OPC_Decode, 132, 4, 2, // Opcode: FDIV_D
/* 8849 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 8861
/* 8853 */    MCD::OPC_CheckPredicate, 13, 136, 14, // Skip to: 12577
/* 8857 */    MCD::OPC_Decode, 164, 4, 2, // Opcode: FMADD_W
/* 8861 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 8873
/* 8865 */    MCD::OPC_CheckPredicate, 13, 124, 14, // Skip to: 12577
/* 8869 */    MCD::OPC_Decode, 163, 4, 2, // Opcode: FMADD_D
/* 8873 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 8885
/* 8877 */    MCD::OPC_CheckPredicate, 13, 112, 14, // Skip to: 12577
/* 8881 */    MCD::OPC_Decode, 177, 4, 2, // Opcode: FMSUB_W
/* 8885 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 8897
/* 8889 */    MCD::OPC_CheckPredicate, 13, 100, 14, // Skip to: 12577
/* 8893 */    MCD::OPC_Decode, 176, 4, 2, // Opcode: FMSUB_D
/* 8897 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 8909
/* 8901 */    MCD::OPC_CheckPredicate, 13, 88, 14, // Skip to: 12577
/* 8905 */    MCD::OPC_Decode, 140, 4, 2, // Opcode: FEXP2_W
/* 8909 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 8921
/* 8913 */    MCD::OPC_CheckPredicate, 13, 76, 14, // Skip to: 12577
/* 8917 */    MCD::OPC_Decode, 139, 4, 2, // Opcode: FEXP2_D
/* 8921 */    MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 8933
/* 8925 */    MCD::OPC_CheckPredicate, 13, 64, 14, // Skip to: 12577
/* 8929 */    MCD::OPC_Decode, 137, 4, 2, // Opcode: FEXDO_H
/* 8933 */    MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 8945
/* 8937 */    MCD::OPC_CheckPredicate, 13, 52, 14, // Skip to: 12577
/* 8941 */    MCD::OPC_Decode, 138, 4, 2, // Opcode: FEXDO_W
/* 8945 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 8957
/* 8949 */    MCD::OPC_CheckPredicate, 13, 40, 14, // Skip to: 12577
/* 8953 */    MCD::OPC_Decode, 228, 4, 2, // Opcode: FTQ_H
/* 8957 */    MCD::OPC_FilterValue, 21, 8, 0, // Skip to: 8969
/* 8961 */    MCD::OPC_CheckPredicate, 13, 28, 14, // Skip to: 12577
/* 8965 */    MCD::OPC_Decode, 229, 4, 2, // Opcode: FTQ_W
/* 8969 */    MCD::OPC_FilterValue, 24, 8, 0, // Skip to: 8981
/* 8973 */    MCD::OPC_CheckPredicate, 13, 16, 14, // Skip to: 12577
/* 8977 */    MCD::OPC_Decode, 172, 4, 2, // Opcode: FMIN_W
/* 8981 */    MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 8993
/* 8985 */    MCD::OPC_CheckPredicate, 13, 4, 14, // Skip to: 12577
/* 8989 */    MCD::OPC_Decode, 171, 4, 2, // Opcode: FMIN_D
/* 8993 */    MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 9005
/* 8997 */    MCD::OPC_CheckPredicate, 13, 248, 13, // Skip to: 12577
/* 9001 */    MCD::OPC_Decode, 170, 4, 2, // Opcode: FMIN_A_W
/* 9005 */    MCD::OPC_FilterValue, 27, 8, 0, // Skip to: 9017
/* 9009 */    MCD::OPC_CheckPredicate, 13, 236, 13, // Skip to: 12577
/* 9013 */    MCD::OPC_Decode, 169, 4, 2, // Opcode: FMIN_A_D
/* 9017 */    MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 9029
/* 9021 */    MCD::OPC_CheckPredicate, 13, 224, 13, // Skip to: 12577
/* 9025 */    MCD::OPC_Decode, 168, 4, 2, // Opcode: FMAX_W
/* 9029 */    MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 9041
/* 9033 */    MCD::OPC_CheckPredicate, 13, 212, 13, // Skip to: 12577
/* 9037 */    MCD::OPC_Decode, 167, 4, 2, // Opcode: FMAX_D
/* 9041 */    MCD::OPC_FilterValue, 30, 8, 0, // Skip to: 9053
/* 9045 */    MCD::OPC_CheckPredicate, 13, 200, 13, // Skip to: 12577
/* 9049 */    MCD::OPC_Decode, 166, 4, 2, // Opcode: FMAX_A_W
/* 9053 */    MCD::OPC_FilterValue, 31, 192, 13, // Skip to: 12577
/* 9057 */    MCD::OPC_CheckPredicate, 13, 188, 13, // Skip to: 12577
/* 9061 */    MCD::OPC_Decode, 165, 4, 2, // Opcode: FMAX_A_D
/* 9065 */    MCD::OPC_FilterValue, 28, 35, 1, // Skip to: 9360
/* 9069 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 9072 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 9084
/* 9076 */    MCD::OPC_CheckPredicate, 13, 169, 13, // Skip to: 12577
/* 9080 */    MCD::OPC_Decode, 130, 7, 2, // Opcode: MUL_Q_H
/* 9084 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 9096
/* 9088 */    MCD::OPC_CheckPredicate, 13, 157, 13, // Skip to: 12577
/* 9092 */    MCD::OPC_Decode, 131, 7, 2, // Opcode: MUL_Q_W
/* 9096 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 9108
/* 9100 */    MCD::OPC_CheckPredicate, 13, 145, 13, // Skip to: 12577
/* 9104 */    MCD::OPC_Decode, 249, 3, 2, // Opcode: FCOR_W
/* 9108 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 9120
/* 9112 */    MCD::OPC_CheckPredicate, 13, 133, 13, // Skip to: 12577
/* 9116 */    MCD::OPC_Decode, 248, 3, 2, // Opcode: FCOR_D
/* 9120 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 9132
/* 9124 */    MCD::OPC_CheckPredicate, 13, 121, 13, // Skip to: 12577
/* 9128 */    MCD::OPC_Decode, 129, 4, 2, // Opcode: FCUNE_W
/* 9132 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 9144
/* 9136 */    MCD::OPC_CheckPredicate, 13, 109, 13, // Skip to: 12577
/* 9140 */    MCD::OPC_Decode, 128, 4, 2, // Opcode: FCUNE_D
/* 9144 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 9156
/* 9148 */    MCD::OPC_CheckPredicate, 13, 97, 13, // Skip to: 12577
/* 9152 */    MCD::OPC_Decode, 247, 3, 2, // Opcode: FCNE_W
/* 9156 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 9168
/* 9160 */    MCD::OPC_CheckPredicate, 13, 85, 13, // Skip to: 12577
/* 9164 */    MCD::OPC_Decode, 246, 3, 2, // Opcode: FCNE_D
/* 9168 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 9180
/* 9172 */    MCD::OPC_CheckPredicate, 13, 73, 13, // Skip to: 12577
/* 9176 */    MCD::OPC_Decode, 238, 5, 2, // Opcode: MADD_Q_H
/* 9180 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 9192
/* 9184 */    MCD::OPC_CheckPredicate, 13, 61, 13, // Skip to: 12577
/* 9188 */    MCD::OPC_Decode, 239, 5, 2, // Opcode: MADD_Q_W
/* 9192 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 9204
/* 9196 */    MCD::OPC_CheckPredicate, 13, 49, 13, // Skip to: 12577
/* 9200 */    MCD::OPC_Decode, 219, 6, 2, // Opcode: MSUB_Q_H
/* 9204 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 9216
/* 9208 */    MCD::OPC_CheckPredicate, 13, 37, 13, // Skip to: 12577
/* 9212 */    MCD::OPC_Decode, 220, 6, 2, // Opcode: MSUB_Q_W
/* 9216 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 9228
/* 9220 */    MCD::OPC_CheckPredicate, 13, 25, 13, // Skip to: 12577
/* 9224 */    MCD::OPC_Decode, 203, 4, 2, // Opcode: FSOR_W
/* 9228 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 9240
/* 9232 */    MCD::OPC_CheckPredicate, 13, 13, 13, // Skip to: 12577
/* 9236 */    MCD::OPC_Decode, 202, 4, 2, // Opcode: FSOR_D
/* 9240 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 9252
/* 9244 */    MCD::OPC_CheckPredicate, 13, 1, 13, // Skip to: 12577
/* 9248 */    MCD::OPC_Decode, 221, 4, 2, // Opcode: FSUNE_W
/* 9252 */    MCD::OPC_FilterValue, 21, 8, 0, // Skip to: 9264
/* 9256 */    MCD::OPC_CheckPredicate, 13, 245, 12, // Skip to: 12577
/* 9260 */    MCD::OPC_Decode, 220, 4, 2, // Opcode: FSUNE_D
/* 9264 */    MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 9276
/* 9268 */    MCD::OPC_CheckPredicate, 13, 233, 12, // Skip to: 12577
/* 9272 */    MCD::OPC_Decode, 201, 4, 2, // Opcode: FSNE_W
/* 9276 */    MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 9288
/* 9280 */    MCD::OPC_CheckPredicate, 13, 221, 12, // Skip to: 12577
/* 9284 */    MCD::OPC_Decode, 200, 4, 2, // Opcode: FSNE_D
/* 9288 */    MCD::OPC_FilterValue, 24, 8, 0, // Skip to: 9300
/* 9292 */    MCD::OPC_CheckPredicate, 13, 209, 12, // Skip to: 12577
/* 9296 */    MCD::OPC_Decode, 242, 6, 2, // Opcode: MULR_Q_H
/* 9300 */    MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 9312
/* 9304 */    MCD::OPC_CheckPredicate, 13, 197, 12, // Skip to: 12577
/* 9308 */    MCD::OPC_Decode, 243, 6, 2, // Opcode: MULR_Q_W
/* 9312 */    MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 9324
/* 9316 */    MCD::OPC_CheckPredicate, 13, 185, 12, // Skip to: 12577
/* 9320 */    MCD::OPC_Decode, 227, 5, 2, // Opcode: MADDR_Q_H
/* 9324 */    MCD::OPC_FilterValue, 27, 8, 0, // Skip to: 9336
/* 9328 */    MCD::OPC_CheckPredicate, 13, 173, 12, // Skip to: 12577
/* 9332 */    MCD::OPC_Decode, 228, 5, 2, // Opcode: MADDR_Q_W
/* 9336 */    MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 9348
/* 9340 */    MCD::OPC_CheckPredicate, 13, 161, 12, // Skip to: 12577
/* 9344 */    MCD::OPC_Decode, 208, 6, 2, // Opcode: MSUBR_Q_H
/* 9348 */    MCD::OPC_FilterValue, 29, 153, 12, // Skip to: 12577
/* 9352 */    MCD::OPC_CheckPredicate, 13, 149, 12, // Skip to: 12577
/* 9356 */    MCD::OPC_Decode, 209, 6, 2, // Opcode: MSUBR_Q_W
/* 9360 */    MCD::OPC_FilterValue, 30, 141, 12, // Skip to: 12577
/* 9364 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 9367 */    MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 9378
/* 9371 */    MCD::OPC_CheckPredicate, 13, 130, 12, // Skip to: 12577
/* 9375 */    MCD::OPC_Decode, 73, 2, // Opcode: AND_V
/* 9378 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 9390
/* 9382 */    MCD::OPC_CheckPredicate, 13, 119, 12, // Skip to: 12577
/* 9386 */    MCD::OPC_Decode, 167, 7, 2, // Opcode: OR_V
/* 9390 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 9402
/* 9394 */    MCD::OPC_CheckPredicate, 13, 107, 12, // Skip to: 12577
/* 9398 */    MCD::OPC_Decode, 160, 7, 2, // Opcode: NOR_V
/* 9402 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 9414
/* 9406 */    MCD::OPC_CheckPredicate, 13, 95, 12, // Skip to: 12577
/* 9410 */    MCD::OPC_Decode, 156, 10, 2, // Opcode: XOR_V
/* 9414 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 9426
/* 9418 */    MCD::OPC_CheckPredicate, 13, 83, 12, // Skip to: 12577
/* 9422 */    MCD::OPC_Decode, 186, 1, 2, // Opcode: BMNZ_V
/* 9426 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 9438
/* 9430 */    MCD::OPC_CheckPredicate, 13, 71, 12, // Skip to: 12577
/* 9434 */    MCD::OPC_Decode, 188, 1, 2, // Opcode: BMZ_V
/* 9438 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 9450
/* 9442 */    MCD::OPC_CheckPredicate, 13, 59, 12, // Skip to: 12577
/* 9446 */    MCD::OPC_Decode, 208, 1, 2, // Opcode: BSEL_V
/* 9450 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 9462
/* 9454 */    MCD::OPC_CheckPredicate, 13, 47, 12, // Skip to: 12577
/* 9458 */    MCD::OPC_Decode, 202, 1, 2, // Opcode: BNZ_V
/* 9462 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 9474
/* 9466 */    MCD::OPC_CheckPredicate, 13, 35, 12, // Skip to: 12577
/* 9470 */    MCD::OPC_Decode, 220, 1, 2, // Opcode: BZ_V
/* 9474 */    MCD::OPC_FilterValue, 24, 183, 0, // Skip to: 9661
/* 9478 */    MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 9481 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 9493
/* 9485 */    MCD::OPC_CheckPredicate, 13, 16, 12, // Skip to: 12577
/* 9489 */    MCD::OPC_Decode, 153, 4, 2, // Opcode: FILL_B
/* 9493 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 9505
/* 9497 */    MCD::OPC_CheckPredicate, 13, 4, 12, // Skip to: 12577
/* 9501 */    MCD::OPC_Decode, 154, 4, 2, // Opcode: FILL_H
/* 9505 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 9517
/* 9509 */    MCD::OPC_CheckPredicate, 13, 248, 11, // Skip to: 12577
/* 9513 */    MCD::OPC_Decode, 155, 4, 2, // Opcode: FILL_W
/* 9517 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 9529
/* 9521 */    MCD::OPC_CheckPredicate, 13, 236, 11, // Skip to: 12577
/* 9525 */    MCD::OPC_Decode, 181, 7, 2, // Opcode: PCNT_B
/* 9529 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 9541
/* 9533 */    MCD::OPC_CheckPredicate, 13, 224, 11, // Skip to: 12577
/* 9537 */    MCD::OPC_Decode, 183, 7, 2, // Opcode: PCNT_H
/* 9541 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 9553
/* 9545 */    MCD::OPC_CheckPredicate, 13, 212, 11, // Skip to: 12577
/* 9549 */    MCD::OPC_Decode, 184, 7, 2, // Opcode: PCNT_W
/* 9553 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 9565
/* 9557 */    MCD::OPC_CheckPredicate, 13, 200, 11, // Skip to: 12577
/* 9561 */    MCD::OPC_Decode, 182, 7, 2, // Opcode: PCNT_D
/* 9565 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 9577
/* 9569 */    MCD::OPC_CheckPredicate, 13, 188, 11, // Skip to: 12577
/* 9573 */    MCD::OPC_Decode, 141, 7, 2, // Opcode: NLOC_B
/* 9577 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 9589
/* 9581 */    MCD::OPC_CheckPredicate, 13, 176, 11, // Skip to: 12577
/* 9585 */    MCD::OPC_Decode, 143, 7, 2, // Opcode: NLOC_H
/* 9589 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 9601
/* 9593 */    MCD::OPC_CheckPredicate, 13, 164, 11, // Skip to: 12577
/* 9597 */    MCD::OPC_Decode, 144, 7, 2, // Opcode: NLOC_W
/* 9601 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 9613
/* 9605 */    MCD::OPC_CheckPredicate, 13, 152, 11, // Skip to: 12577
/* 9609 */    MCD::OPC_Decode, 142, 7, 2, // Opcode: NLOC_D
/* 9613 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 9625
/* 9617 */    MCD::OPC_CheckPredicate, 13, 140, 11, // Skip to: 12577
/* 9621 */    MCD::OPC_Decode, 145, 7, 2, // Opcode: NLZC_B
/* 9625 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 9637
/* 9629 */    MCD::OPC_CheckPredicate, 13, 128, 11, // Skip to: 12577
/* 9633 */    MCD::OPC_Decode, 147, 7, 2, // Opcode: NLZC_H
/* 9637 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 9649
/* 9641 */    MCD::OPC_CheckPredicate, 13, 116, 11, // Skip to: 12577
/* 9645 */    MCD::OPC_Decode, 148, 7, 2, // Opcode: NLZC_W
/* 9649 */    MCD::OPC_FilterValue, 15, 108, 11, // Skip to: 12577
/* 9653 */    MCD::OPC_CheckPredicate, 13, 104, 11, // Skip to: 12577
/* 9657 */    MCD::OPC_Decode, 146, 7, 2, // Opcode: NLZC_D
/* 9661 */    MCD::OPC_FilterValue, 25, 83, 1, // Skip to: 10004
/* 9665 */    MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 9668 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 9680
/* 9672 */    MCD::OPC_CheckPredicate, 13, 85, 11, // Skip to: 12577
/* 9676 */    MCD::OPC_Decode, 238, 3, 2, // Opcode: FCLASS_W
/* 9680 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 9692
/* 9684 */    MCD::OPC_CheckPredicate, 13, 73, 11, // Skip to: 12577
/* 9688 */    MCD::OPC_Decode, 237, 3, 2, // Opcode: FCLASS_D
/* 9692 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 9704
/* 9696 */    MCD::OPC_CheckPredicate, 13, 61, 11, // Skip to: 12577
/* 9700 */    MCD::OPC_Decode, 208, 4, 2, // Opcode: FSQRT_W
/* 9704 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 9716
/* 9708 */    MCD::OPC_CheckPredicate, 13, 49, 11, // Skip to: 12577
/* 9712 */    MCD::OPC_Decode, 204, 4, 2, // Opcode: FSQRT_D
/* 9716 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 9728
/* 9720 */    MCD::OPC_CheckPredicate, 13, 37, 11, // Skip to: 12577
/* 9724 */    MCD::OPC_Decode, 191, 4, 2, // Opcode: FRSQRT_W
/* 9728 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 9740
/* 9732 */    MCD::OPC_CheckPredicate, 13, 25, 11, // Skip to: 12577
/* 9736 */    MCD::OPC_Decode, 190, 4, 2, // Opcode: FRSQRT_D
/* 9740 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 9752
/* 9744 */    MCD::OPC_CheckPredicate, 13, 13, 11, // Skip to: 12577
/* 9748 */    MCD::OPC_Decode, 187, 4, 2, // Opcode: FRCP_W
/* 9752 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 9764
/* 9756 */    MCD::OPC_CheckPredicate, 13, 1, 11, // Skip to: 12577
/* 9760 */    MCD::OPC_Decode, 186, 4, 2, // Opcode: FRCP_D
/* 9764 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 9776
/* 9768 */    MCD::OPC_CheckPredicate, 13, 245, 10, // Skip to: 12577
/* 9772 */    MCD::OPC_Decode, 189, 4, 2, // Opcode: FRINT_W
/* 9776 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 9788
/* 9780 */    MCD::OPC_CheckPredicate, 13, 233, 10, // Skip to: 12577
/* 9784 */    MCD::OPC_Decode, 188, 4, 2, // Opcode: FRINT_D
/* 9788 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 9800
/* 9792 */    MCD::OPC_CheckPredicate, 13, 221, 10, // Skip to: 12577
/* 9796 */    MCD::OPC_Decode, 157, 4, 2, // Opcode: FLOG2_W
/* 9800 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 9812
/* 9804 */    MCD::OPC_CheckPredicate, 13, 209, 10, // Skip to: 12577
/* 9808 */    MCD::OPC_Decode, 156, 4, 2, // Opcode: FLOG2_D
/* 9812 */    MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 9824
/* 9816 */    MCD::OPC_CheckPredicate, 13, 197, 10, // Skip to: 12577
/* 9820 */    MCD::OPC_Decode, 142, 4, 2, // Opcode: FEXUPL_W
/* 9824 */    MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 9836
/* 9828 */    MCD::OPC_CheckPredicate, 13, 185, 10, // Skip to: 12577
/* 9832 */    MCD::OPC_Decode, 141, 4, 2, // Opcode: FEXUPL_D
/* 9836 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 9848
/* 9840 */    MCD::OPC_CheckPredicate, 13, 173, 10, // Skip to: 12577
/* 9844 */    MCD::OPC_Decode, 144, 4, 2, // Opcode: FEXUPR_W
/* 9848 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 9860
/* 9852 */    MCD::OPC_CheckPredicate, 13, 161, 10, // Skip to: 12577
/* 9856 */    MCD::OPC_Decode, 143, 4, 2, // Opcode: FEXUPR_D
/* 9860 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 9872
/* 9864 */    MCD::OPC_CheckPredicate, 13, 149, 10, // Skip to: 12577
/* 9868 */    MCD::OPC_Decode, 150, 4, 2, // Opcode: FFQL_W
/* 9872 */    MCD::OPC_FilterValue, 21, 8, 0, // Skip to: 9884
/* 9876 */    MCD::OPC_CheckPredicate, 13, 137, 10, // Skip to: 12577
/* 9880 */    MCD::OPC_Decode, 149, 4, 2, // Opcode: FFQL_D
/* 9884 */    MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 9896
/* 9888 */    MCD::OPC_CheckPredicate, 13, 125, 10, // Skip to: 12577
/* 9892 */    MCD::OPC_Decode, 152, 4, 2, // Opcode: FFQR_W
/* 9896 */    MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 9908
/* 9900 */    MCD::OPC_CheckPredicate, 13, 113, 10, // Skip to: 12577
/* 9904 */    MCD::OPC_Decode, 151, 4, 2, // Opcode: FFQR_D
/* 9908 */    MCD::OPC_FilterValue, 24, 8, 0, // Skip to: 9920
/* 9912 */    MCD::OPC_CheckPredicate, 13, 101, 10, // Skip to: 12577
/* 9916 */    MCD::OPC_Decode, 225, 4, 2, // Opcode: FTINT_S_W
/* 9920 */    MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 9932
/* 9924 */    MCD::OPC_CheckPredicate, 13, 89, 10, // Skip to: 12577
/* 9928 */    MCD::OPC_Decode, 224, 4, 2, // Opcode: FTINT_S_D
/* 9932 */    MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 9944
/* 9936 */    MCD::OPC_CheckPredicate, 13, 77, 10, // Skip to: 12577
/* 9940 */    MCD::OPC_Decode, 227, 4, 2, // Opcode: FTINT_U_W
/* 9944 */    MCD::OPC_FilterValue, 27, 8, 0, // Skip to: 9956
/* 9948 */    MCD::OPC_CheckPredicate, 13, 65, 10, // Skip to: 12577
/* 9952 */    MCD::OPC_Decode, 226, 4, 2, // Opcode: FTINT_U_D
/* 9956 */    MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 9968
/* 9960 */    MCD::OPC_CheckPredicate, 13, 53, 10, // Skip to: 12577
/* 9964 */    MCD::OPC_Decode, 146, 4, 2, // Opcode: FFINT_S_W
/* 9968 */    MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 9980
/* 9972 */    MCD::OPC_CheckPredicate, 13, 41, 10, // Skip to: 12577
/* 9976 */    MCD::OPC_Decode, 145, 4, 2, // Opcode: FFINT_S_D
/* 9980 */    MCD::OPC_FilterValue, 30, 8, 0, // Skip to: 9992
/* 9984 */    MCD::OPC_CheckPredicate, 13, 29, 10, // Skip to: 12577
/* 9988 */    MCD::OPC_Decode, 148, 4, 2, // Opcode: FFINT_U_W
/* 9992 */    MCD::OPC_FilterValue, 31, 21, 10, // Skip to: 12577
/* 9996 */    MCD::OPC_CheckPredicate, 13, 17, 10, // Skip to: 12577
/* 10000 */   MCD::OPC_Decode, 147, 4, 2, // Opcode: FFINT_U_D
/* 10004 */   MCD::OPC_FilterValue, 26, 9, 10, // Skip to: 12577
/* 10008 */   MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 10011 */   MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 10023
/* 10015 */   MCD::OPC_CheckPredicate, 13, 254, 9, // Skip to: 12577
/* 10019 */   MCD::OPC_Decode, 231, 4, 2, // Opcode: FTRUNC_S_W
/* 10023 */   MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 10035
/* 10027 */   MCD::OPC_CheckPredicate, 13, 242, 9, // Skip to: 12577
/* 10031 */   MCD::OPC_Decode, 230, 4, 2, // Opcode: FTRUNC_S_D
/* 10035 */   MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 10047
/* 10039 */   MCD::OPC_CheckPredicate, 13, 230, 9, // Skip to: 12577
/* 10043 */   MCD::OPC_Decode, 233, 4, 2, // Opcode: FTRUNC_U_W
/* 10047 */   MCD::OPC_FilterValue, 3, 222, 9, // Skip to: 12577
/* 10051 */   MCD::OPC_CheckPredicate, 13, 218, 9, // Skip to: 12577
/* 10055 */   MCD::OPC_Decode, 232, 4, 2, // Opcode: FTRUNC_U_D
/* 10059 */   MCD::OPC_FilterValue, 31, 250, 8, // Skip to: 12361
/* 10063 */   MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10066 */   MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 10078
/* 10070 */   MCD::OPC_CheckPredicate, 3, 199, 9, // Skip to: 12577
/* 10074 */   MCD::OPC_Decode, 210, 3, 76, // Opcode: EXT
/* 10078 */   MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 10090
/* 10082 */   MCD::OPC_CheckPredicate, 3, 187, 9, // Skip to: 12577
/* 10086 */   MCD::OPC_Decode, 134, 5, 77, // Opcode: INS
/* 10090 */   MCD::OPC_FilterValue, 10, 39, 0, // Skip to: 10133
/* 10094 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 10097 */   MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 10109
/* 10101 */   MCD::OPC_CheckPredicate, 4, 168, 9, // Skip to: 12577
/* 10105 */   MCD::OPC_Decode, 210, 5, 78, // Opcode: LWX
/* 10109 */   MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 10121
/* 10113 */   MCD::OPC_CheckPredicate, 4, 156, 9, // Skip to: 12577
/* 10117 */   MCD::OPC_Decode, 185, 5, 78, // Opcode: LHX
/* 10121 */   MCD::OPC_FilterValue, 6, 148, 9, // Skip to: 12577
/* 10125 */   MCD::OPC_CheckPredicate, 4, 144, 9, // Skip to: 12577
/* 10129 */   MCD::OPC_Decode, 158, 5, 78, // Opcode: LBUX
/* 10133 */   MCD::OPC_FilterValue, 12, 14, 0, // Skip to: 10151
/* 10137 */   MCD::OPC_CheckPredicate, 4, 132, 9, // Skip to: 12577
/* 10141 */   MCD::OPC_CheckField, 6, 10, 0, 126, 9, // Skip to: 12577
/* 10147 */   MCD::OPC_Decode, 138, 5, 79, // Opcode: INSV
/* 10151 */   MCD::OPC_FilterValue, 16, 32, 1, // Skip to: 10443
/* 10155 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 10158 */   MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 10169
/* 10162 */   MCD::OPC_CheckPredicate, 4, 107, 9, // Skip to: 12577
/* 10166 */   MCD::OPC_Decode, 44, 80, // Opcode: ADDU_QB
/* 10169 */   MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 10181
/* 10173 */   MCD::OPC_CheckPredicate, 4, 96, 9, // Skip to: 12577
/* 10177 */   MCD::OPC_Decode, 179, 9, 80, // Opcode: SUBU_QB
/* 10181 */   MCD::OPC_FilterValue, 4, 7, 0, // Skip to: 10192
/* 10185 */   MCD::OPC_CheckPredicate, 4, 84, 9, // Skip to: 12577
/* 10189 */   MCD::OPC_Decode, 46, 80, // Opcode: ADDU_S_QB
/* 10192 */   MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 10204
/* 10196 */   MCD::OPC_CheckPredicate, 4, 73, 9, // Skip to: 12577
/* 10200 */   MCD::OPC_Decode, 181, 9, 80, // Opcode: SUBU_S_QB
/* 10204 */   MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 10216
/* 10208 */   MCD::OPC_CheckPredicate, 4, 61, 9, // Skip to: 12577
/* 10212 */   MCD::OPC_Decode, 236, 6, 80, // Opcode: MULEU_S_PH_QBL
/* 10216 */   MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 10228
/* 10220 */   MCD::OPC_CheckPredicate, 4, 49, 9, // Skip to: 12577
/* 10224 */   MCD::OPC_Decode, 237, 6, 80, // Opcode: MULEU_S_PH_QBR
/* 10228 */   MCD::OPC_FilterValue, 8, 7, 0, // Skip to: 10239
/* 10232 */   MCD::OPC_CheckPredicate, 14, 37, 9, // Skip to: 12577
/* 10236 */   MCD::OPC_Decode, 43, 80, // Opcode: ADDU_PH
/* 10239 */   MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 10251
/* 10243 */   MCD::OPC_CheckPredicate, 14, 26, 9, // Skip to: 12577
/* 10247 */   MCD::OPC_Decode, 178, 9, 80, // Opcode: SUBU_PH
/* 10251 */   MCD::OPC_FilterValue, 10, 7, 0, // Skip to: 10262
/* 10255 */   MCD::OPC_CheckPredicate, 4, 14, 9, // Skip to: 12577
/* 10259 */   MCD::OPC_Decode, 25, 80, // Opcode: ADDQ_PH
/* 10262 */   MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 10274
/* 10266 */   MCD::OPC_CheckPredicate, 4, 3, 9, // Skip to: 12577
/* 10270 */   MCD::OPC_Decode, 157, 9, 80, // Opcode: SUBQ_PH
/* 10274 */   MCD::OPC_FilterValue, 12, 7, 0, // Skip to: 10285
/* 10278 */   MCD::OPC_CheckPredicate, 14, 247, 8, // Skip to: 12577
/* 10282 */   MCD::OPC_Decode, 45, 80, // Opcode: ADDU_S_PH
/* 10285 */   MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 10297
/* 10289 */   MCD::OPC_CheckPredicate, 14, 236, 8, // Skip to: 12577
/* 10293 */   MCD::OPC_Decode, 180, 9, 80, // Opcode: SUBU_S_PH
/* 10297 */   MCD::OPC_FilterValue, 14, 7, 0, // Skip to: 10308
/* 10301 */   MCD::OPC_CheckPredicate, 4, 224, 8, // Skip to: 12577
/* 10305 */   MCD::OPC_Decode, 26, 80, // Opcode: ADDQ_S_PH
/* 10308 */   MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 10320
/* 10312 */   MCD::OPC_CheckPredicate, 4, 213, 8, // Skip to: 12577
/* 10316 */   MCD::OPC_Decode, 158, 9, 80, // Opcode: SUBQ_S_PH
/* 10320 */   MCD::OPC_FilterValue, 16, 7, 0, // Skip to: 10331
/* 10324 */   MCD::OPC_CheckPredicate, 4, 201, 8, // Skip to: 12577
/* 10328 */   MCD::OPC_Decode, 28, 11, // Opcode: ADDSC
/* 10331 */   MCD::OPC_FilterValue, 17, 7, 0, // Skip to: 10342
/* 10335 */   MCD::OPC_CheckPredicate, 4, 190, 8, // Skip to: 12577
/* 10339 */   MCD::OPC_Decode, 55, 11, // Opcode: ADDWC
/* 10342 */   MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 10354
/* 10346 */   MCD::OPC_CheckPredicate, 4, 179, 8, // Skip to: 12577
/* 10350 */   MCD::OPC_Decode, 169, 6, 11, // Opcode: MODSUB
/* 10354 */   MCD::OPC_FilterValue, 20, 14, 0, // Skip to: 10372
/* 10358 */   MCD::OPC_CheckPredicate, 4, 167, 8, // Skip to: 12577
/* 10362 */   MCD::OPC_CheckField, 16, 5, 0, 161, 8, // Skip to: 12577
/* 10368 */   MCD::OPC_Decode, 232, 7, 81, // Opcode: RADDU_W_QB
/* 10372 */   MCD::OPC_FilterValue, 22, 7, 0, // Skip to: 10383
/* 10376 */   MCD::OPC_CheckPredicate, 4, 149, 8, // Skip to: 12577
/* 10380 */   MCD::OPC_Decode, 27, 11, // Opcode: ADDQ_S_W
/* 10383 */   MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 10395
/* 10387 */   MCD::OPC_CheckPredicate, 4, 138, 8, // Skip to: 12577
/* 10391 */   MCD::OPC_Decode, 159, 9, 11, // Opcode: SUBQ_S_W
/* 10395 */   MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 10407
/* 10399 */   MCD::OPC_CheckPredicate, 4, 126, 8, // Skip to: 12577
/* 10403 */   MCD::OPC_Decode, 234, 6, 82, // Opcode: MULEQ_S_W_PHL
/* 10407 */   MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 10419
/* 10411 */   MCD::OPC_CheckPredicate, 4, 114, 8, // Skip to: 12577
/* 10415 */   MCD::OPC_Decode, 235, 6, 82, // Opcode: MULEQ_S_W_PHR
/* 10419 */   MCD::OPC_FilterValue, 30, 8, 0, // Skip to: 10431
/* 10423 */   MCD::OPC_CheckPredicate, 14, 102, 8, // Skip to: 12577
/* 10427 */   MCD::OPC_Decode, 240, 6, 80, // Opcode: MULQ_S_PH
/* 10431 */   MCD::OPC_FilterValue, 31, 94, 8, // Skip to: 12577
/* 10435 */   MCD::OPC_CheckPredicate, 4, 90, 8, // Skip to: 12577
/* 10439 */   MCD::OPC_Decode, 238, 6, 80, // Opcode: MULQ_RS_PH
/* 10443 */   MCD::OPC_FilterValue, 17, 47, 1, // Skip to: 10750
/* 10447 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 10450 */   MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 10468
/* 10454 */   MCD::OPC_CheckPredicate, 4, 71, 8, // Skip to: 12577
/* 10458 */   MCD::OPC_CheckField, 11, 5, 0, 65, 8, // Skip to: 12577
/* 10464 */   MCD::OPC_Decode, 171, 2, 83, // Opcode: CMPU_EQ_QB
/* 10468 */   MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 10486
/* 10472 */   MCD::OPC_CheckPredicate, 4, 53, 8, // Skip to: 12577
/* 10476 */   MCD::OPC_CheckField, 11, 5, 0, 47, 8, // Skip to: 12577
/* 10482 */   MCD::OPC_Decode, 173, 2, 83, // Opcode: CMPU_LT_QB
/* 10486 */   MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 10504
/* 10490 */   MCD::OPC_CheckPredicate, 4, 35, 8, // Skip to: 12577
/* 10494 */   MCD::OPC_CheckField, 11, 5, 0, 29, 8, // Skip to: 12577
/* 10500 */   MCD::OPC_Decode, 172, 2, 83, // Opcode: CMPU_LE_QB
/* 10504 */   MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 10516
/* 10508 */   MCD::OPC_CheckPredicate, 4, 17, 8, // Skip to: 12577
/* 10512 */   MCD::OPC_Decode, 186, 7, 80, // Opcode: PICK_QB
/* 10516 */   MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 10528
/* 10520 */   MCD::OPC_CheckPredicate, 4, 5, 8, // Skip to: 12577
/* 10524 */   MCD::OPC_Decode, 168, 2, 82, // Opcode: CMPGU_EQ_QB
/* 10528 */   MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 10540
/* 10532 */   MCD::OPC_CheckPredicate, 4, 249, 7, // Skip to: 12577
/* 10536 */   MCD::OPC_Decode, 170, 2, 82, // Opcode: CMPGU_LT_QB
/* 10540 */   MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 10552
/* 10544 */   MCD::OPC_CheckPredicate, 4, 237, 7, // Skip to: 12577
/* 10548 */   MCD::OPC_Decode, 169, 2, 82, // Opcode: CMPGU_LE_QB
/* 10552 */   MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 10570
/* 10556 */   MCD::OPC_CheckPredicate, 4, 225, 7, // Skip to: 12577
/* 10560 */   MCD::OPC_CheckField, 11, 5, 0, 219, 7, // Skip to: 12577
/* 10566 */   MCD::OPC_Decode, 174, 2, 83, // Opcode: CMP_EQ_PH
/* 10570 */   MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 10588
/* 10574 */   MCD::OPC_CheckPredicate, 4, 207, 7, // Skip to: 12577
/* 10578 */   MCD::OPC_CheckField, 11, 5, 0, 201, 7, // Skip to: 12577
/* 10584 */   MCD::OPC_Decode, 176, 2, 83, // Opcode: CMP_LT_PH
/* 10588 */   MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 10606
/* 10592 */   MCD::OPC_CheckPredicate, 4, 189, 7, // Skip to: 12577
/* 10596 */   MCD::OPC_CheckField, 11, 5, 0, 183, 7, // Skip to: 12577
/* 10602 */   MCD::OPC_Decode, 175, 2, 83, // Opcode: CMP_LE_PH
/* 10606 */   MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 10618
/* 10610 */   MCD::OPC_CheckPredicate, 4, 171, 7, // Skip to: 12577
/* 10614 */   MCD::OPC_Decode, 185, 7, 80, // Opcode: PICK_PH
/* 10618 */   MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 10630
/* 10622 */   MCD::OPC_CheckPredicate, 4, 159, 7, // Skip to: 12577
/* 10626 */   MCD::OPC_Decode, 199, 7, 80, // Opcode: PRECRQ_QB_PH
/* 10630 */   MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 10642
/* 10634 */   MCD::OPC_CheckPredicate, 14, 147, 7, // Skip to: 12577
/* 10638 */   MCD::OPC_Decode, 201, 7, 80, // Opcode: PRECR_QB_PH
/* 10642 */   MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 10654
/* 10646 */   MCD::OPC_CheckPredicate, 4, 135, 7, // Skip to: 12577
/* 10650 */   MCD::OPC_Decode, 172, 7, 80, // Opcode: PACKRL_PH
/* 10654 */   MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 10666
/* 10658 */   MCD::OPC_CheckPredicate, 4, 123, 7, // Skip to: 12577
/* 10662 */   MCD::OPC_Decode, 197, 7, 80, // Opcode: PRECRQU_S_QB_PH
/* 10666 */   MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 10678
/* 10670 */   MCD::OPC_CheckPredicate, 4, 111, 7, // Skip to: 12577
/* 10674 */   MCD::OPC_Decode, 198, 7, 84, // Opcode: PRECRQ_PH_W
/* 10678 */   MCD::OPC_FilterValue, 21, 8, 0, // Skip to: 10690
/* 10682 */   MCD::OPC_CheckPredicate, 4, 99, 7, // Skip to: 12577
/* 10686 */   MCD::OPC_Decode, 200, 7, 84, // Opcode: PRECRQ_RS_PH_W
/* 10690 */   MCD::OPC_FilterValue, 24, 8, 0, // Skip to: 10702
/* 10694 */   MCD::OPC_CheckPredicate, 14, 87, 7, // Skip to: 12577
/* 10698 */   MCD::OPC_Decode, 165, 2, 82, // Opcode: CMPGDU_EQ_QB
/* 10702 */   MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 10714
/* 10706 */   MCD::OPC_CheckPredicate, 14, 75, 7, // Skip to: 12577
/* 10710 */   MCD::OPC_Decode, 167, 2, 82, // Opcode: CMPGDU_LT_QB
/* 10714 */   MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 10726
/* 10718 */   MCD::OPC_CheckPredicate, 14, 63, 7, // Skip to: 12577
/* 10722 */   MCD::OPC_Decode, 166, 2, 82, // Opcode: CMPGDU_LE_QB
/* 10726 */   MCD::OPC_FilterValue, 30, 8, 0, // Skip to: 10738
/* 10730 */   MCD::OPC_CheckPredicate, 14, 51, 7, // Skip to: 12577
/* 10734 */   MCD::OPC_Decode, 202, 7, 85, // Opcode: PRECR_SRA_PH_W
/* 10738 */   MCD::OPC_FilterValue, 31, 43, 7, // Skip to: 12577
/* 10742 */   MCD::OPC_CheckPredicate, 14, 39, 7, // Skip to: 12577
/* 10746 */   MCD::OPC_Decode, 203, 7, 85, // Opcode: PRECR_SRA_R_PH_W
/* 10750 */   MCD::OPC_FilterValue, 18, 56, 1, // Skip to: 11066
/* 10754 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 10757 */   MCD::OPC_FilterValue, 1, 13, 0, // Skip to: 10774
/* 10761 */   MCD::OPC_CheckPredicate, 14, 20, 7, // Skip to: 12577
/* 10765 */   MCD::OPC_CheckField, 21, 5, 0, 14, 7, // Skip to: 12577
/* 10771 */   MCD::OPC_Decode, 18, 86, // Opcode: ABSQ_S_QB
/* 10774 */   MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 10786
/* 10778 */   MCD::OPC_CheckPredicate, 4, 3, 7, // Skip to: 12577
/* 10782 */   MCD::OPC_Decode, 239, 7, 87, // Opcode: REPL_QB
/* 10786 */   MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 10804
/* 10790 */   MCD::OPC_CheckPredicate, 4, 247, 6, // Skip to: 12577
/* 10794 */   MCD::OPC_CheckField, 21, 5, 0, 241, 6, // Skip to: 12577
/* 10800 */   MCD::OPC_Decode, 237, 7, 88, // Opcode: REPLV_QB
/* 10804 */   MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 10822
/* 10808 */   MCD::OPC_CheckPredicate, 4, 229, 6, // Skip to: 12577
/* 10812 */   MCD::OPC_CheckField, 21, 5, 0, 223, 6, // Skip to: 12577
/* 10818 */   MCD::OPC_Decode, 187, 7, 86, // Opcode: PRECEQU_PH_QBL
/* 10822 */   MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 10840
/* 10826 */   MCD::OPC_CheckPredicate, 4, 211, 6, // Skip to: 12577
/* 10830 */   MCD::OPC_CheckField, 21, 5, 0, 205, 6, // Skip to: 12577
/* 10836 */   MCD::OPC_Decode, 189, 7, 86, // Opcode: PRECEQU_PH_QBR
/* 10840 */   MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 10858
/* 10844 */   MCD::OPC_CheckPredicate, 4, 193, 6, // Skip to: 12577
/* 10848 */   MCD::OPC_CheckField, 21, 5, 0, 187, 6, // Skip to: 12577
/* 10854 */   MCD::OPC_Decode, 188, 7, 86, // Opcode: PRECEQU_PH_QBLA
/* 10858 */   MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 10876
/* 10862 */   MCD::OPC_CheckPredicate, 4, 175, 6, // Skip to: 12577
/* 10866 */   MCD::OPC_CheckField, 21, 5, 0, 169, 6, // Skip to: 12577
/* 10872 */   MCD::OPC_Decode, 190, 7, 86, // Opcode: PRECEQU_PH_QBRA
/* 10876 */   MCD::OPC_FilterValue, 9, 13, 0, // Skip to: 10893
/* 10880 */   MCD::OPC_CheckPredicate, 4, 157, 6, // Skip to: 12577
/* 10884 */   MCD::OPC_CheckField, 21, 5, 0, 151, 6, // Skip to: 12577
/* 10890 */   MCD::OPC_Decode, 17, 86, // Opcode: ABSQ_S_PH
/* 10893 */   MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 10905
/* 10897 */   MCD::OPC_CheckPredicate, 4, 140, 6, // Skip to: 12577
/* 10901 */   MCD::OPC_Decode, 238, 7, 87, // Opcode: REPL_PH
/* 10905 */   MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 10923
/* 10909 */   MCD::OPC_CheckPredicate, 4, 128, 6, // Skip to: 12577
/* 10913 */   MCD::OPC_CheckField, 21, 5, 0, 122, 6, // Skip to: 12577
/* 10919 */   MCD::OPC_Decode, 236, 7, 88, // Opcode: REPLV_PH
/* 10923 */   MCD::OPC_FilterValue, 12, 14, 0, // Skip to: 10941
/* 10927 */   MCD::OPC_CheckPredicate, 4, 110, 6, // Skip to: 12577
/* 10931 */   MCD::OPC_CheckField, 21, 5, 0, 104, 6, // Skip to: 12577
/* 10937 */   MCD::OPC_Decode, 191, 7, 89, // Opcode: PRECEQ_W_PHL
/* 10941 */   MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 10959
/* 10945 */   MCD::OPC_CheckPredicate, 4, 92, 6, // Skip to: 12577
/* 10949 */   MCD::OPC_CheckField, 21, 5, 0, 86, 6, // Skip to: 12577
/* 10955 */   MCD::OPC_Decode, 192, 7, 89, // Opcode: PRECEQ_W_PHR
/* 10959 */   MCD::OPC_FilterValue, 17, 13, 0, // Skip to: 10976
/* 10963 */   MCD::OPC_CheckPredicate, 4, 74, 6, // Skip to: 12577
/* 10967 */   MCD::OPC_CheckField, 21, 5, 0, 68, 6, // Skip to: 12577
/* 10973 */   MCD::OPC_Decode, 19, 90, // Opcode: ABSQ_S_W
/* 10976 */   MCD::OPC_FilterValue, 27, 14, 0, // Skip to: 10994
/* 10980 */   MCD::OPC_CheckPredicate, 4, 57, 6, // Skip to: 12577
/* 10984 */   MCD::OPC_CheckField, 21, 5, 0, 51, 6, // Skip to: 12577
/* 10990 */   MCD::OPC_Decode, 179, 1, 90, // Opcode: BITREV
/* 10994 */   MCD::OPC_FilterValue, 28, 14, 0, // Skip to: 11012
/* 10998 */   MCD::OPC_CheckPredicate, 4, 39, 6, // Skip to: 12577
/* 11002 */   MCD::OPC_CheckField, 21, 5, 0, 33, 6, // Skip to: 12577
/* 11008 */   MCD::OPC_Decode, 193, 7, 86, // Opcode: PRECEU_PH_QBL
/* 11012 */   MCD::OPC_FilterValue, 29, 14, 0, // Skip to: 11030
/* 11016 */   MCD::OPC_CheckPredicate, 4, 21, 6, // Skip to: 12577
/* 11020 */   MCD::OPC_CheckField, 21, 5, 0, 15, 6, // Skip to: 12577
/* 11026 */   MCD::OPC_Decode, 195, 7, 86, // Opcode: PRECEU_PH_QBR
/* 11030 */   MCD::OPC_FilterValue, 30, 14, 0, // Skip to: 11048
/* 11034 */   MCD::OPC_CheckPredicate, 4, 3, 6, // Skip to: 12577
/* 11038 */   MCD::OPC_CheckField, 21, 5, 0, 253, 5, // Skip to: 12577
/* 11044 */   MCD::OPC_Decode, 194, 7, 86, // Opcode: PRECEU_PH_QBLA
/* 11048 */   MCD::OPC_FilterValue, 31, 245, 5, // Skip to: 12577
/* 11052 */   MCD::OPC_CheckPredicate, 4, 241, 5, // Skip to: 12577
/* 11056 */   MCD::OPC_CheckField, 21, 5, 0, 235, 5, // Skip to: 12577
/* 11062 */   MCD::OPC_Decode, 196, 7, 86, // Opcode: PRECEU_PH_QBRA
/* 11066 */   MCD::OPC_FilterValue, 19, 11, 1, // Skip to: 11337
/* 11070 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 11073 */   MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 11085
/* 11077 */   MCD::OPC_CheckPredicate, 4, 216, 5, // Skip to: 12577
/* 11081 */   MCD::OPC_Decode, 163, 8, 91, // Opcode: SHLL_QB
/* 11085 */   MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 11097
/* 11089 */   MCD::OPC_CheckPredicate, 4, 204, 5, // Skip to: 12577
/* 11093 */   MCD::OPC_Decode, 179, 8, 91, // Opcode: SHRL_QB
/* 11097 */   MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 11109
/* 11101 */   MCD::OPC_CheckPredicate, 4, 192, 5, // Skip to: 12577
/* 11105 */   MCD::OPC_Decode, 159, 8, 92, // Opcode: SHLLV_QB
/* 11109 */   MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 11121
/* 11113 */   MCD::OPC_CheckPredicate, 4, 180, 5, // Skip to: 12577
/* 11117 */   MCD::OPC_Decode, 177, 8, 92, // Opcode: SHRLV_QB
/* 11121 */   MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 11133
/* 11125 */   MCD::OPC_CheckPredicate, 14, 168, 5, // Skip to: 12577
/* 11129 */   MCD::OPC_Decode, 172, 8, 91, // Opcode: SHRA_QB
/* 11133 */   MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 11145
/* 11137 */   MCD::OPC_CheckPredicate, 14, 156, 5, // Skip to: 12577
/* 11141 */   MCD::OPC_Decode, 174, 8, 91, // Opcode: SHRA_R_QB
/* 11145 */   MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 11157
/* 11149 */   MCD::OPC_CheckPredicate, 14, 144, 5, // Skip to: 12577
/* 11153 */   MCD::OPC_Decode, 167, 8, 92, // Opcode: SHRAV_QB
/* 11157 */   MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 11169
/* 11161 */   MCD::OPC_CheckPredicate, 14, 132, 5, // Skip to: 12577
/* 11165 */   MCD::OPC_Decode, 169, 8, 92, // Opcode: SHRAV_R_QB
/* 11169 */   MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 11181
/* 11173 */   MCD::OPC_CheckPredicate, 4, 120, 5, // Skip to: 12577
/* 11177 */   MCD::OPC_Decode, 162, 8, 91, // Opcode: SHLL_PH
/* 11181 */   MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 11193
/* 11185 */   MCD::OPC_CheckPredicate, 4, 108, 5, // Skip to: 12577
/* 11189 */   MCD::OPC_Decode, 171, 8, 91, // Opcode: SHRA_PH
/* 11193 */   MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 11205
/* 11197 */   MCD::OPC_CheckPredicate, 4, 96, 5, // Skip to: 12577
/* 11201 */   MCD::OPC_Decode, 158, 8, 92, // Opcode: SHLLV_PH
/* 11205 */   MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 11217
/* 11209 */   MCD::OPC_CheckPredicate, 4, 84, 5, // Skip to: 12577
/* 11213 */   MCD::OPC_Decode, 166, 8, 92, // Opcode: SHRAV_PH
/* 11217 */   MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 11229
/* 11221 */   MCD::OPC_CheckPredicate, 4, 72, 5, // Skip to: 12577
/* 11225 */   MCD::OPC_Decode, 164, 8, 91, // Opcode: SHLL_S_PH
/* 11229 */   MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 11241
/* 11233 */   MCD::OPC_CheckPredicate, 4, 60, 5, // Skip to: 12577
/* 11237 */   MCD::OPC_Decode, 173, 8, 91, // Opcode: SHRA_R_PH
/* 11241 */   MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 11253
/* 11245 */   MCD::OPC_CheckPredicate, 4, 48, 5, // Skip to: 12577
/* 11249 */   MCD::OPC_Decode, 160, 8, 92, // Opcode: SHLLV_S_PH
/* 11253 */   MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 11265
/* 11257 */   MCD::OPC_CheckPredicate, 4, 36, 5, // Skip to: 12577
/* 11261 */   MCD::OPC_Decode, 168, 8, 92, // Opcode: SHRAV_R_PH
/* 11265 */   MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 11277
/* 11269 */   MCD::OPC_CheckPredicate, 4, 24, 5, // Skip to: 12577
/* 11273 */   MCD::OPC_Decode, 165, 8, 93, // Opcode: SHLL_S_W
/* 11277 */   MCD::OPC_FilterValue, 21, 8, 0, // Skip to: 11289
/* 11281 */   MCD::OPC_CheckPredicate, 4, 12, 5, // Skip to: 12577
/* 11285 */   MCD::OPC_Decode, 175, 8, 93, // Opcode: SHRA_R_W
/* 11289 */   MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 11301
/* 11293 */   MCD::OPC_CheckPredicate, 4, 0, 5, // Skip to: 12577
/* 11297 */   MCD::OPC_Decode, 161, 8, 12, // Opcode: SHLLV_S_W
/* 11301 */   MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 11313
/* 11305 */   MCD::OPC_CheckPredicate, 4, 244, 4, // Skip to: 12577
/* 11309 */   MCD::OPC_Decode, 170, 8, 12, // Opcode: SHRAV_R_W
/* 11313 */   MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 11325
/* 11317 */   MCD::OPC_CheckPredicate, 14, 232, 4, // Skip to: 12577
/* 11321 */   MCD::OPC_Decode, 178, 8, 91, // Opcode: SHRL_PH
/* 11325 */   MCD::OPC_FilterValue, 27, 224, 4, // Skip to: 12577
/* 11329 */   MCD::OPC_CheckPredicate, 14, 220, 4, // Skip to: 12577
/* 11333 */   MCD::OPC_Decode, 176, 8, 92, // Opcode: SHRLV_PH
/* 11337 */   MCD::OPC_FilterValue, 24, 189, 0, // Skip to: 11530
/* 11341 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 11344 */   MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 11355
/* 11348 */   MCD::OPC_CheckPredicate, 14, 201, 4, // Skip to: 12577
/* 11352 */   MCD::OPC_Decode, 41, 80, // Opcode: ADDUH_QB
/* 11355 */   MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 11367
/* 11359 */   MCD::OPC_CheckPredicate, 14, 190, 4, // Skip to: 12577
/* 11363 */   MCD::OPC_Decode, 176, 9, 80, // Opcode: SUBUH_QB
/* 11367 */   MCD::OPC_FilterValue, 2, 7, 0, // Skip to: 11378
/* 11371 */   MCD::OPC_CheckPredicate, 14, 178, 4, // Skip to: 12577
/* 11375 */   MCD::OPC_Decode, 42, 80, // Opcode: ADDUH_R_QB
/* 11378 */   MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 11390
/* 11382 */   MCD::OPC_CheckPredicate, 14, 167, 4, // Skip to: 12577
/* 11386 */   MCD::OPC_Decode, 177, 9, 80, // Opcode: SUBUH_R_QB
/* 11390 */   MCD::OPC_FilterValue, 8, 7, 0, // Skip to: 11401
/* 11394 */   MCD::OPC_CheckPredicate, 14, 155, 4, // Skip to: 12577
/* 11398 */   MCD::OPC_Decode, 21, 80, // Opcode: ADDQH_PH
/* 11401 */   MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 11413
/* 11405 */   MCD::OPC_CheckPredicate, 14, 144, 4, // Skip to: 12577
/* 11409 */   MCD::OPC_Decode, 153, 9, 80, // Opcode: SUBQH_PH
/* 11413 */   MCD::OPC_FilterValue, 10, 7, 0, // Skip to: 11424
/* 11417 */   MCD::OPC_CheckPredicate, 14, 132, 4, // Skip to: 12577
/* 11421 */   MCD::OPC_Decode, 22, 80, // Opcode: ADDQH_R_PH
/* 11424 */   MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 11436
/* 11428 */   MCD::OPC_CheckPredicate, 14, 121, 4, // Skip to: 12577
/* 11432 */   MCD::OPC_Decode, 154, 9, 80, // Opcode: SUBQH_R_PH
/* 11436 */   MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 11448
/* 11440 */   MCD::OPC_CheckPredicate, 14, 109, 4, // Skip to: 12577
/* 11444 */   MCD::OPC_Decode, 129, 7, 80, // Opcode: MUL_PH
/* 11448 */   MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 11460
/* 11452 */   MCD::OPC_CheckPredicate, 14, 97, 4, // Skip to: 12577
/* 11456 */   MCD::OPC_Decode, 132, 7, 80, // Opcode: MUL_S_PH
/* 11460 */   MCD::OPC_FilterValue, 16, 7, 0, // Skip to: 11471
/* 11464 */   MCD::OPC_CheckPredicate, 14, 85, 4, // Skip to: 12577
/* 11468 */   MCD::OPC_Decode, 24, 11, // Opcode: ADDQH_W
/* 11471 */   MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 11483
/* 11475 */   MCD::OPC_CheckPredicate, 14, 74, 4, // Skip to: 12577
/* 11479 */   MCD::OPC_Decode, 156, 9, 11, // Opcode: SUBQH_W
/* 11483 */   MCD::OPC_FilterValue, 18, 7, 0, // Skip to: 11494
/* 11487 */   MCD::OPC_CheckPredicate, 14, 62, 4, // Skip to: 12577
/* 11491 */   MCD::OPC_Decode, 23, 11, // Opcode: ADDQH_R_W
/* 11494 */   MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 11506
/* 11498 */   MCD::OPC_CheckPredicate, 14, 51, 4, // Skip to: 12577
/* 11502 */   MCD::OPC_Decode, 155, 9, 11, // Opcode: SUBQH_R_W
/* 11506 */   MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 11518
/* 11510 */   MCD::OPC_CheckPredicate, 14, 39, 4, // Skip to: 12577
/* 11514 */   MCD::OPC_Decode, 241, 6, 11, // Opcode: MULQ_S_W
/* 11518 */   MCD::OPC_FilterValue, 23, 31, 4, // Skip to: 12577
/* 11522 */   MCD::OPC_CheckPredicate, 14, 27, 4, // Skip to: 12577
/* 11526 */   MCD::OPC_Decode, 239, 6, 11, // Opcode: MULQ_RS_W
/* 11530 */   MCD::OPC_FilterValue, 32, 57, 0, // Skip to: 11591
/* 11534 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 11537 */   MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 11555
/* 11541 */   MCD::OPC_CheckPredicate, 15, 8, 4, // Skip to: 12577
/* 11545 */   MCD::OPC_CheckField, 21, 5, 0, 2, 4, // Skip to: 12577
/* 11551 */   MCD::OPC_Decode, 151, 10, 90, // Opcode: WSBH
/* 11555 */   MCD::OPC_FilterValue, 16, 14, 0, // Skip to: 11573
/* 11559 */   MCD::OPC_CheckPredicate, 16, 246, 3, // Skip to: 12577
/* 11563 */   MCD::OPC_CheckField, 21, 5, 0, 240, 3, // Skip to: 12577
/* 11569 */   MCD::OPC_Decode, 147, 8, 90, // Opcode: SEB
/* 11573 */   MCD::OPC_FilterValue, 24, 232, 3, // Skip to: 12577
/* 11577 */   MCD::OPC_CheckPredicate, 16, 228, 3, // Skip to: 12577
/* 11581 */   MCD::OPC_CheckField, 21, 5, 0, 222, 3, // Skip to: 12577
/* 11587 */   MCD::OPC_Decode, 149, 8, 90, // Opcode: SEH
/* 11591 */   MCD::OPC_FilterValue, 48, 143, 1, // Skip to: 11994
/* 11595 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 11598 */   MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 11616
/* 11602 */   MCD::OPC_CheckPredicate, 14, 203, 3, // Skip to: 12577
/* 11606 */   MCD::OPC_CheckField, 13, 3, 0, 197, 3, // Skip to: 12577
/* 11612 */   MCD::OPC_Decode, 174, 3, 74, // Opcode: DPA_W_PH
/* 11616 */   MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 11634
/* 11620 */   MCD::OPC_CheckPredicate, 14, 185, 3, // Skip to: 12577
/* 11624 */   MCD::OPC_CheckField, 13, 3, 0, 179, 3, // Skip to: 12577
/* 11630 */   MCD::OPC_Decode, 188, 3, 74, // Opcode: DPS_W_PH
/* 11634 */   MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 11652
/* 11638 */   MCD::OPC_CheckPredicate, 14, 167, 3, // Skip to: 12577
/* 11642 */   MCD::OPC_CheckField, 13, 3, 0, 161, 3, // Skip to: 12577
/* 11648 */   MCD::OPC_Decode, 245, 6, 74, // Opcode: MULSA_W_PH
/* 11652 */   MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 11670
/* 11656 */   MCD::OPC_CheckPredicate, 4, 149, 3, // Skip to: 12577
/* 11660 */   MCD::OPC_CheckField, 13, 3, 0, 143, 3, // Skip to: 12577
/* 11666 */   MCD::OPC_Decode, 171, 3, 74, // Opcode: DPAU_H_QBL
/* 11670 */   MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 11688
/* 11674 */   MCD::OPC_CheckPredicate, 4, 131, 3, // Skip to: 12577
/* 11678 */   MCD::OPC_CheckField, 13, 3, 0, 125, 3, // Skip to: 12577
/* 11684 */   MCD::OPC_Decode, 170, 3, 74, // Opcode: DPAQ_S_W_PH
/* 11688 */   MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 11706
/* 11692 */   MCD::OPC_CheckPredicate, 4, 113, 3, // Skip to: 12577
/* 11696 */   MCD::OPC_CheckField, 13, 3, 0, 107, 3, // Skip to: 12577
/* 11702 */   MCD::OPC_Decode, 178, 3, 74, // Opcode: DPSQ_S_W_PH
/* 11706 */   MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 11724
/* 11710 */   MCD::OPC_CheckPredicate, 4, 95, 3, // Skip to: 12577
/* 11714 */   MCD::OPC_CheckField, 13, 3, 0, 89, 3, // Skip to: 12577
/* 11720 */   MCD::OPC_Decode, 244, 6, 74, // Opcode: MULSAQ_S_W_PH
/* 11724 */   MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 11742
/* 11728 */   MCD::OPC_CheckPredicate, 4, 77, 3, // Skip to: 12577
/* 11732 */   MCD::OPC_CheckField, 13, 3, 0, 71, 3, // Skip to: 12577
/* 11738 */   MCD::OPC_Decode, 172, 3, 74, // Opcode: DPAU_H_QBR
/* 11742 */   MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 11760
/* 11746 */   MCD::OPC_CheckPredicate, 14, 59, 3, // Skip to: 12577
/* 11750 */   MCD::OPC_CheckField, 13, 3, 0, 53, 3, // Skip to: 12577
/* 11756 */   MCD::OPC_Decode, 173, 3, 74, // Opcode: DPAX_W_PH
/* 11760 */   MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 11778
/* 11764 */   MCD::OPC_CheckPredicate, 14, 41, 3, // Skip to: 12577
/* 11768 */   MCD::OPC_CheckField, 13, 3, 0, 35, 3, // Skip to: 12577
/* 11774 */   MCD::OPC_Decode, 187, 3, 74, // Opcode: DPSX_W_PH
/* 11778 */   MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 11796
/* 11782 */   MCD::OPC_CheckPredicate, 4, 23, 3, // Skip to: 12577
/* 11786 */   MCD::OPC_CheckField, 13, 3, 0, 17, 3, // Skip to: 12577
/* 11792 */   MCD::OPC_Decode, 185, 3, 74, // Opcode: DPSU_H_QBL
/* 11796 */   MCD::OPC_FilterValue, 12, 14, 0, // Skip to: 11814
/* 11800 */   MCD::OPC_CheckPredicate, 4, 5, 3, // Skip to: 12577
/* 11804 */   MCD::OPC_CheckField, 13, 3, 0, 255, 2, // Skip to: 12577
/* 11810 */   MCD::OPC_Decode, 169, 3, 74, // Opcode: DPAQ_SA_L_W
/* 11814 */   MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 11832
/* 11818 */   MCD::OPC_CheckPredicate, 4, 243, 2, // Skip to: 12577
/* 11822 */   MCD::OPC_CheckField, 13, 3, 0, 237, 2, // Skip to: 12577
/* 11828 */   MCD::OPC_Decode, 177, 3, 74, // Opcode: DPSQ_SA_L_W
/* 11832 */   MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 11850
/* 11836 */   MCD::OPC_CheckPredicate, 4, 225, 2, // Skip to: 12577
/* 11840 */   MCD::OPC_CheckField, 13, 3, 0, 219, 2, // Skip to: 12577
/* 11846 */   MCD::OPC_Decode, 186, 3, 74, // Opcode: DPSU_H_QBR
/* 11850 */   MCD::OPC_FilterValue, 16, 14, 0, // Skip to: 11868
/* 11854 */   MCD::OPC_CheckPredicate, 4, 207, 2, // Skip to: 12577
/* 11858 */   MCD::OPC_CheckField, 13, 3, 0, 201, 2, // Skip to: 12577
/* 11864 */   MCD::OPC_Decode, 241, 5, 74, // Opcode: MAQ_SA_W_PHL
/* 11868 */   MCD::OPC_FilterValue, 18, 14, 0, // Skip to: 11886
/* 11872 */   MCD::OPC_CheckPredicate, 4, 189, 2, // Skip to: 12577
/* 11876 */   MCD::OPC_CheckField, 13, 3, 0, 183, 2, // Skip to: 12577
/* 11882 */   MCD::OPC_Decode, 242, 5, 74, // Opcode: MAQ_SA_W_PHR
/* 11886 */   MCD::OPC_FilterValue, 20, 14, 0, // Skip to: 11904
/* 11890 */   MCD::OPC_CheckPredicate, 4, 171, 2, // Skip to: 12577
/* 11894 */   MCD::OPC_CheckField, 13, 3, 0, 165, 2, // Skip to: 12577
/* 11900 */   MCD::OPC_Decode, 243, 5, 74, // Opcode: MAQ_S_W_PHL
/* 11904 */   MCD::OPC_FilterValue, 22, 14, 0, // Skip to: 11922
/* 11908 */   MCD::OPC_CheckPredicate, 4, 153, 2, // Skip to: 12577
/* 11912 */   MCD::OPC_CheckField, 13, 3, 0, 147, 2, // Skip to: 12577
/* 11918 */   MCD::OPC_Decode, 244, 5, 74, // Opcode: MAQ_S_W_PHR
/* 11922 */   MCD::OPC_FilterValue, 24, 14, 0, // Skip to: 11940
/* 11926 */   MCD::OPC_CheckPredicate, 14, 135, 2, // Skip to: 12577
/* 11930 */   MCD::OPC_CheckField, 13, 3, 0, 129, 2, // Skip to: 12577
/* 11936 */   MCD::OPC_Decode, 168, 3, 74, // Opcode: DPAQX_S_W_PH
/* 11940 */   MCD::OPC_FilterValue, 25, 14, 0, // Skip to: 11958
/* 11944 */   MCD::OPC_CheckPredicate, 14, 117, 2, // Skip to: 12577
/* 11948 */   MCD::OPC_CheckField, 13, 3, 0, 111, 2, // Skip to: 12577
/* 11954 */   MCD::OPC_Decode, 176, 3, 74, // Opcode: DPSQX_S_W_PH
/* 11958 */   MCD::OPC_FilterValue, 26, 14, 0, // Skip to: 11976
/* 11962 */   MCD::OPC_CheckPredicate, 14, 99, 2, // Skip to: 12577
/* 11966 */   MCD::OPC_CheckField, 13, 3, 0, 93, 2, // Skip to: 12577
/* 11972 */   MCD::OPC_Decode, 167, 3, 74, // Opcode: DPAQX_SA_W_PH
/* 11976 */   MCD::OPC_FilterValue, 27, 85, 2, // Skip to: 12577
/* 11980 */   MCD::OPC_CheckPredicate, 14, 81, 2, // Skip to: 12577
/* 11984 */   MCD::OPC_CheckField, 13, 3, 0, 75, 2, // Skip to: 12577
/* 11990 */   MCD::OPC_Decode, 175, 3, 74, // Opcode: DPSQX_SA_W_PH
/* 11994 */   MCD::OPC_FilterValue, 49, 38, 0, // Skip to: 12036
/* 11998 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12001 */   MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 12012
/* 12005 */   MCD::OPC_CheckPredicate, 14, 56, 2, // Skip to: 12577
/* 12009 */   MCD::OPC_Decode, 77, 94, // Opcode: APPEND
/* 12012 */   MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 12024
/* 12016 */   MCD::OPC_CheckPredicate, 14, 45, 2, // Skip to: 12577
/* 12020 */   MCD::OPC_Decode, 204, 7, 94, // Opcode: PREPEND
/* 12024 */   MCD::OPC_FilterValue, 16, 37, 2, // Skip to: 12577
/* 12028 */   MCD::OPC_CheckPredicate, 14, 33, 2, // Skip to: 12577
/* 12032 */   MCD::OPC_Decode, 144, 1, 94, // Opcode: BALIGN
/* 12036 */   MCD::OPC_FilterValue, 56, 41, 1, // Skip to: 12337
/* 12040 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12043 */   MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 12061
/* 12047 */   MCD::OPC_CheckPredicate, 4, 14, 2, // Skip to: 12577
/* 12051 */   MCD::OPC_CheckField, 13, 3, 0, 8, 2, // Skip to: 12577
/* 12057 */   MCD::OPC_Decode, 222, 3, 95, // Opcode: EXTR_W
/* 12061 */   MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 12079
/* 12065 */   MCD::OPC_CheckPredicate, 4, 252, 1, // Skip to: 12577
/* 12069 */   MCD::OPC_CheckField, 13, 3, 0, 246, 1, // Skip to: 12577
/* 12075 */   MCD::OPC_Decode, 218, 3, 96, // Opcode: EXTRV_W
/* 12079 */   MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 12097
/* 12083 */   MCD::OPC_CheckPredicate, 4, 234, 1, // Skip to: 12577
/* 12087 */   MCD::OPC_CheckField, 13, 3, 0, 228, 1, // Skip to: 12577
/* 12093 */   MCD::OPC_Decode, 211, 3, 95, // Opcode: EXTP
/* 12097 */   MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 12115
/* 12101 */   MCD::OPC_CheckPredicate, 4, 216, 1, // Skip to: 12577
/* 12105 */   MCD::OPC_CheckField, 13, 3, 0, 210, 1, // Skip to: 12577
/* 12111 */   MCD::OPC_Decode, 214, 3, 96, // Opcode: EXTPV
/* 12115 */   MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 12133
/* 12119 */   MCD::OPC_CheckPredicate, 4, 198, 1, // Skip to: 12577
/* 12123 */   MCD::OPC_CheckField, 13, 3, 0, 192, 1, // Skip to: 12577
/* 12129 */   MCD::OPC_Decode, 220, 3, 95, // Opcode: EXTR_R_W
/* 12133 */   MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 12151
/* 12137 */   MCD::OPC_CheckPredicate, 4, 180, 1, // Skip to: 12577
/* 12141 */   MCD::OPC_CheckField, 13, 3, 0, 174, 1, // Skip to: 12577
/* 12147 */   MCD::OPC_Decode, 216, 3, 96, // Opcode: EXTRV_R_W
/* 12151 */   MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 12169
/* 12155 */   MCD::OPC_CheckPredicate, 4, 162, 1, // Skip to: 12577
/* 12159 */   MCD::OPC_CheckField, 13, 3, 0, 156, 1, // Skip to: 12577
/* 12165 */   MCD::OPC_Decode, 219, 3, 95, // Opcode: EXTR_RS_W
/* 12169 */   MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 12187
/* 12173 */   MCD::OPC_CheckPredicate, 4, 144, 1, // Skip to: 12577
/* 12177 */   MCD::OPC_CheckField, 13, 3, 0, 138, 1, // Skip to: 12577
/* 12183 */   MCD::OPC_Decode, 215, 3, 96, // Opcode: EXTRV_RS_W
/* 12187 */   MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 12205
/* 12191 */   MCD::OPC_CheckPredicate, 4, 126, 1, // Skip to: 12577
/* 12195 */   MCD::OPC_CheckField, 13, 3, 0, 120, 1, // Skip to: 12577
/* 12201 */   MCD::OPC_Decode, 212, 3, 95, // Opcode: EXTPDP
/* 12205 */   MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 12223
/* 12209 */   MCD::OPC_CheckPredicate, 4, 108, 1, // Skip to: 12577
/* 12213 */   MCD::OPC_CheckField, 13, 3, 0, 102, 1, // Skip to: 12577
/* 12219 */   MCD::OPC_Decode, 213, 3, 96, // Opcode: EXTPDPV
/* 12223 */   MCD::OPC_FilterValue, 14, 14, 0, // Skip to: 12241
/* 12227 */   MCD::OPC_CheckPredicate, 4, 90, 1, // Skip to: 12577
/* 12231 */   MCD::OPC_CheckField, 13, 3, 0, 84, 1, // Skip to: 12577
/* 12237 */   MCD::OPC_Decode, 221, 3, 95, // Opcode: EXTR_S_H
/* 12241 */   MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 12259
/* 12245 */   MCD::OPC_CheckPredicate, 4, 72, 1, // Skip to: 12577
/* 12249 */   MCD::OPC_CheckField, 13, 3, 0, 66, 1, // Skip to: 12577
/* 12255 */   MCD::OPC_Decode, 217, 3, 96, // Opcode: EXTRV_S_H
/* 12259 */   MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 12271
/* 12263 */   MCD::OPC_CheckPredicate, 4, 54, 1, // Skip to: 12577
/* 12267 */   MCD::OPC_Decode, 233, 7, 97, // Opcode: RDDSP
/* 12271 */   MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 12283
/* 12275 */   MCD::OPC_CheckPredicate, 4, 42, 1, // Skip to: 12577
/* 12279 */   MCD::OPC_Decode, 150, 10, 98, // Opcode: WRDSP
/* 12283 */   MCD::OPC_FilterValue, 26, 14, 0, // Skip to: 12301
/* 12287 */   MCD::OPC_CheckPredicate, 4, 30, 1, // Skip to: 12577
/* 12291 */   MCD::OPC_CheckField, 13, 7, 0, 24, 1, // Skip to: 12577
/* 12297 */   MCD::OPC_Decode, 156, 8, 99, // Opcode: SHILO
/* 12301 */   MCD::OPC_FilterValue, 27, 14, 0, // Skip to: 12319
/* 12305 */   MCD::OPC_CheckPredicate, 4, 12, 1, // Skip to: 12577
/* 12309 */   MCD::OPC_CheckField, 13, 8, 0, 6, 1, // Skip to: 12577
/* 12315 */   MCD::OPC_Decode, 157, 8, 100, // Opcode: SHILOV
/* 12319 */   MCD::OPC_FilterValue, 31, 254, 0, // Skip to: 12577
/* 12323 */   MCD::OPC_CheckPredicate, 4, 250, 0, // Skip to: 12577
/* 12327 */   MCD::OPC_CheckField, 13, 8, 0, 244, 0, // Skip to: 12577
/* 12333 */   MCD::OPC_Decode, 229, 6, 100, // Opcode: MTHLIP
/* 12337 */   MCD::OPC_FilterValue, 59, 236, 0, // Skip to: 12577
/* 12341 */   MCD::OPC_CheckPredicate, 2, 232, 0, // Skip to: 12577
/* 12345 */   MCD::OPC_CheckField, 21, 5, 0, 226, 0, // Skip to: 12577
/* 12351 */   MCD::OPC_CheckField, 6, 5, 0, 220, 0, // Skip to: 12577
/* 12357 */   MCD::OPC_Decode, 234, 7, 101, // Opcode: RDHWR
/* 12361 */   MCD::OPC_FilterValue, 32, 8, 0, // Skip to: 12373
/* 12365 */   MCD::OPC_CheckPredicate, 2, 208, 0, // Skip to: 12577
/* 12369 */   MCD::OPC_Decode, 156, 5, 15, // Opcode: LB
/* 12373 */   MCD::OPC_FilterValue, 33, 8, 0, // Skip to: 12385
/* 12377 */   MCD::OPC_CheckPredicate, 2, 196, 0, // Skip to: 12577
/* 12381 */   MCD::OPC_Decode, 183, 5, 15, // Opcode: LH
/* 12385 */   MCD::OPC_FilterValue, 34, 8, 0, // Skip to: 12397
/* 12389 */   MCD::OPC_CheckPredicate, 2, 184, 0, // Skip to: 12577
/* 12393 */   MCD::OPC_Decode, 204, 5, 15, // Opcode: LWL
/* 12397 */   MCD::OPC_FilterValue, 35, 8, 0, // Skip to: 12409
/* 12401 */   MCD::OPC_CheckPredicate, 2, 172, 0, // Skip to: 12577
/* 12405 */   MCD::OPC_Decode, 201, 5, 15, // Opcode: LW
/* 12409 */   MCD::OPC_FilterValue, 36, 8, 0, // Skip to: 12421
/* 12413 */   MCD::OPC_CheckPredicate, 2, 160, 0, // Skip to: 12577
/* 12417 */   MCD::OPC_Decode, 160, 5, 15, // Opcode: LBu
/* 12421 */   MCD::OPC_FilterValue, 37, 8, 0, // Skip to: 12433
/* 12425 */   MCD::OPC_CheckPredicate, 2, 148, 0, // Skip to: 12577
/* 12429 */   MCD::OPC_Decode, 187, 5, 15, // Opcode: LHu
/* 12433 */   MCD::OPC_FilterValue, 38, 8, 0, // Skip to: 12445
/* 12437 */   MCD::OPC_CheckPredicate, 2, 136, 0, // Skip to: 12577
/* 12441 */   MCD::OPC_Decode, 207, 5, 15, // Opcode: LWR
/* 12445 */   MCD::OPC_FilterValue, 40, 8, 0, // Skip to: 12457
/* 12449 */   MCD::OPC_CheckPredicate, 2, 124, 0, // Skip to: 12577
/* 12453 */   MCD::OPC_Decode, 134, 8, 15, // Opcode: SB
/* 12457 */   MCD::OPC_FilterValue, 41, 8, 0, // Skip to: 12469
/* 12461 */   MCD::OPC_CheckPredicate, 2, 112, 0, // Skip to: 12577
/* 12465 */   MCD::OPC_Decode, 151, 8, 15, // Opcode: SH
/* 12469 */   MCD::OPC_FilterValue, 42, 8, 0, // Skip to: 12481
/* 12473 */   MCD::OPC_CheckPredicate, 2, 100, 0, // Skip to: 12577
/* 12477 */   MCD::OPC_Decode, 198, 9, 15, // Opcode: SWL
/* 12481 */   MCD::OPC_FilterValue, 43, 8, 0, // Skip to: 12493
/* 12485 */   MCD::OPC_CheckPredicate, 2, 88, 0, // Skip to: 12577
/* 12489 */   MCD::OPC_Decode, 195, 9, 15, // Opcode: SW
/* 12493 */   MCD::OPC_FilterValue, 46, 8, 0, // Skip to: 12505
/* 12497 */   MCD::OPC_CheckPredicate, 2, 76, 0, // Skip to: 12577
/* 12501 */   MCD::OPC_Decode, 201, 9, 15, // Opcode: SWR
/* 12505 */   MCD::OPC_FilterValue, 48, 8, 0, // Skip to: 12517
/* 12509 */   MCD::OPC_CheckPredicate, 2, 64, 0, // Skip to: 12577
/* 12513 */   MCD::OPC_Decode, 190, 5, 15, // Opcode: LL
/* 12517 */   MCD::OPC_FilterValue, 49, 8, 0, // Skip to: 12529
/* 12521 */   MCD::OPC_CheckPredicate, 2, 52, 0, // Skip to: 12577
/* 12525 */   MCD::OPC_Decode, 203, 5, 102, // Opcode: LWC1
/* 12529 */   MCD::OPC_FilterValue, 53, 8, 0, // Skip to: 12541
/* 12533 */   MCD::OPC_CheckPredicate, 6, 40, 0, // Skip to: 12577
/* 12537 */   MCD::OPC_Decode, 164, 5, 102, // Opcode: LDC1
/* 12541 */   MCD::OPC_FilterValue, 56, 8, 0, // Skip to: 12553
/* 12545 */   MCD::OPC_CheckPredicate, 2, 28, 0, // Skip to: 12577
/* 12549 */   MCD::OPC_Decode, 137, 8, 15, // Opcode: SC
/* 12553 */   MCD::OPC_FilterValue, 57, 8, 0, // Skip to: 12565
/* 12557 */   MCD::OPC_CheckPredicate, 2, 16, 0, // Skip to: 12577
/* 12561 */   MCD::OPC_Decode, 197, 9, 102, // Opcode: SWC1
/* 12565 */   MCD::OPC_FilterValue, 61, 8, 0, // Skip to: 12577
/* 12569 */   MCD::OPC_CheckPredicate, 6, 4, 0, // Skip to: 12577
/* 12573 */   MCD::OPC_Decode, 140, 8, 102, // Opcode: SDC1
/* 12577 */   MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips6432[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 61, 1, // Skip to: 324
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 20, 14, 0, // Skip to: 28
/* 14 */      MCD::OPC_CheckPredicate, 2, 168, 6, // Skip to: 1722
/* 18 */      MCD::OPC_CheckField, 6, 5, 0, 162, 6, // Skip to: 1722
/* 24 */      MCD::OPC_Decode, 197, 3, 103, // Opcode: DSLLV
/* 28 */      MCD::OPC_FilterValue, 22, 27, 0, // Skip to: 59
/* 32 */      MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 35 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 47
/* 39 */      MCD::OPC_CheckPredicate, 2, 143, 6, // Skip to: 1722
/* 43 */      MCD::OPC_Decode, 203, 3, 103, // Opcode: DSRLV
/* 47 */      MCD::OPC_FilterValue, 1, 135, 6, // Skip to: 1722
/* 51 */      MCD::OPC_CheckPredicate, 17, 131, 6, // Skip to: 1722
/* 55 */      MCD::OPC_Decode, 190, 3, 103, // Opcode: DROTRV
/* 59 */      MCD::OPC_FilterValue, 23, 14, 0, // Skip to: 77
/* 63 */      MCD::OPC_CheckPredicate, 2, 119, 6, // Skip to: 1722
/* 67 */      MCD::OPC_CheckField, 6, 5, 0, 113, 6, // Skip to: 1722
/* 73 */      MCD::OPC_Decode, 200, 3, 103, // Opcode: DSRAV
/* 77 */      MCD::OPC_FilterValue, 28, 14, 0, // Skip to: 95
/* 81 */      MCD::OPC_CheckPredicate, 2, 101, 6, // Skip to: 1722
/* 85 */      MCD::OPC_CheckField, 6, 10, 0, 95, 6, // Skip to: 1722
/* 91 */      MCD::OPC_Decode, 151, 3, 104, // Opcode: DMULT
/* 95 */      MCD::OPC_FilterValue, 29, 14, 0, // Skip to: 113
/* 99 */      MCD::OPC_CheckPredicate, 2, 83, 6, // Skip to: 1722
/* 103 */     MCD::OPC_CheckField, 6, 10, 0, 77, 6, // Skip to: 1722
/* 109 */     MCD::OPC_Decode, 152, 3, 104, // Opcode: DMULTu
/* 113 */     MCD::OPC_FilterValue, 30, 14, 0, // Skip to: 131
/* 117 */     MCD::OPC_CheckPredicate, 2, 65, 6, // Skip to: 1722
/* 121 */     MCD::OPC_CheckField, 6, 10, 0, 59, 6, // Skip to: 1722
/* 127 */     MCD::OPC_Decode, 192, 3, 104, // Opcode: DSDIV
/* 131 */     MCD::OPC_FilterValue, 31, 14, 0, // Skip to: 149
/* 135 */     MCD::OPC_CheckPredicate, 2, 47, 6, // Skip to: 1722
/* 139 */     MCD::OPC_CheckField, 6, 10, 0, 41, 6, // Skip to: 1722
/* 145 */     MCD::OPC_Decode, 205, 3, 104, // Opcode: DUDIV
/* 149 */     MCD::OPC_FilterValue, 44, 14, 0, // Skip to: 167
/* 153 */     MCD::OPC_CheckPredicate, 2, 29, 6, // Skip to: 1722
/* 157 */     MCD::OPC_CheckField, 6, 5, 0, 23, 6, // Skip to: 1722
/* 163 */     MCD::OPC_Decode, 251, 2, 105, // Opcode: DADD
/* 167 */     MCD::OPC_FilterValue, 45, 14, 0, // Skip to: 185
/* 171 */     MCD::OPC_CheckPredicate, 2, 11, 6, // Skip to: 1722
/* 175 */     MCD::OPC_CheckField, 6, 5, 0, 5, 6, // Skip to: 1722
/* 181 */     MCD::OPC_Decode, 254, 2, 105, // Opcode: DADDu
/* 185 */     MCD::OPC_FilterValue, 47, 14, 0, // Skip to: 203
/* 189 */     MCD::OPC_CheckPredicate, 2, 249, 5, // Skip to: 1722
/* 193 */     MCD::OPC_CheckField, 6, 5, 0, 243, 5, // Skip to: 1722
/* 199 */     MCD::OPC_Decode, 204, 3, 105, // Opcode: DSUBu
/* 203 */     MCD::OPC_FilterValue, 56, 14, 0, // Skip to: 221
/* 207 */     MCD::OPC_CheckPredicate, 2, 231, 5, // Skip to: 1722
/* 211 */     MCD::OPC_CheckField, 21, 5, 0, 225, 5, // Skip to: 1722
/* 217 */     MCD::OPC_Decode, 194, 3, 106, // Opcode: DSLL
/* 221 */     MCD::OPC_FilterValue, 58, 27, 0, // Skip to: 252
/* 225 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 228 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 240
/* 232 */     MCD::OPC_CheckPredicate, 2, 206, 5, // Skip to: 1722
/* 236 */     MCD::OPC_Decode, 201, 3, 106, // Opcode: DSRL
/* 240 */     MCD::OPC_FilterValue, 1, 198, 5, // Skip to: 1722
/* 244 */     MCD::OPC_CheckPredicate, 17, 194, 5, // Skip to: 1722
/* 248 */     MCD::OPC_Decode, 189, 3, 106, // Opcode: DROTR
/* 252 */     MCD::OPC_FilterValue, 59, 14, 0, // Skip to: 270
/* 256 */     MCD::OPC_CheckPredicate, 2, 182, 5, // Skip to: 1722
/* 260 */     MCD::OPC_CheckField, 21, 5, 0, 176, 5, // Skip to: 1722
/* 266 */     MCD::OPC_Decode, 198, 3, 106, // Opcode: DSRA
/* 270 */     MCD::OPC_FilterValue, 60, 14, 0, // Skip to: 288
/* 274 */     MCD::OPC_CheckPredicate, 2, 164, 5, // Skip to: 1722
/* 278 */     MCD::OPC_CheckField, 21, 5, 0, 158, 5, // Skip to: 1722
/* 284 */     MCD::OPC_Decode, 195, 3, 106, // Opcode: DSLL32
/* 288 */     MCD::OPC_FilterValue, 62, 14, 0, // Skip to: 306
/* 292 */     MCD::OPC_CheckPredicate, 2, 146, 5, // Skip to: 1722
/* 296 */     MCD::OPC_CheckField, 21, 5, 0, 140, 5, // Skip to: 1722
/* 302 */     MCD::OPC_Decode, 202, 3, 106, // Opcode: DSRL32
/* 306 */     MCD::OPC_FilterValue, 63, 132, 5, // Skip to: 1722
/* 310 */     MCD::OPC_CheckPredicate, 2, 128, 5, // Skip to: 1722
/* 314 */     MCD::OPC_CheckField, 21, 5, 0, 122, 5, // Skip to: 1722
/* 320 */     MCD::OPC_Decode, 199, 3, 106, // Opcode: DSRA32
/* 324 */     MCD::OPC_FilterValue, 16, 39, 0, // Skip to: 367
/* 328 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 331 */     MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 349
/* 335 */     MCD::OPC_CheckPredicate, 18, 103, 5, // Skip to: 1722
/* 339 */     MCD::OPC_CheckField, 3, 8, 0, 97, 5, // Skip to: 1722
/* 345 */     MCD::OPC_Decode, 145, 3, 107, // Opcode: DMFC0
/* 349 */     MCD::OPC_FilterValue, 5, 89, 5, // Skip to: 1722
/* 353 */     MCD::OPC_CheckPredicate, 18, 85, 5, // Skip to: 1722
/* 357 */     MCD::OPC_CheckField, 3, 8, 0, 79, 5, // Skip to: 1722
/* 363 */     MCD::OPC_Decode, 148, 3, 107, // Opcode: DMTC0
/* 367 */     MCD::OPC_FilterValue, 17, 152, 3, // Skip to: 1291
/* 371 */     MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 374 */     MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 392
/* 378 */     MCD::OPC_CheckPredicate, 19, 60, 5, // Skip to: 1722
/* 382 */     MCD::OPC_CheckField, 21, 5, 17, 54, 5, // Skip to: 1722
/* 388 */     MCD::OPC_Decode, 230, 3, 108, // Opcode: FADD_D64
/* 392 */     MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 410
/* 396 */     MCD::OPC_CheckPredicate, 19, 42, 5, // Skip to: 1722
/* 400 */     MCD::OPC_CheckField, 21, 5, 17, 36, 5, // Skip to: 1722
/* 406 */     MCD::OPC_Decode, 211, 4, 108, // Opcode: FSUB_D64
/* 410 */     MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 428
/* 414 */     MCD::OPC_CheckPredicate, 19, 24, 5, // Skip to: 1722
/* 418 */     MCD::OPC_CheckField, 21, 5, 17, 18, 5, // Skip to: 1722
/* 424 */     MCD::OPC_Decode, 180, 4, 108, // Opcode: FMUL_D64
/* 428 */     MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 446
/* 432 */     MCD::OPC_CheckPredicate, 19, 6, 5, // Skip to: 1722
/* 436 */     MCD::OPC_CheckField, 21, 5, 17, 0, 5, // Skip to: 1722
/* 442 */     MCD::OPC_Decode, 134, 4, 108, // Opcode: FDIV_D64
/* 446 */     MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 465
/* 450 */     MCD::OPC_CheckPredicate, 19, 244, 4, // Skip to: 1722
/* 454 */     MCD::OPC_CheckField, 16, 10, 160, 4, 237, 4, // Skip to: 1722
/* 461 */     MCD::OPC_Decode, 206, 4, 66, // Opcode: FSQRT_D64
/* 465 */     MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 484
/* 469 */     MCD::OPC_CheckPredicate, 5, 225, 4, // Skip to: 1722
/* 473 */     MCD::OPC_CheckField, 16, 10, 160, 4, 218, 4, // Skip to: 1722
/* 480 */     MCD::OPC_Decode, 226, 3, 66, // Opcode: FABS_D64
/* 484 */     MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 503
/* 488 */     MCD::OPC_CheckPredicate, 19, 206, 4, // Skip to: 1722
/* 492 */     MCD::OPC_CheckField, 16, 10, 160, 4, 199, 4, // Skip to: 1722
/* 499 */     MCD::OPC_Decode, 174, 4, 66, // Opcode: FMOV_D64
/* 503 */     MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 522
/* 507 */     MCD::OPC_CheckPredicate, 5, 187, 4, // Skip to: 1722
/* 511 */     MCD::OPC_CheckField, 16, 10, 160, 4, 180, 4, // Skip to: 1722
/* 518 */     MCD::OPC_Decode, 184, 4, 66, // Opcode: FNEG_D64
/* 522 */     MCD::OPC_FilterValue, 8, 29, 0, // Skip to: 555
/* 526 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 529 */     MCD::OPC_FilterValue, 128, 4, 8, 0, // Skip to: 542
/* 534 */     MCD::OPC_CheckPredicate, 19, 160, 4, // Skip to: 1722
/* 538 */     MCD::OPC_Decode, 246, 7, 59, // Opcode: ROUND_L_S
/* 542 */     MCD::OPC_FilterValue, 160, 4, 151, 4, // Skip to: 1722
/* 547 */     MCD::OPC_CheckPredicate, 19, 147, 4, // Skip to: 1722
/* 551 */     MCD::OPC_Decode, 245, 7, 66, // Opcode: ROUND_L_D64
/* 555 */     MCD::OPC_FilterValue, 9, 29, 0, // Skip to: 588
/* 559 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 562 */     MCD::OPC_FilterValue, 128, 4, 8, 0, // Skip to: 575
/* 567 */     MCD::OPC_CheckPredicate, 19, 127, 4, // Skip to: 1722
/* 571 */     MCD::OPC_Decode, 139, 10, 59, // Opcode: TRUNC_L_S
/* 575 */     MCD::OPC_FilterValue, 160, 4, 118, 4, // Skip to: 1722
/* 580 */     MCD::OPC_CheckPredicate, 19, 114, 4, // Skip to: 1722
/* 584 */     MCD::OPC_Decode, 138, 10, 66, // Opcode: TRUNC_L_D64
/* 588 */     MCD::OPC_FilterValue, 10, 29, 0, // Skip to: 621
/* 592 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 595 */     MCD::OPC_FilterValue, 128, 4, 8, 0, // Skip to: 608
/* 600 */     MCD::OPC_CheckPredicate, 19, 94, 4, // Skip to: 1722
/* 604 */     MCD::OPC_Decode, 245, 1, 59, // Opcode: CEIL_L_S
/* 608 */     MCD::OPC_FilterValue, 160, 4, 85, 4, // Skip to: 1722
/* 613 */     MCD::OPC_CheckPredicate, 19, 81, 4, // Skip to: 1722
/* 617 */     MCD::OPC_Decode, 244, 1, 66, // Opcode: CEIL_L_D64
/* 621 */     MCD::OPC_FilterValue, 11, 29, 0, // Skip to: 654
/* 625 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 628 */     MCD::OPC_FilterValue, 128, 4, 8, 0, // Skip to: 641
/* 633 */     MCD::OPC_CheckPredicate, 19, 61, 4, // Skip to: 1722
/* 637 */     MCD::OPC_Decode, 159, 4, 59, // Opcode: FLOOR_L_S
/* 641 */     MCD::OPC_FilterValue, 160, 4, 52, 4, // Skip to: 1722
/* 646 */     MCD::OPC_CheckPredicate, 19, 48, 4, // Skip to: 1722
/* 650 */     MCD::OPC_Decode, 158, 4, 66, // Opcode: FLOOR_L_D64
/* 654 */     MCD::OPC_FilterValue, 12, 15, 0, // Skip to: 673
/* 658 */     MCD::OPC_CheckPredicate, 19, 36, 4, // Skip to: 1722
/* 662 */     MCD::OPC_CheckField, 16, 10, 160, 4, 29, 4, // Skip to: 1722
/* 669 */     MCD::OPC_Decode, 248, 7, 109, // Opcode: ROUND_W_D64
/* 673 */     MCD::OPC_FilterValue, 13, 15, 0, // Skip to: 692
/* 677 */     MCD::OPC_CheckPredicate, 19, 17, 4, // Skip to: 1722
/* 681 */     MCD::OPC_CheckField, 16, 10, 160, 4, 10, 4, // Skip to: 1722
/* 688 */     MCD::OPC_Decode, 141, 10, 109, // Opcode: TRUNC_W_D64
/* 692 */     MCD::OPC_FilterValue, 14, 15, 0, // Skip to: 711
/* 696 */     MCD::OPC_CheckPredicate, 19, 254, 3, // Skip to: 1722
/* 700 */     MCD::OPC_CheckField, 16, 10, 160, 4, 247, 3, // Skip to: 1722
/* 707 */     MCD::OPC_Decode, 247, 1, 109, // Opcode: CEIL_W_D64
/* 711 */     MCD::OPC_FilterValue, 15, 15, 0, // Skip to: 730
/* 715 */     MCD::OPC_CheckPredicate, 19, 235, 3, // Skip to: 1722
/* 719 */     MCD::OPC_CheckField, 16, 10, 160, 4, 228, 3, // Skip to: 1722
/* 726 */     MCD::OPC_Decode, 161, 4, 109, // Opcode: FLOOR_W_D64
/* 730 */     MCD::OPC_FilterValue, 17, 39, 0, // Skip to: 773
/* 734 */     MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 737 */     MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 755
/* 741 */     MCD::OPC_CheckPredicate, 19, 209, 3, // Skip to: 1722
/* 745 */     MCD::OPC_CheckField, 21, 5, 17, 203, 3, // Skip to: 1722
/* 751 */     MCD::OPC_Decode, 180, 6, 110, // Opcode: MOVF_D64
/* 755 */     MCD::OPC_FilterValue, 1, 195, 3, // Skip to: 1722
/* 759 */     MCD::OPC_CheckPredicate, 19, 191, 3, // Skip to: 1722
/* 763 */     MCD::OPC_CheckField, 21, 5, 17, 185, 3, // Skip to: 1722
/* 769 */     MCD::OPC_Decode, 194, 6, 110, // Opcode: MOVT_D64
/* 773 */     MCD::OPC_FilterValue, 18, 14, 0, // Skip to: 791
/* 777 */     MCD::OPC_CheckPredicate, 19, 173, 3, // Skip to: 1722
/* 781 */     MCD::OPC_CheckField, 21, 5, 17, 167, 3, // Skip to: 1722
/* 787 */     MCD::OPC_Decode, 203, 6, 111, // Opcode: MOVZ_I_D64
/* 791 */     MCD::OPC_FilterValue, 19, 14, 0, // Skip to: 809
/* 795 */     MCD::OPC_CheckPredicate, 19, 155, 3, // Skip to: 1722
/* 799 */     MCD::OPC_CheckField, 21, 5, 17, 149, 3, // Skip to: 1722
/* 805 */     MCD::OPC_Decode, 189, 6, 111, // Opcode: MOVN_I_D64
/* 809 */     MCD::OPC_FilterValue, 32, 29, 0, // Skip to: 842
/* 813 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 816 */     MCD::OPC_FilterValue, 160, 4, 8, 0, // Skip to: 829
/* 821 */     MCD::OPC_CheckPredicate, 19, 129, 3, // Skip to: 1722
/* 825 */     MCD::OPC_Decode, 193, 2, 109, // Opcode: CVT_S_D64
/* 829 */     MCD::OPC_FilterValue, 160, 5, 120, 3, // Skip to: 1722
/* 834 */     MCD::OPC_CheckPredicate, 19, 116, 3, // Skip to: 1722
/* 838 */     MCD::OPC_Decode, 194, 2, 109, // Opcode: CVT_S_L
/* 842 */     MCD::OPC_FilterValue, 33, 42, 0, // Skip to: 888
/* 846 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 849 */     MCD::OPC_FilterValue, 128, 4, 8, 0, // Skip to: 862
/* 854 */     MCD::OPC_CheckPredicate, 19, 96, 3, // Skip to: 1722
/* 858 */     MCD::OPC_Decode, 188, 2, 59, // Opcode: CVT_D64_S
/* 862 */     MCD::OPC_FilterValue, 128, 5, 8, 0, // Skip to: 875
/* 867 */     MCD::OPC_CheckPredicate, 19, 83, 3, // Skip to: 1722
/* 871 */     MCD::OPC_Decode, 189, 2, 59, // Opcode: CVT_D64_W
/* 875 */     MCD::OPC_FilterValue, 160, 5, 74, 3, // Skip to: 1722
/* 880 */     MCD::OPC_CheckPredicate, 19, 70, 3, // Skip to: 1722
/* 884 */     MCD::OPC_Decode, 187, 2, 66, // Opcode: CVT_D64_L
/* 888 */     MCD::OPC_FilterValue, 36, 15, 0, // Skip to: 907
/* 892 */     MCD::OPC_CheckPredicate, 19, 58, 3, // Skip to: 1722
/* 896 */     MCD::OPC_CheckField, 16, 10, 160, 4, 51, 3, // Skip to: 1722
/* 903 */     MCD::OPC_Decode, 197, 2, 109, // Opcode: CVT_W_D64
/* 907 */     MCD::OPC_FilterValue, 48, 20, 0, // Skip to: 931
/* 911 */     MCD::OPC_CheckPredicate, 19, 39, 3, // Skip to: 1722
/* 915 */     MCD::OPC_CheckField, 21, 5, 17, 33, 3, // Skip to: 1722
/* 921 */     MCD::OPC_CheckField, 6, 5, 0, 27, 3, // Skip to: 1722
/* 927 */     MCD::OPC_Decode, 203, 2, 112, // Opcode: C_F_D64
/* 931 */     MCD::OPC_FilterValue, 49, 20, 0, // Skip to: 955
/* 935 */     MCD::OPC_CheckPredicate, 19, 15, 3, // Skip to: 1722
/* 939 */     MCD::OPC_CheckField, 21, 5, 17, 9, 3, // Skip to: 1722
/* 945 */     MCD::OPC_CheckField, 6, 5, 0, 3, 3, // Skip to: 1722
/* 951 */     MCD::OPC_Decode, 245, 2, 112, // Opcode: C_UN_D64
/* 955 */     MCD::OPC_FilterValue, 50, 20, 0, // Skip to: 979
/* 959 */     MCD::OPC_CheckPredicate, 19, 247, 2, // Skip to: 1722
/* 963 */     MCD::OPC_CheckField, 21, 5, 17, 241, 2, // Skip to: 1722
/* 969 */     MCD::OPC_CheckField, 6, 5, 0, 235, 2, // Skip to: 1722
/* 975 */     MCD::OPC_Decode, 200, 2, 112, // Opcode: C_EQ_D64
/* 979 */     MCD::OPC_FilterValue, 51, 20, 0, // Skip to: 1003
/* 983 */     MCD::OPC_CheckPredicate, 19, 223, 2, // Skip to: 1722
/* 987 */     MCD::OPC_CheckField, 21, 5, 17, 217, 2, // Skip to: 1722
/* 993 */     MCD::OPC_CheckField, 6, 5, 0, 211, 2, // Skip to: 1722
/* 999 */     MCD::OPC_Decode, 236, 2, 112, // Opcode: C_UEQ_D64
/* 1003 */    MCD::OPC_FilterValue, 52, 20, 0, // Skip to: 1027
/* 1007 */    MCD::OPC_CheckPredicate, 19, 199, 2, // Skip to: 1722
/* 1011 */    MCD::OPC_CheckField, 21, 5, 17, 193, 2, // Skip to: 1722
/* 1017 */    MCD::OPC_CheckField, 6, 5, 0, 187, 2, // Skip to: 1722
/* 1023 */    MCD::OPC_Decode, 227, 2, 112, // Opcode: C_OLT_D64
/* 1027 */    MCD::OPC_FilterValue, 53, 20, 0, // Skip to: 1051
/* 1031 */    MCD::OPC_CheckPredicate, 19, 175, 2, // Skip to: 1722
/* 1035 */    MCD::OPC_CheckField, 21, 5, 17, 169, 2, // Skip to: 1722
/* 1041 */    MCD::OPC_CheckField, 6, 5, 0, 163, 2, // Skip to: 1722
/* 1047 */    MCD::OPC_Decode, 242, 2, 112, // Opcode: C_ULT_D64
/* 1051 */    MCD::OPC_FilterValue, 54, 20, 0, // Skip to: 1075
/* 1055 */    MCD::OPC_CheckPredicate, 19, 151, 2, // Skip to: 1722
/* 1059 */    MCD::OPC_CheckField, 21, 5, 17, 145, 2, // Skip to: 1722
/* 1065 */    MCD::OPC_CheckField, 6, 5, 0, 139, 2, // Skip to: 1722
/* 1071 */    MCD::OPC_Decode, 224, 2, 112, // Opcode: C_OLE_D64
/* 1075 */    MCD::OPC_FilterValue, 55, 20, 0, // Skip to: 1099
/* 1079 */    MCD::OPC_CheckPredicate, 19, 127, 2, // Skip to: 1722
/* 1083 */    MCD::OPC_CheckField, 21, 5, 17, 121, 2, // Skip to: 1722
/* 1089 */    MCD::OPC_CheckField, 6, 5, 0, 115, 2, // Skip to: 1722
/* 1095 */    MCD::OPC_Decode, 239, 2, 112, // Opcode: C_ULE_D64
/* 1099 */    MCD::OPC_FilterValue, 56, 20, 0, // Skip to: 1123
/* 1103 */    MCD::OPC_CheckPredicate, 19, 103, 2, // Skip to: 1722
/* 1107 */    MCD::OPC_CheckField, 21, 5, 17, 97, 2, // Skip to: 1722
/* 1113 */    MCD::OPC_CheckField, 6, 5, 0, 91, 2, // Skip to: 1722
/* 1119 */    MCD::OPC_Decode, 233, 2, 112, // Opcode: C_SF_D64
/* 1123 */    MCD::OPC_FilterValue, 57, 20, 0, // Skip to: 1147
/* 1127 */    MCD::OPC_CheckPredicate, 19, 79, 2, // Skip to: 1722
/* 1131 */    MCD::OPC_CheckField, 21, 5, 17, 73, 2, // Skip to: 1722
/* 1137 */    MCD::OPC_CheckField, 6, 5, 0, 67, 2, // Skip to: 1722
/* 1143 */    MCD::OPC_Decode, 215, 2, 112, // Opcode: C_NGLE_D64
/* 1147 */    MCD::OPC_FilterValue, 58, 20, 0, // Skip to: 1171
/* 1151 */    MCD::OPC_CheckPredicate, 19, 55, 2, // Skip to: 1722
/* 1155 */    MCD::OPC_CheckField, 21, 5, 17, 49, 2, // Skip to: 1722
/* 1161 */    MCD::OPC_CheckField, 6, 5, 0, 43, 2, // Skip to: 1722
/* 1167 */    MCD::OPC_Decode, 230, 2, 112, // Opcode: C_SEQ_D64
/* 1171 */    MCD::OPC_FilterValue, 59, 20, 0, // Skip to: 1195
/* 1175 */    MCD::OPC_CheckPredicate, 19, 31, 2, // Skip to: 1722
/* 1179 */    MCD::OPC_CheckField, 21, 5, 17, 25, 2, // Skip to: 1722
/* 1185 */    MCD::OPC_CheckField, 6, 5, 0, 19, 2, // Skip to: 1722
/* 1191 */    MCD::OPC_Decode, 218, 2, 112, // Opcode: C_NGL_D64
/* 1195 */    MCD::OPC_FilterValue, 60, 20, 0, // Skip to: 1219
/* 1199 */    MCD::OPC_CheckPredicate, 19, 7, 2, // Skip to: 1722
/* 1203 */    MCD::OPC_CheckField, 21, 5, 17, 1, 2, // Skip to: 1722
/* 1209 */    MCD::OPC_CheckField, 6, 5, 0, 251, 1, // Skip to: 1722
/* 1215 */    MCD::OPC_Decode, 209, 2, 112, // Opcode: C_LT_D64
/* 1219 */    MCD::OPC_FilterValue, 61, 20, 0, // Skip to: 1243
/* 1223 */    MCD::OPC_CheckPredicate, 19, 239, 1, // Skip to: 1722
/* 1227 */    MCD::OPC_CheckField, 21, 5, 17, 233, 1, // Skip to: 1722
/* 1233 */    MCD::OPC_CheckField, 6, 5, 0, 227, 1, // Skip to: 1722
/* 1239 */    MCD::OPC_Decode, 212, 2, 112, // Opcode: C_NGE_D64
/* 1243 */    MCD::OPC_FilterValue, 62, 20, 0, // Skip to: 1267
/* 1247 */    MCD::OPC_CheckPredicate, 19, 215, 1, // Skip to: 1722
/* 1251 */    MCD::OPC_CheckField, 21, 5, 17, 209, 1, // Skip to: 1722
/* 1257 */    MCD::OPC_CheckField, 6, 5, 0, 203, 1, // Skip to: 1722
/* 1263 */    MCD::OPC_Decode, 206, 2, 112, // Opcode: C_LE_D64
/* 1267 */    MCD::OPC_FilterValue, 63, 195, 1, // Skip to: 1722
/* 1271 */    MCD::OPC_CheckPredicate, 19, 191, 1, // Skip to: 1722
/* 1275 */    MCD::OPC_CheckField, 21, 5, 17, 185, 1, // Skip to: 1722
/* 1281 */    MCD::OPC_CheckField, 6, 5, 0, 179, 1, // Skip to: 1722
/* 1287 */    MCD::OPC_Decode, 221, 2, 112, // Opcode: C_NGT_D64
/* 1291 */    MCD::OPC_FilterValue, 18, 39, 0, // Skip to: 1334
/* 1295 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1298 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 1316
/* 1302 */    MCD::OPC_CheckPredicate, 18, 160, 1, // Skip to: 1722
/* 1306 */    MCD::OPC_CheckField, 3, 8, 0, 154, 1, // Skip to: 1722
/* 1312 */    MCD::OPC_Decode, 147, 3, 107, // Opcode: DMFC2
/* 1316 */    MCD::OPC_FilterValue, 5, 146, 1, // Skip to: 1722
/* 1320 */    MCD::OPC_CheckPredicate, 18, 142, 1, // Skip to: 1722
/* 1324 */    MCD::OPC_CheckField, 3, 8, 0, 136, 1, // Skip to: 1722
/* 1330 */    MCD::OPC_Decode, 150, 3, 107, // Opcode: DMTC2
/* 1334 */    MCD::OPC_FilterValue, 19, 75, 0, // Skip to: 1413
/* 1338 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1341 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 1359
/* 1345 */    MCD::OPC_CheckPredicate, 20, 117, 1, // Skip to: 1722
/* 1349 */    MCD::OPC_CheckField, 11, 5, 0, 111, 1, // Skip to: 1722
/* 1355 */    MCD::OPC_Decode, 172, 5, 113, // Opcode: LDXC164
/* 1359 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 1377
/* 1363 */    MCD::OPC_CheckPredicate, 19, 99, 1, // Skip to: 1722
/* 1367 */    MCD::OPC_CheckField, 11, 5, 0, 93, 1, // Skip to: 1722
/* 1373 */    MCD::OPC_Decode, 197, 5, 113, // Opcode: LUXC164
/* 1377 */    MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 1395
/* 1381 */    MCD::OPC_CheckPredicate, 20, 81, 1, // Skip to: 1722
/* 1385 */    MCD::OPC_CheckField, 6, 5, 0, 75, 1, // Skip to: 1722
/* 1391 */    MCD::OPC_Decode, 146, 8, 114, // Opcode: SDXC164
/* 1395 */    MCD::OPC_FilterValue, 13, 67, 1, // Skip to: 1722
/* 1399 */    MCD::OPC_CheckPredicate, 19, 63, 1, // Skip to: 1722
/* 1403 */    MCD::OPC_CheckField, 6, 5, 0, 57, 1, // Skip to: 1722
/* 1409 */    MCD::OPC_Decode, 194, 9, 114, // Opcode: SUXC164
/* 1413 */    MCD::OPC_FilterValue, 24, 8, 0, // Skip to: 1425
/* 1417 */    MCD::OPC_CheckPredicate, 2, 45, 1, // Skip to: 1722
/* 1421 */    MCD::OPC_Decode, 252, 2, 115, // Opcode: DADDi
/* 1425 */    MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 1437
/* 1429 */    MCD::OPC_CheckPredicate, 2, 33, 1, // Skip to: 1722
/* 1433 */    MCD::OPC_Decode, 253, 2, 115, // Opcode: DADDiu
/* 1437 */    MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 1449
/* 1441 */    MCD::OPC_CheckPredicate, 2, 21, 1, // Skip to: 1722
/* 1445 */    MCD::OPC_Decode, 169, 5, 15, // Opcode: LDL
/* 1449 */    MCD::OPC_FilterValue, 27, 8, 0, // Skip to: 1461
/* 1453 */    MCD::OPC_CheckPredicate, 2, 9, 1, // Skip to: 1722
/* 1457 */    MCD::OPC_Decode, 170, 5, 15, // Opcode: LDR
/* 1461 */    MCD::OPC_FilterValue, 28, 27, 0, // Skip to: 1492
/* 1465 */    MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 1468 */    MCD::OPC_FilterValue, 36, 8, 0, // Skip to: 1480
/* 1472 */    MCD::OPC_CheckPredicate, 12, 246, 0, // Skip to: 1722
/* 1476 */    MCD::OPC_Decode, 128, 3, 116, // Opcode: DCLZ
/* 1480 */    MCD::OPC_FilterValue, 37, 238, 0, // Skip to: 1722
/* 1484 */    MCD::OPC_CheckPredicate, 12, 234, 0, // Skip to: 1722
/* 1488 */    MCD::OPC_Decode, 255, 2, 116, // Opcode: DCLO
/* 1492 */    MCD::OPC_FilterValue, 31, 118, 0, // Skip to: 1614
/* 1496 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1499 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1511
/* 1503 */    MCD::OPC_CheckPredicate, 3, 215, 0, // Skip to: 1722
/* 1507 */    MCD::OPC_Decode, 131, 3, 117, // Opcode: DEXTM
/* 1511 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1523
/* 1515 */    MCD::OPC_CheckPredicate, 3, 203, 0, // Skip to: 1722
/* 1519 */    MCD::OPC_Decode, 132, 3, 117, // Opcode: DEXTU
/* 1523 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1535
/* 1527 */    MCD::OPC_CheckPredicate, 3, 191, 0, // Skip to: 1722
/* 1531 */    MCD::OPC_Decode, 130, 3, 117, // Opcode: DEXT
/* 1535 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 1547
/* 1539 */    MCD::OPC_CheckPredicate, 3, 179, 0, // Skip to: 1722
/* 1543 */    MCD::OPC_Decode, 135, 3, 118, // Opcode: DINSM
/* 1547 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 1559
/* 1551 */    MCD::OPC_CheckPredicate, 3, 167, 0, // Skip to: 1722
/* 1555 */    MCD::OPC_Decode, 136, 3, 118, // Opcode: DINSU
/* 1559 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 1571
/* 1563 */    MCD::OPC_CheckPredicate, 3, 155, 0, // Skip to: 1722
/* 1567 */    MCD::OPC_Decode, 134, 3, 118, // Opcode: DINS
/* 1571 */    MCD::OPC_FilterValue, 36, 147, 0, // Skip to: 1722
/* 1575 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1578 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 1596
/* 1582 */    MCD::OPC_CheckPredicate, 15, 136, 0, // Skip to: 1722
/* 1586 */    MCD::OPC_CheckField, 21, 5, 0, 130, 0, // Skip to: 1722
/* 1592 */    MCD::OPC_Decode, 191, 3, 119, // Opcode: DSBH
/* 1596 */    MCD::OPC_FilterValue, 5, 122, 0, // Skip to: 1722
/* 1600 */    MCD::OPC_CheckPredicate, 15, 118, 0, // Skip to: 1722
/* 1604 */    MCD::OPC_CheckField, 21, 5, 0, 112, 0, // Skip to: 1722
/* 1610 */    MCD::OPC_Decode, 193, 3, 119, // Opcode: DSHD
/* 1614 */    MCD::OPC_FilterValue, 39, 8, 0, // Skip to: 1626
/* 1618 */    MCD::OPC_CheckPredicate, 2, 100, 0, // Skip to: 1722
/* 1622 */    MCD::OPC_Decode, 213, 5, 15, // Opcode: LWu
/* 1626 */    MCD::OPC_FilterValue, 44, 8, 0, // Skip to: 1638
/* 1630 */    MCD::OPC_CheckPredicate, 2, 88, 0, // Skip to: 1722
/* 1634 */    MCD::OPC_Decode, 143, 8, 15, // Opcode: SDL
/* 1638 */    MCD::OPC_FilterValue, 45, 8, 0, // Skip to: 1650
/* 1642 */    MCD::OPC_CheckPredicate, 2, 76, 0, // Skip to: 1722
/* 1646 */    MCD::OPC_Decode, 144, 8, 15, // Opcode: SDR
/* 1650 */    MCD::OPC_FilterValue, 52, 8, 0, // Skip to: 1662
/* 1654 */    MCD::OPC_CheckPredicate, 2, 64, 0, // Skip to: 1722
/* 1658 */    MCD::OPC_Decode, 191, 5, 15, // Opcode: LLD
/* 1662 */    MCD::OPC_FilterValue, 53, 8, 0, // Skip to: 1674
/* 1666 */    MCD::OPC_CheckPredicate, 19, 52, 0, // Skip to: 1722
/* 1670 */    MCD::OPC_Decode, 165, 5, 102, // Opcode: LDC164
/* 1674 */    MCD::OPC_FilterValue, 55, 8, 0, // Skip to: 1686
/* 1678 */    MCD::OPC_CheckPredicate, 2, 40, 0, // Skip to: 1722
/* 1682 */    MCD::OPC_Decode, 163, 5, 15, // Opcode: LD
/* 1686 */    MCD::OPC_FilterValue, 60, 8, 0, // Skip to: 1698
/* 1690 */    MCD::OPC_CheckPredicate, 2, 28, 0, // Skip to: 1722
/* 1694 */    MCD::OPC_Decode, 138, 8, 15, // Opcode: SCD
/* 1698 */    MCD::OPC_FilterValue, 61, 8, 0, // Skip to: 1710
/* 1702 */    MCD::OPC_CheckPredicate, 19, 16, 0, // Skip to: 1722
/* 1706 */    MCD::OPC_Decode, 141, 8, 102, // Opcode: SDC164
/* 1710 */    MCD::OPC_FilterValue, 63, 8, 0, // Skip to: 1722
/* 1714 */    MCD::OPC_CheckPredicate, 2, 4, 0, // Skip to: 1722
/* 1718 */    MCD::OPC_Decode, 139, 8, 15, // Opcode: SD
/* 1722 */    MCD::OPC_Fail,
  0
};

static bool checkDecoderPredicate(unsigned Idx, uint64_t Bits) {
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    return ((Bits & Mips::FeatureMips16));
  case 1:
    return ((Bits & Mips::FeatureMicroMips));
  case 2:
    return (!(Bits & Mips::FeatureMips16) && !(Bits & Mips::FeatureMicroMips));
  case 3:
    return ((Bits & Mips::FeatureMips32r2) && !(Bits & Mips::FeatureMips16) && !(Bits & Mips::FeatureMicroMips));
  case 4:
    return ((Bits & Mips::FeatureDSP));
  case 5:
    return ((Bits & Mips::FeatureMips32) && !(Bits & Mips::FeatureMips16) && !(Bits & Mips::FeatureMicroMips));
  case 6:
    return (!(Bits & Mips::FeatureFP64Bit) && !(Bits & Mips::FeatureMips16) && !(Bits & Mips::FeatureMicroMips));
  case 7:
    return ((Bits & Mips::FeatureFPIdx) && !(Bits & Mips::FeatureMips16) && !(Bits & Mips::FeatureMicroMips));
  case 8:
    return ((Bits & Mips::FeatureFPIdx) && !(Bits & Mips::FeatureFP64Bit) && !(Bits & Mips::FeatureMips16) && !(Bits & Mips::FeatureMicroMips));
  case 9:
    return ((Bits & Mips::FeatureMips32r2) && !(Bits & Mips::FeatureFP64Bit) && !(Bits & Mips::FeatureMips16) && !(Bits & Mips::FeatureMicroMips));
  case 10:
    return ((Bits & Mips::FeatureMips32r2) && (Bits & Mips::FeatureMips32) && !(Bits & Mips::FeatureMips16) && !(Bits & Mips::FeatureMicroMips));
  case 11:
    return ((Bits & Mips::FeatureMips32r2) && !(Bits & Mips::FeatureFP64Bit) && (Bits & Mips::FeatureMips32) && !(Bits & Mips::FeatureMips16) && !(Bits & Mips::FeatureMicroMips));
  case 12:
    return ((Bits & Mips::FeatureBitCount) && !(Bits & Mips::FeatureMips16) && !(Bits & Mips::FeatureMicroMips));
  case 13:
    return ((Bits & Mips::FeatureMSA));
  case 14:
    return ((Bits & Mips::FeatureDSPR2));
  case 15:
    return ((Bits & Mips::FeatureSwap) && !(Bits & Mips::FeatureMips16) && !(Bits & Mips::FeatureMicroMips));
  case 16:
    return ((Bits & Mips::FeatureSEInReg) && !(Bits & Mips::FeatureMips16) && !(Bits & Mips::FeatureMicroMips));
  case 17:
    return ((Bits & Mips::FeatureMips64r2) && !(Bits & Mips::FeatureMips16) && !(Bits & Mips::FeatureMicroMips));
  case 18:
    return ((Bits & Mips::FeatureMips64));
  case 19:
    return ((Bits & Mips::FeatureFP64Bit) && !(Bits & Mips::FeatureMips16) && !(Bits & Mips::FeatureMicroMips));
  case 20:
    return ((Bits & Mips::FeatureFPIdx) && (Bits & Mips::FeatureFP64Bit) && !(Bits & Mips::FeatureMips16) && !(Bits & Mips::FeatureMicroMips));
  }
}

template<typename InsnType>
static DecodeStatus decodeToMCInst(DecodeStatus S, unsigned Idx, InsnType insn, MCInst &MI,
                                   uint64_t Address, const void *Decoder) {
  InsnType tmp;
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 1:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 2:
    return S;
  case 3:
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 3, 2) << 3);
    tmp |= (fieldFromInstruction(insn, 5, 3) << 0);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 4:
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 5:
    tmp = fieldFromInstruction(insn, 2, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 6:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 7:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 8:
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 0, 5) << 0);
    tmp |= (fieldFromInstruction(insn, 16, 5) << 11);
    tmp |= (fieldFromInstruction(insn, 21, 6) << 5);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 9:
    tmp = fieldFromInstruction(insn, 5, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 10:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSimm16(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 15:
    if (DecodeMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 16:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 17:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 18:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 0, 12) << 0);
    tmp |= (fieldFromInstruction(insn, 16, 5) << 16);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 19:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 0, 12) << 0);
    tmp |= (fieldFromInstruction(insn, 16, 5) << 16);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 20:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSimm16(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 21:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 22:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 23:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 24:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 25:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 26:
    tmp = fieldFromInstruction(insn, 6, 20);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 27:
    tmp = fieldFromInstruction(insn, 16, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 6, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 28:
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 29:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 30:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 2);
    if (DecodeHI32DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 31:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeHI32DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 32:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 2);
    if (DecodeLO32DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 33:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeLO32DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 34:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 35:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 36:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 37:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 38:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 39:
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 40:
    if (DecodeJumpTarget(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 41:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 42:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 43:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 44:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 45:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 46:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 47:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCCRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 48:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGRH32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 49:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 50:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 51:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCCRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 52:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGRH32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 53:
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 54:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 55:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 56:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 57:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 58:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 59:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 60:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 61:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 62:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 63:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 64:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 65:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 66:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 67:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 68:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 69:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 70:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 71:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 72:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 73:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 74:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 75:
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 11, 5) << 0);
    tmp |= (fieldFromInstruction(insn, 16, 5) << 0);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 76:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeExtSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 77:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeInsSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 78:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 79:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 80:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 81:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 82:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 83:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 84:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 85:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 86:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 87:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 88:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 89:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 90:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 91:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 92:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 93:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 94:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 95:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 96:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 97:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 98:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 99:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 6);
    if (DecodeSimm16(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 100:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 101:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeHWRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 102:
    if (DecodeFMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 103:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 104:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 105:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 106:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 107:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 108:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 109:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 110:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 111:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 112:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 113:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 114:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 115:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 116:
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 11, 5) << 0);
    tmp |= (fieldFromInstruction(insn, 16, 5) << 0);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 117:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeExtSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 118:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeInsSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 119:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
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
