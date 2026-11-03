extern u8 D_800C7650_ovl_01[];
extern s16 D_8017E682_ovl_10;
extern s32 D_8017E880_ovl_10;
void func_800269B8_ovl_01(s32);
void func_80075CCC_ovl_01(void);
void func_8004CE04_ovl_01(void);

void func_8017C570_ovl_10(void) {
    u8 *p;
    u32 v;
    D_8017E682_ovl_10 = 0;
    p = D_800C7650_ovl_01 + 0x18000;
    v = *(u32 *)(p + 0x1A3C);
    v &= ~0x100;
    v &= ~0x100000;
    v &= 0xBFFFFFFF;
    *(u32 *)(p + 0x1A3C) = v;
    func_800269B8_ovl_01(D_8017E880_ovl_10);
    func_80075CCC_ovl_01();
    func_8004CE04_ovl_01();
}
