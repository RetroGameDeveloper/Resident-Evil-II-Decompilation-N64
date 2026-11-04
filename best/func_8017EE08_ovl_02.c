extern u8 D_80185BDC_ovl_02[];
extern u8 D_80186614_ovl_02[];

void func_8017EE08_ovl_02(s32 arg0) {
    u16 *dst;
    u16 *src;
    s32 i;

    dst = (u16 *)(D_80185BDC_ovl_02 + (arg0 << 7));
    src = (u16 *)(D_80186614_ovl_02 + (arg0 << 7));
    for (i = 0; i < 0x40; i++) {
        *dst = *src + *dst;
        dst++;
        src++;
    }
}
