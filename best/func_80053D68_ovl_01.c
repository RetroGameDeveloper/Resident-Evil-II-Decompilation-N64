extern u8 *D_8010D8E0_ovl_01;
void func_800824A4_ovl_01(s32, s32, s32);

void func_800540B4_ovl_01(u8 *arg0, u8 *arg1) {
    *(s32 *)(arg0 + 0) = *(s32 *)(arg1 + 0);
    *(s32 *)(arg0 + 4) = *(s32 *)(arg1 + 4);
    *(s32 *)(arg0 + 8) = *(s32 *)(arg1 + 8) + *(u16 *)(arg1 + 0xA);
    *(s32 *)(arg0 + 0xC) = *(u8 *)(arg1 + 0xC) * 0x1000000
                         + *(u8 *)(arg1 + 0xD) * 0x10000
                         + *(u8 *)(arg1 + 0xE) * 0x100
                         + *(u8 *)(arg1 + 0xF);
}

void func_80053D68_ovl_01(void) {
    u8 *p = D_8010D8E0_ovl_01;
    u8 *pa = p + 4;
    u8 *pv = p + 0x16C;
    u32 i = 0;

    do {
        *pa = 0x20;
        pa++;
        *pv = 0;
        i++;
        pv++;
    } while (i < 0x168);
    p[0x2D7] = 0;
    p[1] = 0;
    p[0] = 0;
}

void func_80053CA8_ovl_01(void) {
    u8 *p = D_8010D8E0_ovl_01;
    u32 i;
    s32 d, c, b, a;

    d = 0x18A;
    c = 0x16C;
    b = 0x22;
    a = 4;
    for (i = 0; i < 0xB; i++) {
        func_800824A4_ovl_01((s32)(p + a), (s32)(p + b), 0x1E);
        func_800824A4_ovl_01((s32)(p + c), (s32)(p + d), 0x1E);
        d += 0x1E;
        c += 0x1E;
        b += 0x1E;
        a += 0x1E;
    }
    for (i = 0; i < 0x1E; i++) {
        p[i + 0x14E] = 0x20;
        p[i + 0x2B6] = 0;
    }
}

void func_80053C7C_ovl_01(u8 arg0) {
    u8 *p = D_8010D8E0_ovl_01;
    u8 *q;
    s32 m;
    s32 idx;

    m = p[1] * 0x1E;
    idx = p[0] + m;
    q = p + idx;
    q[4] = arg0;
}
