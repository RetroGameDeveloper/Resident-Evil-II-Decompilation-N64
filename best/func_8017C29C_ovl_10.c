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

s32 func_80025B0C_ovl_01();                         /* extern */
M2C_UNK func_800269B8_ovl_01(M2C_UNK);              /* extern */
M2C_UNK func_8017C5E4_ovl_10();                     /* extern */
M2C_UNK func_8017C820_ovl_10();                     /* extern */
M2C_UNK func_8017C870_ovl_10();                     /* extern */
M2C_UNK func_8017E18C_ovl_10(M2C_UNK, s32);         /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_8017E680_ovl_10;
extern u16 D_8017E684_ovl_10;
extern void *D_8017E860_ovl_10;
extern s32 D_8017E880_ovl_10;

void func_8017C29C_ovl_10(void) {
    s16 temp_v0;
    s32 temp_a1;
    void *temp_s0;

    temp_a1 = M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x1827C), s32 *, 0x2C);
    temp_s0 = temp_a1 + (M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x215FC) * 0x28);
    if (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) & 0x100) {
        if ((u32) (D_8017E684_ovl_10 - 6) < 4U) {
            M2C_FIELD(temp_s0, u8 *, 0xA) = 0xFFU;
            M2C_FIELD(temp_s0, u8 *, 0xB) = 0U;
            M2C_FIELD(temp_s0, u8 *, 0xC) = 0U;
            M2C_FIELD(temp_s0, u16 *, 0x26) = 0x4E20U;
        } else if ((u32) ((D_8017E684_ovl_10 - 0xA) & 0xFFFF) < 0xBU) {
            M2C_FIELD(temp_s0, u8 *, 0xA) = (u8) (M2C_FIELD(temp_s0, u8 *, 0xA) - 0xC);
            M2C_FIELD(temp_s0, u8 *, 0xB) = (u8) (M2C_FIELD(temp_s0, u8 *, 0xB) + 0xD);
            M2C_FIELD(temp_s0, u8 *, 0xC) = (u8) (M2C_FIELD(temp_s0, u8 *, 0xC) + 0xD);
            M2C_FIELD(temp_s0, u16 *, 0x26) = (u16) (M2C_FIELD(temp_s0, u16 *, 0x26) - 0x4B0);
        }
    }
    if (M2C_FIELD(&D_8017E680_ovl_10, s16 *, 4) == 0) {
        if ((M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) & 0x100) && (M2C_FIELD(&D_8017E680_ovl_10, u8 *, 0x35) == 0)) {
            func_8017E18C_ovl_10(0xC68, temp_a1);
            M2C_FIELD(&D_8017E680_ovl_10, u8 *, 0x35) = 1U;
        }
        func_8017C820_ovl_10();
    }
    D_8017E880_ovl_10 = func_80025B0C_ovl_01();
    func_800269B8_ovl_01(0);
    func_8017C870_ovl_10();
    func_8017C5E4_ovl_10();
    temp_v0 = (u16) M2C_FIELD(&D_8017E680_ovl_10, s16 *, 4) + 1;
    M2C_FIELD(&D_8017E680_ovl_10, s16 *, 4) = temp_v0;
    if (temp_v0 == 0xAA) {
        M2C_FIELD(&D_8017E680_ovl_10, s16 *, 0) = 0xA;
        M2C_FIELD(&D_8017E680_ovl_10, s16 *, 0x36) = 2;
        M2C_FIELD(&D_8017E680_ovl_10, s16 *, 0x2E) = 0x10;
        M2C_FIELD(&D_8017E680_ovl_10, s16 *, 4) = 0;
        M2C_FIELD(&D_8017E680_ovl_10, u16 *, 2) = (u16) (M2C_FIELD(&D_8017E680_ovl_10, u16 *, 2) + 1);
    }
    M2C_FIELD(D_8017E860_ovl_10, s16 *, 0x10F56) = 1;
    M2C_FIELD(temp_s0, s8 *, 4) = 0x3C;
    M2C_FIELD(temp_s0, s8 *, 5) = 0x3C;
    M2C_FIELD(temp_s0, s8 *, 6) = 0x3C;
}
