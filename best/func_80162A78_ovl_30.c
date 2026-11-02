extern u8 D_80167D3C_ovl_30;
void func_80167B58_ovl_30(void *, u8, s32, s32);
void func_80162A78_ovl_30(u8 *p) {
    u32 i;
    s32 off;
    u8 *table;
    u32 *word;
    if (p[7] == 0) {
        p[7] = 1;
        return;
    }
    *(s16 *)(p + 0x1AA) = p[0x1AB];
    *(u32 *)p &= ~0x800;
    p[0x25C] &= 0xFE;
    table = &D_80167D3C_ovl_30;
    i = 0;
    do {
        i++;
        func_80167B58_ovl_30(p, *table, 0, 0);
        table = &D_80167D3C_ovl_30 + i;
    } while (i < 8);
    i = 0x14;
    off = 0x1D60;
    do {
        i++;
        word = (u32 *)(*(u8 **)(p + 0x234) + off);
        *word &= ~0x400;
        off += 0x178;
    } while (i < 0x17);
    p[0x2C4] = 0;
    p[0x2C5] = 1;
    p[5] = 1;
    *(s16 *)(p + 6) = 0;
    p[0x26F] &= 0x7F;
}
