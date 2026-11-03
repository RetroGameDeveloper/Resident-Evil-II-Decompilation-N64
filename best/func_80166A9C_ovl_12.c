extern u8 D_800C7650_ovl_01[];
extern u8 D_800E10D0_ovl_01[];

void func_80166A9C_ovl_12(s32 a0) {
    u8 *p;

    if (a0 != 0) {
        volatile u32 base = 0x18000;
        u8 *q = (u8 *)D_800C7650_ovl_01 + base;
        p = *(u8 * volatile *)(q + 0x1D3C);
    } else {
        p = D_800E10D0_ovl_01;
    }
    p[4] = 3;
    p[5] = 0;
    p[6] = 0;
    p[7] = 0;
}
