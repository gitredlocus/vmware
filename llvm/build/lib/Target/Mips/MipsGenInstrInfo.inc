/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Target Instruction Enum Values                                              *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_INSTRINFO_ENUM
#undef GET_INSTRINFO_ENUM
namespace llvm {

namespace Mips {
  enum {
    PHI	= 0,
    INLINEASM	= 1,
    PROLOG_LABEL	= 2,
    EH_LABEL	= 3,
    GC_LABEL	= 4,
    KILL	= 5,
    EXTRACT_SUBREG	= 6,
    INSERT_SUBREG	= 7,
    IMPLICIT_DEF	= 8,
    SUBREG_TO_REG	= 9,
    COPY_TO_REGCLASS	= 10,
    DBG_VALUE	= 11,
    REG_SEQUENCE	= 12,
    COPY	= 13,
    BUNDLE	= 14,
    LIFETIME_START	= 15,
    LIFETIME_END	= 16,
    ABSQ_S_PH	= 17,
    ABSQ_S_QB	= 18,
    ABSQ_S_W	= 19,
    ADD	= 20,
    ADDQH_PH	= 21,
    ADDQH_R_PH	= 22,
    ADDQH_R_W	= 23,
    ADDQH_W	= 24,
    ADDQ_PH	= 25,
    ADDQ_S_PH	= 26,
    ADDQ_S_W	= 27,
    ADDSC	= 28,
    ADDS_A_B	= 29,
    ADDS_A_D	= 30,
    ADDS_A_H	= 31,
    ADDS_A_W	= 32,
    ADDS_S_B	= 33,
    ADDS_S_D	= 34,
    ADDS_S_H	= 35,
    ADDS_S_W	= 36,
    ADDS_U_B	= 37,
    ADDS_U_D	= 38,
    ADDS_U_H	= 39,
    ADDS_U_W	= 40,
    ADDUH_QB	= 41,
    ADDUH_R_QB	= 42,
    ADDU_PH	= 43,
    ADDU_QB	= 44,
    ADDU_S_PH	= 45,
    ADDU_S_QB	= 46,
    ADDVI_B	= 47,
    ADDVI_D	= 48,
    ADDVI_H	= 49,
    ADDVI_W	= 50,
    ADDV_B	= 51,
    ADDV_D	= 52,
    ADDV_H	= 53,
    ADDV_W	= 54,
    ADDWC	= 55,
    ADD_A_B	= 56,
    ADD_A_D	= 57,
    ADD_A_H	= 58,
    ADD_A_W	= 59,
    ADD_MM	= 60,
    ADDi	= 61,
    ADDi_MM	= 62,
    ADDiu	= 63,
    ADDiu_MM	= 64,
    ADDu	= 65,
    ADDu_MM	= 66,
    ADJCALLSTACKDOWN	= 67,
    ADJCALLSTACKUP	= 68,
    AND	= 69,
    AND64	= 70,
    ANDI_B	= 71,
    AND_MM	= 72,
    AND_V	= 73,
    ANDi	= 74,
    ANDi64	= 75,
    ANDi_MM	= 76,
    APPEND	= 77,
    ASUB_S_B	= 78,
    ASUB_S_D	= 79,
    ASUB_S_H	= 80,
    ASUB_S_W	= 81,
    ASUB_U_B	= 82,
    ASUB_U_D	= 83,
    ASUB_U_H	= 84,
    ASUB_U_W	= 85,
    ATOMIC_CMP_SWAP_I16	= 86,
    ATOMIC_CMP_SWAP_I32	= 87,
    ATOMIC_CMP_SWAP_I64	= 88,
    ATOMIC_CMP_SWAP_I8	= 89,
    ATOMIC_LOAD_ADD_I16	= 90,
    ATOMIC_LOAD_ADD_I32	= 91,
    ATOMIC_LOAD_ADD_I64	= 92,
    ATOMIC_LOAD_ADD_I8	= 93,
    ATOMIC_LOAD_AND_I16	= 94,
    ATOMIC_LOAD_AND_I32	= 95,
    ATOMIC_LOAD_AND_I64	= 96,
    ATOMIC_LOAD_AND_I8	= 97,
    ATOMIC_LOAD_NAND_I16	= 98,
    ATOMIC_LOAD_NAND_I32	= 99,
    ATOMIC_LOAD_NAND_I64	= 100,
    ATOMIC_LOAD_NAND_I8	= 101,
    ATOMIC_LOAD_OR_I16	= 102,
    ATOMIC_LOAD_OR_I32	= 103,
    ATOMIC_LOAD_OR_I64	= 104,
    ATOMIC_LOAD_OR_I8	= 105,
    ATOMIC_LOAD_SUB_I16	= 106,
    ATOMIC_LOAD_SUB_I32	= 107,
    ATOMIC_LOAD_SUB_I64	= 108,
    ATOMIC_LOAD_SUB_I8	= 109,
    ATOMIC_LOAD_XOR_I16	= 110,
    ATOMIC_LOAD_XOR_I32	= 111,
    ATOMIC_LOAD_XOR_I64	= 112,
    ATOMIC_LOAD_XOR_I8	= 113,
    ATOMIC_SWAP_I16	= 114,
    ATOMIC_SWAP_I32	= 115,
    ATOMIC_SWAP_I64	= 116,
    ATOMIC_SWAP_I8	= 117,
    AVER_S_B	= 118,
    AVER_S_D	= 119,
    AVER_S_H	= 120,
    AVER_S_W	= 121,
    AVER_U_B	= 122,
    AVER_U_D	= 123,
    AVER_U_H	= 124,
    AVER_U_W	= 125,
    AVE_S_B	= 126,
    AVE_S_D	= 127,
    AVE_S_H	= 128,
    AVE_S_W	= 129,
    AVE_U_B	= 130,
    AVE_U_D	= 131,
    AVE_U_H	= 132,
    AVE_U_W	= 133,
    AddiuRxImmX16	= 134,
    AddiuRxPcImmX16	= 135,
    AddiuRxRxImm16	= 136,
    AddiuRxRxImmX16	= 137,
    AddiuRxRyOffMemX16	= 138,
    AddiuSpImm16	= 139,
    AddiuSpImmX16	= 140,
    AdduRxRyRz16	= 141,
    AndRxRxRy16	= 142,
    B	= 143,
    BALIGN	= 144,
    BAL_BR	= 145,
    BC1F	= 146,
    BC1T	= 147,
    BCLRI_B	= 148,
    BCLRI_D	= 149,
    BCLRI_H	= 150,
    BCLRI_W	= 151,
    BCLR_B	= 152,
    BCLR_D	= 153,
    BCLR_H	= 154,
    BCLR_W	= 155,
    BEQ	= 156,
    BEQ64	= 157,
    BGEZ	= 158,
    BGEZ64	= 159,
    BGEZAL	= 160,
    BGTZ	= 161,
    BGTZ64	= 162,
    BINSLI_B	= 163,
    BINSLI_D	= 164,
    BINSLI_H	= 165,
    BINSLI_W	= 166,
    BINSL_B	= 167,
    BINSL_D	= 168,
    BINSL_H	= 169,
    BINSL_W	= 170,
    BINSRI_B	= 171,
    BINSRI_D	= 172,
    BINSRI_H	= 173,
    BINSRI_W	= 174,
    BINSR_B	= 175,
    BINSR_D	= 176,
    BINSR_H	= 177,
    BINSR_W	= 178,
    BITREV	= 179,
    BLEZ	= 180,
    BLEZ64	= 181,
    BLTZ	= 182,
    BLTZ64	= 183,
    BLTZAL	= 184,
    BMNZI_B	= 185,
    BMNZ_V	= 186,
    BMZI_B	= 187,
    BMZ_V	= 188,
    BNE	= 189,
    BNE64	= 190,
    BNEGI_B	= 191,
    BNEGI_D	= 192,
    BNEGI_H	= 193,
    BNEGI_W	= 194,
    BNEG_B	= 195,
    BNEG_D	= 196,
    BNEG_H	= 197,
    BNEG_W	= 198,
    BNZ_B	= 199,
    BNZ_D	= 200,
    BNZ_H	= 201,
    BNZ_V	= 202,
    BNZ_W	= 203,
    BPOSGE32	= 204,
    BPOSGE32_PSEUDO	= 205,
    BREAK	= 206,
    BSELI_B	= 207,
    BSEL_V	= 208,
    BSETI_B	= 209,
    BSETI_D	= 210,
    BSETI_H	= 211,
    BSETI_W	= 212,
    BSET_B	= 213,
    BSET_D	= 214,
    BSET_H	= 215,
    BSET_W	= 216,
    BZ_B	= 217,
    BZ_D	= 218,
    BZ_H	= 219,
    BZ_V	= 220,
    BZ_W	= 221,
    BeqzRxImm16	= 222,
    BeqzRxImmX16	= 223,
    BimmX16	= 224,
    BnezRxImm16	= 225,
    BnezRxImmX16	= 226,
    Break16	= 227,
    BteqzT8CmpX16	= 228,
    BteqzT8CmpiX16	= 229,
    BteqzT8SltX16	= 230,
    BteqzT8SltiX16	= 231,
    BteqzT8SltiuX16	= 232,
    BteqzT8SltuX16	= 233,
    BteqzX16	= 234,
    BtnezT8CmpX16	= 235,
    BtnezT8CmpiX16	= 236,
    BtnezT8SltX16	= 237,
    BtnezT8SltiX16	= 238,
    BtnezT8SltiuX16	= 239,
    BtnezT8SltuX16	= 240,
    BtnezX16	= 241,
    BuildPairF64	= 242,
    BuildPairF64_64	= 243,
    CEIL_L_D64	= 244,
    CEIL_L_S	= 245,
    CEIL_W_D32	= 246,
    CEIL_W_D64	= 247,
    CEIL_W_S	= 248,
    CEQI_B	= 249,
    CEQI_D	= 250,
    CEQI_H	= 251,
    CEQI_W	= 252,
    CEQ_B	= 253,
    CEQ_D	= 254,
    CEQ_H	= 255,
    CEQ_W	= 256,
    CFC1	= 257,
    CFCMSA	= 258,
    CLEI_S_B	= 259,
    CLEI_S_D	= 260,
    CLEI_S_H	= 261,
    CLEI_S_W	= 262,
    CLEI_U_B	= 263,
    CLEI_U_D	= 264,
    CLEI_U_H	= 265,
    CLEI_U_W	= 266,
    CLE_S_B	= 267,
    CLE_S_D	= 268,
    CLE_S_H	= 269,
    CLE_S_W	= 270,
    CLE_U_B	= 271,
    CLE_U_D	= 272,
    CLE_U_H	= 273,
    CLE_U_W	= 274,
    CLO	= 275,
    CLTI_S_B	= 276,
    CLTI_S_D	= 277,
    CLTI_S_H	= 278,
    CLTI_S_W	= 279,
    CLTI_U_B	= 280,
    CLTI_U_D	= 281,
    CLTI_U_H	= 282,
    CLTI_U_W	= 283,
    CLT_S_B	= 284,
    CLT_S_D	= 285,
    CLT_S_H	= 286,
    CLT_S_W	= 287,
    CLT_U_B	= 288,
    CLT_U_D	= 289,
    CLT_U_H	= 290,
    CLT_U_W	= 291,
    CLZ	= 292,
    CMPGDU_EQ_QB	= 293,
    CMPGDU_LE_QB	= 294,
    CMPGDU_LT_QB	= 295,
    CMPGU_EQ_QB	= 296,
    CMPGU_LE_QB	= 297,
    CMPGU_LT_QB	= 298,
    CMPU_EQ_QB	= 299,
    CMPU_LE_QB	= 300,
    CMPU_LT_QB	= 301,
    CMP_EQ_PH	= 302,
    CMP_LE_PH	= 303,
    CMP_LT_PH	= 304,
    COPY_S_B	= 305,
    COPY_S_H	= 306,
    COPY_S_W	= 307,
    COPY_U_B	= 308,
    COPY_U_H	= 309,
    COPY_U_W	= 310,
    CTC1	= 311,
    CTCMSA	= 312,
    CVT_D32_S	= 313,
    CVT_D32_W	= 314,
    CVT_D64_L	= 315,
    CVT_D64_S	= 316,
    CVT_D64_W	= 317,
    CVT_L_D64	= 318,
    CVT_L_S	= 319,
    CVT_S_D32	= 320,
    CVT_S_D64	= 321,
    CVT_S_L	= 322,
    CVT_S_W	= 323,
    CVT_W_D32	= 324,
    CVT_W_D64	= 325,
    CVT_W_S	= 326,
    C_EQ_D32	= 327,
    C_EQ_D64	= 328,
    C_EQ_S	= 329,
    C_F_D32	= 330,
    C_F_D64	= 331,
    C_F_S	= 332,
    C_LE_D32	= 333,
    C_LE_D64	= 334,
    C_LE_S	= 335,
    C_LT_D32	= 336,
    C_LT_D64	= 337,
    C_LT_S	= 338,
    C_NGE_D32	= 339,
    C_NGE_D64	= 340,
    C_NGE_S	= 341,
    C_NGLE_D32	= 342,
    C_NGLE_D64	= 343,
    C_NGLE_S	= 344,
    C_NGL_D32	= 345,
    C_NGL_D64	= 346,
    C_NGL_S	= 347,
    C_NGT_D32	= 348,
    C_NGT_D64	= 349,
    C_NGT_S	= 350,
    C_OLE_D32	= 351,
    C_OLE_D64	= 352,
    C_OLE_S	= 353,
    C_OLT_D32	= 354,
    C_OLT_D64	= 355,
    C_OLT_S	= 356,
    C_SEQ_D32	= 357,
    C_SEQ_D64	= 358,
    C_SEQ_S	= 359,
    C_SF_D32	= 360,
    C_SF_D64	= 361,
    C_SF_S	= 362,
    C_UEQ_D32	= 363,
    C_UEQ_D64	= 364,
    C_UEQ_S	= 365,
    C_ULE_D32	= 366,
    C_ULE_D64	= 367,
    C_ULE_S	= 368,
    C_ULT_D32	= 369,
    C_ULT_D64	= 370,
    C_ULT_S	= 371,
    C_UN_D32	= 372,
    C_UN_D64	= 373,
    C_UN_S	= 374,
    CmpRxRy16	= 375,
    CmpiRxImm16	= 376,
    CmpiRxImmX16	= 377,
    Constant32	= 378,
    DADD	= 379,
    DADDi	= 380,
    DADDiu	= 381,
    DADDu	= 382,
    DCLO	= 383,
    DCLZ	= 384,
    DERET	= 385,
    DEXT	= 386,
    DEXTM	= 387,
    DEXTU	= 388,
    DI	= 389,
    DINS	= 390,
    DINSM	= 391,
    DINSU	= 392,
    DIV_S_B	= 393,
    DIV_S_D	= 394,
    DIV_S_H	= 395,
    DIV_S_W	= 396,
    DIV_U_B	= 397,
    DIV_U_D	= 398,
    DIV_U_H	= 399,
    DIV_U_W	= 400,
    DMFC0	= 401,
    DMFC1	= 402,
    DMFC2	= 403,
    DMTC0	= 404,
    DMTC1	= 405,
    DMTC2	= 406,
    DMULT	= 407,
    DMULTu	= 408,
    DOTP_S_B	= 409,
    DOTP_S_D	= 410,
    DOTP_S_H	= 411,
    DOTP_S_W	= 412,
    DOTP_U_B	= 413,
    DOTP_U_D	= 414,
    DOTP_U_H	= 415,
    DOTP_U_W	= 416,
    DPADD_S_D	= 417,
    DPADD_S_H	= 418,
    DPADD_S_W	= 419,
    DPADD_U_D	= 420,
    DPADD_U_H	= 421,
    DPADD_U_W	= 422,
    DPAQX_SA_W_PH	= 423,
    DPAQX_S_W_PH	= 424,
    DPAQ_SA_L_W	= 425,
    DPAQ_S_W_PH	= 426,
    DPAU_H_QBL	= 427,
    DPAU_H_QBR	= 428,
    DPAX_W_PH	= 429,
    DPA_W_PH	= 430,
    DPSQX_SA_W_PH	= 431,
    DPSQX_S_W_PH	= 432,
    DPSQ_SA_L_W	= 433,
    DPSQ_S_W_PH	= 434,
    DPSUB_S_D	= 435,
    DPSUB_S_H	= 436,
    DPSUB_S_W	= 437,
    DPSUB_U_D	= 438,
    DPSUB_U_H	= 439,
    DPSUB_U_W	= 440,
    DPSU_H_QBL	= 441,
    DPSU_H_QBR	= 442,
    DPSX_W_PH	= 443,
    DPS_W_PH	= 444,
    DROTR	= 445,
    DROTRV	= 446,
    DSBH	= 447,
    DSDIV	= 448,
    DSHD	= 449,
    DSLL	= 450,
    DSLL32	= 451,
    DSLL64_32	= 452,
    DSLLV	= 453,
    DSRA	= 454,
    DSRA32	= 455,
    DSRAV	= 456,
    DSRL	= 457,
    DSRL32	= 458,
    DSRLV	= 459,
    DSUBu	= 460,
    DUDIV	= 461,
    DivRxRy16	= 462,
    DivuRxRy16	= 463,
    EI	= 464,
    ERET	= 465,
    EXT	= 466,
    EXTP	= 467,
    EXTPDP	= 468,
    EXTPDPV	= 469,
    EXTPV	= 470,
    EXTRV_RS_W	= 471,
    EXTRV_R_W	= 472,
    EXTRV_S_H	= 473,
    EXTRV_W	= 474,
    EXTR_RS_W	= 475,
    EXTR_R_W	= 476,
    EXTR_S_H	= 477,
    EXTR_W	= 478,
    ExtractElementF64	= 479,
    ExtractElementF64_64	= 480,
    FABS_D32	= 481,
    FABS_D64	= 482,
    FABS_S	= 483,
    FADD_D	= 484,
    FADD_D32	= 485,
    FADD_D64	= 486,
    FADD_S	= 487,
    FADD_W	= 488,
    FCAF_D	= 489,
    FCAF_W	= 490,
    FCEQ_D	= 491,
    FCEQ_W	= 492,
    FCLASS_D	= 493,
    FCLASS_W	= 494,
    FCLE_D	= 495,
    FCLE_W	= 496,
    FCLT_D	= 497,
    FCLT_W	= 498,
    FCMP_D32	= 499,
    FCMP_D64	= 500,
    FCMP_S32	= 501,
    FCNE_D	= 502,
    FCNE_W	= 503,
    FCOR_D	= 504,
    FCOR_W	= 505,
    FCUEQ_D	= 506,
    FCUEQ_W	= 507,
    FCULE_D	= 508,
    FCULE_W	= 509,
    FCULT_D	= 510,
    FCULT_W	= 511,
    FCUNE_D	= 512,
    FCUNE_W	= 513,
    FCUN_D	= 514,
    FCUN_W	= 515,
    FDIV_D	= 516,
    FDIV_D32	= 517,
    FDIV_D64	= 518,
    FDIV_S	= 519,
    FDIV_W	= 520,
    FEXDO_H	= 521,
    FEXDO_W	= 522,
    FEXP2_D	= 523,
    FEXP2_W	= 524,
    FEXUPL_D	= 525,
    FEXUPL_W	= 526,
    FEXUPR_D	= 527,
    FEXUPR_W	= 528,
    FFINT_S_D	= 529,
    FFINT_S_W	= 530,
    FFINT_U_D	= 531,
    FFINT_U_W	= 532,
    FFQL_D	= 533,
    FFQL_W	= 534,
    FFQR_D	= 535,
    FFQR_W	= 536,
    FILL_B	= 537,
    FILL_H	= 538,
    FILL_W	= 539,
    FLOG2_D	= 540,
    FLOG2_W	= 541,
    FLOOR_L_D64	= 542,
    FLOOR_L_S	= 543,
    FLOOR_W_D32	= 544,
    FLOOR_W_D64	= 545,
    FLOOR_W_S	= 546,
    FMADD_D	= 547,
    FMADD_W	= 548,
    FMAX_A_D	= 549,
    FMAX_A_W	= 550,
    FMAX_D	= 551,
    FMAX_W	= 552,
    FMIN_A_D	= 553,
    FMIN_A_W	= 554,
    FMIN_D	= 555,
    FMIN_W	= 556,
    FMOV_D32	= 557,
    FMOV_D64	= 558,
    FMOV_S	= 559,
    FMSUB_D	= 560,
    FMSUB_W	= 561,
    FMUL_D	= 562,
    FMUL_D32	= 563,
    FMUL_D64	= 564,
    FMUL_S	= 565,
    FMUL_W	= 566,
    FNEG_D32	= 567,
    FNEG_D64	= 568,
    FNEG_S	= 569,
    FRCP_D	= 570,
    FRCP_W	= 571,
    FRINT_D	= 572,
    FRINT_W	= 573,
    FRSQRT_D	= 574,
    FRSQRT_W	= 575,
    FSAF_D	= 576,
    FSAF_W	= 577,
    FSEQ_D	= 578,
    FSEQ_W	= 579,
    FSLE_D	= 580,
    FSLE_W	= 581,
    FSLT_D	= 582,
    FSLT_W	= 583,
    FSNE_D	= 584,
    FSNE_W	= 585,
    FSOR_D	= 586,
    FSOR_W	= 587,
    FSQRT_D	= 588,
    FSQRT_D32	= 589,
    FSQRT_D64	= 590,
    FSQRT_S	= 591,
    FSQRT_W	= 592,
    FSUB_D	= 593,
    FSUB_D32	= 594,
    FSUB_D64	= 595,
    FSUB_S	= 596,
    FSUB_W	= 597,
    FSUEQ_D	= 598,
    FSUEQ_W	= 599,
    FSULE_D	= 600,
    FSULE_W	= 601,
    FSULT_D	= 602,
    FSULT_W	= 603,
    FSUNE_D	= 604,
    FSUNE_W	= 605,
    FSUN_D	= 606,
    FSUN_W	= 607,
    FTINT_S_D	= 608,
    FTINT_S_W	= 609,
    FTINT_U_D	= 610,
    FTINT_U_W	= 611,
    FTQ_H	= 612,
    FTQ_W	= 613,
    FTRUNC_S_D	= 614,
    FTRUNC_S_W	= 615,
    FTRUNC_U_D	= 616,
    FTRUNC_U_W	= 617,
    HADD_S_D	= 618,
    HADD_S_H	= 619,
    HADD_S_W	= 620,
    HADD_U_D	= 621,
    HADD_U_H	= 622,
    HADD_U_W	= 623,
    HSUB_S_D	= 624,
    HSUB_S_H	= 625,
    HSUB_S_W	= 626,
    HSUB_U_D	= 627,
    HSUB_U_H	= 628,
    HSUB_U_W	= 629,
    ILVEV_B	= 630,
    ILVEV_D	= 631,
    ILVEV_H	= 632,
    ILVEV_W	= 633,
    ILVL_B	= 634,
    ILVL_D	= 635,
    ILVL_H	= 636,
    ILVL_W	= 637,
    ILVOD_B	= 638,
    ILVOD_D	= 639,
    ILVOD_H	= 640,
    ILVOD_W	= 641,
    ILVR_B	= 642,
    ILVR_D	= 643,
    ILVR_H	= 644,
    ILVR_W	= 645,
    INS	= 646,
    INSERT_B	= 647,
    INSERT_H	= 648,
    INSERT_W	= 649,
    INSV	= 650,
    INSVE_B	= 651,
    INSVE_D	= 652,
    INSVE_H	= 653,
    INSVE_W	= 654,
    J	= 655,
    JAL	= 656,
    JALR	= 657,
    JALR64	= 658,
    JALR64Pseudo	= 659,
    JALRPseudo	= 660,
    JR	= 661,
    JR64	= 662,
    Jal16	= 663,
    JrRa16	= 664,
    JrcRa16	= 665,
    JrcRx16	= 666,
    JumpLinkReg16	= 667,
    LB	= 668,
    LB64	= 669,
    LBUX	= 670,
    LB_MM	= 671,
    LBu	= 672,
    LBu64	= 673,
    LBu_MM	= 674,
    LD	= 675,
    LDC1	= 676,
    LDC164	= 677,
    LDI_B	= 678,
    LDI_H	= 679,
    LDI_W	= 680,
    LDL	= 681,
    LDR	= 682,
    LDXC1	= 683,
    LDXC164	= 684,
    LDX_B	= 685,
    LDX_D	= 686,
    LDX_H	= 687,
    LDX_W	= 688,
    LD_B	= 689,
    LD_D	= 690,
    LD_H	= 691,
    LD_W	= 692,
    LEA_ADDiu	= 693,
    LEA_ADDiu64	= 694,
    LH	= 695,
    LH64	= 696,
    LHX	= 697,
    LH_MM	= 698,
    LHu	= 699,
    LHu64	= 700,
    LHu_MM	= 701,
    LL	= 702,
    LLD	= 703,
    LOAD_ACC128	= 704,
    LOAD_ACC64	= 705,
    LOAD_ACC64DSP	= 706,
    LOAD_CCOND_DSP	= 707,
    LUXC1	= 708,
    LUXC164	= 709,
    LUi	= 710,
    LUi64	= 711,
    LUi_MM	= 712,
    LW	= 713,
    LW64	= 714,
    LWC1	= 715,
    LWL	= 716,
    LWL64	= 717,
    LWL_MM	= 718,
    LWR	= 719,
    LWR64	= 720,
    LWR_MM	= 721,
    LWX	= 722,
    LWXC1	= 723,
    LW_MM	= 724,
    LWu	= 725,
    LbRxRyOffMemX16	= 726,
    LbuRxRyOffMemX16	= 727,
    LhRxRyOffMemX16	= 728,
    LhuRxRyOffMemX16	= 729,
    LiRxImm16	= 730,
    LiRxImmX16	= 731,
    LoadAddr32Imm	= 732,
    LoadAddr32Reg	= 733,
    LoadImm32Reg	= 734,
    LwConstant32	= 735,
    LwRxRyOffMemX16	= 736,
    LwRxSpImmX16	= 737,
    MADD	= 738,
    MADDR_Q_H	= 739,
    MADDR_Q_W	= 740,
    MADDU	= 741,
    MADDU_DSP	= 742,
    MADDV_B	= 743,
    MADDV_D	= 744,
    MADDV_H	= 745,
    MADDV_W	= 746,
    MADD_D32	= 747,
    MADD_D64	= 748,
    MADD_DSP	= 749,
    MADD_Q_H	= 750,
    MADD_Q_W	= 751,
    MADD_S	= 752,
    MAQ_SA_W_PHL	= 753,
    MAQ_SA_W_PHR	= 754,
    MAQ_S_W_PHL	= 755,
    MAQ_S_W_PHR	= 756,
    MAXI_S_B	= 757,
    MAXI_S_D	= 758,
    MAXI_S_H	= 759,
    MAXI_S_W	= 760,
    MAXI_U_B	= 761,
    MAXI_U_D	= 762,
    MAXI_U_H	= 763,
    MAXI_U_W	= 764,
    MAX_A_B	= 765,
    MAX_A_D	= 766,
    MAX_A_H	= 767,
    MAX_A_W	= 768,
    MAX_S_B	= 769,
    MAX_S_D	= 770,
    MAX_S_H	= 771,
    MAX_S_W	= 772,
    MAX_U_B	= 773,
    MAX_U_D	= 774,
    MAX_U_H	= 775,
    MAX_U_W	= 776,
    MFC0	= 777,
    MFC1	= 778,
    MFC2	= 779,
    MFHC1	= 780,
    MFHI	= 781,
    MFHI64	= 782,
    MFHI_DSP	= 783,
    MFLO	= 784,
    MFLO64	= 785,
    MFLO_DSP	= 786,
    MINI_S_B	= 787,
    MINI_S_D	= 788,
    MINI_S_H	= 789,
    MINI_S_W	= 790,
    MINI_U_B	= 791,
    MINI_U_D	= 792,
    MINI_U_H	= 793,
    MINI_U_W	= 794,
    MIN_A_B	= 795,
    MIN_A_D	= 796,
    MIN_A_H	= 797,
    MIN_A_W	= 798,
    MIN_S_B	= 799,
    MIN_S_D	= 800,
    MIN_S_H	= 801,
    MIN_S_W	= 802,
    MIN_U_B	= 803,
    MIN_U_D	= 804,
    MIN_U_H	= 805,
    MIN_U_W	= 806,
    MIPSeh_return32	= 807,
    MIPSeh_return64	= 808,
    MODSUB	= 809,
    MOD_S_B	= 810,
    MOD_S_D	= 811,
    MOD_S_H	= 812,
    MOD_S_W	= 813,
    MOD_U_B	= 814,
    MOD_U_D	= 815,
    MOD_U_H	= 816,
    MOD_U_W	= 817,
    MOVE_V	= 818,
    MOVF_D32	= 819,
    MOVF_D64	= 820,
    MOVF_I	= 821,
    MOVF_I64	= 822,
    MOVF_S	= 823,
    MOVN_I64_D64	= 824,
    MOVN_I64_I	= 825,
    MOVN_I64_I64	= 826,
    MOVN_I64_S	= 827,
    MOVN_I_D32	= 828,
    MOVN_I_D64	= 829,
    MOVN_I_I	= 830,
    MOVN_I_I64	= 831,
    MOVN_I_S	= 832,
    MOVT_D32	= 833,
    MOVT_D64	= 834,
    MOVT_I	= 835,
    MOVT_I64	= 836,
    MOVT_S	= 837,
    MOVZ_I64_D64	= 838,
    MOVZ_I64_I	= 839,
    MOVZ_I64_I64	= 840,
    MOVZ_I64_S	= 841,
    MOVZ_I_D32	= 842,
    MOVZ_I_D64	= 843,
    MOVZ_I_I	= 844,
    MOVZ_I_I64	= 845,
    MOVZ_I_S	= 846,
    MSUB	= 847,
    MSUBR_Q_H	= 848,
    MSUBR_Q_W	= 849,
    MSUBU	= 850,
    MSUBU_DSP	= 851,
    MSUBV_B	= 852,
    MSUBV_D	= 853,
    MSUBV_H	= 854,
    MSUBV_W	= 855,
    MSUB_D32	= 856,
    MSUB_D64	= 857,
    MSUB_DSP	= 858,
    MSUB_Q_H	= 859,
    MSUB_Q_W	= 860,
    MSUB_S	= 861,
    MTC0	= 862,
    MTC1	= 863,
    MTC2	= 864,
    MTHC1	= 865,
    MTHI	= 866,
    MTHI64	= 867,
    MTHI_DSP	= 868,
    MTHLIP	= 869,
    MTLO	= 870,
    MTLO64	= 871,
    MTLO_DSP	= 872,
    MUL	= 873,
    MULEQ_S_W_PHL	= 874,
    MULEQ_S_W_PHR	= 875,
    MULEU_S_PH_QBL	= 876,
    MULEU_S_PH_QBR	= 877,
    MULQ_RS_PH	= 878,
    MULQ_RS_W	= 879,
    MULQ_S_PH	= 880,
    MULQ_S_W	= 881,
    MULR_Q_H	= 882,
    MULR_Q_W	= 883,
    MULSAQ_S_W_PH	= 884,
    MULSA_W_PH	= 885,
    MULT	= 886,
    MULTU_DSP	= 887,
    MULT_DSP	= 888,
    MULT_MM	= 889,
    MULTu	= 890,
    MULTu_MM	= 891,
    MULV_B	= 892,
    MULV_D	= 893,
    MULV_H	= 894,
    MULV_W	= 895,
    MUL_MM	= 896,
    MUL_PH	= 897,
    MUL_Q_H	= 898,
    MUL_Q_W	= 899,
    MUL_S_PH	= 900,
    Mfhi16	= 901,
    Mflo16	= 902,
    Move32R16	= 903,
    MoveR3216	= 904,
    MultRxRy16	= 905,
    MultRxRyRz16	= 906,
    MultuRxRy16	= 907,
    MultuRxRyRz16	= 908,
    NLOC_B	= 909,
    NLOC_D	= 910,
    NLOC_H	= 911,
    NLOC_W	= 912,
    NLZC_B	= 913,
    NLZC_D	= 914,
    NLZC_H	= 915,
    NLZC_W	= 916,
    NMADD_D32	= 917,
    NMADD_D64	= 918,
    NMADD_S	= 919,
    NMSUB_D32	= 920,
    NMSUB_D64	= 921,
    NMSUB_S	= 922,
    NOP	= 923,
    NOR	= 924,
    NOR64	= 925,
    NORI_B	= 926,
    NOR_MM	= 927,
    NOR_V	= 928,
    NegRxRy16	= 929,
    NotRxRy16	= 930,
    OR	= 931,
    OR64	= 932,
    ORI_B	= 933,
    OR_MM	= 934,
    OR_V	= 935,
    ORi	= 936,
    ORi64	= 937,
    ORi_MM	= 938,
    OrRxRxRy16	= 939,
    PACKRL_PH	= 940,
    PCKEV_B	= 941,
    PCKEV_D	= 942,
    PCKEV_H	= 943,
    PCKEV_W	= 944,
    PCKOD_B	= 945,
    PCKOD_D	= 946,
    PCKOD_H	= 947,
    PCKOD_W	= 948,
    PCNT_B	= 949,
    PCNT_D	= 950,
    PCNT_H	= 951,
    PCNT_W	= 952,
    PICK_PH	= 953,
    PICK_QB	= 954,
    PRECEQU_PH_QBL	= 955,
    PRECEQU_PH_QBLA	= 956,
    PRECEQU_PH_QBR	= 957,
    PRECEQU_PH_QBRA	= 958,
    PRECEQ_W_PHL	= 959,
    PRECEQ_W_PHR	= 960,
    PRECEU_PH_QBL	= 961,
    PRECEU_PH_QBLA	= 962,
    PRECEU_PH_QBR	= 963,
    PRECEU_PH_QBRA	= 964,
    PRECRQU_S_QB_PH	= 965,
    PRECRQ_PH_W	= 966,
    PRECRQ_QB_PH	= 967,
    PRECRQ_RS_PH_W	= 968,
    PRECR_QB_PH	= 969,
    PRECR_SRA_PH_W	= 970,
    PRECR_SRA_R_PH_W	= 971,
    PREPEND	= 972,
    PseudoCMPU_EQ_QB	= 973,
    PseudoCMPU_LE_QB	= 974,
    PseudoCMPU_LT_QB	= 975,
    PseudoCMP_EQ_PH	= 976,
    PseudoCMP_LE_PH	= 977,
    PseudoCMP_LT_PH	= 978,
    PseudoCVT_D32_W	= 979,
    PseudoCVT_D64_L	= 980,
    PseudoCVT_D64_W	= 981,
    PseudoCVT_S_L	= 982,
    PseudoCVT_S_W	= 983,
    PseudoDMULT	= 984,
    PseudoDMULTu	= 985,
    PseudoDSDIV	= 986,
    PseudoDUDIV	= 987,
    PseudoLDC1	= 988,
    PseudoMADD	= 989,
    PseudoMADDU	= 990,
    PseudoMSUB	= 991,
    PseudoMSUBU	= 992,
    PseudoMULT	= 993,
    PseudoMULTu	= 994,
    PseudoPICK_PH	= 995,
    PseudoPICK_QB	= 996,
    PseudoSDC1	= 997,
    PseudoSDIV	= 998,
    PseudoUDIV	= 999,
    RADDU_W_QB	= 1000,
    RDDSP	= 1001,
    RDHWR	= 1002,
    RDHWR64	= 1003,
    REPLV_PH	= 1004,
    REPLV_QB	= 1005,
    REPL_PH	= 1006,
    REPL_QB	= 1007,
    RET	= 1008,
    ROTR	= 1009,
    ROTRV	= 1010,
    ROTRV_MM	= 1011,
    ROTR_MM	= 1012,
    ROUND_L_D64	= 1013,
    ROUND_L_S	= 1014,
    ROUND_W_D32	= 1015,
    ROUND_W_D64	= 1016,
    ROUND_W_S	= 1017,
    RestoreIncSpF16	= 1018,
    RestoreRaF16	= 1019,
    RetRA	= 1020,
    RetRA16	= 1021,
    SAT_S_B	= 1022,
    SAT_S_D	= 1023,
    SAT_S_H	= 1024,
    SAT_S_W	= 1025,
    SAT_U_B	= 1026,
    SAT_U_D	= 1027,
    SAT_U_H	= 1028,
    SAT_U_W	= 1029,
    SB	= 1030,
    SB64	= 1031,
    SB_MM	= 1032,
    SC	= 1033,
    SCD	= 1034,
    SD	= 1035,
    SDC1	= 1036,
    SDC164	= 1037,
    SDIV	= 1038,
    SDL	= 1039,
    SDR	= 1040,
    SDXC1	= 1041,
    SDXC164	= 1042,
    SEB	= 1043,
    SEB64	= 1044,
    SEH	= 1045,
    SEH64	= 1046,
    SH	= 1047,
    SH64	= 1048,
    SHF_B	= 1049,
    SHF_H	= 1050,
    SHF_W	= 1051,
    SHILO	= 1052,
    SHILOV	= 1053,
    SHLLV_PH	= 1054,
    SHLLV_QB	= 1055,
    SHLLV_S_PH	= 1056,
    SHLLV_S_W	= 1057,
    SHLL_PH	= 1058,
    SHLL_QB	= 1059,
    SHLL_S_PH	= 1060,
    SHLL_S_W	= 1061,
    SHRAV_PH	= 1062,
    SHRAV_QB	= 1063,
    SHRAV_R_PH	= 1064,
    SHRAV_R_QB	= 1065,
    SHRAV_R_W	= 1066,
    SHRA_PH	= 1067,
    SHRA_QB	= 1068,
    SHRA_R_PH	= 1069,
    SHRA_R_QB	= 1070,
    SHRA_R_W	= 1071,
    SHRLV_PH	= 1072,
    SHRLV_QB	= 1073,
    SHRL_PH	= 1074,
    SHRL_QB	= 1075,
    SH_MM	= 1076,
    SLDI_B	= 1077,
    SLDI_D	= 1078,
    SLDI_H	= 1079,
    SLDI_W	= 1080,
    SLD_B	= 1081,
    SLD_D	= 1082,
    SLD_H	= 1083,
    SLD_W	= 1084,
    SLL	= 1085,
    SLL64_32	= 1086,
    SLL64_64	= 1087,
    SLLI_B	= 1088,
    SLLI_D	= 1089,
    SLLI_H	= 1090,
    SLLI_W	= 1091,
    SLLV	= 1092,
    SLLV_MM	= 1093,
    SLL_B	= 1094,
    SLL_D	= 1095,
    SLL_H	= 1096,
    SLL_MM	= 1097,
    SLL_W	= 1098,
    SLT	= 1099,
    SLT64	= 1100,
    SLT_MM	= 1101,
    SLTi	= 1102,
    SLTi64	= 1103,
    SLTi_MM	= 1104,
    SLTiu	= 1105,
    SLTiu64	= 1106,
    SLTiu_MM	= 1107,
    SLTu	= 1108,
    SLTu64	= 1109,
    SLTu_MM	= 1110,
    SNZ_B_PSEUDO	= 1111,
    SNZ_D_PSEUDO	= 1112,
    SNZ_H_PSEUDO	= 1113,
    SNZ_V_PSEUDO	= 1114,
    SNZ_W_PSEUDO	= 1115,
    SPLATI_B	= 1116,
    SPLATI_D	= 1117,
    SPLATI_H	= 1118,
    SPLATI_W	= 1119,
    SPLAT_B	= 1120,
    SPLAT_D	= 1121,
    SPLAT_H	= 1122,
    SPLAT_W	= 1123,
    SRA	= 1124,
    SRAI_B	= 1125,
    SRAI_D	= 1126,
    SRAI_H	= 1127,
    SRAI_W	= 1128,
    SRARI_B	= 1129,
    SRARI_D	= 1130,
    SRARI_H	= 1131,
    SRARI_W	= 1132,
    SRAR_B	= 1133,
    SRAR_D	= 1134,
    SRAR_H	= 1135,
    SRAR_W	= 1136,
    SRAV	= 1137,
    SRAV_MM	= 1138,
    SRA_B	= 1139,
    SRA_D	= 1140,
    SRA_H	= 1141,
    SRA_MM	= 1142,
    SRA_W	= 1143,
    SRL	= 1144,
    SRLI_B	= 1145,
    SRLI_D	= 1146,
    SRLI_H	= 1147,
    SRLI_W	= 1148,
    SRLRI_B	= 1149,
    SRLRI_D	= 1150,
    SRLRI_H	= 1151,
    SRLRI_W	= 1152,
    SRLR_B	= 1153,
    SRLR_D	= 1154,
    SRLR_H	= 1155,
    SRLR_W	= 1156,
    SRLV	= 1157,
    SRLV_MM	= 1158,
    SRL_B	= 1159,
    SRL_D	= 1160,
    SRL_H	= 1161,
    SRL_MM	= 1162,
    SRL_W	= 1163,
    STORE_ACC128	= 1164,
    STORE_ACC64	= 1165,
    STORE_ACC64DSP	= 1166,
    STORE_CCOND_DSP	= 1167,
    STX_B	= 1168,
    STX_D	= 1169,
    STX_H	= 1170,
    STX_W	= 1171,
    ST_B	= 1172,
    ST_D	= 1173,
    ST_H	= 1174,
    ST_W	= 1175,
    SUB	= 1176,
    SUBQH_PH	= 1177,
    SUBQH_R_PH	= 1178,
    SUBQH_R_W	= 1179,
    SUBQH_W	= 1180,
    SUBQ_PH	= 1181,
    SUBQ_S_PH	= 1182,
    SUBQ_S_W	= 1183,
    SUBSUS_U_B	= 1184,
    SUBSUS_U_D	= 1185,
    SUBSUS_U_H	= 1186,
    SUBSUS_U_W	= 1187,
    SUBSUU_S_B	= 1188,
    SUBSUU_S_D	= 1189,
    SUBSUU_S_H	= 1190,
    SUBSUU_S_W	= 1191,
    SUBS_S_B	= 1192,
    SUBS_S_D	= 1193,
    SUBS_S_H	= 1194,
    SUBS_S_W	= 1195,
    SUBS_U_B	= 1196,
    SUBS_U_D	= 1197,
    SUBS_U_H	= 1198,
    SUBS_U_W	= 1199,
    SUBUH_QB	= 1200,
    SUBUH_R_QB	= 1201,
    SUBU_PH	= 1202,
    SUBU_QB	= 1203,
    SUBU_S_PH	= 1204,
    SUBU_S_QB	= 1205,
    SUBVI_B	= 1206,
    SUBVI_D	= 1207,
    SUBVI_H	= 1208,
    SUBVI_W	= 1209,
    SUBV_B	= 1210,
    SUBV_D	= 1211,
    SUBV_H	= 1212,
    SUBV_W	= 1213,
    SUB_MM	= 1214,
    SUBu	= 1215,
    SUBu_MM	= 1216,
    SUXC1	= 1217,
    SUXC164	= 1218,
    SW	= 1219,
    SW64	= 1220,
    SWC1	= 1221,
    SWL	= 1222,
    SWL64	= 1223,
    SWL_MM	= 1224,
    SWR	= 1225,
    SWR64	= 1226,
    SWR_MM	= 1227,
    SWXC1	= 1228,
    SW_MM	= 1229,
    SYNC	= 1230,
    SYSCALL	= 1231,
    SZ_B_PSEUDO	= 1232,
    SZ_D_PSEUDO	= 1233,
    SZ_H_PSEUDO	= 1234,
    SZ_V_PSEUDO	= 1235,
    SZ_W_PSEUDO	= 1236,
    SaveDecSpF16	= 1237,
    SaveRaF16	= 1238,
    SbRxRyOffMemX16	= 1239,
    SelBeqZ	= 1240,
    SelBneZ	= 1241,
    SelTBteqZCmp	= 1242,
    SelTBteqZCmpi	= 1243,
    SelTBteqZSlt	= 1244,
    SelTBteqZSlti	= 1245,
    SelTBteqZSltiu	= 1246,
    SelTBteqZSltu	= 1247,
    SelTBtneZCmp	= 1248,
    SelTBtneZCmpi	= 1249,
    SelTBtneZSlt	= 1250,
    SelTBtneZSlti	= 1251,
    SelTBtneZSltiu	= 1252,
    SelTBtneZSltu	= 1253,
    ShRxRyOffMemX16	= 1254,
    SllX16	= 1255,
    SllvRxRy16	= 1256,
    SltCCRxRy16	= 1257,
    SltRxRy16	= 1258,
    SltiCCRxImmX16	= 1259,
    SltiRxImm16	= 1260,
    SltiRxImmX16	= 1261,
    SltiuCCRxImmX16	= 1262,
    SltiuRxImm16	= 1263,
    SltiuRxImmX16	= 1264,
    SltuCCRxRy16	= 1265,
    SltuRxRy16	= 1266,
    SltuRxRyRz16	= 1267,
    SraX16	= 1268,
    SravRxRy16	= 1269,
    SrlX16	= 1270,
    SrlvRxRy16	= 1271,
    SubuRxRyRz16	= 1272,
    SwRxRyOffMemX16	= 1273,
    SwRxSpImmX16	= 1274,
    TAILCALL	= 1275,
    TAILCALL64_R	= 1276,
    TAILCALL_R	= 1277,
    TEQ	= 1278,
    TEQI	= 1279,
    TGE	= 1280,
    TGEI	= 1281,
    TGEIU	= 1282,
    TGEU	= 1283,
    TLT	= 1284,
    TLTI	= 1285,
    TLTU	= 1286,
    TNE	= 1287,
    TNEI	= 1288,
    TRAP	= 1289,
    TRUNC_L_D64	= 1290,
    TRUNC_L_S	= 1291,
    TRUNC_W_D32	= 1292,
    TRUNC_W_D64	= 1293,
    TRUNC_W_S	= 1294,
    TTLTIU	= 1295,
    UDIV	= 1296,
    VSHF_B	= 1297,
    VSHF_D	= 1298,
    VSHF_H	= 1299,
    VSHF_W	= 1300,
    WAIT	= 1301,
    WRDSP	= 1302,
    WSBH	= 1303,
    XOR	= 1304,
    XOR64	= 1305,
    XORI_B	= 1306,
    XOR_MM	= 1307,
    XOR_V	= 1308,
    XORi	= 1309,
    XORi64	= 1310,
    XORi_MM	= 1311,
    XorRxRxRy16	= 1312,
    INSTRUCTION_LIST_END = 1313
  };
}
} // End llvm namespace 
#endif // GET_INSTRINFO_ENUM

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Target Instruction Descriptors                                              *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const uint16_t ImplicitList1[] = { Mips::DSPOutFlag20, 0 };
static const uint16_t ImplicitList2[] = { Mips::DSPCarry, 0 };
static const uint16_t ImplicitList3[] = { Mips::SP, 0 };
static const uint16_t ImplicitList4[] = { Mips::AT, 0 };
static const uint16_t ImplicitList5[] = { Mips::RA, 0 };
static const uint16_t ImplicitList6[] = { Mips::DSPPos, 0 };
static const uint16_t ImplicitList7[] = { Mips::T8, 0 };
static const uint16_t ImplicitList8[] = { Mips::DSPCCond, 0 };
static const uint16_t ImplicitList9[] = { Mips::HI0_64, Mips::LO0_64, 0 };
static const uint16_t ImplicitList10[] = { Mips::DSPOutFlag16_19, 0 };
static const uint16_t ImplicitList11[] = { Mips::HI0, Mips::LO0, 0 };
static const uint16_t ImplicitList12[] = { Mips::DSPEFI, 0 };
static const uint16_t ImplicitList13[] = { Mips::DSPPos, Mips::DSPEFI, 0 };
static const uint16_t ImplicitList14[] = { Mips::DSPOutFlag23, 0 };
static const uint16_t ImplicitList15[] = { Mips::FCC0, 0 };
static const uint16_t ImplicitList16[] = { Mips::DSPPos, Mips::DSPSCount, 0 };
static const uint16_t ImplicitList17[] = { Mips::HI0, 0 };
static const uint16_t ImplicitList18[] = { Mips::HI0_64, 0 };
static const uint16_t ImplicitList19[] = { Mips::LO0, 0 };
static const uint16_t ImplicitList20[] = { Mips::LO0_64, 0 };
static const uint16_t ImplicitList21[] = { Mips::V0, Mips::V1, 0 };
static const uint16_t ImplicitList22[] = { Mips::DSPOutFlag21, 0 };
static const uint16_t ImplicitList23[] = { Mips::DSPOutFlag22, 0 };
static const uint16_t ImplicitList24[] = { Mips::S0, Mips::S1, Mips::S2, Mips::RA, Mips::SP, 0 };
static const uint16_t ImplicitList25[] = { Mips::RA, Mips::SP, Mips::S0, Mips::S1, Mips::S2, 0 };

