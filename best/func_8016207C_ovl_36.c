typedef union { u64 q; struct { u32 lo; u32 hi; } w; } U64;
typedef void (*Fn)(void *);

extern u8 D_800C7650_ovl_01[];
extern volatile Fn D_80162FD0_ovl_36[];

void func_8016207C_ovl_36(void *p)
{
    volatile u8 *q = (volatile u8 *)p + 0x2B4;
    U64 b;
    u8 *base;
    u8 v;

    v = q[4];
    if (v) {
        v--;
        q[4] = v;
        if (!v) {
            b.w.lo = (u32)D_800C7650_ovl_01;
            base = (u8 *)(b.w.lo + 0x18000);
            *(u16 *)(base + 0x1A78) &= 0xFFEF;
        }
    }
    v = q[1];
    if (v) {
        q[1] = v - 1;
    }
    D_80162FD0_ovl_36[((u8 *)p)[5]](p);
}
