/* context.h for Resident Evil II: shared by every function. Agents grow it with edit_context:
 * add a prototype or struct the moment you work one out, so the next function benefits. */

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long long s64;
typedef unsigned long long u64;
typedef float f32;
typedef double f64;
typedef volatile u8 vu8;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef volatile s32 vs32;
typedef int s32_bool;

#define NULL ((void *)0)
#define TRUE 1
#define FALSE 0
#define ARRAY_COUNT(arr) (s32)(sizeof(arr) / sizeof(arr[0]))

s32 func_80036764_ovl_01_510(void *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_80036764_ovl_01_510_24(void *arg0, s32 arg1, s32 arg2, s32 arg3);

typedef struct S_func_80036764_ovl_01_510_arg0 {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[0x1A0];
    s32 unk_1A4;
    u8 pad_1A8[0x40];
    u8 unk_1E8;
    s8 unk_1E9;
    s8 unk_1EA;
    u8 pad_1EB[0x2E];
    s32 unk_218;
    u8 pad_21C[0x98];
    s32 unk_2B4;
    u8 pad_2B8[0x16];
    u16 unk_66;
    u8 pad_68[0x8];
    s32 unk_70;
    u8 pad_74[0x160];
    s16 unk_1D8[3];
    u8 pad_1DE[2];
    u16 unk_2A;
    u16 unk_2E;
    u16 unk_32;
} S_func_80036764_ovl_01_510_arg0;
s32 func_80162CE0_ovl_15(void *arg0);
s32 func_8016352C_ovl_15(s32 arg0, s16 arg1, s32 arg2);
s32 func_801635F4_ovl_15(s32 arg0, s16 arg1, s32 arg2);
void func_80162F38_ovl_15(void *arg0);
s32 func_80162BAC_ovl_17(void *arg0, void *arg1, void *arg2);

/* ovl_01: 2-arg getter used by the func_800AC828/848/868/888 wrappers
 * (called as f(p, p + 0xC4/0xD6/0xE8/0xFA), result & 0xFFFF). */
s32 func_800AC334_ovl_01(s32 arg0, s32 arg1);

/* main-segment list builder (func_80009640 calls it); returns 0 or an error */
s32 func_800099D0(u8 *arg0, u16 *arg1, s32 arg2, s32 *arg3, u8 arg4, s32 *arg5, s32 *arg6);

/* main-segment string/formatter helpers */
s32 func_8000F050(void *arg0, void *arg1, void *arg2, void *arg3);
s32 func_8000A2D0(void *arg0);
s32 func_8000A394(void *arg0, u16 *arg1, s32 arg2, s32 arg3);
extern f64 D_80012100;
extern s32 D_800128C8;
extern f64 D_80011AC8;
extern f64 D_80011AD0;
extern f64 D_80011AD8;
extern f64 D_80011AE0;
extern f64 D_80011AE8;
extern f64 D_80011AF0;
extern f64 D_80011AF8;
extern f32 D_80011B00;
extern f64 D_80011B08;
extern f64 D_80011B10;
extern f32 D_80011B20;
s32 func_8000D3D0(u8 *arg0, u8 *arg1, ...);

typedef struct S_func_80162C04_ovl_36_arg0 { u8 unk_00[5]; u8 unk_05; u8 unk_06; u8 unk_07[0x1ED]; u16 unk_1F4; u8 unk_1F6[0x12]; struct S_func_80162C04_ovl_36_arg0_208 *unk_208; u8 unk_20C[0x28]; struct S_func_80162C04_ovl_36_arg0_234 *unk_234; u8 unk_238[0x80]; u8 unk_2B8; } S_func_80162C04_ovl_36_arg0;
typedef struct S_func_80162C04_ovl_36_arg0_208 { u8 unk_00[4]; s16 unk_04; s16 unk_06; u8 unk_08[6]; u8 unk_0E; } S_func_80162C04_ovl_36_arg0_208;
typedef struct S_func_80162C04_ovl_36_arg0_234 { u8 unk_00[0x124]; u16 unk_124; u8 unk_126[2]; u16 unk_128; } S_func_80162C04_ovl_36_arg0_234;
s32 func_80031C44_ovl_01_868(void);
typedef struct S_func_80162BC0_ovl_13_arg0 { u8 unk_00[0xD]; u8 unk_0D; u8 unk_0E[0x1E]; s32 unk_2C; u8 unk_30[0x1B0]; s16 unk_1E0; u8 unk_1E2[0x12]; u16 unk_1F4; u8 unk_1F6[0x96]; s32 unk_28C; u8 unk_290[0x28]; u8 unk_2B8; u8 unk_2B9; u8 unk_2BA; s8 unk_2BB; s8 unk_2BC; s8 unk_2BD; u8 unk_2BE[6]; s32 unk_2C4; u8 unk_2C8[5]; } S_func_80162BC0_ovl_13_arg0;

typedef struct S_func_80163254_ovl_33_arg0 { u8 unk_00[4]; s32 unk_04; u8 unk_08[0x26]; s16 unk_2E; u8 unk_30[2]; u16 unk_32; u8 unk_34[0x30]; u16 unk_64; u8 unk_66[0x182]; s32 unk_1E8; u8 unk_1EC[8]; s16 unk_1F4; u16 unk_1F6; u8 unk_1F8[0xE]; s8 unk_206; } S_func_80163254_ovl_33_arg0;

typedef struct S_func_80162984_ovl_35_arg0 { u8 unk_00[6]; s16 unk_06; u8 unk_08[0x1E0]; s32 unk_1E8; u8 unk_1EC[8]; s16 unk_1F4; u8 unk_1F6[0x10]; s8 unk_206; s8 unk_207; u8 unk_208[0x24]; s32 unk_22C; u8 unk_230[0x2BD-0x230]; u8 unk_2BD; } S_func_80162984_ovl_35_arg0;

/* func_80166480_ovl_32 is a function; the old extern s32[] declaration was wrong. */

/* ovl_21 object used by func_801622B8_ovl_21 (state machine at 0x6; 0x1E0 is a
 * u16 timer whose low byte pair is read both signed (compare) and unsigned
 * (increment), modelled as a volatile/signed union so the compiler emits the
 * ROM's separate lh/lhu loads). */
typedef struct S_func_801622B8_ovl_21_arg0 {
    /* 0x000 */ u8 unk_00[4];
    /* 0x004 */ union { s32 unk_04; struct { u16 unk_04h; u8 unk_06; u8 unk_07; } unk_04b; } u04;
    /* 0x008 */ u8 unk_08[0x20];
    /* 0x028 */ s32 unk_28;
    /* 0x02C */ union { s32 unk_2C; struct { s16 unk_2Ch; s16 unk_2E; } unk_2Cw; } u2C;
    /* 0x030 */ union { s32 unk_30; struct { s16 unk_30h; s16 unk_32; } unk_30w; } u30;
    /* 0x034 */ u8 unk_34[0x32];
    /* 0x066 */ u16 unk_66;
    /* 0x068 */ u8 unk_68[8];
    /* 0x070 */ s32 unk_70;
    /* 0x074 */ u8 unk_74[0x164];
    /* 0x1D8 */ s16 unk_1D8[3];
    /* 0x1DE */ u8 unk_1DE[2];
    /* 0x1E0 */ union { volatile u16 unk_1E0; s16 unk_1E0s; } u1E0;
    /* 0x1E2 */ u8 unk_1E2[0xD2];
    /* 0x2B4 */ u16 unk_2B4;
    /* 0x2B6 */ s16 unk_2B6;
    /* 0x2B8 */ s16 unk_2B8;
    /* 0x2BA */ u16 unk_2BA;
} S_func_801622B8_ovl_21_arg0;

/* ---- main segment: 64-bit integer formatting (printf %d/%i/%u/%x/%X/%o) ----
 * func_80006100/80010EC0 are the 64-bit divide/remainder helpers: both take
 * (value_hi, value_lo) in a0/a1 and (divisor_hi, divisor_lo) in a2/a3 and
 * return a 64-bit result in v0 (high) / v1 (low). func_80010584 writes
 * out[0..1]=quotient, out[2..3]=remainder; its u64 value sits in a2/a3
 * (a1 is ABI padding) and the u64 divisor goes on the stack. */
u64 func_80006100(u64 value, u64 divisor);
u64 func_80010EC0(u32 value_hi, u32 value_lo, u32 divisor_hi, u32 divisor_lo);
void *func_80010584(u64 *out, u64 value, u64 divisor);
extern u8 D_80013860[];
extern u8 D_80013874[];

typedef union S_qword {
    s64 q;
    u64 uq;
    f64 d;
    struct { s32 hi; s32 lo; } w;
} S_qword;

/* the number-formatting working object (func_8000F5C0/8000FA80/8000FF58/80010C70):
 * unk_00 is a 64-bit value; reading it as two s32 words avoids the compiler
 * merging the pair. */
typedef struct S_func_8000F5C0_arg0 {
    /* 0x00 */ S_qword unk_00;
    /* 0x08 */ u8 *unk_08;
    /* 0x0C */ s32 unk_0C;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1C */ s32 unk_1C;
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ s32 unk_28;
    /* 0x2C */ s32 unk_2C;
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ u8 unk_34;
} S_func_8000F5C0_arg0;

/* func_8002655C initialization globals and callees */
void func_80042A54_ovl_01(void);
void func_8004CA48_ovl_01(void);
void func_80004A20(void);
void func_800278AC_ovl_01(void);
void func_800750E0_ovl_01(s32, s32);
void func_80075F84_ovl_01(void);
void func_8004C97C_ovl_01(void);
void func_800850D4_ovl_01(void);
void func_8004CD84_ovl_01(s32, s32 *);
extern s8 D_80119E13_ovl_01;
extern s8 D_80119E14_ovl_01;

typedef struct S_func_80162870_ovl_23_arg0 {
    u32 unk_00;           // 0x000
    s32 unk_04;           // 0x004
    u8 pad_08[0x20];      // 0x008 - 0x027
    s32 unk_28;           // 0x028
    u8 unk_2C[4];         // 0x02C - 0x02F
    s32 unk_30;           // 0x030
    u8 pad_34[0x176];     // 0x034 - 0x1A9
    u16 unk_1AA;          // 0x1AA
    u8 pad_1AC[0xC];      // 0x1AC - 0x1B7
    s32 unk_1B8;          // 0x1B8
    s32 unk_1BC;          // 0x1BC
    s32 unk_1C0;          // 0x1C0
    s32 unk_1C4;          // 0x1C4
    s32 unk_1C8;          // 0x1C8
    s32 unk_1CC;          // 0x1CC
    s32 unk_1D0;          // 0x1D0
    s32 unk_1D4;          // 0x1D4
    s16 unk_1D8;          // 0x1D8
    s16 unk_1DA;          // 0x1DA
    s16 unk_1DC;          // 0x1DC
    u8 pad_1DE[0xA];      // 0x1DE - 0x1E7
    s32 unk_1E8;          // 0x1E8
    u8 pad_1EC[0x6];      // 0x1EC - 0x1F1
    s16 unk_1F2;          // 0x1F2
    s16 unk_1F4;          // 0x1F4
    s16 unk_1F6;          // 0x1F6
    u8 pad_1F8[0x10];     // 0x1F8 - 0x207
    u8 unk_208[0x10];     // 0x208 - 0x217
    u8 pad_218[0x1C];     // 0x218 - 0x233
    void *unk_234;        // 0x234
    u8 pad_238[0x24];     // 0x238 - 0x25B
    u8 unk_25C;           // 0x25C
    u8 unk_25D;           // 0x25D
    u8 pad_25E[0x6];      // 0x25E - 0x263
    u16 unk_264;          // 0x264
    u8 pad_266[0x2];      // 0x266 - 0x267
    u16 unk_268;          // 0x268
    u8 pad_26A[0x2];      // 0x26A - 0x26B
    u16 unk_26C;          // 0x26C
    u8 unk_26E;           // 0x26E
    u8 unk_26F;           // 0x26F
    u8 pad_270[0x30];     // 0x270 - 0x29F
    s32 unk_2A0;          // 0x2A0
    u8 pad_2A4[0x11];     // 0x2A4 - 0x2B4
    u8 unk_2B5;           // 0x2B5
    u8 unk_2B6;           // 0x2B6
    u8 unk_2B7;           // 0x2B7
    u16 unk_2B8;          // 0x2B8
    u16 unk_2BA;          // 0x2BA
    u8 unk_2BB;           // 0x2BB
    s32 unk_2BC;          // 0x2BC
    u8 unk_2C0[4];        // 0x2C0 - 0x2C3
    u32 unk_2C4_ptr;      // 0x2C4 - 0x2C7
    s16 unk_2C8;          // 0x2C8 - 0x2C9
    s16 unk_2CA;          // 0x2CA - 0x2CB
    u8 unk_2CC[4];        // 0x2CC - 0x2CF
    s16 unk_2D0;          // 0x2D0 - 0x2D1
    u8 pad_2D2[0x4];      // 0x2D2 - 0x2D5
    s16 unk_2D6;          // 0x2D6 - 0x2D7
    s32 unk_2D8;          // 0x2D8 - 0x2DB
} S_func_80162870_ovl_23_arg0;
s32 func_80162998_ovl_23(S_func_80162870_ovl_23_arg0 *, s32, s32, s32, s32, s32);

typedef struct S_func_8016B5C8_ovl_31_arg0 { u8 unk_00[0x2C3]; u8 unk_2C3; u8 unk_2C4; u8 unk_2C5; u16 unk_2C6; s16 unk_2C8; s8 unk_2CA; s8 unk_2CB; u8 unk_2CC[4]; u8 unk_2D0; u8 unk_2D1; } S_func_8016B5C8_ovl_31_arg0;

/* func_800307F8_ovl_01 arg1 (also matches the two follower functions in the
 * same claim block): unk0 = s32 array indexed by the loop counter;
 * unk28/unk2C = function pointers called as (s32, void*, s32, s32);
 * arg1+0x28 is passed as the call's second argument. */
typedef struct S_func_800307F8_ovl_01_arg1 {
    s32 *unk0;
    s32 unk04;
    s32 unk08;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    u8 unk_1C[0xC];
    s32 (*unk28)(s32, void *, s32, s32);
    s32 (*unk2C)(s32, void *, s32, s32);
} S_func_800307F8_ovl_01_arg1;
typedef struct S_func_8016B5C8_ovl_31_arg1_120 { u16 unk_00; u8 unk_02[0xE]; s16 unk_10; } S_func_8016B5C8_ovl_31_arg1_120;
typedef struct S_func_8016B5C8_ovl_31_arg1 { u8 unk_00[0x120]; S_func_8016B5C8_ovl_31_arg1_120 *unk_120; } S_func_8016B5C8_ovl_31_arg1;

typedef struct S_func_80009CAC_arg1 { u8 unk_00[8]; s32 unk_08; s32 unk_0C; s32 unk_10; s32 unk_14; u16 unk_18; u8 unk_1A; u8 unk_1B; } S_func_80009CAC_arg1;
typedef struct S_func_80009CAC_arg2 { u32 unk_00; s32 unk_04; s32 unk_08; s32 unk_0C; s32 unk_10; s32 unk_14; s16 unk_18; s8 unk_1A; s8 unk_1B; u16 unk_1C; u16 unk_1E; } S_func_80009CAC_arg2;

/* main-segment queue used by func_8000CB60 (push, matched) and func_80007450:
 * +0x0 lock pointer (a non-zero *lock triggers a notify), +0x4 event/mutex
 * object passed by address to func_80000DD4, +0x8 count, +0xC index,
 * +0x10 size, +0x14 s32* data. */
typedef struct S_func_8000CB60_queue {
    s32 *lock;
    u8 pad4[4];
    s32 count;
    s32 index;
    s32 size;
    s32 *data;
} S_func_8000CB60_queue;

typedef struct S_func_80166934_ovl_32_entry { s8 unk_00; s8 unk_01; s8 unk_02; s8 unk_03; s16 unk_04; s16 unk_06; s16 unk_08; s16 unk_0A; u8 unk_0C[8]; u8 unk_14; u8 unk_15; u8 unk_16; u8 unk_17; u8 unk_18; u8 unk_19[7]; } S_func_80166934_ovl_32_entry;
/* func_8003420C_ovl_01_18(void *arg0, s32 dx, s32 dy, s32 id) - defined below;
 * signature kept out of the header because args are raw 32-bit values. */

/* ---- ovl_01 keyframe/entity tables (recovered in func_80088238/800882B8/80088528/80087A58) ---- */
typedef struct S_8002A060_ovl_01 { s32 unk_00; void *unk_04; s32 unk_08; } S_8002A060_ovl_01;            /* stride 0x0C */
typedef struct S_80029FE0_ovl_01 { s32 unk_00; void *unk_04; } S_80029FE0_ovl_01;                        /* stride 0x08, unk_00 = kind (2/3) */
typedef struct S_8002A000_ovl_01 { s32 unk_00; s32 unk_04; s32 unk_08; s32 unk_0C; s32 unk_10; s32 unk_14; } S_8002A000_ovl_01; /* stride 0x18 */
typedef struct S_80087A58_ovl_01_arg0 { s32 unk_00; s32 *unk_04; s32 unk_08; } S_80087A58_ovl_01_arg0;  /* index, result slot, handle */
typedef struct S_80088528_ovl_01_arg0 { u16 unk_00; s16 unk_02; s32 unk_04; } S_80088528_ovl_01_arg0;

/* bit-array helpers over a u32 array (bit = (0x80000000U >> (n & 0x1F)), word n >> 5) */
void func_80083788_ovl_01(s32 *bits, u32 n);   /* set   */
void func_800837B0_ovl_01(s32 *bits, u32 n);   /* clear */

typedef struct S_D_80129E34 { s32 unk_00; s32 unk_04; s32 unk_08; s8 unk_0C; u8 unk_0D[0x3F]; s32 unk_4C; s32 unk_50; s32 unk_54; s32 unk_58; s32 unk_5C; s32 unk_60; u8 unk_64; u8 unk_65; } S_D_80129E34;

extern u32 D_8016DEA8_ovl_11[];

extern s32 D_8010B670_ovl_01;
extern void *D_80185418_ovl_02;
extern s32 D_80186C18_ovl_02;
s32 func_8004D168_ovl_01(s32, s32);
s32 func_8004D060_ovl_01(s32);
void func_8017DD30_ovl_02(s32);
void func_8017D070_ovl_02(void);

typedef struct S_func_801661BC_ovl_28_arg0 { u8 pad0[4]; s32 unk_04; u8 unk_05; u8 unk_06; u8 pad07[0x21]; s16 unk_2A; u8 pad2C[6]; s16 unk_32; u8 pad34[0x1BE]; s16 unk_1F2; u8 pad1F4[0x40]; void *unk_234; u8 pad238[0x30]; u8 unk_268[6]; u8 unk_26E; u8 pad26F[0x46]; s32 unk_298; u8 pad29C[0x18]; u8 unk_2B4; u8 unk_2B5; u16 unk_2B6; u16 unk_2B8; u8 pad2BA[2]; u8 unk_2BC; s8 unk_2BD; u8 pad2BE[5]; u8 unk_2C3; u8 pad2C4[4]; u8 unk_2C8; } S_func_801661BC_ovl_28_arg0;
typedef struct S_func_801661BC_ovl_28_sub { u8 pad[0x4E]; s16 unk_4E; u8 pad50[2]; s16 unk_52; u8 pad54[2]; s16 unk_56; } S_func_801661BC_ovl_28_sub;

typedef struct S_func_8016333C_ovl_22_arg0 { u8 unk_00[0x28]; u8 unk_28[2]; s16 unk_2A; u8 unk_2C[6]; s16 unk_32; u8 unk_34[0x228]; } S_func_8016333C_ovl_22_arg0;

extern u8 D_80119DF0_ovl_01;

/* Circular doubly-linked list node used by func_8000DD70 (remove entry,
 * matched): next/prev at 0x0/0x4, a 64-bit counter at 0x10 (hi at 0x10,
 * lo at 0x14). D_80012960 (declared s32* in matched sources) is the head. */
typedef struct S_ListNode8000DD70 {
    struct S_ListNode8000DD70 *next;
    struct S_ListNode8000DD70 *prev;
    s32 unk08;
    s32 unk0C;
    u32 hi;
    u32 lo;
} S_ListNode8000DD70;

/* volatile dispatch table pointer typing forces split-address setup for aliased function tables. */

typedef struct O{u8 p[0x2c0];}O;
