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

s32 func_80025B0C_ovl_01();                         /* extern */
M2C_UNK func_800269B8_ovl_01(M2C_UNK);              /* extern */
M2C_UNK func_8002751C_ovl_01(M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_80027530_ovl_01(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_800275F8_ovl_01(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_800479F8_ovl_01(s32, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_8004CEC0_ovl_01(M2C_UNK, s32 *);       /* extern */
M2C_UNK func_80052BEC_ovl_01(M2C_UNK, M2C_UNK);     /* extern */
extern s32 D_800C527C_ovl_01;
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E9118_ovl_01;
extern s32 D_800E91F0_ovl_01;
extern s32 D_8010BF48_ovl_01;
extern M2C_UNK D_8017E4DC_ovl_05;
extern s32 D_8017E530_ovl_05;
extern s32 D_8017E534_ovl_05;
extern s32 D_8017E538_ovl_05;
extern s8 D_8017E53C_ovl_05;
extern s8 D_8017E53D_ovl_05;
extern s8 D_8017E53E_ovl_05;
extern s8 D_8017E53F_ovl_05;
extern s8 D_8017E540_ovl_05;
extern s8 D_8017E541_ovl_05;
extern s8 D_8017E542_ovl_05;
extern M2C_UNK D_8017E544_ovl_05;
extern s8 D_8017E549_ovl_05;
extern s8 D_8017E54A_ovl_05;
extern u8 D_8017E54B_ovl_05;
extern s8 D_8017E54C_ovl_05;
extern s8 D_8017E54D_ovl_05;
extern u8 D_8017E54E_ovl_05;
extern s32 D_8017E550_ovl_05;
extern s32 D_8017E554_ovl_05;

void func_8017B81C_ovl_05(void) {
    u8 temp_s3;
    u8 temp_v1;

    D_8017E53E_ovl_05 = 0;
    D_8010BF48_ovl_01 = (D_8010BF48_ovl_01 * 2) | 1;
    func_8004CEC0_ovl_01(0, &D_8010BF48_ovl_01);
    D_8017E538_ovl_05 = D_800E91F0_ovl_01;
    D_8017E534_ovl_05 = func_80025B0C_ovl_01();
    func_800269B8_ovl_01(0);
    func_8002751C_ovl_01(4, 1);
    temp_s3 = M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x18538);
    M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x18538) = 0U;
    func_800275F8_ovl_01(0, 0x7FFF, 1, 0);
    M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x18538) = 1U;
    func_800275F8_ovl_01(0, 0x7FFF, 1, 0);
    temp_v1 = M2C_FIELD(&D_800E9118_ovl_01, u8 *, 0xCB);
    M2C_FIELD(&D_800E9118_ovl_01, u8 *, 0xCB) = 0U;
    M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x18538) = temp_s3;
    D_8017E54B_ovl_05 = temp_v1;
    func_80052BEC_ovl_01(0xF00C, 0xC04);
    M2C_FIELD(&D_800E9118_ovl_01, s8 *, 0xE) = 0;
    D_8017E54E_ovl_05 = M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x215FD);
    if (M2C_FIELD(&D_800C7650_ovl_01, void **, 0x1827C) != NULL) {
        D_8017E554_ovl_05 = M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x1827C), s32 *, 0x2C);
    }
    D_8017E549_ovl_05 = 0;
    D_8017E54A_ovl_05 = 0;
    D_8017E550_ovl_05 = 0x2C808080;
    D_8017E53F_ovl_05 = 0;
    D_8017E53C_ovl_05 = 0;
    D_8017E53D_ovl_05 = 0;
    D_8017E54D_ovl_05 = 0;
    D_8017E54C_ovl_05 = 0;
    M2C_FIELD(&D_8017E544_ovl_05, s8 *, 0) = 0;
    M2C_FIELD(&D_8017E544_ovl_05, s8 *, 1) = 0;
    M2C_FIELD(&D_8017E544_ovl_05, s8 *, 2) = 0;
    M2C_FIELD(&D_8017E544_ovl_05, s8 *, 3) = 0;
    M2C_FIELD(&D_8017E544_ovl_05, s8 *, 4) = 0;
    D_8017E542_ovl_05 = 0;
    D_8017E540_ovl_05 = 0;
    D_8017E541_ovl_05 = 0;
    D_8017E530_ovl_05 = func_800479F8_ovl_01(D_800C527C_ovl_01 + 0x3B800, &D_8017E4DC_ovl_05, 0x14C8, 1);
    func_80027530_ovl_01(0x200, -0x1800, 7, 1);
}
