extern u8 D_800C7650_ovl_01[];
extern u8 D_800E10D0_ovl_01;
void func_801661AC_ovl_35(s32 arg0) {
    u32 offset = 0x18000;
    u8 *p;
    if (arg0 == 0) {
        p = &D_800E10D0_ovl_01;
    } else {
        u8 *base = D_800C7650_ovl_01 + offset;
        p = *(u8 **)(base + 0x1D3C);
    }
    p[4] = 3;
    p[5] = 0;
    p[6] = 0;
    p[7] = 0;
}
