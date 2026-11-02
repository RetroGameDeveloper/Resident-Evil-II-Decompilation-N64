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

void func_800A11D4_ovl_01(s32 arg0) {
    M2C_UNK *var_a1;
    s32 var_a0;
    u32 var_v1;
    void *temp_v0;

    var_v1 = 0;
    var_a1 = &D_8013BC30;
loop_1:
    if ((M2C_FIELD(var_a1, u8 *, 0xFC1) != 0) || (M2C_FIELD(var_a1, s32 *, 0) != (arg0 & 0x7FFFFFFF))) {
        var_v1 += 1;
        var_a1 += 0xFF8;
        if (var_v1 >= 8U) {
            var_a0 = -1;
        } else {
            goto loop_1;
        }
    } else {
        var_a0 = var_v1 | (arg0 & 0x80000000);
    }
    if (var_a0 != -1) {
        if (var_a0 >= 0) {
            M2C_FIELD(((var_a0 * 0xFF8) + &D_8013BC30), s8 *, 0xFC0) = 1;
            return;
        }
        temp_v0 = ((var_a0 & 0x7FFFFFFF) * 0xFF8) + &D_8013BC30;
        M2C_FIELD(temp_v0, u8 *, 0xFEE) = (u8) (M2C_FIELD(temp_v0, u8 *, 0xFEE) & 0xF7);
    }
}
