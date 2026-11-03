extern u8 D_800C7650_ovl_01;
extern s32 D_8010C214_ovl_01;

s32 func_800331E8_ovl_01(void)
{
    u32 base = (u32)&D_800C7650_ovl_01;

    base += 0x18000;
    if ((*(s32 *)(base + 0x268) & 0x34F) != 0)
        return 1;
    if ((D_8010C214_ovl_01 & 0xF000) != 0)
        return 1;
    return 0;
}
