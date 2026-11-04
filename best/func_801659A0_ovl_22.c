extern u8 D_800C7650_ovl_01[];
s32 func_80033634_ovl_01(void);
s32 func_80036764_ovl_01_510_24(void*, s32, s32, s32);
s32 func_80032DEC_ovl_01(void*, s32, s32, s32);

void func_801659A0_ovl_22(u8 *p) {
    s32 r;
    s32 off = 0x18000;
    u8 *base;
    switch (p[7]) {
    case 0:
        r = func_80033634_ovl_01();
        p[7] = 1;
        *(s16*)(p + 0x1F4) = r & 1;
        /* fallthrough */
    case 1:
        r = func_80036764_ovl_01_510_24(p, *(s16*)(p + 0x1F4) + 4, 0xF, 0);
        p[7] += r;
        base = D_800C7650_ovl_01 + off;
        func_80032DEC_ovl_01(p, *(s32*)(base + 0x1AA8), *(s32*)(base + 0x1AB0), 8);
        break;
    case 2:
        *(s32*)(p + 4) = 0x01010000;
        break;
    }
}
