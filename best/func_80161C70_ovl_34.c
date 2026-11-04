typedef union { u64 q; struct { u32 lo; u32 hi; } w; } U64;

extern u8 D_800C7650_ovl_01[];
extern u8 D_800E10F8_ovl_01[];
extern void (* volatile D_80162570_ovl_34[])(void *, s32, s32);

void func_80065400_ovl_01(void *, void *, s32, s32);
void func_8004DB8C_ovl_01(void *);
void func_8004DCE8_ovl_01(void *, s32);

void func_80161C70_ovl_34(u8 *arg0) {
    volatile u8 pad[8];
    U64 b;
    u32 off;
    u32 base;
    u8 t;

    func_80065400_ovl_01(arg0, D_800E10F8_ovl_01, 0, 0);
    off = 0x18000;
    b.q = (u64)(u32)D_800C7650_ovl_01;
    base = off + (u32)b.q;
    if (!(*(u32 *)(base + 0x1A60) & 0x20000000)) {
        t = arg0[0x26F];
        if (t & 0x7F) {
            arg0[0x26F] = t - 1;
        }
        D_80162570_ovl_34[arg0[4]](arg0, *(s32 *)(arg0 + 0x1A4), *(s32 *)(arg0 + 0x218));
        func_8004DB8C_ovl_01(arg0);
        func_8004DCE8_ovl_01(arg0, 0x400);
    }
}
