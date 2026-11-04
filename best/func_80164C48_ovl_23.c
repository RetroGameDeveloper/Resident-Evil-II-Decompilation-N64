extern u8 D_800C7650_ovl_01[];
s32 func_80033634_ovl_01(void);
s32 func_80032DEC_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);

void func_80164C48_ovl_23(u8 *p)
{
    s32 r;
    s32 off = 0x18000;
    s32 one = 1;
    u8 *base;

    switch (p[7]) {
    case 0:
        p[7] = one;
        r = func_80033634_ovl_01();
        *(s16 *)(p + 0x1F4) = r & 1;
        /* fallthrough */
    case 1:
        r = func_80036764_ovl_01_510_24(p, *(s16 *)(p + 0x1F4) + 6, 3, 0);
        p[7] += r;
        base = D_800C7650_ovl_01 + off;
        func_80032DEC_ovl_01(p, *(s32 *)(base + 0x1AA8), *(s32 *)(base + 0x1AB0), 8);
        break;
    case 2:
        *(s32 *)(p + 4) = 0x01010000;
        break;
    }
}
