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

s32 func_800837DC_ovl_01(M2C_UNK *, s32);           /* extern */
M2C_UNK func_8008C31C_ovl_01(u8, u8);               /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E8AF8_ovl_01;
extern M2C_UNK D_8012BF38_ovl_01;
extern u8 D_8012BF40_ovl_01;

s32 func_8008CE80_ovl_01(s32 arg0, s32 arg1) {
    u16 temp_v0;
    u16 temp_v0_2;
    u8 temp_s1;
    u8 var_a1;
    u8 var_s0;
    u8 var_s0_2;

    temp_s1 = D_8012BF40_ovl_01;
    var_s0 = M2C_FIELD(((temp_s1 * 4) + &D_800C7650_ovl_01), u8 *, 0x21819);
    if (func_800837DC_ovl_01(&D_800E8AF8_ovl_01, arg0) == 0) {
        if (var_s0 != 0xFF) {
            switch (arg0) {                         /* irregular */
            case 15:
            case 19:
            case 18:
                temp_v0 = M2C_FIELD(&D_8012BF38_ovl_01, u16 *, 0x2C) + 1;
                M2C_FIELD(&D_8012BF38_ovl_01, u16 *, 0x2C) = temp_v0;
                if ((s16) temp_v0 >= 8) {
                    M2C_FIELD(&D_8012BF38_ovl_01, u16 *, 0x2C) = 0U;
                    if (var_s0 != 0) {
                        var_s0 -= 1;
                        func_8008C31C_ovl_01(temp_s1, var_s0);
                        if (arg0 == 0x10) {
                        case 16:
                            temp_v0_2 = M2C_FIELD(&D_8012BF38_ovl_01, u16 *, 0x2C) + 1;
                            M2C_FIELD(&D_8012BF38_ovl_01, u16 *, 0x2C) = temp_v0_2;
                            if ((s16) temp_v0_2 >= 8) {
                                M2C_FIELD(&D_8012BF38_ovl_01, u16 *, 0x2C) = 0U;
                                if (var_s0 != 0) {
                                    var_s0 -= 1;
                                    func_8008C31C_ovl_01(temp_s1, var_s0);
                                    goto block_12;
                                }
                                goto block_19;
                            }
                            /* Duplicate return node #23. Try simplifying control flow for better match */
                            return 1;
                        }
block_12:
                        if (arg0 == 0xE) {
                        case 14:
                            if (arg1 == 0) {
                                var_s0_2 = var_s0 - 1;
                            } else {
                                var_s0_2 = var_s0 - 4;
                            }
                            var_a1 = var_s0_2;
                            goto block_21;
                        }
                    default:
                        if (var_s0 == 0) {
                            goto block_19;
                        }
                        var_a1 = var_s0 - 1;
block_21:
                        func_8008C31C_ovl_01(temp_s1, var_a1);
                        goto block_22;
                    }
block_19:
                    return 0;
                }
                /* Duplicate return node #23. Try simplifying control flow for better match */
                return 1;
            }
        } else {
block_22:
            /* Duplicate return node #23. Try simplifying control flow for better match */
            return 1;
        }
    } else {
        return 1;
    }
}
