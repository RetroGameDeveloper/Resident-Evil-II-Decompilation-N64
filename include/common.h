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

/* ovl_01 allocator entry at 0x80032020: physically the second function inside
 * the old func_80031C44_ovl_01 blob (split out). Takes an id in a0, returns an
 * object or NULL; called as func(0x3B) by func_80162EB4_ovl_36. */
s32 func_80032020_ovl_01(s32 arg0);

s32 func_80036764_ovl_01_510(void *arg0, s32 arg1);
/* ovl_28 state machine: (actor, some pointer computed as *(s32*)(actor+0x234)+0x1A70) */
void func_80168ABC_ovl_28(void *arg0, s32 arg1);
s32 func_80036764_ovl_01_510_24(void *arg0, s32 arg1, s32 arg2, s32 arg3);
/* main-segment 3-arg helper called as D_80036F94(actor, actor->2C4 + 0x28, 0x40)
 * by func_80166834_ovl_14; return value unused there. */
void D_80036F94(void *arg0, s32 arg1, s32 arg2);
s32 func_80162CE0_ovl_15(void *arg0);
s32 func_8016352C_ovl_15(s32 arg0, s16 arg1, s32 arg2);
s32 func_801635F4_ovl_15(s32 arg0, s16 arg1, s32 arg2);
void func_80162F38_ovl_15(void *arg0);
s32 func_80162BAC_ovl_17(void *arg0, void *arg1, void *arg2);

/* ovl_15 actor state machine helpers (func_801644B0_ovl_15):
 * func_8016528C_ovl_15 is called after setting +0x26F bit 0x80; return unused. */
void func_8016528C_ovl_15(void *arg0);
s32 func_80036C98_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);

/* ovl_14 actor helper func_80161F80: first call compares a 16-byte stack
 * descriptor (s32[4], only [0]/[2] filled from +0x2D0/+0x2D4) against
 * arg0+0x28; second call is really 3 args (a3 is left untouched), hence the
 * 3-arg function-pointer cast at the call site. */
s32 func_80036764_ovl_01_2FC(void *arg0, void *arg1, s32 arg2);
void D_800371D4(void *arg0, s32 arg1, s32 arg2);

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
u64 func_80010EC0(u64 value, u64 divisor);
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

typedef struct S_func_80162870_ovl_23_arg0 { u8 unk_00[4]; s32 unk_04; u8 unk_08[0x20]; s32 unk_28; u8 unk_2C[4]; s32 unk_30; u8 unk_34[0x32]; s16 unk_66; u8 unk_68[0x13C]; s32 unk_1A4; u8 unk_1A8[4]; s32 unk_1AC; u8 unk_1B0[0x30]; u16 unk_1E0; u8 unk_1E2[2]; s16 unk_1E4; u8 unk_1E6[2]; s32 unk_1E8; u8 unk_1EC[8]; u16 unk_1F4; s16 unk_1F6; u8 unk_1F8[0xE]; s8 unk_206; u8 unk_207[0x11]; s32 unk_218; u8 unk_21C[8]; s32 unk_224; s32 unk_228; u8 unk_22C[8]; void *unk_234; u8 unk_238[0x18]; void *unk_250; u8 unk_254[8]; u8 unk_25C; u8 unk_25D[0xF]; u16 unk_26C; u8 unk_26E; u8 unk_26F; u8 unk_270[0x48]; u16 unk_2B8; u8 unk_2BA; u8 unk_2BB; s32 unk_2BC; u8 unk_2C0[4]; u8 unk_2C4; u8 unk_2C5[3]; s16 unk_2C8; s16 unk_2CA; u8 unk_2CC[4]; s16 unk_2D0; } S_func_80162870_ovl_23_arg0;
s32 func_80162998_ovl_23(S_func_80162870_ovl_23_arg0 *, s32, s32, s32, s32, s32);

