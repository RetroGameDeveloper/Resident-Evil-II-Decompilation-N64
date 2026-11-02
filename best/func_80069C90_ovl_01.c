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

s32 func_80069C90_ovl_01(s32 arg0, s32 arg1, s32 arg2, void *arg3) {
    s32 var_a2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    u16 var_a0;
    u16 var_v1_2;
    u32 temp_v1;

    var_a2 = arg2;
    temp_v1 = (u32) (M2C_FIELD(arg3, u16 *, 0xA) & 0x30) >> 4;
    if (temp_v1 != 1) {
        if ((s32) temp_v1 < 2) {
            var_v0 = var_a2 < 0x709;
            if (temp_v1 != 0) {

            } else {
                var_a0 = M2C_FIELD(arg3, u16 *, 4);
                var_v1 = arg0 - (M2C_FIELD(arg3, s16 *, 0) + var_a0);
                goto block_10;
            }
        } else if (temp_v1 != 2) {
            var_v0 = var_a2 < 0x709;
            if (temp_v1 != 3) {

            } else {
                var_v0_2 = (M2C_FIELD(arg3, s16 *, 2) - arg1) * 0x708;
                var_v1_2 = M2C_FIELD(arg3, u16 *, 6);
                goto block_12;
            }
        } else {
            var_a0 = M2C_FIELD(arg3, u16 *, 6);
            var_v1 = arg1 - (M2C_FIELD(arg3, s16 *, 2) + var_a0);
block_10:
            var_a2 = (s32) -(var_v1 * 0x708) / (s32) var_a0;
            var_v0 = var_a2 < 0x709;
        }
    } else {
        var_v1_2 = M2C_FIELD(arg3, u16 *, 4);
        var_v0_2 = (M2C_FIELD(arg3, s16 *, 0) - arg0) * 0x708;
block_12:
        var_a2 = (s32) -var_v0_2 / (s32) var_v1_2;
        var_v0 = var_a2 < 0x709;
    }
    if (var_v0 == 0) {
        var_a2 = 0x708;
    }
    if (var_a2 < 0) {
        var_a2 = 0;
    }
    return var_a2;
}
