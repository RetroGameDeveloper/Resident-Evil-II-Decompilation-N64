extern void func_80089D34_ovl_01(void *, s32, s32, s32);
extern s32 func_800837DC_ovl_01(void *, s32);
extern u8 D_800E8C80_ovl_01[];

void func_80164C18_ovl_26(void *arg0, s32 arg1, s32 arg2)
{
    u8 *p = arg0;

    if (p[7] == 0) {
        p[7] = 1;
        *(s32 *)(p + 0x1E8) = 0x0C000000;
        p[0x25C] |= 2;
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x10040);
        p[0x2C1] = 8;
        p[0x2C3] = 3;
    }
    if (func_800837DC_ovl_01(D_800E8C80_ovl_01, 0x5F) != 0) {
        *(u16 *)(p + 6) = 0x100;
    }
}
