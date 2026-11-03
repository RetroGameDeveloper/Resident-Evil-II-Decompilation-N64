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

s32 func_8002FD68_ovl_01(void *, M2C_UNK, s32);     /* extern */
s32 func_8002FF24_ovl_01(void *, M2C_UNK, s32);     /* extern */

s32 func_8003014C_ovl_01(void *arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    s32 *var_v0;
    s32 temp_s3;
    s32 var_a0;
    s32 var_s1;
    s32 var_v1_2;
    u32 temp_lo;
    u32 temp_s2;
    u32 var_s0;
    u32 var_v1;
    void *temp_s3_2;

    temp_s2 = arg2 << 7;
    temp_lo = 0x3B9AC9F0U / temp_s2;
    temp_s3_2 = M2C_FIELD(arg0, void **, 4);
    if ((s32) temp_lo <= 0) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x14) = 0x3E;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(), 0)();
    }
    var_s1 = arg3;
    if ((s32) temp_lo < arg3) {
        var_s1 = (s32) temp_lo;
    }
    M2C_FIELD(temp_s3_2, s32 *, 0x4C) = var_s1;
    var_s0 = 0;
    temp_s3 = func_8002FD68_ovl_01(arg0, arg1, arg3 * 4);
    if (arg3 != 0) {
        do {
            var_v1 = arg3 - var_s0;
            if ((u32) var_s1 < var_v1) {
                var_v1 = (u32) var_s1;
            }
            var_s1 = (s32) var_v1;
            var_v1_2 = var_s1;
            var_a0 = func_8002FF24_ovl_01(arg0, arg1, (var_s1 * arg2) << 7);
            if (var_v1_2 != 0) {
                var_v0 = (var_s0 * 4) + temp_s3;
                do {
                    *var_v0 = var_a0;
                    var_v0 += 4;
                    var_s0 += 1;
                    var_v1_2 -= 1;
                    var_a0 += temp_s2;
                } while (var_v1_2 != 0);
            }
        } while (var_s0 < (u32) arg3);
    }
    return temp_s3;
}
