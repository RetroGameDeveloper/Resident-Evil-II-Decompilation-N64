/* machine draft (m2c) for gcc-2.7.2-kmc -O2 -mips3 -mgp32 -mfp32 -G0 -mcpu=r4600, tried by autopilot */
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

M2C_UNK func_800377B0_ovl_01(s32, s16, s32, s32);   /* extern */

void func_801627A4_ovl_22(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp_s0;
    s32 temp_s6;
    s32 var_s2;
    s32 var_s3;
    u16 temp_v1;
    void *var_s1;

    var_s3 = arg5;
    temp_s6 = M2C_FIELD(arg0, s32 *, 0x234);
    var_s2 = arg1 - 1;
    if (arg1 != 0) {
        var_s1 = var_s3 + 6;
        do {
            temp_s0 = temp_s6 + (M2C_FIELD(var_s1, s32 *, 2) * 0x178) + 0x38;
            temp_v1 = M2C_FIELD(var_s1, u16 *, 0);
            var_s1 += 0xC;
            func_800377B0_ovl_01((arg2 << 0x18) | (arg3 << 0x10) | (arg4 + ((func_80033634_ovl_01() & 0xFF) * 2)), (s16) (M2C_FIELD(arg0, u16 *, 0x66) + temp_v1), temp_s0, var_s3);
            var_s3 += 0xC;
            var_s2 -= 1;
        } while (var_s2 != 0);
    }
}
