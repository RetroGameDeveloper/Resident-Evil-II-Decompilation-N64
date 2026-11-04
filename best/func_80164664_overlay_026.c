extern u8 D_800E10D0_ovl_01[];
s32 func_80032EA4_ovl_01(void *, s32, s32, s32);
s32 func_80089D34_ovl_01(void *, s32, s32, s32);
void func_80077D48_ovl_01(s32, void *);
void func_80164664_overlay_026(u8 *a, s32 b, s32 c) {
    u8 t;
    u8 ang;
    s32 val;
    if (a[7] == 0) {
        t = a[0x2b8];
        ang = a[0x2cd];
        a[7] = 1;
        a[0x2b6] = 1;
        *(s16 *)(a + 0x1f4) = 30;
        *(s16 *)(a + 0x1f6) = 45;
        a[0x2dc] = 131;
        a[0x2c1] = 5;
        a[0x2c3] = 3;
        a[0x2b8] = 0;
        a[0x2bf] = 90;
        val = (((ang * 3) * 4) + ang + 8) << 24;
        *(s32 *)(a + 0x1e8) = val + 0x3f00;
        a[0x2c0] = t;
        a[0x25c] |= 2;
        *(u8 **)(D_800E10D0_ovl_01 + 0x250) = a;
        *(s32 *)(D_800E10D0_ovl_01 + 4) = 0x500;
        *(s32 *)(D_800E10D0_ovl_01 + 0x224) = *(s32 *)(a + 0x224);
        D_800E10D0_ovl_01[0x26f] |= 0x80;
        *(s32 *)(D_800E10D0_ovl_01 + 0x228) = *(s32 *)(a + 0x228);
        func_80077D48_ovl_01(13, a);
    }
    val = func_80032EA4_ovl_01(D_800E10D0_ovl_01, *(s32 *)(a+0x28), *(s32 *)(a+0x30), 256);
    if (val << 16) *(u16 *)(D_800E10D0_ovl_01+0x66) = *(u16 *)(D_800E10D0_ovl_01+0x66) + val;
    if (func_80089D34_ovl_01(a,b,c,64)) {
        *(s16 *)(a+6) = 256;
        *(u16 *)(D_800E10D0_ovl_01+0x66) = *(u16 *)(a+0x66) + ((a[0x2cd]^1)<<11);
    }
}
