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

s32 func_8004F57C_ovl_01(void *, void *);           /* extern */

void func_8004F4AC_ovl_01(void *arg0, s32 *arg1, s32 arg2, s32 arg3) {
    s32 temp_a0;
    s32 temp_v0;
    s32 var_v1;
    void *temp_t0;

    temp_t0 = arg0 + 0x120;
    temp_a0 = M2C_FIELD(arg0, s32 *, 0x28);
    temp_v0 = *arg1 - M2C_FIELD(temp_t0, s16 *, 0x10);
    if (arg2 >= 0) {
        var_v1 = temp_v0 - arg3;
    } else {
        var_v1 = temp_v0 + arg3;
    }
    M2C_FIELD(arg0, s32 *, 0x28) = var_v1;
    M2C_FIELD(arg0, s32 *, 0x120) = (s32) (M2C_FIELD(arg0, s32 *, 0x120) + (var_v1 - temp_a0));
    M2C_FIELD(arg0, s32 *, 0x280) = func_8004F57C_ovl_01(arg0, temp_t0);
}
