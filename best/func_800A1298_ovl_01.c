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

extern M2C_UNK D_8013BC30;

void func_800A1298_ovl_01(s32 arg0, s32 arg1, s32 arg2) {
    M2C_UNK *var_v1;
    s32 var_a0_2;
    u32 var_a0;
    void *temp_v0;
    void *temp_v0_2;

    var_a0 = 0;
    var_v1 = &D_8013BC30;
loop_1:
    if ((M2C_FIELD(var_v1, u8 *, 0xFC1) != 0) || (M2C_FIELD(var_v1, s32 *, 0) != (arg0 & 0x7FFFFFFF))) {
        var_a0 += 1;
        var_v1 += 0xFF8;
        if (var_a0 >= 8U) {
            var_a0_2 = -1;
        } else {
            goto loop_1;
        }
    } else {
        var_a0_2 = var_a0 | (arg0 & 0x80000000);
    }
    if (var_a0_2 != -1) {
        if (var_a0_2 >= 0) {
            temp_v0 = (var_a0_2 * 0xFF8) + &D_8013BC30;
            M2C_FIELD(temp_v0, s32 *, 0x110) = arg1;
            M2C_FIELD(temp_v0, s32 *, 0x114) = arg2;
            return;
        }
        temp_v0_2 = ((var_a0_2 & 0x7FFFFFFF) * 0xFF8) + &D_8013BC30;
        M2C_FIELD(temp_v0_2, s32 *, 0xFE4) = arg1;
        M2C_FIELD(temp_v0_2, s32 *, 0xFE8) = arg2;
        M2C_FIELD(temp_v0_2, u8 *, 0xFEE) = (u8) (M2C_FIELD(temp_v0_2, u8 *, 0xFEE) | 0x10);
    }
}
