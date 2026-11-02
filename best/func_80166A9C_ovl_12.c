extern u8 D_800C7650[];
extern u8 D_800E10D0[];

void func_80166A9C_ovl_12(s32 arg0) {
    u8 *p;

    if (arg0 != 0) {
        p = *(u8 * volatile *)(D_800C7650 + 0x19D3C);
    } else {
        p = D_800E10D0;
    }
    p[4] = 3;
    p[5] = 0;
    p[6] = 0;
    p[7] = 0;
}
