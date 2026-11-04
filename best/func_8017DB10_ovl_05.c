extern s32 D_8010B688_ovl_01;
extern u8 D_8017E53C_ovl_05;
extern u8 D_8017E53E_ovl_05;
extern u8 D_8017E549_ovl_05;
extern s32 D_8017E530_ovl_05;
extern u8 D_8017E514_ovl_05;
extern u8 D_8017DD8C_ovl_05;

s32 func_80004CFC(u16, s32, u32, void *);
s32 func_8002607C_ovl_01(s32);
s32 func_800479F8_ovl_01(s32, void *, s32, s32);

void func_8017DB10_ovl_05(void) {
    s32 *pB = &D_8010B688_ovl_01;
    u8 *p53c = &D_8017E53C_ovl_05;
    u16 pair[2];
    s32 result;
    pair[0] = 0x14CA;
    pair[1] = 0x14C9;
    result = func_80004CFC(pair[*p53c], *pB, 0x80000000, &D_8017DD8C_ovl_05);
    func_8002607C_ovl_01(*pB);
    if (*p53c == 0)
        result = func_800479F8_ovl_01(D_8017E530_ovl_05, &D_8017E514_ovl_05, 0x14CB, 1);
    if (result == -1)
        D_8017E53E_ovl_05 |= 1;
    D_8017E549_ovl_05 = 0;
}
