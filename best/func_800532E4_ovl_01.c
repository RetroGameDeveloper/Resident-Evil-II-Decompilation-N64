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

M2C_UNK func_80052BEC_ovl_01(M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_80077B0C_ovl_01(M2C_UNK, M2C_UNK);     /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern void *D_8010D8E0_ovl_01;

u8 func_800532E4_ovl_01(void) {
    s32 temp_v1;
    s32 var_s1;
    s8 temp_v0_2;
    s8 temp_v0_3;
    u8 temp_v0;
    u8 temp_v0_4;
    u8 temp_v1_2;
    u8 temp_v1_3;
    u8 temp_v1_4;
    u8 temp_v1_5;
    u8 temp_v1_6;
    void *temp_s0;

    temp_s0 = D_8010D8E0_ovl_01;
    func_80052BEC_ovl_01(0xF000, 0xA02);
    var_s1 = 0;
    if (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) < 0) {
        if (M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x1825C) & 0x1000) {
            M2C_FIELD(temp_s0, u8 *, 3) = (u8) (M2C_FIELD(temp_s0, u8 *, 3) - 1);
            var_s1 = 1;
            if (M2C_FIELD(temp_s0, u16 *, 2) == 0x901) {
                M2C_FIELD(temp_s0, u8 *, 3) = 0U;
            }
            if ((s8) M2C_FIELD(temp_s0, u8 *, 3) < 0) {
                M2C_FIELD(temp_s0, u8 *, 3) = 2U;
            }
        }
        if (M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x1825C) & 0x4000) {
            var_s1 = 1;
            temp_v0 = M2C_FIELD(temp_s0, u8 *, 3) + 1;
            M2C_FIELD(temp_s0, u8 *, 3) = temp_v0;
            if ((s8) temp_v0 >= 3) {
                M2C_FIELD(temp_s0, u8 *, 3) = 0U;
            }
        }
        if (M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x1825C) & 0x8000) {
            temp_v0_2 = (u8) M2C_FIELD(temp_s0, u16 *, 2) - 1;
            M2C_FIELD(temp_s0, u16 *, 2) = temp_v0_2;
            var_s1 = 1;
            if (temp_v0_2 & 0x80) {
                M2C_FIELD(temp_s0, u16 *, 2) = 9;
            }
        }
        if (M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x1825C) & 0x2000) {
            var_s1 = 1;
            temp_v0_3 = (u8) M2C_FIELD(temp_s0, u16 *, 2) + 1;
            M2C_FIELD(temp_s0, u16 *, 2) = temp_v0_3;
            if (temp_v0_3 >= 0xA) {
                M2C_FIELD(temp_s0, u16 *, 2) = 0;
            }
        }
        if (var_s1 != 0) {
            func_80077B0C_ovl_01(0x02100000, 0);
        }
    }
    temp_v0_4 = M2C_FIELD(temp_s0, u8 *, 0x2DA) + M2C_FIELD(temp_s0, u8 *, 0x2DB);
    temp_v1 = temp_v0_4 & 0xFF;
    M2C_FIELD(temp_s0, u8 *, 0x2DA) = temp_v0_4;
    if ((temp_v1 == 0x60) || (temp_v1 == 0x40)) {
        M2C_FIELD(temp_s0, u8 *, 0x2DB) = (u8) -(s8) M2C_FIELD(temp_s0, u8 *, 0x2DB);
    }
    M2C_FIELD(temp_s0, s16 *, 0x314) = 0x18;
    M2C_FIELD(temp_s0, s16 *, 0x310) = (s16) (((s8) M2C_FIELD(temp_s0, u16 *, 2) * 0x18) + 0x34);
    M2C_FIELD(temp_s0, s16 *, 0x312) = (s16) (((s8) M2C_FIELD(temp_s0, u8 *, 3) * 0x18) + 0x9A);
    M2C_FIELD(temp_s0, s8 *, 0x318) = (s8) (((s8) M2C_FIELD(temp_s0, u16 *, 2) * 0x18) + 4);
    temp_v1_2 = M2C_FIELD(temp_s0, u8 *, 0x2DE);
    M2C_FIELD(temp_s0, s8 *, 0x319) = (s8) ((((s8) M2C_FIELD(temp_s0, u8 *, 3) * 0x18) + 0x2A) - temp_v1_2);
    M2C_FIELD(temp_s0, u8 *, 0x31E) = (u8) M2C_FIELD(temp_s0, u8 *, 0x2DA);
    M2C_FIELD(temp_s0, s16 *, 0x316) = (s16) (0x17 - (temp_v1_2 & 0xFF));
    if ((s8) M2C_FIELD(temp_s0, u16 *, 2) == 9) {
        if ((s8) M2C_FIELD(temp_s0, u8 *, 3) > 0) {
            temp_v1_3 = M2C_FIELD(temp_s0, u8 *, 0x2DE);
            M2C_FIELD(temp_s0, s16 *, 0x312) = 0xB2;
            M2C_FIELD(temp_s0, s8 *, 0x319) = (s8) (0x42 - temp_v1_3);
            M2C_FIELD(temp_s0, s16 *, 0x316) = (s16) (0x2F - (temp_v1_3 & 0xFF));
        }
    }
    M2C_FIELD(temp_s0, u8 *, 0x2DE) = 0U;
    if (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18268) & 0x1000) {
        func_80077B0C_ovl_01(0x02090000, 0);
        temp_v1_4 = (u8) M2C_FIELD(temp_s0, u16 *, 2) + ((s8) M2C_FIELD(temp_s0, u8 *, 3) * 0xA);
        M2C_FIELD(temp_s0, u8 *, 0x2D9) = temp_v1_4;
        if ((temp_v1_4 & 0xFF) == 9) {
            M2C_FIELD(temp_s0, u8 *, 0x2D9) = 0x1EU;
        }
        temp_v1_5 = M2C_FIELD(temp_s0, u8 *, 0x2D9);
        if (temp_v1_5 < 9U) {
            M2C_FIELD(temp_s0, u8 *, 0x2D9) = (u8) (temp_v1_5 + 1);
        }
        if (M2C_FIELD(temp_s0, u8 *, 0x2D9) == 0x13) {
            M2C_FIELD(temp_s0, u8 *, 0x2D9) = 0x1DU;
        }
        temp_v1_6 = M2C_FIELD(temp_s0, u8 *, 0x2D9);
        if (temp_v1_6 >= 0x14U) {
            M2C_FIELD(temp_s0, u8 *, 0x2D9) = (u8) (temp_v1_6 - 1);
        }
        M2C_FIELD(temp_s0, s8 *, 0x2D5) = 0x10;
    } else {
        M2C_FIELD(temp_s0, u8 *, 0x2D9) = 0U;
    }
    if (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18268) & 0x2000) {
        M2C_FIELD(temp_s0, u8 *, 0x2D9) = 1U;
    }
    return M2C_FIELD(temp_s0, u8 *, 0x2D9);
}
