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

namespace SystemZ {
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
    A	= 17,
    ADB	= 18,
    ADBR	= 19,
    ADJCALLSTACKDOWN	= 20,
    ADJCALLSTACKUP	= 21,
    ADJDYNALLOC	= 22,
    AEB	= 23,
    AEBR	= 24,
    AEXT128_64	= 25,
    AFI	= 26,
    AG	= 27,
    AGF	= 28,
    AGFI	= 29,
    AGFR	= 30,
    AGHI	= 31,
    AGHIK	= 32,
    AGR	= 33,
    AGRK	= 34,
    AGSI	= 35,
    AH	= 36,
    AHI	= 37,
    AHIK	= 38,
    AHY	= 39,
    AL	= 40,
    ALC	= 41,
    ALCG	= 42,
    ALCGR	= 43,
    ALCR	= 44,
    ALFI	= 45,
    ALG	= 46,
    ALGF	= 47,
    ALGFI	= 48,
    ALGFR	= 49,
    ALGHSIK	= 50,
    ALGR	= 51,
    ALGRK	= 52,
    ALHSIK	= 53,
    ALR	= 54,
    ALRK	= 55,
    ALY	= 56,
    AR	= 57,
    ARK	= 58,
    ASI	= 59,
    ATOMIC_CMP_SWAPW	= 60,
    ATOMIC_LOADW_AFI	= 61,
    ATOMIC_LOADW_AR	= 62,
    ATOMIC_LOADW_MAX	= 63,
    ATOMIC_LOADW_MIN	= 64,
    ATOMIC_LOADW_NILH	= 65,
    ATOMIC_LOADW_NILHi	= 66,
    ATOMIC_LOADW_NR	= 67,
    ATOMIC_LOADW_NRi	= 68,
    ATOMIC_LOADW_OILH	= 69,
    ATOMIC_LOADW_OR	= 70,
    ATOMIC_LOADW_SR	= 71,
    ATOMIC_LOADW_UMAX	= 72,
    ATOMIC_LOADW_UMIN	= 73,
    ATOMIC_LOADW_XILF	= 74,
    ATOMIC_LOADW_XR	= 75,
    ATOMIC_LOAD_AFI	= 76,
    ATOMIC_LOAD_AGFI	= 77,
    ATOMIC_LOAD_AGHI	= 78,
    ATOMIC_LOAD_AGR	= 79,
    ATOMIC_LOAD_AHI	= 80,
    ATOMIC_LOAD_AR	= 81,
    ATOMIC_LOAD_MAX_32	= 82,
    ATOMIC_LOAD_MAX_64	= 83,
    ATOMIC_LOAD_MIN_32	= 84,
    ATOMIC_LOAD_MIN_64	= 85,
    ATOMIC_LOAD_NGR	= 86,
    ATOMIC_LOAD_NGRi	= 87,
    ATOMIC_LOAD_NIHF	= 88,
    ATOMIC_LOAD_NIHFi	= 89,
    ATOMIC_LOAD_NIHH	= 90,
    ATOMIC_LOAD_NIHHi	= 91,
    ATOMIC_LOAD_NIHL	= 92,
    ATOMIC_LOAD_NIHLi	= 93,
    ATOMIC_LOAD_NILF	= 94,
    ATOMIC_LOAD_NILF32	= 95,
    ATOMIC_LOAD_NILF32i	= 96,
    ATOMIC_LOAD_NILFi	= 97,
    ATOMIC_LOAD_NILH	= 98,
    ATOMIC_LOAD_NILH32	= 99,
    ATOMIC_LOAD_NILH32i	= 100,
    ATOMIC_LOAD_NILHi	= 101,
    ATOMIC_LOAD_NILL	= 102,
    ATOMIC_LOAD_NILL32	= 103,
    ATOMIC_LOAD_NILL32i	= 104,
    ATOMIC_LOAD_NILLi	= 105,
    ATOMIC_LOAD_NR	= 106,
    ATOMIC_LOAD_NRi	= 107,
    ATOMIC_LOAD_OGR	= 108,
    ATOMIC_LOAD_OIHF	= 109,
    ATOMIC_LOAD_OIHH	= 110,
    ATOMIC_LOAD_OIHL	= 111,
    ATOMIC_LOAD_OILF	= 112,
    ATOMIC_LOAD_OILF32	= 113,
    ATOMIC_LOAD_OILH	= 114,
    ATOMIC_LOAD_OILH32	= 115,
    ATOMIC_LOAD_OILL	= 116,
    ATOMIC_LOAD_OILL32	= 117,
    ATOMIC_LOAD_OR	= 118,
    ATOMIC_LOAD_SGR	= 119,
    ATOMIC_LOAD_SR	= 120,
    ATOMIC_LOAD_UMAX_32	= 121,
    ATOMIC_LOAD_UMAX_64	= 122,
    ATOMIC_LOAD_UMIN_32	= 123,
    ATOMIC_LOAD_UMIN_64	= 124,
    ATOMIC_LOAD_XGR	= 125,
    ATOMIC_LOAD_XIHF	= 126,
    ATOMIC_LOAD_XILF	= 127,
    ATOMIC_LOAD_XILF32	= 128,
    ATOMIC_LOAD_XR	= 129,
    ATOMIC_SWAPW	= 130,
    ATOMIC_SWAP_32	= 131,
    ATOMIC_SWAP_64	= 132,
    AXBR	= 133,
    AY	= 134,
    AsmBASR	= 135,
    AsmBRAS	= 136,
    AsmBRASL	= 137,
    AsmBRC	= 138,
    AsmBRCL	= 139,
    AsmCGIJ	= 140,
    AsmCGRJ	= 141,
    AsmCIJ	= 142,
    AsmCRJ	= 143,
    AsmEJ	= 144,
    AsmEJG	= 145,
    AsmELOC	= 146,
    AsmELOCG	= 147,
    AsmELOCGR	= 148,
    AsmELOCR	= 149,
    AsmESTOC	= 150,
    AsmESTOCG	= 151,
    AsmHEJ	= 152,
    AsmHEJG	= 153,
    AsmHELOC	= 154,
    AsmHELOCG	= 155,
    AsmHELOCGR	= 156,
    AsmHELOCR	= 157,
    AsmHESTOC	= 158,
    AsmHESTOCG	= 159,
    AsmHJ	= 160,
    AsmHJG	= 161,
    AsmHLOC	= 162,
    AsmHLOCG	= 163,
    AsmHLOCGR	= 164,
    AsmHLOCR	= 165,
    AsmHSTOC	= 166,
    AsmHSTOCG	= 167,
    AsmJEAltCGI	= 168,
    AsmJEAltCGR	= 169,
    AsmJEAltCI	= 170,
    AsmJEAltCR	= 171,
    AsmJECGI	= 172,
    AsmJECGR	= 173,
    AsmJECI	= 174,
    AsmJECR	= 175,
    AsmJHAltCGI	= 176,
    AsmJHAltCGR	= 177,
    AsmJHAltCI	= 178,
    AsmJHAltCR	= 179,
    AsmJHCGI	= 180,
    AsmJHCGR	= 181,
    AsmJHCI	= 182,
    AsmJHCR	= 183,
    AsmJHEAltCGI	= 184,
    AsmJHEAltCGR	= 185,
    AsmJHEAltCI	= 186,
    AsmJHEAltCR	= 187,
    AsmJHECGI	= 188,
    AsmJHECGR	= 189,
    AsmJHECI	= 190,
    AsmJHECR	= 191,
    AsmJLAltCGI	= 192,
    AsmJLAltCGR	= 193,
    AsmJLAltCI	= 194,
    AsmJLAltCR	= 195,
    AsmJLCGI	= 196,
    AsmJLCGR	= 197,
    AsmJLCI	= 198,
    AsmJLCR	= 199,
    AsmJLEAltCGI	= 200,
    AsmJLEAltCGR	= 201,
    AsmJLEAltCI	= 202,
    AsmJLEAltCR	= 203,
    AsmJLECGI	= 204,
    AsmJLECGR	= 205,
    AsmJLECI	= 206,
    AsmJLECR	= 207,
    AsmJLHAltCGI	= 208,
    AsmJLHAltCGR	= 209,
    AsmJLHAltCI	= 210,
    AsmJLHAltCR	= 211,
    AsmJLHCGI	= 212,
    AsmJLHCGR	= 213,
    AsmJLHCI	= 214,
    AsmJLHCR	= 215,
    AsmLEJ	= 216,
    AsmLEJG	= 217,
    AsmLELOC	= 218,
    AsmLELOCG	= 219,
    AsmLELOCGR	= 220,
    AsmLELOCR	= 221,
    AsmLESTOC	= 222,
    AsmLESTOCG	= 223,
    AsmLHJ	= 224,
    AsmLHJG	= 225,
    AsmLHLOC	= 226,
    AsmLHLOCG	= 227,
    AsmLHLOCGR	= 228,
    AsmLHLOCR	= 229,
    AsmLHSTOC	= 230,
    AsmLHSTOCG	= 231,
    AsmLJ	= 232,
    AsmLJG	= 233,
    AsmLLOC	= 234,
    AsmLLOCG	= 235,
    AsmLLOCGR	= 236,
    AsmLLOCR	= 237,
    AsmLOC	= 238,
    AsmLOCG	= 239,
    AsmLOCGR	= 240,
    AsmLOCR	= 241,
    AsmLSTOC	= 242,
    AsmLSTOCG	= 243,
    AsmNEJ	= 244,
    AsmNEJG	= 245,
    AsmNELOC	= 246,
    AsmNELOCG	= 247,
    AsmNELOCGR	= 248,
    AsmNELOCR	= 249,
    AsmNESTOC	= 250,
    AsmNESTOCG	= 251,
    AsmNHEJ	= 252,
    AsmNHEJG	= 253,
    AsmNHELOC	= 254,
    AsmNHELOCG	= 255,
    AsmNHELOCGR	= 256,
    AsmNHELOCR	= 257,
    AsmNHESTOC	= 258,
    AsmNHESTOCG	= 259,
    AsmNHJ	= 260,
    AsmNHJG	= 261,
    AsmNHLOC	= 262,
    AsmNHLOCG	= 263,
    AsmNHLOCGR	= 264,
    AsmNHLOCR	= 265,
    AsmNHSTOC	= 266,
    AsmNHSTOCG	= 267,
    AsmNLEJ	= 268,
    AsmNLEJG	= 269,
    AsmNLELOC	= 270,
    AsmNLELOCG	= 271,
    AsmNLELOCGR	= 272,
    AsmNLELOCR	= 273,
    AsmNLESTOC	= 274,
    AsmNLESTOCG	= 275,
    AsmNLHJ	= 276,
    AsmNLHJG	= 277,
    AsmNLHLOC	= 278,
    AsmNLHLOCG	= 279,
    AsmNLHLOCGR	= 280,
    AsmNLHLOCR	= 281,
    AsmNLHSTOC	= 282,
    AsmNLHSTOCG	= 283,
    AsmNLJ	= 284,
    AsmNLJG	= 285,
    AsmNLLOC	= 286,
    AsmNLLOCG	= 287,
    AsmNLLOCGR	= 288,
    AsmNLLOCR	= 289,
    AsmNLSTOC	= 290,
    AsmNLSTOCG	= 291,
    AsmNOJ	= 292,
    AsmNOJG	= 293,
    AsmNOLOC	= 294,
    AsmNOLOCG	= 295,
    AsmNOLOCGR	= 296,
    AsmNOLOCR	= 297,
    AsmNOSTOC	= 298,
    AsmNOSTOCG	= 299,
    AsmOJ	= 300,
    AsmOJG	= 301,
    AsmOLOC	= 302,
    AsmOLOCG	= 303,
    AsmOLOCGR	= 304,
    AsmOLOCR	= 305,
    AsmOSTOC	= 306,
    AsmOSTOCG	= 307,
    AsmSTOC	= 308,
    AsmSTOCG	= 309,
    BASR	= 310,
    BR	= 311,
    BRAS	= 312,
    BRASL	= 313,
    BRC	= 314,
    BRCL	= 315,
    BRCT	= 316,
    BRCTG	= 317,
    C	= 318,
    CDB	= 319,
    CDBR	= 320,
    CDFBR	= 321,
    CDGBR	= 322,
    CEB	= 323,
    CEBR	= 324,
    CEFBR	= 325,
    CEGBR	= 326,
    CFDBR	= 327,
    CFEBR	= 328,
    CFI	= 329,
    CFXBR	= 330,
    CG	= 331,
    CGDBR	= 332,
    CGEBR	= 333,
    CGF	= 334,
    CGFI	= 335,
    CGFR	= 336,
    CGFRL	= 337,
    CGH	= 338,
    CGHI	= 339,
    CGHRL	= 340,
    CGHSI	= 341,
    CGIJ	= 342,
    CGR	= 343,
    CGRJ	= 344,
    CGRL	= 345,
    CGXBR	= 346,
    CH	= 347,
    CHHSI	= 348,
    CHI	= 349,
    CHRL	= 350,
    CHSI	= 351,
    CHY	= 352,
    CIJ	= 353,
    CL	= 354,
    CLC	= 355,
    CLCLoop	= 356,
    CLCSequence	= 357,
    CLFHSI	= 358,
    CLFI	= 359,
    CLG	= 360,
    CLGF	= 361,
    CLGFI	= 362,
    CLGFR	= 363,
    CLGFRL	= 364,
    CLGHRL	= 365,
    CLGHSI	= 366,
    CLGR	= 367,
    CLGRL	= 368,
    CLHHSI	= 369,
    CLHRL	= 370,
    CLI	= 371,
    CLIY	= 372,
    CLR	= 373,
    CLRL	= 374,
    CLST	= 375,
    CLSTLoop	= 376,
    CLY	= 377,
    CPSDRdd	= 378,
    CPSDRds	= 379,
    CPSDRsd	= 380,
    CPSDRss	= 381,
    CR	= 382,
    CRJ	= 383,
    CRL	= 384,
    CS	= 385,
    CSG	= 386,
    CSY	= 387,
    CXBR	= 388,
    CXFBR	= 389,
    CXGBR	= 390,
    CY	= 391,
    CallBR	= 392,
    CallJG	= 393,
    CondStore16	= 394,
    CondStore16Inv	= 395,
    CondStore16_32	= 396,
    CondStore16_32Inv	= 397,
    CondStore32	= 398,
    CondStore32Inv	= 399,
    CondStore32_32	= 400,
    CondStore32_32Inv	= 401,
    CondStore64	= 402,
    CondStore64Inv	= 403,
    CondStore8	= 404,
    CondStore8Inv	= 405,
    CondStore8_32	= 406,
    CondStore8_32Inv	= 407,
    CondStoreF32	= 408,
    CondStoreF32Inv	= 409,
    CondStoreF64	= 410,
    CondStoreF64Inv	= 411,
    DDB	= 412,
    DDBR	= 413,
    DEB	= 414,
    DEBR	= 415,
    DL	= 416,
    DLG	= 417,
    DLGR	= 418,
    DLR	= 419,
    DSG	= 420,
    DSGF	= 421,
    DSGFR	= 422,
    DSGR	= 423,
    DXBR	= 424,
    EAR	= 425,
    FIDBR	= 426,
    FIDBRA	= 427,
    FIEBR	= 428,
    FIEBRA	= 429,
    FIXBR	= 430,
    FIXBRA	= 431,
    FLOGR	= 432,
    IC	= 433,
    IC32	= 434,
    IC32Y	= 435,
    ICY	= 436,
    IIHF	= 437,
    IIHH	= 438,
    IIHL	= 439,
    IILF	= 440,
    IILF32	= 441,
    IILH	= 442,
    IILH32	= 443,
    IILL	= 444,
    IILL32	= 445,
    IPM	= 446,
    J	= 447,
    JG	= 448,
    L	= 449,
    L128	= 450,
    LA	= 451,
    LARL	= 452,
    LAY	= 453,
    LB	= 454,
    LBR	= 455,
    LCDBR	= 456,
    LCEBR	= 457,
    LCGFR	= 458,
    LCGR	= 459,
    LCR	= 460,
    LCXBR	= 461,
    LD	= 462,
    LDEB	= 463,
    LDEBR	= 464,
    LDGR	= 465,
    LDR	= 466,
    LDXBR	= 467,
    LDY	= 468,
    LE	= 469,
    LEDBR	= 470,
    LER	= 471,
    LEXBR	= 472,
    LEY	= 473,
    LG	= 474,
    LGB	= 475,
    LGBR	= 476,
    LGDR	= 477,
    LGF	= 478,
    LGFI	= 479,
    LGFR	= 480,
    LGFRL	= 481,
    LGH	= 482,
    LGHI	= 483,
    LGHR	= 484,
    LGHRL	= 485,
    LGR	= 486,
    LGRL	= 487,
    LH	= 488,
    LHI	= 489,
    LHR	= 490,
    LHRL	= 491,
    LHY	= 492,
    LLC	= 493,
    LLCR	= 494,
    LLGC	= 495,
    LLGCR	= 496,
    LLGF	= 497,
    LLGFR	= 498,
    LLGFRL	= 499,
    LLGH	= 500,
    LLGHR	= 501,
    LLGHRL	= 502,
    LLH	= 503,
    LLHR	= 504,
    LLHRL	= 505,
    LLIHF	= 506,
    LLIHH	= 507,
    LLIHL	= 508,
    LLILF	= 509,
    LLILH	= 510,
    LLILL	= 511,
    LMG	= 512,
    LNDBR	= 513,
    LNEBR	= 514,
    LNGFR	= 515,
    LNGR	= 516,
    LNR	= 517,
    LNXBR	= 518,
    LOC	= 519,
    LOCG	= 520,
    LOCGR	= 521,
    LOCR	= 522,
    LPDBR	= 523,
    LPEBR	= 524,
    LPGFR	= 525,
    LPGR	= 526,
    LPR	= 527,
    LPXBR	= 528,
    LR	= 529,
    LRL	= 530,
    LRV	= 531,
    LRVG	= 532,
    LRVGR	= 533,
    LRVR	= 534,
    LT	= 535,
    LTDBR	= 536,
    LTDBRCompare	= 537,
    LTEBR	= 538,
    LTEBRCompare	= 539,
    LTG	= 540,
    LTGF	= 541,
    LTGFR	= 542,
    LTGR	= 543,
    LTR	= 544,
    LTXBR	= 545,
    LTXBRCompare	= 546,
    LX	= 547,
    LXDB	= 548,
    LXDBR	= 549,
    LXEB	= 550,
    LXEBR	= 551,
    LXR	= 552,
    LY	= 553,
    LZDR	= 554,
    LZER	= 555,
    LZXR	= 556,
    MADB	= 557,
    MADBR	= 558,
    MAEB	= 559,
    MAEBR	= 560,
    MDB	= 561,
    MDBR	= 562,
    MDEB	= 563,
    MDEBR	= 564,
    MEEB	= 565,
    MEEBR	= 566,
    MGHI	= 567,
    MH	= 568,
    MHI	= 569,
    MHY	= 570,
    MLG	= 571,
    MLGR	= 572,
    MS	= 573,
    MSDB	= 574,
    MSDBR	= 575,
    MSEB	= 576,
    MSEBR	= 577,
    MSFI	= 578,
    MSG	= 579,
    MSGF	= 580,
    MSGFI	= 581,
    MSGFR	= 582,
    MSGR	= 583,
    MSR	= 584,
    MSY	= 585,
    MVC	= 586,
    MVCLoop	= 587,
    MVCSequence	= 588,
    MVGHI	= 589,
    MVHHI	= 590,
    MVHI	= 591,
    MVI	= 592,
    MVIY	= 593,
    MVST	= 594,
    MVSTLoop	= 595,
    MXBR	= 596,
    MXDB	= 597,
    MXDBR	= 598,
    N	= 599,
    NG	= 600,
    NGR	= 601,
    NGRK	= 602,
    NI	= 603,
    NIHF	= 604,
    NIHH	= 605,
    NIHL	= 606,
    NILF	= 607,
    NILF32	= 608,
    NILH	= 609,
    NILH32	= 610,
    NILL	= 611,
    NILL32	= 612,
    NIY	= 613,
    NR	= 614,
    NRK	= 615,
    NY	= 616,
    O	= 617,
    OG	= 618,
    OGR	= 619,
    OGRK	= 620,
    OI	= 621,
    OIHF	= 622,
    OIHH	= 623,
    OIHL	= 624,
    OILF	= 625,
    OILF32	= 626,
    OILH	= 627,
    OILH32	= 628,
    OILL	= 629,
    OILL32	= 630,
    OIY	= 631,
    OR	= 632,
    ORK	= 633,
    OY	= 634,
    PFD	= 635,
    PFDRL	= 636,
    RET	= 637,
    RISBG	= 638,
    RISBG32	= 639,
    RISBHG	= 640,
    RISBLG	= 641,
    RISBLG32	= 642,
    RLL	= 643,
    RLLG	= 644,
    RNSBG	= 645,
    ROSBG	= 646,
    RXSBG	= 647,
    S	= 648,
    SDB	= 649,
    SDBR	= 650,
    SEB	= 651,
    SEBR	= 652,
    SG	= 653,
    SGF	= 654,
    SGFR	= 655,
    SGR	= 656,
    SGRK	= 657,
    SH	= 658,
    SHY	= 659,
    SL	= 660,
    SLB	= 661,
    SLBG	= 662,
    SLBR	= 663,
    SLFI	= 664,
    SLG	= 665,
    SLGBR	= 666,
    SLGF	= 667,
    SLGFI	= 668,
    SLGFR	= 669,
    SLGR	= 670,
    SLGRK	= 671,
    SLL	= 672,
    SLLG	= 673,
    SLLK	= 674,
    SLR	= 675,
    SLRK	= 676,
    SLY	= 677,
    SQDB	= 678,
    SQDBR	= 679,
    SQEB	= 680,
    SQEBR	= 681,
    SQXBR	= 682,
    SR	= 683,
    SRA	= 684,
    SRAG	= 685,
    SRAK	= 686,
    SRK	= 687,
    SRL	= 688,
    SRLG	= 689,
    SRLK	= 690,
    SRST	= 691,
    SRSTLoop	= 692,
    ST	= 693,
    ST128	= 694,
    ST32	= 695,
    ST32Y	= 696,
    STC	= 697,
    STC32	= 698,
    STC32Y	= 699,
    STCY	= 700,
    STD	= 701,
    STDY	= 702,
    STE	= 703,
    STEY	= 704,
    STG	= 705,
    STGRL	= 706,
    STH	= 707,
    STH32	= 708,
    STH32Y	= 709,
    STHRL	= 710,
    STHRL32	= 711,
    STHY	= 712,
    STMG	= 713,
    STOC	= 714,
    STOC32	= 715,
    STOCG	= 716,
    STRL	= 717,
    STRL32	= 718,
    STRV	= 719,
    STRVG	= 720,
    STX	= 721,
    STY	= 722,
    SXBR	= 723,
    SY	= 724,
    Select32	= 725,
    Select64	= 726,
    SelectF128	= 727,
    SelectF32	= 728,
    SelectF64	= 729,
    TMHH	= 730,
    TMHL	= 731,
    TMLH	= 732,
    TMLH32	= 733,
    TMLL	= 734,
    TMLL32	= 735,
    X	= 736,
    XG	= 737,
    XGR	= 738,
    XGRK	= 739,
    XI	= 740,
    XIHF	= 741,
    XILF	= 742,
    XILF32	= 743,
    XIY	= 744,
    XR	= 745,
    XRK	= 746,
    XY	= 747,
    ZEXT128_32	= 748,
    ZEXT128_64	= 749,
    INSTRUCTION_LIST_END = 750
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

static const uint16_t ImplicitList1[] = { SystemZ::CC, 0 };
static const uint16_t ImplicitList2[] = { SystemZ::R0D, SystemZ::R1D, SystemZ::R2D, SystemZ::R3D, SystemZ::R4D, SystemZ::R5D, SystemZ::R14D, SystemZ::F0D, SystemZ::F1D, SystemZ::F2D, SystemZ::F3D, SystemZ::F4D, SystemZ::F5D, SystemZ::F6D, SystemZ::F7D, SystemZ::CC, 0 };
static const uint16_t ImplicitList3[] = { SystemZ::R0W, 0 };
static const uint16_t ImplicitList4[] = { SystemZ::R1D, 0 };

static const MCOperandInfo OperandInfo2[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo3[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo4[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo5[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo6[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo7[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo8[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo9[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo10[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo11[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo12[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { SystemZ::GR128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo35[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo62[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo73[] = { { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo75[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo76[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo77[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo78[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo79[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo80[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo81[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo82[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo83[] = { { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo84[] = { { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo85[] = { { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo86[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo87[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo88[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo89[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo90[] = { { SystemZ::GR128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo91[] = { { SystemZ::GR128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo92[] = { { SystemZ::GR128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo93[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo94[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo95[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo96[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo97[] = { { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo98[] = { { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo99[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo100[] = { { SystemZ::GR128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo101[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo102[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo103[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo104[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo105[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo106[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo107[] = { { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo108[] = { { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo109[] = { { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo110[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo111[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo112[] = { { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo113[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo114[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo115[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo116[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo117[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo118[] = { { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo119[] = { { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo120[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo121[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo122[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo123[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo124[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo125[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::ADDR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo126[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo127[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo128[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo129[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo130[] = { { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo131[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo132[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo133[] = { { SystemZ::GR128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };

extern const MCInstrDesc SystemZInsts[] = {
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
  { 17,	5,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x23c88ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #17 = A
  { 18,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x3fd08ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #18 = ADB
  { 19,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x3fc00ULL, NULL, ImplicitList1, OperandInfo10 },  // Inst #19 = ADBR
  { 20,	1,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #20 = ADJCALLSTACKDOWN
  { 21,	2,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo11 },  // Inst #21 = ADJCALLSTACKUP
  { 22,	4,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #22 = ADJDYNALLOC
  { 23,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x3fc88ULL, NULL, ImplicitList1, OperandInfo13 },  // Inst #23 = AEB
  { 24,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x3fc00ULL, NULL, ImplicitList1, OperandInfo14 },  // Inst #24 = AEBR
  { 25,	2,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo15 },  // Inst #25 = AEXT128_64
  { 26,	3,	1,	0,	6,	0, 0x23c00ULL, NULL, ImplicitList1, OperandInfo16 },  // Inst #26 = AFI
  { 27,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x23d0cULL, NULL, ImplicitList1, OperandInfo17 },  // Inst #27 = AG
  { 28,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x23c8cULL, NULL, ImplicitList1, OperandInfo17 },  // Inst #28 = AGF
  { 29,	3,	1,	0,	6,	0, 0x23c00ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #29 = AGFI
  { 30,	3,	1,	0,	4,	0, 0x23c00ULL, NULL, ImplicitList1, OperandInfo19 },  // Inst #30 = AGFR
  { 31,	3,	1,	0,	4,	0|(1<<MCID::ConvertibleTo3Addr), 0x23c00ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #31 = AGHI
  { 32,	3,	1,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x23c00ULL, NULL, ImplicitList1, OperandInfo20 },  // Inst #32 = AGHIK
  { 33,	3,	1,	0,	4,	0|(1<<MCID::ConvertibleTo3Addr)|(1<<MCID::Commutable), 0x23c00ULL, NULL, ImplicitList1, OperandInfo21 },  // Inst #33 = AGR
  { 34,	3,	1,	0,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x23c00ULL, NULL, ImplicitList1, OperandInfo22 },  // Inst #34 = AGRK
  { 35,	3,	0,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x23c04ULL, NULL, ImplicitList1, OperandInfo23 },  // Inst #35 = AGSI
  { 36,	5,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x23c48ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #36 = AH
  { 37,	3,	1,	0,	4,	0|(1<<MCID::ConvertibleTo3Addr), 0x23c00ULL, NULL, ImplicitList1, OperandInfo16 },  // Inst #37 = AHI
  { 38,	3,	1,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x23c00ULL, NULL, ImplicitList1, OperandInfo24 },  // Inst #38 = AHIK
  { 39,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x23c4cULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #39 = AHY
  { 40,	5,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x88ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #40 = AL
  { 41,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8cULL, ImplicitList1, ImplicitList1, OperandInfo8 },  // Inst #41 = ALC
  { 42,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x10cULL, ImplicitList1, ImplicitList1, OperandInfo17 },  // Inst #42 = ALCG
  { 43,	3,	1,	0,	4,	0, 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo21 },  // Inst #43 = ALCGR
  { 44,	3,	1,	0,	4,	0, 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo25 },  // Inst #44 = ALCR
  { 45,	3,	1,	0,	6,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo16 },  // Inst #45 = ALFI
  { 46,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x10cULL, NULL, ImplicitList1, OperandInfo17 },  // Inst #46 = ALG
  { 47,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8cULL, NULL, ImplicitList1, OperandInfo17 },  // Inst #47 = ALGF
  { 48,	3,	1,	0,	6,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #48 = ALGFI
  { 49,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo19 },  // Inst #49 = ALGFR
  { 50,	3,	1,	0,	6,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo20 },  // Inst #50 = ALGHSIK
  { 51,	3,	1,	0,	4,	0|(1<<MCID::ConvertibleTo3Addr)|(1<<MCID::Commutable), 0x0ULL, NULL, ImplicitList1, OperandInfo21 },  // Inst #51 = ALGR
  { 52,	3,	1,	0,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList1, OperandInfo22 },  // Inst #52 = ALGRK
  { 53,	3,	1,	0,	6,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo24 },  // Inst #53 = ALHSIK
  { 54,	3,	1,	0,	2,	0|(1<<MCID::ConvertibleTo3Addr)|(1<<MCID::Commutable), 0x0ULL, NULL, ImplicitList1, OperandInfo25 },  // Inst #54 = ALR
  { 55,	3,	1,	0,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList1, OperandInfo26 },  // Inst #55 = ALRK
  { 56,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8cULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #56 = ALY
  { 57,	3,	1,	0,	2,	0|(1<<MCID::ConvertibleTo3Addr)|(1<<MCID::Commutable), 0x23c00ULL, NULL, ImplicitList1, OperandInfo25 },  // Inst #57 = AR
  { 58,	3,	1,	0,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x23c00ULL, NULL, ImplicitList1, OperandInfo26 },  // Inst #58 = ARK
  { 59,	3,	0,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x23c04ULL, NULL, ImplicitList1, OperandInfo23 },  // Inst #59 = ASI
  { 60,	8,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo27 },  // Inst #60 = ATOMIC_CMP_SWAPW
  { 61,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo28 },  // Inst #61 = ATOMIC_LOADW_AFI
  { 62,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo29 },  // Inst #62 = ATOMIC_LOADW_AR
  { 63,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo29 },  // Inst #63 = ATOMIC_LOADW_MAX
  { 64,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo29 },  // Inst #64 = ATOMIC_LOADW_MIN
  { 65,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo28 },  // Inst #65 = ATOMIC_LOADW_NILH
  { 66,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo28 },  // Inst #66 = ATOMIC_LOADW_NILHi
  { 67,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo29 },  // Inst #67 = ATOMIC_LOADW_NR
  { 68,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo29 },  // Inst #68 = ATOMIC_LOADW_NRi
  { 69,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo28 },  // Inst #69 = ATOMIC_LOADW_OILH
  { 70,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo29 },  // Inst #70 = ATOMIC_LOADW_OR
  { 71,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo29 },  // Inst #71 = ATOMIC_LOADW_SR
  { 72,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo29 },  // Inst #72 = ATOMIC_LOADW_UMAX
  { 73,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo29 },  // Inst #73 = ATOMIC_LOADW_UMIN
  { 74,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo28 },  // Inst #74 = ATOMIC_LOADW_XILF
  { 75,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo29 },  // Inst #75 = ATOMIC_LOADW_XR
  { 76,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo30 },  // Inst #76 = ATOMIC_LOAD_AFI
  { 77,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo31 },  // Inst #77 = ATOMIC_LOAD_AGFI
  { 78,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo31 },  // Inst #78 = ATOMIC_LOAD_AGHI
  { 79,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo32 },  // Inst #79 = ATOMIC_LOAD_AGR
  { 80,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo30 },  // Inst #80 = ATOMIC_LOAD_AHI
  { 81,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo33 },  // Inst #81 = ATOMIC_LOAD_AR
  { 82,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo33 },  // Inst #82 = ATOMIC_LOAD_MAX_32
  { 83,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo32 },  // Inst #83 = ATOMIC_LOAD_MAX_64
  { 84,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo33 },  // Inst #84 = ATOMIC_LOAD_MIN_32
  { 85,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo32 },  // Inst #85 = ATOMIC_LOAD_MIN_64
  { 86,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo32 },  // Inst #86 = ATOMIC_LOAD_NGR
  { 87,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo32 },  // Inst #87 = ATOMIC_LOAD_NGRi
  { 88,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo31 },  // Inst #88 = ATOMIC_LOAD_NIHF
  { 89,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo31 },  // Inst #89 = ATOMIC_LOAD_NIHFi
  { 90,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo31 },  // Inst #90 = ATOMIC_LOAD_NIHH
  { 91,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo31 },  // Inst #91 = ATOMIC_LOAD_NIHHi
  { 92,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo31 },  // Inst #92 = ATOMIC_LOAD_NIHL
  { 93,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo31 },  // Inst #93 = ATOMIC_LOAD_NIHLi
  { 94,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo31 },  // Inst #94 = ATOMIC_LOAD_NILF
  { 95,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo30 },  // Inst #95 = ATOMIC_LOAD_NILF32
  { 96,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo30 },  // Inst #96 = ATOMIC_LOAD_NILF32i
  { 97,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo31 },  // Inst #97 = ATOMIC_LOAD_NILFi
  { 98,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo31 },  // Inst #98 = ATOMIC_LOAD_NILH
  { 99,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo30 },  // Inst #99 = ATOMIC_LOAD_NILH32
  { 100,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo30 },  // Inst #100 = ATOMIC_LOAD_NILH32i
  { 101,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo31 },  // Inst #101 = ATOMIC_LOAD_NILHi
  { 102,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo31 },  // Inst #102 = ATOMIC_LOAD_NILL
  { 103,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo30 },  // Inst #103 = ATOMIC_LOAD_NILL32
  { 104,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo30 },  // Inst #104 = ATOMIC_LOAD_NILL32i
  { 105,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo31 },  // Inst #105 = ATOMIC_LOAD_NILLi
  { 106,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo33 },  // Inst #106 = ATOMIC_LOAD_NR
  { 107,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo33 },  // Inst #107 = ATOMIC_LOAD_NRi
  { 108,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo32 },  // Inst #108 = ATOMIC_LOAD_OGR
  { 109,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo31 },  // Inst #109 = ATOMIC_LOAD_OIHF
  { 110,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo31 },  // Inst #110 = ATOMIC_LOAD_OIHH
  { 111,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo31 },  // Inst #111 = ATOMIC_LOAD_OIHL
  { 112,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo31 },  // Inst #112 = ATOMIC_LOAD_OILF
  { 113,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo30 },  // Inst #113 = ATOMIC_LOAD_OILF32
  { 114,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo31 },  // Inst #114 = ATOMIC_LOAD_OILH
  { 115,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo30 },  // Inst #115 = ATOMIC_LOAD_OILH32
  { 116,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo31 },  // Inst #116 = ATOMIC_LOAD_OILL
  { 117,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo30 },  // Inst #117 = ATOMIC_LOAD_OILL32
  { 118,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo33 },  // Inst #118 = ATOMIC_LOAD_OR
  { 119,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo32 },  // Inst #119 = ATOMIC_LOAD_SGR
  { 120,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo33 },  // Inst #120 = ATOMIC_LOAD_SR
  { 121,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo33 },  // Inst #121 = ATOMIC_LOAD_UMAX_32
  { 122,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo32 },  // Inst #122 = ATOMIC_LOAD_UMAX_64
  { 123,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo33 },  // Inst #123 = ATOMIC_LOAD_UMIN_32
  { 124,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo32 },  // Inst #124 = ATOMIC_LOAD_UMIN_64
  { 125,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo32 },  // Inst #125 = ATOMIC_LOAD_XGR
  { 126,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo31 },  // Inst #126 = ATOMIC_LOAD_XIHF
  { 127,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo31 },  // Inst #127 = ATOMIC_LOAD_XILF
  { 128,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo30 },  // Inst #128 = ATOMIC_LOAD_XILF32
  { 129,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo33 },  // Inst #129 = ATOMIC_LOAD_XR
  { 130,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo29 },  // Inst #130 = ATOMIC_SWAPW
  { 131,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo33 },  // Inst #131 = ATOMIC_SWAP_32
  { 132,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo32 },  // Inst #132 = ATOMIC_SWAP_64
  { 133,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x3fc00ULL, NULL, ImplicitList1, OperandInfo34 },  // Inst #133 = AXBR
  { 134,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x23c8cULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #134 = AY
  { 135,	2,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo35 },  // Inst #135 = AsmBASR
  { 136,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #136 = AsmBRAS
  { 137,	2,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #137 = AsmBRASL
  { 138,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, NULL, OperandInfo7 },  // Inst #138 = AsmBRC
  { 139,	2,	0,	0,	6,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, NULL, OperandInfo7 },  // Inst #139 = AsmBRCL
  { 140,	4,	0,	0,	6,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList1, OperandInfo37 },  // Inst #140 = AsmCGIJ
  { 141,	4,	0,	0,	6,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList1, OperandInfo38 },  // Inst #141 = AsmCGRJ
  { 142,	4,	0,	0,	6,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList1, OperandInfo39 },  // Inst #142 = AsmCIJ
  { 143,	4,	0,	0,	6,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList1, OperandInfo40 },  // Inst #143 = AsmCRJ
  { 144,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #144 = AsmEJ
  { 145,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #145 = AsmEJG
  { 146,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo41 },  // Inst #146 = AsmELOC
  { 147,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo42 },  // Inst #147 = AsmELOCG
  { 148,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #148 = AsmELOCGR
  { 149,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo25 },  // Inst #149 = AsmELOCR
  { 150,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo43 },  // Inst #150 = AsmESTOC
  { 151,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo44 },  // Inst #151 = AsmESTOCG
  { 152,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #152 = AsmHEJ
  { 153,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #153 = AsmHEJG
  { 154,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo41 },  // Inst #154 = AsmHELOC
  { 155,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo42 },  // Inst #155 = AsmHELOCG
  { 156,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #156 = AsmHELOCGR
  { 157,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo25 },  // Inst #157 = AsmHELOCR
  { 158,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo43 },  // Inst #158 = AsmHESTOC
  { 159,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo44 },  // Inst #159 = AsmHESTOCG
  { 160,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #160 = AsmHJ
  { 161,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #161 = AsmHJG
  { 162,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo41 },  // Inst #162 = AsmHLOC
  { 163,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo42 },  // Inst #163 = AsmHLOCG
  { 164,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #164 = AsmHLOCGR
  { 165,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo25 },  // Inst #165 = AsmHLOCR
  { 166,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo43 },  // Inst #166 = AsmHSTOC
  { 167,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo44 },  // Inst #167 = AsmHSTOCG
  { 168,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo45 },  // Inst #168 = AsmJEAltCGI
  { 169,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #169 = AsmJEAltCGR
  { 170,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo46 },  // Inst #170 = AsmJEAltCI
  { 171,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo24 },  // Inst #171 = AsmJEAltCR
  { 172,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo45 },  // Inst #172 = AsmJECGI
  { 173,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #173 = AsmJECGR
  { 174,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo46 },  // Inst #174 = AsmJECI
  { 175,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo24 },  // Inst #175 = AsmJECR
  { 176,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo45 },  // Inst #176 = AsmJHAltCGI
  { 177,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #177 = AsmJHAltCGR
  { 178,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo46 },  // Inst #178 = AsmJHAltCI
  { 179,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo24 },  // Inst #179 = AsmJHAltCR
  { 180,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo45 },  // Inst #180 = AsmJHCGI
  { 181,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #181 = AsmJHCGR
  { 182,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo46 },  // Inst #182 = AsmJHCI
  { 183,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo24 },  // Inst #183 = AsmJHCR
  { 184,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo45 },  // Inst #184 = AsmJHEAltCGI
  { 185,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #185 = AsmJHEAltCGR
  { 186,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo46 },  // Inst #186 = AsmJHEAltCI
  { 187,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo24 },  // Inst #187 = AsmJHEAltCR
  { 188,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo45 },  // Inst #188 = AsmJHECGI
  { 189,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #189 = AsmJHECGR
  { 190,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo46 },  // Inst #190 = AsmJHECI
  { 191,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo24 },  // Inst #191 = AsmJHECR
  { 192,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo45 },  // Inst #192 = AsmJLAltCGI
  { 193,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #193 = AsmJLAltCGR
  { 194,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo46 },  // Inst #194 = AsmJLAltCI
  { 195,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo24 },  // Inst #195 = AsmJLAltCR
  { 196,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo45 },  // Inst #196 = AsmJLCGI
  { 197,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #197 = AsmJLCGR
  { 198,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo46 },  // Inst #198 = AsmJLCI
  { 199,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo24 },  // Inst #199 = AsmJLCR
  { 200,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo45 },  // Inst #200 = AsmJLEAltCGI
  { 201,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #201 = AsmJLEAltCGR
  { 202,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo46 },  // Inst #202 = AsmJLEAltCI
  { 203,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo24 },  // Inst #203 = AsmJLEAltCR
  { 204,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo45 },  // Inst #204 = AsmJLECGI
  { 205,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #205 = AsmJLECGR
  { 206,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo46 },  // Inst #206 = AsmJLECI
  { 207,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo24 },  // Inst #207 = AsmJLECR
  { 208,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo45 },  // Inst #208 = AsmJLHAltCGI
  { 209,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #209 = AsmJLHAltCGR
  { 210,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo46 },  // Inst #210 = AsmJLHAltCI
  { 211,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo24 },  // Inst #211 = AsmJLHAltCR
  { 212,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo45 },  // Inst #212 = AsmJLHCGI
  { 213,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #213 = AsmJLHCGR
  { 214,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo46 },  // Inst #214 = AsmJLHCI
  { 215,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo24 },  // Inst #215 = AsmJLHCR
  { 216,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #216 = AsmLEJ
  { 217,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #217 = AsmLEJG
  { 218,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo41 },  // Inst #218 = AsmLELOC
  { 219,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo42 },  // Inst #219 = AsmLELOCG
  { 220,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #220 = AsmLELOCGR
  { 221,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo25 },  // Inst #221 = AsmLELOCR
  { 222,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo43 },  // Inst #222 = AsmLESTOC
  { 223,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo44 },  // Inst #223 = AsmLESTOCG
  { 224,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #224 = AsmLHJ
  { 225,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #225 = AsmLHJG
  { 226,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo41 },  // Inst #226 = AsmLHLOC
  { 227,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo42 },  // Inst #227 = AsmLHLOCG
  { 228,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #228 = AsmLHLOCGR
  { 229,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo25 },  // Inst #229 = AsmLHLOCR
  { 230,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo43 },  // Inst #230 = AsmLHSTOC
  { 231,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo44 },  // Inst #231 = AsmLHSTOCG
  { 232,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #232 = AsmLJ
  { 233,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #233 = AsmLJG
  { 234,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo41 },  // Inst #234 = AsmLLOC
  { 235,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo42 },  // Inst #235 = AsmLLOCG
  { 236,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #236 = AsmLLOCGR
  { 237,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo25 },  // Inst #237 = AsmLLOCR
  { 238,	5,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, ImplicitList1, NULL, OperandInfo47 },  // Inst #238 = AsmLOC
  { 239,	5,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, ImplicitList1, NULL, OperandInfo48 },  // Inst #239 = AsmLOCG
  { 240,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, NULL, OperandInfo49 },  // Inst #240 = AsmLOCGR
  { 241,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, NULL, OperandInfo50 },  // Inst #241 = AsmLOCR
  { 242,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo43 },  // Inst #242 = AsmLSTOC
  { 243,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo44 },  // Inst #243 = AsmLSTOCG
  { 244,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #244 = AsmNEJ
  { 245,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #245 = AsmNEJG
  { 246,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo41 },  // Inst #246 = AsmNELOC
  { 247,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo42 },  // Inst #247 = AsmNELOCG
  { 248,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #248 = AsmNELOCGR
  { 249,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo25 },  // Inst #249 = AsmNELOCR
  { 250,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo43 },  // Inst #250 = AsmNESTOC
  { 251,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo44 },  // Inst #251 = AsmNESTOCG
  { 252,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #252 = AsmNHEJ
  { 253,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #253 = AsmNHEJG
  { 254,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo41 },  // Inst #254 = AsmNHELOC
  { 255,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo42 },  // Inst #255 = AsmNHELOCG
  { 256,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #256 = AsmNHELOCGR
  { 257,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo25 },  // Inst #257 = AsmNHELOCR
  { 258,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo43 },  // Inst #258 = AsmNHESTOC
  { 259,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo44 },  // Inst #259 = AsmNHESTOCG
  { 260,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #260 = AsmNHJ
  { 261,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #261 = AsmNHJG
  { 262,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo41 },  // Inst #262 = AsmNHLOC
  { 263,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo42 },  // Inst #263 = AsmNHLOCG
  { 264,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #264 = AsmNHLOCGR
  { 265,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo25 },  // Inst #265 = AsmNHLOCR
  { 266,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo43 },  // Inst #266 = AsmNHSTOC
  { 267,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo44 },  // Inst #267 = AsmNHSTOCG
  { 268,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #268 = AsmNLEJ
  { 269,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #269 = AsmNLEJG
  { 270,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo41 },  // Inst #270 = AsmNLELOC
  { 271,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo42 },  // Inst #271 = AsmNLELOCG
  { 272,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #272 = AsmNLELOCGR
  { 273,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo25 },  // Inst #273 = AsmNLELOCR
  { 274,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo43 },  // Inst #274 = AsmNLESTOC
  { 275,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo44 },  // Inst #275 = AsmNLESTOCG
  { 276,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #276 = AsmNLHJ
  { 277,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #277 = AsmNLHJG
  { 278,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo41 },  // Inst #278 = AsmNLHLOC
  { 279,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo42 },  // Inst #279 = AsmNLHLOCG
  { 280,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #280 = AsmNLHLOCGR
  { 281,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo25 },  // Inst #281 = AsmNLHLOCR
  { 282,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo43 },  // Inst #282 = AsmNLHSTOC
  { 283,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo44 },  // Inst #283 = AsmNLHSTOCG
  { 284,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #284 = AsmNLJ
  { 285,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #285 = AsmNLJG
  { 286,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo41 },  // Inst #286 = AsmNLLOC
  { 287,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo42 },  // Inst #287 = AsmNLLOCG
  { 288,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #288 = AsmNLLOCGR
  { 289,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo25 },  // Inst #289 = AsmNLLOCR
  { 290,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo43 },  // Inst #290 = AsmNLSTOC
  { 291,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo44 },  // Inst #291 = AsmNLSTOCG
  { 292,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #292 = AsmNOJ
  { 293,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #293 = AsmNOJG
  { 294,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo41 },  // Inst #294 = AsmNOLOC
  { 295,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo42 },  // Inst #295 = AsmNOLOCG
  { 296,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #296 = AsmNOLOCGR
  { 297,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo25 },  // Inst #297 = AsmNOLOCR
  { 298,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo43 },  // Inst #298 = AsmNOSTOC
  { 299,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo44 },  // Inst #299 = AsmNOSTOCG
  { 300,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #300 = AsmOJ
  { 301,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #301 = AsmOJG
  { 302,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo41 },  // Inst #302 = AsmOLOC
  { 303,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo42 },  // Inst #303 = AsmOLOCG
  { 304,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #304 = AsmOLOCGR
  { 305,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo25 },  // Inst #305 = AsmOLOCR
  { 306,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo43 },  // Inst #306 = AsmOSTOC
  { 307,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo44 },  // Inst #307 = AsmOSTOCG
  { 308,	4,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, ImplicitList1, NULL, OperandInfo30 },  // Inst #308 = AsmSTOC
  { 309,	4,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, ImplicitList1, NULL, OperandInfo31 },  // Inst #309 = AsmSTOCG
  { 310,	1,	0,	0,	2,	0|(1<<MCID::Call)|(1<<MCID::Variadic), 0x0ULL, NULL, ImplicitList2, OperandInfo51 },  // Inst #310 = BASR
  { 311,	1,	0,	0,	2,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, NULL, NULL, OperandInfo51 },  // Inst #311 = BR
  { 312,	1,	0,	0,	4,	0|(1<<MCID::Call)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList2, OperandInfo5 },  // Inst #312 = BRAS
  { 313,	1,	0,	0,	6,	0|(1<<MCID::Call)|(1<<MCID::Variadic), 0x0ULL, NULL, ImplicitList2, OperandInfo5 },  // Inst #313 = BRASL
  { 314,	3,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x40000ULL, ImplicitList1, NULL, OperandInfo52 },  // Inst #314 = BRC
  { 315,	3,	0,	0,	6,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x40000ULL, ImplicitList1, NULL, OperandInfo52 },  // Inst #315 = BRCL
  { 316,	3,	1,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList1, OperandInfo16 },  // Inst #316 = BRCT
  { 317,	3,	1,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #317 = BRCTG
  { 318,	4,	0,	0,	4,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x3888ULL, NULL, ImplicitList1, OperandInfo53 },  // Inst #318 = C
  { 319,	4,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x3d08ULL, NULL, ImplicitList1, OperandInfo54 },  // Inst #319 = CDB
  { 320,	2,	0,	0,	4,	0|(1<<MCID::Compare), 0x3c00ULL, NULL, ImplicitList1, OperandInfo55 },  // Inst #320 = CDBR
  { 321,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo56 },  // Inst #321 = CDFBR
  { 322,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo57 },  // Inst #322 = CDGBR
  { 323,	4,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x3c88ULL, NULL, ImplicitList1, OperandInfo58 },  // Inst #323 = CEB
  { 324,	2,	0,	0,	4,	0|(1<<MCID::Compare), 0x3c00ULL, NULL, ImplicitList1, OperandInfo59 },  // Inst #324 = CEBR
  { 325,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo60 },  // Inst #325 = CEFBR
  { 326,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo61 },  // Inst #326 = CEGBR
  { 327,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo62 },  // Inst #327 = CFDBR
  { 328,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo63 },  // Inst #328 = CFEBR
  { 329,	2,	0,	0,	6,	0|(1<<MCID::Compare), 0x3800ULL, NULL, ImplicitList1, OperandInfo64 },  // Inst #329 = CFI
  { 330,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo65 },  // Inst #330 = CFXBR
  { 331,	4,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x390cULL, NULL, ImplicitList1, OperandInfo12 },  // Inst #331 = CG
  { 332,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo66 },  // Inst #332 = CGDBR
  { 333,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo67 },  // Inst #333 = CGEBR
  { 334,	4,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x388cULL, NULL, ImplicitList1, OperandInfo12 },  // Inst #334 = CGF
  { 335,	2,	0,	0,	6,	0|(1<<MCID::Compare), 0x3800ULL, NULL, ImplicitList1, OperandInfo36 },  // Inst #335 = CGFI
  { 336,	2,	0,	0,	4,	0|(1<<MCID::Compare), 0x3800ULL, NULL, ImplicitList1, OperandInfo68 },  // Inst #336 = CGFR
  { 337,	2,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x3800ULL, NULL, ImplicitList1, OperandInfo36 },  // Inst #337 = CGFRL
  { 338,	4,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x384cULL, NULL, ImplicitList1, OperandInfo12 },  // Inst #338 = CGH
  { 339,	2,	0,	0,	4,	0|(1<<MCID::Compare), 0x3800ULL, NULL, ImplicitList1, OperandInfo36 },  // Inst #339 = CGHI
  { 340,	2,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x3800ULL, NULL, ImplicitList1, OperandInfo36 },  // Inst #340 = CGHRL
  { 341,	3,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x3800ULL, NULL, ImplicitList1, OperandInfo23 },  // Inst #341 = CGHSI
  { 342,	4,	0,	0,	6,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList1, OperandInfo37 },  // Inst #342 = CGIJ
  { 343,	2,	0,	0,	4,	0|(1<<MCID::Compare), 0x3800ULL, NULL, ImplicitList1, OperandInfo69 },  // Inst #343 = CGR
  { 344,	4,	0,	0,	6,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList1, OperandInfo38 },  // Inst #344 = CGRJ
  { 345,	2,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x3800ULL, NULL, ImplicitList1, OperandInfo36 },  // Inst #345 = CGRL
  { 346,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo70 },  // Inst #346 = CGXBR
  { 347,	4,	0,	0,	4,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x3848ULL, NULL, ImplicitList1, OperandInfo53 },  // Inst #347 = CH
  { 348,	3,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x3800ULL, NULL, ImplicitList1, OperandInfo23 },  // Inst #348 = CHHSI
  { 349,	2,	0,	0,	4,	0|(1<<MCID::Compare), 0x3800ULL, NULL, ImplicitList1, OperandInfo64 },  // Inst #349 = CHI
  { 350,	2,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x3800ULL, NULL, ImplicitList1, OperandInfo64 },  // Inst #350 = CHRL
  { 351,	3,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x3800ULL, NULL, ImplicitList1, OperandInfo23 },  // Inst #351 = CHSI
  { 352,	4,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x384cULL, NULL, ImplicitList1, OperandInfo53 },  // Inst #352 = CHY
  { 353,	4,	0,	0,	6,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList1, OperandInfo39 },  // Inst #353 = CIJ
  { 354,	4,	0,	0,	4,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x103888ULL, NULL, ImplicitList1, OperandInfo53 },  // Inst #354 = CL
  { 355,	5,	0,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList1, OperandInfo71 },  // Inst #355 = CLC
  { 356,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo72 },  // Inst #356 = CLCLoop
  { 357,	5,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo73 },  // Inst #357 = CLCSequence
  { 358,	3,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x103800ULL, NULL, ImplicitList1, OperandInfo23 },  // Inst #358 = CLFHSI
  { 359,	2,	0,	0,	6,	0|(1<<MCID::Compare), 0x103800ULL, NULL, ImplicitList1, OperandInfo64 },  // Inst #359 = CLFI
  { 360,	4,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x10390cULL, NULL, ImplicitList1, OperandInfo12 },  // Inst #360 = CLG
  { 361,	4,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x10388cULL, NULL, ImplicitList1, OperandInfo12 },  // Inst #361 = CLGF
  { 362,	2,	0,	0,	6,	0|(1<<MCID::Compare), 0x103800ULL, NULL, ImplicitList1, OperandInfo36 },  // Inst #362 = CLGFI
  { 363,	2,	0,	0,	4,	0|(1<<MCID::Compare), 0x103800ULL, NULL, ImplicitList1, OperandInfo68 },  // Inst #363 = CLGFR
  { 364,	2,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x103800ULL, NULL, ImplicitList1, OperandInfo36 },  // Inst #364 = CLGFRL
  { 365,	2,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x103800ULL, NULL, ImplicitList1, OperandInfo36 },  // Inst #365 = CLGHRL
  { 366,	3,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x103800ULL, NULL, ImplicitList1, OperandInfo23 },  // Inst #366 = CLGHSI
  { 367,	2,	0,	0,	4,	0|(1<<MCID::Compare), 0x103800ULL, NULL, ImplicitList1, OperandInfo69 },  // Inst #367 = CLGR
  { 368,	2,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x103800ULL, NULL, ImplicitList1, OperandInfo36 },  // Inst #368 = CLGRL
  { 369,	3,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x103800ULL, NULL, ImplicitList1, OperandInfo23 },  // Inst #369 = CLHHSI
  { 370,	2,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x103800ULL, NULL, ImplicitList1, OperandInfo64 },  // Inst #370 = CLHRL
  { 371,	3,	0,	0,	4,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x103800ULL, NULL, ImplicitList1, OperandInfo23 },  // Inst #371 = CLI
  { 372,	3,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x103804ULL, NULL, ImplicitList1, OperandInfo23 },  // Inst #372 = CLIY
  { 373,	2,	0,	0,	2,	0|(1<<MCID::Compare), 0x103800ULL, NULL, ImplicitList1, OperandInfo74 },  // Inst #373 = CLR
  { 374,	2,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x103800ULL, NULL, ImplicitList1, OperandInfo64 },  // Inst #374 = CLRL
  { 375,	4,	2,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList1, OperandInfo75 },  // Inst #375 = CLST
  { 376,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList3, ImplicitList1, OperandInfo76 },  // Inst #376 = CLSTLoop
  { 377,	4,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x10388cULL, NULL, ImplicitList1, OperandInfo53 },  // Inst #377 = CLY
  { 378,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo77 },  // Inst #378 = CPSDRdd
  { 379,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo78 },  // Inst #379 = CPSDRds
  { 380,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo79 },  // Inst #380 = CPSDRsd
  { 381,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo80 },  // Inst #381 = CPSDRss
  { 382,	2,	0,	0,	2,	0|(1<<MCID::Compare), 0x3800ULL, NULL, ImplicitList1, OperandInfo74 },  // Inst #382 = CR
  { 383,	4,	0,	0,	6,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList1, OperandInfo40 },  // Inst #383 = CRJ
  { 384,	2,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x3800ULL, NULL, ImplicitList1, OperandInfo64 },  // Inst #384 = CRL
  { 385,	5,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x0ULL, NULL, ImplicitList1, OperandInfo81 },  // Inst #385 = CS
  { 386,	5,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x4ULL, NULL, ImplicitList1, OperandInfo82 },  // Inst #386 = CSG
  { 387,	5,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x4ULL, NULL, ImplicitList1, OperandInfo81 },  // Inst #387 = CSY
  { 388,	2,	0,	0,	4,	0|(1<<MCID::Compare), 0x3c00ULL, NULL, ImplicitList1, OperandInfo83 },  // Inst #388 = CXBR
  { 389,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo84 },  // Inst #389 = CXFBR
  { 390,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo85 },  // Inst #390 = CXGBR
  { 391,	4,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x388cULL, NULL, ImplicitList1, OperandInfo53 },  // Inst #391 = CY
  { 392,	0,	0,	0,	2,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator), 0x0ULL, ImplicitList4, NULL, 0 },  // Inst #392 = CallBR
  { 393,	1,	0,	0,	6,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #393 = CallJG
  { 394,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo86 },  // Inst #394 = CondStore16
  { 395,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo86 },  // Inst #395 = CondStore16Inv
  { 396,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo87 },  // Inst #396 = CondStore16_32
  { 397,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo87 },  // Inst #397 = CondStore16_32Inv
  { 398,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo86 },  // Inst #398 = CondStore32
  { 399,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo86 },  // Inst #399 = CondStore32Inv
  { 400,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo87 },  // Inst #400 = CondStore32_32
  { 401,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo87 },  // Inst #401 = CondStore32_32Inv
  { 402,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo86 },  // Inst #402 = CondStore64
  { 403,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo86 },  // Inst #403 = CondStore64Inv
  { 404,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo86 },  // Inst #404 = CondStore8
  { 405,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo86 },  // Inst #405 = CondStore8Inv
  { 406,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo87 },  // Inst #406 = CondStore8_32
  { 407,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo87 },  // Inst #407 = CondStore8_32Inv
  { 408,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo88 },  // Inst #408 = CondStoreF32
  { 409,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo88 },  // Inst #409 = CondStoreF32Inv
  { 410,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo89 },  // Inst #410 = CondStoreF64
  { 411,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo89 },  // Inst #411 = CondStoreF64Inv
  { 412,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x108ULL, NULL, NULL, OperandInfo9 },  // Inst #412 = DDB
  { 413,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #413 = DDBR
  { 414,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x88ULL, NULL, NULL, OperandInfo13 },  // Inst #414 = DEB
  { 415,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #415 = DEBR
  { 416,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8cULL, NULL, NULL, OperandInfo90 },  // Inst #416 = DL
  { 417,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x10cULL, NULL, NULL, OperandInfo90 },  // Inst #417 = DLG
  { 418,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo91 },  // Inst #418 = DLGR
  { 419,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo92 },  // Inst #419 = DLR
  { 420,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x10cULL, NULL, NULL, OperandInfo90 },  // Inst #420 = DSG
  { 421,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8cULL, NULL, NULL, OperandInfo90 },  // Inst #421 = DSGF
  { 422,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo92 },  // Inst #422 = DSGFR
  { 423,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo91 },  // Inst #423 = DSGR
  { 424,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo34 },  // Inst #424 = DXBR
  { 425,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo64 },  // Inst #425 = EAR
  { 426,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo93 },  // Inst #426 = FIDBR
  { 427,	4,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo94 },  // Inst #427 = FIDBRA
  { 428,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo95 },  // Inst #428 = FIEBR
  { 429,	4,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo96 },  // Inst #429 = FIEBRA
  { 430,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo97 },  // Inst #430 = FIXBR
  { 431,	4,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo98 },  // Inst #431 = FIXBRA
  { 432,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList1, OperandInfo15 },  // Inst #432 = FLOGR
  { 433,	5,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x28ULL, NULL, NULL, OperandInfo17 },  // Inst #433 = IC
  { 434,	5,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x28ULL, NULL, NULL, OperandInfo8 },  // Inst #434 = IC32
  { 435,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x2cULL, NULL, NULL, OperandInfo8 },  // Inst #435 = IC32Y
  { 436,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x2cULL, NULL, NULL, OperandInfo17 },  // Inst #436 = ICY
  { 437,	3,	1,	0,	6,	0, 0x0ULL, NULL, NULL, OperandInfo18 },  // Inst #437 = IIHF
  { 438,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo18 },  // Inst #438 = IIHH
  { 439,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo18 },  // Inst #439 = IIHL
  { 440,	3,	1,	0,	6,	0, 0x0ULL, NULL, NULL, OperandInfo18 },  // Inst #440 = IILF
  { 441,	2,	1,	0,	6,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo64 },  // Inst #441 = IILF32
  { 442,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo18 },  // Inst #442 = IILH
  { 443,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #443 = IILH32
  { 444,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo18 },  // Inst #444 = IILL
  { 445,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #445 = IILL32
  { 446,	1,	1,	0,	4,	0, 0x0ULL, ImplicitList1, NULL, OperandInfo99 },  // Inst #446 = IPM
  { 447,	1,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #447 = J
  { 448,	1,	0,	0,	6,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #448 = JG
  { 449,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x89ULL, NULL, NULL, OperandInfo53 },  // Inst #449 = L
  { 450,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x1dULL, NULL, NULL, OperandInfo100 },  // Inst #450 = L128
  { 451,	4,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x8ULL, NULL, NULL, OperandInfo12 },  // Inst #451 = LA
  { 452,	2,	1,	0,	6,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #452 = LARL
  { 453,	4,	1,	0,	6,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0xcULL, NULL, NULL, OperandInfo12 },  // Inst #453 = LAY
  { 454,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x2cULL, NULL, NULL, OperandInfo53 },  // Inst #454 = LB
  { 455,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo74 },  // Inst #455 = LBR
  { 456,	2,	1,	0,	4,	0, 0x3fc00ULL, NULL, ImplicitList1, OperandInfo55 },  // Inst #456 = LCDBR
  { 457,	2,	1,	0,	4,	0, 0x3fc00ULL, NULL, ImplicitList1, OperandInfo59 },  // Inst #457 = LCEBR
  { 458,	2,	1,	0,	4,	0, 0x3b800ULL, NULL, ImplicitList1, OperandInfo68 },  // Inst #458 = LCGFR
  { 459,	2,	1,	0,	4,	0, 0x23c00ULL, NULL, ImplicitList1, OperandInfo69 },  // Inst #459 = LCGR
  { 460,	2,	1,	0,	2,	0, 0x23c00ULL, NULL, ImplicitList1, OperandInfo74 },  // Inst #460 = LCR
  { 461,	2,	1,	0,	4,	0, 0x3fc00ULL, NULL, ImplicitList1, OperandInfo83 },  // Inst #461 = LCXBR
  { 462,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x109ULL, NULL, NULL, OperandInfo54 },  // Inst #462 = LD
  { 463,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x88ULL, NULL, NULL, OperandInfo54 },  // Inst #463 = LDEB
  { 464,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo101 },  // Inst #464 = LDEBR
  { 465,	2,	1,	0,	4,	0|(1<<MCID::Bitcast), 0x0ULL, NULL, NULL, OperandInfo57 },  // Inst #465 = LDGR
  { 466,	2,	1,	0,	2,	0, 0x0ULL, NULL, NULL, OperandInfo55 },  // Inst #466 = LDR
  { 467,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo83 },  // Inst #467 = LDXBR
  { 468,	4,	1,	0,	6,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10dULL, NULL, NULL, OperandInfo54 },  // Inst #468 = LDY
  { 469,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x89ULL, NULL, NULL, OperandInfo58 },  // Inst #469 = LE
  { 470,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo102 },  // Inst #470 = LEDBR
  { 471,	2,	1,	0,	2,	0, 0x0ULL, NULL, NULL, OperandInfo59 },  // Inst #471 = LER
  { 472,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo83 },  // Inst #472 = LEXBR
  { 473,	4,	1,	0,	6,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x8dULL, NULL, NULL, OperandInfo58 },  // Inst #473 = LEY
  { 474,	4,	1,	0,	6,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10dULL, NULL, NULL, OperandInfo12 },  // Inst #474 = LG
  { 475,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x2cULL, NULL, NULL, OperandInfo12 },  // Inst #475 = LGB
  { 476,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo69 },  // Inst #476 = LGBR
  { 477,	2,	1,	0,	4,	0|(1<<MCID::Bitcast), 0x0ULL, NULL, NULL, OperandInfo103 },  // Inst #477 = LGDR
  { 478,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8cULL, NULL, NULL, OperandInfo12 },  // Inst #478 = LGF
  { 479,	2,	1,	0,	6,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #479 = LGFI
  { 480,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo68 },  // Inst #480 = LGFR
  { 481,	2,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #481 = LGFRL
  { 482,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x4cULL, NULL, NULL, OperandInfo12 },  // Inst #482 = LGH
  { 483,	2,	1,	0,	4,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #483 = LGHI
  { 484,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo69 },  // Inst #484 = LGHR
  { 485,	2,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #485 = LGHRL
  { 486,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo69 },  // Inst #486 = LGR
  { 487,	2,	1,	0,	6,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #487 = LGRL
  { 488,	4,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x48ULL, NULL, NULL, OperandInfo53 },  // Inst #488 = LH
  { 489,	2,	1,	0,	4,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo64 },  // Inst #489 = LHI
  { 490,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo74 },  // Inst #490 = LHR
  { 491,	2,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo64 },  // Inst #491 = LHRL
  { 492,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x4cULL, NULL, NULL, OperandInfo53 },  // Inst #492 = LHY
  { 493,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x2cULL, NULL, NULL, OperandInfo53 },  // Inst #493 = LLC
  { 494,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo74 },  // Inst #494 = LLCR
  { 495,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x2cULL, NULL, NULL, OperandInfo12 },  // Inst #495 = LLGC
  { 496,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo69 },  // Inst #496 = LLGCR
  { 497,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8cULL, NULL, NULL, OperandInfo12 },  // Inst #497 = LLGF
  { 498,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo68 },  // Inst #498 = LLGFR
  { 499,	2,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #499 = LLGFRL
  { 500,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x4cULL, NULL, NULL, OperandInfo12 },  // Inst #500 = LLGH
  { 501,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo69 },  // Inst #501 = LLGHR
  { 502,	2,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #502 = LLGHRL
  { 503,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x4cULL, NULL, NULL, OperandInfo53 },  // Inst #503 = LLH
  { 504,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo74 },  // Inst #504 = LLHR
  { 505,	2,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo64 },  // Inst #505 = LLHRL
  { 506,	2,	1,	0,	6,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #506 = LLIHF
  { 507,	2,	1,	0,	4,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #507 = LLIHH
  { 508,	2,	1,	0,	4,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #508 = LLIHL
  { 509,	2,	1,	0,	6,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #509 = LLILF
  { 510,	2,	1,	0,	4,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #510 = LLILH
  { 511,	2,	1,	0,	4,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #511 = LLILL
  { 512,	4,	2,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo104 },  // Inst #512 = LMG
  { 513,	2,	1,	0,	4,	0, 0x3fc00ULL, NULL, ImplicitList1, OperandInfo55 },  // Inst #513 = LNDBR
  { 514,	2,	1,	0,	4,	0, 0x3fc00ULL, NULL, ImplicitList1, OperandInfo59 },  // Inst #514 = LNEBR
  { 515,	2,	1,	0,	4,	0, 0x3b800ULL, NULL, ImplicitList1, OperandInfo68 },  // Inst #515 = LNGFR
  { 516,	2,	1,	0,	4,	0, 0x23c00ULL, NULL, ImplicitList1, OperandInfo69 },  // Inst #516 = LNGR
  { 517,	2,	1,	0,	2,	0, 0x23c00ULL, NULL, ImplicitList1, OperandInfo74 },  // Inst #517 = LNR
  { 518,	2,	1,	0,	4,	0, 0x3fc00ULL, NULL, ImplicitList1, OperandInfo83 },  // Inst #518 = LNXBR
  { 519,	6,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x80084ULL, ImplicitList1, NULL, OperandInfo105 },  // Inst #519 = LOC
  { 520,	6,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x80104ULL, ImplicitList1, NULL, OperandInfo106 },  // Inst #520 = LOCG
  { 521,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x80000ULL, ImplicitList1, NULL, OperandInfo38 },  // Inst #521 = LOCGR
  { 522,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x80000ULL, ImplicitList1, NULL, OperandInfo40 },  // Inst #522 = LOCR
  { 523,	2,	1,	0,	4,	0, 0x3fc00ULL, NULL, ImplicitList1, OperandInfo55 },  // Inst #523 = LPDBR
  { 524,	2,	1,	0,	4,	0, 0x3fc00ULL, NULL, ImplicitList1, OperandInfo59 },  // Inst #524 = LPEBR
  { 525,	2,	1,	0,	4,	0, 0x3b800ULL, NULL, ImplicitList1, OperandInfo68 },  // Inst #525 = LPGFR
  { 526,	2,	1,	0,	4,	0, 0x23c00ULL, NULL, ImplicitList1, OperandInfo69 },  // Inst #526 = LPGR
  { 527,	2,	1,	0,	2,	0, 0x23c00ULL, NULL, ImplicitList1, OperandInfo74 },  // Inst #527 = LPR
  { 528,	2,	1,	0,	4,	0, 0x3fc00ULL, NULL, ImplicitList1, OperandInfo83 },  // Inst #528 = LPXBR
  { 529,	2,	1,	0,	2,	0, 0x0ULL, NULL, NULL, OperandInfo74 },  // Inst #529 = LR
  { 530,	2,	1,	0,	6,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo64 },  // Inst #530 = LRL
  { 531,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8cULL, NULL, NULL, OperandInfo53 },  // Inst #531 = LRV
  { 532,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x10cULL, NULL, NULL, OperandInfo12 },  // Inst #532 = LRVG
  { 533,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo69 },  // Inst #533 = LRVGR
  { 534,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo74 },  // Inst #534 = LRVR
  { 535,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x3b88cULL, NULL, ImplicitList1, OperandInfo53 },  // Inst #535 = LT
  { 536,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x3fc00ULL, NULL, ImplicitList1, OperandInfo55 },  // Inst #536 = LTDBR
  { 537,	2,	0,	0,	4,	0|(1<<MCID::Compare), 0x3fc00ULL, NULL, ImplicitList1, OperandInfo55 },  // Inst #537 = LTDBRCompare
  { 538,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x3fc00ULL, NULL, ImplicitList1, OperandInfo59 },  // Inst #538 = LTEBR
  { 539,	2,	0,	0,	4,	0|(1<<MCID::Compare), 0x3fc00ULL, NULL, ImplicitList1, OperandInfo59 },  // Inst #539 = LTEBRCompare
  { 540,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x3b90cULL, NULL, ImplicitList1, OperandInfo12 },  // Inst #540 = LTG
  { 541,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x3b88cULL, NULL, ImplicitList1, OperandInfo12 },  // Inst #541 = LTGF
  { 542,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x3b800ULL, NULL, ImplicitList1, OperandInfo69 },  // Inst #542 = LTGFR
  { 543,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x3b800ULL, NULL, ImplicitList1, OperandInfo69 },  // Inst #543 = LTGR
  { 544,	2,	1,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x3b800ULL, NULL, ImplicitList1, OperandInfo74 },  // Inst #544 = LTR
  { 545,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x3fc00ULL, NULL, ImplicitList1, OperandInfo83 },  // Inst #545 = LTXBR
  { 546,	2,	0,	0,	4,	0|(1<<MCID::Compare), 0x3fc00ULL, NULL, ImplicitList1, OperandInfo83 },  // Inst #546 = LTXBRCompare
  { 547,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x1dULL, NULL, NULL, OperandInfo107 },  // Inst #547 = LX
  { 548,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x108ULL, NULL, NULL, OperandInfo107 },  // Inst #548 = LXDB
  { 549,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo108 },  // Inst #549 = LXDBR
  { 550,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x88ULL, NULL, NULL, OperandInfo107 },  // Inst #550 = LXEB
  { 551,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo109 },  // Inst #551 = LXEBR
  { 552,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo83 },  // Inst #552 = LXR
  { 553,	4,	1,	0,	6,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x8dULL, NULL, NULL, OperandInfo53 },  // Inst #553 = LY
  { 554,	1,	1,	0,	4,	0|(1<<MCID::MoveImm)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo110 },  // Inst #554 = LZDR
  { 555,	1,	1,	0,	4,	0|(1<<MCID::MoveImm)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo111 },  // Inst #555 = LZER
  { 556,	1,	1,	0,	4,	0|(1<<MCID::MoveImm)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo112 },  // Inst #556 = LZXR
  { 557,	6,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x108ULL, NULL, NULL, OperandInfo113 },  // Inst #557 = MADB
  { 558,	4,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo114 },  // Inst #558 = MADBR
  { 559,	6,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x88ULL, NULL, NULL, OperandInfo115 },  // Inst #559 = MAEB
  { 560,	4,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo116 },  // Inst #560 = MAEBR
  { 561,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x108ULL, NULL, NULL, OperandInfo9 },  // Inst #561 = MDB
  { 562,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #562 = MDBR
  { 563,	5,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x88ULL, NULL, NULL, OperandInfo9 },  // Inst #563 = MDEB
  { 564,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo117 },  // Inst #564 = MDEBR
  { 565,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x88ULL, NULL, NULL, OperandInfo13 },  // Inst #565 = MEEB
  { 566,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #566 = MEEBR
  { 567,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo18 },  // Inst #567 = MGHI
  { 568,	5,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x48ULL, NULL, NULL, OperandInfo8 },  // Inst #568 = MH
  { 569,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #569 = MHI
  { 570,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x4cULL, NULL, NULL, OperandInfo8 },  // Inst #570 = MHY
  { 571,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x10cULL, NULL, NULL, OperandInfo90 },  // Inst #571 = MLG
  { 572,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo91 },  // Inst #572 = MLGR
  { 573,	5,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x88ULL, NULL, NULL, OperandInfo8 },  // Inst #573 = MS
  { 574,	6,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x108ULL, NULL, NULL, OperandInfo113 },  // Inst #574 = MSDB
  { 575,	4,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo114 },  // Inst #575 = MSDBR
  { 576,	6,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x88ULL, NULL, NULL, OperandInfo115 },  // Inst #576 = MSEB
  { 577,	4,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo116 },  // Inst #577 = MSEBR
  { 578,	3,	1,	0,	6,	0, 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #578 = MSFI
  { 579,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x10cULL, NULL, NULL, OperandInfo17 },  // Inst #579 = MSG
  { 580,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8cULL, NULL, NULL, OperandInfo17 },  // Inst #580 = MSGF
  { 581,	3,	1,	0,	6,	0, 0x0ULL, NULL, NULL, OperandInfo18 },  // Inst #581 = MSGFI
  { 582,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo19 },  // Inst #582 = MSGFR
  { 583,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #583 = MSGR
  { 584,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x0ULL, NULL, NULL, OperandInfo25 },  // Inst #584 = MSR
  { 585,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8cULL, NULL, NULL, OperandInfo8 },  // Inst #585 = MSY
  { 586,	5,	0,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo71 },  // Inst #586 = MVC
  { 587,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo72 },  // Inst #587 = MVCLoop
  { 588,	5,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo73 },  // Inst #588 = MVCSequence
  { 589,	3,	0,	0,	6,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo23 },  // Inst #589 = MVGHI
  { 590,	3,	0,	0,	6,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo23 },  // Inst #590 = MVHHI
  { 591,	3,	0,	0,	6,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo23 },  // Inst #591 = MVHI
  { 592,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo23 },  // Inst #592 = MVI
  { 593,	3,	0,	0,	6,	0|(1<<MCID::MayStore), 0x4ULL, NULL, NULL, OperandInfo23 },  // Inst #593 = MVIY
  { 594,	4,	2,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList1, OperandInfo75 },  // Inst #594 = MVST
  { 595,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList3, ImplicitList1, OperandInfo76 },  // Inst #595 = MVSTLoop
  { 596,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x0ULL, NULL, NULL, OperandInfo34 },  // Inst #596 = MXBR
  { 597,	5,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x108ULL, NULL, NULL, OperandInfo118 },  // Inst #597 = MXDB
  { 598,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo119 },  // Inst #598 = MXDBR
  { 599,	5,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x23088ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #599 = N
  { 600,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x2310cULL, NULL, ImplicitList1, OperandInfo17 },  // Inst #600 = NG
  { 601,	3,	1,	0,	4,	0|(1<<MCID::ConvertibleTo3Addr)|(1<<MCID::Commutable), 0x23000ULL, NULL, ImplicitList1, OperandInfo21 },  // Inst #601 = NGR
  { 602,	3,	1,	0,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x23000ULL, NULL, ImplicitList1, OperandInfo22 },  // Inst #602 = NGRK
  { 603,	3,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x0ULL, NULL, ImplicitList1, OperandInfo23 },  // Inst #603 = NI
  { 604,	3,	1,	0,	6,	0|(1<<MCID::ConvertibleTo3Addr), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #604 = NIHF
  { 605,	3,	1,	0,	4,	0|(1<<MCID::ConvertibleTo3Addr), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #605 = NIHH
  { 606,	3,	1,	0,	4,	0|(1<<MCID::ConvertibleTo3Addr), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #606 = NIHL
  { 607,	3,	1,	0,	6,	0|(1<<MCID::ConvertibleTo3Addr), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #607 = NILF
  { 608,	3,	1,	0,	6,	0|(1<<MCID::ConvertibleTo3Addr), 0x23000ULL, NULL, ImplicitList1, OperandInfo16 },  // Inst #608 = NILF32
  { 609,	3,	1,	0,	4,	0|(1<<MCID::ConvertibleTo3Addr), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #609 = NILH
  { 610,	3,	1,	0,	4,	0|(1<<MCID::ConvertibleTo3Addr), 0x0ULL, NULL, ImplicitList1, OperandInfo16 },  // Inst #610 = NILH32
  { 611,	3,	1,	0,	4,	0|(1<<MCID::ConvertibleTo3Addr), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #611 = NILL
  { 612,	3,	1,	0,	4,	0|(1<<MCID::ConvertibleTo3Addr), 0x0ULL, NULL, ImplicitList1, OperandInfo16 },  // Inst #612 = NILL32
  { 613,	3,	0,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x4ULL, NULL, ImplicitList1, OperandInfo23 },  // Inst #613 = NIY
  { 614,	3,	1,	0,	2,	0|(1<<MCID::ConvertibleTo3Addr)|(1<<MCID::Commutable), 0x23000ULL, NULL, ImplicitList1, OperandInfo25 },  // Inst #614 = NR
  { 615,	3,	1,	0,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x23000ULL, NULL, ImplicitList1, OperandInfo26 },  // Inst #615 = NRK
  { 616,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x2308cULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #616 = NY
  { 617,	5,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x23088ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #617 = O
  { 618,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x2310cULL, NULL, ImplicitList1, OperandInfo17 },  // Inst #618 = OG
  { 619,	3,	1,	0,	4,	0|(1<<MCID::ConvertibleTo3Addr)|(1<<MCID::Commutable), 0x23000ULL, NULL, ImplicitList1, OperandInfo21 },  // Inst #619 = OGR
  { 620,	3,	1,	0,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x23000ULL, NULL, ImplicitList1, OperandInfo22 },  // Inst #620 = OGRK
  { 621,	3,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x0ULL, NULL, ImplicitList1, OperandInfo23 },  // Inst #621 = OI
  { 622,	3,	1,	0,	6,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #622 = OIHF
  { 623,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #623 = OIHH
  { 624,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #624 = OIHL
  { 625,	3,	1,	0,	6,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #625 = OILF
  { 626,	3,	1,	0,	6,	0, 0x23000ULL, NULL, ImplicitList1, OperandInfo16 },  // Inst #626 = OILF32
  { 627,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #627 = OILH
  { 628,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo16 },  // Inst #628 = OILH32
  { 629,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #629 = OILL
  { 630,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo16 },  // Inst #630 = OILL32
  { 631,	3,	0,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x4ULL, NULL, ImplicitList1, OperandInfo23 },  // Inst #631 = OIY
  { 632,	3,	1,	0,	2,	0|(1<<MCID::ConvertibleTo3Addr)|(1<<MCID::Commutable), 0x23000ULL, NULL, ImplicitList1, OperandInfo25 },  // Inst #632 = OR
  { 633,	3,	1,	0,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x23000ULL, NULL, ImplicitList1, OperandInfo26 },  // Inst #633 = ORK
  { 634,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x2308cULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #634 = OY
  { 635,	4,	0,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0xcULL, NULL, NULL, OperandInfo120 },  // Inst #635 = PFD
  { 636,	2,	0,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo7 },  // Inst #636 = PFDRL
  { 637,	0,	0,	0,	2,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, NULL, NULL, 0 },  // Inst #637 = RET
  { 638,	6,	1,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x3b800ULL, NULL, ImplicitList1, OperandInfo121 },  // Inst #638 = RISBG
  { 639,	6,	1,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList1, OperandInfo122 },  // Inst #639 = RISBG32
  { 640,	6,	1,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo121 },  // Inst #640 = RISBHG
  { 641,	6,	1,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo121 },  // Inst #641 = RISBLG
  { 642,	6,	1,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo122 },  // Inst #642 = RISBLG32
  { 643,	4,	1,	0,	6,	0, 0x4ULL, NULL, NULL, OperandInfo123 },  // Inst #643 = RLL
  { 644,	4,	1,	0,	6,	0, 0x4ULL, NULL, NULL, OperandInfo124 },  // Inst #644 = RLLG
  { 645,	6,	1,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList1, OperandInfo121 },  // Inst #645 = RNSBG
  { 646,	6,	1,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList1, OperandInfo121 },  // Inst #646 = ROSBG
  { 647,	6,	1,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList1, OperandInfo121 },  // Inst #647 = RXSBG
  { 648,	5,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x23c88ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #648 = S
  { 649,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x3fd08ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #649 = SDB
  { 650,	3,	1,	0,	4,	0, 0x3fc00ULL, NULL, ImplicitList1, OperandInfo10 },  // Inst #650 = SDBR
  { 651,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x3fc88ULL, NULL, ImplicitList1, OperandInfo13 },  // Inst #651 = SEB
  { 652,	3,	1,	0,	4,	0, 0x3fc00ULL, NULL, ImplicitList1, OperandInfo14 },  // Inst #652 = SEBR
  { 653,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x23d0cULL, NULL, ImplicitList1, OperandInfo17 },  // Inst #653 = SG
  { 654,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x23c8cULL, NULL, ImplicitList1, OperandInfo17 },  // Inst #654 = SGF
  { 655,	3,	1,	0,	4,	0, 0x23c00ULL, NULL, ImplicitList1, OperandInfo19 },  // Inst #655 = SGFR
  { 656,	3,	1,	0,	4,	0|(1<<MCID::ConvertibleTo3Addr), 0x23c00ULL, NULL, ImplicitList1, OperandInfo21 },  // Inst #656 = SGR
  { 657,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x23c00ULL, NULL, ImplicitList1, OperandInfo22 },  // Inst #657 = SGRK
  { 658,	5,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x23c48ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #658 = SH
  { 659,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x23c4cULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #659 = SHY
  { 660,	5,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x88ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #660 = SL
  { 661,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8cULL, ImplicitList1, ImplicitList1, OperandInfo8 },  // Inst #661 = SLB
  { 662,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x10cULL, ImplicitList1, ImplicitList1, OperandInfo17 },  // Inst #662 = SLBG
  { 663,	3,	1,	0,	4,	0, 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo25 },  // Inst #663 = SLBR
  { 664,	3,	1,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList1, OperandInfo16 },  // Inst #664 = SLFI
  { 665,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x10cULL, NULL, ImplicitList1, OperandInfo17 },  // Inst #665 = SLG
  { 666,	3,	1,	0,	4,	0, 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo21 },  // Inst #666 = SLGBR
  { 667,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8cULL, NULL, ImplicitList1, OperandInfo17 },  // Inst #667 = SLGF
  { 668,	3,	1,	0,	6,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #668 = SLGFI
  { 669,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo19 },  // Inst #669 = SLGFR
  { 670,	3,	1,	0,	4,	0|(1<<MCID::ConvertibleTo3Addr), 0x0ULL, NULL, ImplicitList1, OperandInfo21 },  // Inst #670 = SLGR
  { 671,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList1, OperandInfo22 },  // Inst #671 = SLGRK
  { 672,	4,	1,	0,	4,	0|(1<<MCID::ConvertibleTo3Addr), 0x0ULL, NULL, NULL, OperandInfo125 },  // Inst #672 = SLL
  { 673,	4,	1,	0,	6,	0, 0x4ULL, NULL, NULL, OperandInfo124 },  // Inst #673 = SLLG
  { 674,	4,	1,	0,	6,	0, 0x4ULL, NULL, NULL, OperandInfo123 },  // Inst #674 = SLLK
  { 675,	3,	1,	0,	2,	0|(1<<MCID::ConvertibleTo3Addr), 0x0ULL, NULL, ImplicitList1, OperandInfo25 },  // Inst #675 = SLR
  { 676,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList1, OperandInfo26 },  // Inst #676 = SLRK
  { 677,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8cULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #677 = SLY
  { 678,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x108ULL, NULL, NULL, OperandInfo54 },  // Inst #678 = SQDB
  { 679,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo55 },  // Inst #679 = SQDBR
  { 680,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x88ULL, NULL, NULL, OperandInfo58 },  // Inst #680 = SQEB
  { 681,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo59 },  // Inst #681 = SQEBR
  { 682,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo83 },  // Inst #682 = SQXBR
  { 683,	3,	1,	0,	2,	0|(1<<MCID::ConvertibleTo3Addr), 0x23c00ULL, NULL, ImplicitList1, OperandInfo25 },  // Inst #683 = SR
  { 684,	4,	1,	0,	4,	0|(1<<MCID::ConvertibleTo3Addr), 0x3b800ULL, NULL, ImplicitList1, OperandInfo125 },  // Inst #684 = SRA
  { 685,	4,	1,	0,	6,	0, 0x3b804ULL, NULL, ImplicitList1, OperandInfo124 },  // Inst #685 = SRAG
  { 686,	4,	1,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x3b804ULL, NULL, ImplicitList1, OperandInfo123 },  // Inst #686 = SRAK
  { 687,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x23c00ULL, NULL, ImplicitList1, OperandInfo26 },  // Inst #687 = SRK
  { 688,	4,	1,	0,	4,	0|(1<<MCID::ConvertibleTo3Addr), 0x0ULL, NULL, NULL, OperandInfo125 },  // Inst #688 = SRL
  { 689,	4,	1,	0,	6,	0, 0x4ULL, NULL, NULL, OperandInfo124 },  // Inst #689 = SRLG
  { 690,	4,	1,	0,	6,	0, 0x4ULL, NULL, NULL, OperandInfo123 },  // Inst #690 = SRLK
  { 691,	4,	2,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList1, OperandInfo75 },  // Inst #691 = SRST
  { 692,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList3, ImplicitList1, OperandInfo76 },  // Inst #692 = SRSTLoop
  { 693,	4,	0,	0,	4,	0|(1<<MCID::MayStore), 0x88ULL, NULL, NULL, OperandInfo12 },  // Inst #693 = ST
  { 694,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore), 0x1eULL, NULL, NULL, OperandInfo100 },  // Inst #694 = ST128
  { 695,	4,	0,	0,	4,	0|(1<<MCID::MayStore), 0x8aULL, NULL, NULL, OperandInfo53 },  // Inst #695 = ST32
  { 696,	4,	0,	0,	6,	0|(1<<MCID::MayStore), 0x8eULL, NULL, NULL, OperandInfo53 },  // Inst #696 = ST32Y
  { 697,	4,	0,	0,	4,	0|(1<<MCID::MayStore), 0x28ULL, NULL, NULL, OperandInfo12 },  // Inst #697 = STC
  { 698,	4,	0,	0,	4,	0|(1<<MCID::MayStore), 0x28ULL, NULL, NULL, OperandInfo53 },  // Inst #698 = STC32
  { 699,	4,	0,	0,	6,	0|(1<<MCID::MayStore), 0x2cULL, NULL, NULL, OperandInfo53 },  // Inst #699 = STC32Y
  { 700,	4,	0,	0,	6,	0|(1<<MCID::MayStore), 0x2cULL, NULL, NULL, OperandInfo12 },  // Inst #700 = STCY
  { 701,	4,	0,	0,	4,	0|(1<<MCID::MayStore), 0x10aULL, NULL, NULL, OperandInfo54 },  // Inst #701 = STD
  { 702,	4,	0,	0,	6,	0|(1<<MCID::MayStore), 0x10eULL, NULL, NULL, OperandInfo54 },  // Inst #702 = STDY
  { 703,	4,	0,	0,	4,	0|(1<<MCID::MayStore), 0x8aULL, NULL, NULL, OperandInfo58 },  // Inst #703 = STE
  { 704,	4,	0,	0,	6,	0|(1<<MCID::MayStore), 0x8eULL, NULL, NULL, OperandInfo58 },  // Inst #704 = STEY
  { 705,	4,	0,	0,	6,	0|(1<<MCID::MayStore), 0x10eULL, NULL, NULL, OperandInfo12 },  // Inst #705 = STG
  { 706,	2,	0,	0,	6,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #706 = STGRL
  { 707,	4,	0,	0,	4,	0|(1<<MCID::MayStore), 0x48ULL, NULL, NULL, OperandInfo12 },  // Inst #707 = STH
  { 708,	4,	0,	0,	4,	0|(1<<MCID::MayStore), 0x48ULL, NULL, NULL, OperandInfo53 },  // Inst #708 = STH32
  { 709,	4,	0,	0,	6,	0|(1<<MCID::MayStore), 0x4cULL, NULL, NULL, OperandInfo53 },  // Inst #709 = STH32Y
  { 710,	2,	0,	0,	6,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #710 = STHRL
  { 711,	2,	0,	0,	6,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo64 },  // Inst #711 = STHRL32
  { 712,	4,	0,	0,	6,	0|(1<<MCID::MayStore), 0x4cULL, NULL, NULL, OperandInfo12 },  // Inst #712 = STHY
  { 713,	4,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo104 },  // Inst #713 = STMG
  { 714,	5,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x80084ULL, ImplicitList1, NULL, OperandInfo126 },  // Inst #714 = STOC
  { 715,	5,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x80084ULL, ImplicitList1, NULL, OperandInfo127 },  // Inst #715 = STOC32
  { 716,	5,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x80104ULL, ImplicitList1, NULL, OperandInfo126 },  // Inst #716 = STOCG
  { 717,	2,	0,	0,	6,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #717 = STRL
  { 718,	2,	0,	0,	6,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo64 },  // Inst #718 = STRL32
  { 719,	4,	0,	0,	6,	0|(1<<MCID::MayStore), 0x8cULL, NULL, NULL, OperandInfo53 },  // Inst #719 = STRV
  { 720,	4,	0,	0,	6,	0|(1<<MCID::MayStore), 0x10cULL, NULL, NULL, OperandInfo12 },  // Inst #720 = STRVG
  { 721,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore), 0x1eULL, NULL, NULL, OperandInfo107 },  // Inst #721 = STX
  { 722,	4,	0,	0,	6,	0|(1<<MCID::MayStore), 0x8cULL, NULL, NULL, OperandInfo12 },  // Inst #722 = STY
  { 723,	3,	1,	0,	4,	0, 0x3fc00ULL, NULL, ImplicitList1, OperandInfo34 },  // Inst #723 = SXBR
  { 724,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x23c8cULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #724 = SY
  { 725,	5,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo128 },  // Inst #725 = Select32
  { 726,	5,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo129 },  // Inst #726 = Select64
  { 727,	5,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo130 },  // Inst #727 = SelectF128
  { 728,	5,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo131 },  // Inst #728 = SelectF32
  { 729,	5,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo132 },  // Inst #729 = SelectF64
  { 730,	2,	0,	0,	4,	0|(1<<MCID::Compare), 0x0ULL, NULL, ImplicitList1, OperandInfo36 },  // Inst #730 = TMHH
  { 731,	2,	0,	0,	4,	0|(1<<MCID::Compare), 0x0ULL, NULL, ImplicitList1, OperandInfo36 },  // Inst #731 = TMHL
  { 732,	2,	0,	0,	4,	0|(1<<MCID::Compare), 0x0ULL, NULL, ImplicitList1, OperandInfo36 },  // Inst #732 = TMLH
  { 733,	2,	0,	0,	4,	0|(1<<MCID::Compare), 0x0ULL, NULL, ImplicitList1, OperandInfo64 },  // Inst #733 = TMLH32
  { 734,	2,	0,	0,	4,	0|(1<<MCID::Compare), 0x0ULL, NULL, ImplicitList1, OperandInfo36 },  // Inst #734 = TMLL
  { 735,	2,	0,	0,	4,	0|(1<<MCID::Compare), 0x0ULL, NULL, ImplicitList1, OperandInfo64 },  // Inst #735 = TMLL32
  { 736,	5,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x23088ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #736 = X
  { 737,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x2310cULL, NULL, ImplicitList1, OperandInfo17 },  // Inst #737 = XG
  { 738,	3,	1,	0,	4,	0|(1<<MCID::ConvertibleTo3Addr)|(1<<MCID::Commutable), 0x23000ULL, NULL, ImplicitList1, OperandInfo21 },  // Inst #738 = XGR
  { 739,	3,	1,	0,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x23000ULL, NULL, ImplicitList1, OperandInfo22 },  // Inst #739 = XGRK
  { 740,	3,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x0ULL, NULL, ImplicitList1, OperandInfo23 },  // Inst #740 = XI
  { 741,	3,	1,	0,	6,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #741 = XIHF
  { 742,	3,	1,	0,	6,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #742 = XILF
  { 743,	3,	1,	0,	6,	0, 0x23000ULL, NULL, ImplicitList1, OperandInfo16 },  // Inst #743 = XILF32
  { 744,	3,	0,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x4ULL, NULL, ImplicitList1, OperandInfo23 },  // Inst #744 = XIY
  { 745,	3,	1,	0,	2,	0|(1<<MCID::ConvertibleTo3Addr)|(1<<MCID::Commutable), 0x23000ULL, NULL, ImplicitList1, OperandInfo25 },  // Inst #745 = XR
  { 746,	3,	1,	0,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x23000ULL, NULL, ImplicitList1, OperandInfo26 },  // Inst #746 = XRK
  { 747,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x2308cULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #747 = XY
  { 748,	2,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo133 },  // Inst #748 = ZEXT128_32
  { 749,	2,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo15 },  // Inst #749 = ZEXT128_64
};

extern const char SystemZInstrNameData[] = {
  /* 0 */ 'I', 'C', '3', '2', 0,
  /* 5 */ 'S', 'T', 'O', 'C', '3', '2', 0,
  /* 12 */ 'S', 'T', 'C', '3', '2', 0,
  /* 18 */ 'I', 'I', 'L', 'F', '3', '2', 0,
  /* 25 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'L', 'F', '3', '2', 0,
  /* 44 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'I', 'L', 'F', '3', '2', 0,
  /* 63 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'I', 'L', 'F', '3', '2', 0,
  /* 82 */ 'C', 'o', 'n', 'd', 'S', 't', 'o', 'r', 'e', 'F', '3', '2', 0,
  /* 95 */ 'S', 'e', 'l', 'e', 'c', 't', 'F', '3', '2', 0,
  /* 105 */ 'R', 'I', 'S', 'B', 'G', '3', '2', 0,
  /* 113 */ 'R', 'I', 'S', 'B', 'L', 'G', '3', '2', 0,
  /* 122 */ 'I', 'I', 'L', 'H', '3', '2', 0,
  /* 129 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'L', 'H', '3', '2', 0,
  /* 148 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'I', 'L', 'H', '3', '2', 0,
  /* 167 */ 'T', 'M', 'L', 'H', '3', '2', 0,
  /* 174 */ 'S', 'T', 'H', '3', '2', 0,
  /* 180 */ 'I', 'I', 'L', 'L', '3', '2', 0,
  /* 187 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'L', 'L', '3', '2', 0,
  /* 206 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'I', 'L', 'L', '3', '2', 0,
  /* 225 */ 'T', 'M', 'L', 'L', '3', '2', 0,
  /* 232 */ 'S', 'T', 'H', 'R', 'L', '3', '2', 0,
  /* 240 */ 'S', 'T', 'R', 'L', '3', '2', 0,
  /* 247 */ 'S', 'T', '3', '2', 0,
  /* 252 */ 'C', 'o', 'n', 'd', 'S', 't', 'o', 'r', 'e', '3', '2', '_', '3', '2', 0,
  /* 267 */ 'C', 'o', 'n', 'd', 'S', 't', 'o', 'r', 'e', '1', '6', '_', '3', '2', 0,
  /* 282 */ 'Z', 'E', 'X', 'T', '1', '2', '8', '_', '3', '2', 0,
  /* 293 */ 'C', 'o', 'n', 'd', 'S', 't', 'o', 'r', 'e', '8', '_', '3', '2', 0,
  /* 307 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'U', 'M', 'I', 'N', '_', '3', '2', 0,
  /* 327 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'M', 'I', 'N', '_', '3', '2', 0,
  /* 346 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', '3', '2', 0,
  /* 361 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'U', 'M', 'A', 'X', '_', '3', '2', 0,
  /* 381 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'M', 'A', 'X', '_', '3', '2', 0,
  /* 400 */ 'C', 'o', 'n', 'd', 'S', 't', 'o', 'r', 'e', '3', '2', 0,
  /* 412 */ 'S', 'e', 'l', 'e', 'c', 't', '3', '2', 0,
  /* 421 */ 'C', 'o', 'n', 'd', 'S', 't', 'o', 'r', 'e', 'F', '6', '4', 0,
  /* 434 */ 'S', 'e', 'l', 'e', 'c', 't', 'F', '6', '4', 0,
  /* 444 */ 'A', 'E', 'X', 'T', '1', '2', '8', '_', '6', '4', 0,
  /* 455 */ 'Z', 'E', 'X', 'T', '1', '2', '8', '_', '6', '4', 0,
  /* 466 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'U', 'M', 'I', 'N', '_', '6', '4', 0,
  /* 486 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'M', 'I', 'N', '_', '6', '4', 0,
  /* 505 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', '6', '4', 0,
  /* 520 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'U', 'M', 'A', 'X', '_', '6', '4', 0,
  /* 540 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'M', 'A', 'X', '_', '6', '4', 0,
  /* 559 */ 'C', 'o', 'n', 'd', 'S', 't', 'o', 'r', 'e', '6', '4', 0,
  /* 571 */ 'S', 'e', 'l', 'e', 'c', 't', '6', '4', 0,
  /* 580 */ 'C', 'o', 'n', 'd', 'S', 't', 'o', 'r', 'e', '1', '6', 0,
  /* 592 */ 'S', 'e', 'l', 'e', 'c', 't', 'F', '1', '2', '8', 0,
  /* 603 */ 'L', '1', '2', '8', 0,
  /* 608 */ 'S', 'T', '1', '2', '8', 0,
  /* 614 */ 'C', 'o', 'n', 'd', 'S', 't', 'o', 'r', 'e', '8', 0,
  /* 625 */ 'L', 'A', 0,
  /* 628 */ 'F', 'I', 'D', 'B', 'R', 'A', 0,
  /* 635 */ 'F', 'I', 'E', 'B', 'R', 'A', 0,
  /* 642 */ 'F', 'I', 'X', 'B', 'R', 'A', 0,
  /* 649 */ 'S', 'R', 'A', 0,
  /* 653 */ 'M', 'A', 'D', 'B', 0,
  /* 658 */ 'C', 'D', 'B', 0,
  /* 662 */ 'D', 'D', 'B', 0,
  /* 666 */ 'M', 'D', 'B', 0,
  /* 670 */ 'S', 'Q', 'D', 'B', 0,
  /* 675 */ 'M', 'S', 'D', 'B', 0,
  /* 680 */ 'L', 'X', 'D', 'B', 0,
  /* 685 */ 'M', 'X', 'D', 'B', 0,
  /* 690 */ 'M', 'A', 'E', 'B', 0,
  /* 695 */ 'C', 'E', 'B', 0,
  /* 699 */ 'L', 'D', 'E', 'B', 0,
  /* 704 */ 'M', 'D', 'E', 'B', 0,
  /* 709 */ 'M', 'E', 'E', 'B', 0,
  /* 714 */ 'S', 'Q', 'E', 'B', 0,
  /* 719 */ 'M', 'S', 'E', 'B', 0,
  /* 724 */ 'L', 'X', 'E', 'B', 0,
  /* 729 */ 'L', 'G', 'B', 0,
  /* 733 */ 'S', 'L', 'B', 0,
  /* 737 */ 'L', 'L', 'G', 'C', 0,
  /* 742 */ 'I', 'C', 0,
  /* 745 */ 'A', 'L', 'C', 0,
  /* 749 */ 'C', 'L', 'C', 0,
  /* 753 */ 'L', 'L', 'C', 0,
  /* 757 */ 'A', 's', 'm', 'N', 'H', 'E', 'L', 'O', 'C', 0,
  /* 767 */ 'A', 's', 'm', 'H', 'E', 'L', 'O', 'C', 0,
  /* 776 */ 'A', 's', 'm', 'N', 'L', 'E', 'L', 'O', 'C', 0,
  /* 786 */ 'A', 's', 'm', 'L', 'E', 'L', 'O', 'C', 0,
  /* 795 */ 'A', 's', 'm', 'N', 'E', 'L', 'O', 'C', 0,
  /* 804 */ 'A', 's', 'm', 'E', 'L', 'O', 'C', 0,
  /* 812 */ 'A', 's', 'm', 'N', 'L', 'H', 'L', 'O', 'C', 0,
  /* 822 */ 'A', 's', 'm', 'L', 'H', 'L', 'O', 'C', 0,
  /* 831 */ 'A', 's', 'm', 'N', 'H', 'L', 'O', 'C', 0,
  /* 840 */ 'A', 's', 'm', 'H', 'L', 'O', 'C', 0,
  /* 848 */ 'A', 'D', 'J', 'D', 'Y', 'N', 'A', 'L', 'L', 'O', 'C', 0,
  /* 860 */ 'A', 's', 'm', 'N', 'L', 'L', 'O', 'C', 0,
  /* 869 */ 'A', 's', 'm', 'L', 'L', 'O', 'C', 0,
  /* 877 */ 'A', 's', 'm', 'N', 'O', 'L', 'O', 'C', 0,
  /* 886 */ 'A', 's', 'm', 'O', 'L', 'O', 'C', 0,
  /* 894 */ 'A', 's', 'm', 'L', 'O', 'C', 0,
  /* 901 */ 'A', 's', 'm', 'N', 'H', 'E', 'S', 'T', 'O', 'C', 0,
  /* 912 */ 'A', 's', 'm', 'H', 'E', 'S', 'T', 'O', 'C', 0,
  /* 922 */ 'A', 's', 'm', 'N', 'L', 'E', 'S', 'T', 'O', 'C', 0,
  /* 933 */ 'A', 's', 'm', 'L', 'E', 'S', 'T', 'O', 'C', 0,
  /* 943 */ 'A', 's', 'm', 'N', 'E', 'S', 'T', 'O', 'C', 0,
  /* 953 */ 'A', 's', 'm', 'E', 'S', 'T', 'O', 'C', 0,
  /* 962 */ 'A', 's', 'm', 'N', 'L', 'H', 'S', 'T', 'O', 'C', 0,
  /* 973 */ 'A', 's', 'm', 'L', 'H', 'S', 'T', 'O', 'C', 0,
  /* 983 */ 'A', 's', 'm', 'N', 'H', 'S', 'T', 'O', 'C', 0,
  /* 993 */ 'A', 's', 'm', 'H', 'S', 'T', 'O', 'C', 0,
  /* 1002 */ 'A', 's', 'm', 'N', 'L', 'S', 'T', 'O', 'C', 0,
  /* 1012 */ 'A', 's', 'm', 'L', 'S', 'T', 'O', 'C', 0,
  /* 1021 */ 'A', 's', 'm', 'N', 'O', 'S', 'T', 'O', 'C', 0,
  /* 1031 */ 'A', 's', 'm', 'O', 'S', 'T', 'O', 'C', 0,
  /* 1040 */ 'A', 's', 'm', 'S', 'T', 'O', 'C', 0,
  /* 1048 */ 'A', 's', 'm', 'B', 'R', 'C', 0,
  /* 1055 */ 'S', 'T', 'C', 0,
  /* 1059 */ 'M', 'V', 'C', 0,
  /* 1063 */ 'P', 'F', 'D', 0,
  /* 1067 */ 'L', 'D', 0,
  /* 1070 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 1083 */ 'S', 'T', 'D', 0,
  /* 1087 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 1100 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 1107 */ 'S', 'T', 'E', 0,
  /* 1111 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 1121 */ 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 1134 */ 'A', 'G', 'F', 0,
  /* 1138 */ 'C', 'G', 'F', 0,
  /* 1142 */ 'A', 'L', 'G', 'F', 0,
  /* 1147 */ 'C', 'L', 'G', 'F', 0,
  /* 1152 */ 'L', 'L', 'G', 'F', 0,
  /* 1157 */ 'S', 'L', 'G', 'F', 0,
  /* 1162 */ 'D', 'S', 'G', 'F', 0,
  /* 1167 */ 'M', 'S', 'G', 'F', 0,
  /* 1172 */ 'L', 'T', 'G', 'F', 0,
  /* 1177 */ 'I', 'I', 'H', 'F', 0,
  /* 1182 */ 'L', 'L', 'I', 'H', 'F', 0,
  /* 1188 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'H', 'F', 0,
  /* 1205 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'I', 'H', 'F', 0,
  /* 1222 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'I', 'H', 'F', 0,
  /* 1239 */ 'I', 'I', 'L', 'F', 0,
  /* 1244 */ 'L', 'L', 'I', 'L', 'F', 0,
  /* 1250 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'L', 'F', 0,
  /* 1267 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'I', 'L', 'F', 0,
  /* 1284 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'I', 'L', 'F', 0,
  /* 1301 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'X', 'I', 'L', 'F', 0,
  /* 1319 */ 'S', 'R', 'A', 'G', 0,
  /* 1324 */ 'S', 'L', 'B', 'G', 0,
  /* 1329 */ 'R', 'I', 'S', 'B', 'G', 0,
  /* 1335 */ 'R', 'N', 'S', 'B', 'G', 0,
  /* 1341 */ 'R', 'O', 'S', 'B', 'G', 0,
  /* 1347 */ 'R', 'X', 'S', 'B', 'G', 0,
  /* 1353 */ 'A', 'L', 'C', 'G', 0,
  /* 1358 */ 'A', 's', 'm', 'N', 'H', 'E', 'L', 'O', 'C', 'G', 0,
  /* 1369 */ 'A', 's', 'm', 'H', 'E', 'L', 'O', 'C', 'G', 0,
  /* 1379 */ 'A', 's', 'm', 'N', 'L', 'E', 'L', 'O', 'C', 'G', 0,
  /* 1390 */ 'A', 's', 'm', 'L', 'E', 'L', 'O', 'C', 'G', 0,
  /* 1400 */ 'A', 's', 'm', 'N', 'E', 'L', 'O', 'C', 'G', 0,
  /* 1410 */ 'A', 's', 'm', 'E', 'L', 'O', 'C', 'G', 0,
  /* 1419 */ 'A', 's', 'm', 'N', 'L', 'H', 'L', 'O', 'C', 'G', 0,
  /* 1430 */ 'A', 's', 'm', 'L', 'H', 'L', 'O', 'C', 'G', 0,
  /* 1440 */ 'A', 's', 'm', 'N', 'H', 'L', 'O', 'C', 'G', 0,
  /* 1450 */ 'A', 's', 'm', 'H', 'L', 'O', 'C', 'G', 0,
  /* 1459 */ 'A', 's', 'm', 'N', 'L', 'L', 'O', 'C', 'G', 0,
  /* 1469 */ 'A', 's', 'm', 'L', 'L', 'O', 'C', 'G', 0,
  /* 1478 */ 'A', 's', 'm', 'N', 'O', 'L', 'O', 'C', 'G', 0,
  /* 1488 */ 'A', 's', 'm', 'O', 'L', 'O', 'C', 'G', 0,
  /* 1497 */ 'A', 's', 'm', 'L', 'O', 'C', 'G', 0,
  /* 1505 */ 'A', 's', 'm', 'N', 'H', 'E', 'S', 'T', 'O', 'C', 'G', 0,
  /* 1517 */ 'A', 's', 'm', 'H', 'E', 'S', 'T', 'O', 'C', 'G', 0,
  /* 1528 */ 'A', 's', 'm', 'N', 'L', 'E', 'S', 'T', 'O', 'C', 'G', 0,
  /* 1540 */ 'A', 's', 'm', 'L', 'E', 'S', 'T', 'O', 'C', 'G', 0,
  /* 1551 */ 'A', 's', 'm', 'N', 'E', 'S', 'T', 'O', 'C', 'G', 0,
  /* 1562 */ 'A', 's', 'm', 'E', 'S', 'T', 'O', 'C', 'G', 0,
  /* 1572 */ 'A', 's', 'm', 'N', 'L', 'H', 'S', 'T', 'O', 'C', 'G', 0,
  /* 1584 */ 'A', 's', 'm', 'L', 'H', 'S', 'T', 'O', 'C', 'G', 0,
  /* 1595 */ 'A', 's', 'm', 'N', 'H', 'S', 'T', 'O', 'C', 'G', 0,
  /* 1606 */ 'A', 's', 'm', 'H', 'S', 'T', 'O', 'C', 'G', 0,
  /* 1616 */ 'A', 's', 'm', 'N', 'L', 'S', 'T', 'O', 'C', 'G', 0,
  /* 1627 */ 'A', 's', 'm', 'L', 'S', 'T', 'O', 'C', 'G', 0,
  /* 1637 */ 'A', 's', 'm', 'N', 'O', 'S', 'T', 'O', 'C', 'G', 0,
  /* 1648 */ 'A', 's', 'm', 'O', 'S', 'T', 'O', 'C', 'G', 0,
  /* 1658 */ 'A', 's', 'm', 'S', 'T', 'O', 'C', 'G', 0,
  /* 1667 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 1682 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 1696 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 1710 */ 'R', 'I', 'S', 'B', 'H', 'G', 0,
  /* 1717 */ 'A', 's', 'm', 'N', 'H', 'E', 'J', 'G', 0,
  /* 1726 */ 'A', 's', 'm', 'H', 'E', 'J', 'G', 0,
  /* 1734 */ 'A', 's', 'm', 'N', 'L', 'E', 'J', 'G', 0,
  /* 1743 */ 'A', 's', 'm', 'L', 'E', 'J', 'G', 0,
  /* 1751 */ 'A', 's', 'm', 'N', 'E', 'J', 'G', 0,
  /* 1759 */ 'A', 's', 'm', 'E', 'J', 'G', 0,
  /* 1766 */ 'A', 's', 'm', 'N', 'L', 'H', 'J', 'G', 0,
  /* 1775 */ 'A', 's', 'm', 'L', 'H', 'J', 'G', 0,
  /* 1783 */ 'A', 's', 'm', 'N', 'H', 'J', 'G', 0,
  /* 1791 */ 'A', 's', 'm', 'H', 'J', 'G', 0,
  /* 1798 */ 'A', 's', 'm', 'N', 'L', 'J', 'G', 0,
  /* 1806 */ 'A', 's', 'm', 'L', 'J', 'G', 0,
  /* 1813 */ 'A', 's', 'm', 'N', 'O', 'J', 'G', 0,
  /* 1821 */ 'A', 's', 'm', 'O', 'J', 'G', 0,
  /* 1828 */ 'C', 'a', 'l', 'l', 'J', 'G', 0,
  /* 1835 */ 'A', 'L', 'G', 0,
  /* 1839 */ 'R', 'I', 'S', 'B', 'L', 'G', 0,
  /* 1846 */ 'C', 'L', 'G', 0,
  /* 1850 */ 'D', 'L', 'G', 0,
  /* 1854 */ 'R', 'L', 'L', 'G', 0,
  /* 1859 */ 'S', 'L', 'L', 'G', 0,
  /* 1864 */ 'M', 'L', 'G', 0,
  /* 1868 */ 'S', 'R', 'L', 'G', 0,
  /* 1873 */ 'S', 'L', 'G', 0,
  /* 1877 */ 'L', 'M', 'G', 0,
  /* 1881 */ 'S', 'T', 'M', 'G', 0,
  /* 1886 */ 'N', 'G', 0,
  /* 1889 */ 'O', 'G', 0,
  /* 1892 */ 'C', 'S', 'G', 0,
  /* 1896 */ 'D', 'S', 'G', 0,
  /* 1900 */ 'M', 'S', 'G', 0,
  /* 1904 */ 'B', 'R', 'C', 'T', 'G', 0,
  /* 1910 */ 'L', 'T', 'G', 0,
  /* 1914 */ 'S', 'T', 'G', 0,
  /* 1918 */ 'L', 'R', 'V', 'G', 0,
  /* 1923 */ 'S', 'T', 'R', 'V', 'G', 0,
  /* 1929 */ 'X', 'G', 0,
  /* 1932 */ 'A', 'H', 0,
  /* 1935 */ 'C', 'H', 0,
  /* 1938 */ 'C', 'G', 'H', 0,
  /* 1942 */ 'L', 'L', 'G', 'H', 0,
  /* 1947 */ 'I', 'I', 'H', 'H', 0,
  /* 1952 */ 'L', 'L', 'I', 'H', 'H', 0,
  /* 1958 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'H', 'H', 0,
  /* 1975 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'I', 'H', 'H', 0,
  /* 1992 */ 'T', 'M', 'H', 'H', 0,
  /* 1997 */ 'I', 'I', 'L', 'H', 0,
  /* 2002 */ 'L', 'L', 'I', 'L', 'H', 0,
  /* 2008 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'L', 'H', 0,
  /* 2025 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'N', 'I', 'L', 'H', 0,
  /* 2043 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'I', 'L', 'H', 0,
  /* 2060 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'O', 'I', 'L', 'H', 0,
  /* 2078 */ 'L', 'L', 'H', 0,
  /* 2082 */ 'T', 'M', 'L', 'H', 0,
  /* 2087 */ 'M', 'H', 0,
  /* 2090 */ 'S', 'H', 0,
  /* 2093 */ 'S', 'T', 'H', 0,
  /* 2097 */ 'A', 's', 'm', 'J', 'H', 'E', 'C', 'I', 0,
  /* 2106 */ 'A', 's', 'm', 'J', 'E', 'C', 'I', 0,
  /* 2114 */ 'A', 's', 'm', 'J', 'L', 'E', 'C', 'I', 0,
  /* 2123 */ 'A', 's', 'm', 'J', 'H', 'C', 'I', 0,
  /* 2131 */ 'A', 's', 'm', 'J', 'L', 'H', 'C', 'I', 0,
  /* 2140 */ 'A', 's', 'm', 'J', 'L', 'C', 'I', 0,
  /* 2148 */ 'A', 's', 'm', 'J', 'H', 'E', 'A', 'l', 't', 'C', 'I', 0,
  /* 2160 */ 'A', 's', 'm', 'J', 'E', 'A', 'l', 't', 'C', 'I', 0,
  /* 2171 */ 'A', 's', 'm', 'J', 'L', 'E', 'A', 'l', 't', 'C', 'I', 0,
  /* 2183 */ 'A', 's', 'm', 'J', 'H', 'A', 'l', 't', 'C', 'I', 0,
  /* 2194 */ 'A', 's', 'm', 'J', 'L', 'H', 'A', 'l', 't', 'C', 'I', 0,
  /* 2206 */ 'A', 's', 'm', 'J', 'L', 'A', 'l', 't', 'C', 'I', 0,
  /* 2217 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'F', 'I', 0,
  /* 2233 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'A', 'F', 'I', 0,
  /* 2250 */ 'C', 'F', 'I', 0,
  /* 2254 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'G', 'F', 'I', 0,
  /* 2271 */ 'C', 'G', 'F', 'I', 0,
  /* 2276 */ 'A', 'L', 'G', 'F', 'I', 0,
  /* 2282 */ 'C', 'L', 'G', 'F', 'I', 0,
  /* 2288 */ 'S', 'L', 'G', 'F', 'I', 0,
  /* 2294 */ 'M', 'S', 'G', 'F', 'I', 0,
  /* 2300 */ 'A', 'L', 'F', 'I', 0,
  /* 2305 */ 'C', 'L', 'F', 'I', 0,
  /* 2310 */ 'S', 'L', 'F', 'I', 0,
  /* 2315 */ 'M', 'S', 'F', 'I', 0,
  /* 2320 */ 'A', 's', 'm', 'J', 'H', 'E', 'C', 'G', 'I', 0,
  /* 2330 */ 'A', 's', 'm', 'J', 'E', 'C', 'G', 'I', 0,
  /* 2339 */ 'A', 's', 'm', 'J', 'L', 'E', 'C', 'G', 'I', 0,
  /* 2349 */ 'A', 's', 'm', 'J', 'H', 'C', 'G', 'I', 0,
  /* 2358 */ 'A', 's', 'm', 'J', 'L', 'H', 'C', 'G', 'I', 0,
  /* 2368 */ 'A', 's', 'm', 'J', 'L', 'C', 'G', 'I', 0,
  /* 2377 */ 'A', 's', 'm', 'J', 'H', 'E', 'A', 'l', 't', 'C', 'G', 'I', 0,
  /* 2390 */ 'A', 's', 'm', 'J', 'E', 'A', 'l', 't', 'C', 'G', 'I', 0,
  /* 2402 */ 'A', 's', 'm', 'J', 'L', 'E', 'A', 'l', 't', 'C', 'G', 'I', 0,
  /* 2415 */ 'A', 's', 'm', 'J', 'H', 'A', 'l', 't', 'C', 'G', 'I', 0,
  /* 2427 */ 'A', 's', 'm', 'J', 'L', 'H', 'A', 'l', 't', 'C', 'G', 'I', 0,
  /* 2440 */ 'A', 's', 'm', 'J', 'L', 'A', 'l', 't', 'C', 'G', 'I', 0,
  /* 2452 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'H', 'I', 0,
  /* 2468 */ 'C', 'H', 'I', 0,
  /* 2472 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'G', 'H', 'I', 0,
  /* 2489 */ 'C', 'G', 'H', 'I', 0,
  /* 2494 */ 'L', 'G', 'H', 'I', 0,
  /* 2499 */ 'M', 'G', 'H', 'I', 0,
  /* 2504 */ 'M', 'V', 'G', 'H', 'I', 0,
  /* 2510 */ 'M', 'V', 'H', 'H', 'I', 0,
  /* 2516 */ 'L', 'H', 'I', 0,
  /* 2520 */ 'M', 'H', 'I', 0,
  /* 2524 */ 'P', 'H', 'I', 0,
  /* 2528 */ 'M', 'V', 'H', 'I', 0,
  /* 2533 */ 'C', 'L', 'I', 0,
  /* 2537 */ 'N', 'I', 0,
  /* 2540 */ 'O', 'I', 0,
  /* 2543 */ 'A', 'S', 'I', 0,
  /* 2547 */ 'A', 'G', 'S', 'I', 0,
  /* 2552 */ 'C', 'H', 'S', 'I', 0,
  /* 2557 */ 'C', 'L', 'F', 'H', 'S', 'I', 0,
  /* 2564 */ 'C', 'G', 'H', 'S', 'I', 0,
  /* 2570 */ 'C', 'L', 'G', 'H', 'S', 'I', 0,
  /* 2577 */ 'C', 'H', 'H', 'S', 'I', 0,
  /* 2583 */ 'C', 'L', 'H', 'H', 'S', 'I', 0,
  /* 2590 */ 'M', 'V', 'I', 0,
  /* 2594 */ 'X', 'I', 0,
  /* 2597 */ 'A', 's', 'm', 'N', 'H', 'E', 'J', 0,
  /* 2605 */ 'A', 's', 'm', 'H', 'E', 'J', 0,
  /* 2612 */ 'A', 's', 'm', 'N', 'L', 'E', 'J', 0,
  /* 2620 */ 'A', 's', 'm', 'L', 'E', 'J', 0,
  /* 2627 */ 'A', 's', 'm', 'N', 'E', 'J', 0,
  /* 2634 */ 'A', 's', 'm', 'E', 'J', 0,
  /* 2640 */ 'A', 's', 'm', 'N', 'L', 'H', 'J', 0,
  /* 2648 */ 'A', 's', 'm', 'L', 'H', 'J', 0,
  /* 2655 */ 'A', 's', 'm', 'N', 'H', 'J', 0,
  /* 2662 */ 'A', 's', 'm', 'H', 'J', 0,
  /* 2668 */ 'A', 's', 'm', 'C', 'I', 'J', 0,
  /* 2675 */ 'A', 's', 'm', 'C', 'G', 'I', 'J', 0,
  /* 2683 */ 'A', 's', 'm', 'N', 'L', 'J', 0,
  /* 2690 */ 'A', 's', 'm', 'L', 'J', 0,
  /* 2696 */ 'A', 's', 'm', 'N', 'O', 'J', 0,
  /* 2703 */ 'A', 's', 'm', 'O', 'J', 0,
  /* 2709 */ 'A', 's', 'm', 'C', 'R', 'J', 0,
  /* 2716 */ 'A', 's', 'm', 'C', 'G', 'R', 'J', 0,
  /* 2724 */ 'S', 'R', 'A', 'K', 0,
  /* 2729 */ 'A', 'H', 'I', 'K', 0,
  /* 2734 */ 'A', 'G', 'H', 'I', 'K', 0,
  /* 2740 */ 'A', 'L', 'G', 'H', 'S', 'I', 'K', 0,
  /* 2748 */ 'A', 'L', 'H', 'S', 'I', 'K', 0,
  /* 2755 */ 'S', 'L', 'L', 'K', 0,
  /* 2760 */ 'S', 'R', 'L', 'K', 0,
  /* 2765 */ 'A', 'R', 'K', 0,
  /* 2769 */ 'A', 'G', 'R', 'K', 0,
  /* 2774 */ 'A', 'L', 'G', 'R', 'K', 0,
  /* 2780 */ 'S', 'L', 'G', 'R', 'K', 0,
  /* 2786 */ 'N', 'G', 'R', 'K', 0,
  /* 2791 */ 'O', 'G', 'R', 'K', 0,
  /* 2796 */ 'S', 'G', 'R', 'K', 0,
  /* 2801 */ 'X', 'G', 'R', 'K', 0,
  /* 2806 */ 'A', 'L', 'R', 'K', 0,
  /* 2811 */ 'S', 'L', 'R', 'K', 0,
  /* 2816 */ 'N', 'R', 'K', 0,
  /* 2820 */ 'O', 'R', 'K', 0,
  /* 2824 */ 'S', 'R', 'K', 0,
  /* 2828 */ 'X', 'R', 'K', 0,
  /* 2832 */ 'A', 'L', 0,
  /* 2835 */ 'A', 's', 'm', 'B', 'R', 'C', 'L', 0,
  /* 2843 */ 'D', 'L', 0,
  /* 2846 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 2855 */ 'P', 'R', 'O', 'L', 'O', 'G', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 2868 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 2877 */ 'I', 'I', 'H', 'L', 0,
  /* 2882 */ 'L', 'L', 'I', 'H', 'L', 0,
  /* 2888 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'H', 'L', 0,
  /* 2905 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'I', 'H', 'L', 0,
  /* 2922 */ 'T', 'M', 'H', 'L', 0,
  /* 2927 */ 'I', 'I', 'L', 'L', 0,
  /* 2932 */ 'K', 'I', 'L', 'L', 0,
  /* 2937 */ 'L', 'L', 'I', 'L', 'L', 0,
  /* 2943 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'L', 'L', 0,
  /* 2960 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'I', 'L', 'L', 0,
  /* 2977 */ 'T', 'M', 'L', 'L', 0,
  /* 2982 */ 'R', 'L', 'L', 0,
  /* 2986 */ 'S', 'L', 'L', 0,
  /* 2990 */ 'L', 'A', 'R', 'L', 0,
  /* 2995 */ 'C', 'R', 'L', 0,
  /* 2999 */ 'P', 'F', 'D', 'R', 'L', 0,
  /* 3005 */ 'C', 'G', 'F', 'R', 'L', 0,
  /* 3011 */ 'C', 'L', 'G', 'F', 'R', 'L', 0,
  /* 3018 */ 'L', 'L', 'G', 'F', 'R', 'L', 0,
  /* 3025 */ 'C', 'G', 'R', 'L', 0,
  /* 3030 */ 'C', 'L', 'G', 'R', 'L', 0,
  /* 3036 */ 'S', 'T', 'G', 'R', 'L', 0,
  /* 3042 */ 'C', 'H', 'R', 'L', 0,
  /* 3047 */ 'C', 'G', 'H', 'R', 'L', 0,
  /* 3053 */ 'C', 'L', 'G', 'H', 'R', 'L', 0,
  /* 3060 */ 'L', 'L', 'G', 'H', 'R', 'L', 0,
  /* 3067 */ 'C', 'L', 'H', 'R', 'L', 0,
  /* 3073 */ 'L', 'L', 'H', 'R', 'L', 0,
  /* 3079 */ 'S', 'T', 'H', 'R', 'L', 0,
  /* 3085 */ 'C', 'L', 'R', 'L', 0,
  /* 3090 */ 'S', 'R', 'L', 0,
  /* 3094 */ 'S', 'T', 'R', 'L', 0,
  /* 3099 */ 'A', 's', 'm', 'B', 'R', 'A', 'S', 'L', 0,
  /* 3108 */ 'I', 'P', 'M', 0,
  /* 3112 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 3122 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'U', 'M', 'I', 'N', 0,
  /* 3140 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'M', 'I', 'N', 0,
  /* 3157 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 3174 */ 'O', 0,
  /* 3176 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 3191 */ 'E', 'A', 'R', 0,
  /* 3195 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'R', 0,
  /* 3210 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'A', 'R', 0,
  /* 3226 */ 'M', 'A', 'D', 'B', 'R', 0,
  /* 3232 */ 'L', 'C', 'D', 'B', 'R', 0,
  /* 3238 */ 'D', 'D', 'B', 'R', 0,
  /* 3243 */ 'L', 'E', 'D', 'B', 'R', 0,
  /* 3249 */ 'C', 'F', 'D', 'B', 'R', 0,
  /* 3255 */ 'C', 'G', 'D', 'B', 'R', 0,
  /* 3261 */ 'F', 'I', 'D', 'B', 'R', 0,
  /* 3267 */ 'M', 'D', 'B', 'R', 0,
  /* 3272 */ 'L', 'N', 'D', 'B', 'R', 0,
  /* 3278 */ 'L', 'P', 'D', 'B', 'R', 0,
  /* 3284 */ 'S', 'Q', 'D', 'B', 'R', 0,
  /* 3290 */ 'M', 'S', 'D', 'B', 'R', 0,
  /* 3296 */ 'L', 'T', 'D', 'B', 'R', 0,
  /* 3302 */ 'L', 'X', 'D', 'B', 'R', 0,
  /* 3308 */ 'M', 'X', 'D', 'B', 'R', 0,
  /* 3314 */ 'M', 'A', 'E', 'B', 'R', 0,
  /* 3320 */ 'L', 'C', 'E', 'B', 'R', 0,
  /* 3326 */ 'L', 'D', 'E', 'B', 'R', 0,
  /* 3332 */ 'M', 'D', 'E', 'B', 'R', 0,
  /* 3338 */ 'M', 'E', 'E', 'B', 'R', 0,
  /* 3344 */ 'C', 'F', 'E', 'B', 'R', 0,
  /* 3350 */ 'C', 'G', 'E', 'B', 'R', 0,
  /* 3356 */ 'F', 'I', 'E', 'B', 'R', 0,
  /* 3362 */ 'L', 'N', 'E', 'B', 'R', 0,
  /* 3368 */ 'L', 'P', 'E', 'B', 'R', 0,
  /* 3374 */ 'S', 'Q', 'E', 'B', 'R', 0,
  /* 3380 */ 'M', 'S', 'E', 'B', 'R', 0,
  /* 3386 */ 'L', 'T', 'E', 'B', 'R', 0,
  /* 3392 */ 'L', 'X', 'E', 'B', 'R', 0,
  /* 3398 */ 'C', 'D', 'F', 'B', 'R', 0,
  /* 3404 */ 'C', 'E', 'F', 'B', 'R', 0,
  /* 3410 */ 'C', 'X', 'F', 'B', 'R', 0,
  /* 3416 */ 'C', 'D', 'G', 'B', 'R', 0,
  /* 3422 */ 'C', 'E', 'G', 'B', 'R', 0,
  /* 3428 */ 'S', 'L', 'G', 'B', 'R', 0,
  /* 3434 */ 'C', 'X', 'G', 'B', 'R', 0,
  /* 3440 */ 'S', 'L', 'B', 'R', 0,
  /* 3445 */ 'A', 'X', 'B', 'R', 0,
  /* 3450 */ 'L', 'C', 'X', 'B', 'R', 0,
  /* 3456 */ 'L', 'D', 'X', 'B', 'R', 0,
  /* 3462 */ 'L', 'E', 'X', 'B', 'R', 0,
  /* 3468 */ 'C', 'F', 'X', 'B', 'R', 0,
  /* 3474 */ 'C', 'G', 'X', 'B', 'R', 0,
  /* 3480 */ 'F', 'I', 'X', 'B', 'R', 0,
  /* 3486 */ 'M', 'X', 'B', 'R', 0,
  /* 3491 */ 'L', 'N', 'X', 'B', 'R', 0,
  /* 3497 */ 'L', 'P', 'X', 'B', 'R', 0,
  /* 3503 */ 'S', 'Q', 'X', 'B', 'R', 0,
  /* 3509 */ 'S', 'X', 'B', 'R', 0,
  /* 3514 */ 'L', 'T', 'X', 'B', 'R', 0,
  /* 3520 */ 'C', 'a', 'l', 'l', 'B', 'R', 0,
  /* 3527 */ 'A', 's', 'm', 'J', 'H', 'E', 'C', 'R', 0,
  /* 3536 */ 'A', 's', 'm', 'J', 'E', 'C', 'R', 0,
  /* 3544 */ 'A', 's', 'm', 'J', 'L', 'E', 'C', 'R', 0,
  /* 3553 */ 'L', 'L', 'G', 'C', 'R', 0,
  /* 3559 */ 'A', 's', 'm', 'J', 'H', 'C', 'R', 0,
  /* 3567 */ 'A', 's', 'm', 'J', 'L', 'H', 'C', 'R', 0,
  /* 3576 */ 'A', 'L', 'C', 'R', 0,
  /* 3581 */ 'A', 's', 'm', 'J', 'L', 'C', 'R', 0,
  /* 3589 */ 'L', 'L', 'C', 'R', 0,
  /* 3594 */ 'A', 's', 'm', 'N', 'H', 'E', 'L', 'O', 'C', 'R', 0,
  /* 3605 */ 'A', 's', 'm', 'H', 'E', 'L', 'O', 'C', 'R', 0,
  /* 3615 */ 'A', 's', 'm', 'N', 'L', 'E', 'L', 'O', 'C', 'R', 0,
  /* 3626 */ 'A', 's', 'm', 'L', 'E', 'L', 'O', 'C', 'R', 0,
  /* 3636 */ 'A', 's', 'm', 'N', 'E', 'L', 'O', 'C', 'R', 0,
  /* 3646 */ 'A', 's', 'm', 'E', 'L', 'O', 'C', 'R', 0,
  /* 3655 */ 'A', 's', 'm', 'N', 'L', 'H', 'L', 'O', 'C', 'R', 0,
  /* 3666 */ 'A', 's', 'm', 'L', 'H', 'L', 'O', 'C', 'R', 0,
  /* 3676 */ 'A', 's', 'm', 'N', 'H', 'L', 'O', 'C', 'R', 0,
  /* 3686 */ 'A', 's', 'm', 'H', 'L', 'O', 'C', 'R', 0,
  /* 3695 */ 'A', 's', 'm', 'N', 'L', 'L', 'O', 'C', 'R', 0,
  /* 3705 */ 'A', 's', 'm', 'L', 'L', 'O', 'C', 'R', 0,
  /* 3714 */ 'A', 's', 'm', 'N', 'O', 'L', 'O', 'C', 'R', 0,
  /* 3724 */ 'A', 's', 'm', 'O', 'L', 'O', 'C', 'R', 0,
  /* 3733 */ 'A', 's', 'm', 'L', 'O', 'C', 'R', 0,
  /* 3741 */ 'A', 's', 'm', 'J', 'H', 'E', 'A', 'l', 't', 'C', 'R', 0,
  /* 3753 */ 'A', 's', 'm', 'J', 'E', 'A', 'l', 't', 'C', 'R', 0,
  /* 3764 */ 'A', 's', 'm', 'J', 'L', 'E', 'A', 'l', 't', 'C', 'R', 0,
  /* 3776 */ 'A', 's', 'm', 'J', 'H', 'A', 'l', 't', 'C', 'R', 0,
  /* 3787 */ 'A', 's', 'm', 'J', 'L', 'H', 'A', 'l', 't', 'C', 'R', 0,
  /* 3799 */ 'A', 's', 'm', 'J', 'L', 'A', 'l', 't', 'C', 'R', 0,
  /* 3810 */ 'L', 'G', 'D', 'R', 0,
  /* 3815 */ 'L', 'D', 'R', 0,
  /* 3819 */ 'L', 'Z', 'D', 'R', 0,
  /* 3824 */ 'L', 'E', 'R', 0,
  /* 3828 */ 'L', 'Z', 'E', 'R', 0,
  /* 3833 */ 'A', 'G', 'F', 'R', 0,
  /* 3838 */ 'L', 'C', 'G', 'F', 'R', 0,
  /* 3844 */ 'A', 'L', 'G', 'F', 'R', 0,
  /* 3850 */ 'C', 'L', 'G', 'F', 'R', 0,
  /* 3856 */ 'L', 'L', 'G', 'F', 'R', 0,
  /* 3862 */ 'S', 'L', 'G', 'F', 'R', 0,
  /* 3868 */ 'L', 'N', 'G', 'F', 'R', 0,
  /* 3874 */ 'L', 'P', 'G', 'F', 'R', 0,
  /* 3880 */ 'D', 'S', 'G', 'F', 'R', 0,
  /* 3886 */ 'M', 'S', 'G', 'F', 'R', 0,
  /* 3892 */ 'L', 'T', 'G', 'F', 'R', 0,
  /* 3898 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'G', 'R', 0,
  /* 3914 */ 'A', 's', 'm', 'J', 'H', 'E', 'C', 'G', 'R', 0,
  /* 3924 */ 'A', 's', 'm', 'J', 'E', 'C', 'G', 'R', 0,
  /* 3933 */ 'A', 's', 'm', 'J', 'L', 'E', 'C', 'G', 'R', 0,
  /* 3943 */ 'A', 's', 'm', 'J', 'H', 'C', 'G', 'R', 0,
  /* 3952 */ 'A', 's', 'm', 'J', 'L', 'H', 'C', 'G', 'R', 0,
  /* 3962 */ 'A', 'L', 'C', 'G', 'R', 0,
  /* 3968 */ 'A', 's', 'm', 'J', 'L', 'C', 'G', 'R', 0,
  /* 3977 */ 'A', 's', 'm', 'N', 'H', 'E', 'L', 'O', 'C', 'G', 'R', 0,
  /* 3989 */ 'A', 's', 'm', 'H', 'E', 'L', 'O', 'C', 'G', 'R', 0,
  /* 4000 */ 'A', 's', 'm', 'N', 'L', 'E', 'L', 'O', 'C', 'G', 'R', 0,
  /* 4012 */ 'A', 's', 'm', 'L', 'E', 'L', 'O', 'C', 'G', 'R', 0,
  /* 4023 */ 'A', 's', 'm', 'N', 'E', 'L', 'O', 'C', 'G', 'R', 0,
  /* 4034 */ 'A', 's', 'm', 'E', 'L', 'O', 'C', 'G', 'R', 0,
  /* 4044 */ 'A', 's', 'm', 'N', 'L', 'H', 'L', 'O', 'C', 'G', 'R', 0,
  /* 4056 */ 'A', 's', 'm', 'L', 'H', 'L', 'O', 'C', 'G', 'R', 0,
  /* 4067 */ 'A', 's', 'm', 'N', 'H', 'L', 'O', 'C', 'G', 'R', 0,
  /* 4078 */ 'A', 's', 'm', 'H', 'L', 'O', 'C', 'G', 'R', 0,
  /* 4088 */ 'A', 's', 'm', 'N', 'L', 'L', 'O', 'C', 'G', 'R', 0,
  /* 4099 */ 'A', 's', 'm', 'L', 'L', 'O', 'C', 'G', 'R', 0,
  /* 4109 */ 'A', 's', 'm', 'N', 'O', 'L', 'O', 'C', 'G', 'R', 0,
  /* 4120 */ 'A', 's', 'm', 'O', 'L', 'O', 'C', 'G', 'R', 0,
  /* 4130 */ 'A', 's', 'm', 'L', 'O', 'C', 'G', 'R', 0,
  /* 4139 */ 'A', 's', 'm', 'J', 'H', 'E', 'A', 'l', 't', 'C', 'G', 'R', 0,
  /* 4152 */ 'A', 's', 'm', 'J', 'E', 'A', 'l', 't', 'C', 'G', 'R', 0,
  /* 4164 */ 'A', 's', 'm', 'J', 'L', 'E', 'A', 'l', 't', 'C', 'G', 'R', 0,
  /* 4177 */ 'A', 's', 'm', 'J', 'H', 'A', 'l', 't', 'C', 'G', 'R', 0,
  /* 4189 */ 'A', 's', 'm', 'J', 'L', 'H', 'A', 'l', 't', 'C', 'G', 'R', 0,
  /* 4202 */ 'A', 's', 'm', 'J', 'L', 'A', 'l', 't', 'C', 'G', 'R', 0,
  /* 4214 */ 'L', 'D', 'G', 'R', 0,
  /* 4219 */ 'A', 'L', 'G', 'R', 0,
  /* 4224 */ 'C', 'L', 'G', 'R', 0,
  /* 4229 */ 'D', 'L', 'G', 'R', 0,
  /* 4234 */ 'M', 'L', 'G', 'R', 0,
  /* 4239 */ 'S', 'L', 'G', 'R', 0,
  /* 4244 */ 'L', 'N', 'G', 'R', 0,
  /* 4249 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'G', 'R', 0,
  /* 4265 */ 'F', 'L', 'O', 'G', 'R', 0,
  /* 4271 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'G', 'R', 0,
  /* 4287 */ 'L', 'P', 'G', 'R', 0,
  /* 4292 */ 'D', 'S', 'G', 'R', 0,
  /* 4297 */ 'M', 'S', 'G', 'R', 0,
  /* 4302 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'G', 'R', 0,
  /* 4318 */ 'L', 'T', 'G', 'R', 0,
  /* 4323 */ 'L', 'R', 'V', 'G', 'R', 0,
  /* 4329 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'G', 'R', 0,
  /* 4345 */ 'L', 'L', 'G', 'H', 'R', 0,
  /* 4351 */ 'L', 'L', 'H', 'R', 0,
  /* 4356 */ 'A', 'L', 'R', 0,
  /* 4360 */ 'C', 'L', 'R', 0,
  /* 4364 */ 'D', 'L', 'R', 0,
  /* 4368 */ 'S', 'L', 'R', 0,
  /* 4372 */ 'L', 'N', 'R', 0,
  /* 4376 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'R', 0,
  /* 4391 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'N', 'R', 0,
  /* 4407 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', 0,
  /* 4422 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'O', 'R', 0,
  /* 4438 */ 'L', 'P', 'R', 0,
  /* 4442 */ 'A', 's', 'm', 'B', 'A', 'S', 'R', 0,
  /* 4450 */ 'M', 'S', 'R', 0,
  /* 4454 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'R', 0,
  /* 4469 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'S', 'R', 0,
  /* 4485 */ 'L', 'T', 'R', 0,
  /* 4489 */ 'L', 'R', 'V', 'R', 0,
  /* 4494 */ 'L', 'X', 'R', 0,
  /* 4498 */ 'L', 'Z', 'X', 'R', 0,
  /* 4503 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'R', 0,
  /* 4518 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'X', 'R', 0,
  /* 4534 */ 'A', 's', 'm', 'B', 'R', 'A', 'S', 0,
  /* 4542 */ 'C', 'S', 0,
  /* 4545 */ 'M', 'S', 0,
  /* 4548 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 4565 */ 'B', 'R', 'C', 'T', 0,
  /* 4570 */ 'R', 'E', 'T', 0,
  /* 4574 */ 'L', 'T', 0,
  /* 4577 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 4592 */ 'C', 'L', 'S', 'T', 0,
  /* 4597 */ 'S', 'R', 'S', 'T', 0,
  /* 4602 */ 'M', 'V', 'S', 'T', 0,
  /* 4607 */ 'L', 'R', 'V', 0,
  /* 4611 */ 'S', 'T', 'R', 'V', 0,
  /* 4616 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', 'W', 0,
  /* 4629 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', 'W', 0,
  /* 4646 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'U', 'M', 'A', 'X', 0,
  /* 4664 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'M', 'A', 'X', 0,
  /* 4681 */ 'L', 'X', 0,
  /* 4684 */ 'S', 'T', 'X', 0,
  /* 4688 */ 'I', 'C', '3', '2', 'Y', 0,
  /* 4694 */ 'S', 'T', 'C', '3', '2', 'Y', 0,
  /* 4701 */ 'S', 'T', 'H', '3', '2', 'Y', 0,
  /* 4708 */ 'S', 'T', '3', '2', 'Y', 0,
  /* 4714 */ 'L', 'A', 'Y', 0,
  /* 4718 */ 'I', 'C', 'Y', 0,
  /* 4722 */ 'S', 'T', 'C', 'Y', 0,
  /* 4727 */ 'L', 'D', 'Y', 0,
  /* 4731 */ 'S', 'T', 'D', 'Y', 0,
  /* 4736 */ 'L', 'E', 'Y', 0,
  /* 4740 */ 'S', 'T', 'E', 'Y', 0,
  /* 4745 */ 'A', 'H', 'Y', 0,
  /* 4749 */ 'C', 'H', 'Y', 0,
  /* 4753 */ 'L', 'H', 'Y', 0,
  /* 4757 */ 'M', 'H', 'Y', 0,
  /* 4761 */ 'S', 'H', 'Y', 0,
  /* 4765 */ 'S', 'T', 'H', 'Y', 0,
  /* 4770 */ 'C', 'L', 'I', 'Y', 0,
  /* 4775 */ 'N', 'I', 'Y', 0,
  /* 4779 */ 'O', 'I', 'Y', 0,
  /* 4783 */ 'M', 'V', 'I', 'Y', 0,
  /* 4788 */ 'X', 'I', 'Y', 0,
  /* 4792 */ 'A', 'L', 'Y', 0,
  /* 4796 */ 'C', 'L', 'Y', 0,
  /* 4800 */ 'S', 'L', 'Y', 0,
  /* 4804 */ 'N', 'Y', 0,
  /* 4807 */ 'O', 'Y', 0,
  /* 4810 */ 'C', 'O', 'P', 'Y', 0,
  /* 4815 */ 'C', 'S', 'Y', 0,
  /* 4819 */ 'M', 'S', 'Y', 0,
  /* 4823 */ 'S', 'T', 'Y', 0,
  /* 4827 */ 'X', 'Y', 0,
  /* 4830 */ 'C', 'P', 'S', 'D', 'R', 'd', 'd', 0,
  /* 4838 */ 'C', 'P', 'S', 'D', 'R', 's', 'd', 0,
  /* 4846 */ 'C', 'L', 'C', 'S', 'e', 'q', 'u', 'e', 'n', 'c', 'e', 0,
  /* 4858 */ 'M', 'V', 'C', 'S', 'e', 'q', 'u', 'e', 'n', 'c', 'e', 0,
  /* 4870 */ 'L', 'T', 'D', 'B', 'R', 'C', 'o', 'm', 'p', 'a', 'r', 'e', 0,
  /* 4883 */ 'L', 'T', 'E', 'B', 'R', 'C', 'o', 'm', 'p', 'a', 'r', 'e', 0,
  /* 4896 */ 'L', 'T', 'X', 'B', 'R', 'C', 'o', 'm', 'p', 'a', 'r', 'e', 0,
  /* 4909 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'L', 'F', '3', '2', 'i', 0,
  /* 4929 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'L', 'H', '3', '2', 'i', 0,
  /* 4949 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'L', 'L', '3', '2', 'i', 0,
  /* 4969 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'H', 'F', 'i', 0,
  /* 4987 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'L', 'F', 'i', 0,
  /* 5005 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'H', 'H', 'i', 0,
  /* 5023 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'L', 'H', 'i', 0,
  /* 5041 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'N', 'I', 'L', 'H', 'i', 0,
  /* 5060 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'H', 'L', 'i', 0,
  /* 5078 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'L', 'L', 'i', 0,
  /* 5096 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'G', 'R', 'i', 0,
  /* 5113 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'R', 'i', 0,
  /* 5129 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'N', 'R', 'i', 0,
  /* 5146 */ 'C', 'L', 'C', 'L', 'o', 'o', 'p', 0,
  /* 5154 */ 'M', 'V', 'C', 'L', 'o', 'o', 'p', 0,
  /* 5162 */ 'C', 'L', 'S', 'T', 'L', 'o', 'o', 'p', 0,
  /* 5171 */ 'S', 'R', 'S', 'T', 'L', 'o', 'o', 'p', 0,
  /* 5180 */ 'M', 'V', 'S', 'T', 'L', 'o', 'o', 'p', 0,
  /* 5189 */ 'C', 'P', 'S', 'D', 'R', 'd', 's', 0,
  /* 5197 */ 'C', 'P', 'S', 'D', 'R', 's', 's', 0,
  /* 5205 */ 'C', 'o', 'n', 'd', 'S', 't', 'o', 'r', 'e', 'F', '3', '2', 'I', 'n', 'v', 0,
  /* 5221 */ 'C', 'o', 'n', 'd', 'S', 't', 'o', 'r', 'e', '3', '2', '_', '3', '2', 'I', 'n', 'v', 0,
  /* 5239 */ 'C', 'o', 'n', 'd', 'S', 't', 'o', 'r', 'e', '1', '6', '_', '3', '2', 'I', 'n', 'v', 0,
  /* 5257 */ 'C', 'o', 'n', 'd', 'S', 't', 'o', 'r', 'e', '8', '_', '3', '2', 'I', 'n', 'v', 0,
  /* 5274 */ 'C', 'o', 'n', 'd', 'S', 't', 'o', 'r', 'e', '3', '2', 'I', 'n', 'v', 0,
  /* 5289 */ 'C', 'o', 'n', 'd', 'S', 't', 'o', 'r', 'e', 'F', '6', '4', 'I', 'n', 'v', 0,
  /* 5305 */ 'C', 'o', 'n', 'd', 'S', 't', 'o', 'r', 'e', '6', '4', 'I', 'n', 'v', 0,
  /* 5320 */ 'C', 'o', 'n', 'd', 'S', 't', 'o', 'r', 'e', '1', '6', 'I', 'n', 'v', 0,
  /* 5335 */ 'C', 'o', 'n', 'd', 'S', 't', 'o', 'r', 'e', '8', 'I', 'n', 'v', 0,
};

extern const unsigned SystemZInstrNameIndices[] = {
    2524U, 3112U, 2855U, 2868U, 2846U, 2932U, 1667U, 1682U, 
    1121U, 1696U, 4548U, 1111U, 1087U, 4810U, 1100U, 4577U, 
    1070U, 626U, 654U, 3227U, 3157U, 3176U, 848U, 691U, 
    3315U, 444U, 2229U, 1321U, 1134U, 2266U, 3833U, 2484U, 
    2734U, 3910U, 2769U, 2547U, 1932U, 2464U, 2729U, 4745U, 
    2832U, 745U, 1353U, 3962U, 3576U, 2300U, 1835U, 1142U, 
    2276U, 3844U, 2740U, 4219U, 2774U, 2748U, 4356U, 2806U, 
    4792U, 3192U, 2765U, 2543U, 4629U, 2233U, 3210U, 4664U, 
    3140U, 2025U, 5041U, 4391U, 5129U, 2060U, 4422U, 4469U, 
    4646U, 3122U, 1301U, 4518U, 2217U, 2254U, 2472U, 3898U, 
    2452U, 3195U, 381U, 540U, 327U, 486U, 4249U, 5096U, 
    1188U, 4969U, 1958U, 5005U, 2888U, 5060U, 1250U, 25U, 
    4909U, 4987U, 2008U, 129U, 4929U, 5023U, 2943U, 187U, 
    4949U, 5078U, 4376U, 5113U, 4271U, 1205U, 1975U, 2905U, 
    1267U, 44U, 2043U, 148U, 2960U, 206U, 4407U, 4302U, 
    4454U, 361U, 520U, 307U, 466U, 4329U, 1222U, 1284U, 
    63U, 4503U, 4616U, 346U, 505U, 3445U, 4715U, 4442U, 
    4534U, 3099U, 1048U, 2835U, 2675U, 2716U, 2668U, 2709U, 
    2634U, 1759U, 804U, 1410U, 4034U, 3646U, 953U, 1562U, 
    2605U, 1726U, 767U, 1369U, 3989U, 3605U, 912U, 1517U, 
    2662U, 1791U, 840U, 1450U, 4078U, 3686U, 993U, 1606U, 
    2390U, 4152U, 2160U, 3753U, 2330U, 3924U, 2106U, 3536U, 
    2415U, 4177U, 2183U, 3776U, 2349U, 3943U, 2123U, 3559U, 
    2377U, 4139U, 2148U, 3741U, 2320U, 3914U, 2097U, 3527U, 
    2440U, 4202U, 2206U, 3799U, 2368U, 3968U, 2140U, 3581U, 
    2402U, 4164U, 2171U, 3764U, 2339U, 3933U, 2114U, 3544U, 
    2427U, 4189U, 2194U, 3787U, 2358U, 3952U, 2131U, 3567U, 
    2620U, 1743U, 786U, 1390U, 4012U, 3626U, 933U, 1540U, 
    2648U, 1775U, 822U, 1430U, 4056U, 3666U, 973U, 1584U, 
    2690U, 1806U, 869U, 1469U, 4099U, 3705U, 894U, 1497U, 
    4130U, 3733U, 1012U, 1627U, 2627U, 1751U, 795U, 1400U, 
    4023U, 3636U, 943U, 1551U, 2597U, 1717U, 757U, 1358U, 
    3977U, 3594U, 901U, 1505U, 2655U, 1783U, 831U, 1440U, 
    4067U, 3676U, 983U, 1595U, 2612U, 1734U, 776U, 1379U, 
    4000U, 3615U, 922U, 1528U, 2640U, 1766U, 812U, 1419U, 
    4044U, 3655U, 962U, 1572U, 2683U, 1798U, 860U, 1459U, 
    4088U, 3695U, 1002U, 1616U, 2696U, 1813U, 877U, 1478U, 
    4109U, 3714U, 1021U, 1637U, 2703U, 1821U, 886U, 1488U, 
    4120U, 3724U, 1031U, 1648U, 1040U, 1658U, 4445U, 3229U, 
    4537U, 3102U, 1051U, 2838U, 4565U, 1904U, 740U, 658U, 
    3233U, 3398U, 3416U, 695U, 3321U, 3404U, 3422U, 3249U, 
    3344U, 2250U, 3468U, 1355U, 3255U, 3350U, 1138U, 2271U, 
    3839U, 3005U, 1938U, 2489U, 3047U, 2564U, 2678U, 3920U, 
    2719U, 3025U, 3474U, 1935U, 2577U, 2468U, 3042U, 2552U, 
    4749U, 2671U, 2840U, 749U, 5146U, 4846U, 2557U, 2305U, 
    1846U, 1147U, 2282U, 3850U, 3011U, 3053U, 2570U, 4224U, 
    3030U, 2583U, 3067U, 2533U, 4770U, 4360U, 3085U, 4592U, 
    5162U, 4796U, 4830U, 5189U, 4838U, 5197U, 3533U, 2712U, 
    2995U, 4542U, 1892U, 4815U, 3451U, 3410U, 3434U, 4719U, 
    3520U, 1828U, 580U, 5320U, 267U, 5239U, 400U, 5274U, 
    252U, 5221U, 559U, 5305U, 614U, 5335U, 293U, 5257U, 
    82U, 5205U, 421U, 5289U, 662U, 3238U, 700U, 3327U, 
    2843U, 1850U, 4229U, 4364U, 1896U, 1162U, 3880U, 4292U, 
    3457U, 3191U, 3261U, 628U, 3356U, 635U, 3480U, 642U, 
    4265U, 742U, 0U, 4688U, 4718U, 1177U, 1947U, 2877U, 
    1239U, 18U, 1997U, 122U, 2927U, 180U, 3108U, 2603U, 
    1723U, 2833U, 603U, 625U, 2990U, 4714U, 734U, 3441U, 
    3232U, 3320U, 3838U, 3963U, 3577U, 3450U, 1067U, 699U, 
    3326U, 4214U, 3815U, 3456U, 4727U, 1104U, 3243U, 3824U, 
    3462U, 4736U, 1836U, 729U, 3429U, 3810U, 1143U, 2277U, 
    3845U, 3012U, 1943U, 2494U, 4346U, 3054U, 4220U, 3031U, 
    1999U, 2516U, 4352U, 3068U, 4753U, 753U, 3589U, 737U, 
    3553U, 1152U, 3856U, 3018U, 1942U, 4345U, 3060U, 2078U, 
    4351U, 3073U, 1182U, 1952U, 2882U, 1244U, 2002U, 2937U, 
    1877U, 3272U, 3362U, 3868U, 4244U, 4372U, 3491U, 763U, 
    1364U, 3983U, 3600U, 3278U, 3368U, 3874U, 4287U, 4438U, 
    3497U, 4357U, 3086U, 4607U, 1918U, 4323U, 4489U, 4574U, 
    3296U, 4870U, 3386U, 4883U, 1910U, 1172U, 3892U, 4318U, 
    4485U, 3514U, 4896U, 4681U, 680U, 3302U, 724U, 3392U, 
    4494U, 4793U, 3819U, 3828U, 4498U, 653U, 3226U, 690U, 
    3314U, 666U, 3267U, 704U, 3332U, 709U, 3338U, 2499U, 
    2087U, 2520U, 4757U, 1864U, 4234U, 4545U, 675U, 3290U, 
    719U, 3380U, 2315U, 1900U, 1167U, 2294U, 3886U, 4297U, 
    4450U, 4819U, 1059U, 5154U, 4858U, 2504U, 2510U, 2528U, 
    2590U, 4783U, 4602U, 5180U, 3486U, 685U, 3308U, 3138U, 
    1886U, 4245U, 2786U, 2537U, 1200U, 1970U, 2900U, 1262U, 
    37U, 2020U, 141U, 2955U, 199U, 4775U, 4373U, 2816U, 
    4804U, 3174U, 1889U, 4267U, 2791U, 2540U, 1217U, 1987U, 
    2917U, 1279U, 56U, 2055U, 160U, 2972U, 218U, 4779U, 
    4419U, 2820U, 4807U, 1063U, 2999U, 4570U, 1329U, 105U, 
    1710U, 1839U, 113U, 2982U, 1854U, 1335U, 1341U, 1347U, 
    4540U, 676U, 3291U, 720U, 3381U, 1893U, 1163U, 3881U, 
    4293U, 2796U, 2090U, 4761U, 3105U, 733U, 1324U, 3440U, 
    2310U, 1873U, 3428U, 1157U, 2288U, 3862U, 4239U, 2780U, 
    2986U, 1859U, 2755U, 4368U, 2811U, 4800U, 670U, 3284U, 
    714U, 3374U, 3503U, 4447U, 649U, 1319U, 2724U, 2824U, 
    3090U, 1868U, 2760U, 4597U, 5171U, 4594U, 608U, 247U, 
    4708U, 1055U, 12U, 4694U, 4722U, 1083U, 4731U, 1107U, 
    4740U, 1914U, 3036U, 2093U, 174U, 4701U, 3079U, 232U, 
    4765U, 1881U, 907U, 5U, 1511U, 3094U, 240U, 4611U, 
    1923U, 4684U, 4823U, 3509U, 4816U, 412U, 571U, 592U, 
    95U, 434U, 1992U, 2922U, 2082U, 167U, 2977U, 225U, 
    4662U, 1929U, 4341U, 2801U, 2594U, 1234U, 1296U, 75U, 
    4788U, 4495U, 2828U, 4827U, 282U, 455U, 
};

static inline void InitSystemZMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(SystemZInsts, SystemZInstrNameIndices, SystemZInstrNameData, 750);
}

} // End llvm namespace 
#endif // GET_INSTRINFO_MC_DESC


#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct SystemZGenInstrInfo : public TargetInstrInfo {
  explicit SystemZGenInstrInfo(int SO = -1, int DO = -1);
};
} // End llvm namespace 
#endif // GET_INSTRINFO_HEADER


#ifdef GET_INSTRINFO_CTOR
#undef GET_INSTRINFO_CTOR
namespace llvm {
extern const MCInstrDesc SystemZInsts[];
extern const unsigned SystemZInstrNameIndices[];
extern const char SystemZInstrNameData[];
SystemZGenInstrInfo::SystemZGenInstrInfo(int SO, int DO)
  : TargetInstrInfo(SO, DO) {
  InitMCInstrInfo(SystemZInsts, SystemZInstrNameIndices, SystemZInstrNameData, 750);
}
} // End llvm namespace 
#endif // GET_INSTRINFO_CTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {namespace SystemZ {
namespace OpName { 
enum {
OPERAND_LAST
};
} // End namespace OpName
} // End namespace SystemZ
} // End namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM
#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {namespace SystemZ {
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // End namespace SystemZ
} // End namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS
#ifdef GET_INSTRMAP_INFO
#undef GET_INSTRMAP_INFO
namespace llvm {

namespace SystemZ {

enum DispSize {
	DispSize_12,
	DispSize_20
};

enum NumOpsValue {
	NumOpsValue_3
};

enum OpType {
	OpType_mem
};

// getDisp12Opcode
int getDisp12Opcode(uint16_t Opcode) {
static const uint16_t getDisp12OpcodeTable[][2] = {
  { SystemZ::AHY, SystemZ::AH },
  { SystemZ::ALY, SystemZ::AL },
  { SystemZ::AY, SystemZ::A },
  { SystemZ::CHY, SystemZ::CH },
  { SystemZ::CLIY, SystemZ::CLI },
  { SystemZ::CLY, SystemZ::CL },
  { SystemZ::CSY, SystemZ::CS },
  { SystemZ::CY, SystemZ::C },
  { SystemZ::IC32Y, SystemZ::IC32 },
  { SystemZ::ICY, SystemZ::IC },
  { SystemZ::LAY, SystemZ::LA },
  { SystemZ::LDY, SystemZ::LD },
  { SystemZ::LEY, SystemZ::LE },
  { SystemZ::LHY, SystemZ::LH },
  { SystemZ::LY, SystemZ::L },
  { SystemZ::MHY, SystemZ::MH },
  { SystemZ::MSY, SystemZ::MS },
  { SystemZ::MVIY, SystemZ::MVI },
  { SystemZ::NIY, SystemZ::NI },
  { SystemZ::NY, SystemZ::N },
  { SystemZ::OIY, SystemZ::OI },
  { SystemZ::OY, SystemZ::O },
  { SystemZ::SHY, SystemZ::SH },
  { SystemZ::SLY, SystemZ::SL },
  { SystemZ::ST32Y, SystemZ::ST32 },
  { SystemZ::STC32Y, SystemZ::STC32 },
  { SystemZ::STCY, SystemZ::STC },
  { SystemZ::STDY, SystemZ::STD },
  { SystemZ::STEY, SystemZ::STE },
  { SystemZ::STH32Y, SystemZ::STH32 },
  { SystemZ::STHY, SystemZ::STH },
  { SystemZ::STY, SystemZ::ST },
  { SystemZ::SY, SystemZ::S },
  { SystemZ::XIY, SystemZ::XI },
  { SystemZ::XY, SystemZ::X },
}; // End of getDisp12OpcodeTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 35;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == getDisp12OpcodeTable[mid][0]) {
      break;
    }
    if (Opcode < getDisp12OpcodeTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  return getDisp12OpcodeTable[mid][1];
}

// getDisp20Opcode
int getDisp20Opcode(uint16_t Opcode) {
static const uint16_t getDisp20OpcodeTable[][2] = {
  { SystemZ::A, SystemZ::AY },
  { SystemZ::AH, SystemZ::AHY },
  { SystemZ::AL, SystemZ::ALY },
  { SystemZ::C, SystemZ::CY },
  { SystemZ::CH, SystemZ::CHY },
  { SystemZ::CL, SystemZ::CLY },
  { SystemZ::CLI, SystemZ::CLIY },
  { SystemZ::CS, SystemZ::CSY },
  { SystemZ::IC, SystemZ::ICY },
  { SystemZ::IC32, SystemZ::IC32Y },
  { SystemZ::L, SystemZ::LY },
  { SystemZ::LA, SystemZ::LAY },
  { SystemZ::LD, SystemZ::LDY },
  { SystemZ::LE, SystemZ::LEY },
  { SystemZ::LH, SystemZ::LHY },
  { SystemZ::MH, SystemZ::MHY },
  { SystemZ::MS, SystemZ::MSY },
  { SystemZ::MVI, SystemZ::MVIY },
  { SystemZ::N, SystemZ::NY },
  { SystemZ::NI, SystemZ::NIY },
  { SystemZ::O, SystemZ::OY },
  { SystemZ::OI, SystemZ::OIY },
  { SystemZ::S, SystemZ::SY },
  { SystemZ::SH, SystemZ::SHY },
  { SystemZ::SL, SystemZ::SLY },
  { SystemZ::ST, SystemZ::STY },
  { SystemZ::ST32, SystemZ::ST32Y },
  { SystemZ::STC, SystemZ::STCY },
  { SystemZ::STC32, SystemZ::STC32Y },
  { SystemZ::STD, SystemZ::STDY },
  { SystemZ::STE, SystemZ::STEY },
  { SystemZ::STH, SystemZ::STHY },
  { SystemZ::STH32, SystemZ::STH32Y },
  { SystemZ::X, SystemZ::XY },
  { SystemZ::XI, SystemZ::XIY },
}; // End of getDisp20OpcodeTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 35;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == getDisp20OpcodeTable[mid][0]) {
      break;
    }
    if (Opcode < getDisp20OpcodeTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  return getDisp20OpcodeTable[mid][1];
}

// getMemOpcode
int getMemOpcode(uint16_t Opcode) {
static const uint16_t getMemOpcodeTable[][2] = {
  { SystemZ::ADBR, SystemZ::ADB },
  { SystemZ::AEBR, SystemZ::AEB },
  { SystemZ::AGFR, SystemZ::AGF },
  { SystemZ::AGR, SystemZ::AG },
  { SystemZ::ALCGR, SystemZ::ALCG },
  { SystemZ::ALCR, SystemZ::ALC },
  { SystemZ::ALGFR, SystemZ::ALGF },
  { SystemZ::ALGR, SystemZ::ALG },
  { SystemZ::ALR, SystemZ::AL },
  { SystemZ::AR, SystemZ::A },
  { SystemZ::CDBR, SystemZ::CDB },
  { SystemZ::CEBR, SystemZ::CEB },
  { SystemZ::CGFR, SystemZ::CGF },
  { SystemZ::CGR, SystemZ::CG },
  { SystemZ::CLGFR, SystemZ::CLGF },
  { SystemZ::CLGR, SystemZ::CLG },
  { SystemZ::CLR, SystemZ::CL },
  { SystemZ::CR, SystemZ::C },
  { SystemZ::DDBR, SystemZ::DDB },
  { SystemZ::DEBR, SystemZ::DEB },
  { SystemZ::DLGR, SystemZ::DLG },
  { SystemZ::DLR, SystemZ::DL },
  { SystemZ::DSGFR, SystemZ::DSGF },
  { SystemZ::DSGR, SystemZ::DSG },
  { SystemZ::LBR, SystemZ::LB },
  { SystemZ::LDEBR, SystemZ::LDEB },
  { SystemZ::LDR, SystemZ::LD },
  { SystemZ::LER, SystemZ::LE },
  { SystemZ::LGBR, SystemZ::LGB },
  { SystemZ::LGFR, SystemZ::LGF },
  { SystemZ::LGHR, SystemZ::LGH },
  { SystemZ::LGR, SystemZ::LG },
  { SystemZ::LHR, SystemZ::LH },
  { SystemZ::LLCR, SystemZ::LLC },
  { SystemZ::LLGCR, SystemZ::LLGC },
  { SystemZ::LLGFR, SystemZ::LLGF },
  { SystemZ::LLGHR, SystemZ::LLGH },
  { SystemZ::LLHR, SystemZ::LLH },
  { SystemZ::LR, SystemZ::L },
  { SystemZ::LRVGR, SystemZ::LRVG },
  { SystemZ::LRVR, SystemZ::LRV },
  { SystemZ::LTGFR, SystemZ::LTGF },
  { SystemZ::LTGR, SystemZ::LTG },
  { SystemZ::LTR, SystemZ::LT },
  { SystemZ::LXDBR, SystemZ::LXDB },
  { SystemZ::LXEBR, SystemZ::LXEB },
  { SystemZ::MADBR, SystemZ::MADB },
  { SystemZ::MAEBR, SystemZ::MAEB },
  { SystemZ::MDBR, SystemZ::MDB },
  { SystemZ::MDEBR, SystemZ::MDEB },
  { SystemZ::MEEBR, SystemZ::MEEB },
  { SystemZ::MLGR, SystemZ::MLG },
  { SystemZ::MSDBR, SystemZ::MSDB },
  { SystemZ::MSEBR, SystemZ::MSEB },
  { SystemZ::MSGFR, SystemZ::MSGF },
  { SystemZ::MSGR, SystemZ::MSG },
  { SystemZ::MSR, SystemZ::MS },
  { SystemZ::MXDBR, SystemZ::MXDB },
  { SystemZ::NGR, SystemZ::NG },
  { SystemZ::NR, SystemZ::N },
  { SystemZ::OGR, SystemZ::OG },
  { SystemZ::OR, SystemZ::O },
  { SystemZ::SDBR, SystemZ::SDB },
  { SystemZ::SEBR, SystemZ::SEB },
  { SystemZ::SGFR, SystemZ::SGF },
  { SystemZ::SGR, SystemZ::SG },
  { SystemZ::SLBR, SystemZ::SLB },
  { SystemZ::SLGBR, SystemZ::SLBG },
  { SystemZ::SLGFR, SystemZ::SLGF },
  { SystemZ::SLGR, SystemZ::SLG },
  { SystemZ::SLR, SystemZ::SL },
  { SystemZ::SQDBR, SystemZ::SQDB },
  { SystemZ::SQEBR, SystemZ::SQEB },
  { SystemZ::SR, SystemZ::S },
  { SystemZ::XGR, SystemZ::XG },
  { SystemZ::XR, SystemZ::X },
}; // End of getMemOpcodeTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 76;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == getMemOpcodeTable[mid][0]) {
      break;
    }
    if (Opcode < getMemOpcodeTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  return getMemOpcodeTable[mid][1];
}

// getThreeOperandOpcode
int getThreeOperandOpcode(uint16_t Opcode) {
static const uint16_t getThreeOperandOpcodeTable[][2] = {
  { SystemZ::AGHI, SystemZ::AGHIK },
  { SystemZ::AGR, SystemZ::AGRK },
  { SystemZ::AHI, SystemZ::AHIK },
  { SystemZ::ALGR, SystemZ::ALGRK },
  { SystemZ::ALR, SystemZ::ALRK },
  { SystemZ::AR, SystemZ::ARK },
  { SystemZ::NGR, SystemZ::NGRK },
  { SystemZ::NR, SystemZ::NRK },
  { SystemZ::OGR, SystemZ::OGRK },
  { SystemZ::OR, SystemZ::ORK },
  { SystemZ::SGR, SystemZ::SGRK },
  { SystemZ::SLGR, SystemZ::SLGRK },
  { SystemZ::SLL, SystemZ::SLLK },
  { SystemZ::SLR, SystemZ::SLRK },
  { SystemZ::SR, SystemZ::SRK },
  { SystemZ::SRA, SystemZ::SRAK },
  { SystemZ::SRL, SystemZ::SRLK },
  { SystemZ::XGR, SystemZ::XGRK },
  { SystemZ::XR, SystemZ::XRK },
}; // End of getThreeOperandOpcodeTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 19;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == getThreeOperandOpcodeTable[mid][0]) {
      break;
    }
    if (Opcode < getThreeOperandOpcodeTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  return getThreeOperandOpcodeTable[mid][1];
}

} // End SystemZ namespace
} // End llvm namespace
#endif // GET_INSTRMAP_INFO

