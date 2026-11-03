extern u8 *D_800C527C_ovl_01;
extern u8 D_8012BF38_ovl_01[];
extern u8 D_8012F4D0_ovl_01[];
extern u8 D_801313F0_ovl_01[];

extern void func_80047B34_ovl_01(u8 *, s32);
extern void func_8004789C_ovl_01(u8 *, s32, s32, s32);
extern void func_800478DC_ovl_01(u8 *, u8, u8);
extern void func_800479EC_ovl_01(u8 *, u8, u8);
extern void func_80047B88_ovl_01(u8 *, s32);
extern void func_800478BC_ovl_01(u8 *, s32, s32, s32);

void func_80098068_ovl_01(void) {
    u8 *p;
    u8 *q;
    u8 *m;
    u8 *t;
    u8 *g;
    u8 *f;
    s32 n;
    s32 four;
    s32 c;

    g = D_8012BF38_ovl_01;
    f = D_8012F4D0_ovl_01;
    t = D_801313F0_ovl_01 + 8;
    p = D_800C527C_ovl_01 + 0x3B800;
    q = D_800C527C_ovl_01 + 0x3B828;
    m = p + 0xA;
    n = 2;
    do {
        t -= 4;
        n--;
        c = 0x80;
        func_80047B34_ovl_01(p, 0);
        func_8004789C_ovl_01(p, c, c, c);
        func_800478DC_ovl_01(p, t[0], t[1]);
        func_800479EC_ovl_01(p, t[2], t[3]);
        p += 0x14;
        *(u32 *)(m + 2) = (u32)f;
        *(u16 *)(m + 0) = 0;
        m += 0x14;
    } while (n != 0);
    n = 0x20;
    four = 4;
    do {
        func_80047B88_ovl_01(q, 1);
        func_800478BC_ovl_01(q, c, c, c);
        q[3] = four;
        q += 0x10;
    } while (--n != 0);
    *(s16 *)(g + 0x64) = 0xA;
    *(s16 *)(g + 0x66) = 0x46;
    *(s16 *)(g + 0x3C) = 0x3A;
    *(u16 *)(g + 0x60) = 0;
    *(u8 *)(g + 0x63) = 0;
    *(u8 *)(g + 0x62) = 0;
    *(s16 *)(g + 0x3E) = 0x1D;
}
