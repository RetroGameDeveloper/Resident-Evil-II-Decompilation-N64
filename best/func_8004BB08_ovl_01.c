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

s32 func_800837DC_ovl_01(M2C_UNK *, u8);            /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E8D18_ovl_01;
extern M2C_UNK D_800FA63C_ovl_01;
extern M2C_UNK D_800FAB38_ovl_01;
extern M2C_UNK D_800FAC50_ovl_01;
extern M2C_UNK D_800FB398_ovl_01;
extern M2C_UNK D_8012FF48_ovl_01;

void *func_8004BB08_ovl_01(s32 arg0) {
    M2C_UNK *var_v0;
    s32 var_v0_2;
    u16 var_v1;
    u32 temp_a0;
    u8 var_s0;

    var_s0 = 0;
    temp_a0 = arg0 & 0xFF;
    if (temp_a0 < 0x64U) {
        var_s0 = M2C_FIELD(((temp_a0 * 8) + &D_8012FF48_ovl_01), u8 *, 1);
    }
    if (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) & 0x40) {
        if ((var_s0 != 0) && (func_800837DC_ovl_01(&D_800E8D18_ovl_01, var_s0) != 0)) {
            var_v1 = *(((var_s0 + 0x91) * 2) + &D_800FB398_ovl_01);
            var_v0 = &D_800FAC50_ovl_01;
        } else {
            var_v1 = *(((arg0 & 0xFF) * 2) + &D_800FB398_ovl_01);
            var_v0 = &D_800FAC50_ovl_01;
        }
    } else {
        if ((var_s0 != 0) && (func_800837DC_ovl_01(&D_800E8D18_ovl_01, var_s0) != 0)) {
            var_v0_2 = var_s0 + 0x91;
        } else {
            var_v0_2 = arg0 & 0xFF;
        }
        var_v1 = *((var_v0_2 * 2) + &D_800FAB38_ovl_01);
        var_v0 = &D_800FA63C_ovl_01;
    }
    return var_v1 + var_v0;
}
