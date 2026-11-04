extern u8 D_80162FA0_ovl_25[];
extern s32 func_800377B0_ovl_01(s32, s16, u8 *, s16 *);
extern s32 func_80033634_ovl_01(void);
extern void func_80077D48_ovl_01(s32, void *);

void func_80162BDC_ovl_25(void *arg0) {
    u8 *p = (u8 *)arg0;
    volatile u8 *tbl;
    s16 d[3];
    s32 n;
    u8 v;
    s32 a0;
    s32 r;

    tbl = D_80162FA0_ovl_25;
    n = (s32)tbl[(*(u16 *)(p + 0x1AA) & 1) * 7];
    d[0] = 0;
    d[1] = 0;
    d[2] = 0;
    func_800377B0_ovl_01(0x21000, *(s16 *)(p + 0x66),
                         (u8 *)(*(u32 *)(p + 0x234)) + n * 0x178 + 0x38, d);
    *(s16 *)(p + 0x1F2) = 0xFA;
    *(s32 *)(p + 4) = 0x01050000;
    v = *(u8 *)(p + 0x26F);
    v |= 0x80;
    *(u8 *)(p + 0x26F) = v;
    r = func_80033634_ovl_01();
    a0 = 3;
    if (!(r & 1))
        goto skip;
    a0 = 2;
skip:
    func_80077D48_ovl_01(a0, p);
}
