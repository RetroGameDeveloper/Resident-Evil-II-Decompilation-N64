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

extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_8012BF38_ovl_01;

void func_80090564_ovl_01(s32 arg0) {
    s32 temp_t0;
    s32 var_a1;
    s32 var_a2;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v0_4;

    var_a1 = 8;
    var_a2 = 0;
    temp_t0 = M2C_FIELD(&D_8012BF38_ovl_01, s8 *, 0x11) * 8;
    if (M2C_FIELD(&D_8012BF38_ovl_01, s8 *, 0x11) != 3) {
        do {
            var_a1 -= 1;
            if (M2C_FIELD((temp_t0 + var_a1 + &D_800C7650_ovl_01), u8 *, 0x21944) != 0xFF) {
                var_a2 += 1;
            }
        } while (var_a1 != 0);
        if (var_a2 != 0) {
            if (arg0 != 0) {
                do {
                    temp_v0 = M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0x12) - 1;
                    M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0x12) = temp_v0;
                    if (temp_v0 & 0x80) {
                        M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0x12) = 7U;
                    }
                } while (M2C_FIELD((temp_t0 + (s8) M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0x12) + &D_800C7650_ovl_01), u8 *, 0x21944) == 0xFF);
            } else {
                do {
                    temp_v0_2 = M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0x12) + 1;
                    M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0x12) = temp_v0_2;
                    if ((s8) temp_v0_2 >= 8) {
                        M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0x12) = 0U;
                    }
                } while (M2C_FIELD((temp_t0 + (s8) M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0x12) + &D_800C7650_ovl_01), u8 *, 0x21944) == 0xFF);
            }
        }
    } else if (M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x2196B) != 0xFF) {
        if (arg0 != 0) {
            temp_v0_3 = M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0x12) - 1;
            M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0x12) = temp_v0_3;
            if (temp_v0_3 & 0x80) {
                M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0x12) = (u8) (M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x2196B) - 1);
            }
        } else {
            temp_v0_4 = M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0x12) + 1;
            M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0x12) = temp_v0_4;
            if ((M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x2196B) - 1) < (s8) temp_v0_4) {
                M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0x12) = 0U;
            }
        }
    }
}
