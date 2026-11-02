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

s32 func_80066E58_ovl_01(void *, M2C_UNK, s32);     /* extern */

s32 func_80066EF8_ovl_01(void *arg0, M2C_UNK arg1, void *arg2) {
    s32 temp_t0;
    s32 temp_t2_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a3;
    s32 var_v0;
    s32 var_v0_2;
    u16 temp_a0;
    u16 temp_a1;
    u32 temp_a0_2;
    u32 temp_a1_2;
    u32 temp_t2;
    u32 temp_v1;
    u32 temp_v1_2;

    temp_a0 = M2C_FIELD(arg0, u16 *, 0x12C);
    temp_a1 = M2C_FIELD(arg0, u16 *, 0x12E);
    temp_t2 = (temp_a0 * 2) + M2C_FIELD(arg2, u16 *, 4);
    temp_a0_2 = (M2C_FIELD(arg0, s16 *, 0x1B4) + temp_a0) - M2C_FIELD(arg2, s16 *, 0);
    temp_a1_2 = (M2C_FIELD(arg0, s16 *, 0x1B6) + temp_a1) - M2C_FIELD(arg2, s16 *, 2);
    var_a3 = ((temp_a0_2 >= temp_t2) * 2) | (temp_a1_2 >= (u32) ((temp_a1 * 2) + M2C_FIELD(arg2, u16 *, 6)));
    if ((temp_a0_2 == -1U) || (temp_a0_2 == (temp_t2 + 1))) {
        var_a3 = 2;
    }
    if ((temp_a1_2 == -1U) || (temp_a1_2 == (M2C_FIELD(arg2, u16 *, 6) + (M2C_FIELD(arg0, u16 *, 0x12E) * 2) + 1))) {
        var_a3 = 1;
    }
    if (var_a3 == 0) {
        return func_80066E58_ovl_01(arg0, arg1, var_a3);
    }
    if (var_a3 & 2) {
        temp_v1 = (u16) M2C_FIELD(arg2, u16 *, 4) >> 1;
        temp_t2_2 = M2C_FIELD(arg0, u16 *, 0x12C) + temp_v1 + 1;
        temp_v0 = M2C_FIELD(arg2, s16 *, 0) + temp_v1;
        if ((M2C_FIELD(arg0, s32 *, 0x120) - M2C_FIELD(arg0, s16 *, 0x1B4)) >= 0) {
            var_v0 = temp_v0 - temp_t2_2;
        } else {
            var_v0 = temp_v0 + temp_t2_2;
        }
        M2C_FIELD(arg0, s32 *, 0x120) = var_v0;
    }
    if (var_a3 & 1) {
        temp_v1_2 = (u16) M2C_FIELD(arg2, u16 *, 6) >> 1;
        temp_t0 = M2C_FIELD(arg0, u16 *, 0x12E) + temp_v1_2 + 1;
        temp_v0_2 = M2C_FIELD(arg2, s16 *, 2) + temp_v1_2;
        if ((M2C_FIELD(arg0, s32 *, 0x128) - M2C_FIELD(arg0, s16 *, 0x1B6)) >= 0) {
            var_v0_2 = temp_v0_2 - temp_t0;
        } else {
            var_v0_2 = temp_v0_2 + temp_t0;
        }
        M2C_FIELD(arg0, s32 *, 0x128) = var_v0_2;
    }
    return 1;
}
