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

s32 func_8017BE48_ovl_02(s32);                      /* extern */
s32 func_8017F63C_ovl_02();                         /* extern */
s32 func_8017F720_ovl_02();                         /* extern */
M2C_UNK func_80180364_ovl_02(void *, s32, s32, s32, s32); /* extern */

void func_80180228_ovl_02(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 var_a3;
    s32 var_a3_2;

    temp_s0 = func_8017F63C_ovl_02();
    if (arg2 != 0) {
        var_a3 = 0;
        if (temp_s0 != 0) {
            var_a3 = func_8017BE48_ovl_02(arg2);
        }
    } else {
        var_a3 = 0;
    }
    func_80180364_ovl_02(arg0, arg2, temp_s0, var_a3, arg6);
    if (arg4 != 0) {
        M2C_FIELD(arg1, s32 *, 0) = func_8017F720_ovl_02();
    }
    temp_s0_2 = func_8017F63C_ovl_02();
    if (arg3 != 0) {
        var_a3_2 = 0;
        if (temp_s0_2 != 0) {
            var_a3_2 = func_8017BE48_ovl_02(arg3);
        }
    } else {
        var_a3_2 = 0;
    }
    if (arg5 != 0) {
        M2C_FIELD(arg0, s32 *, 4) = (s32) ((s32) M2C_FIELD(arg0, s32 *, 4) >> 1);
    }
    func_80180364_ovl_02(arg0 + 4, arg3, temp_s0_2, var_a3_2, arg6);
    if (arg5 != 0) {
        M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) * 2);
    }
    if (arg4 != 0) {
        M2C_FIELD(arg1, s32 *, 4) = func_8017F720_ovl_02();
    }
}
