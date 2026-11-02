extern u8 *D_800EBB34_ovl_01;
extern s32 func_80069F4C_ovl_01(s32 *arg0, s32 arg1, s32 arg2, s32 arg3);

void func_8003ADC4_ovl_01(void)
{
    s32 buf[4];
    s32 r;
    u8 **pp;
    u8 *o;

    pp = &D_800EBB34_ovl_01;
    o = *pp;
    buf[0] = *(s16 *)(o + 0x34);
    buf[1] = *(s16 *)(o + 0x36);
    buf[2] = *(s16 *)(o + 0x38);
    r = func_80069F4C_ovl_01(buf, 2, 0x2000, 0);
    o = *pp;
    *(s32 *)(o + 0x14) = r;
    o[0] = o[0xB];
    o = *pp;
    o[1] = 5;
}
