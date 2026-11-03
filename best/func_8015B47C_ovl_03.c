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

M2C_UNK func_80027530_ovl_01(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_800275F8_ovl_01(M2C_UNK, s16, M2C_UNK, M2C_UNK); /* extern */
s32 func_800276B4_ovl_01(M2C_UNK);                  /* extern */
M2C_UNK func_80077B0C_ovl_01(M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_8015FB30_ovl_03();                     /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_80160B9C_ovl_03;

void func_8015B47C_ovl_03(void) {
    M2C_FIELD(&D_80160B9C_ovl_03, u16 *, 0x10) = (u16) (M2C_FIELD(&D_80160B9C_ovl_03, u16 *, 0x10) + M2C_FIELD(&D_80160B9C_ovl_03, u16 *, 0x12));
    func_80027530_ovl_01(0x200, 0, 7, 1);
    func_800275F8_ovl_01(0, (s16) M2C_FIELD(&D_80160B9C_ovl_03, u16 *, 0x10), 0, 0);
    if (func_800276B4_ovl_01(0) != 0) {
        M2C_FIELD(&D_80160B9C_ovl_03, u16 *, 0x12) = 0U;
        M2C_FIELD(&D_80160B9C_ovl_03, u16 *, 0x10) = -1U;
    }
    if (!(M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x1825E) & 0x9FF)) {
        if (func_800276B4_ovl_01(0) != 0) {
            if (M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x1825E) & 0x9FF) {
                goto block_5;
            }
            goto block_6;
        }
    } else {
block_5:
        func_80077B0C_ovl_01(0x04060000, 0);
block_6:
        M2C_FIELD(&D_80160B9C_ovl_03, u16 *, 0x12) = -0x1000U;
        M2C_FIELD(&D_80160B9C_ovl_03, s16 *, 0xE) = 0;
        M2C_FIELD(&D_80160B9C_ovl_03, s8 *, 1) = 1;
        M2C_FIELD(&D_80160B9C_ovl_03, s8 *, 2) = 0;
        M2C_FIELD(&D_80160B9C_ovl_03, s8 *, 3) = 0;
    }
    func_8015FB30_ovl_03();
}