static const MCOperandInfo OperandInfo2[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo3[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo4[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo5[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo6[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo7[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo8[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo9[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo10[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo11[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo12[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo25[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsPlusSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo35[] = { { Mips::FCCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CCRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSACtrlRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { Mips::CCRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo62[] = { { Mips::MSACtrlRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo69[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo73[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo75[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo76[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo77[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo78[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo79[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo80[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo81[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo82[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo83[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo84[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo85[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo86[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo87[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo88[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo89[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo90[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo91[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo92[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo93[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo94[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo95[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo96[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo97[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo98[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo99[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo100[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo101[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo102[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo103[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo104[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo105[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo106[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo107[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo108[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo109[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo110[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo111[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo112[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo113[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo114[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo115[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo116[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo117[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo118[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo119[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo120[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo121[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo122[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo123[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo124[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo125[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo126[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo127[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo128[] = { { Mips::ACC128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo129[] = { { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo130[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo131[] = { { Mips::DSPCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo132[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo133[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo134[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo135[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo136[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo137[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo138[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPU16RegsPlusSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo139[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPUSPRegRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo140[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo141[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo142[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo143[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo144[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo145[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo146[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGRH32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo147[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::HI32DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo148[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::LO32DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo149[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo150[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo151[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo152[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo153[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo154[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo155[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo156[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo157[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo158[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo159[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo160[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo161[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo162[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo163[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo164[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo165[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo166[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo167[] = { { Mips::FGRH32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo168[] = { { Mips::HI32DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo169[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo170[] = { { Mips::LO32DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo171[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo172[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo173[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo174[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo175[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo176[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo177[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo178[] = { { Mips::DSPCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo179[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo180[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo181[] = { { Mips::ACC128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo182[] = { { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo183[] = { { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo184[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::DSPCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo185[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::HWRegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo186[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::HWRegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo187[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo188[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo189[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo190[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo191[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo192[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo193[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo194[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo195[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo196[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo197[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo198[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo199[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo200[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo201[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo202[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo203[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo204[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo205[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo206[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo207[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo208[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };

extern const MCInstrDesc MipsInsts[] = {
  { 0,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #0 = PHI
  { 1,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic), 0x0ULL, NULL, NULL, 0 },  // Inst #1 = INLINEASM
  { 2,	1,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #2 = PROLOG_LABEL
  { 3,	1,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #3 = EH_LABEL
  { 4,	1,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #4 = GC_LABEL
  { 5,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic), 0x0ULL, NULL, NULL, 0 },  // Inst #5 = KILL
  { 6,	3,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo3 },  // Inst #6 = EXTRACT_SUBREG
  { 7,	4,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo4 },  // Inst #7 = INSERT_SUBREG
  { 8,	1,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #8 = IMPLICIT_DEF
  { 9,	4,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo6 },  // Inst #9 = SUBREG_TO_REG
  { 10,	3,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo3 },  // Inst #10 = COPY_TO_REGCLASS
  { 11,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic), 0x0ULL, NULL, NULL, 0 },  // Inst #11 = DBG_VALUE
  { 12,	1,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #12 = REG_SEQUENCE
  { 13,	2,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo7 },  // Inst #13 = COPY
  { 14,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #14 = BUNDLE
  { 15,	1,	0,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #15 = LIFETIME_START
  { 16,	1,	0,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #16 = LIFETIME_END
  { 17,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #17 = ABSQ_S_PH
  { 18,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #18 = ABSQ_S_QB
  { 19,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #19 = ABSQ_S_W
  { 20,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #20 = ADD
  { 21,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo11 },  // Inst #21 = ADDQH_PH
  { 22,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo11 },  // Inst #22 = ADDQH_R_PH
  { 23,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo10 },  // Inst #23 = ADDQH_R_W
  { 24,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo10 },  // Inst #24 = ADDQH_W
  { 25,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #25 = ADDQ_PH
  { 26,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #26 = ADDQ_S_PH
  { 27,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo10 },  // Inst #27 = ADDQ_S_W
  { 28,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList2, OperandInfo10 },  // Inst #28 = ADDSC
  { 29,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #29 = ADDS_A_B
  { 30,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #30 = ADDS_A_D
  { 31,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #31 = ADDS_A_H
  { 32,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #32 = ADDS_A_W
  { 33,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #33 = ADDS_S_B
  { 34,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #34 = ADDS_S_D
  { 35,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #35 = ADDS_S_H
  { 36,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #36 = ADDS_S_W
  { 37,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #37 = ADDS_U_B
  { 38,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #38 = ADDS_U_D
  { 39,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #39 = ADDS_U_H
  { 40,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #40 = ADDS_U_W
  { 41,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo11 },  // Inst #41 = ADDUH_QB
  { 42,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo11 },  // Inst #42 = ADDUH_R_QB
  { 43,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #43 = ADDU_PH
  { 44,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #44 = ADDU_QB
  { 45,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #45 = ADDU_S_PH
  { 46,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #46 = ADDU_S_QB
  { 47,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo16 },  // Inst #47 = ADDVI_B
  { 48,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo17 },  // Inst #48 = ADDVI_D
  { 49,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo18 },  // Inst #49 = ADDVI_H
  { 50,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo19 },  // Inst #50 = ADDVI_W
  { 51,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #51 = ADDV_B
  { 52,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #52 = ADDV_D
  { 53,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #53 = ADDV_H
  { 54,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #54 = ADDV_W
  { 55,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList2, ImplicitList1, OperandInfo10 },  // Inst #55 = ADDWC
  { 56,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #56 = ADD_A_B
  { 57,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #57 = ADD_A_D
  { 58,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #58 = ADD_A_H
  { 59,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #59 = ADD_A_W
  { 60,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #60 = ADD_MM
  { 61,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo20 },  // Inst #61 = ADDi
  { 62,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo20 },  // Inst #62 = ADDi_MM
  { 63,	3,	1,	1,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x2ULL, NULL, NULL, OperandInfo20 },  // Inst #63 = ADDiu
  { 64,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo20 },  // Inst #64 = ADDiu_MM
  { 65,	3,	1,	1,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #65 = ADDu
  { 66,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #66 = ADDu_MM
  { 67,	1,	0,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo2 },  // Inst #67 = ADJCALLSTACKDOWN
  { 68,	2,	0,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo21 },  // Inst #68 = ADJCALLSTACKUP
  { 69,	3,	1,	3,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #69 = AND
  { 70,	3,	1,	1,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo22 },  // Inst #70 = AND64
  { 71,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo16 },  // Inst #71 = ANDI_B
  { 72,	3,	1,	4,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #72 = AND_MM
  { 73,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #73 = AND_V
  { 74,	3,	1,	3,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, NULL, NULL, OperandInfo20 },  // Inst #74 = ANDi
  { 75,	3,	1,	3,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, NULL, NULL, OperandInfo23 },  // Inst #75 = ANDi64
  { 76,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo20 },  // Inst #76 = ANDi_MM
  { 77,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo24 },  // Inst #77 = APPEND
  { 78,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #78 = ASUB_S_B
  { 79,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #79 = ASUB_S_D
  { 80,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #80 = ASUB_S_H
  { 81,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #81 = ASUB_S_W
  { 82,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #82 = ASUB_U_B
  { 83,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #83 = ASUB_U_D
  { 84,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #84 = ASUB_U_H
  { 85,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #85 = ASUB_U_W
  { 86,	4,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo25 },  // Inst #86 = ATOMIC_CMP_SWAP_I16
  { 87,	4,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo25 },  // Inst #87 = ATOMIC_CMP_SWAP_I32
  { 88,	4,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo26 },  // Inst #88 = ATOMIC_CMP_SWAP_I64
  { 89,	4,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo25 },  // Inst #89 = ATOMIC_CMP_SWAP_I8
  { 90,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo27 },  // Inst #90 = ATOMIC_LOAD_ADD_I16
  { 91,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo27 },  // Inst #91 = ATOMIC_LOAD_ADD_I32
  { 92,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo28 },  // Inst #92 = ATOMIC_LOAD_ADD_I64
  { 93,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo27 },  // Inst #93 = ATOMIC_LOAD_ADD_I8
  { 94,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo27 },  // Inst #94 = ATOMIC_LOAD_AND_I16
  { 95,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo27 },  // Inst #95 = ATOMIC_LOAD_AND_I32
  { 96,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo28 },  // Inst #96 = ATOMIC_LOAD_AND_I64
  { 97,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo27 },  // Inst #97 = ATOMIC_LOAD_AND_I8
  { 98,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo27 },  // Inst #98 = ATOMIC_LOAD_NAND_I16
  { 99,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo27 },  // Inst #99 = ATOMIC_LOAD_NAND_I32
  { 100,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo28 },  // Inst #100 = ATOMIC_LOAD_NAND_I64
  { 101,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo27 },  // Inst #101 = ATOMIC_LOAD_NAND_I8
  { 102,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo27 },  // Inst #102 = ATOMIC_LOAD_OR_I16
  { 103,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo27 },  // Inst #103 = ATOMIC_LOAD_OR_I32
  { 104,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo28 },  // Inst #104 = ATOMIC_LOAD_OR_I64
  { 105,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo27 },  // Inst #105 = ATOMIC_LOAD_OR_I8
  { 106,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo27 },  // Inst #106 = ATOMIC_LOAD_SUB_I16
  { 107,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo27 },  // Inst #107 = ATOMIC_LOAD_SUB_I32
  { 108,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo28 },  // Inst #108 = ATOMIC_LOAD_SUB_I64
  { 109,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo27 },  // Inst #109 = ATOMIC_LOAD_SUB_I8
  { 110,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo27 },  // Inst #110 = ATOMIC_LOAD_XOR_I16
  { 111,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo27 },  // Inst #111 = ATOMIC_LOAD_XOR_I32
  { 112,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo28 },  // Inst #112 = ATOMIC_LOAD_XOR_I64
  { 113,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo27 },  // Inst #113 = ATOMIC_LOAD_XOR_I8
  { 114,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo27 },  // Inst #114 = ATOMIC_SWAP_I16
  { 115,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo27 },  // Inst #115 = ATOMIC_SWAP_I32
  { 116,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo28 },  // Inst #116 = ATOMIC_SWAP_I64
  { 117,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo27 },  // Inst #117 = ATOMIC_SWAP_I8
  { 118,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #118 = AVER_S_B
  { 119,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #119 = AVER_S_D
  { 120,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #120 = AVER_S_H
  { 121,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #121 = AVER_S_W
  { 122,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #122 = AVER_U_B
  { 123,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #123 = AVER_U_D
  { 124,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #124 = AVER_U_H
  { 125,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #125 = AVER_U_W
  { 126,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #126 = AVE_S_B
  { 127,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #127 = AVE_S_D
  { 128,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #128 = AVE_S_H
  { 129,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #129 = AVE_S_W
  { 130,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #130 = AVE_U_B
  { 131,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #131 = AVE_U_D
  { 132,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #132 = AVE_U_H
  { 133,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #133 = AVE_U_W
  { 134,	2,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo29 },  // Inst #134 = AddiuRxImmX16
  { 135,	2,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo29 },  // Inst #135 = AddiuRxPcImmX16
  { 136,	3,	1,	4,	2,	0|(1<<MCID::Rematerializable), 0x0ULL, NULL, NULL, OperandInfo30 },  // Inst #136 = AddiuRxRxImm16
  { 137,	3,	1,	4,	4,	0|(1<<MCID::Rematerializable), 0x0ULL, NULL, NULL, OperandInfo30 },  // Inst #137 = AddiuRxRxImmX16
  { 138,	3,	1,	4,	4,	0, 0x0ULL, NULL, NULL, OperandInfo31 },  // Inst #138 = AddiuRxRyOffMemX16
  { 139,	1,	0,	4,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo5 },  // Inst #139 = AddiuSpImm16
  { 140,	1,	0,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo5 },  // Inst #140 = AddiuSpImmX16
  { 141,	3,	1,	4,	2,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x0ULL, NULL, NULL, OperandInfo32 },  // Inst #141 = AdduRxRyRz16
  { 142,	3,	1,	4,	2,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x0ULL, NULL, NULL, OperandInfo33 },  // Inst #142 = AndRxRxRy16
  { 143,	1,	0,	5,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, ImplicitList4, OperandInfo34 },  // Inst #143 = B
  { 144,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo24 },  // Inst #144 = BALIGN
  { 145,	1,	0,	5,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList5, OperandInfo34 },  // Inst #145 = BAL_BR
  { 146,	2,	0,	5,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x5ULL, NULL, ImplicitList4, OperandInfo35 },  // Inst #146 = BC1F
  { 147,	2,	0,	5,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x5ULL, NULL, ImplicitList4, OperandInfo35 },  // Inst #147 = BC1T
  { 148,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo16 },  // Inst #148 = BCLRI_B
  { 149,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo17 },  // Inst #149 = BCLRI_D
  { 150,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo18 },  // Inst #150 = BCLRI_H
  { 151,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo19 },  // Inst #151 = BCLRI_W
  { 152,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #152 = BCLR_B
  { 153,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #153 = BCLR_D
  { 154,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #154 = BCLR_H
  { 155,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #155 = BCLR_W
  { 156,	3,	0,	5,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, ImplicitList4, OperandInfo36 },  // Inst #156 = BEQ
  { 157,	3,	0,	5,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, ImplicitList4, OperandInfo37 },  // Inst #157 = BEQ64
  { 158,	2,	0,	5,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, ImplicitList4, OperandInfo38 },  // Inst #158 = BGEZ
  { 159,	2,	0,	5,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, ImplicitList4, OperandInfo39 },  // Inst #159 = BGEZ64
  { 160,	2,	0,	5,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, ImplicitList5, OperandInfo38 },  // Inst #160 = BGEZAL
  { 161,	2,	0,	5,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, ImplicitList4, OperandInfo38 },  // Inst #161 = BGTZ
  { 162,	2,	0,	5,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, ImplicitList4, OperandInfo39 },  // Inst #162 = BGTZ64
  { 163,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo16 },  // Inst #163 = BINSLI_B
  { 164,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo17 },  // Inst #164 = BINSLI_D
  { 165,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo18 },  // Inst #165 = BINSLI_H
  { 166,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo19 },  // Inst #166 = BINSLI_W
  { 167,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #167 = BINSL_B
  { 168,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #168 = BINSL_D
  { 169,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #169 = BINSL_H
  { 170,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #170 = BINSL_W
  { 171,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo16 },  // Inst #171 = BINSRI_B
  { 172,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo17 },  // Inst #172 = BINSRI_D
  { 173,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo18 },  // Inst #173 = BINSRI_H
  { 174,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo19 },  // Inst #174 = BINSRI_W
  { 175,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #175 = BINSR_B
  { 176,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #176 = BINSR_D
  { 177,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #177 = BINSR_H
  { 178,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #178 = BINSR_W
  { 179,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo9 },  // Inst #179 = BITREV
  { 180,	2,	0,	5,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, ImplicitList4, OperandInfo38 },  // Inst #180 = BLEZ
  { 181,	2,	0,	5,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, ImplicitList4, OperandInfo39 },  // Inst #181 = BLEZ64
  { 182,	2,	0,	5,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, ImplicitList4, OperandInfo38 },  // Inst #182 = BLTZ
  { 183,	2,	0,	5,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, ImplicitList4, OperandInfo39 },  // Inst #183 = BLTZ64
  { 184,	2,	0,	5,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, ImplicitList5, OperandInfo38 },  // Inst #184 = BLTZAL
  { 185,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo16 },  // Inst #185 = BMNZI_B
  { 186,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #186 = BMNZ_V
  { 187,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo16 },  // Inst #187 = BMZI_B
  { 188,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #188 = BMZ_V
  { 189,	3,	0,	5,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, ImplicitList4, OperandInfo36 },  // Inst #189 = BNE
  { 190,	3,	0,	5,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, ImplicitList4, OperandInfo37 },  // Inst #190 = BNE64
  { 191,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo16 },  // Inst #191 = BNEGI_B
  { 192,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo17 },  // Inst #192 = BNEGI_D
  { 193,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo18 },  // Inst #193 = BNEGI_H
  { 194,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo19 },  // Inst #194 = BNEGI_W
  { 195,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #195 = BNEG_B
  { 196,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #196 = BNEG_D
  { 197,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #197 = BNEG_H
  { 198,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #198 = BNEG_W
  { 199,	2,	0,	5,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList4, OperandInfo40 },  // Inst #199 = BNZ_B
  { 200,	2,	0,	5,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList4, OperandInfo41 },  // Inst #200 = BNZ_D
  { 201,	2,	0,	5,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList4, OperandInfo42 },  // Inst #201 = BNZ_H
  { 202,	2,	0,	5,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList4, OperandInfo40 },  // Inst #202 = BNZ_V
  { 203,	2,	0,	5,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList4, OperandInfo43 },  // Inst #203 = BNZ_W
  { 204,	1,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo34 },  // Inst #204 = BPOSGE32
  { 205,	1,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList6, NULL, OperandInfo44 },  // Inst #205 = BPOSGE32_PSEUDO
  { 206,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo7 },  // Inst #206 = BREAK
  { 207,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo16 },  // Inst #207 = BSELI_B
  { 208,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #208 = BSEL_V
  { 209,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo16 },  // Inst #209 = BSETI_B
  { 210,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo17 },  // Inst #210 = BSETI_D
  { 211,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo18 },  // Inst #211 = BSETI_H
  { 212,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo19 },  // Inst #212 = BSETI_W
  { 213,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #213 = BSET_B
  { 214,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #214 = BSET_D
  { 215,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #215 = BSET_H
  { 216,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #216 = BSET_W
  { 217,	2,	0,	5,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList4, OperandInfo40 },  // Inst #217 = BZ_B
  { 218,	2,	0,	5,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList4, OperandInfo41 },  // Inst #218 = BZ_D
  { 219,	2,	0,	5,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList4, OperandInfo42 },  // Inst #219 = BZ_H
  { 220,	2,	0,	5,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList4, OperandInfo40 },  // Inst #220 = BZ_V
  { 221,	2,	0,	5,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList4, OperandInfo43 },  // Inst #221 = BZ_W
  { 222,	2,	0,	4,	2,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo45 },  // Inst #222 = BeqzRxImm16
  { 223,	2,	0,	4,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x0ULL, NULL, NULL, OperandInfo45 },  // Inst #223 = BeqzRxImmX16
  { 224,	1,	0,	4,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, NULL, NULL, OperandInfo34 },  // Inst #224 = BimmX16
  { 225,	2,	0,	4,	2,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo45 },  // Inst #225 = BnezRxImm16
  { 226,	2,	0,	4,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x0ULL, NULL, NULL, OperandInfo45 },  // Inst #226 = BnezRxImmX16
  { 227,	0,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #227 = Break16
  { 228,	3,	0,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo46 },  // Inst #228 = BteqzT8CmpX16
  { 229,	3,	0,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo47 },  // Inst #229 = BteqzT8CmpiX16
  { 230,	3,	0,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo46 },  // Inst #230 = BteqzT8SltX16
  { 231,	3,	0,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo47 },  // Inst #231 = BteqzT8SltiX16
  { 232,	3,	0,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo47 },  // Inst #232 = BteqzT8SltiuX16
  { 233,	3,	0,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo46 },  // Inst #233 = BteqzT8SltuX16
  { 234,	1,	0,	4,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, NULL, OperandInfo5 },  // Inst #234 = BteqzX16
  { 235,	3,	0,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo46 },  // Inst #235 = BtnezT8CmpX16
  { 236,	3,	0,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo47 },  // Inst #236 = BtnezT8CmpiX16
  { 237,	3,	0,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo46 },  // Inst #237 = BtnezT8SltX16
  { 238,	3,	0,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo47 },  // Inst #238 = BtnezT8SltiX16
  { 239,	3,	0,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo47 },  // Inst #239 = BtnezT8SltiuX16
  { 240,	3,	0,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo46 },  // Inst #240 = BtnezT8SltuX16
  { 241,	1,	0,	4,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, NULL, OperandInfo5 },  // Inst #241 = BtnezX16
  { 242,	3,	1,	2,	4,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo48 },  // Inst #242 = BuildPairF64
  { 243,	3,	1,	2,	4,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo49 },  // Inst #243 = BuildPairF64_64
  { 244,	2,	1,	6,	4,	0, 0x4ULL, NULL, NULL, OperandInfo50 },  // Inst #244 = CEIL_L_D64
  { 245,	2,	1,	6,	4,	0, 0x4ULL, NULL, NULL, OperandInfo51 },  // Inst #245 = CEIL_L_S
  { 246,	2,	1,	6,	4,	0, 0x4ULL, NULL, NULL, OperandInfo52 },  // Inst #246 = CEIL_W_D32
  { 247,	2,	1,	6,	4,	0, 0x4ULL, NULL, NULL, OperandInfo53 },  // Inst #247 = CEIL_W_D64
  { 248,	2,	1,	6,	4,	0, 0x4ULL, NULL, NULL, OperandInfo54 },  // Inst #248 = CEIL_W_S
  { 249,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo16 },  // Inst #249 = CEQI_B
  { 250,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo17 },  // Inst #250 = CEQI_D
  { 251,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo18 },  // Inst #251 = CEQI_H
  { 252,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo19 },  // Inst #252 = CEQI_W
  { 253,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #253 = CEQ_B
  { 254,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #254 = CEQ_D
  { 255,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #255 = CEQ_H
  { 256,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #256 = CEQ_W
  { 257,	2,	1,	7,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo55 },  // Inst #257 = CFC1
  { 258,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo56 },  // Inst #258 = CFCMSA
  { 259,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo16 },  // Inst #259 = CLEI_S_B
  { 260,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo17 },  // Inst #260 = CLEI_S_D
  { 261,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo18 },  // Inst #261 = CLEI_S_H
  { 262,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo19 },  // Inst #262 = CLEI_S_W
  { 263,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo16 },  // Inst #263 = CLEI_U_B
  { 264,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo17 },  // Inst #264 = CLEI_U_D
  { 265,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo18 },  // Inst #265 = CLEI_U_H
  { 266,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo19 },  // Inst #266 = CLEI_U_W
  { 267,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #267 = CLE_S_B
  { 268,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #268 = CLE_S_D
  { 269,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #269 = CLE_S_H
  { 270,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #270 = CLE_S_W
  { 271,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #271 = CLE_U_B
  { 272,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #272 = CLE_U_D
  { 273,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #273 = CLE_U_H
  { 274,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #274 = CLE_U_W
  { 275,	2,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo9 },  // Inst #275 = CLO
  { 276,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo16 },  // Inst #276 = CLTI_S_B
  { 277,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo17 },  // Inst #277 = CLTI_S_D
  { 278,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo18 },  // Inst #278 = CLTI_S_H
  { 279,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo19 },  // Inst #279 = CLTI_S_W
  { 280,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo16 },  // Inst #280 = CLTI_U_B
  { 281,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo17 },  // Inst #281 = CLTI_U_D
  { 282,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo18 },  // Inst #282 = CLTI_U_H
  { 283,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo19 },  // Inst #283 = CLTI_U_W
  { 284,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #284 = CLT_S_B
  { 285,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #285 = CLT_S_D
  { 286,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #286 = CLT_S_H
  { 287,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #287 = CLT_S_W
  { 288,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #288 = CLT_U_B
  { 289,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #289 = CLT_U_D
  { 290,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #290 = CLT_U_H
  { 291,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #291 = CLT_U_W
  { 292,	2,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo9 },  // Inst #292 = CLZ
  { 293,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList8, OperandInfo57 },  // Inst #293 = CMPGDU_EQ_QB
  { 294,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList8, OperandInfo57 },  // Inst #294 = CMPGDU_LE_QB
  { 295,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList8, OperandInfo57 },  // Inst #295 = CMPGDU_LT_QB
  { 296,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo57 },  // Inst #296 = CMPGU_EQ_QB
  { 297,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo57 },  // Inst #297 = CMPGU_LE_QB
  { 298,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo57 },  // Inst #298 = CMPGU_LT_QB
  { 299,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList8, OperandInfo8 },  // Inst #299 = CMPU_EQ_QB
  { 300,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList8, OperandInfo8 },  // Inst #300 = CMPU_LE_QB
  { 301,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList8, OperandInfo8 },  // Inst #301 = CMPU_LT_QB
  { 302,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList8, OperandInfo8 },  // Inst #302 = CMP_EQ_PH
  { 303,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList8, OperandInfo8 },  // Inst #303 = CMP_LE_PH
  { 304,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList8, OperandInfo8 },  // Inst #304 = CMP_LT_PH
  { 305,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo58 },  // Inst #305 = COPY_S_B
  { 306,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo59 },  // Inst #306 = COPY_S_H
  { 307,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo60 },  // Inst #307 = COPY_S_W
  { 308,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo58 },  // Inst #308 = COPY_U_B
  { 309,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo59 },  // Inst #309 = COPY_U_H
  { 310,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo60 },  // Inst #310 = COPY_U_W
  { 311,	2,	1,	7,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo61 },  // Inst #311 = CTC1
  { 312,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo62 },  // Inst #312 = CTCMSA
  { 313,	2,	1,	6,	4,	0, 0x4ULL, NULL, NULL, OperandInfo63 },  // Inst #313 = CVT_D32_S
  { 314,	2,	1,	6,	4,	0, 0x4ULL, NULL, NULL, OperandInfo63 },  // Inst #314 = CVT_D32_W
  { 315,	2,	1,	6,	4,	0, 0x4ULL, NULL, NULL, OperandInfo50 },  // Inst #315 = CVT_D64_L
  { 316,	2,	1,	6,	4,	0, 0x4ULL, NULL, NULL, OperandInfo51 },  // Inst #316 = CVT_D64_S
  { 317,	2,	1,	6,	4,	0, 0x4ULL, NULL, NULL, OperandInfo51 },  // Inst #317 = CVT_D64_W
  { 318,	2,	1,	6,	4,	0, 0x4ULL, NULL, NULL, OperandInfo50 },  // Inst #318 = CVT_L_D64
  { 319,	2,	1,	6,	4,	0, 0x4ULL, NULL, NULL, OperandInfo51 },  // Inst #319 = CVT_L_S
  { 320,	2,	1,	6,	4,	0, 0x4ULL, NULL, NULL, OperandInfo52 },  // Inst #320 = CVT_S_D32
  { 321,	2,	1,	6,	4,	0, 0x4ULL, NULL, NULL, OperandInfo53 },  // Inst #321 = CVT_S_D64
  { 322,	2,	1,	6,	4,	0, 0x4ULL, NULL, NULL, OperandInfo53 },  // Inst #322 = CVT_S_L
  { 323,	2,	1,	6,	4,	0, 0x4ULL, NULL, NULL, OperandInfo54 },  // Inst #323 = CVT_S_W
  { 324,	2,	1,	6,	4,	0, 0x4ULL, NULL, NULL, OperandInfo52 },  // Inst #324 = CVT_W_D32
  { 325,	2,	1,	6,	4,	0, 0x4ULL, NULL, NULL, OperandInfo53 },  // Inst #325 = CVT_W_D64
  { 326,	2,	1,	6,	4,	0, 0x4ULL, NULL, NULL, OperandInfo54 },  // Inst #326 = CVT_W_S
  { 327,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo64 },  // Inst #327 = C_EQ_D32
  { 328,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo50 },  // Inst #328 = C_EQ_D64
  { 329,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo54 },  // Inst #329 = C_EQ_S
  { 330,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo64 },  // Inst #330 = C_F_D32
  { 331,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo50 },  // Inst #331 = C_F_D64
  { 332,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo54 },  // Inst #332 = C_F_S
  { 333,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo64 },  // Inst #333 = C_LE_D32
  { 334,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo50 },  // Inst #334 = C_LE_D64
  { 335,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo54 },  // Inst #335 = C_LE_S
  { 336,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo64 },  // Inst #336 = C_LT_D32
  { 337,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo50 },  // Inst #337 = C_LT_D64
  { 338,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo54 },  // Inst #338 = C_LT_S
  { 339,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo64 },  // Inst #339 = C_NGE_D32
  { 340,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo50 },  // Inst #340 = C_NGE_D64
  { 341,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo54 },  // Inst #341 = C_NGE_S
  { 342,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo64 },  // Inst #342 = C_NGLE_D32
  { 343,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo50 },  // Inst #343 = C_NGLE_D64
  { 344,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo54 },  // Inst #344 = C_NGLE_S
  { 345,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo64 },  // Inst #345 = C_NGL_D32
  { 346,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo50 },  // Inst #346 = C_NGL_D64
  { 347,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo54 },  // Inst #347 = C_NGL_S
  { 348,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo64 },  // Inst #348 = C_NGT_D32
  { 349,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo50 },  // Inst #349 = C_NGT_D64
  { 350,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo54 },  // Inst #350 = C_NGT_S
  { 351,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo64 },  // Inst #351 = C_OLE_D32
  { 352,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo50 },  // Inst #352 = C_OLE_D64
  { 353,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo54 },  // Inst #353 = C_OLE_S
  { 354,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo64 },  // Inst #354 = C_OLT_D32
  { 355,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo50 },  // Inst #355 = C_OLT_D64
  { 356,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo54 },  // Inst #356 = C_OLT_S
  { 357,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo64 },  // Inst #357 = C_SEQ_D32
  { 358,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo50 },  // Inst #358 = C_SEQ_D64
  { 359,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo54 },  // Inst #359 = C_SEQ_S
  { 360,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo64 },  // Inst #360 = C_SF_D32
  { 361,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo50 },  // Inst #361 = C_SF_D64
  { 362,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo54 },  // Inst #362 = C_SF_S
  { 363,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo64 },  // Inst #363 = C_UEQ_D32
  { 364,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo50 },  // Inst #364 = C_UEQ_D64
  { 365,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo54 },  // Inst #365 = C_UEQ_S
  { 366,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo64 },  // Inst #366 = C_ULE_D32
  { 367,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo50 },  // Inst #367 = C_ULE_D64
  { 368,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo54 },  // Inst #368 = C_ULE_S
  { 369,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo64 },  // Inst #369 = C_ULT_D32
  { 370,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo50 },  // Inst #370 = C_ULT_D64
  { 371,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo54 },  // Inst #371 = C_ULT_S
  { 372,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo64 },  // Inst #372 = C_UN_D32
  { 373,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo50 },  // Inst #373 = C_UN_D64
  { 374,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo54 },  // Inst #374 = C_UN_S
  { 375,	2,	0,	4,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList7, OperandInfo65 },  // Inst #375 = CmpRxRy16
  { 376,	2,	0,	4,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList7, OperandInfo29 },  // Inst #376 = CmpiRxImm16
  { 377,	2,	0,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList7, OperandInfo29 },  // Inst #377 = CmpiRxImmX16
  { 378,	1,	0,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #378 = Constant32
  { 379,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo22 },  // Inst #379 = DADD
  { 380,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo23 },  // Inst #380 = DADDi
  { 381,	3,	1,	1,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x2ULL, NULL, NULL, OperandInfo23 },  // Inst #381 = DADDiu
  { 382,	3,	1,	1,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo22 },  // Inst #382 = DADDu
  { 383,	2,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo66 },  // Inst #383 = DCLO
  { 384,	2,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo66 },  // Inst #384 = DCLZ
  { 385,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, 0 },  // Inst #385 = DERET
  { 386,	4,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo67 },  // Inst #386 = DEXT
  { 387,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo67 },  // Inst #387 = DEXTM
  { 388,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo67 },  // Inst #388 = DEXTU
  { 389,	1,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo44 },  // Inst #389 = DI
  { 390,	5,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo68 },  // Inst #390 = DINS
  { 391,	5,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo68 },  // Inst #391 = DINSM
  { 392,	5,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo68 },  // Inst #392 = DINSU
  { 393,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #393 = DIV_S_B
  { 394,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #394 = DIV_S_D
  { 395,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #395 = DIV_S_H
  { 396,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #396 = DIV_S_W
  { 397,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #397 = DIV_U_B
  { 398,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #398 = DIV_U_D
  { 399,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #399 = DIV_U_H
  { 400,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #400 = DIV_U_W
  { 401,	3,	3,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo23 },  // Inst #401 = DMFC0
  { 402,	2,	1,	9,	4,	0|(1<<MCID::Bitcast), 0x4ULL, NULL, NULL, OperandInfo69 },  // Inst #402 = DMFC1
  { 403,	3,	3,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo23 },  // Inst #403 = DMFC2
  { 404,	3,	3,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo23 },  // Inst #404 = DMTC0
  { 405,	2,	1,	9,	4,	0|(1<<MCID::Bitcast), 0x4ULL, NULL, NULL, OperandInfo70 },  // Inst #405 = DMTC1
  { 406,	3,	3,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo23 },  // Inst #406 = DMTC2
  { 407,	2,	0,	10,	4,	0|(1<<MCID::Commutable), 0x1ULL, NULL, ImplicitList9, OperandInfo66 },  // Inst #407 = DMULT
  { 408,	2,	0,	10,	4,	0|(1<<MCID::Commutable), 0x1ULL, NULL, ImplicitList9, OperandInfo66 },  // Inst #408 = DMULTu
  { 409,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #409 = DOTP_S_B
  { 410,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #410 = DOTP_S_D
  { 411,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #411 = DOTP_S_H
  { 412,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #412 = DOTP_S_W
  { 413,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #413 = DOTP_U_B
  { 414,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #414 = DOTP_U_D
  { 415,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #415 = DOTP_U_H
  { 416,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #416 = DOTP_U_W
  { 417,	4,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo71 },  // Inst #417 = DPADD_S_D
  { 418,	4,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo72 },  // Inst #418 = DPADD_S_H
  { 419,	4,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo73 },  // Inst #419 = DPADD_S_W
  { 420,	4,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo71 },  // Inst #420 = DPADD_U_D
  { 421,	4,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo72 },  // Inst #421 = DPADD_U_H
  { 422,	4,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo73 },  // Inst #422 = DPADD_U_W
  { 423,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList10, OperandInfo74 },  // Inst #423 = DPAQX_SA_W_PH
  { 424,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList10, OperandInfo74 },  // Inst #424 = DPAQX_S_W_PH
  { 425,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList10, OperandInfo74 },  // Inst #425 = DPAQ_SA_L_W
  { 426,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList10, OperandInfo74 },  // Inst #426 = DPAQ_S_W_PH
  { 427,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo74 },  // Inst #427 = DPAU_H_QBL
  { 428,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo74 },  // Inst #428 = DPAU_H_QBR
  { 429,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo74 },  // Inst #429 = DPAX_W_PH
  { 430,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo74 },  // Inst #430 = DPA_W_PH
  { 431,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList10, OperandInfo74 },  // Inst #431 = DPSQX_SA_W_PH
  { 432,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList10, OperandInfo74 },  // Inst #432 = DPSQX_S_W_PH
  { 433,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList10, OperandInfo74 },  // Inst #433 = DPSQ_SA_L_W
  { 434,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList10, OperandInfo74 },  // Inst #434 = DPSQ_S_W_PH
  { 435,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo71 },  // Inst #435 = DPSUB_S_D
  { 436,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo72 },  // Inst #436 = DPSUB_S_H
  { 437,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo73 },  // Inst #437 = DPSUB_S_W
  { 438,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo71 },  // Inst #438 = DPSUB_U_D
  { 439,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo72 },  // Inst #439 = DPSUB_U_H
  { 440,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo73 },  // Inst #440 = DPSUB_U_W
  { 441,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo74 },  // Inst #441 = DPSU_H_QBL
  { 442,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo74 },  // Inst #442 = DPSU_H_QBR
  { 443,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo74 },  // Inst #443 = DPSX_W_PH
  { 444,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo74 },  // Inst #444 = DPS_W_PH
  { 445,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo23 },  // Inst #445 = DROTR
  { 446,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo75 },  // Inst #446 = DROTRV
  { 447,	2,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo66 },  // Inst #447 = DSBH
  { 448,	2,	0,	11,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, ImplicitList9, OperandInfo66 },  // Inst #448 = DSDIV
  { 449,	2,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo66 },  // Inst #449 = DSHD
  { 450,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo23 },  // Inst #450 = DSLL
  { 451,	3,	1,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo23 },  // Inst #451 = DSLL32
  { 452,	2,	1,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo76 },  // Inst #452 = DSLL64_32
  { 453,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo75 },  // Inst #453 = DSLLV
  { 454,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo23 },  // Inst #454 = DSRA
  { 455,	3,	1,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo23 },  // Inst #455 = DSRA32
  { 456,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo75 },  // Inst #456 = DSRAV
  { 457,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo23 },  // Inst #457 = DSRL
  { 458,	3,	1,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo23 },  // Inst #458 = DSRL32
  { 459,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo75 },  // Inst #459 = DSRLV
  { 460,	3,	1,	1,	4,	0|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo22 },  // Inst #460 = DSUBu
  { 461,	2,	0,	11,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, ImplicitList9, OperandInfo66 },  // Inst #461 = DUDIV
  { 462,	2,	0,	4,	2,	0, 0x0ULL, NULL, ImplicitList11, OperandInfo65 },  // Inst #462 = DivRxRy16
  { 463,	2,	0,	4,	2,	0, 0x0ULL, NULL, ImplicitList11, OperandInfo65 },  // Inst #463 = DivuRxRy16
  { 464,	1,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo44 },  // Inst #464 = EI
  { 465,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, 0 },  // Inst #465 = ERET
  { 466,	4,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo77 },  // Inst #466 = EXT
  { 467,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList6, ImplicitList12, OperandInfo78 },  // Inst #467 = EXTP
  { 468,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList6, ImplicitList13, OperandInfo78 },  // Inst #468 = EXTPDP
  { 469,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList6, ImplicitList13, OperandInfo79 },  // Inst #469 = EXTPDPV
  { 470,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList6, ImplicitList12, OperandInfo79 },  // Inst #470 = EXTPV
  { 471,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList14, OperandInfo79 },  // Inst #471 = EXTRV_RS_W
  { 472,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList14, OperandInfo79 },  // Inst #472 = EXTRV_R_W
  { 473,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList14, OperandInfo79 },  // Inst #473 = EXTRV_S_H
  { 474,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList14, OperandInfo79 },  // Inst #474 = EXTRV_W
  { 475,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList14, OperandInfo78 },  // Inst #475 = EXTR_RS_W
  { 476,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList14, OperandInfo78 },  // Inst #476 = EXTR_R_W
  { 477,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList14, OperandInfo78 },  // Inst #477 = EXTR_S_H
  { 478,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList14, OperandInfo78 },  // Inst #478 = EXTR_W
  { 479,	3,	1,	2,	4,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo80 },  // Inst #479 = ExtractElementF64
  { 480,	3,	1,	2,	4,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo81 },  // Inst #480 = ExtractElementF64_64
  { 481,	2,	1,	6,	4,	0, 0x4ULL, NULL, NULL, OperandInfo64 },  // Inst #481 = FABS_D32
  { 482,	2,	1,	6,	4,	0, 0x4ULL, NULL, NULL, OperandInfo50 },  // Inst #482 = FABS_D64
  { 483,	2,	1,	6,	4,	0, 0x4ULL, NULL, NULL, OperandInfo54 },  // Inst #483 = FABS_S
  { 484,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #484 = FADD_D
  { 485,	3,	1,	12,	4,	0|(1<<MCID::Commutable), 0x4ULL, NULL, NULL, OperandInfo82 },  // Inst #485 = FADD_D32
  { 486,	3,	1,	12,	4,	0|(1<<MCID::Commutable), 0x4ULL, NULL, NULL, OperandInfo83 },  // Inst #486 = FADD_D64
  { 487,	3,	1,	12,	4,	0|(1<<MCID::Commutable), 0x4ULL, NULL, NULL, OperandInfo84 },  // Inst #487 = FADD_S
  { 488,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #488 = FADD_W
  { 489,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #489 = FCAF_D
  { 490,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #490 = FCAF_W
  { 491,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #491 = FCEQ_D
  { 492,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #492 = FCEQ_W
  { 493,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo85 },  // Inst #493 = FCLASS_D
  { 494,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo86 },  // Inst #494 = FCLASS_W
  { 495,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #495 = FCLE_D
  { 496,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #496 = FCLE_W
  { 497,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #497 = FCLT_D
  { 498,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #498 = FCLT_W
  { 499,	3,	0,	8,	4,	0, 0x4ULL, NULL, ImplicitList15, OperandInfo87 },  // Inst #499 = FCMP_D32
  { 500,	3,	0,	8,	4,	0, 0x4ULL, NULL, ImplicitList15, OperandInfo88 },  // Inst #500 = FCMP_D64
  { 501,	3,	0,	8,	4,	0, 0x4ULL, NULL, ImplicitList15, OperandInfo89 },  // Inst #501 = FCMP_S32
  { 502,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #502 = FCNE_D
  { 503,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #503 = FCNE_W
  { 504,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #504 = FCOR_D
  { 505,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #505 = FCOR_W
  { 506,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #506 = FCUEQ_D
  { 507,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #507 = FCUEQ_W
  { 508,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #508 = FCULE_D
  { 509,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #509 = FCULE_W
  { 510,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #510 = FCULT_D
  { 511,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #511 = FCULT_W
  { 512,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #512 = FCUNE_D
  { 513,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #513 = FCUNE_W
  { 514,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #514 = FCUN_D
  { 515,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #515 = FCUN_W
  { 516,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #516 = FDIV_D
  { 517,	3,	1,	13,	4,	0, 0x4ULL, NULL, NULL, OperandInfo82 },  // Inst #517 = FDIV_D32
  { 518,	3,	1,	13,	4,	0, 0x4ULL, NULL, NULL, OperandInfo83 },  // Inst #518 = FDIV_D64
  { 519,	3,	1,	14,	4,	0, 0x4ULL, NULL, NULL, OperandInfo84 },  // Inst #519 = FDIV_S
  { 520,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #520 = FDIV_W
  { 521,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo90 },  // Inst #521 = FEXDO_H
  { 522,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo91 },  // Inst #522 = FEXDO_W
  { 523,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #523 = FEXP2_D
  { 524,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #524 = FEXP2_W
  { 525,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo92 },  // Inst #525 = FEXUPL_D
  { 526,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo93 },  // Inst #526 = FEXUPL_W
  { 527,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo92 },  // Inst #527 = FEXUPR_D
  { 528,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo93 },  // Inst #528 = FEXUPR_W
  { 529,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo85 },  // Inst #529 = FFINT_S_D
  { 530,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo86 },  // Inst #530 = FFINT_S_W
  { 531,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo85 },  // Inst #531 = FFINT_U_D
  { 532,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo86 },  // Inst #532 = FFINT_U_W
  { 533,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo92 },  // Inst #533 = FFQL_D
  { 534,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo93 },  // Inst #534 = FFQL_W
  { 535,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo92 },  // Inst #535 = FFQR_D
  { 536,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo93 },  // Inst #536 = FFQR_W
  { 537,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo94 },  // Inst #537 = FILL_B
  { 538,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo95 },  // Inst #538 = FILL_H
  { 539,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo96 },  // Inst #539 = FILL_W
  { 540,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo85 },  // Inst #540 = FLOG2_D
  { 541,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo86 },  // Inst #541 = FLOG2_W
  { 542,	2,	1,	6,	4,	0, 0x4ULL, NULL, NULL, OperandInfo50 },  // Inst #542 = FLOOR_L_D64
  { 543,	2,	1,	6,	4,	0, 0x4ULL, NULL, NULL, OperandInfo51 },  // Inst #543 = FLOOR_L_S
  { 544,	2,	1,	6,	4,	0, 0x4ULL, NULL, NULL, OperandInfo52 },  // Inst #544 = FLOOR_W_D32
  { 545,	2,	1,	6,	4,	0, 0x4ULL, NULL, NULL, OperandInfo53 },  // Inst #545 = FLOOR_W_D64
  { 546,	2,	1,	6,	4,	0, 0x4ULL, NULL, NULL, OperandInfo54 },  // Inst #546 = FLOOR_W_S
  { 547,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo97 },  // Inst #547 = FMADD_D
  { 548,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo98 },  // Inst #548 = FMADD_W
  { 549,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #549 = FMAX_A_D
  { 550,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #550 = FMAX_A_W
  { 551,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #551 = FMAX_D
  { 552,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #552 = FMAX_W
  { 553,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #553 = FMIN_A_D
  { 554,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #554 = FMIN_A_W
  { 555,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #555 = FMIN_D
  { 556,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #556 = FMIN_W
  { 557,	2,	1,	7,	4,	0, 0x4ULL, NULL, NULL, OperandInfo64 },  // Inst #557 = FMOV_D32
  { 558,	2,	1,	7,	4,	0, 0x4ULL, NULL, NULL, OperandInfo50 },  // Inst #558 = FMOV_D64
  { 559,	2,	1,	7,	4,	0, 0x4ULL, NULL, NULL, OperandInfo54 },  // Inst #559 = FMOV_S
  { 560,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo97 },  // Inst #560 = FMSUB_D
  { 561,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo98 },  // Inst #561 = FMSUB_W
  { 562,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #562 = FMUL_D
  { 563,	3,	1,	15,	4,	0|(1<<MCID::Commutable), 0x4ULL, NULL, NULL, OperandInfo82 },  // Inst #563 = FMUL_D32
  { 564,	3,	1,	15,	4,	0|(1<<MCID::Commutable), 0x4ULL, NULL, NULL, OperandInfo83 },  // Inst #564 = FMUL_D64
  { 565,	3,	1,	16,	4,	0|(1<<MCID::Commutable), 0x4ULL, NULL, NULL, OperandInfo84 },  // Inst #565 = FMUL_S
  { 566,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #566 = FMUL_W
  { 567,	2,	1,	6,	4,	0, 0x4ULL, NULL, NULL, OperandInfo64 },  // Inst #567 = FNEG_D32
  { 568,	2,	1,	6,	4,	0, 0x4ULL, NULL, NULL, OperandInfo50 },  // Inst #568 = FNEG_D64
  { 569,	2,	1,	6,	4,	0, 0x4ULL, NULL, NULL, OperandInfo54 },  // Inst #569 = FNEG_S
  { 570,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo85 },  // Inst #570 = FRCP_D
  { 571,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo86 },  // Inst #571 = FRCP_W
  { 572,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo85 },  // Inst #572 = FRINT_D
  { 573,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo86 },  // Inst #573 = FRINT_W
  { 574,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo85 },  // Inst #574 = FRSQRT_D
  { 575,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo86 },  // Inst #575 = FRSQRT_W
  { 576,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #576 = FSAF_D
  { 577,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #577 = FSAF_W
  { 578,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #578 = FSEQ_D
  { 579,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #579 = FSEQ_W
  { 580,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #580 = FSLE_D
  { 581,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #581 = FSLE_W
  { 582,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #582 = FSLT_D
  { 583,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #583 = FSLT_W
  { 584,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #584 = FSNE_D
  { 585,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #585 = FSNE_W
  { 586,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #586 = FSOR_D
  { 587,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #587 = FSOR_W
  { 588,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo85 },  // Inst #588 = FSQRT_D
  { 589,	2,	1,	17,	4,	0, 0x4ULL, NULL, NULL, OperandInfo64 },  // Inst #589 = FSQRT_D32
  { 590,	2,	1,	17,	4,	0, 0x4ULL, NULL, NULL, OperandInfo50 },  // Inst #590 = FSQRT_D64
  { 591,	2,	1,	18,	4,	0, 0x4ULL, NULL, NULL, OperandInfo54 },  // Inst #591 = FSQRT_S
  { 592,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo86 },  // Inst #592 = FSQRT_W
  { 593,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #593 = FSUB_D
  { 594,	3,	1,	12,	4,	0, 0x4ULL, NULL, NULL, OperandInfo82 },  // Inst #594 = FSUB_D32
  { 595,	3,	1,	12,	4,	0, 0x4ULL, NULL, NULL, OperandInfo83 },  // Inst #595 = FSUB_D64
  { 596,	3,	1,	12,	4,	0, 0x4ULL, NULL, NULL, OperandInfo84 },  // Inst #596 = FSUB_S
  { 597,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #597 = FSUB_W
  { 598,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #598 = FSUEQ_D
  { 599,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #599 = FSUEQ_W
  { 600,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #600 = FSULE_D
  { 601,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #601 = FSULE_W
  { 602,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #602 = FSULT_D
  { 603,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #603 = FSULT_W
  { 604,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #604 = FSUNE_D
  { 605,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #605 = FSUNE_W
  { 606,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #606 = FSUN_D
  { 607,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #607 = FSUN_W
  { 608,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo85 },  // Inst #608 = FTINT_S_D
  { 609,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo86 },  // Inst #609 = FTINT_S_W
  { 610,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo85 },  // Inst #610 = FTINT_U_D
  { 611,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo86 },  // Inst #611 = FTINT_U_W
  { 612,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo90 },  // Inst #612 = FTQ_H
  { 613,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo91 },  // Inst #613 = FTQ_W
  { 614,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo85 },  // Inst #614 = FTRUNC_S_D
  { 615,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo86 },  // Inst #615 = FTRUNC_S_W
  { 616,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo85 },  // Inst #616 = FTRUNC_U_D
  { 617,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo86 },  // Inst #617 = FTRUNC_U_W
  { 618,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo99 },  // Inst #618 = HADD_S_D
  { 619,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo100 },  // Inst #619 = HADD_S_H
  { 620,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo101 },  // Inst #620 = HADD_S_W
  { 621,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo99 },  // Inst #621 = HADD_U_D
  { 622,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo100 },  // Inst #622 = HADD_U_H
  { 623,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo101 },  // Inst #623 = HADD_U_W
  { 624,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo99 },  // Inst #624 = HSUB_S_D
  { 625,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo100 },  // Inst #625 = HSUB_S_H
  { 626,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo101 },  // Inst #626 = HSUB_S_W
  { 627,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo99 },  // Inst #627 = HSUB_U_D
  { 628,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo100 },  // Inst #628 = HSUB_U_H
  { 629,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo101 },  // Inst #629 = HSUB_U_W
  { 630,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #630 = ILVEV_B
  { 631,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #631 = ILVEV_D
  { 632,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #632 = ILVEV_H
  { 633,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #633 = ILVEV_W
  { 634,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #634 = ILVL_B
  { 635,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #635 = ILVL_D
  { 636,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #636 = ILVL_H
  { 637,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #637 = ILVL_W
  { 638,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #638 = ILVOD_B
  { 639,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #639 = ILVOD_D
  { 640,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #640 = ILVOD_H
  { 641,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #641 = ILVOD_W
  { 642,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #642 = ILVR_B
  { 643,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #643 = ILVR_D
  { 644,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #644 = ILVR_H
  { 645,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #645 = ILVR_W
  { 646,	5,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo102 },  // Inst #646 = INS
  { 647,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo103 },  // Inst #647 = INSERT_B
  { 648,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo104 },  // Inst #648 = INSERT_H
  { 649,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo105 },  // Inst #649 = INSERT_W
  { 650,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, ImplicitList16, NULL, OperandInfo106 },  // Inst #650 = INSV
  { 651,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo107 },  // Inst #651 = INSVE_B
  { 652,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo108 },  // Inst #652 = INSVE_D
  { 653,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo109 },  // Inst #653 = INSVE_H
  { 654,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo110 },  // Inst #654 = INSVE_W
  { 655,	1,	0,	5,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x3ULL, NULL, ImplicitList4, OperandInfo5 },  // Inst #655 = J
  { 656,	1,	0,	5,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call), 0x3ULL, NULL, ImplicitList5, OperandInfo5 },  // Inst #656 = JAL
  { 657,	2,	1,	5,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, ImplicitList5, OperandInfo9 },  // Inst #657 = JALR
  { 658,	2,	1,	5,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, ImplicitList5, OperandInfo66 },  // Inst #658 = JALR64
  { 659,	1,	0,	5,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::DelaySlot)|(1<<MCID::Call), 0x0ULL, NULL, ImplicitList5, OperandInfo111 },  // Inst #659 = JALR64Pseudo
  { 660,	1,	0,	5,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::DelaySlot)|(1<<MCID::Call), 0x0ULL, NULL, ImplicitList5, OperandInfo44 },  // Inst #660 = JALRPseudo
  { 661,	1,	0,	5,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x1ULL, NULL, NULL, OperandInfo44 },  // Inst #661 = JR
  { 662,	1,	0,	5,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x1ULL, NULL, NULL, OperandInfo111 },  // Inst #662 = JR64
  { 663,	1,	0,	4,	4,	0|(1<<MCID::Call), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #663 = Jal16
  { 664,	0,	0,	4,	2,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #664 = JrRa16
  { 665,	0,	0,	4,	2,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #665 = JrcRa16
  { 666,	1,	0,	4,	2,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, NULL, NULL, OperandInfo112 },  // Inst #666 = JrcRx16
  { 667,	1,	0,	5,	2,	0|(1<<MCID::Call), 0x0ULL, NULL, NULL, OperandInfo112 },  // Inst #667 = JumpLinkReg16
  { 668,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo113 },  // Inst #668 = LB
  { 669,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo114 },  // Inst #669 = LB64
  { 670,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, NULL, NULL, OperandInfo115 },  // Inst #670 = LBUX
  { 671,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo113 },  // Inst #671 = LB_MM
  { 672,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo113 },  // Inst #672 = LBu
  { 673,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo114 },  // Inst #673 = LBu64
  { 674,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo113 },  // Inst #674 = LBu_MM
  { 675,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo114 },  // Inst #675 = LD
  { 676,	3,	1,	19,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo116 },  // Inst #676 = LDC1
  { 677,	3,	1,	19,	4,	0|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo117 },  // Inst #677 = LDC164
  { 678,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo118 },  // Inst #678 = LDI_B
  { 679,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo119 },  // Inst #679 = LDI_H
  { 680,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo120 },  // Inst #680 = LDI_W
  { 681,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo121 },  // Inst #681 = LDL
  { 682,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo121 },  // Inst #682 = LDR
  { 683,	3,	1,	19,	4,	0|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo122 },  // Inst #683 = LDXC1
  { 684,	3,	1,	19,	4,	0|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo123 },  // Inst #684 = LDXC164
  { 685,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, NULL, NULL, OperandInfo124 },  // Inst #685 = LDX_B
  { 686,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, NULL, NULL, OperandInfo125 },  // Inst #686 = LDX_D
  { 687,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, NULL, NULL, OperandInfo126 },  // Inst #687 = LDX_H
  { 688,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, NULL, NULL, OperandInfo127 },  // Inst #688 = LDX_W
  { 689,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, NULL, NULL, OperandInfo124 },  // Inst #689 = LD_B
  { 690,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, NULL, NULL, OperandInfo125 },  // Inst #690 = LD_D
  { 691,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, NULL, NULL, OperandInfo126 },  // Inst #691 = LD_H
  { 692,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, NULL, NULL, OperandInfo127 },  // Inst #692 = LD_W
  { 693,	3,	1,	0,	4,	0, 0x2ULL, NULL, NULL, OperandInfo113 },  // Inst #693 = LEA_ADDiu
  { 694,	3,	1,	0,	4,	0, 0x2ULL, NULL, NULL, OperandInfo114 },  // Inst #694 = LEA_ADDiu64
  { 695,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo113 },  // Inst #695 = LH
  { 696,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo114 },  // Inst #696 = LH64
  { 697,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, NULL, NULL, OperandInfo115 },  // Inst #697 = LHX
  { 698,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo113 },  // Inst #698 = LH_MM
  { 699,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo113 },  // Inst #699 = LHu
  { 700,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo114 },  // Inst #700 = LHu64
  { 701,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo113 },  // Inst #701 = LHu_MM
  { 702,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo113 },  // Inst #702 = LL
  { 703,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo114 },  // Inst #703 = LLD
  { 704,	3,	1,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo128 },  // Inst #704 = LOAD_ACC128
  { 705,	3,	1,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo129 },  // Inst #705 = LOAD_ACC64
  { 706,	3,	1,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo130 },  // Inst #706 = LOAD_ACC64DSP
  { 707,	3,	1,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo131 },  // Inst #707 = LOAD_CCOND_DSP
  { 708,	3,	1,	19,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo122 },  // Inst #708 = LUXC1
  { 709,	3,	1,	19,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo123 },  // Inst #709 = LUXC164
  { 710,	2,	1,	1,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x2ULL, NULL, NULL, OperandInfo132 },  // Inst #710 = LUi
  { 711,	2,	1,	1,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x2ULL, NULL, NULL, OperandInfo133 },  // Inst #711 = LUi64
  { 712,	2,	1,	1,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x2ULL, NULL, NULL, OperandInfo132 },  // Inst #712 = LUi_MM
  { 713,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo113 },  // Inst #713 = LW
  { 714,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo114 },  // Inst #714 = LW64
  { 715,	3,	1,	19,	4,	0|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo134 },  // Inst #715 = LWC1
  { 716,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo135 },  // Inst #716 = LWL
  { 717,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo121 },  // Inst #717 = LWL64
  { 718,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo136 },  // Inst #718 = LWL_MM
  { 719,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo135 },  // Inst #719 = LWR
  { 720,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo121 },  // Inst #720 = LWR64
  { 721,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo136 },  // Inst #721 = LWR_MM
  { 722,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, NULL, NULL, OperandInfo115 },  // Inst #722 = LWX
  { 723,	3,	1,	19,	4,	0|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo137 },  // Inst #723 = LWXC1
  { 724,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo113 },  // Inst #724 = LW_MM
  { 725,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo114 },  // Inst #725 = LWu
  { 726,	4,	1,	20,	4,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo138 },  // Inst #726 = LbRxRyOffMemX16
  { 727,	4,	1,	20,	4,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo138 },  // Inst #727 = LbuRxRyOffMemX16
  { 728,	4,	1,	20,	4,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo138 },  // Inst #728 = LhRxRyOffMemX16
  { 729,	4,	1,	20,	4,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo138 },  // Inst #729 = LhuRxRyOffMemX16
  { 730,	2,	1,	4,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo29 },  // Inst #730 = LiRxImm16
  { 731,	2,	1,	4,	4,	0, 0x0ULL, NULL, NULL, OperandInfo29 },  // Inst #731 = LiRxImmX16
  { 732,	2,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo132 },  // Inst #732 = LoadAddr32Imm
  { 733,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo113 },  // Inst #733 = LoadAddr32Reg
  { 734,	2,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo132 },  // Inst #734 = LoadImm32Reg
  { 735,	2,	1,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo29 },  // Inst #735 = LwConstant32
  { 736,	4,	1,	20,	4,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo138 },  // Inst #736 = LwRxRyOffMemX16
  { 737,	3,	1,	20,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, NULL, OperandInfo139 },  // Inst #737 = LwRxSpImmX16
  { 738,	2,	0,	10,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList11, ImplicitList11, OperandInfo9 },  // Inst #738 = MADD
  { 739,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo140 },  // Inst #739 = MADDR_Q_H
  { 740,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo98 },  // Inst #740 = MADDR_Q_W
  { 741,	2,	0,	10,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList11, ImplicitList11, OperandInfo9 },  // Inst #741 = MADDU
  { 742,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo74 },  // Inst #742 = MADDU_DSP
  { 743,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo141 },  // Inst #743 = MADDV_B
  { 744,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo97 },  // Inst #744 = MADDV_D
  { 745,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo140 },  // Inst #745 = MADDV_H
  { 746,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo98 },  // Inst #746 = MADDV_W
  { 747,	4,	1,	15,	4,	0, 0x4ULL, NULL, NULL, OperandInfo142 },  // Inst #747 = MADD_D32
  { 748,	4,	1,	15,	4,	0, 0x4ULL, NULL, NULL, OperandInfo143 },  // Inst #748 = MADD_D64
  { 749,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo74 },  // Inst #749 = MADD_DSP
  { 750,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo140 },  // Inst #750 = MADD_Q_H
  { 751,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo98 },  // Inst #751 = MADD_Q_W
  { 752,	4,	1,	16,	4,	0, 0x4ULL, NULL, NULL, OperandInfo144 },  // Inst #752 = MADD_S
  { 753,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList10, OperandInfo74 },  // Inst #753 = MAQ_SA_W_PHL
  { 754,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList10, OperandInfo74 },  // Inst #754 = MAQ_SA_W_PHR
  { 755,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList10, OperandInfo74 },  // Inst #755 = MAQ_S_W_PHL
  { 756,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList10, OperandInfo74 },  // Inst #756 = MAQ_S_W_PHR
  { 757,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo16 },  // Inst #757 = MAXI_S_B
  { 758,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo17 },  // Inst #758 = MAXI_S_D
  { 759,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo18 },  // Inst #759 = MAXI_S_H
  { 760,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo19 },  // Inst #760 = MAXI_S_W
  { 761,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo16 },  // Inst #761 = MAXI_U_B
  { 762,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo17 },  // Inst #762 = MAXI_U_D
  { 763,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo18 },  // Inst #763 = MAXI_U_H
  { 764,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo19 },  // Inst #764 = MAXI_U_W
  { 765,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #765 = MAX_A_B
  { 766,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #766 = MAX_A_D
  { 767,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #767 = MAX_A_H
  { 768,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #768 = MAX_A_W
  { 769,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #769 = MAX_S_B
  { 770,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #770 = MAX_S_D
  { 771,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #771 = MAX_S_H
  { 772,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #772 = MAX_S_W
  { 773,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #773 = MAX_U_B
  { 774,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #774 = MAX_U_D
  { 775,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #775 = MAX_U_H
  { 776,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #776 = MAX_U_W
  { 777,	3,	3,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo20 },  // Inst #777 = MFC0
  { 778,	2,	1,	9,	4,	0|(1<<MCID::Bitcast), 0x4ULL, NULL, NULL, OperandInfo145 },  // Inst #778 = MFC1
  { 779,	3,	3,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo20 },  // Inst #779 = MFC2
  { 780,	2,	1,	9,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo146 },  // Inst #780 = MFHC1
  { 781,	1,	1,	21,	4,	0, 0x1ULL, ImplicitList17, NULL, OperandInfo44 },  // Inst #781 = MFHI
  { 782,	1,	1,	21,	4,	0, 0x1ULL, ImplicitList18, NULL, OperandInfo111 },  // Inst #782 = MFHI64
  { 783,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo147 },  // Inst #783 = MFHI_DSP
  { 784,	1,	1,	21,	4,	0, 0x1ULL, ImplicitList19, NULL, OperandInfo44 },  // Inst #784 = MFLO
  { 785,	1,	1,	21,	4,	0, 0x1ULL, ImplicitList20, NULL, OperandInfo111 },  // Inst #785 = MFLO64
  { 786,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo148 },  // Inst #786 = MFLO_DSP
  { 787,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo16 },  // Inst #787 = MINI_S_B
  { 788,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo17 },  // Inst #788 = MINI_S_D
  { 789,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo18 },  // Inst #789 = MINI_S_H
  { 790,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo19 },  // Inst #790 = MINI_S_W
  { 791,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo16 },  // Inst #791 = MINI_U_B
  { 792,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo17 },  // Inst #792 = MINI_U_D
  { 793,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo18 },  // Inst #793 = MINI_U_H
  { 794,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo19 },  // Inst #794 = MINI_U_W
  { 795,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #795 = MIN_A_B
  { 796,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #796 = MIN_A_D
  { 797,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #797 = MIN_A_H
  { 798,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #798 = MIN_A_W
  { 799,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #799 = MIN_S_B
  { 800,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #800 = MIN_S_D
  { 801,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #801 = MIN_S_H
  { 802,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #802 = MIN_S_W
  { 803,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #803 = MIN_U_B
  { 804,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #804 = MIN_U_D
  { 805,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #805 = MIN_U_H
  { 806,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #806 = MIN_U_W
  { 807,	2,	0,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, ImplicitList21, NULL, OperandInfo149 },  // Inst #807 = MIPSeh_return32
  { 808,	2,	0,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, ImplicitList21, NULL, OperandInfo150 },  // Inst #808 = MIPSeh_return64
  { 809,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo10 },  // Inst #809 = MODSUB
  { 810,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #810 = MOD_S_B
  { 811,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #811 = MOD_S_D
  { 812,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #812 = MOD_S_H
  { 813,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #813 = MOD_S_W
  { 814,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #814 = MOD_U_B
  { 815,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #815 = MOD_U_D
  { 816,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #816 = MOD_U_H
  { 817,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #817 = MOD_U_W
  { 818,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo151 },  // Inst #818 = MOVE_V
  { 819,	4,	1,	7,	4,	0, 0x4ULL, NULL, NULL, OperandInfo152 },  // Inst #819 = MOVF_D32
  { 820,	4,	1,	7,	4,	0, 0x4ULL, NULL, NULL, OperandInfo153 },  // Inst #820 = MOVF_D64
  { 821,	4,	1,	1,	4,	0, 0x4ULL, NULL, NULL, OperandInfo154 },  // Inst #821 = MOVF_I
  { 822,	4,	1,	1,	4,	0, 0x4ULL, NULL, NULL, OperandInfo155 },  // Inst #822 = MOVF_I64
  { 823,	4,	1,	7,	4,	0, 0x4ULL, NULL, NULL, OperandInfo156 },  // Inst #823 = MOVF_S
  { 824,	4,	1,	7,	4,	0, 0x4ULL, NULL, NULL, OperandInfo157 },  // Inst #824 = MOVN_I64_D64
  { 825,	4,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo158 },  // Inst #825 = MOVN_I64_I
  { 826,	4,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo159 },  // Inst #826 = MOVN_I64_I64
  { 827,	4,	1,	7,	4,	0, 0x4ULL, NULL, NULL, OperandInfo160 },  // Inst #827 = MOVN_I64_S
  { 828,	4,	1,	7,	4,	0, 0x4ULL, NULL, NULL, OperandInfo161 },  // Inst #828 = MOVN_I_D32
  { 829,	4,	1,	7,	4,	0, 0x4ULL, NULL, NULL, OperandInfo162 },  // Inst #829 = MOVN_I_D64
  { 830,	4,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo163 },  // Inst #830 = MOVN_I_I
  { 831,	4,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo164 },  // Inst #831 = MOVN_I_I64
  { 832,	4,	1,	7,	4,	0, 0x4ULL, NULL, NULL, OperandInfo165 },  // Inst #832 = MOVN_I_S
  { 833,	4,	1,	7,	4,	0, 0x4ULL, NULL, NULL, OperandInfo152 },  // Inst #833 = MOVT_D32
  { 834,	4,	1,	7,	4,	0, 0x4ULL, NULL, NULL, OperandInfo153 },  // Inst #834 = MOVT_D64
  { 835,	4,	1,	1,	4,	0, 0x4ULL, NULL, NULL, OperandInfo154 },  // Inst #835 = MOVT_I
  { 836,	4,	1,	1,	4,	0, 0x4ULL, NULL, NULL, OperandInfo155 },  // Inst #836 = MOVT_I64
  { 837,	4,	1,	7,	4,	0, 0x4ULL, NULL, NULL, OperandInfo156 },  // Inst #837 = MOVT_S
  { 838,	4,	1,	7,	4,	0, 0x4ULL, NULL, NULL, OperandInfo157 },  // Inst #838 = MOVZ_I64_D64
  { 839,	4,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo158 },  // Inst #839 = MOVZ_I64_I
  { 840,	4,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo159 },  // Inst #840 = MOVZ_I64_I64
  { 841,	4,	1,	7,	4,	0, 0x4ULL, NULL, NULL, OperandInfo160 },  // Inst #841 = MOVZ_I64_S
  { 842,	4,	1,	7,	4,	0, 0x4ULL, NULL, NULL, OperandInfo161 },  // Inst #842 = MOVZ_I_D32
  { 843,	4,	1,	7,	4,	0, 0x4ULL, NULL, NULL, OperandInfo162 },  // Inst #843 = MOVZ_I_D64
  { 844,	4,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo163 },  // Inst #844 = MOVZ_I_I
  { 845,	4,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo164 },  // Inst #845 = MOVZ_I_I64
  { 846,	4,	1,	7,	4,	0, 0x4ULL, NULL, NULL, OperandInfo165 },  // Inst #846 = MOVZ_I_S
  { 847,	2,	0,	10,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList11, ImplicitList11, OperandInfo9 },  // Inst #847 = MSUB
  { 848,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo140 },  // Inst #848 = MSUBR_Q_H
  { 849,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo98 },  // Inst #849 = MSUBR_Q_W
  { 850,	2,	0,	10,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList11, ImplicitList11, OperandInfo9 },  // Inst #850 = MSUBU
  { 851,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo74 },  // Inst #851 = MSUBU_DSP
  { 852,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo141 },  // Inst #852 = MSUBV_B
  { 853,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo97 },  // Inst #853 = MSUBV_D
  { 854,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo140 },  // Inst #854 = MSUBV_H
  { 855,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo98 },  // Inst #855 = MSUBV_W
  { 856,	4,	1,	15,	4,	0, 0x4ULL, NULL, NULL, OperandInfo142 },  // Inst #856 = MSUB_D32
  { 857,	4,	1,	15,	4,	0, 0x4ULL, NULL, NULL, OperandInfo143 },  // Inst #857 = MSUB_D64
  { 858,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo74 },  // Inst #858 = MSUB_DSP
  { 859,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo140 },  // Inst #859 = MSUB_Q_H
  { 860,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo98 },  // Inst #860 = MSUB_Q_W
  { 861,	4,	1,	16,	4,	0, 0x4ULL, NULL, NULL, OperandInfo144 },  // Inst #861 = MSUB_S
  { 862,	3,	3,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo20 },  // Inst #862 = MTC0
  { 863,	2,	1,	9,	4,	0|(1<<MCID::Bitcast), 0x4ULL, NULL, NULL, OperandInfo166 },  // Inst #863 = MTC1
  { 864,	3,	3,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo20 },  // Inst #864 = MTC2
  { 865,	2,	1,	9,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo167 },  // Inst #865 = MTHC1
  { 866,	1,	0,	21,	4,	0, 0x1ULL, NULL, ImplicitList17, OperandInfo44 },  // Inst #866 = MTHI
  { 867,	1,	0,	21,	4,	0, 0x1ULL, NULL, ImplicitList18, OperandInfo111 },  // Inst #867 = MTHI64
  { 868,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo168 },  // Inst #868 = MTHI_DSP
  { 869,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList6, OperandInfo169 },  // Inst #869 = MTHLIP
  { 870,	1,	0,	21,	4,	0, 0x1ULL, NULL, ImplicitList19, OperandInfo44 },  // Inst #870 = MTLO
  { 871,	1,	0,	21,	4,	0, 0x1ULL, NULL, ImplicitList20, OperandInfo111 },  // Inst #871 = MTLO64
  { 872,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo170 },  // Inst #872 = MTLO_DSP
  { 873,	3,	1,	22,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #873 = MUL
  { 874,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList22, OperandInfo57 },  // Inst #874 = MULEQ_S_W_PHL
  { 875,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList22, OperandInfo57 },  // Inst #875 = MULEQ_S_W_PHR
  { 876,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList22, OperandInfo11 },  // Inst #876 = MULEU_S_PH_QBL
  { 877,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList22, OperandInfo11 },  // Inst #877 = MULEU_S_PH_QBR
  { 878,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList22, OperandInfo11 },  // Inst #878 = MULQ_RS_PH
  { 879,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList22, OperandInfo10 },  // Inst #879 = MULQ_RS_W
  { 880,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList22, OperandInfo11 },  // Inst #880 = MULQ_S_PH
  { 881,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList22, OperandInfo10 },  // Inst #881 = MULQ_S_W
  { 882,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #882 = MULR_Q_H
  { 883,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #883 = MULR_Q_W
  { 884,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList10, OperandInfo74 },  // Inst #884 = MULSAQ_S_W_PH
  { 885,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo74 },  // Inst #885 = MULSA_W_PH
  { 886,	2,	0,	10,	4,	0|(1<<MCID::Commutable), 0x1ULL, NULL, ImplicitList11, OperandInfo9 },  // Inst #886 = MULT
  { 887,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo171 },  // Inst #887 = MULTU_DSP
  { 888,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo171 },  // Inst #888 = MULT_DSP
  { 889,	2,	0,	22,	4,	0|(1<<MCID::Commutable), 0x1ULL, NULL, ImplicitList11, OperandInfo9 },  // Inst #889 = MULT_MM
  { 890,	2,	0,	10,	4,	0|(1<<MCID::Commutable), 0x1ULL, NULL, ImplicitList11, OperandInfo9 },  // Inst #890 = MULTu
  { 891,	2,	0,	22,	4,	0|(1<<MCID::Commutable), 0x1ULL, NULL, ImplicitList11, OperandInfo9 },  // Inst #891 = MULTu_MM
  { 892,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #892 = MULV_B
  { 893,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #893 = MULV_D
  { 894,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #894 = MULV_H
  { 895,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #895 = MULV_W
  { 896,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #896 = MUL_MM
  { 897,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList22, OperandInfo11 },  // Inst #897 = MUL_PH
  { 898,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #898 = MUL_Q_H
  { 899,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #899 = MUL_Q_W
  { 900,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList22, OperandInfo11 },  // Inst #900 = MUL_S_PH
  { 901,	1,	1,	4,	2,	0, 0x0ULL, ImplicitList17, NULL, OperandInfo112 },  // Inst #901 = Mfhi16
  { 902,	1,	1,	4,	2,	0, 0x0ULL, ImplicitList19, NULL, OperandInfo112 },  // Inst #902 = Mflo16
  { 903,	2,	1,	4,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo172 },  // Inst #903 = Move32R16
  { 904,	2,	1,	4,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo173 },  // Inst #904 = MoveR3216
  { 905,	2,	0,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, NULL, ImplicitList11, OperandInfo65 },  // Inst #905 = MultRxRy16
  { 906,	3,	1,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, NULL, ImplicitList11, OperandInfo32 },  // Inst #906 = MultRxRyRz16
  { 907,	2,	0,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, NULL, ImplicitList11, OperandInfo65 },  // Inst #907 = MultuRxRy16
  { 908,	3,	1,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, NULL, ImplicitList11, OperandInfo32 },  // Inst #908 = MultuRxRyRz16
  { 909,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo151 },  // Inst #909 = NLOC_B
  { 910,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo85 },  // Inst #910 = NLOC_D
  { 911,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo174 },  // Inst #911 = NLOC_H
  { 912,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo86 },  // Inst #912 = NLOC_W
  { 913,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo151 },  // Inst #913 = NLZC_B
  { 914,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo85 },  // Inst #914 = NLZC_D
  { 915,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo174 },  // Inst #915 = NLZC_H
  { 916,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo86 },  // Inst #916 = NLZC_W
  { 917,	4,	1,	15,	4,	0, 0x4ULL, NULL, NULL, OperandInfo142 },  // Inst #917 = NMADD_D32
  { 918,	4,	1,	15,	4,	0, 0x4ULL, NULL, NULL, OperandInfo143 },  // Inst #918 = NMADD_D64
  { 919,	4,	1,	16,	4,	0, 0x4ULL, NULL, NULL, OperandInfo144 },  // Inst #919 = NMADD_S
  { 920,	4,	1,	15,	4,	0, 0x4ULL, NULL, NULL, OperandInfo142 },  // Inst #920 = NMSUB_D32
  { 921,	4,	1,	15,	4,	0, 0x4ULL, NULL, NULL, OperandInfo143 },  // Inst #921 = NMSUB_D64
  { 922,	4,	1,	16,	4,	0, 0x4ULL, NULL, NULL, OperandInfo144 },  // Inst #922 = NMSUB_S
  { 923,	0,	0,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #923 = NOP
  { 924,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #924 = NOR
  { 925,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x1ULL, NULL, NULL, OperandInfo22 },  // Inst #925 = NOR64
  { 926,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo16 },  // Inst #926 = NORI_B
  { 927,	3,	1,	1,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #927 = NOR_MM
  { 928,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #928 = NOR_V
  { 929,	2,	1,	4,	2,	0, 0x0ULL, NULL, NULL, OperandInfo65 },  // Inst #929 = NegRxRy16
  { 930,	2,	1,	4,	2,	0, 0x0ULL, NULL, NULL, OperandInfo65 },  // Inst #930 = NotRxRy16
  { 931,	3,	1,	3,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #931 = OR
  { 932,	3,	1,	1,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo22 },  // Inst #932 = OR64
  { 933,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo16 },  // Inst #933 = ORI_B
  { 934,	3,	1,	4,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #934 = OR_MM
  { 935,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #935 = OR_V
  { 936,	3,	1,	3,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, NULL, NULL, OperandInfo20 },  // Inst #936 = ORi
  { 937,	3,	1,	3,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, NULL, NULL, OperandInfo23 },  // Inst #937 = ORi64
  { 938,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo20 },  // Inst #938 = ORi_MM
  { 939,	3,	1,	4,	2,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x0ULL, NULL, NULL, OperandInfo33 },  // Inst #939 = OrRxRxRy16
  { 940,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo11 },  // Inst #940 = PACKRL_PH
  { 941,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #941 = PCKEV_B
  { 942,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #942 = PCKEV_D
  { 943,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #943 = PCKEV_H
  { 944,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #944 = PCKEV_W
  { 945,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #945 = PCKOD_B
  { 946,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #946 = PCKOD_D
  { 947,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #947 = PCKOD_H
  { 948,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #948 = PCKOD_W
  { 949,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo151 },  // Inst #949 = PCNT_B
  { 950,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo85 },  // Inst #950 = PCNT_D
  { 951,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo174 },  // Inst #951 = PCNT_H
  { 952,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo86 },  // Inst #952 = PCNT_W
  { 953,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, ImplicitList8, NULL, OperandInfo11 },  // Inst #953 = PICK_PH
  { 954,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, ImplicitList8, NULL, OperandInfo11 },  // Inst #954 = PICK_QB
  { 955,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo8 },  // Inst #955 = PRECEQU_PH_QBL
  { 956,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo8 },  // Inst #956 = PRECEQU_PH_QBLA
  { 957,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo8 },  // Inst #957 = PRECEQU_PH_QBR
  { 958,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo8 },  // Inst #958 = PRECEQU_PH_QBRA
  { 959,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo175 },  // Inst #959 = PRECEQ_W_PHL
  { 960,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo175 },  // Inst #960 = PRECEQ_W_PHR
  { 961,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo8 },  // Inst #961 = PRECEU_PH_QBL
  { 962,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo8 },  // Inst #962 = PRECEU_PH_QBLA
  { 963,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo8 },  // Inst #963 = PRECEU_PH_QBR
  { 964,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo8 },  // Inst #964 = PRECEU_PH_QBRA
  { 965,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList23, OperandInfo11 },  // Inst #965 = PRECRQU_S_QB_PH
  { 966,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo176 },  // Inst #966 = PRECRQ_PH_W
  { 967,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo11 },  // Inst #967 = PRECRQ_QB_PH
  { 968,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList23, OperandInfo176 },  // Inst #968 = PRECRQ_RS_PH_W
  { 969,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo11 },  // Inst #969 = PRECR_QB_PH
  { 970,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo177 },  // Inst #970 = PRECR_SRA_PH_W
  { 971,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo177 },  // Inst #971 = PRECR_SRA_R_PH_W
  { 972,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo24 },  // Inst #972 = PREPEND
  { 973,	3,	1,	2,	4,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo178 },  // Inst #973 = PseudoCMPU_EQ_QB
  { 974,	3,	1,	2,	4,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo178 },  // Inst #974 = PseudoCMPU_LE_QB
  { 975,	3,	1,	2,	4,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo178 },  // Inst #975 = PseudoCMPU_LT_QB
  { 976,	3,	1,	2,	4,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo178 },  // Inst #976 = PseudoCMP_EQ_PH
  { 977,	3,	1,	2,	4,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo178 },  // Inst #977 = PseudoCMP_LE_PH
  { 978,	3,	1,	2,	4,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo178 },  // Inst #978 = PseudoCMP_LT_PH
  { 979,	2,	1,	6,	4,	0|(1<<MCID::Pseudo), 0x4ULL, NULL, NULL, OperandInfo179 },  // Inst #979 = PseudoCVT_D32_W
  { 980,	2,	1,	6,	4,	0|(1<<MCID::Pseudo), 0x4ULL, NULL, NULL, OperandInfo70 },  // Inst #980 = PseudoCVT_D64_L
  { 981,	2,	1,	6,	4,	0|(1<<MCID::Pseudo), 0x4ULL, NULL, NULL, OperandInfo180 },  // Inst #981 = PseudoCVT_D64_W
  { 982,	2,	1,	6,	4,	0|(1<<MCID::Pseudo), 0x4ULL, NULL, NULL, OperandInfo70 },  // Inst #982 = PseudoCVT_S_L
  { 983,	2,	1,	6,	4,	0|(1<<MCID::Pseudo), 0x4ULL, NULL, NULL, OperandInfo166 },  // Inst #983 = PseudoCVT_S_W
  { 984,	3,	1,	10,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, NULL, NULL, OperandInfo181 },  // Inst #984 = PseudoDMULT
  { 985,	3,	1,	10,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, NULL, NULL, OperandInfo181 },  // Inst #985 = PseudoDMULTu
  { 986,	3,	1,	11,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo181 },  // Inst #986 = PseudoDSDIV
  { 987,	3,	1,	11,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo181 },  // Inst #987 = PseudoDUDIV
  { 988,	3,	1,	19,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo116 },  // Inst #988 = PseudoLDC1
  { 989,	4,	1,	10,	4,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo182 },  // Inst #989 = PseudoMADD
  { 990,	4,	1,	10,	4,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo182 },  // Inst #990 = PseudoMADDU
  { 991,	4,	1,	10,	4,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo182 },  // Inst #991 = PseudoMSUB
  { 992,	4,	1,	10,	4,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo182 },  // Inst #992 = PseudoMSUBU
  { 993,	3,	1,	10,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, NULL, NULL, OperandInfo183 },  // Inst #993 = PseudoMULT
  { 994,	3,	1,	10,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, NULL, NULL, OperandInfo183 },  // Inst #994 = PseudoMULTu
  { 995,	4,	1,	2,	4,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo184 },  // Inst #995 = PseudoPICK_PH
  { 996,	4,	1,	2,	4,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo184 },  // Inst #996 = PseudoPICK_QB
  { 997,	3,	0,	23,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo116 },  // Inst #997 = PseudoSDC1
  { 998,	3,	1,	11,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo183 },  // Inst #998 = PseudoSDIV
  { 999,	3,	1,	11,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo183 },  // Inst #999 = PseudoUDIV
  { 1000,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo175 },  // Inst #1000 = RADDU_W_QB
  { 1001,	2,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, NULL, NULL, OperandInfo132 },  // Inst #1001 = RDDSP
  { 1002,	2,	1,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo185 },  // Inst #1002 = RDHWR
  { 1003,	2,	1,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo186 },  // Inst #1003 = RDHWR64
  { 1004,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo187 },  // Inst #1004 = REPLV_PH
  { 1005,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo187 },  // Inst #1005 = REPLV_QB
  { 1006,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo188 },  // Inst #1006 = REPL_PH
  { 1007,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo188 },  // Inst #1007 = REPL_QB
  { 1008,	1,	0,	5,	4,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects)|(1<<MCID::ExtraSrcRegAllocReq), 0x1ULL, NULL, NULL, OperandInfo44 },  // Inst #1008 = RET
  { 1009,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo20 },  // Inst #1009 = ROTR
  { 1010,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #1010 = ROTRV
  { 1011,	3,	1,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #1011 = ROTRV_MM
  { 1012,	3,	1,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo20 },  // Inst #1012 = ROTR_MM
  { 1013,	2,	1,	6,	4,	0, 0x4ULL, NULL, NULL, OperandInfo50 },  // Inst #1013 = ROUND_L_D64
  { 1014,	2,	1,	6,	4,	0, 0x4ULL, NULL, NULL, OperandInfo51 },  // Inst #1014 = ROUND_L_S
  { 1015,	2,	1,	6,	4,	0, 0x4ULL, NULL, NULL, OperandInfo52 },  // Inst #1015 = ROUND_W_D32
  { 1016,	2,	1,	6,	4,	0, 0x4ULL, NULL, NULL, OperandInfo53 },  // Inst #1016 = ROUND_W_D64
  { 1017,	2,	1,	6,	4,	0, 0x4ULL, NULL, NULL, OperandInfo54 },  // Inst #1017 = ROUND_W_S
  { 1018,	1,	0,	20,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo5 },  // Inst #1018 = RestoreIncSpF16
  { 1019,	1,	0,	20,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList24, OperandInfo5 },  // Inst #1019 = RestoreRaF16
  { 1020,	0,	0,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x0ULL, NULL, NULL, 0 },  // Inst #1020 = RetRA
  { 1021,	0,	0,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::ExtraSrcRegAllocReq), 0x0ULL, NULL, NULL, 0 },  // Inst #1021 = RetRA16
  { 1022,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo16 },  // Inst #1022 = SAT_S_B
  { 1023,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo17 },  // Inst #1023 = SAT_S_D
  { 1024,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo18 },  // Inst #1024 = SAT_S_H
  { 1025,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo19 },  // Inst #1025 = SAT_S_W
  { 1026,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo16 },  // Inst #1026 = SAT_U_B
  { 1027,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo17 },  // Inst #1027 = SAT_U_D
  { 1028,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo18 },  // Inst #1028 = SAT_U_H
  { 1029,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo19 },  // Inst #1029 = SAT_U_W
  { 1030,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo113 },  // Inst #1030 = SB
  { 1031,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo114 },  // Inst #1031 = SB64
  { 1032,	3,	0,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo113 },  // Inst #1032 = SB_MM
  { 1033,	4,	1,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo189 },  // Inst #1033 = SC
  { 1034,	4,	1,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo190 },  // Inst #1034 = SCD
  { 1035,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo114 },  // Inst #1035 = SD
  { 1036,	3,	0,	23,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo116 },  // Inst #1036 = SDC1
  { 1037,	3,	0,	23,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo117 },  // Inst #1037 = SDC164
  { 1038,	2,	0,	11,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, ImplicitList11, OperandInfo9 },  // Inst #1038 = SDIV
  { 1039,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo114 },  // Inst #1039 = SDL
  { 1040,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo114 },  // Inst #1040 = SDR
  { 1041,	3,	0,	23,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo122 },  // Inst #1041 = SDXC1
  { 1042,	3,	0,	23,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo123 },  // Inst #1042 = SDXC164
  { 1043,	2,	1,	24,	4,	0, 0x1ULL, NULL, NULL, OperandInfo9 },  // Inst #1043 = SEB
  { 1044,	2,	1,	24,	4,	0, 0x1ULL, NULL, NULL, OperandInfo66 },  // Inst #1044 = SEB64
  { 1045,	2,	1,	24,	4,	0, 0x1ULL, NULL, NULL, OperandInfo9 },  // Inst #1045 = SEH
  { 1046,	2,	1,	24,	4,	0, 0x1ULL, NULL, NULL, OperandInfo66 },  // Inst #1046 = SEH64
  { 1047,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo113 },  // Inst #1047 = SH
  { 1048,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo114 },  // Inst #1048 = SH64
  { 1049,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo16 },  // Inst #1049 = SHF_B
  { 1050,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo18 },  // Inst #1050 = SHF_H
  { 1051,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo19 },  // Inst #1051 = SHF_W
  { 1052,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo191 },  // Inst #1052 = SHILO
  { 1053,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo169 },  // Inst #1053 = SHILOV
  { 1054,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList23, OperandInfo192 },  // Inst #1054 = SHLLV_PH
  { 1055,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList23, OperandInfo192 },  // Inst #1055 = SHLLV_QB
  { 1056,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList23, OperandInfo192 },  // Inst #1056 = SHLLV_S_PH
  { 1057,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList23, OperandInfo10 },  // Inst #1057 = SHLLV_S_W
  { 1058,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList23, OperandInfo193 },  // Inst #1058 = SHLL_PH
  { 1059,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList23, OperandInfo193 },  // Inst #1059 = SHLL_QB
  { 1060,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList23, OperandInfo193 },  // Inst #1060 = SHLL_S_PH
  { 1061,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList23, OperandInfo20 },  // Inst #1061 = SHLL_S_W
  { 1062,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo192 },  // Inst #1062 = SHRAV_PH
  { 1063,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo192 },  // Inst #1063 = SHRAV_QB
  { 1064,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo192 },  // Inst #1064 = SHRAV_R_PH
  { 1065,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo192 },  // Inst #1065 = SHRAV_R_QB
  { 1066,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo10 },  // Inst #1066 = SHRAV_R_W
  { 1067,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo193 },  // Inst #1067 = SHRA_PH
  { 1068,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo193 },  // Inst #1068 = SHRA_QB
  { 1069,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo193 },  // Inst #1069 = SHRA_R_PH
  { 1070,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo193 },  // Inst #1070 = SHRA_R_QB
  { 1071,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo20 },  // Inst #1071 = SHRA_R_W
  { 1072,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo192 },  // Inst #1072 = SHRLV_PH
  { 1073,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo192 },  // Inst #1073 = SHRLV_QB
  { 1074,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo193 },  // Inst #1074 = SHRL_PH
  { 1075,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo193 },  // Inst #1075 = SHRL_QB
  { 1076,	3,	0,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo113 },  // Inst #1076 = SH_MM
  { 1077,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo16 },  // Inst #1077 = SLDI_B
  { 1078,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo17 },  // Inst #1078 = SLDI_D
  { 1079,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo18 },  // Inst #1079 = SLDI_H
  { 1080,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo19 },  // Inst #1080 = SLDI_W
  { 1081,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #1081 = SLD_B
  { 1082,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #1082 = SLD_D
  { 1083,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #1083 = SLD_H
  { 1084,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #1084 = SLD_W
  { 1085,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo20 },  // Inst #1085 = SLL
  { 1086,	2,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo76 },  // Inst #1086 = SLL64_32
  { 1087,	2,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo150 },  // Inst #1087 = SLL64_64
  { 1088,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo16 },  // Inst #1088 = SLLI_B
  { 1089,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo17 },  // Inst #1089 = SLLI_D
  { 1090,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo18 },  // Inst #1090 = SLLI_H
  { 1091,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo19 },  // Inst #1091 = SLLI_W
  { 1092,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #1092 = SLLV
  { 1093,	3,	1,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #1093 = SLLV_MM
  { 1094,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #1094 = SLL_B
  { 1095,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #1095 = SLL_D
  { 1096,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #1096 = SLL_H
  { 1097,	3,	1,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo20 },  // Inst #1097 = SLL_MM
  { 1098,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #1098 = SLL_W
  { 1099,	3,	1,	25,	4,	0, 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #1099 = SLT
  { 1100,	3,	1,	25,	4,	0, 0x1ULL, NULL, NULL, OperandInfo194 },  // Inst #1100 = SLT64
  { 1101,	3,	1,	25,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #1101 = SLT_MM
  { 1102,	3,	1,	25,	4,	0, 0x2ULL, NULL, NULL, OperandInfo20 },  // Inst #1102 = SLTi
  { 1103,	3,	1,	25,	4,	0, 0x2ULL, NULL, NULL, OperandInfo195 },  // Inst #1103 = SLTi64
  { 1104,	3,	1,	25,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo20 },  // Inst #1104 = SLTi_MM
  { 1105,	3,	1,	25,	4,	0, 0x2ULL, NULL, NULL, OperandInfo20 },  // Inst #1105 = SLTiu
  { 1106,	3,	1,	25,	4,	0, 0x2ULL, NULL, NULL, OperandInfo195 },  // Inst #1106 = SLTiu64
  { 1107,	3,	1,	25,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo20 },  // Inst #1107 = SLTiu_MM
  { 1108,	3,	1,	25,	4,	0, 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #1108 = SLTu
  { 1109,	3,	1,	25,	4,	0, 0x1ULL, NULL, NULL, OperandInfo194 },  // Inst #1109 = SLTu64
  { 1110,	3,	1,	25,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #1110 = SLTu_MM
  { 1111,	2,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo196 },  // Inst #1111 = SNZ_B_PSEUDO
  { 1112,	2,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo197 },  // Inst #1112 = SNZ_D_PSEUDO
  { 1113,	2,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo198 },  // Inst #1113 = SNZ_H_PSEUDO
  { 1114,	2,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo196 },  // Inst #1114 = SNZ_V_PSEUDO
  { 1115,	2,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo199 },  // Inst #1115 = SNZ_W_PSEUDO
  { 1116,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo16 },  // Inst #1116 = SPLATI_B
  { 1117,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo17 },  // Inst #1117 = SPLATI_D
  { 1118,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo18 },  // Inst #1118 = SPLATI_H
  { 1119,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo19 },  // Inst #1119 = SPLATI_W
  { 1120,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo200 },  // Inst #1120 = SPLAT_B
  { 1121,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo201 },  // Inst #1121 = SPLAT_D
  { 1122,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo202 },  // Inst #1122 = SPLAT_H
  { 1123,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo203 },  // Inst #1123 = SPLAT_W
  { 1124,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo20 },  // Inst #1124 = SRA
  { 1125,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo16 },  // Inst #1125 = SRAI_B
  { 1126,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo17 },  // Inst #1126 = SRAI_D
  { 1127,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo18 },  // Inst #1127 = SRAI_H
  { 1128,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo19 },  // Inst #1128 = SRAI_W
  { 1129,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo16 },  // Inst #1129 = SRARI_B
  { 1130,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo17 },  // Inst #1130 = SRARI_D
  { 1131,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo18 },  // Inst #1131 = SRARI_H
  { 1132,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo19 },  // Inst #1132 = SRARI_W
  { 1133,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #1133 = SRAR_B
  { 1134,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #1134 = SRAR_D
  { 1135,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #1135 = SRAR_H
  { 1136,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #1136 = SRAR_W
  { 1137,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #1137 = SRAV
  { 1138,	3,	1,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #1138 = SRAV_MM
  { 1139,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #1139 = SRA_B
  { 1140,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #1140 = SRA_D
  { 1141,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #1141 = SRA_H
  { 1142,	3,	1,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo20 },  // Inst #1142 = SRA_MM
  { 1143,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #1143 = SRA_W
  { 1144,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo20 },  // Inst #1144 = SRL
  { 1145,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo16 },  // Inst #1145 = SRLI_B
  { 1146,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo17 },  // Inst #1146 = SRLI_D
  { 1147,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo18 },  // Inst #1147 = SRLI_H
  { 1148,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo19 },  // Inst #1148 = SRLI_W
  { 1149,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo16 },  // Inst #1149 = SRLRI_B
  { 1150,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo17 },  // Inst #1150 = SRLRI_D
  { 1151,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo18 },  // Inst #1151 = SRLRI_H
  { 1152,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo19 },  // Inst #1152 = SRLRI_W
  { 1153,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #1153 = SRLR_B
  { 1154,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #1154 = SRLR_D
  { 1155,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #1155 = SRLR_H
  { 1156,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #1156 = SRLR_W
  { 1157,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #1157 = SRLV
  { 1158,	3,	1,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #1158 = SRLV_MM
  { 1159,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #1159 = SRL_B
  { 1160,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #1160 = SRL_D
  { 1161,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #1161 = SRL_H
  { 1162,	3,	1,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo20 },  // Inst #1162 = SRL_MM
  { 1163,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #1163 = SRL_W
  { 1164,	3,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo128 },  // Inst #1164 = STORE_ACC128
  { 1165,	3,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo129 },  // Inst #1165 = STORE_ACC64
  { 1166,	3,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo130 },  // Inst #1166 = STORE_ACC64DSP
  { 1167,	3,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo131 },  // Inst #1167 = STORE_CCOND_DSP
  { 1168,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x6ULL, NULL, NULL, OperandInfo124 },  // Inst #1168 = STX_B
  { 1169,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x6ULL, NULL, NULL, OperandInfo125 },  // Inst #1169 = STX_D
  { 1170,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x6ULL, NULL, NULL, OperandInfo126 },  // Inst #1170 = STX_H
  { 1171,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x6ULL, NULL, NULL, OperandInfo127 },  // Inst #1171 = STX_W
  { 1172,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x6ULL, NULL, NULL, OperandInfo124 },  // Inst #1172 = ST_B
  { 1173,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x6ULL, NULL, NULL, OperandInfo125 },  // Inst #1173 = ST_D
  { 1174,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x6ULL, NULL, NULL, OperandInfo126 },  // Inst #1174 = ST_H
  { 1175,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x6ULL, NULL, NULL, OperandInfo127 },  // Inst #1175 = ST_W
  { 1176,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #1176 = SUB
  { 1177,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo11 },  // Inst #1177 = SUBQH_PH
  { 1178,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo11 },  // Inst #1178 = SUBQH_R_PH
  { 1179,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo10 },  // Inst #1179 = SUBQH_R_W
  { 1180,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo10 },  // Inst #1180 = SUBQH_W
  { 1181,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #1181 = SUBQ_PH
  { 1182,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #1182 = SUBQ_S_PH
  { 1183,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo10 },  // Inst #1183 = SUBQ_S_W
  { 1184,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #1184 = SUBSUS_U_B
  { 1185,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #1185 = SUBSUS_U_D
  { 1186,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #1186 = SUBSUS_U_H
  { 1187,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #1187 = SUBSUS_U_W
  { 1188,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #1188 = SUBSUU_S_B
  { 1189,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #1189 = SUBSUU_S_D
  { 1190,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #1190 = SUBSUU_S_H
  { 1191,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #1191 = SUBSUU_S_W
  { 1192,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #1192 = SUBS_S_B
  { 1193,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #1193 = SUBS_S_D
  { 1194,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #1194 = SUBS_S_H
  { 1195,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #1195 = SUBS_S_W
  { 1196,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #1196 = SUBS_U_B
  { 1197,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #1197 = SUBS_U_D
  { 1198,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #1198 = SUBS_U_H
  { 1199,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #1199 = SUBS_U_W
  { 1200,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo11 },  // Inst #1200 = SUBUH_QB
  { 1201,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo11 },  // Inst #1201 = SUBUH_R_QB
  { 1202,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #1202 = SUBU_PH
  { 1203,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #1203 = SUBU_QB
  { 1204,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #1204 = SUBU_S_PH
  { 1205,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #1205 = SUBU_S_QB
  { 1206,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo16 },  // Inst #1206 = SUBVI_B
  { 1207,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo17 },  // Inst #1207 = SUBVI_D
  { 1208,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo18 },  // Inst #1208 = SUBVI_H
  { 1209,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo19 },  // Inst #1209 = SUBVI_W
  { 1210,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #1210 = SUBV_B
  { 1211,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #1211 = SUBV_D
  { 1212,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #1212 = SUBV_H
  { 1213,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #1213 = SUBV_W
  { 1214,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #1214 = SUB_MM
  { 1215,	3,	1,	1,	4,	0|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #1215 = SUBu
  { 1216,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #1216 = SUBu_MM
  { 1217,	3,	0,	23,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo122 },  // Inst #1217 = SUXC1
  { 1218,	3,	0,	23,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo123 },  // Inst #1218 = SUXC164
  { 1219,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo113 },  // Inst #1219 = SW
  { 1220,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo114 },  // Inst #1220 = SW64
  { 1221,	3,	0,	23,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo134 },  // Inst #1221 = SWC1
  { 1222,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo113 },  // Inst #1222 = SWL
  { 1223,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo114 },  // Inst #1223 = SWL64
  { 1224,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo204 },  // Inst #1224 = SWL_MM
  { 1225,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo113 },  // Inst #1225 = SWR
  { 1226,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo114 },  // Inst #1226 = SWR64
  { 1227,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo204 },  // Inst #1227 = SWR_MM
  { 1228,	3,	0,	23,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo137 },  // Inst #1228 = SWXC1
  { 1229,	3,	0,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo113 },  // Inst #1229 = SW_MM
  { 1230,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo2 },  // Inst #1230 = SYNC
  { 1231,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo5 },  // Inst #1231 = SYSCALL
  { 1232,	2,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo196 },  // Inst #1232 = SZ_B_PSEUDO
  { 1233,	2,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo197 },  // Inst #1233 = SZ_D_PSEUDO
  { 1234,	2,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo198 },  // Inst #1234 = SZ_H_PSEUDO
  { 1235,	2,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo196 },  // Inst #1235 = SZ_V_PSEUDO
  { 1236,	2,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo199 },  // Inst #1236 = SZ_W_PSEUDO
  { 1237,	1,	0,	26,	2,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo5 },  // Inst #1237 = SaveDecSpF16
  { 1238,	1,	0,	26,	2,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList25, ImplicitList3, OperandInfo5 },  // Inst #1238 = SaveRaF16
  { 1239,	4,	0,	26,	4,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo138 },  // Inst #1239 = SbRxRyOffMemX16
  { 1240,	4,	1,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo205 },  // Inst #1240 = SelBeqZ
  { 1241,	4,	1,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo205 },  // Inst #1241 = SelBneZ
  { 1242,	5,	1,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo206 },  // Inst #1242 = SelTBteqZCmp
  { 1243,	5,	1,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo207 },  // Inst #1243 = SelTBteqZCmpi
  { 1244,	5,	1,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo206 },  // Inst #1244 = SelTBteqZSlt
  { 1245,	5,	1,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo207 },  // Inst #1245 = SelTBteqZSlti
  { 1246,	5,	1,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo207 },  // Inst #1246 = SelTBteqZSltiu
  { 1247,	5,	1,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo206 },  // Inst #1247 = SelTBteqZSltu
  { 1248,	5,	1,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo206 },  // Inst #1248 = SelTBtneZCmp
  { 1249,	5,	1,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo207 },  // Inst #1249 = SelTBtneZCmpi
  { 1250,	5,	1,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo206 },  // Inst #1250 = SelTBtneZSlt
  { 1251,	5,	1,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo207 },  // Inst #1251 = SelTBtneZSlti
  { 1252,	5,	1,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo207 },  // Inst #1252 = SelTBtneZSltiu
  { 1253,	5,	1,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo206 },  // Inst #1253 = SelTBtneZSltu
  { 1254,	4,	0,	26,	4,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo138 },  // Inst #1254 = ShRxRyOffMemX16
  { 1255,	3,	1,	4,	4,	0, 0x0ULL, NULL, NULL, OperandInfo208 },  // Inst #1255 = SllX16
  { 1256,	3,	1,	4,	2,	0, 0x0ULL, NULL, NULL, OperandInfo33 },  // Inst #1256 = SllvRxRy16
  { 1257,	3,	1,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo32 },  // Inst #1257 = SltCCRxRy16
  { 1258,	2,	0,	4,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList7, OperandInfo65 },  // Inst #1258 = SltRxRy16
  { 1259,	3,	1,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo208 },  // Inst #1259 = SltiCCRxImmX16
  { 1260,	2,	0,	4,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList7, OperandInfo29 },  // Inst #1260 = SltiRxImm16
  { 1261,	2,	0,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList7, OperandInfo29 },  // Inst #1261 = SltiRxImmX16
  { 1262,	3,	1,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo208 },  // Inst #1262 = SltiuCCRxImmX16
  { 1263,	2,	0,	4,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList7, OperandInfo29 },  // Inst #1263 = SltiuRxImm16
  { 1264,	2,	0,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList7, OperandInfo29 },  // Inst #1264 = SltiuRxImmX16
  { 1265,	3,	1,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo32 },  // Inst #1265 = SltuCCRxRy16
  { 1266,	2,	0,	4,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList7, OperandInfo65 },  // Inst #1266 = SltuRxRy16
  { 1267,	3,	1,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList7, OperandInfo32 },  // Inst #1267 = SltuRxRyRz16
  { 1268,	3,	1,	4,	4,	0, 0x0ULL, NULL, NULL, OperandInfo208 },  // Inst #1268 = SraX16
  { 1269,	3,	1,	4,	2,	0, 0x0ULL, NULL, NULL, OperandInfo33 },  // Inst #1269 = SravRxRy16
  { 1270,	3,	1,	4,	4,	0, 0x0ULL, NULL, NULL, OperandInfo208 },  // Inst #1270 = SrlX16
  { 1271,	3,	1,	4,	2,	0, 0x0ULL, NULL, NULL, OperandInfo33 },  // Inst #1271 = SrlvRxRy16
  { 1272,	3,	1,	4,	2,	0|(1<<MCID::Rematerializable), 0x0ULL, NULL, NULL, OperandInfo32 },  // Inst #1272 = SubuRxRyRz16
  { 1273,	4,	0,	26,	4,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo138 },  // Inst #1273 = SwRxRyOffMemX16
  { 1274,	3,	0,	26,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo139 },  // Inst #1274 = SwRxSpImmX16
  { 1275,	1,	0,	5,	4,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::ExtraSrcRegAllocReq), 0x3ULL, NULL, ImplicitList4, OperandInfo5 },  // Inst #1275 = TAILCALL
  { 1276,	1,	0,	5,	4,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::ExtraSrcRegAllocReq), 0x1ULL, NULL, NULL, OperandInfo111 },  // Inst #1276 = TAILCALL64_R
  { 1277,	1,	0,	5,	4,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::ExtraSrcRegAllocReq), 0x1ULL, NULL, NULL, OperandInfo44 },  // Inst #1277 = TAILCALL_R
  { 1278,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo20 },  // Inst #1278 = TEQ
  { 1279,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo132 },  // Inst #1279 = TEQI
  { 1280,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo20 },  // Inst #1280 = TGE
  { 1281,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo132 },  // Inst #1281 = TGEI
  { 1282,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo132 },  // Inst #1282 = TGEIU
  { 1283,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo20 },  // Inst #1283 = TGEU
  { 1284,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo20 },  // Inst #1284 = TLT
  { 1285,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo132 },  // Inst #1285 = TLTI
  { 1286,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo20 },  // Inst #1286 = TLTU
  { 1287,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo20 },  // Inst #1287 = TNE
  { 1288,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo132 },  // Inst #1288 = TNEI
  { 1289,	0,	0,	0,	4,	0|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, 0 },  // Inst #1289 = TRAP
  { 1290,	2,	1,	6,	4,	0, 0x4ULL, NULL, NULL, OperandInfo50 },  // Inst #1290 = TRUNC_L_D64
  { 1291,	2,	1,	6,	4,	0, 0x4ULL, NULL, NULL, OperandInfo51 },  // Inst #1291 = TRUNC_L_S
  { 1292,	2,	1,	6,	4,	0, 0x4ULL, NULL, NULL, OperandInfo52 },  // Inst #1292 = TRUNC_W_D32
  { 1293,	2,	1,	6,	4,	0, 0x4ULL, NULL, NULL, OperandInfo53 },  // Inst #1293 = TRUNC_W_D64
  { 1294,	2,	1,	6,	4,	0, 0x4ULL, NULL, NULL, OperandInfo54 },  // Inst #1294 = TRUNC_W_S
  { 1295,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo132 },  // Inst #1295 = TTLTIU
  { 1296,	2,	0,	11,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, ImplicitList11, OperandInfo9 },  // Inst #1296 = UDIV
  { 1297,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #1297 = VSHF_B
  { 1298,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo13 },  // Inst #1298 = VSHF_D
  { 1299,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo14 },  // Inst #1299 = VSHF_H
  { 1300,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #1300 = VSHF_W
  { 1301,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, 0 },  // Inst #1301 = WAIT
  { 1302,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo132 },  // Inst #1302 = WRDSP
  { 1303,	2,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo9 },  // Inst #1303 = WSBH
  { 1304,	3,	1,	3,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #1304 = XOR
  { 1305,	3,	1,	1,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo22 },  // Inst #1305 = XOR64
  { 1306,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo16 },  // Inst #1306 = XORI_B
  { 1307,	3,	1,	4,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #1307 = XOR_MM
  { 1308,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #1308 = XOR_V
  { 1309,	3,	1,	3,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, NULL, NULL, OperandInfo20 },  // Inst #1309 = XORi
  { 1310,	3,	1,	3,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, NULL, NULL, OperandInfo23 },  // Inst #1310 = XORi64
  { 1311,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo20 },  // Inst #1311 = XORi_MM
  { 1312,	3,	1,	4,	2,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x0ULL, NULL, NULL, OperandInfo33 },  // Inst #1312 = XorRxRxRy16
};

extern const char MipsInstrNameData[] = {
  /* 0 */ 'D', 'M', 'F', 'C', '0', 0,
  /* 6 */ 'D', 'M', 'T', 'C', '0', 0,
  /* 12 */ 'P', 's', 'e', 'u', 'd', 'o', 'L', 'D', 'C', '1', 0,
  /* 23 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'D', 'C', '1', 0,
  /* 34 */ 'C', 'F', 'C', '1', 0,
  /* 39 */ 'D', 'M', 'F', 'C', '1', 0,
  /* 45 */ 'M', 'F', 'H', 'C', '1', 0,
  /* 51 */ 'M', 'T', 'H', 'C', '1', 0,
  /* 57 */ 'C', 'T', 'C', '1', 0,
  /* 62 */ 'D', 'M', 'T', 'C', '1', 0,
  /* 68 */ 'L', 'W', 'C', '1', 0,
  /* 73 */ 'S', 'W', 'C', '1', 0,
  /* 78 */ 'L', 'D', 'X', 'C', '1', 0,
  /* 84 */ 'S', 'D', 'X', 'C', '1', 0,
  /* 90 */ 'L', 'U', 'X', 'C', '1', 0,
  /* 96 */ 'S', 'U', 'X', 'C', '1', 0,
  /* 102 */ 'L', 'W', 'X', 'C', '1', 0,
  /* 108 */ 'S', 'W', 'X', 'C', '1', 0,
  /* 114 */ 'D', 'S', 'R', 'A', '3', '2', 0,
  /* 121 */ 'F', 'S', 'U', 'B', '_', 'D', '3', '2', 0,
  /* 130 */ 'N', 'M', 'S', 'U', 'B', '_', 'D', '3', '2', 0,
  /* 140 */ 'F', 'A', 'D', 'D', '_', 'D', '3', '2', 0,
  /* 149 */ 'N', 'M', 'A', 'D', 'D', '_', 'D', '3', '2', 0,
  /* 159 */ 'C', '_', 'N', 'G', 'E', '_', 'D', '3', '2', 0,
  /* 169 */ 'C', '_', 'N', 'G', 'L', 'E', '_', 'D', '3', '2', 0,
  /* 180 */ 'C', '_', 'O', 'L', 'E', '_', 'D', '3', '2', 0,
  /* 190 */ 'C', '_', 'U', 'L', 'E', '_', 'D', '3', '2', 0,
  /* 200 */ 'C', '_', 'L', 'E', '_', 'D', '3', '2', 0,
  /* 209 */ 'C', '_', 'S', 'F', '_', 'D', '3', '2', 0,
  /* 218 */ 'M', 'O', 'V', 'F', '_', 'D', '3', '2', 0,
  /* 227 */ 'C', '_', 'F', '_', 'D', '3', '2', 0,
  /* 235 */ 'F', 'N', 'E', 'G', '_', 'D', '3', '2', 0,
  /* 244 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'D', '3', '2', 0,
  /* 255 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'D', '3', '2', 0,
  /* 266 */ 'C', '_', 'N', 'G', 'L', '_', 'D', '3', '2', 0,
  /* 276 */ 'F', 'M', 'U', 'L', '_', 'D', '3', '2', 0,
  /* 285 */ 'C', '_', 'U', 'N', '_', 'D', '3', '2', 0,
  /* 294 */ 'F', 'C', 'M', 'P', '_', 'D', '3', '2', 0,
  /* 303 */ 'C', '_', 'S', 'E', 'Q', '_', 'D', '3', '2', 0,
  /* 313 */ 'C', '_', 'U', 'E', 'Q', '_', 'D', '3', '2', 0,
  /* 323 */ 'C', '_', 'E', 'Q', '_', 'D', '3', '2', 0,
  /* 332 */ 'F', 'A', 'B', 'S', '_', 'D', '3', '2', 0,
  /* 341 */ 'C', 'V', 'T', '_', 'S', '_', 'D', '3', '2', 0,
  /* 351 */ 'C', '_', 'N', 'G', 'T', '_', 'D', '3', '2', 0,
  /* 361 */ 'C', '_', 'O', 'L', 'T', '_', 'D', '3', '2', 0,
  /* 371 */ 'C', '_', 'U', 'L', 'T', '_', 'D', '3', '2', 0,
  /* 381 */ 'C', '_', 'L', 'T', '_', 'D', '3', '2', 0,
  /* 390 */ 'F', 'S', 'Q', 'R', 'T', '_', 'D', '3', '2', 0,
  /* 400 */ 'M', 'O', 'V', 'T', '_', 'D', '3', '2', 0,
  /* 409 */ 'F', 'D', 'I', 'V', '_', 'D', '3', '2', 0,
  /* 418 */ 'F', 'M', 'O', 'V', '_', 'D', '3', '2', 0,
  /* 427 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'D', '3', '2', 0,
  /* 439 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'D', '3', '2', 0,
  /* 451 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'D', '3', '2', 0,
  /* 462 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'D', '3', '2', 0,
  /* 474 */ 'C', 'V', 'T', '_', 'W', '_', 'D', '3', '2', 0,
  /* 484 */ 'B', 'P', 'O', 'S', 'G', 'E', '3', '2', 0,
  /* 493 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '3', '2', 0,
  /* 513 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '3', '2', 0,
  /* 533 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '3', '2', 0,
  /* 554 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '3', '2', 0,
  /* 574 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', 0,
  /* 590 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', 0,
  /* 610 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '3', '2', 0,
  /* 630 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '3', '2', 0,
  /* 649 */ 'D', 'S', 'L', 'L', '3', '2', 0,
  /* 656 */ 'D', 'S', 'R', 'L', '3', '2', 0,
  /* 663 */ 'F', 'C', 'M', 'P', '_', 'S', '3', '2', 0,
  /* 672 */ 'D', 'S', 'L', 'L', '6', '4', '_', '3', '2', 0,
  /* 682 */ 'M', 'I', 'P', 'S', 'e', 'h', '_', 'r', 'e', 't', 'u', 'r', 'n', '3', '2', 0,
  /* 698 */ 'L', 'w', 'C', 'o', 'n', 's', 't', 'a', 'n', 't', '3', '2', 0,
  /* 711 */ 'D', 'M', 'F', 'C', '2', 0,
  /* 717 */ 'D', 'M', 'T', 'C', '2', 0,
  /* 723 */ 'L', 'D', 'C', '1', '6', '4', 0,
  /* 730 */ 'S', 'D', 'C', '1', '6', '4', 0,
  /* 737 */ 'L', 'D', 'X', 'C', '1', '6', '4', 0,
  /* 745 */ 'S', 'D', 'X', 'C', '1', '6', '4', 0,
  /* 753 */ 'L', 'U', 'X', 'C', '1', '6', '4', 0,
  /* 761 */ 'S', 'U', 'X', 'C', '1', '6', '4', 0,
  /* 769 */ 'S', 'E', 'B', '6', '4', 0,
  /* 775 */ 'L', 'B', '6', '4', 0,
  /* 780 */ 'S', 'B', '6', '4', 0,
  /* 785 */ 'L', 'O', 'A', 'D', '_', 'A', 'C', 'C', '6', '4', 0,
  /* 796 */ 'S', 'T', 'O', 'R', 'E', '_', 'A', 'C', 'C', '6', '4', 0,
  /* 808 */ 'A', 'N', 'D', '6', '4', 0,
  /* 814 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'D', '6', '4', 0,
  /* 827 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'D', '6', '4', 0,
  /* 840 */ 'F', 'S', 'U', 'B', '_', 'D', '6', '4', 0,
  /* 849 */ 'N', 'M', 'S', 'U', 'B', '_', 'D', '6', '4', 0,
  /* 859 */ 'F', 'A', 'D', 'D', '_', 'D', '6', '4', 0,
  /* 868 */ 'N', 'M', 'A', 'D', 'D', '_', 'D', '6', '4', 0,
  /* 878 */ 'C', '_', 'N', 'G', 'E', '_', 'D', '6', '4', 0,
  /* 888 */ 'C', '_', 'N', 'G', 'L', 'E', '_', 'D', '6', '4', 0,
  /* 899 */ 'C', '_', 'O', 'L', 'E', '_', 'D', '6', '4', 0,
  /* 909 */ 'C', '_', 'U', 'L', 'E', '_', 'D', '6', '4', 0,
  /* 919 */ 'C', '_', 'L', 'E', '_', 'D', '6', '4', 0,
  /* 928 */ 'C', '_', 'S', 'F', '_', 'D', '6', '4', 0,
  /* 937 */ 'M', 'O', 'V', 'F', '_', 'D', '6', '4', 0,
  /* 946 */ 'C', '_', 'F', '_', 'D', '6', '4', 0,
  /* 954 */ 'F', 'N', 'E', 'G', '_', 'D', '6', '4', 0,
  /* 963 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'D', '6', '4', 0,
  /* 974 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'D', '6', '4', 0,
  /* 985 */ 'C', '_', 'N', 'G', 'L', '_', 'D', '6', '4', 0,
  /* 995 */ 'F', 'M', 'U', 'L', '_', 'D', '6', '4', 0,
  /* 1004 */ 'T', 'R', 'U', 'N', 'C', '_', 'L', '_', 'D', '6', '4', 0,
  /* 1016 */ 'R', 'O', 'U', 'N', 'D', '_', 'L', '_', 'D', '6', '4', 0,
  /* 1028 */ 'C', 'E', 'I', 'L', '_', 'L', '_', 'D', '6', '4', 0,
  /* 1039 */ 'F', 'L', 'O', 'O', 'R', '_', 'L', '_', 'D', '6', '4', 0,
  /* 1051 */ 'C', 'V', 'T', '_', 'L', '_', 'D', '6', '4', 0,
  /* 1061 */ 'C', '_', 'U', 'N', '_', 'D', '6', '4', 0,
  /* 1070 */ 'F', 'C', 'M', 'P', '_', 'D', '6', '4', 0,
  /* 1079 */ 'C', '_', 'S', 'E', 'Q', '_', 'D', '6', '4', 0,
  /* 1089 */ 'C', '_', 'U', 'E', 'Q', '_', 'D', '6', '4', 0,
  /* 1099 */ 'C', '_', 'E', 'Q', '_', 'D', '6', '4', 0,
  /* 1108 */ 'F', 'A', 'B', 'S', '_', 'D', '6', '4', 0,
  /* 1117 */ 'C', 'V', 'T', '_', 'S', '_', 'D', '6', '4', 0,
  /* 1127 */ 'C', '_', 'N', 'G', 'T', '_', 'D', '6', '4', 0,
  /* 1137 */ 'C', '_', 'O', 'L', 'T', '_', 'D', '6', '4', 0,
  /* 1147 */ 'C', '_', 'U', 'L', 'T', '_', 'D', '6', '4', 0,
  /* 1157 */ 'C', '_', 'L', 'T', '_', 'D', '6', '4', 0,
  /* 1166 */ 'F', 'S', 'Q', 'R', 'T', '_', 'D', '6', '4', 0,
  /* 1176 */ 'M', 'O', 'V', 'T', '_', 'D', '6', '4', 0,
  /* 1185 */ 'F', 'D', 'I', 'V', '_', 'D', '6', '4', 0,
  /* 1194 */ 'F', 'M', 'O', 'V', '_', 'D', '6', '4', 0,
  /* 1203 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'D', '6', '4', 0,
  /* 1215 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'D', '6', '4', 0,
  /* 1227 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'D', '6', '4', 0,
  /* 1238 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'D', '6', '4', 0,
  /* 1250 */ 'C', 'V', 'T', '_', 'W', '_', 'D', '6', '4', 0,
  /* 1260 */ 'B', 'N', 'E', '6', '4', 0,
  /* 1266 */ 'B', 'u', 'i', 'l', 'd', 'P', 'a', 'i', 'r', 'F', '6', '4', 0,
  /* 1279 */ 'E', 'x', 't', 'r', 'a', 'c', 't', 'E', 'l', 'e', 'm', 'e', 'n', 't', 'F', '6', '4', 0,
  /* 1297 */ 'S', 'E', 'H', '6', '4', 0,
  /* 1303 */ 'L', 'H', '6', '4', 0,
  /* 1308 */ 'S', 'H', '6', '4', 0,
  /* 1313 */ 'M', 'F', 'H', 'I', '6', '4', 0,
  /* 1320 */ 'M', 'T', 'H', 'I', '6', '4', 0,
  /* 1327 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'I', '6', '4', 0,
  /* 1340 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'I', '6', '4', 0,
  /* 1353 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '6', '4', 0,
  /* 1373 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '6', '4', 0,
  /* 1393 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '6', '4', 0,
  /* 1414 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '6', '4', 0,
  /* 1434 */ 'M', 'O', 'V', 'F', '_', 'I', '6', '4', 0,
  /* 1443 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'I', '6', '4', 0,
  /* 1454 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'I', '6', '4', 0,
  /* 1465 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', 0,
  /* 1481 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', 0,
  /* 1501 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 1521 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 1540 */ 'M', 'O', 'V', 'T', '_', 'I', '6', '4', 0,
  /* 1549 */ 'L', 'W', 'L', '6', '4', 0,
  /* 1555 */ 'S', 'W', 'L', '6', '4', 0,
  /* 1561 */ 'M', 'F', 'L', 'O', '6', '4', 0,
  /* 1568 */ 'M', 'T', 'L', 'O', '6', '4', 0,
  /* 1575 */ 'B', 'E', 'Q', '6', '4', 0,
  /* 1581 */ 'J', 'R', '6', '4', 0,
  /* 1586 */ 'J', 'A', 'L', 'R', '6', '4', 0,
  /* 1593 */ 'N', 'O', 'R', '6', '4', 0,
  /* 1599 */ 'X', 'O', 'R', '6', '4', 0,
  /* 1605 */ 'R', 'D', 'H', 'W', 'R', '6', '4', 0,
  /* 1613 */ 'L', 'W', 'R', '6', '4', 0,
  /* 1619 */ 'S', 'W', 'R', '6', '4', 0,
  /* 1625 */ 'S', 'L', 'T', '6', '4', 0,
  /* 1631 */ 'L', 'W', '6', '4', 0,
  /* 1636 */ 'S', 'W', '6', '4', 0,
  /* 1641 */ 'B', 'G', 'E', 'Z', '6', '4', 0,
  /* 1648 */ 'B', 'L', 'E', 'Z', '6', '4', 0,
  /* 1655 */ 'B', 'G', 'T', 'Z', '6', '4', 0,
  /* 1662 */ 'B', 'L', 'T', 'Z', '6', '4', 0,
  /* 1669 */ 'B', 'u', 'i', 'l', 'd', 'P', 'a', 'i', 'r', 'F', '6', '4', '_', '6', '4', 0,
  /* 1685 */ 'E', 'x', 't', 'r', 'a', 'c', 't', 'E', 'l', 'e', 'm', 'e', 'n', 't', 'F', '6', '4', '_', '6', '4', 0,
  /* 1706 */ 'S', 'L', 'L', '6', '4', '_', '6', '4', 0,
  /* 1715 */ 'A', 'N', 'D', 'i', '6', '4', 0,
  /* 1722 */ 'X', 'O', 'R', 'i', '6', '4', 0,
  /* 1729 */ 'S', 'L', 'T', 'i', '6', '4', 0,
  /* 1736 */ 'L', 'U', 'i', '6', '4', 0,
  /* 1742 */ 'M', 'I', 'P', 'S', 'e', 'h', '_', 'r', 'e', 't', 'u', 'r', 'n', '6', '4', 0,
  /* 1758 */ 'L', 'B', 'u', '6', '4', 0,
  /* 1764 */ 'L', 'H', 'u', '6', '4', 0,
  /* 1770 */ 'S', 'L', 'T', 'u', '6', '4', 0,
  /* 1777 */ 'L', 'E', 'A', '_', 'A', 'D', 'D', 'i', 'u', '6', '4', 0,
  /* 1789 */ 'S', 'L', 'T', 'i', 'u', '6', '4', 0,
  /* 1797 */ 'M', 'o', 'v', 'e', 'R', '3', '2', '1', '6', 0,
  /* 1807 */ 'R', 'e', 't', 'R', 'A', '1', '6', 0,
  /* 1815 */ 'R', 'e', 's', 't', 'o', 'r', 'e', 'R', 'a', 'F', '1', '6', 0,
  /* 1828 */ 'S', 'a', 'v', 'e', 'R', 'a', 'F', '1', '6', 0,
  /* 1838 */ 'S', 'a', 'v', 'e', 'D', 'e', 'c', 'S', 'p', 'F', '1', '6', 0,
  /* 1851 */ 'R', 'e', 's', 't', 'o', 'r', 'e', 'I', 'n', 'c', 'S', 'p', 'F', '1', '6', 0,
  /* 1867 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '1', '6', 0,
  /* 1887 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '1', '6', 0,
  /* 1907 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '1', '6', 0,
  /* 1928 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '1', '6', 0,
  /* 1948 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', 0,
  /* 1964 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', 0,
  /* 1984 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '1', '6', 0,
  /* 2004 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '1', '6', 0,
  /* 2023 */ 'M', 'o', 'v', 'e', '3', '2', 'R', '1', '6', 0,
  /* 2033 */ 'S', 'r', 'a', 'X', '1', '6', 0,
  /* 2040 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'C', 'm', 'p', 'i', 'X', '1', '6', 0,
  /* 2055 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'C', 'm', 'p', 'i', 'X', '1', '6', 0,
  /* 2070 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'S', 'l', 't', 'i', 'X', '1', '6', 0,
  /* 2085 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'S', 'l', 't', 'i', 'X', '1', '6', 0,
  /* 2100 */ 'S', 'l', 'l', 'X', '1', '6', 0,
  /* 2107 */ 'S', 'r', 'l', 'X', '1', '6', 0,
  /* 2114 */ 'L', 'b', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2130 */ 'S', 'b', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2146 */ 'L', 'h', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2162 */ 'S', 'h', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2178 */ 'L', 'b', 'u', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2195 */ 'L', 'h', 'u', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2212 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2231 */ 'L', 'w', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2247 */ 'S', 'w', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2263 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'P', 'c', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2279 */ 'A', 'd', 'd', 'i', 'u', 'S', 'p', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2293 */ 'L', 'w', 'R', 'x', 'S', 'p', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2306 */ 'S', 'w', 'R', 'x', 'S', 'p', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2319 */ 'S', 'l', 't', 'i', 'C', 'C', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2334 */ 'S', 'l', 't', 'i', 'u', 'C', 'C', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2350 */ 'L', 'i', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2361 */ 'C', 'm', 'p', 'i', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2374 */ 'S', 'l', 't', 'i', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2387 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2401 */ 'S', 'l', 't', 'i', 'u', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2415 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2431 */ 'B', 'n', 'e', 'z', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2444 */ 'B', 'e', 'q', 'z', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2457 */ 'B', 'i', 'm', 'm', 'X', '1', '6', 0,
  /* 2465 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'C', 'm', 'p', 'X', '1', '6', 0,
  /* 2479 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'C', 'm', 'p', 'X', '1', '6', 0,
  /* 2493 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'S', 'l', 't', 'X', '1', '6', 0,
  /* 2507 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'S', 'l', 't', 'X', '1', '6', 0,
  /* 2521 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'S', 'l', 't', 'i', 'u', 'X', '1', '6', 0,
  /* 2537 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'S', 'l', 't', 'i', 'u', 'X', '1', '6', 0,
  /* 2553 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'S', 'l', 't', 'u', 'X', '1', '6', 0,
  /* 2568 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'S', 'l', 't', 'u', 'X', '1', '6', 0,
  /* 2583 */ 'B', 't', 'n', 'e', 'z', 'X', '1', '6', 0,
  /* 2592 */ 'B', 't', 'e', 'q', 'z', 'X', '1', '6', 0,
  /* 2601 */ 'J', 'r', 'c', 'R', 'a', '1', '6', 0,
  /* 2609 */ 'J', 'r', 'R', 'a', '1', '6', 0,
  /* 2616 */ 'J', 'u', 'm', 'p', 'L', 'i', 'n', 'k', 'R', 'e', 'g', '1', '6', 0,
  /* 2630 */ 'M', 'f', 'h', 'i', '1', '6', 0,
  /* 2637 */ 'B', 'r', 'e', 'a', 'k', '1', '6', 0,
  /* 2645 */ 'J', 'a', 'l', '1', '6', 0,
  /* 2651 */ 'A', 'd', 'd', 'i', 'u', 'S', 'p', 'I', 'm', 'm', '1', '6', 0,
  /* 2664 */ 'L', 'i', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 2674 */ 'C', 'm', 'p', 'i', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 2686 */ 'S', 'l', 't', 'i', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 2698 */ 'S', 'l', 't', 'i', 'u', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 2711 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 2726 */ 'B', 'n', 'e', 'z', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 2738 */ 'B', 'e', 'q', 'z', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 2750 */ 'M', 'f', 'l', 'o', '1', '6', 0,
  /* 2757 */ 'J', 'r', 'c', 'R', 'x', '1', '6', 0,
  /* 2765 */ 'S', 'l', 't', 'C', 'C', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2777 */ 'S', 'l', 't', 'u', 'C', 'C', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2790 */ 'N', 'e', 'g', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2800 */ 'C', 'm', 'p', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2810 */ 'S', 'l', 't', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2820 */ 'M', 'u', 'l', 't', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2831 */ 'N', 'o', 't', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2841 */ 'S', 'l', 't', 'u', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2852 */ 'M', 'u', 'l', 't', 'u', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2864 */ 'D', 'i', 'v', 'u', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2875 */ 'S', 'r', 'a', 'v', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2886 */ 'D', 'i', 'v', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2896 */ 'S', 'l', 'l', 'v', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2907 */ 'S', 'r', 'l', 'v', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2918 */ 'A', 'n', 'd', 'R', 'x', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2930 */ 'O', 'r', 'R', 'x', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2941 */ 'X', 'o', 'r', 'R', 'x', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2953 */ 'M', 'u', 'l', 't', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 2966 */ 'S', 'u', 'b', 'u', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 2979 */ 'A', 'd', 'd', 'u', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 2992 */ 'S', 'l', 't', 'u', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 3005 */ 'M', 'u', 'l', 't', 'u', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 3019 */ 'L', 'O', 'A', 'D', '_', 'A', 'C', 'C', '1', '2', '8', 0,
  /* 3031 */ 'S', 'T', 'O', 'R', 'E', '_', 'A', 'C', 'C', '1', '2', '8', 0,
  /* 3044 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '8', 0,
  /* 3063 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '8', 0,
  /* 3082 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '8', 0,
  /* 3102 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '8', 0,
  /* 3121 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', 0,
  /* 3136 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', 0,
  /* 3155 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '8', 0,
  /* 3174 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '8', 0,
  /* 3192 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 'A', 0,
  /* 3207 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 'A', 0,
  /* 3223 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 'A', 0,
  /* 3238 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 'A', 0,
  /* 3254 */ 'D', 'S', 'R', 'A', 0,
  /* 3259 */ 'R', 'e', 't', 'R', 'A', 0,
  /* 3265 */ 'C', 'F', 'C', 'M', 'S', 'A', 0,
  /* 3272 */ 'C', 'T', 'C', 'M', 'S', 'A', 0,
  /* 3279 */ 'S', 'E', 'B', 0,
  /* 3283 */ 'L', 'B', 0,
  /* 3286 */ 'S', 'H', 'R', 'A', '_', 'Q', 'B', 0,
  /* 3294 */ 'C', 'M', 'P', 'G', 'D', 'U', '_', 'L', 'E', '_', 'Q', 'B', 0,
  /* 3307 */ 'C', 'M', 'P', 'G', 'U', '_', 'L', 'E', '_', 'Q', 'B', 0,
  /* 3319 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', 'U', '_', 'L', 'E', '_', 'Q', 'B', 0,
  /* 3336 */ 'S', 'U', 'B', 'U', 'H', '_', 'Q', 'B', 0,
  /* 3345 */ 'A', 'D', 'D', 'U', 'H', '_', 'Q', 'B', 0,
  /* 3354 */ 'P', 's', 'e', 'u', 'd', 'o', 'P', 'I', 'C', 'K', '_', 'Q', 'B', 0,
  /* 3368 */ 'S', 'H', 'L', 'L', '_', 'Q', 'B', 0,
  /* 3376 */ 'R', 'E', 'P', 'L', '_', 'Q', 'B', 0,
  /* 3384 */ 'S', 'H', 'R', 'L', '_', 'Q', 'B', 0,
  /* 3392 */ 'C', 'M', 'P', 'G', 'D', 'U', '_', 'E', 'Q', '_', 'Q', 'B', 0,
  /* 3405 */ 'C', 'M', 'P', 'G', 'U', '_', 'E', 'Q', '_', 'Q', 'B', 0,
  /* 3417 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', 'U', '_', 'E', 'Q', '_', 'Q', 'B', 0,
  /* 3434 */ 'S', 'H', 'R', 'A', '_', 'R', '_', 'Q', 'B', 0,
  /* 3444 */ 'S', 'U', 'B', 'U', 'H', '_', 'R', '_', 'Q', 'B', 0,
  /* 3455 */ 'A', 'D', 'D', 'U', 'H', '_', 'R', '_', 'Q', 'B', 0,
  /* 3466 */ 'S', 'H', 'R', 'A', 'V', '_', 'R', '_', 'Q', 'B', 0,
  /* 3477 */ 'A', 'B', 'S', 'Q', '_', 'S', '_', 'Q', 'B', 0,
  /* 3487 */ 'S', 'U', 'B', 'U', '_', 'S', '_', 'Q', 'B', 0,
  /* 3497 */ 'A', 'D', 'D', 'U', '_', 'S', '_', 'Q', 'B', 0,
  /* 3507 */ 'C', 'M', 'P', 'G', 'D', 'U', '_', 'L', 'T', '_', 'Q', 'B', 0,
  /* 3520 */ 'C', 'M', 'P', 'G', 'U', '_', 'L', 'T', '_', 'Q', 'B', 0,
  /* 3532 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', 'U', '_', 'L', 'T', '_', 'Q', 'B', 0,
  /* 3549 */ 'S', 'U', 'B', 'U', '_', 'Q', 'B', 0,
  /* 3557 */ 'A', 'D', 'D', 'U', '_', 'Q', 'B', 0,
  /* 3565 */ 'S', 'H', 'R', 'A', 'V', '_', 'Q', 'B', 0,
  /* 3574 */ 'S', 'H', 'L', 'L', 'V', '_', 'Q', 'B', 0,
  /* 3583 */ 'R', 'E', 'P', 'L', 'V', '_', 'Q', 'B', 0,
  /* 3592 */ 'S', 'H', 'R', 'L', 'V', '_', 'Q', 'B', 0,
  /* 3601 */ 'R', 'A', 'D', 'D', 'U', '_', 'W', '_', 'Q', 'B', 0,
  /* 3612 */ 'S', 'B', 0,
  /* 3615 */ 'M', 'O', 'D', 'S', 'U', 'B', 0,
  /* 3622 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'S', 'U', 'B', 0,
  /* 3633 */ 'S', 'R', 'A', '_', 'B', 0,
  /* 3639 */ 'A', 'D', 'D', '_', 'A', '_', 'B', 0,
  /* 3647 */ 'M', 'I', 'N', '_', 'A', '_', 'B', 0,
  /* 3655 */ 'A', 'D', 'D', 'S', '_', 'A', '_', 'B', 0,
  /* 3664 */ 'M', 'A', 'X', '_', 'A', '_', 'B', 0,
  /* 3672 */ 'N', 'L', 'O', 'C', '_', 'B', 0,
  /* 3679 */ 'N', 'L', 'Z', 'C', '_', 'B', 0,
  /* 3686 */ 'S', 'L', 'D', '_', 'B', 0,
  /* 3692 */ 'P', 'C', 'K', 'O', 'D', '_', 'B', 0,
  /* 3700 */ 'I', 'L', 'V', 'O', 'D', '_', 'B', 0,
  /* 3708 */ 'I', 'N', 'S', 'V', 'E', '_', 'B', 0,
  /* 3716 */ 'V', 'S', 'H', 'F', '_', 'B', 0,
  /* 3723 */ 'B', 'N', 'E', 'G', '_', 'B', 0,
  /* 3730 */ 'S', 'R', 'A', 'I', '_', 'B', 0,
  /* 3737 */ 'S', 'L', 'D', 'I', '_', 'B', 0,
  /* 3744 */ 'A', 'N', 'D', 'I', '_', 'B', 0,
  /* 3751 */ 'B', 'N', 'E', 'G', 'I', '_', 'B', 0,
  /* 3759 */ 'B', 'S', 'E', 'L', 'I', '_', 'B', 0,
  /* 3767 */ 'S', 'L', 'L', 'I', '_', 'B', 0,
  /* 3774 */ 'S', 'R', 'L', 'I', '_', 'B', 0,
  /* 3781 */ 'B', 'I', 'N', 'S', 'L', 'I', '_', 'B', 0,
  /* 3790 */ 'C', 'E', 'Q', 'I', '_', 'B', 0,
  /* 3797 */ 'S', 'R', 'A', 'R', 'I', '_', 'B', 0,
  /* 3805 */ 'B', 'C', 'L', 'R', 'I', '_', 'B', 0,
  /* 3813 */ 'S', 'R', 'L', 'R', 'I', '_', 'B', 0,
  /* 3821 */ 'N', 'O', 'R', 'I', '_', 'B', 0,
  /* 3828 */ 'X', 'O', 'R', 'I', '_', 'B', 0,
  /* 3835 */ 'B', 'I', 'N', 'S', 'R', 'I', '_', 'B', 0,
  /* 3844 */ 'S', 'P', 'L', 'A', 'T', 'I', '_', 'B', 0,
  /* 3853 */ 'B', 'S', 'E', 'T', 'I', '_', 'B', 0,
  /* 3861 */ 'S', 'U', 'B', 'V', 'I', '_', 'B', 0,
  /* 3869 */ 'A', 'D', 'D', 'V', 'I', '_', 'B', 0,
  /* 3877 */ 'B', 'M', 'Z', 'I', '_', 'B', 0,
  /* 3884 */ 'B', 'M', 'N', 'Z', 'I', '_', 'B', 0,
  /* 3892 */ 'F', 'I', 'L', 'L', '_', 'B', 0,
  /* 3899 */ 'S', 'L', 'L', '_', 'B', 0,
  /* 3905 */ 'S', 'R', 'L', '_', 'B', 0,
  /* 3911 */ 'B', 'I', 'N', 'S', 'L', '_', 'B', 0,
  /* 3919 */ 'I', 'L', 'V', 'L', '_', 'B', 0,
  /* 3926 */ 'C', 'E', 'Q', '_', 'B', 0,
  /* 3932 */ 'S', 'R', 'A', 'R', '_', 'B', 0,
  /* 3939 */ 'B', 'C', 'L', 'R', '_', 'B', 0,
  /* 3946 */ 'S', 'R', 'L', 'R', '_', 'B', 0,
  /* 3953 */ 'B', 'I', 'N', 'S', 'R', '_', 'B', 0,
  /* 3961 */ 'I', 'L', 'V', 'R', '_', 'B', 0,
  /* 3968 */ 'A', 'S', 'U', 'B', '_', 'S', '_', 'B', 0,
  /* 3977 */ 'M', 'O', 'D', '_', 'S', '_', 'B', 0,
  /* 3985 */ 'C', 'L', 'E', '_', 'S', '_', 'B', 0,
  /* 3993 */ 'A', 'V', 'E', '_', 'S', '_', 'B', 0,
  /* 4001 */ 'C', 'L', 'E', 'I', '_', 'S', '_', 'B', 0,
  /* 4010 */ 'M', 'I', 'N', 'I', '_', 'S', '_', 'B', 0,
  /* 4019 */ 'C', 'L', 'T', 'I', '_', 'S', '_', 'B', 0,
  /* 4028 */ 'M', 'A', 'X', 'I', '_', 'S', '_', 'B', 0,
  /* 4037 */ 'M', 'I', 'N', '_', 'S', '_', 'B', 0,
  /* 4045 */ 'D', 'O', 'T', 'P', '_', 'S', '_', 'B', 0,
  /* 4054 */ 'A', 'V', 'E', 'R', '_', 'S', '_', 'B', 0,
  /* 4063 */ 'S', 'U', 'B', 'S', '_', 'S', '_', 'B', 0,
  /* 4072 */ 'A', 'D', 'D', 'S', '_', 'S', '_', 'B', 0,
  /* 4081 */ 'S', 'A', 'T', '_', 'S', '_', 'B', 0,
  /* 4089 */ 'C', 'L', 'T', '_', 'S', '_', 'B', 0,
  /* 4097 */ 'S', 'U', 'B', 'S', 'U', 'U', '_', 'S', '_', 'B', 0,
  /* 4108 */ 'D', 'I', 'V', '_', 'S', '_', 'B', 0,
  /* 4116 */ 'M', 'A', 'X', '_', 'S', '_', 'B', 0,
  /* 4124 */ 'C', 'O', 'P', 'Y', '_', 'S', '_', 'B', 0,
  /* 4133 */ 'S', 'P', 'L', 'A', 'T', '_', 'B', 0,
  /* 4141 */ 'B', 'S', 'E', 'T', '_', 'B', 0,
  /* 4148 */ 'P', 'C', 'N', 'T', '_', 'B', 0,
  /* 4155 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'B', 0,
  /* 4164 */ 'S', 'T', '_', 'B', 0,
  /* 4169 */ 'A', 'S', 'U', 'B', '_', 'U', '_', 'B', 0,
  /* 4178 */ 'M', 'O', 'D', '_', 'U', '_', 'B', 0,
  /* 4186 */ 'C', 'L', 'E', '_', 'U', '_', 'B', 0,
  /* 4194 */ 'A', 'V', 'E', '_', 'U', '_', 'B', 0,
  /* 4202 */ 'C', 'L', 'E', 'I', '_', 'U', '_', 'B', 0,
  /* 4211 */ 'M', 'I', 'N', 'I', '_', 'U', '_', 'B', 0,
  /* 4220 */ 'C', 'L', 'T', 'I', '_', 'U', '_', 'B', 0,
  /* 4229 */ 'M', 'A', 'X', 'I', '_', 'U', '_', 'B', 0,
  /* 4238 */ 'M', 'I', 'N', '_', 'U', '_', 'B', 0,
  /* 4246 */ 'D', 'O', 'T', 'P', '_', 'U', '_', 'B', 0,
  /* 4255 */ 'A', 'V', 'E', 'R', '_', 'U', '_', 'B', 0,
  /* 4264 */ 'S', 'U', 'B', 'S', '_', 'U', '_', 'B', 0,
  /* 4273 */ 'A', 'D', 'D', 'S', '_', 'U', '_', 'B', 0,
  /* 4282 */ 'S', 'U', 'B', 'S', 'U', 'S', '_', 'U', '_', 'B', 0,
  /* 4293 */ 'S', 'A', 'T', '_', 'U', '_', 'B', 0,
  /* 4301 */ 'C', 'L', 'T', '_', 'U', '_', 'B', 0,
  /* 4309 */ 'D', 'I', 'V', '_', 'U', '_', 'B', 0,
  /* 4317 */ 'M', 'A', 'X', '_', 'U', '_', 'B', 0,
  /* 4325 */ 'C', 'O', 'P', 'Y', '_', 'U', '_', 'B', 0,
  /* 4334 */ 'M', 'S', 'U', 'B', 'V', '_', 'B', 0,
  /* 4342 */ 'M', 'A', 'D', 'D', 'V', '_', 'B', 0,
  /* 4350 */ 'P', 'C', 'K', 'E', 'V', '_', 'B', 0,
  /* 4358 */ 'I', 'L', 'V', 'E', 'V', '_', 'B', 0,
  /* 4366 */ 'M', 'U', 'L', 'V', '_', 'B', 0,
  /* 4373 */ 'L', 'D', 'X', '_', 'B', 0,
  /* 4379 */ 'S', 'T', 'X', '_', 'B', 0,
  /* 4385 */ 'B', 'Z', '_', 'B', 0,
  /* 4390 */ 'B', 'N', 'Z', '_', 'B', 0,
  /* 4396 */ 'S', 'Y', 'N', 'C', 0,
  /* 4401 */ 'A', 'D', 'D', 'S', 'C', 0,
  /* 4407 */ 'A', 'D', 'D', 'W', 'C', 0,
  /* 4413 */ 'S', 'C', 'D', 0,
  /* 4417 */ 'D', 'A', 'D', 'D', 0,
  /* 4422 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'A', 'D', 'D', 0,
  /* 4433 */ 'D', 'S', 'H', 'D', 0,
  /* 4438 */ 'L', 'L', 'D', 0,
  /* 4442 */ 'A', 'N', 'D', 0,
  /* 4446 */ 'P', 'R', 'E', 'P', 'E', 'N', 'D', 0,
  /* 4454 */ 'A', 'P', 'P', 'E', 'N', 'D', 0,
  /* 4461 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 4474 */ 'S', 'D', 0,
  /* 4477 */ 'F', 'L', 'O', 'G', '2', '_', 'D', 0,
  /* 4485 */ 'F', 'E', 'X', 'P', '2', '_', 'D', 0,
  /* 4493 */ 'S', 'R', 'A', '_', 'D', 0,
  /* 4499 */ 'A', 'D', 'D', '_', 'A', '_', 'D', 0,
  /* 4507 */ 'F', 'M', 'I', 'N', '_', 'A', '_', 'D', 0,
  /* 4516 */ 'A', 'D', 'D', 'S', '_', 'A', '_', 'D', 0,
  /* 4525 */ 'F', 'M', 'A', 'X', '_', 'A', '_', 'D', 0,
  /* 4534 */ 'F', 'S', 'U', 'B', '_', 'D', 0,
  /* 4541 */ 'F', 'M', 'S', 'U', 'B', '_', 'D', 0,
  /* 4549 */ 'N', 'L', 'O', 'C', '_', 'D', 0,
  /* 4556 */ 'N', 'L', 'Z', 'C', '_', 'D', 0,
  /* 4563 */ 'F', 'A', 'D', 'D', '_', 'D', 0,
  /* 4570 */ 'F', 'M', 'A', 'D', 'D', '_', 'D', 0,
  /* 4578 */ 'S', 'L', 'D', '_', 'D', 0,
  /* 4584 */ 'P', 'C', 'K', 'O', 'D', '_', 'D', 0,
  /* 4592 */ 'I', 'L', 'V', 'O', 'D', '_', 'D', 0,
  /* 4600 */ 'F', 'C', 'L', 'E', '_', 'D', 0,
  /* 4607 */ 'F', 'S', 'L', 'E', '_', 'D', 0,
  /* 4614 */ 'F', 'C', 'U', 'L', 'E', '_', 'D', 0,
  /* 4622 */ 'F', 'S', 'U', 'L', 'E', '_', 'D', 0,
  /* 4630 */ 'F', 'C', 'N', 'E', '_', 'D', 0,
  /* 4637 */ 'F', 'S', 'N', 'E', '_', 'D', 0,
  /* 4644 */ 'F', 'C', 'U', 'N', 'E', '_', 'D', 0,
  /* 4652 */ 'F', 'S', 'U', 'N', 'E', '_', 'D', 0,
  /* 4660 */ 'I', 'N', 'S', 'V', 'E', '_', 'D', 0,
  /* 4668 */ 'F', 'C', 'A', 'F', '_', 'D', 0,
  /* 4675 */ 'F', 'S', 'A', 'F', '_', 'D', 0,
  /* 4682 */ 'V', 'S', 'H', 'F', '_', 'D', 0,
  /* 4689 */ 'B', 'N', 'E', 'G', '_', 'D', 0,
  /* 4696 */ 'S', 'R', 'A', 'I', '_', 'D', 0,
  /* 4703 */ 'S', 'L', 'D', 'I', '_', 'D', 0,
  /* 4710 */ 'B', 'N', 'E', 'G', 'I', '_', 'D', 0,
  /* 4718 */ 'S', 'L', 'L', 'I', '_', 'D', 0,
  /* 4725 */ 'S', 'R', 'L', 'I', '_', 'D', 0,
  /* 4732 */ 'B', 'I', 'N', 'S', 'L', 'I', '_', 'D', 0,
  /* 4741 */ 'C', 'E', 'Q', 'I', '_', 'D', 0,
  /* 4748 */ 'S', 'R', 'A', 'R', 'I', '_', 'D', 0,
  /* 4756 */ 'B', 'C', 'L', 'R', 'I', '_', 'D', 0,
  /* 4764 */ 'S', 'R', 'L', 'R', 'I', '_', 'D', 0,
  /* 4772 */ 'B', 'I', 'N', 'S', 'R', 'I', '_', 'D', 0,
  /* 4781 */ 'S', 'P', 'L', 'A', 'T', 'I', '_', 'D', 0,
  /* 4790 */ 'B', 'S', 'E', 'T', 'I', '_', 'D', 0,
  /* 4798 */ 'S', 'U', 'B', 'V', 'I', '_', 'D', 0,
  /* 4806 */ 'A', 'D', 'D', 'V', 'I', '_', 'D', 0,
  /* 4814 */ 'S', 'L', 'L', '_', 'D', 0,
  /* 4820 */ 'F', 'E', 'X', 'U', 'P', 'L', '_', 'D', 0,
  /* 4829 */ 'F', 'F', 'Q', 'L', '_', 'D', 0,
  /* 4836 */ 'S', 'R', 'L', '_', 'D', 0,
  /* 4842 */ 'B', 'I', 'N', 'S', 'L', '_', 'D', 0,
  /* 4850 */ 'F', 'M', 'U', 'L', '_', 'D', 0,
  /* 4857 */ 'I', 'L', 'V', 'L', '_', 'D', 0,
  /* 4864 */ 'F', 'M', 'I', 'N', '_', 'D', 0,
  /* 4871 */ 'F', 'C', 'U', 'N', '_', 'D', 0,
  /* 4878 */ 'F', 'S', 'U', 'N', '_', 'D', 0,
  /* 4885 */ 'F', 'R', 'C', 'P', '_', 'D', 0,
  /* 4892 */ 'F', 'C', 'E', 'Q', '_', 'D', 0,
  /* 4899 */ 'F', 'S', 'E', 'Q', '_', 'D', 0,
  /* 4906 */ 'F', 'C', 'U', 'E', 'Q', '_', 'D', 0,
  /* 4914 */ 'F', 'S', 'U', 'E', 'Q', '_', 'D', 0,
  /* 4922 */ 'S', 'R', 'A', 'R', '_', 'D', 0,
  /* 4929 */ 'B', 'C', 'L', 'R', '_', 'D', 0,
  /* 4936 */ 'S', 'R', 'L', 'R', '_', 'D', 0,
  /* 4943 */ 'F', 'C', 'O', 'R', '_', 'D', 0,
  /* 4950 */ 'F', 'S', 'O', 'R', '_', 'D', 0,
  /* 4957 */ 'F', 'E', 'X', 'U', 'P', 'R', '_', 'D', 0,
  /* 4966 */ 'F', 'F', 'Q', 'R', '_', 'D', 0,
  /* 4973 */ 'B', 'I', 'N', 'S', 'R', '_', 'D', 0,
  /* 4981 */ 'I', 'L', 'V', 'R', '_', 'D', 0,
  /* 4988 */ 'F', 'C', 'L', 'A', 'S', 'S', '_', 'D', 0,
  /* 4997 */ 'A', 'S', 'U', 'B', '_', 'S', '_', 'D', 0,
  /* 5006 */ 'H', 'S', 'U', 'B', '_', 'S', '_', 'D', 0,
  /* 5015 */ 'D', 'P', 'S', 'U', 'B', '_', 'S', '_', 'D', 0,
  /* 5025 */ 'F', 'T', 'R', 'U', 'N', 'C', '_', 'S', '_', 'D', 0,
  /* 5036 */ 'H', 'A', 'D', 'D', '_', 'S', '_', 'D', 0,
  /* 5045 */ 'D', 'P', 'A', 'D', 'D', '_', 'S', '_', 'D', 0,
  /* 5055 */ 'M', 'O', 'D', '_', 'S', '_', 'D', 0,
  /* 5063 */ 'C', 'L', 'E', '_', 'S', '_', 'D', 0,
  /* 5071 */ 'A', 'V', 'E', '_', 'S', '_', 'D', 0,
  /* 5079 */ 'C', 'L', 'E', 'I', '_', 'S', '_', 'D', 0,
  /* 5088 */ 'M', 'I', 'N', 'I', '_', 'S', '_', 'D', 0,
  /* 5097 */ 'C', 'L', 'T', 'I', '_', 'S', '_', 'D', 0,
  /* 5106 */ 'M', 'A', 'X', 'I', '_', 'S', '_', 'D', 0,
  /* 5115 */ 'M', 'I', 'N', '_', 'S', '_', 'D', 0,
  /* 5123 */ 'D', 'O', 'T', 'P', '_', 'S', '_', 'D', 0,
  /* 5132 */ 'A', 'V', 'E', 'R', '_', 'S', '_', 'D', 0,
  /* 5141 */ 'S', 'U', 'B', 'S', '_', 'S', '_', 'D', 0,
  /* 5150 */ 'A', 'D', 'D', 'S', '_', 'S', '_', 'D', 0,
  /* 5159 */ 'S', 'A', 'T', '_', 'S', '_', 'D', 0,
  /* 5167 */ 'C', 'L', 'T', '_', 'S', '_', 'D', 0,
  /* 5175 */ 'F', 'F', 'I', 'N', 'T', '_', 'S', '_', 'D', 0,
  /* 5185 */ 'F', 'T', 'I', 'N', 'T', '_', 'S', '_', 'D', 0,
  /* 5195 */ 'S', 'U', 'B', 'S', 'U', 'U', '_', 'S', '_', 'D', 0,
  /* 5206 */ 'D', 'I', 'V', '_', 'S', '_', 'D', 0,
  /* 5214 */ 'M', 'A', 'X', '_', 'S', '_', 'D', 0,
  /* 5222 */ 'S', 'P', 'L', 'A', 'T', '_', 'D', 0,
  /* 5230 */ 'B', 'S', 'E', 'T', '_', 'D', 0,
  /* 5237 */ 'F', 'C', 'L', 'T', '_', 'D', 0,
  /* 5244 */ 'F', 'S', 'L', 'T', '_', 'D', 0,
  /* 5251 */ 'F', 'C', 'U', 'L', 'T', '_', 'D', 0,
  /* 5259 */ 'F', 'S', 'U', 'L', 'T', '_', 'D', 0,
  /* 5267 */ 'P', 'C', 'N', 'T', '_', 'D', 0,
  /* 5274 */ 'F', 'R', 'I', 'N', 'T', '_', 'D', 0,
  /* 5282 */ 'F', 'S', 'Q', 'R', 'T', '_', 'D', 0,
  /* 5290 */ 'F', 'R', 'S', 'Q', 'R', 'T', '_', 'D', 0,
  /* 5299 */ 'S', 'T', '_', 'D', 0,
  /* 5304 */ 'A', 'S', 'U', 'B', '_', 'U', '_', 'D', 0,
  /* 5313 */ 'H', 'S', 'U', 'B', '_', 'U', '_', 'D', 0,
  /* 5322 */ 'D', 'P', 'S', 'U', 'B', '_', 'U', '_', 'D', 0,
  /* 5332 */ 'F', 'T', 'R', 'U', 'N', 'C', '_', 'U', '_', 'D', 0,
  /* 5343 */ 'H', 'A', 'D', 'D', '_', 'U', '_', 'D', 0,
  /* 5352 */ 'D', 'P', 'A', 'D', 'D', '_', 'U', '_', 'D', 0,
  /* 5362 */ 'M', 'O', 'D', '_', 'U', '_', 'D', 0,
  /* 5370 */ 'C', 'L', 'E', '_', 'U', '_', 'D', 0,
  /* 5378 */ 'A', 'V', 'E', '_', 'U', '_', 'D', 0,
  /* 5386 */ 'C', 'L', 'E', 'I', '_', 'U', '_', 'D', 0,
  /* 5395 */ 'M', 'I', 'N', 'I', '_', 'U', '_', 'D', 0,
  /* 5404 */ 'C', 'L', 'T', 'I', '_', 'U', '_', 'D', 0,
  /* 5413 */ 'M', 'A', 'X', 'I', '_', 'U', '_', 'D', 0,
  /* 5422 */ 'M', 'I', 'N', '_', 'U', '_', 'D', 0,
  /* 5430 */ 'D', 'O', 'T', 'P', '_', 'U', '_', 'D', 0,
  /* 5439 */ 'A', 'V', 'E', 'R', '_', 'U', '_', 'D', 0,
  /* 5448 */ 'S', 'U', 'B', 'S', '_', 'U', '_', 'D', 0,
  /* 5457 */ 'A', 'D', 'D', 'S', '_', 'U', '_', 'D', 0,
  /* 5466 */ 'S', 'U', 'B', 'S', 'U', 'S', '_', 'U', '_', 'D', 0,
  /* 5477 */ 'S', 'A', 'T', '_', 'U', '_', 'D', 0,
  /* 5485 */ 'C', 'L', 'T', '_', 'U', '_', 'D', 0,
  /* 5493 */ 'F', 'F', 'I', 'N', 'T', '_', 'U', '_', 'D', 0,
  /* 5503 */ 'F', 'T', 'I', 'N', 'T', '_', 'U', '_', 'D', 0,
  /* 5513 */ 'D', 'I', 'V', '_', 'U', '_', 'D', 0,
  /* 5521 */ 'M', 'A', 'X', '_', 'U', '_', 'D', 0,
  /* 5529 */ 'M', 'S', 'U', 'B', 'V', '_', 'D', 0,
  /* 5537 */ 'M', 'A', 'D', 'D', 'V', '_', 'D', 0,
  /* 5545 */ 'P', 'C', 'K', 'E', 'V', '_', 'D', 0,
  /* 5553 */ 'I', 'L', 'V', 'E', 'V', '_', 'D', 0,
  /* 5561 */ 'F', 'D', 'I', 'V', '_', 'D', 0,
  /* 5568 */ 'M', 'U', 'L', 'V', '_', 'D', 0,
  /* 5575 */ 'F', 'M', 'A', 'X', '_', 'D', 0,
  /* 5582 */ 'L', 'D', 'X', '_', 'D', 0,
  /* 5588 */ 'S', 'T', 'X', '_', 'D', 0,
  /* 5594 */ 'B', 'Z', '_', 'D', 0,
  /* 5599 */ 'B', 'N', 'Z', '_', 'D', 0,
  /* 5605 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 5618 */ 'T', 'G', 'E', 0,
  /* 5622 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 5629 */ 'B', 'N', 'E', 0,
  /* 5633 */ 'T', 'N', 'E', 0,
  /* 5637 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 5647 */ 'B', 'C', '1', 'F', 0,
  /* 5652 */ 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 5665 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 5680 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 5694 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 5708 */ 'D', 'S', 'B', 'H', 0,
  /* 5713 */ 'W', 'S', 'B', 'H', 0,
  /* 5718 */ 'S', 'E', 'H', 0,
  /* 5722 */ 'L', 'H', 0,
  /* 5725 */ 'S', 'H', 'R', 'A', '_', 'P', 'H', 0,
  /* 5733 */ 'P', 'R', 'E', 'C', 'R', 'Q', '_', 'Q', 'B', '_', 'P', 'H', 0,
  /* 5746 */ 'P', 'R', 'E', 'C', 'R', '_', 'Q', 'B', '_', 'P', 'H', 0,
  /* 5758 */ 'P', 'R', 'E', 'C', 'R', 'Q', 'U', '_', 'S', '_', 'Q', 'B', '_', 'P', 'H', 0,
  /* 5774 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', '_', 'L', 'E', '_', 'P', 'H', 0,
  /* 5790 */ 'S', 'U', 'B', 'Q', 'H', '_', 'P', 'H', 0,
  /* 5799 */ 'A', 'D', 'D', 'Q', 'H', '_', 'P', 'H', 0,
  /* 5808 */ 'P', 's', 'e', 'u', 'd', 'o', 'P', 'I', 'C', 'K', '_', 'P', 'H', 0,
  /* 5822 */ 'S', 'H', 'L', 'L', '_', 'P', 'H', 0,
  /* 5830 */ 'R', 'E', 'P', 'L', '_', 'P', 'H', 0,
  /* 5838 */ 'S', 'H', 'R', 'L', '_', 'P', 'H', 0,
  /* 5846 */ 'P', 'A', 'C', 'K', 'R', 'L', '_', 'P', 'H', 0,
  /* 5856 */ 'M', 'U', 'L', '_', 'P', 'H', 0,
  /* 5863 */ 'S', 'U', 'B', 'Q', '_', 'P', 'H', 0,
  /* 5871 */ 'A', 'D', 'D', 'Q', '_', 'P', 'H', 0,
  /* 5879 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', '_', 'E', 'Q', '_', 'P', 'H', 0,
  /* 5895 */ 'S', 'H', 'R', 'A', '_', 'R', '_', 'P', 'H', 0,
  /* 5905 */ 'S', 'U', 'B', 'Q', 'H', '_', 'R', '_', 'P', 'H', 0,
  /* 5916 */ 'A', 'D', 'D', 'Q', 'H', '_', 'R', '_', 'P', 'H', 0,
  /* 5927 */ 'S', 'H', 'R', 'A', 'V', '_', 'R', '_', 'P', 'H', 0,
  /* 5938 */ 'M', 'U', 'L', 'Q', '_', 'R', 'S', '_', 'P', 'H', 0,
  /* 5949 */ 'S', 'H', 'L', 'L', '_', 'S', '_', 'P', 'H', 0,
  /* 5959 */ 'M', 'U', 'L', '_', 'S', '_', 'P', 'H', 0,
  /* 5968 */ 'S', 'U', 'B', 'Q', '_', 'S', '_', 'P', 'H', 0,
  /* 5978 */ 'A', 'D', 'D', 'Q', '_', 'S', '_', 'P', 'H', 0,
  /* 5988 */ 'M', 'U', 'L', 'Q', '_', 'S', '_', 'P', 'H', 0,
  /* 5998 */ 'A', 'B', 'S', 'Q', '_', 'S', '_', 'P', 'H', 0,
  /* 6008 */ 'S', 'U', 'B', 'U', '_', 'S', '_', 'P', 'H', 0,
  /* 6018 */ 'A', 'D', 'D', 'U', '_', 'S', '_', 'P', 'H', 0,
  /* 6028 */ 'S', 'H', 'L', 'L', 'V', '_', 'S', '_', 'P', 'H', 0,
  /* 6039 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', '_', 'L', 'T', '_', 'P', 'H', 0,
  /* 6055 */ 'S', 'U', 'B', 'U', '_', 'P', 'H', 0,
  /* 6063 */ 'A', 'D', 'D', 'U', '_', 'P', 'H', 0,
  /* 6071 */ 'S', 'H', 'R', 'A', 'V', '_', 'P', 'H', 0,
  /* 6080 */ 'S', 'H', 'L', 'L', 'V', '_', 'P', 'H', 0,
  /* 6089 */ 'R', 'E', 'P', 'L', 'V', '_', 'P', 'H', 0,
  /* 6098 */ 'S', 'H', 'R', 'L', 'V', '_', 'P', 'H', 0,
  /* 6107 */ 'D', 'P', 'A', '_', 'W', '_', 'P', 'H', 0,
  /* 6116 */ 'M', 'U', 'L', 'S', 'A', '_', 'W', '_', 'P', 'H', 0,
  /* 6127 */ 'D', 'P', 'A', 'Q', 'X', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 0,
  /* 6141 */ 'D', 'P', 'S', 'Q', 'X', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 0,
  /* 6155 */ 'D', 'P', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 6164 */ 'D', 'P', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 6176 */ 'M', 'U', 'L', 'S', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 6190 */ 'D', 'P', 'S', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 6202 */ 'D', 'P', 'A', 'Q', 'X', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 6215 */ 'D', 'P', 'S', 'Q', 'X', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 6228 */ 'D', 'P', 'A', 'X', '_', 'W', '_', 'P', 'H', 0,
  /* 6238 */ 'D', 'P', 'S', 'X', '_', 'W', '_', 'P', 'H', 0,
  /* 6248 */ 'S', 'H', 0,
  /* 6251 */ 'S', 'R', 'A', '_', 'H', 0,
  /* 6257 */ 'A', 'D', 'D', '_', 'A', '_', 'H', 0,
  /* 6265 */ 'M', 'I', 'N', '_', 'A', '_', 'H', 0,
  /* 6273 */ 'A', 'D', 'D', 'S', '_', 'A', '_', 'H', 0,
  /* 6282 */ 'M', 'A', 'X', '_', 'A', '_', 'H', 0,
  /* 6290 */ 'N', 'L', 'O', 'C', '_', 'H', 0,
  /* 6297 */ 'N', 'L', 'Z', 'C', '_', 'H', 0,
  /* 6304 */ 'S', 'L', 'D', '_', 'H', 0,
  /* 6310 */ 'P', 'C', 'K', 'O', 'D', '_', 'H', 0,
  /* 6318 */ 'I', 'L', 'V', 'O', 'D', '_', 'H', 0,
  /* 6326 */ 'I', 'N', 'S', 'V', 'E', '_', 'H', 0,
  /* 6334 */ 'V', 'S', 'H', 'F', '_', 'H', 0,
  /* 6341 */ 'B', 'N', 'E', 'G', '_', 'H', 0,
  /* 6348 */ 'S', 'R', 'A', 'I', '_', 'H', 0,
  /* 6355 */ 'S', 'L', 'D', 'I', '_', 'H', 0,
  /* 6362 */ 'B', 'N', 'E', 'G', 'I', '_', 'H', 0,
  /* 6370 */ 'S', 'L', 'L', 'I', '_', 'H', 0,
  /* 6377 */ 'S', 'R', 'L', 'I', '_', 'H', 0,
  /* 6384 */ 'B', 'I', 'N', 'S', 'L', 'I', '_', 'H', 0,
  /* 6393 */ 'C', 'E', 'Q', 'I', '_', 'H', 0,
  /* 6400 */ 'S', 'R', 'A', 'R', 'I', '_', 'H', 0,
  /* 6408 */ 'B', 'C', 'L', 'R', 'I', '_', 'H', 0,
  /* 6416 */ 'S', 'R', 'L', 'R', 'I', '_', 'H', 0,
  /* 6424 */ 'B', 'I', 'N', 'S', 'R', 'I', '_', 'H', 0,
  /* 6433 */ 'S', 'P', 'L', 'A', 'T', 'I', '_', 'H', 0,
  /* 6442 */ 'B', 'S', 'E', 'T', 'I', '_', 'H', 0,
  /* 6450 */ 'S', 'U', 'B', 'V', 'I', '_', 'H', 0,
  /* 6458 */ 'A', 'D', 'D', 'V', 'I', '_', 'H', 0,
  /* 6466 */ 'F', 'I', 'L', 'L', '_', 'H', 0,
  /* 6473 */ 'S', 'L', 'L', '_', 'H', 0,
  /* 6479 */ 'S', 'R', 'L', '_', 'H', 0,
  /* 6485 */ 'B', 'I', 'N', 'S', 'L', '_', 'H', 0,
  /* 6493 */ 'I', 'L', 'V', 'L', '_', 'H', 0,
  /* 6500 */ 'F', 'E', 'X', 'D', 'O', '_', 'H', 0,
  /* 6508 */ 'C', 'E', 'Q', '_', 'H', 0,
  /* 6514 */ 'F', 'T', 'Q', '_', 'H', 0,
  /* 6520 */ 'M', 'S', 'U', 'B', '_', 'Q', '_', 'H', 0,
  /* 6529 */ 'M', 'A', 'D', 'D', '_', 'Q', '_', 'H', 0,
  /* 6538 */ 'M', 'U', 'L', '_', 'Q', '_', 'H', 0,
  /* 6546 */ 'M', 'S', 'U', 'B', 'R', '_', 'Q', '_', 'H', 0,
  /* 6556 */ 'M', 'A', 'D', 'D', 'R', '_', 'Q', '_', 'H', 0,
  /* 6566 */ 'M', 'U', 'L', 'R', '_', 'Q', '_', 'H', 0,
  /* 6575 */ 'S', 'R', 'A', 'R', '_', 'H', 0,
  /* 6582 */ 'B', 'C', 'L', 'R', '_', 'H', 0,
  /* 6589 */ 'S', 'R', 'L', 'R', '_', 'H', 0,
  /* 6596 */ 'B', 'I', 'N', 'S', 'R', '_', 'H', 0,
  /* 6604 */ 'I', 'L', 'V', 'R', '_', 'H', 0,
  /* 6611 */ 'A', 'S', 'U', 'B', '_', 'S', '_', 'H', 0,
  /* 6620 */ 'H', 'S', 'U', 'B', '_', 'S', '_', 'H', 0,
  /* 6629 */ 'D', 'P', 'S', 'U', 'B', '_', 'S', '_', 'H', 0,
  /* 6639 */ 'H', 'A', 'D', 'D', '_', 'S', '_', 'H', 0,
  /* 6648 */ 'D', 'P', 'A', 'D', 'D', '_', 'S', '_', 'H', 0,
  /* 6658 */ 'M', 'O', 'D', '_', 'S', '_', 'H', 0,
  /* 6666 */ 'C', 'L', 'E', '_', 'S', '_', 'H', 0,
  /* 6674 */ 'A', 'V', 'E', '_', 'S', '_', 'H', 0,
  /* 6682 */ 'C', 'L', 'E', 'I', '_', 'S', '_', 'H', 0,
  /* 6691 */ 'M', 'I', 'N', 'I', '_', 'S', '_', 'H', 0,
  /* 6700 */ 'C', 'L', 'T', 'I', '_', 'S', '_', 'H', 0,
  /* 6709 */ 'M', 'A', 'X', 'I', '_', 'S', '_', 'H', 0,
  /* 6718 */ 'M', 'I', 'N', '_', 'S', '_', 'H', 0,
  /* 6726 */ 'D', 'O', 'T', 'P', '_', 'S', '_', 'H', 0,
  /* 6735 */ 'A', 'V', 'E', 'R', '_', 'S', '_', 'H', 0,
  /* 6744 */ 'E', 'X', 'T', 'R', '_', 'S', '_', 'H', 0,
  /* 6753 */ 'S', 'U', 'B', 'S', '_', 'S', '_', 'H', 0,
  /* 6762 */ 'A', 'D', 'D', 'S', '_', 'S', '_', 'H', 0,
  /* 6771 */ 'S', 'A', 'T', '_', 'S', '_', 'H', 0,
  /* 6779 */ 'C', 'L', 'T', '_', 'S', '_', 'H', 0,
  /* 6787 */ 'S', 'U', 'B', 'S', 'U', 'U', '_', 'S', '_', 'H', 0,
  /* 6798 */ 'D', 'I', 'V', '_', 'S', '_', 'H', 0,
  /* 6806 */ 'E', 'X', 'T', 'R', 'V', '_', 'S', '_', 'H', 0,
  /* 6816 */ 'M', 'A', 'X', '_', 'S', '_', 'H', 0,
  /* 6824 */ 'C', 'O', 'P', 'Y', '_', 'S', '_', 'H', 0,
  /* 6833 */ 'S', 'P', 'L', 'A', 'T', '_', 'H', 0,
  /* 6841 */ 'B', 'S', 'E', 'T', '_', 'H', 0,
  /* 6848 */ 'P', 'C', 'N', 'T', '_', 'H', 0,
  /* 6855 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'H', 0,
  /* 6864 */ 'S', 'T', '_', 'H', 0,
  /* 6869 */ 'A', 'S', 'U', 'B', '_', 'U', '_', 'H', 0,
  /* 6878 */ 'H', 'S', 'U', 'B', '_', 'U', '_', 'H', 0,
  /* 6887 */ 'D', 'P', 'S', 'U', 'B', '_', 'U', '_', 'H', 0,
  /* 6897 */ 'H', 'A', 'D', 'D', '_', 'U', '_', 'H', 0,
  /* 6906 */ 'D', 'P', 'A', 'D', 'D', '_', 'U', '_', 'H', 0,
  /* 6916 */ 'M', 'O', 'D', '_', 'U', '_', 'H', 0,
  /* 6924 */ 'C', 'L', 'E', '_', 'U', '_', 'H', 0,
  /* 6932 */ 'A', 'V', 'E', '_', 'U', '_', 'H', 0,
  /* 6940 */ 'C', 'L', 'E', 'I', '_', 'U', '_', 'H', 0,
  /* 6949 */ 'M', 'I', 'N', 'I', '_', 'U', '_', 'H', 0,
  /* 6958 */ 'C', 'L', 'T', 'I', '_', 'U', '_', 'H', 0,
  /* 6967 */ 'M', 'A', 'X', 'I', '_', 'U', '_', 'H', 0,
  /* 6976 */ 'M', 'I', 'N', '_', 'U', '_', 'H', 0,
  /* 6984 */ 'D', 'O', 'T', 'P', '_', 'U', '_', 'H', 0,
  /* 6993 */ 'A', 'V', 'E', 'R', '_', 'U', '_', 'H', 0,
  /* 7002 */ 'S', 'U', 'B', 'S', '_', 'U', '_', 'H', 0,
  /* 7011 */ 'A', 'D', 'D', 'S', '_', 'U', '_', 'H', 0,
  /* 7020 */ 'S', 'U', 'B', 'S', 'U', 'S', '_', 'U', '_', 'H', 0,
  /* 7031 */ 'S', 'A', 'T', '_', 'U', '_', 'H', 0,
  /* 7039 */ 'C', 'L', 'T', '_', 'U', '_', 'H', 0,
  /* 7047 */ 'D', 'I', 'V', '_', 'U', '_', 'H', 0,
  /* 7055 */ 'M', 'A', 'X', '_', 'U', '_', 'H', 0,
  /* 7063 */ 'C', 'O', 'P', 'Y', '_', 'U', '_', 'H', 0,
  /* 7072 */ 'M', 'S', 'U', 'B', 'V', '_', 'H', 0,
  /* 7080 */ 'M', 'A', 'D', 'D', 'V', '_', 'H', 0,
  /* 7088 */ 'P', 'C', 'K', 'E', 'V', '_', 'H', 0,
  /* 7096 */ 'I', 'L', 'V', 'E', 'V', '_', 'H', 0,
  /* 7104 */ 'M', 'U', 'L', 'V', '_', 'H', 0,
  /* 7111 */ 'L', 'D', 'X', '_', 'H', 0,
  /* 7117 */ 'S', 'T', 'X', '_', 'H', 0,
  /* 7123 */ 'B', 'Z', '_', 'H', 0,
  /* 7128 */ 'B', 'N', 'Z', '_', 'H', 0,
  /* 7134 */ 'D', 'I', 0,
  /* 7137 */ 'T', 'G', 'E', 'I', 0,
  /* 7142 */ 'T', 'N', 'E', 'I', 0,
  /* 7147 */ 'M', 'F', 'H', 'I', 0,
  /* 7152 */ 'P', 'H', 'I', 0,
  /* 7156 */ 'M', 'T', 'H', 'I', 0,
  /* 7161 */ 'T', 'E', 'Q', 'I', 0,
  /* 7166 */ 'T', 'L', 'T', 'I', 0,
  /* 7171 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'I', 0,
  /* 7182 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'I', 0,
  /* 7193 */ 'M', 'O', 'V', 'F', '_', 'I', 0,
  /* 7200 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'I', 0,
  /* 7209 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'I', 0,
  /* 7218 */ 'M', 'O', 'V', 'T', '_', 'I', 0,
  /* 7225 */ 'J', 0,
  /* 7227 */ 'B', 'R', 'E', 'A', 'K', 0,
  /* 7233 */ 'J', 'A', 'L', 0,
  /* 7237 */ 'B', 'G', 'E', 'Z', 'A', 'L', 0,
  /* 7244 */ 'B', 'L', 'T', 'Z', 'A', 'L', 0,
  /* 7251 */ 'M', 'U', 'L', 'E', 'U', '_', 'S', '_', 'P', 'H', '_', 'Q', 'B', 'L', 0,
  /* 7266 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 0,
  /* 7280 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 0,
  /* 7295 */ 'D', 'P', 'A', 'U', '_', 'H', '_', 'Q', 'B', 'L', 0,
  /* 7306 */ 'D', 'P', 'S', 'U', '_', 'H', '_', 'Q', 'B', 'L', 0,
  /* 7317 */ 'L', 'D', 'L', 0,
  /* 7321 */ 'S', 'D', 'L', 0,
  /* 7325 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 7334 */ 'P', 'R', 'O', 'L', 'O', 'G', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 7347 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 7356 */ 'M', 'A', 'Q', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 'L', 0,
  /* 7369 */ 'P', 'R', 'E', 'C', 'E', 'Q', '_', 'W', '_', 'P', 'H', 'L', 0,
  /* 7382 */ 'M', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'L', 0,
  /* 7394 */ 'M', 'U', 'L', 'E', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'L', 0,
  /* 7408 */ 'T', 'A', 'I', 'L', 'C', 'A', 'L', 'L', 0,
  /* 7417 */ 'S', 'Y', 'S', 'C', 'A', 'L', 'L', 0,
  /* 7425 */ 'K', 'I', 'L', 'L', 0,
  /* 7430 */ 'D', 'S', 'L', 'L', 0,
  /* 7435 */ 'D', 'S', 'R', 'L', 0,
  /* 7440 */ 'M', 'U', 'L', 0,
  /* 7444 */ 'L', 'W', 'L', 0,
  /* 7448 */ 'S', 'W', 'L', 0,
  /* 7452 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'V', 'T', '_', 'D', '6', '4', '_', 'L', 0,
  /* 7468 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'V', 'T', '_', 'S', '_', 'L', 0,
  /* 7482 */ 'S', 'R', 'A', '_', 'M', 'M', 0,
  /* 7489 */ 'L', 'B', '_', 'M', 'M', 0,
  /* 7495 */ 'S', 'B', '_', 'M', 'M', 0,
  /* 7501 */ 'S', 'U', 'B', '_', 'M', 'M', 0,
  /* 7508 */ 'A', 'D', 'D', '_', 'M', 'M', 0,
  /* 7515 */ 'A', 'N', 'D', '_', 'M', 'M', 0,
  /* 7522 */ 'L', 'H', '_', 'M', 'M', 0,
  /* 7528 */ 'S', 'H', '_', 'M', 'M', 0,
  /* 7534 */ 'S', 'L', 'L', '_', 'M', 'M', 0,
  /* 7541 */ 'S', 'R', 'L', '_', 'M', 'M', 0,
  /* 7548 */ 'M', 'U', 'L', '_', 'M', 'M', 0,
  /* 7555 */ 'L', 'W', 'L', '_', 'M', 'M', 0,
  /* 7562 */ 'S', 'W', 'L', '_', 'M', 'M', 0,
  /* 7569 */ 'N', 'O', 'R', '_', 'M', 'M', 0,
  /* 7576 */ 'X', 'O', 'R', '_', 'M', 'M', 0,
  /* 7583 */ 'R', 'O', 'T', 'R', '_', 'M', 'M', 0,
  /* 7591 */ 'L', 'W', 'R', '_', 'M', 'M', 0,
  /* 7598 */ 'S', 'W', 'R', '_', 'M', 'M', 0,
  /* 7605 */ 'S', 'L', 'T', '_', 'M', 'M', 0,
  /* 7612 */ 'M', 'U', 'L', 'T', '_', 'M', 'M', 0,
  /* 7620 */ 'S', 'R', 'A', 'V', '_', 'M', 'M', 0,
  /* 7628 */ 'S', 'L', 'L', 'V', '_', 'M', 'M', 0,
  /* 7636 */ 'S', 'R', 'L', 'V', '_', 'M', 'M', 0,
  /* 7644 */ 'R', 'O', 'T', 'R', 'V', '_', 'M', 'M', 0,
  /* 7653 */ 'L', 'W', '_', 'M', 'M', 0,
  /* 7659 */ 'S', 'W', '_', 'M', 'M', 0,
  /* 7665 */ 'A', 'D', 'D', 'i', '_', 'M', 'M', 0,
  /* 7673 */ 'A', 'N', 'D', 'i', '_', 'M', 'M', 0,
  /* 7681 */ 'X', 'O', 'R', 'i', '_', 'M', 'M', 0,
  /* 7689 */ 'S', 'L', 'T', 'i', '_', 'M', 'M', 0,
  /* 7697 */ 'L', 'U', 'i', '_', 'M', 'M', 0,
  /* 7704 */ 'L', 'B', 'u', '_', 'M', 'M', 0,
  /* 7711 */ 'S', 'U', 'B', 'u', '_', 'M', 'M', 0,
  /* 7719 */ 'A', 'D', 'D', 'u', '_', 'M', 'M', 0,
  /* 7727 */ 'L', 'H', 'u', '_', 'M', 'M', 0,
  /* 7734 */ 'S', 'L', 'T', 'u', '_', 'M', 'M', 0,
  /* 7742 */ 'M', 'U', 'L', 'T', 'u', '_', 'M', 'M', 0,
  /* 7751 */ 'A', 'D', 'D', 'i', 'u', '_', 'M', 'M', 0,
  /* 7760 */ 'S', 'L', 'T', 'i', 'u', '_', 'M', 'M', 0,
  /* 7769 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 7779 */ 'D', 'I', 'N', 'S', 'M', 0,
  /* 7785 */ 'D', 'E', 'X', 'T', 'M', 0,
  /* 7791 */ 'B', 'A', 'L', 'I', 'G', 'N', 0,
  /* 7798 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 7815 */ 'B', 'P', 'O', 'S', 'G', 'E', '3', '2', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 7831 */ 'S', 'N', 'Z', '_', 'B', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 7844 */ 'S', 'Z', '_', 'B', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 7856 */ 'S', 'N', 'Z', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 7869 */ 'S', 'Z', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 7881 */ 'S', 'N', 'Z', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 7894 */ 'S', 'Z', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 7906 */ 'S', 'N', 'Z', '_', 'V', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 7919 */ 'S', 'Z', '_', 'V', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 7931 */ 'S', 'N', 'Z', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 7944 */ 'S', 'Z', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 7956 */ 'D', 'C', 'L', 'O', 0,
  /* 7961 */ 'M', 'F', 'L', 'O', 0,
  /* 7966 */ 'S', 'H', 'I', 'L', 'O', 0,
  /* 7972 */ 'M', 'T', 'L', 'O', 0,
  /* 7977 */ 'T', 'R', 'A', 'P', 0,
  /* 7982 */ 'E', 'X', 'T', 'P', 'D', 'P', 0,
  /* 7989 */ 'M', 'T', 'H', 'L', 'I', 'P', 0,
  /* 7996 */ 'N', 'O', 'P', 0,
  /* 8000 */ 'L', 'O', 'A', 'D', '_', 'A', 'C', 'C', '6', '4', 'D', 'S', 'P', 0,
  /* 8014 */ 'S', 'T', 'O', 'R', 'E', '_', 'A', 'C', 'C', '6', '4', 'D', 'S', 'P', 0,
  /* 8029 */ 'R', 'D', 'D', 'S', 'P', 0,
  /* 8035 */ 'W', 'R', 'D', 'S', 'P', 0,
  /* 8041 */ 'M', 'S', 'U', 'B', '_', 'D', 'S', 'P', 0,
  /* 8050 */ 'M', 'A', 'D', 'D', '_', 'D', 'S', 'P', 0,
  /* 8059 */ 'L', 'O', 'A', 'D', '_', 'C', 'C', 'O', 'N', 'D', '_', 'D', 'S', 'P', 0,
  /* 8074 */ 'S', 'T', 'O', 'R', 'E', '_', 'C', 'C', 'O', 'N', 'D', '_', 'D', 'S', 'P', 0,
  /* 8090 */ 'M', 'F', 'H', 'I', '_', 'D', 'S', 'P', 0,
  /* 8099 */ 'M', 'T', 'H', 'I', '_', 'D', 'S', 'P', 0,
  /* 8108 */ 'M', 'F', 'L', 'O', '_', 'D', 'S', 'P', 0,
  /* 8117 */ 'M', 'T', 'L', 'O', '_', 'D', 'S', 'P', 0,
  /* 8126 */ 'M', 'U', 'L', 'T', '_', 'D', 'S', 'P', 0,
  /* 8135 */ 'M', 'S', 'U', 'B', 'U', '_', 'D', 'S', 'P', 0,
  /* 8145 */ 'M', 'A', 'D', 'D', 'U', '_', 'D', 'S', 'P', 0,
  /* 8155 */ 'M', 'U', 'L', 'T', 'U', '_', 'D', 'S', 'P', 0,
  /* 8165 */ 'E', 'X', 'T', 'P', 0,
  /* 8170 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 8185 */ 'B', 'E', 'Q', 0,
  /* 8189 */ 'T', 'E', 'Q', 0,
  /* 8193 */ 'M', 'U', 'L', 'E', 'U', '_', 'S', '_', 'P', 'H', '_', 'Q', 'B', 'R', 0,
  /* 8208 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 0,
  /* 8222 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 0,
  /* 8237 */ 'D', 'P', 'A', 'U', '_', 'H', '_', 'Q', 'B', 'R', 0,
  /* 8248 */ 'D', 'P', 'S', 'U', '_', 'H', '_', 'Q', 'B', 'R', 0,
  /* 8259 */ 'B', 'A', 'L', '_', 'B', 'R', 0,
  /* 8266 */ 'L', 'D', 'R', 0,
  /* 8270 */ 'S', 'D', 'R', 0,
  /* 8274 */ 'M', 'A', 'Q', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 'R', 0,
  /* 8287 */ 'P', 'R', 'E', 'C', 'E', 'Q', '_', 'W', '_', 'P', 'H', 'R', 0,
  /* 8300 */ 'M', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'R', 0,
  /* 8312 */ 'M', 'U', 'L', 'E', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'R', 0,
  /* 8326 */ 'J', 'R', 0,
  /* 8329 */ 'J', 'A', 'L', 'R', 0,
  /* 8334 */ 'N', 'O', 'R', 0,
  /* 8338 */ 'X', 'O', 'R', 0,
  /* 8342 */ 'D', 'R', 'O', 'T', 'R', 0,
  /* 8348 */ 'R', 'D', 'H', 'W', 'R', 0,
  /* 8354 */ 'L', 'W', 'R', 0,
  /* 8358 */ 'S', 'W', 'R', 0,
  /* 8362 */ 'T', 'A', 'I', 'L', 'C', 'A', 'L', 'L', '6', '4', '_', 'R', 0,
  /* 8375 */ 'T', 'A', 'I', 'L', 'C', 'A', 'L', 'L', '_', 'R', 0,
  /* 8386 */ 'D', 'I', 'N', 'S', 0,
  /* 8391 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 8408 */ 'C', 'V', 'T', '_', 'D', '3', '2', '_', 'S', 0,
  /* 8418 */ 'C', 'V', 'T', '_', 'D', '6', '4', '_', 'S', 0,
  /* 8428 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'S', 0,
  /* 8439 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'S', 0,
  /* 8450 */ 'F', 'S', 'U', 'B', '_', 'S', 0,
  /* 8457 */ 'N', 'M', 'S', 'U', 'B', '_', 'S', 0,
  /* 8465 */ 'F', 'A', 'D', 'D', '_', 'S', 0,
  /* 8472 */ 'N', 'M', 'A', 'D', 'D', '_', 'S', 0,
  /* 8480 */ 'C', '_', 'N', 'G', 'E', '_', 'S', 0,
  /* 8488 */ 'C', '_', 'N', 'G', 'L', 'E', '_', 'S', 0,
  /* 8497 */ 'C', '_', 'O', 'L', 'E', '_', 'S', 0,
  /* 8505 */ 'C', '_', 'U', 'L', 'E', '_', 'S', 0,
  /* 8513 */ 'C', '_', 'L', 'E', '_', 'S', 0,
  /* 8520 */ 'C', '_', 'S', 'F', '_', 'S', 0,
  /* 8527 */ 'M', 'O', 'V', 'F', '_', 'S', 0,
  /* 8534 */ 'C', '_', 'F', '_', 'S', 0,
  /* 8540 */ 'F', 'N', 'E', 'G', '_', 'S', 0,
  /* 8547 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'S', 0,
  /* 8556 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'S', 0,
  /* 8565 */ 'C', '_', 'N', 'G', 'L', '_', 'S', 0,
  /* 8573 */ 'F', 'M', 'U', 'L', '_', 'S', 0,
  /* 8580 */ 'T', 'R', 'U', 'N', 'C', '_', 'L', '_', 'S', 0,
  /* 8590 */ 'R', 'O', 'U', 'N', 'D', '_', 'L', '_', 'S', 0,
  /* 8600 */ 'C', 'E', 'I', 'L', '_', 'L', '_', 'S', 0,
  /* 8609 */ 'F', 'L', 'O', 'O', 'R', '_', 'L', '_', 'S', 0,
  /* 8619 */ 'C', 'V', 'T', '_', 'L', '_', 'S', 0,
  /* 8627 */ 'C', '_', 'U', 'N', '_', 'S', 0,
  /* 8634 */ 'C', '_', 'S', 'E', 'Q', '_', 'S', 0,
  /* 8642 */ 'C', '_', 'U', 'E', 'Q', '_', 'S', 0,
  /* 8650 */ 'C', '_', 'E', 'Q', '_', 'S', 0,
  /* 8657 */ 'F', 'A', 'B', 'S', '_', 'S', 0,
  /* 8664 */ 'C', '_', 'N', 'G', 'T', '_', 'S', 0,
  /* 8672 */ 'C', '_', 'O', 'L', 'T', '_', 'S', 0,
  /* 8680 */ 'C', '_', 'U', 'L', 'T', '_', 'S', 0,
  /* 8688 */ 'C', '_', 'L', 'T', '_', 'S', 0,
  /* 8695 */ 'F', 'S', 'Q', 'R', 'T', '_', 'S', 0,
  /* 8703 */ 'M', 'O', 'V', 'T', '_', 'S', 0,
  /* 8710 */ 'F', 'D', 'I', 'V', '_', 'S', 0,
  /* 8717 */ 'F', 'M', 'O', 'V', '_', 'S', 0,
  /* 8724 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'S', 0,
  /* 8734 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'S', 0,
  /* 8744 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'S', 0,
  /* 8753 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'S', 0,
  /* 8763 */ 'C', 'V', 'T', '_', 'W', '_', 'S', 0,
  /* 8771 */ 'B', 'C', '1', 'T', 0,
  /* 8776 */ 'D', 'E', 'R', 'E', 'T', 0,
  /* 8782 */ 'W', 'A', 'I', 'T', 0,
  /* 8787 */ 'S', 'L', 'T', 0,
  /* 8791 */ 'T', 'L', 'T', 0,
  /* 8795 */ 'P', 's', 'e', 'u', 'd', 'o', 'D', 'M', 'U', 'L', 'T', 0,
  /* 8807 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'U', 'L', 'T', 0,
  /* 8818 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 8833 */ 'D', 'E', 'X', 'T', 0,
  /* 8838 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'S', 'U', 'B', 'U', 0,
  /* 8850 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'A', 'D', 'D', 'U', 0,
  /* 8862 */ 'T', 'G', 'E', 'U', 0,
  /* 8867 */ 'T', 'G', 'E', 'I', 'U', 0,
  /* 8873 */ 'T', 'T', 'L', 'T', 'I', 'U', 0,
  /* 8880 */ 'D', 'I', 'N', 'S', 'U', 0,
  /* 8886 */ 'T', 'L', 'T', 'U', 0,
  /* 8891 */ 'D', 'E', 'X', 'T', 'U', 0,
  /* 8897 */ 'D', 'S', 'R', 'A', 'V', 0,
  /* 8903 */ 'B', 'I', 'T', 'R', 'E', 'V', 0,
  /* 8910 */ 'P', 's', 'e', 'u', 'd', 'o', 'D', 'S', 'D', 'I', 'V', 0,
  /* 8922 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'D', 'I', 'V', 0,
  /* 8933 */ 'P', 's', 'e', 'u', 'd', 'o', 'D', 'U', 'D', 'I', 'V', 0,
  /* 8945 */ 'P', 's', 'e', 'u', 'd', 'o', 'U', 'D', 'I', 'V', 0,
  /* 8956 */ 'D', 'S', 'L', 'L', 'V', 0,
  /* 8962 */ 'D', 'S', 'R', 'L', 'V', 0,
  /* 8968 */ 'S', 'H', 'I', 'L', 'O', 'V', 0,
  /* 8975 */ 'E', 'X', 'T', 'P', 'D', 'P', 'V', 0,
  /* 8983 */ 'E', 'X', 'T', 'P', 'V', 0,
  /* 8989 */ 'D', 'R', 'O', 'T', 'R', 'V', 0,
  /* 8996 */ 'I', 'N', 'S', 'V', 0,
  /* 9001 */ 'A', 'N', 'D', '_', 'V', 0,
  /* 9007 */ 'M', 'O', 'V', 'E', '_', 'V', 0,
  /* 9014 */ 'B', 'S', 'E', 'L', '_', 'V', 0,
  /* 9021 */ 'N', 'O', 'R', '_', 'V', 0,
  /* 9027 */ 'X', 'O', 'R', '_', 'V', 0,
  /* 9033 */ 'B', 'Z', '_', 'V', 0,
  /* 9038 */ 'B', 'M', 'Z', '_', 'V', 0,
  /* 9044 */ 'B', 'N', 'Z', '_', 'V', 0,
  /* 9050 */ 'B', 'M', 'N', 'Z', '_', 'V', 0,
  /* 9057 */ 'L', 'W', 0,
  /* 9060 */ 'S', 'W', 0,
  /* 9063 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'V', 'T', '_', 'D', '3', '2', '_', 'W', 0,
  /* 9079 */ 'F', 'L', 'O', 'G', '2', '_', 'W', 0,
  /* 9087 */ 'F', 'E', 'X', 'P', '2', '_', 'W', 0,
  /* 9095 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'V', 'T', '_', 'D', '6', '4', '_', 'W', 0,
  /* 9111 */ 'S', 'R', 'A', '_', 'W', 0,
  /* 9117 */ 'A', 'D', 'D', '_', 'A', '_', 'W', 0,
  /* 9125 */ 'F', 'M', 'I', 'N', '_', 'A', '_', 'W', 0,
  /* 9134 */ 'A', 'D', 'D', 'S', '_', 'A', '_', 'W', 0,
  /* 9143 */ 'F', 'M', 'A', 'X', '_', 'A', '_', 'W', 0,
  /* 9152 */ 'F', 'S', 'U', 'B', '_', 'W', 0,
  /* 9159 */ 'F', 'M', 'S', 'U', 'B', '_', 'W', 0,
  /* 9167 */ 'N', 'L', 'O', 'C', '_', 'W', 0,
  /* 9174 */ 'N', 'L', 'Z', 'C', '_', 'W', 0,
  /* 9181 */ 'F', 'A', 'D', 'D', '_', 'W', 0,
  /* 9188 */ 'F', 'M', 'A', 'D', 'D', '_', 'W', 0,
  /* 9196 */ 'S', 'L', 'D', '_', 'W', 0,
  /* 9202 */ 'P', 'C', 'K', 'O', 'D', '_', 'W', 0,
  /* 9210 */ 'I', 'L', 'V', 'O', 'D', '_', 'W', 0,
  /* 9218 */ 'F', 'C', 'L', 'E', '_', 'W', 0,
  /* 9225 */ 'F', 'S', 'L', 'E', '_', 'W', 0,
  /* 9232 */ 'F', 'C', 'U', 'L', 'E', '_', 'W', 0,
  /* 9240 */ 'F', 'S', 'U', 'L', 'E', '_', 'W', 0,
  /* 9248 */ 'F', 'C', 'N', 'E', '_', 'W', 0,
  /* 9255 */ 'F', 'S', 'N', 'E', '_', 'W', 0,
  /* 9262 */ 'F', 'C', 'U', 'N', 'E', '_', 'W', 0,
  /* 9270 */ 'F', 'S', 'U', 'N', 'E', '_', 'W', 0,
  /* 9278 */ 'I', 'N', 'S', 'V', 'E', '_', 'W', 0,
  /* 9286 */ 'F', 'C', 'A', 'F', '_', 'W', 0,
  /* 9293 */ 'F', 'S', 'A', 'F', '_', 'W', 0,
  /* 9300 */ 'V', 'S', 'H', 'F', '_', 'W', 0,
  /* 9307 */ 'B', 'N', 'E', 'G', '_', 'W', 0,
  /* 9314 */ 'P', 'R', 'E', 'C', 'R', '_', 'S', 'R', 'A', '_', 'P', 'H', '_', 'W', 0,
  /* 9329 */ 'P', 'R', 'E', 'C', 'R', 'Q', '_', 'P', 'H', '_', 'W', 0,
  /* 9341 */ 'P', 'R', 'E', 'C', 'R', '_', 'S', 'R', 'A', '_', 'R', '_', 'P', 'H', '_', 'W', 0,
  /* 9358 */ 'P', 'R', 'E', 'C', 'R', 'Q', '_', 'R', 'S', '_', 'P', 'H', '_', 'W', 0,
  /* 9373 */ 'S', 'U', 'B', 'Q', 'H', '_', 'W', 0,
  /* 9381 */ 'A', 'D', 'D', 'Q', 'H', '_', 'W', 0,
  /* 9389 */ 'S', 'R', 'A', 'I', '_', 'W', 0,
  /* 9396 */ 'S', 'L', 'D', 'I', '_', 'W', 0,
  /* 9403 */ 'B', 'N', 'E', 'G', 'I', '_', 'W', 0,
  /* 9411 */ 'S', 'L', 'L', 'I', '_', 'W', 0,
  /* 9418 */ 'S', 'R', 'L', 'I', '_', 'W', 0,
  /* 9425 */ 'B', 'I', 'N', 'S', 'L', 'I', '_', 'W', 0,
  /* 9434 */ 'C', 'E', 'Q', 'I', '_', 'W', 0,
  /* 9441 */ 'S', 'R', 'A', 'R', 'I', '_', 'W', 0,
  /* 9449 */ 'B', 'C', 'L', 'R', 'I', '_', 'W', 0,
  /* 9457 */ 'S', 'R', 'L', 'R', 'I', '_', 'W', 0,
  /* 9465 */ 'B', 'I', 'N', 'S', 'R', 'I', '_', 'W', 0,
  /* 9474 */ 'S', 'P', 'L', 'A', 'T', 'I', '_', 'W', 0,
  /* 9483 */ 'B', 'S', 'E', 'T', 'I', '_', 'W', 0,
  /* 9491 */ 'S', 'U', 'B', 'V', 'I', '_', 'W', 0,
  /* 9499 */ 'A', 'D', 'D', 'V', 'I', '_', 'W', 0,
  /* 9507 */ 'F', 'I', 'L', 'L', '_', 'W', 0,
  /* 9514 */ 'S', 'L', 'L', '_', 'W', 0,
  /* 9520 */ 'F', 'E', 'X', 'U', 'P', 'L', '_', 'W', 0,
  /* 9529 */ 'F', 'F', 'Q', 'L', '_', 'W', 0,
  /* 9536 */ 'S', 'R', 'L', '_', 'W', 0,
  /* 9542 */ 'B', 'I', 'N', 'S', 'L', '_', 'W', 0,
  /* 9550 */ 'F', 'M', 'U', 'L', '_', 'W', 0,
  /* 9557 */ 'I', 'L', 'V', 'L', '_', 'W', 0,
  /* 9564 */ 'D', 'P', 'A', 'Q', '_', 'S', 'A', '_', 'L', '_', 'W', 0,
  /* 9576 */ 'D', 'P', 'S', 'Q', '_', 'S', 'A', '_', 'L', '_', 'W', 0,
  /* 9588 */ 'F', 'M', 'I', 'N', '_', 'W', 0,
  /* 9595 */ 'F', 'C', 'U', 'N', '_', 'W', 0,
  /* 9602 */ 'F', 'S', 'U', 'N', '_', 'W', 0,
  /* 9609 */ 'F', 'E', 'X', 'D', 'O', '_', 'W', 0,
  /* 9617 */ 'F', 'R', 'C', 'P', '_', 'W', 0,
  /* 9624 */ 'F', 'C', 'E', 'Q', '_', 'W', 0,
  /* 9631 */ 'F', 'S', 'E', 'Q', '_', 'W', 0,
  /* 9638 */ 'F', 'C', 'U', 'E', 'Q', '_', 'W', 0,
  /* 9646 */ 'F', 'S', 'U', 'E', 'Q', '_', 'W', 0,
  /* 9654 */ 'F', 'T', 'Q', '_', 'W', 0,
  /* 9660 */ 'M', 'S', 'U', 'B', '_', 'Q', '_', 'W', 0,
  /* 9669 */ 'M', 'A', 'D', 'D', '_', 'Q', '_', 'W', 0,
  /* 9678 */ 'M', 'U', 'L', '_', 'Q', '_', 'W', 0,
  /* 9686 */ 'M', 'S', 'U', 'B', 'R', '_', 'Q', '_', 'W', 0,
  /* 9696 */ 'M', 'A', 'D', 'D', 'R', '_', 'Q', '_', 'W', 0,
  /* 9706 */ 'M', 'U', 'L', 'R', '_', 'Q', '_', 'W', 0,
  /* 9715 */ 'S', 'R', 'A', 'R', '_', 'W', 0,
  /* 9722 */ 'B', 'C', 'L', 'R', '_', 'W', 0,
  /* 9729 */ 'S', 'R', 'L', 'R', '_', 'W', 0,
  /* 9736 */ 'F', 'C', 'O', 'R', '_', 'W', 0,
  /* 9743 */ 'F', 'S', 'O', 'R', '_', 'W', 0,
  /* 9750 */ 'F', 'E', 'X', 'U', 'P', 'R', '_', 'W', 0,
  /* 9759 */ 'F', 'F', 'Q', 'R', '_', 'W', 0,
  /* 9766 */ 'B', 'I', 'N', 'S', 'R', '_', 'W', 0,
  /* 9774 */ 'E', 'X', 'T', 'R', '_', 'W', 0,
  /* 9781 */ 'I', 'L', 'V', 'R', '_', 'W', 0,
  /* 9788 */ 'S', 'H', 'R', 'A', '_', 'R', '_', 'W', 0,
  /* 9797 */ 'S', 'U', 'B', 'Q', 'H', '_', 'R', '_', 'W', 0,
  /* 9807 */ 'A', 'D', 'D', 'Q', 'H', '_', 'R', '_', 'W', 0,
  /* 9817 */ 'E', 'X', 'T', 'R', '_', 'R', '_', 'W', 0,
  /* 9826 */ 'S', 'H', 'R', 'A', 'V', '_', 'R', '_', 'W', 0,
  /* 9836 */ 'E', 'X', 'T', 'R', 'V', '_', 'R', '_', 'W', 0,
  /* 9846 */ 'M', 'U', 'L', 'Q', '_', 'R', 'S', '_', 'W', 0,
  /* 9856 */ 'E', 'X', 'T', 'R', '_', 'R', 'S', '_', 'W', 0,
  /* 9866 */ 'E', 'X', 'T', 'R', 'V', '_', 'R', 'S', '_', 'W', 0,
  /* 9877 */ 'F', 'C', 'L', 'A', 'S', 'S', '_', 'W', 0,
  /* 9886 */ 'A', 'S', 'U', 'B', '_', 'S', '_', 'W', 0,
  /* 9895 */ 'H', 'S', 'U', 'B', '_', 'S', '_', 'W', 0,
  /* 9904 */ 'D', 'P', 'S', 'U', 'B', '_', 'S', '_', 'W', 0,
  /* 9914 */ 'F', 'T', 'R', 'U', 'N', 'C', '_', 'S', '_', 'W', 0,
  /* 9925 */ 'H', 'A', 'D', 'D', '_', 'S', '_', 'W', 0,
  /* 9934 */ 'D', 'P', 'A', 'D', 'D', '_', 'S', '_', 'W', 0,
  /* 9944 */ 'M', 'O', 'D', '_', 'S', '_', 'W', 0,
  /* 9952 */ 'C', 'L', 'E', '_', 'S', '_', 'W', 0,
  /* 9960 */ 'A', 'V', 'E', '_', 'S', '_', 'W', 0,
  /* 9968 */ 'C', 'L', 'E', 'I', '_', 'S', '_', 'W', 0,
  /* 9977 */ 'M', 'I', 'N', 'I', '_', 'S', '_', 'W', 0,
  /* 9986 */ 'C', 'L', 'T', 'I', '_', 'S', '_', 'W', 0,
  /* 9995 */ 'M', 'A', 'X', 'I', '_', 'S', '_', 'W', 0,
  /* 10004 */ 'S', 'H', 'L', 'L', '_', 'S', '_', 'W', 0,
  /* 10013 */ 'M', 'I', 'N', '_', 'S', '_', 'W', 0,
  /* 10021 */ 'D', 'O', 'T', 'P', '_', 'S', '_', 'W', 0,
  /* 10030 */ 'S', 'U', 'B', 'Q', '_', 'S', '_', 'W', 0,
  /* 10039 */ 'A', 'D', 'D', 'Q', '_', 'S', '_', 'W', 0,
  /* 10048 */ 'M', 'U', 'L', 'Q', '_', 'S', '_', 'W', 0,
  /* 10057 */ 'A', 'B', 'S', 'Q', '_', 'S', '_', 'W', 0,
  /* 10066 */ 'A', 'V', 'E', 'R', '_', 'S', '_', 'W', 0,
  /* 10075 */ 'S', 'U', 'B', 'S', '_', 'S', '_', 'W', 0,
  /* 10084 */ 'A', 'D', 'D', 'S', '_', 'S', '_', 'W', 0,
  /* 10093 */ 'S', 'A', 'T', '_', 'S', '_', 'W', 0,
  /* 10101 */ 'C', 'L', 'T', '_', 'S', '_', 'W', 0,
  /* 10109 */ 'F', 'F', 'I', 'N', 'T', '_', 'S', '_', 'W', 0,
  /* 10119 */ 'F', 'T', 'I', 'N', 'T', '_', 'S', '_', 'W', 0,
  /* 10129 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'V', 'T', '_', 'S', '_', 'W', 0,
  /* 10143 */ 'S', 'U', 'B', 'S', 'U', 'U', '_', 'S', '_', 'W', 0,
  /* 10154 */ 'D', 'I', 'V', '_', 'S', '_', 'W', 0,
  /* 10162 */ 'S', 'H', 'L', 'L', 'V', '_', 'S', '_', 'W', 0,
  /* 10172 */ 'M', 'A', 'X', '_', 'S', '_', 'W', 0,
  /* 10180 */ 'C', 'O', 'P', 'Y', '_', 'S', '_', 'W', 0,
  /* 10189 */ 'S', 'P', 'L', 'A', 'T', '_', 'W', 0,
  /* 10197 */ 'B', 'S', 'E', 'T', '_', 'W', 0,
  /* 10204 */ 'F', 'C', 'L', 'T', '_', 'W', 0,
  /* 10211 */ 'F', 'S', 'L', 'T', '_', 'W', 0,
  /* 10218 */ 'F', 'C', 'U', 'L', 'T', '_', 'W', 0,
  /* 10226 */ 'F', 'S', 'U', 'L', 'T', '_', 'W', 0,
  /* 10234 */ 'P', 'C', 'N', 'T', '_', 'W', 0,
  /* 10241 */ 'F', 'R', 'I', 'N', 'T', '_', 'W', 0,
  /* 10249 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'W', 0,
  /* 10258 */ 'F', 'S', 'Q', 'R', 'T', '_', 'W', 0,
  /* 10266 */ 'F', 'R', 'S', 'Q', 'R', 'T', '_', 'W', 0,
  /* 10275 */ 'S', 'T', '_', 'W', 0,
  /* 10280 */ 'A', 'S', 'U', 'B', '_', 'U', '_', 'W', 0,
  /* 10289 */ 'H', 'S', 'U', 'B', '_', 'U', '_', 'W', 0,
  /* 10298 */ 'D', 'P', 'S', 'U', 'B', '_', 'U', '_', 'W', 0,
  /* 10308 */ 'F', 'T', 'R', 'U', 'N', 'C', '_', 'U', '_', 'W', 0,
  /* 10319 */ 'H', 'A', 'D', 'D', '_', 'U', '_', 'W', 0,
  /* 10328 */ 'D', 'P', 'A', 'D', 'D', '_', 'U', '_', 'W', 0,
  /* 10338 */ 'M', 'O', 'D', '_', 'U', '_', 'W', 0,
  /* 10346 */ 'C', 'L', 'E', '_', 'U', '_', 'W', 0,
  /* 10354 */ 'A', 'V', 'E', '_', 'U', '_', 'W', 0,
  /* 10362 */ 'C', 'L', 'E', 'I', '_', 'U', '_', 'W', 0,
  /* 10371 */ 'M', 'I', 'N', 'I', '_', 'U', '_', 'W', 0,
  /* 10380 */ 'C', 'L', 'T', 'I', '_', 'U', '_', 'W', 0,
  /* 10389 */ 'M', 'A', 'X', 'I', '_', 'U', '_', 'W', 0,
  /* 10398 */ 'M', 'I', 'N', '_', 'U', '_', 'W', 0,
  /* 10406 */ 'D', 'O', 'T', 'P', '_', 'U', '_', 'W', 0,
  /* 10415 */ 'A', 'V', 'E', 'R', '_', 'U', '_', 'W', 0,
  /* 10424 */ 'S', 'U', 'B', 'S', '_', 'U', '_', 'W', 0,
  /* 10433 */ 'A', 'D', 'D', 'S', '_', 'U', '_', 'W', 0,
  /* 10442 */ 'S', 'U', 'B', 'S', 'U', 'S', '_', 'U', '_', 'W', 0,
  /* 10453 */ 'S', 'A', 'T', '_', 'U', '_', 'W', 0,
  /* 10461 */ 'C', 'L', 'T', '_', 'U', '_', 'W', 0,
  /* 10469 */ 'F', 'F', 'I', 'N', 'T', '_', 'U', '_', 'W', 0,
  /* 10479 */ 'F', 'T', 'I', 'N', 'T', '_', 'U', '_', 'W', 0,
  /* 10489 */ 'D', 'I', 'V', '_', 'U', '_', 'W', 0,
  /* 10497 */ 'M', 'A', 'X', '_', 'U', '_', 'W', 0,
  /* 10505 */ 'C', 'O', 'P', 'Y', '_', 'U', '_', 'W', 0,
  /* 10514 */ 'M', 'S', 'U', 'B', 'V', '_', 'W', 0,
  /* 10522 */ 'M', 'A', 'D', 'D', 'V', '_', 'W', 0,
  /* 10530 */ 'P', 'C', 'K', 'E', 'V', '_', 'W', 0,
  /* 10538 */ 'I', 'L', 'V', 'E', 'V', '_', 'W', 0,
  /* 10546 */ 'F', 'D', 'I', 'V', '_', 'W', 0,
  /* 10553 */ 'M', 'U', 'L', 'V', '_', 'W', 0,
  /* 10560 */ 'E', 'X', 'T', 'R', 'V', '_', 'W', 0,
  /* 10568 */ 'F', 'M', 'A', 'X', '_', 'W', 0,
  /* 10575 */ 'L', 'D', 'X', '_', 'W', 0,
  /* 10581 */ 'S', 'T', 'X', '_', 'W', 0,
  /* 10587 */ 'B', 'Z', '_', 'W', 0,
  /* 10592 */ 'B', 'N', 'Z', '_', 'W', 0,
  /* 10598 */ 'L', 'H', 'X', 0,
  /* 10602 */ 'L', 'B', 'U', 'X', 0,
  /* 10607 */ 'L', 'W', 'X', 0,
  /* 10611 */ 'C', 'O', 'P', 'Y', 0,
  /* 10616 */ 'B', 'G', 'E', 'Z', 0,
  /* 10621 */ 'B', 'L', 'E', 'Z', 0,
  /* 10626 */ 'D', 'C', 'L', 'Z', 0,
  /* 10631 */ 'B', 'G', 'T', 'Z', 0,
  /* 10636 */ 'B', 'L', 'T', 'Z', 0,
  /* 10641 */ 'S', 'e', 'l', 'B', 'n', 'e', 'Z', 0,
  /* 10649 */ 'S', 'e', 'l', 'B', 'e', 'q', 'Z', 0,
  /* 10657 */ 'L', 'o', 'a', 'd', 'I', 'm', 'm', '3', '2', 'R', 'e', 'g', 0,
  /* 10670 */ 'L', 'o', 'a', 'd', 'A', 'd', 'd', 'r', '3', '2', 'R', 'e', 'g', 0,
  /* 10684 */ 'D', 'A', 'D', 'D', 'i', 0,
  /* 10690 */ 'A', 'N', 'D', 'i', 0,
  /* 10695 */ 'X', 'O', 'R', 'i', 0,
  /* 10700 */ 'S', 'L', 'T', 'i', 0,
  /* 10705 */ 'L', 'U', 'i', 0,
  /* 10709 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'C', 'm', 'p', 'i', 0,
  /* 10723 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'C', 'm', 'p', 'i', 0,
  /* 10737 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'S', 'l', 't', 'i', 0,
  /* 10751 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'S', 'l', 't', 'i', 0,
  /* 10765 */ 'L', 'o', 'a', 'd', 'A', 'd', 'd', 'r', '3', '2', 'I', 'm', 'm', 0,
  /* 10779 */ 'J', 'A', 'L', 'R', '6', '4', 'P', 's', 'e', 'u', 'd', 'o', 0,
  /* 10792 */ 'J', 'A', 'L', 'R', 'P', 's', 'e', 'u', 'd', 'o', 0,
  /* 10803 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'C', 'm', 'p', 0,
  /* 10816 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'C', 'm', 'p', 0,
  /* 10829 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'S', 'l', 't', 0,
  /* 10842 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'S', 'l', 't', 0,
  /* 10855 */ 'L', 'B', 'u', 0,
  /* 10859 */ 'D', 'S', 'U', 'B', 'u', 0,
  /* 10865 */ 'D', 'A', 'D', 'D', 'u', 0,
  /* 10871 */ 'L', 'H', 'u', 0,
  /* 10875 */ 'S', 'L', 'T', 'u', 0,
  /* 10880 */ 'P', 's', 'e', 'u', 'd', 'o', 'D', 'M', 'U', 'L', 'T', 'u', 0,
  /* 10893 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'U', 'L', 'T', 'u', 0,
  /* 10905 */ 'L', 'W', 'u', 0,
  /* 10909 */ 'D', 'A', 'D', 'D', 'i', 'u', 0,
  /* 10916 */ 'L', 'E', 'A', '_', 'A', 'D', 'D', 'i', 'u', 0,
  /* 10926 */ 'S', 'L', 'T', 'i', 'u', 0,
  /* 10932 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'S', 'l', 't', 'i', 'u', 0,
  /* 10947 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'S', 'l', 't', 'i', 'u', 0,
  /* 10962 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'S', 'l', 't', 'u', 0,
  /* 10976 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'S', 'l', 't', 'u', 0,
};

extern const unsigned MipsInstrNameIndices[] = {
    7152U, 7769U, 7334U, 7347U, 7325U, 7425U, 5665U, 5680U, 
    5652U, 5694U, 8391U, 5637U, 5605U, 10611U, 5622U, 8818U, 
    4461U, 5998U, 3477U, 10057U, 4418U, 5799U, 5916U, 9807U, 
    9381U, 5871U, 5978U, 10039U, 4401U, 3655U, 4516U, 6273U, 
    9134U, 4072U, 5150U, 6762U, 10084U, 4273U, 5457U, 7011U, 
    10433U, 3345U, 3455U, 6063U, 3557U, 6018U, 3497U, 3869U, 
    4806U, 6458U, 9499U, 4343U, 5538U, 7081U, 10523U, 4407U, 
    3639U, 4499U, 6257U, 9117U, 7508U, 10685U, 7665U, 10910U, 
    7751U, 10866U, 7719U, 7798U, 8170U, 4442U, 808U, 3744U, 
    7515U, 9001U, 10690U, 1715U, 7673U, 4454U, 3968U, 4997U, 
    6611U, 9886U, 4169U, 5304U, 6869U, 10280U, 1964U, 590U, 
    1481U, 3136U, 1887U, 513U, 1373U, 3063U, 1928U, 554U, 
    1414U, 3102U, 1907U, 533U, 1393U, 3082U, 2004U, 630U, 
    1521U, 3174U, 1867U, 493U, 1353U, 3044U, 1984U, 610U, 
    1501U, 3155U, 1948U, 574U, 1465U, 3121U, 4054U, 5132U, 
    6735U, 10066U, 4255U, 5439U, 6993U, 10415U, 3993U, 5071U, 
    6674U, 9960U, 4194U, 5378U, 6932U, 10354U, 2387U, 2263U, 
    2711U, 2415U, 2212U, 2651U, 2279U, 2979U, 2918U, 3281U, 
    7791U, 8259U, 5647U, 8771U, 3805U, 4756U, 6408U, 9449U, 
    3939U, 4929U, 6582U, 9722U, 8185U, 1575U, 10616U, 1641U, 
    7237U, 10631U, 1655U, 3781U, 4732U, 6384U, 9425U, 3911U, 
    4842U, 6485U, 9542U, 3835U, 4772U, 6424U, 9465U, 3953U, 
    4973U, 6596U, 9766U, 8903U, 10621U, 1648U, 10636U, 1662U, 
    7244U, 3884U, 9050U, 3877U, 9038U, 5629U, 1260U, 3751U, 
    4710U, 6362U, 9403U, 3723U, 4689U, 6341U, 9307U, 4390U, 
    5599U, 7128U, 9044U, 10592U, 484U, 7815U, 7227U, 3759U, 
    9014U, 3853U, 4790U, 6442U, 9483U, 4141U, 5230U, 6841U, 
    10197U, 4385U, 5594U, 7123U, 9033U, 10587U, 2738U, 2444U, 
    2457U, 2726U, 2431U, 2637U, 2479U, 2055U, 2507U, 2085U, 
    2537U, 2568U, 2592U, 2465U, 2040U, 2493U, 2070U, 2521U, 
    2553U, 2583U, 1266U, 1669U, 1028U, 8600U, 451U, 1227U, 
    8744U, 3790U, 4741U, 6393U, 9434U, 3926U, 4893U, 6508U, 
    9625U, 34U, 3265U, 4001U, 5079U, 6682U, 9968U, 4202U, 
    5386U, 6940U, 10362U, 3985U, 5063U, 6666U, 9952U, 4186U, 
    5370U, 6924U, 10346U, 7957U, 4019U, 5097U, 6700U, 9986U, 
    4220U, 5404U, 6958U, 10380U, 4089U, 5167U, 6779U, 10101U, 
    4301U, 5485U, 7039U, 10461U, 10627U, 3392U, 3294U, 3507U, 
    3405U, 3307U, 3520U, 3423U, 3325U, 3538U, 5885U, 5780U, 
    6045U, 4124U, 6824U, 10180U, 4325U, 7063U, 10505U, 57U, 
    3272U, 8408U, 9069U, 7458U, 8418U, 9101U, 1051U, 8619U, 
    341U, 1117U, 7474U, 10135U, 474U, 1250U, 8763U, 323U, 
    1099U, 8650U, 227U, 946U, 8534U, 200U, 919U, 8513U, 
    381U, 1157U, 8688U, 159U, 878U, 8480U, 169U, 888U, 
    8488U, 266U, 985U, 8565U, 351U, 1127U, 8664U, 180U, 
    899U, 8497U, 361U, 1137U, 8672U, 303U, 1079U, 8634U, 
    209U, 928U, 8520U, 313U, 1089U, 8642U, 190U, 909U, 
    8505U, 371U, 1147U, 8680U, 285U, 1061U, 8627U, 2800U, 
    2674U, 2361U, 700U, 4417U, 10684U, 10909U, 10865U, 7956U, 
    10626U, 8776U, 8833U, 7785U, 8891U, 7134U, 8386U, 7779U, 
    8880U, 4108U, 5206U, 6798U, 10154U, 4309U, 5513U, 7047U, 
    10489U, 0U, 39U, 711U, 6U, 62U, 717U, 8801U, 
    10886U, 4045U, 5123U, 6726U, 10021U, 4246U, 5430U, 6984U, 
    10406U, 5045U, 6648U, 9934U, 5352U, 6906U, 10328U, 6127U, 
    6202U, 9564U, 6164U, 7295U, 8237U, 6228U, 6107U, 6141U, 
    6215U, 9576U, 6190U, 5015U, 6629U, 9904U, 5322U, 6887U, 
    10298U, 7306U, 8248U, 6238U, 6155U, 8342U, 8989U, 5708U, 
    8916U, 4433U, 7430U, 649U, 672U, 8956U, 3254U, 114U, 
    8897U, 7435U, 656U, 8962U, 10859U, 8939U, 2886U, 2864U, 
    7139U, 8777U, 8834U, 8165U, 7982U, 8975U, 8983U, 9866U, 
    9836U, 6806U, 10560U, 9856U, 9817U, 6744U, 9774U, 1279U, 
    1685U, 332U, 1108U, 8657U, 4563U, 140U, 859U, 8465U, 
    9181U, 4668U, 9286U, 4892U, 9624U, 4988U, 9877U, 4600U, 
    9218U, 5237U, 10204U, 294U, 1070U, 663U, 4630U, 9248U, 
    4943U, 9736U, 4906U, 9638U, 4614U, 9232U, 5251U, 10218U, 
    4644U, 9262U, 4871U, 9595U, 5561U, 409U, 1185U, 8710U, 
    10546U, 6500U, 9609U, 4485U, 9087U, 4820U, 9520U, 4957U, 
    9750U, 5175U, 10109U, 5493U, 10469U, 4829U, 9529U, 4966U, 
    9759U, 3892U, 6466U, 9507U, 4477U, 9079U, 1039U, 8609U, 
    462U, 1238U, 8753U, 4570U, 9188U, 4525U, 9143U, 5575U, 
    10568U, 4507U, 9125U, 4864U, 9588U, 418U, 1194U, 8717U, 
    4541U, 9159U, 4850U, 276U, 995U, 8573U, 9550U, 235U, 
    954U, 8540U, 4885U, 9617U, 5274U, 10241U, 5290U, 10266U, 
    4675U, 9293U, 4899U, 9631U, 4607U, 9225U, 5244U, 10211U, 
    4637U, 9255U, 4950U, 9743U, 5282U, 390U, 1166U, 8695U, 
    10258U, 4534U, 121U, 840U, 8450U, 9152U, 4914U, 9646U, 
    4622U, 9240U, 5259U, 10226U, 4652U, 9270U, 4878U, 9602U, 
    5185U, 10119U, 5503U, 10479U, 6514U, 9654U, 5025U, 9914U, 
    5332U, 10308U, 5036U, 6639U, 9925U, 5343U, 6897U, 10319U, 
    5006U, 6620U, 9895U, 5313U, 6878U, 10289U, 4358U, 5553U, 
    7096U, 10538U, 3919U, 4857U, 6493U, 9557U, 3700U, 4592U, 
    6318U, 9210U, 3961U, 4981U, 6604U, 9781U, 8387U, 4155U, 
    6855U, 10249U, 8996U, 3708U, 4660U, 6326U, 9278U, 7225U, 
    7233U, 8329U, 1586U, 10779U, 10792U, 8326U, 1581U, 2645U, 
    2609U, 2601U, 2757U, 2616U, 3283U, 775U, 10602U, 7489U, 
    10855U, 1758U, 7704U, 4439U, 18U, 723U, 3738U, 6356U, 
    9397U, 7317U, 8266U, 78U, 737U, 4373U, 5582U, 7111U, 
    10575U, 3687U, 4579U, 6305U, 9197U, 10916U, 1777U, 5722U, 
    1303U, 10598U, 7522U, 10871U, 1764U, 7727U, 7414U, 4438U, 
    3019U, 785U, 8000U, 8059U, 90U, 753U, 10705U, 1736U, 
    7697U, 9057U, 1631U, 68U, 7444U, 1549U, 7555U, 8354U, 
    1613U, 7591U, 10607U, 102U, 7653U, 10905U, 2114U, 2178U, 
    2146U, 2195U, 2664U, 2350U, 10765U, 10670U, 10657U, 698U, 
    2231U, 2293U, 4428U, 6556U, 9696U, 8856U, 8145U, 4342U, 
    5537U, 7080U, 10522U, 150U, 869U, 8050U, 6529U, 9669U, 
    8473U, 7356U, 8274U, 7382U, 8300U, 4028U, 5106U, 6709U, 
    9995U, 4229U, 5413U, 6967U, 10389U, 3664U, 4526U, 6282U, 
    9144U, 4116U, 5214U, 6816U, 10172U, 4317U, 5521U, 7055U, 
    10497U, 1U, 40U, 712U, 45U, 7147U, 1313U, 8090U, 
    7961U, 1561U, 8108U, 4010U, 5088U, 6691U, 9977U, 4211U, 
    5395U, 6949U, 10371U, 3647U, 4508U, 6265U, 9126U, 4037U, 
    5115U, 6718U, 10013U, 4238U, 5422U, 6976U, 10398U, 682U, 
    1742U, 3615U, 3977U, 5055U, 6658U, 9944U, 4178U, 5362U, 
    6916U, 10338U, 9007U, 218U, 937U, 7193U, 1434U, 8527U, 
    814U, 7171U, 1327U, 8428U, 244U, 963U, 7200U, 1443U, 
    8547U, 400U, 1176U, 7218U, 1540U, 8703U, 827U, 7182U, 
    1340U, 8439U, 255U, 974U, 7209U, 1454U, 8556U, 3628U, 
    6546U, 9686U, 8844U, 8135U, 4334U, 5529U, 7072U, 10514U, 
    131U, 850U, 8041U, 6520U, 9660U, 8458U, 7U, 63U, 
    718U, 51U, 7156U, 1320U, 8099U, 7989U, 7972U, 1568U, 
    8117U, 7440U, 7394U, 8312U, 7251U, 8193U, 5938U, 9846U, 
    5988U, 10048U, 6566U, 9706U, 6176U, 6116U, 8802U, 8155U, 
    8126U, 7612U, 10887U, 7742U, 4366U, 5568U, 7104U, 10553U, 
    7548U, 5856U, 6538U, 9678U, 5959U, 2630U, 2750U, 2023U, 
    1797U, 2820U, 2953U, 2852U, 3005U, 3672U, 4549U, 6290U, 
    9167U, 3679U, 4556U, 6297U, 9174U, 149U, 868U, 8472U, 
    130U, 849U, 8457U, 7996U, 8334U, 1593U, 3821U, 7569U, 
    9021U, 2790U, 2831U, 8335U, 1594U, 3822U, 7570U, 9022U, 
    10696U, 1723U, 7682U, 2930U, 5846U, 4350U, 5545U, 7088U, 
    10530U, 3692U, 4584U, 6310U, 9202U, 4148U, 5267U, 6848U, 
    10234U, 5814U, 3360U, 7280U, 3207U, 8222U, 3238U, 7369U, 
    8287U, 7266U, 3192U, 8208U, 3223U, 5758U, 9329U, 5733U, 
    9358U, 5746U, 9314U, 9341U, 4446U, 3417U, 3319U, 3532U, 
    5879U, 5774U, 6039U, 9063U, 7452U, 9095U, 7468U, 10129U, 
    8795U, 10880U, 8910U, 8933U, 12U, 4422U, 8850U, 3622U, 
    8838U, 8807U, 10893U, 5808U, 3354U, 23U, 8922U, 8945U, 
    3601U, 8029U, 8348U, 1605U, 6089U, 3583U, 5830U, 3376U, 
    8778U, 8343U, 8990U, 7644U, 7583U, 1016U, 8590U, 439U, 
    1215U, 8734U, 1851U, 1815U, 3259U, 1807U, 4081U, 5159U, 
    6771U, 10093U, 4293U, 5477U, 7031U, 10453U, 3612U, 780U, 
    7495U, 4404U, 4413U, 4474U, 29U, 730U, 8917U, 7321U, 
    8270U, 84U, 745U, 3279U, 769U, 5718U, 1297U, 6248U, 
    1308U, 3717U, 6335U, 9301U, 7966U, 8968U, 6080U, 3574U, 
    6028U, 10162U, 5822U, 3368U, 5949U, 10004U, 6071U, 3565U, 
    5927U, 3466U, 9826U, 5725U, 3286U, 5895U, 3434U, 9788U, 
    6098U, 3592U, 5838U, 3384U, 7528U, 3737U, 4703U, 6355U, 
    9396U, 3686U, 4578U, 6304U, 9196U, 7431U, 673U, 1706U, 
    3767U, 4718U, 6370U, 9411U, 8957U, 7628U, 3899U, 4814U, 
    6473U, 7534U, 9514U, 8787U, 1625U, 7605U, 10700U, 1729U, 
    7689U, 10926U, 1789U, 7760U, 10875U, 1770U, 7734U, 7831U, 
    7856U, 7881U, 7906U, 7931U, 3844U, 4781U, 6433U, 9474U, 
    4133U, 5222U, 6833U, 10189U, 3255U, 3730U, 4696U, 6348U, 
    9389U, 3797U, 4748U, 6400U, 9441U, 3932U, 4922U, 6575U, 
    9715U, 8898U, 7620U, 3633U, 4493U, 6251U, 7482U, 9111U, 
    7436U, 3774U, 4725U, 6377U, 9418U, 3813U, 4764U, 6416U, 
    9457U, 3946U, 4936U, 6589U, 9729U, 8963U, 7636U, 3905U, 
    4836U, 6479U, 7541U, 9536U, 3031U, 796U, 8014U, 8074U, 
    4379U, 5588U, 7117U, 10581U, 4164U, 5299U, 6864U, 10275U, 
    3618U, 5790U, 5905U, 9797U, 9373U, 5863U, 5968U, 10030U, 
    4282U, 5466U, 7020U, 10442U, 4097U, 5195U, 6787U, 10143U, 
    4063U, 5141U, 6753U, 10075U, 4264U, 5448U, 7002U, 10424U, 
    3336U, 3444U, 6055U, 3549U, 6008U, 3487U, 3861U, 4798U, 
    6450U, 9491U, 4335U, 5530U, 7073U, 10515U, 7501U, 10860U, 
    7711U, 96U, 761U, 9060U, 1636U, 73U, 7448U, 1555U, 
    7562U, 8358U, 1619U, 7598U, 108U, 7659U, 4396U, 7417U, 
    7844U, 7869U, 7894U, 7919U, 7944U, 1838U, 1828U, 2130U, 
    10649U, 10641U, 10816U, 10723U, 10842U, 10751U, 10947U, 10976U, 
    10803U, 10709U, 10829U, 10737U, 10932U, 10962U, 2162U, 2100U, 
    2896U, 2765U, 2810U, 2319U, 2686U, 2374U, 2334U, 2698U, 
    2401U, 2777U, 2841U, 2992U, 2033U, 2875U, 2107U, 2907U, 
    2966U, 2247U, 2306U, 7408U, 8362U, 8375U, 8189U, 7161U, 
    5618U, 7137U, 8867U, 8862U, 8791U, 7166U, 8886U, 5633U, 
    7142U, 7977U, 1004U, 8580U, 427U, 1203U, 8724U, 8873U, 
    8940U, 3716U, 4682U, 6334U, 9300U, 8782U, 8035U, 5713U, 
    8338U, 1599U, 3828U, 7576U, 9027U, 10695U, 1722U, 7681U, 
    2941U, 
};

static inline void InitMipsMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(MipsInsts, MipsInstrNameIndices, MipsInstrNameData, 1313);
}

} // End llvm namespace 
#endif // GET_INSTRINFO_MC_DESC


#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct MipsGenInstrInfo : public TargetInstrInfo {
  explicit MipsGenInstrInfo(int SO = -1, int DO = -1);
};
} // End llvm namespace 
#endif // GET_INSTRINFO_HEADER


#ifdef GET_INSTRINFO_CTOR
#undef GET_INSTRINFO_CTOR
namespace llvm {
extern const MCInstrDesc MipsInsts[];
extern const unsigned MipsInstrNameIndices[];
extern const char MipsInstrNameData[];
MipsGenInstrInfo::MipsGenInstrInfo(int SO, int DO)
  : TargetInstrInfo(SO, DO) {
  InitMCInstrInfo(MipsInsts, MipsInstrNameIndices, MipsInstrNameData, 1313);
}
} // End llvm namespace 
#endif // GET_INSTRINFO_CTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {namespace Mips {
namespace OpName { 
enum {
OPERAND_LAST
};
} // End namespace OpName
} // End namespace Mips
} // End namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM
#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {namespace Mips {
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // End namespace Mips
} // End namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS
#ifdef GET_INSTRMAP_INFO
#undef GET_INSTRMAP_INFO
namespace llvm {

namespace Mips {

enum Arch {
	Arch_se,
	Arch_micromips
};

// Std2MicroMips
int Std2MicroMips(uint16_t Opcode, enum Arch inArch) {
static const uint16_t Std2MicroMipsTable[][3] = {
  { Mips::ADD, Mips::ADD, Mips::ADD_MM },
  { Mips::ADDi, Mips::ADDi, Mips::ADDi_MM },
  { Mips::ADDiu, Mips::ADDiu, Mips::ADDiu_MM },
  { Mips::ADDu, Mips::ADDu, Mips::ADDu_MM },
  { Mips::AND, Mips::AND, Mips::AND_MM },
  { Mips::ANDi, Mips::ANDi, Mips::ANDi_MM },
  { Mips::LB, Mips::LB, Mips::LB_MM },
  { Mips::LBu, Mips::LBu, Mips::LBu_MM },
  { Mips::LH, Mips::LH, Mips::LH_MM },
  { Mips::LHu, Mips::LHu, Mips::LHu_MM },
  { Mips::LW, Mips::LW, Mips::LW_MM },
  { Mips::MUL, Mips::MUL, Mips::MUL_MM },
  { Mips::MULT, Mips::MULT, Mips::MULT_MM },
  { Mips::MULTu, Mips::MULTu, Mips::MULTu_MM },
  { Mips::NOR, Mips::NOR, Mips::NOR_MM },
  { Mips::OR, Mips::OR, Mips::OR_MM },
  { Mips::ORi, Mips::ORi, Mips::ORi_MM },
  { Mips::ROTR, Mips::ROTR, Mips::ROTR_MM },
  { Mips::ROTRV, Mips::ROTRV, Mips::ROTRV_MM },
  { Mips::SB, Mips::SB, Mips::SB_MM },
  { Mips::SH, Mips::SH, Mips::SH_MM },
  { Mips::SLL, Mips::SLL, Mips::SLL_MM },
  { Mips::SLLV, Mips::SLLV, Mips::SLLV_MM },
  { Mips::SLT, Mips::SLT, Mips::SLT_MM },
  { Mips::SLTi, Mips::SLTi, Mips::SLTi_MM },
  { Mips::SLTiu, Mips::SLTiu, Mips::SLTiu_MM },
  { Mips::SLTu, Mips::SLTu, Mips::SLTu_MM },
  { Mips::SRA, Mips::SRA, Mips::SRA_MM },
  { Mips::SRAV, Mips::SRAV, Mips::SRAV_MM },
  { Mips::SRL, Mips::SRL, Mips::SRL_MM },
  { Mips::SRLV, Mips::SRLV, Mips::SRLV_MM },
  { Mips::SUB, Mips::SUB, Mips::SUB_MM },
  { Mips::SUBu, Mips::SUBu, Mips::SUBu_MM },
  { Mips::SW, Mips::SW, Mips::SW_MM },
  { Mips::XOR, Mips::XOR, Mips::XOR_MM },
  { Mips::XORi, Mips::XORi, Mips::XORi_MM },
}; // End of Std2MicroMipsTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 36;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == Std2MicroMipsTable[mid][0]) {
      break;
    }
    if (Opcode < Std2MicroMipsTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  if (inArch == Arch_se)
    return Std2MicroMipsTable[mid][1];
  if (inArch == Arch_micromips)
    return Std2MicroMipsTable[mid][2];
  return -1;}

} // End Mips namespace
} // End llvm namespace
#endif // GET_INSTRMAP_INFO

