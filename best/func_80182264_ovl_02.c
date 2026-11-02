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

M2C_UNK func_80182440_ovl_02(s32, s32, s32, s32, s32, s32, s32, s32, u32, s32, s32); /* extern */
extern s32 D_801856DC_ovl_02;

void func_80182264_ovl_02(void *arg0, s32 arg1, void *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, u32 arg10, s32 arg11, s32 arg12) {
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_s0;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_s5;
    s32 var_s6;
    s32 var_s7;
    u32 var_s1;

    var_s3 = arg4;
    var_s0 = arg5;
    var_s4 = arg6;
    var_s5 = arg7;
    var_s6 = arg8;
    var_s7 = arg9;
    var_s1 = arg10;
    var_s2 = arg11;
    var_a0 = M2C_FIELD(arg0, s32 *, 0);
    if (arg1 != 0) {
        var_a0 += var_s0 >> 1;
    }
    var_a1 = M2C_FIELD(arg2, s32 *, 0);
    if (arg3 != 0) {
        var_a1 += var_s0 >> 1;
    }
    func_80182440_ovl_02(var_a0, var_a1, var_s3, var_s0, var_s4, var_s5, var_s6, var_s7, var_s1, var_s2, arg12);
    if (D_801856DC_ovl_02 != 3) {
        var_s3 = var_s3 >> 1;
        var_s0 = var_s0 >> 1;
        var_s4 = var_s4 >> 1;
        var_s6 = var_s6 >> 1;
        var_s1 = (u32) ((s32) (var_s1 + (var_s1 >> 0x1F)) >> 1);
    }
    if (D_801856DC_ovl_02 == 1) {
        var_s5 = var_s5 >> 1;
        var_s7 = var_s7 >> 1;
        var_s2 = var_s2 / 2;
    }
    var_a0_2 = M2C_FIELD(arg0, s32 *, 4);
    if (arg1 != 0) {
        var_a0_2 += var_s0 >> 1;
    }
    var_a1_2 = M2C_FIELD(arg2, s32 *, 4);
    if (arg3 != 0) {
        var_a1_2 += var_s0 >> 1;
    }
    func_80182440_ovl_02(var_a0_2, var_a1_2, var_s3, var_s0, var_s4, var_s5, var_s6, var_s7, var_s1, var_s2, arg12);
    var_a0_3 = M2C_FIELD(arg0, s32 *, 8);
    if (arg1 != 0) {
        var_a0_3 += var_s0 >> 1;
    }
    var_a1_3 = M2C_FIELD(arg2, s32 *, 8);
    if (arg3 != 0) {
        var_a1_3 += var_s0 >> 1;
    }
    func_80182440_ovl_02(var_a0_3, var_a1_3, var_s3, var_s0, var_s4, var_s5, var_s6, var_s7, var_s1, var_s2, arg12);
}
