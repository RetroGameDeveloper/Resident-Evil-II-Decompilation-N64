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

extern u8 D_801362B0_ovl_01;
extern M2C_UNK D_8013BC30;

s32 func_800A2148_ovl_01(s32 arg0) {
    M2C_UNK *var_v1;
    s32 var_v0;
    u32 var_a1;

    var_a1 = 0;
    if (D_801362B0_ovl_01 != 0) {
        var_v1 = &D_8013BC30;
loop_2:
        if ((M2C_FIELD(var_v1, u8 *, 0xFC1) != 0) || (M2C_FIELD(var_v1, s32 *, 0) != (arg0 & 0x7FFFFFFF))) {
            var_a1 += 1;
            var_v1 += 0xFF8;
            if (var_a1 >= 8U) {
                var_v0 = -1;
            } else {
                goto loop_2;
            }
        } else {
            var_v0 = var_a1 | (arg0 & 0x80000000);
        }
        return ~var_v0 != 0;
    }
    return 0;
}
