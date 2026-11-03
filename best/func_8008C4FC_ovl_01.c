extern u8 D_800C7650_ovl_01[];
extern u8 D_800E7650_ovl_01[];
extern s32 D_8013146C_ovl_01;
extern s32 D_80134460_ovl_01;

s32 func_8008C4FC_ovl_01(u32 arg0)
{
    u32 i = 0;
    u32 hi = 0x20000;
    u32 cnt = (u32)D_800E7650_ovl_01;
    u32 p = (u32)D_800C7650_ovl_01;

    do {
        if (*(u8 *)(p + hi + 0x1818) == arg0) {
            return i;
        }
        i += 1;
        p += 4;
    } while (i < *(u8 *)(cnt + 0x1488));
    return -1;
}

void func_80025D60_ovl_01(void)
{
    if (D_8013146C_ovl_01 != 0) {
        D_80134460_ovl_01 = 1;
    }
}
