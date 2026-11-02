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

M2C_UNK func_80027530_ovl_01(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_800275F8_ovl_01(M2C_UNK, s16, M2C_UNK, M2C_UNK); /* extern */
s32 func_800276B4_ovl_01(M2C_UNK);                  /* extern */
M2C_UNK func_8004CDB8_ovl_01(M2C_UNK);              /* extern */
M2C_UNK func_800760BC_ovl_01(M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_80077B0C_ovl_01(M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_8015B204_ovl_03();                     /* extern */
M2C_UNK func_8015F790_ovl_03();                     /* extern */
M2C_UNK func_8015F95C_ovl_03(u8, u8, M2C_UNK);      /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_80160B9C_ovl_03;
extern u8 D_80160BA2_ovl_03;

void func_8015DA48_ovl_03(void) {
    M2C_UNK var_a1;
    s16 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v0_4;

    temp_v0 = M2C_FIELD(&D_80160B9C_ovl_03, u16 *, 0x10) + M2C_FIELD(&D_80160B9C_ovl_03, u16 *, 0x12);
    M2C_FIELD(&D_80160B9C_ovl_03, u16 *, 0x10) = (u16) temp_v0;
    func_800275F8_ovl_01(3, temp_v0, 0, 0);
    if (func_800276B4_ovl_01(3) != 0) {
        M2C_FIELD(&D_80160B9C_ovl_03, u16 *, 0x12) = 0U;
        M2C_FIELD(&D_80160B9C_ovl_03, u16 *, 0x10) = -1U;
    }
    if ((M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18268) & 0x1000) || (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18258) & 0x800)) {
        if (func_800276B4_ovl_01(3) != 0) {
            if (M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 6) != 0) {
                M2C_FIELD(&D_80160B9C_ovl_03, s8 *, 0) = 1;
                M2C_FIELD(&D_800C7650_ovl_01, s8 *, 0x21962) = 0;
                func_80077B0C_ovl_01(0x04050000, 0);
                var_a1 = 0x1800;
                M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) = (s32) (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) & ~8 & ~1);
            } else {
                M2C_FIELD(&D_80160B9C_ovl_03, s8 *, 0) = 2;
                M2C_FIELD(&D_80160B9C_ovl_03, s8 *, 1) = 3;
                M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) = (s32) (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) | 0x20000);
                func_80077B0C_ovl_01(0x04000000, 0);
                func_80027530_ovl_01(0x100, -0x800, 7, 1);
loop_9:
                if (func_800276B4_ovl_01(0) == 0) {
                    func_8015F95C_ovl_03(0x80U, 0x80U, 1);
                    func_8015F790_ovl_03();
                    func_8004CDB8_ovl_01(1);
                    goto loop_9;
                }
                var_a1 = 0x80;
            }
            func_80027530_ovl_01(0x200, var_a1, 7, 1);
            func_800275F8_ovl_01(0, 0x200, 0x1085, 0);
loop_14:
            if (func_800276B4_ovl_01(0) == 0) {
                func_8015F95C_ovl_03(0x80U, 0x80U, 1);
                func_8015F790_ovl_03();
                func_8004CDB8_ovl_01(1);
                goto loop_14;
            }
            func_80027530_ovl_01(0x200, 0, 7, 1);
            func_800275F8_ovl_01(0, 0x7FFF, 0xFFFF, 0);
            func_8004CDB8_ovl_01(1);
            if (D_80160BA2_ovl_03 != 0) {
                func_800760BC_ovl_01(0x11, 0);
            }
            func_8015B204_ovl_03();
            return;
        }
        M2C_FIELD(&D_80160B9C_ovl_03, u16 *, 0x12) = -0x1000U;
        goto block_20;
    }
block_20:
    temp_v0_2 = M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 7) + M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 8);
    M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 7) = temp_v0_2;
    if ((u32) ((temp_v0_2 - 1) & 0xFF) >= 0x30U) {
        M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 8) = (u8) -(M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 8) & 0xFF);
    }
    if (M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x1825E) & 0x1000) {
        if (M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 6) == 1) {
            func_80077B0C_ovl_01(0x04040000, 0);
            M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 6) = 0U;
        }
    }
    if (M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x1825E) & 0x4000) {
        if (M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 6) == 0) {
            func_80077B0C_ovl_01(0x04040000, 0);
            M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 6) = 1U;
        }
    }
    temp_v0_3 = M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 0xA) + 0x10;
    M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 0xA) = temp_v0_3;
    if (temp_v0_3 & 0x80) {
        M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 0xA) = 0x80U;
    }
    temp_v0_4 = M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 0xB) + 0x10;
    M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 0xB) = temp_v0_4;
    if (temp_v0_4 & 0x80) {
        M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 0xB) = 0x80U;
    }
    func_8015F95C_ovl_03(M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 0xB), M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 0xA), 0);
    func_8015F790_ovl_03();
}
