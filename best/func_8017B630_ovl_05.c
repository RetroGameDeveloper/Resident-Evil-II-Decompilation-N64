extern void func_8002751C_ovl_01(s32, s32);
extern void func_80027530_ovl_01(s32, s32, s32, s32);
extern void func_800275F8_ovl_01(s32, s32, s32, void *);
extern s32 func_800276B4_ovl_01(s32);

extern u8 D_8017DDA0_ovl_05[];
extern u8 D_8017DECC_ovl_05[];
extern u8 D_8017E53C_ovl_05;
extern u8 D_8017E53F_ovl_05;
extern u8 D_8017E544_ovl_05[];
extern u8 D_8017E549_ovl_05;
extern u8 D_8017E54C_ovl_05;
extern u8 D_8017E54D_ovl_05;

void func_8017B630_ovl_05(void) {
    u8 a;
    s32 sp10[2];

    if (!func_800276B4_ovl_01(0)) return;

    a = D_8017E54C_ovl_05;
    *(u8 *)(D_8017DECC_ovl_05 + (D_8017DDA0_ovl_05[a * 2] + D_8017E544_ovl_05[a]) * 8) = 5;

    if (!(D_8017E53F_ovl_05 & 8)) goto ELSE;
    func_80027530_ovl_01(0x200, -0xC00, 7, 1);

    if (D_8017E54D_ovl_05 == 3) goto A;
    if (D_8017E54C_ovl_05 == 3) goto B;
    if (D_8017E54D_ovl_05 == 1) goto B;
    if (D_8017E54C_ovl_05 != 1) goto C;

B:
    if (D_8017E54D_ovl_05 == 3) goto A;
    if (D_8017E54D_ovl_05 != 1) goto D;

A:
    func_8002751C_ovl_01(4, 1);
    D_8017E53F_ovl_05 |= 1;
    func_8002751C_ovl_01(3, 0);
    if (D_8017E54D_ovl_05 == 3) {
        D_8017E53C_ovl_05 = 1;
    } else {
        D_8017E53C_ovl_05 = 0;
    }
    D_8017E549_ovl_05 = 5;
    goto COMMON;

D:
    func_8002751C_ovl_01(4, 1);
    D_8017E549_ovl_05 = 0;
    D_8017E53F_ovl_05 &= 0xFE;

COMMON:
    func_800275F8_ovl_01(0, 0x7FFF, 0xFFFF, NULL);
    goto DONE;

C:
    sp10[0] = 0x3000;
    sp10[1] = 0x40018F00;
    func_800275F8_ovl_01(0, 0x7FFF, 0xFFFF, sp10);
    D_8017E549_ovl_05 = 0;

DONE:
    D_8017E54C_ovl_05 = D_8017E54D_ovl_05;
    return;

ELSE:
    func_80027530_ovl_01(0x200, 0, 7, 1);
    func_800275F8_ovl_01(0, 0x7FFF, 1, 0);
    D_8017E549_ovl_05 = 4;
}
