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

M2C_UNK func_80052C00_ovl_01(M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_80052C9C_ovl_01(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80052D40_ovl_01(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80077B0C_ovl_01(M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_8015E2EC_ovl_03(M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_8015E5E8_ovl_03(u8);                   /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_80160B9C_ovl_03;
extern u8 D_80160BA2_ovl_03;
extern s32 D_80161460_ovl_03;
extern s32 D_80161464_ovl_03;
extern u8 D_80161467_ovl_03;

void func_8015BE14_ovl_03(void) {
    u8 temp_v0;
    u8 temp_v1;
    u8 temp_v1_2;

    switch (M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 3)) { /* irregular */
    case 0:
        M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 0xA) = 0x80U;
        M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 8) = 2U;
        M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 9) = 0U;
        M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 0xB) = 0U;
        M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 7) = 0U;
        D_80161460_ovl_03 = 0;
        M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 3) = 1U;
        D_80161464_ovl_03 = (s32) M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 0xD);
        /* fallthrough */
    case 1:
        M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 0xA) = (u8) (M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 0xA) - 0x10);
        temp_v1 = M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 9) + 1;
        M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 9) = temp_v1;
        M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 0xB) = (u8) (M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 0xB) + 0x10);
        if ((temp_v1 & 0xFF) == 8) {
            M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 0xA) = 0U;
            M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 0xB) = 0x80U;
            M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 3) = (u8) (M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 3) + 1);
        }
        break;
    case 2:
        if (M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x1825E) & 0x4000) {
            if (M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 6) == 0) {
                M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 6) = (u8) (M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 6) + 1);
                func_80077B0C_ovl_01(0x04040000, 0);
            }
        }
        if (M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x1825E) & 0x1000) {
            if (M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 6) != 0) {
                M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 6) = (u8) (M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 6) - 1);
                func_80077B0C_ovl_01(0x04040000, 0);
                goto block_17;
            }
            goto block_18;
        }
block_17:
        if (D_80160BA2_ovl_03 == 0) {
block_18:
            if (M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x1825E) & 0x8000) {
                if (M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 0xD) == 1) {
                    M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 0xD) = 0U;
                    func_80077B0C_ovl_01(0x04040000, 0);
                }
            }
            if (M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x1825E) & 0x2000) {
                if (M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 0xD) == 0) {
                    M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 0xD) = 1U;
                    func_80077B0C_ovl_01(0x04040000, 0);
                }
            }
        }
        temp_v0 = M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 7) + M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 8);
        M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 7) = temp_v0;
        if ((u32) ((temp_v0 - 1) & 0xFF) >= 0x30U) {
            M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 8) = (u8) -(M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 8) & 0xFF);
        }
        if (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18268) & 0x2000) {
            func_80077B0C_ovl_01(0x04050000, 0);
            M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 3) = 3U;
            M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 0xD) = (u8) D_80161467_ovl_03;
        }
        if ((M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18268) & 0x1000) || (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18258) & 0x800)) {
            if (M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 6) == 1) {
                func_80077B0C_ovl_01(0x04050000, 0);
                M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 3) = 3U;
                M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 0xD) = 0U;
            } else {
                if (M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 0xD) == 1) {
                    M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) = (s32) (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) | 0x20);
                }
                M2C_FIELD(&D_80160B9C_ovl_03, s8 *, 5) = 1;
                M2C_FIELD(&D_80160B9C_ovl_03, s8 *, 2) = 3;
                func_80077B0C_ovl_01(0x04060000, 0);
                func_80052C00_ovl_01(7, 0);
                func_80052C9C_ovl_01(9, 0xFF, 0);
                func_80052D40_ovl_01(4, 0xFF, 0x3C, 0xA);
            }
        }
        break;
    case 3:
        D_80161460_ovl_03 = 1;
        M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 7) = 0U;
        M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 0xA) = (u8) (M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 0xA) + 0x10);
        M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 0xB) = (u8) (M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 0xB) - 0x10);
        temp_v1_2 = M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 9) - 1;
        M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 9) = temp_v1_2;
        if (!(temp_v1_2 & 0xFF)) {
            M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 0xA) = 0x80U;
            M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 0xB) = 0U;
            M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 6) = 1U;
            M2C_FIELD(&D_80160B9C_ovl_03, s8 *, 2) = 0;
            M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 3) = 0U;
        }
        break;
    }
    func_8015E5E8_ovl_03(D_80160BA2_ovl_03);
    func_8015E2EC_ovl_03(1, 1, 0x1B, D_80161460_ovl_03);
}
