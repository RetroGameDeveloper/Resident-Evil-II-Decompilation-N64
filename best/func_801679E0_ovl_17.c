extern u8 D_80167FBC_ovl_17[];

void func_801679E0_ovl_17(u8 *arg0) {
    u8 n = arg0[0x2D7];
    u32 i;
    u32 sel;
    u8 *e;
    u32 tbl;

    if (n == 0) return;
    n--;
    arg0[0x2D7] = n;
    if (!(n & 1)) return;

    tbl = (u32)D_80167FBC_ovl_17;
    i = 0;
    do {
        sel = *(u8 *)((func_80033634_ovl_01() & 7) + tbl);
        e = (u8 *)*(u32 *)(arg0 + 0x234) + sel * 0x178;
        if ((*(u32 *)e & 0x4B) == 1)
            func_80166FBC_ovl_17(arg0, sel, 9);
        i++;
    } while (i < 3);
}