typedef struct S_func_8016B5C8_ovl_31_arg0 { u8 unk_00[0x2C3]; u8 unk_2C3; u8 unk_2C4; u8 unk_2C5; u16 unk_2C6; s16 unk_2C8; s8 unk_2CA; s8 unk_2CB; u8 unk_2CC[4]; u8 unk_2D0; u8 unk_2D1; } S_func_8016B5C8_ovl_31_arg0;
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
s32 func_8003420C_ovl_01_18(void *, s16, s16, u32);

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

/* ovl_01 helper at 0x80065658, split out of func_80065400_ovl_01:
 * returns (func_80033634_ovl_01() % count) or 0xFF when count == 0. */
s32 func_80065658_ovl_01(void);

/* ovl_26 actor helper (func_80165460): 3-arg callees, arg0 is the actor. */
void func_80164E08_ovl_26(void *arg0, s32 arg1, s32 arg2);
void func_80165290_ovl_26(void *arg0, s32 arg1, s32 arg2);
/* ovl_26 actor helper called at the end of func_801634E4 (sets state 0). */
void func_80166984_ovl_26(void *arg0);

/* ovl_17 state dispatcher (func_80165658): table at ROM 0x80167E9C
 * (func_80167E3C_ovl_11+0x60); volatile keeps KMC 2.7.2 from folding the
 * (idx-1)*4 offset into the %lo of the load address. */
typedef void (*S_fn_ovl_17_dispatch)(void *, s32, s32);
extern volatile S_fn_ovl_17_dispatch D_80167E9C_ovl_17[];
void func_80035AAC_ovl_01_108(void *);

/* ovl_17: func_80166E50 walks the D_800E1008 singly linked list (head stored
 * in that global, next pointer is the word at the node itself, entries are
 * compared by their address against actor+0x2C4, and node+0xC is a u32 rank).
 * The actor's +0x2C field is negated and divided by 1800 (0x91A2B3C5 magic,
 * shift 10) to get the threshold. func_80066804_ovl_01(s32 base, s16 arg1,
 * s32 mask, s32 flags) is the state helper called with arg0+0x28. */
s32 func_80066804_ovl_01(s32 arg0, s16 arg1, s32 arg2, s32 arg3);

/* ovl_17 helper at 0x80165FB8 and callees; this range matches only with -mcpu=r4600
 * (r4600 scheduler prologue: sw s1, addu s1, sw ra, sw s2). */
s32 func_80033634_ovl_01(void);
void func_80164E94_ovl_12(void *, s32, s32);
s32 func_80166FBC_ovl_17(void *arg0, s32 arg1, s32 arg2);
s32 func_801661C8_ovl_17(void *arg0);
s32 func_80167608_ovl_17(void *arg0, s32 arg1, s32 arg2);
/* ovl_17 actor dispatch helpers used by func_80164890/80164AD8 (3-arg, actor first). */
void func_801620C8_ovl_17(void *arg0, s32 arg1, s32 arg2);
void func_8016477C_ovl_17(void *arg0, s32 arg1, s32 arg2);
s32 func_8016587C_ovl_17(void *arg0, s32 arg1, s32 arg2);

/* ovl_35 (0x80165D20): needs -mcpu=r4600; see the 0x80165D20-0x80165D78 range suggestion. */
s32 func_80165B50_ovl_35(s32 arg0, s32 arg1, s16 arg2, s32 arg3);
s32 func_80165E20_ovl_35(s32 arg0, void *arg1);

/* ovl_12 actor per-frame update helper (func_801655BC and neighbours). */
void func_80164FB0_ovl_12(void *arg0, s32 arg1, s32 arg2);

/* ovl_12 helpers called by func_801657D8 (which matches only with -mcpu=r4600). */
void func_80166900_ovl_12(void *arg0, s32 arg1, s32 arg2);
void func_80164CDC_ovl_12(void *arg0, s32 arg1, s32 arg2);
/* ovl_12 actor table at *(actor+0x234): stride 0x178, +0x60 is a state word. */
typedef struct S_func_801657D8_ovl_12_entry { u8 pad[0x60]; s32 unk_60; u8 rest[0x114]; } S_func_801657D8_ovl_12_entry;

