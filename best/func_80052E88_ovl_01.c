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

u8 func_80052E88_ovl_01(u8 *arg0) {
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;
    u32 var_a2;
    u8 *var_a0;
    u8 temp_v1;
    u8 var_a3;
    void *var_a1;

    var_a0 = arg0;
    var_a3 = 0;
    var_a2 = 0;
    var_a1 = var_a0 + 1;
    do {
        if (*var_a0 != 0) {
            temp_v0 = M2C_FIELD(var_a1, u16 *, 1);
            if (temp_v0 != 0) {
                M2C_FIELD(var_a1, u16 *, 1) = (u16) (temp_v0 - 1);
            } else {
                temp_v0_2 = M2C_FIELD(var_a1, u16 *, 3) - 1;
                M2C_FIELD(var_a1, u16 *, 3) = temp_v0_2;
                if (!(temp_v0_2 & 0xFFFF)) {
                    *var_a0 = 0;
                }
                if (M2C_FIELD(var_a1, s16 *, 5) != 0) {
                    temp_v0_3 = M2C_FIELD(var_a1, u16 *, 7) + (u16) M2C_FIELD(var_a1, s16 *, 5);
                    M2C_FIELD(var_a1, u16 *, 7) = temp_v0_3;
                    M2C_FIELD(var_a1, u8 *, 0) = (u8) (temp_v0_3 >> 7);
                }
                temp_v1 = M2C_FIELD(var_a1, u8 *, 0);
                if (var_a3 < temp_v1) {
                    var_a3 = temp_v1;
                }
            }
        }
        var_a2 += 1;
        var_a1 += 0xA;
        var_a0 += 0xA;
    } while (var_a2 < 0x20U);
    return var_a3;
}
