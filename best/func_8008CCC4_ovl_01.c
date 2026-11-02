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

s32 func_800837DC_ovl_01(M2C_UNK *, s32);           /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E8AF8_ovl_01;
extern s32 D_8012BE5C_ovl_01;
extern M2C_UNK D_8012BF38_ovl_01;
extern u8 D_8012BF40_ovl_01;

s32 func_8008CCC4_ovl_01(s32 arg0) {
    s32 var_v0;

    if (D_8012BE5C_ovl_01 == 0) {
        if ((arg0 == 0x12) && (func_800837DC_ovl_01(&D_800E8AF8_ovl_01, 0x12) != 0)) {
            M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A5C) = (s32) (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A5C) | 0x800000);
        }
        if (((arg0 == 0xF) && (M2C_FIELD(((D_8012BF40_ovl_01 * 4) + &D_800C7650_ovl_01), u8 *, 0x21819) == 0xFF)) || ((arg0 == 0x11) && (M2C_FIELD(((D_8012BF40_ovl_01 * 4) + &D_800C7650_ovl_01), u8 *, 0x21819) == 0xFF))) {
            M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A5C) = (s32) (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A5C) | 0x800000);
            return 1;
        }
        if (D_8012BF40_ovl_01 != 0x80) {
            if (func_800837DC_ovl_01(&D_800E8AF8_ovl_01, arg0) != 0) {
                goto block_11;
            }
            goto block_13;
        }
block_13:
        if (arg0 == 0xE) {
            if (M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 8) != 0x80) {
                var_v0 = 1;
                if ((u8) M2C_FIELD(((M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 8) * 4) + &D_800C7650_ovl_01), u8 *, 0x21819) < 5U) {
                    return 0;
                }
                /* Duplicate return node #20. Try simplifying control flow for better match */
                return var_v0;
            }
            goto block_19;
        }
        if ((M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 8) == 0x80) || (var_v0 = 1, (M2C_FIELD(((M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 8) * 4) + &D_800C7650_ovl_01), u8 *, 0x21819) == 0))) {
block_19:
            var_v0 = 0;
        }
        return var_v0;
    }
block_11:
    return 1;
}
