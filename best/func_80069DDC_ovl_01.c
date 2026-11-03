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

s32 func_80069DDC_ovl_01(void *arg0, s32 arg1, s32 arg2, void *arg3) {
    s16 var_v1;
    s32 var_hi;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    u32 temp_v1;

    temp_v1 = (u32) (M2C_FIELD(arg3, u16 *, 0xA) & 0x30) >> 4;
    if (temp_v1 != 1) {
        if ((s32) temp_v1 < 2) {
            if (temp_v1 != 0) {
                var_v0 = (arg1 - arg2) < M2C_ERROR(/* Read from unset register $t0 */);
            } else {
                var_v0_2 = (M2C_FIELD(arg3, s16 *, 0) + M2C_FIELD(arg3, u16 *, 4)) - M2C_FIELD(arg0, s32 *, 0);
                var_hi = MULT_HI(var_v0_2, 0xF2B9D649);
                goto block_12;
            }
        } else if (temp_v1 != 2) {
            if (temp_v1 != 3) {
                var_v0 = (arg1 - arg2) < M2C_ERROR(/* Read from unset register $t0 */);
            } else {
                var_v1 = M2C_FIELD(arg3, s16 *, 2);
                var_v0_3 = M2C_FIELD(arg0, s32 *, 8);
                goto block_11;
            }
        } else {
            var_v0_2 = (M2C_FIELD(arg3, s16 *, 2) + M2C_FIELD(arg3, u16 *, 6)) - M2C_FIELD(arg0, s32 *, 8);
            var_hi = MULT_HI(var_v0_2, 0xF2B9D649);
            goto block_12;
        }
    } else {
        var_v1 = M2C_FIELD(arg3, s16 *, 0);
        var_v0_3 = M2C_FIELD(arg0, s32 *, 0);
block_11:
        var_v0_2 = var_v0_3 - var_v1;
        var_hi = MULT_HI(var_v0_2, 0xF2B9D649);
block_12:
        var_v0 = (arg1 - arg2) < ((((s32) (var_hi + var_v0_2) >> 9) - (var_v0_2 >> 0x1F)) * 0x1C2);
    }
    if (var_v0 != 0) {

    }
    if (M2C_ERROR(/* Read from unset register $t0 */) < 0) {

    }
    return M2C_ERROR(/* Read from unset register $t0 */);
}
