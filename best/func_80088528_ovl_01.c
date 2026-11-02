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

extern void *D_8012BA80_ovl_01;

void func_80088528_ovl_01(void *arg0, s32 arg1) {
    void *temp_a0;

    D_8012BA80_ovl_01 = arg0;
    M2C_FIELD(arg0, s16 *, 0) = 1;
    M2C_FIELD(arg0, s16 *, 2) = 0;
    M2C_FIELD(arg0, s32 *, 4) = (s32) (arg1 - 0x20);
    temp_a0 = arg0 + arg1;
    M2C_FIELD(temp_a0, s16 *, -0x10) = 8;
    M2C_FIELD(temp_a0, s16 *, -0xE) = 0;
    M2C_FIELD(temp_a0, s32 *, -0xC) = 0;
}
