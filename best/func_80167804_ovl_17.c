extern volatile u32 D_800C7650_ovl_01[];
extern u8 D_800E10D0_ovl_01;
void func_80167804_ovl_17(s32 arg0) {
    u8 *p;
    u32 base;
    if (arg0 == 0) {
        p = &D_800E10D0_ovl_01;
    } else {
        base = 0x18000;
        p = *(u8 **)((u8 *)D_800C7650_ovl_01 + base + 0x1D3C);
    }
    p[4] = 3;
    p[5] = 0;
    p[6] = 0;
    p[7] = 0;
}
