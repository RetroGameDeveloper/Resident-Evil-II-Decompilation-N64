extern u8 D_800C7650_ovl_01[];
extern s32 D_801126AC_ovl_01;
extern s32 D_801126B4_ovl_01;
extern s32 func_801126A8_ovl_01;
extern u8 func_801126B0_ovl_01[];

extern void func_8008386C_ovl_01(s16, s32, s32, s16 *);
extern s32 func_8006A78C_ovl_01(s32);
extern s32 func_80066804_ovl_01(s32 *, s32, s32, s32);
extern s32 func_80069F4C_ovl_01(s32 *, s32, s32, s32);

s32 func_80161C70_ovl_14(u8 *p, s32 arg1) {
    s32 pos[4];
    s16 tmp[4];
    s32 r;

    func_8008386C_ovl_01(*(s16 *)(p + 0x66), *(s32 *)(p + 0x70), arg1, tmp);
    pos[0] = *(s32 *)(p + 0x28) + tmp[0];
    pos[1] = *(s32 *)(p + 0x2C) + tmp[1];
    pos[2] = *(s32 *)(p + 0x30) + tmp[2];
    if (func_8006A78C_ovl_01(*(s32 *)(p + 0x70)) == 0) {
        func_80066804_ovl_01(pos, 10, 1 << p[0x1A2], 0x200);
        return *(s32 *)(D_800C7650_ovl_01 + 0x18000 + 0x19B8) != 0;
    }
    *(s32 *)(D_800C7650_ovl_01 + 0x18000 + 0x19B8) = 0;
    r = func_80069F4C_ovl_01(pos, 0, 0x600, 0);
    if (D_801126AC_ovl_01) r = *(u16 *)(func_801126B0_ovl_01 + 2);
    if ((s16)r < pos[1]) {
        *(s16 *)(p + 0x2D2) = r;
        return 1;
    }
    if (D_801126B4_ovl_01 > func_801126A8_ovl_01) func_801126A8_ovl_01 = D_801126B4_ovl_01;
    if (pos[1] < func_801126A8_ovl_01) {
        *(u16 *)(p + 0x2D2) = *(u16 *)((u8 *)&func_801126A8_ovl_01 + 2);
        return 1;
    }
    return 0;
}
