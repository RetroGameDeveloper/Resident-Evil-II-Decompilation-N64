void func_80166470_ovl_30(volatile u8 *a0)
{
    s32 f;
    s32 v;
    u8 b;
    u32 c;

    if (a0[6] == 0) {
        a0[6] = 1;
        a0[0x2C4] = 1;
        a0[0x2C5] = 1;
        c = 0x10130F00;
        f = *(volatile s32 *)a0;
        *(volatile u32 *)(a0 + 0x1E8) = c;
        b = a0[0x25C];
        *(volatile s16 *)(a0 + 0x272) = 0;
        f |= 0x400;
        b |= 1;
        *(volatile s32 *)a0 = f;
        a0[0x25C] = b;
    }
    v = *(s16 *)(a0 + 0x270);
    if (v == 1) {
        a0[5] = v;
        *(volatile s16 *)(a0 + 6) = 0;
    }
}
