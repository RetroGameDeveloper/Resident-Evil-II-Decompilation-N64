extern u8 D_800C7650_ovl_01[];
extern u16 D_80166C18_ovl_12[];
extern u16 D_80166C38_ovl_12[];

void func_801651B4_ovl_12(u8 *p) {
    u16 *tbl;
    s32 v;
    u8 *base;
    s32 t;
    union { u64 q; struct { u32 hi; u32 lo; } w; } b;

    if (p[7] != 0) return;
    p[7] = 1;
    t = func_80033634_ovl_01() & 3;
    b.w.lo = 0x18000;
    b.w.hi = (u32)D_800C7650_ovl_01;
    base = (u8 *)(b.w.lo + b.w.hi);
    if (*(s32 *)(base + 0x1A3C) & 0x20) {
        v = func_80033634_ovl_01();
        tbl = D_80166C38_ovl_12;
    } else {
        v = func_80033634_ovl_01();
        tbl = D_80166C18_ovl_12;
    }
    *(u16 *)(p + 0x1F2) = tbl[v & 0xF] + t;
    p[0x1EF] = 0xD;
    p[0x1EE] = 0xD;
    p[0x1ED] = 0xD;
    *(s32 *)p &= 0xE3FFFFFF;
    p[0x26F] |= 0x80;
}
