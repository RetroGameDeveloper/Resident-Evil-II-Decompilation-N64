typedef union { u64 q; struct { u32 lo; u32 hi; } w; } U64;

extern u8 D_800C7650_ovl_01[];
extern void (*D_80161FD0_ovl_38[])(void);

void func_80161C70_ovl_38(u8 *p) {
    U64 b;
    u8 *base;
    u32 off = 0x18000;
    void (**tbl)(void);

    b.w.lo = (u32)D_800C7650_ovl_01;
    base = (u8 *)(b.w.lo + off);
    if (*(u32 *)(base + 0x1A60) & 0x20000000) {
        return;
    }
    tbl = D_80161FD0_ovl_38;
    tbl[p[4]]();
    if (*(s16 *)(p + 0x270) == 1) {
        *(u32 *)(p + 4) = 0x03000000;
        *(s16 *)(p + 0x270) = 0;
    }
}
