extern u8 D_80167218_ovl_26[];
void func_80166984_ovl_26(void *);

typedef union { u64 q; struct { u32 lo; u32 hi; } w; } U64;

void func_801634E4_ovl_26(u8 *a) {
    U64 b;
    u8 *p = a;
    volatile u8 *t = D_80167218_ovl_26;
    u32 i;

    b.w.lo = (u32)p;
    p = (u8 *)(b.w.lo + 0x2B4);
    i = func_80033634_ovl_01();
    p[8] = t[i & 7];
    i = func_80033634_ovl_01();
    p[0xA] = t[i & 7] + 0x1E;
    p[9] = (*(s8 *)(a + 0x206)) ? 0xF : 0;
    *(s16 *)(a + 0x130) = (*(u8 *)(a + 0x2CD)) ? -0x320 : 0x320;
    *(u8 *)(a + 5) = 1;
    *(u16 *)(a + 6) = 0;
    func_80166984_ovl_26(a);
}
