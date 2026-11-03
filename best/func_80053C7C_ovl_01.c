/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2 -mcpu=r4600, tried by autopilot */
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

extern void *D_8010D8E0_ovl_01;

void func_80053C7C_ovl_01(s8 arg0) {
    M2C_FIELD((D_8010D8E0_ovl_01 + (M2C_FIELD(D_8010D8E0_ovl_01, u8 *, 0) + (M2C_FIELD(D_8010D8E0_ovl_01, u8 *, 1) * 0x1E))), s8 *, 4) = arg0;
}
