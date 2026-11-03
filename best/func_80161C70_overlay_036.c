extern u8 D_800C7650_ovl_01[];
typedef void (*Fn)(void *, s32, s32);
extern volatile Fn D_80162FA0_ovl_36[];
extern void func_8004DB8C_ovl_01(void *);
extern void func_8004DCE8_ovl_01(void *, s32);

typedef union { u64 q; struct { u32 lo; u32 hi; } w; } U64;

void func_80161C70_overlay_036(void *p)
{
    U64 b;
    u32 off;
    u8 *base;

    off = 0x18000;
    b.q = (u64)(u32)D_800C7650_ovl_01;
    base = (u8 *)(off + (u32)b.q);

    if (!(*(u32 *)(base + 0x1A60) & 0x20000000)) {
        u8 v = ((u8 *)p)[0x26F];
        if (v & 0x7F) ((u8 *)p)[0x26F] = v - 1;
        D_80162FA0_ovl_36[((u8 *)p)[4]](p, *(s32 *)((u8 *)p + 0x1A4),
                                        *(s32 *)((u8 *)p + 0x218));
        func_8004DB8C_ovl_01(p);
        func_8004DCE8_ovl_01(p, 0x400);
    }
}
