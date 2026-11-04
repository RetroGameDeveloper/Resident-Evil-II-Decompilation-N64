extern u8 D_800C7650_ovl_01[];

void func_80033434_ovl_01(s16 *out, s32 flag, u16 *rec, s32 *tab)
{
    u32 off = 0x18000;
    u8 *base = (u8 *)D_800C7650_ovl_01;
    u8 *obj;
    s32 idx;
    u32 word;
    u8 *p;
    s32 n;
    u32 *ptr;
    u8 *src;
    u16 s0;
    u16 s2;

    base += off;
    obj = *(u8 **)(base + 0x288);
    idx = *(u8 *)(obj + 0x1E8);
    word = tab[idx];
    if (flag) {
        p = (u8 *)tab + (word >> 16);
        idx = word & 0xFFFF;
    n = (idx) - *(u8 *)(obj + 0x1E9) - 1;
    } else {
        p = (u8 *)tab + (word >> 16);
        n = *(u8 *)(obj + 0x1E9);
    }
    ptr = (u32 *)(p + n * 4);
    s0 = rec[0];
    s2 = rec[2];
    src = (u8 *)rec + s0;
    while (*ptr & 0x8000)
        ptr++;
    src += ((s2 >> 2) * (*ptr & 0xFFF)) * 4;
    out[0] = *(u16 *)(src + 4);
    out[1] = *(u16 *)(src + 0xA);
    out[2] = *(u16 *)(src + 8);
}
