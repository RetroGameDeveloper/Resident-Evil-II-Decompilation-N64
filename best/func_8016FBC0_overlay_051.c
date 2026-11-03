/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

extern int D_800E10F8;
extern int D_800E1100;
extern short D_800E1136;
extern short D_800E10FA;
extern short D_800E1102;
s32 func_80032D44_ovl_01();
s32 func_80083800_ovl_01();
extern char D_800E10D0[];

void func_8016FBC0_overlay_051(void *arg0, u16 arg1) {
    u16 sp10;                                       /* compiler-managed */
    s16 sp12;
    u16 sp14;                                       /* compiler-managed */
    s16 temp_v0;
    s16 temp_v1;

    sp10 = arg1;
    sp12 = 0;
    sp14 = 0;
    func_80083800_ovl_01(M2C_FIELD(arg0, s16 *, 0x66), &sp10, &sp10);
    temp_v0 = sp10 + M2C_FIELD(arg0, u16 *, 0x2A);
    sp10 = temp_v0;
    D_800E10F8 = (s32) temp_v0;
    temp_v1 = sp14 + M2C_FIELD(arg0, u16 *, 0x32);
    D_800E1100 = (s32) temp_v1;
    sp14 = temp_v1;
    D_800E1136 = (s16) (func_80032D44_ovl_01(D_800E10FA, D_800E1102, (s16) M2C_FIELD(arg0, u16 *, 0x2A), (s16) M2C_FIELD(arg0, u16 *, 0x32)) - 0x32);
}
