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

M2C_UNK func_8000DE9C(s32, u32, u32);               /* extern */

s32 func_80004370(void *arg0, void *arg1, s32 arg2) {
    s32 (*temp_v0)(s32, u32, u32);
    s32 (*temp_v0_3)(s32, u32, u32);
    s32 temp_s3;
    s32 temp_v0_2;
    s32 temp_v0_4;
    s32 temp_v1_2;
    s32 var_s3;
    s32 var_s5;
    u32 temp_a2;
    u32 temp_s1;
    u32 temp_s1_2;
    u32 temp_v1;
    u32 temp_v1_3;
    u32 var_s0;
    u32 var_s0_2;
    u32 var_s1;

    var_s5 = arg2;
    temp_s1 = M2C_FIELD(arg0, u32 *, 0x2C);
    temp_a2 = M2C_FIELD(arg0, u32 *, 0x30);
    temp_s3 = M2C_FIELD(arg1, s32 *, 0xC);
    var_s0 = temp_a2 - temp_s1;
    if (temp_a2 < temp_s1) {
        var_s0 = M2C_FIELD(arg0, s32 *, 0x28) - temp_s1;
    }
    temp_v1 = M2C_FIELD(arg1, u32 *, 0x10);
    if (temp_v1 < var_s0) {
        var_s0 = temp_v1;
    }
    if ((var_s0 != 0) && (var_s5 == -5)) {
        var_s5 = 0;
    }
    M2C_FIELD(arg1, u32 *, 0x10) = (u32) (M2C_FIELD(arg1, u32 *, 0x10) - var_s0);
    M2C_FIELD(arg1, s32 *, 0x14) = (s32) (M2C_FIELD(arg1, s32 *, 0x14) + var_s0);
    temp_v0 = M2C_FIELD(arg0, s32 (**)(s32, u32, u32), 0x34);
    if (temp_v0 != NULL) {
        temp_v0_2 = temp_v0(M2C_FIELD(arg0, s32 *, 0x38), temp_s1, var_s0);
        M2C_FIELD(arg0, s32 *, 0x38) = temp_v0_2;
        M2C_FIELD(arg1, s32 *, 0x30) = temp_v0_2;
    }
    func_8000DE9C(temp_s3, temp_s1, var_s0);
    temp_v1_2 = M2C_FIELD(arg0, s32 *, 0x28);
    var_s1 = temp_s1 + var_s0;
    var_s3 = temp_s3 + var_s0;
    if (var_s1 == temp_v1_2) {
        temp_s1_2 = M2C_FIELD(arg0, u32 *, 0x24);
        if (M2C_FIELD(arg0, u32 *, 0x30) == temp_v1_2) {
            M2C_FIELD(arg0, u32 *, 0x30) = temp_s1_2;
        }
        temp_v1_3 = M2C_FIELD(arg1, u32 *, 0x10);
        var_s0_2 = M2C_FIELD(arg0, u32 *, 0x30) - temp_s1_2;
        if (temp_v1_3 < var_s0_2) {
            var_s0_2 = temp_v1_3;
        }
        if ((var_s0_2 != 0) && (var_s5 == -5)) {
            var_s5 = 0;
        }
        M2C_FIELD(arg1, u32 *, 0x10) = (u32) (M2C_FIELD(arg1, u32 *, 0x10) - var_s0_2);
        M2C_FIELD(arg1, s32 *, 0x14) = (s32) (M2C_FIELD(arg1, s32 *, 0x14) + var_s0_2);
        temp_v0_3 = M2C_FIELD(arg0, s32 (**)(s32, u32, u32), 0x34);
        if (temp_v0_3 != NULL) {
            temp_v0_4 = temp_v0_3(M2C_FIELD(arg0, s32 *, 0x38), temp_s1_2, var_s0_2);
            M2C_FIELD(arg0, s32 *, 0x38) = temp_v0_4;
            M2C_FIELD(arg1, s32 *, 0x30) = temp_v0_4;
        }
        func_8000DE9C(var_s3, temp_s1_2, var_s0_2);
        var_s3 += var_s0_2;
        var_s1 = temp_s1_2 + var_s0_2;
    }
    M2C_FIELD(arg1, s32 *, 0xC) = var_s3;
    M2C_FIELD(arg0, u32 *, 0x2C) = var_s1;
    return var_s5;
}