/* ovl_33 actor state machine func_80166E18: +0x234 pointer to a status object
 * (its +0x5E0 is a 32-bit flag word), +0x2BF state byte, +0x2C0 16-bit timer. */
typedef struct S_func_80166E18_ovl_33_arg0 {
    u8 unk_00[0x234];
    s32 *unk_234;
    u8 unk_238[0x2BF - 0x238];
    u8 unk_2BF;
    u16 unk_2C0;
} S_func_80166E18_ovl_33_arg0;

/* ---- ovl_23 func_80163030 (global camera/actor sync) ----
 * func_80032D44_ovl_01: angle helper, called here as
 *   (g->2A, g->32, p->2A, p->32) with s16 args/return.
 * D_800E10D0_ovl_01: the words at +0x28/+0x30 are stored as full s32 but the
 *   high half (+0x2A/+0x32) is later read back signed, so model them as
 *   unions (overlapping w / h.hi). +0x66 is s16. (The ROM keeps this base in
 *   a callee-saved reg and addresses it as offset(base); see func_80163030.) */
s32 func_80032D44_ovl_01(s16 arg0, s16 arg1, s16 arg2, s16 arg3);

typedef struct S_D_800E10D0_ovl_01 {
    u8 unk_00[0x28];
    union { s32 w; struct { u16 lo; s16 hi; } h; } unk_28;
    u8 unk_2C[4];
    union { s32 w; struct { u16 lo; s16 hi; } h; } unk_30;
    u8 unk_34[0x32];
    s16 unk_66;
} S_D_800E10D0_ovl_01;

/* ovl_21 motion/command dispatcher: builds (arg1<<24)|(arg2<<16)|arg3 and
 * hands it to the actor's +0x234 object (func_80163664_ovl_21). */
void func_80163664_ovl_21(void *arg0, s32 arg1, s32 arg2, s32 arg3);

/* ovl_26 func_80165640: the target at 0x80033678 is its own actor-update routine
 * (reads actor+0x214 -> word, tests 0x08000000, calls func_80077D48), shown by
 * the disassembler as "jal D_80033678" and wrongly lumped into
 * func_80033634_ovl_01. func_800334F8 takes (actor, a, b, 0) here. */
void D_80033678(void *arg0);

/* ovl_17 dispatcher helper (0x80164BB4): called with 3 args by func_80164F0C
 * though its body only uses arg0. func_80164F0C needs -mcpu=r4600. */
void func_80164BB4_ovl_17(void *arg0, s32 arg1, s32 arg2);

/* 8-byte table at 0x80166690 (func_80166684_ovl_33+0xC), indexed by
 * (func_80033634_ovl_01() & 7) in func_801634F0/func_80163584. */
extern u8 D_80166690_ovl_35[];

/* ovl_12 func_80163584 actor: +0x6 is an s16 timer/state word whose high byte
 * (+0x7) is also read/written as the "initialized" flag byte, so they overlap. */
typedef struct S_func_80163584_ovl_12_arg0 {
    u8 unk_00[0x5];
    u8 unk_05;
    union { s16 w; struct { u8 lo; u8 hi; } b; } unk_06;
    u8 unk_08[0x1E0];
    s32 unk_1E8;
    u8 unk_1EC[0x8];
    u16 unk_1F4;
} S_func_80163584_ovl_12_arg0;
/* 8-byte random table, indexed by func_80033634_ovl_01() & 7 in func_80163584. */
extern u8 D_80166C08_ovl_12[];

/* ovl_01 helper split out of the old func_8006A81C blob at 0x8006A8B0:
 * takes (index, pointer) and returns a signed 16-bit coordinate sum.
 * Called by func_80166CD8/80166D98/80162144/801650FC. */
s32 func_8006A8B0_ovl_01(s32 idx, void *p);
