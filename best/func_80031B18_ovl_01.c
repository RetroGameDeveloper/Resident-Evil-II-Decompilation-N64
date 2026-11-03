extern u8 D_800C7650_ovl_01[];
void func_80031B18_ovl_01(s32 *arg0) {
    u8 *base = D_800C7650_ovl_01;
    s32 count = *(u8 *)(base + 0x1A76 + (s32)arg0);
    s32 p = *(s32 *)(base + 0x284 + (s32)arg0);
    s32 i = -1, j = 4, k;
    k = count * 0x300;
    *(s32 *)(base + 0x284 + (s32)arg0) = p + k;
    do {
        p = (p + 8) & -8;
        *(s32 *)(base + 0x18000 + j + 0x1D38) = p;
        *(s32 *)p = 0;
        p += 0x300;
        j += 4;
        count--;
        i++;
    } while (count != 0);
    *(s32 *)(base + 0x18000 + 0x28C) = (s32)(base + 0x19D40 + i * 4);
}
