extern s32 D_8013146C_ovl_01;
extern s32 D_80134460_ovl_01;
extern u8 D_800C7650_ovl_01[];
extern u8 D_800E7650_ovl_01[];
extern u8 D_8012F4D0_ovl_01[];
s32 func_80047BA4_ovl_01(void *dst, s16 *src, s32 a2, s32 a3);
s32 func_80047CF8_ovl_01(void *dst, s16 *src, s32 a2, s32 a3);

void func_80025D60_ovl_01(void)
{
    if (D_8013146C_ovl_01 != 0) {
        D_80134460_ovl_01 = 1;
    }
}

s32 func_8008C4FC_ovl_01(u32 arg0)
{
    u32 base = (u32)D_800C7650_ovl_01;
    u32 cnt = (u32)D_800E7650_ovl_01;
    u32 hi = 0x20000;
    u32 p = base;
    s32 i = 0;

    for (;;) {
        if (*(u8 *)(p + hi + 0x1818) == arg0) {
            return i;
        }
        i++;
        if (!(i < *(u8 *)(cnt + 0x1488))) {
            return -1;
        }
        p += 4;
    }
}

void func_8008C950_ovl_01(u32 arg0, s32 arg1)
{
    u32 base = (u32)D_800C7650_ovl_01;
    s16 sp[4];
    u32 q;

    if (*(s32 *)(base + 0x18000 + 0x1A5C) & 0x8000) {
        sp[2] = 0x28;
        sp[3] = 0x1E;
        q = arg0 / 3;
        sp[0] = (arg0 - q * 3) * 0x28;
        sp[1] = q * 0x1E;
        func_80047BA4_ovl_01(D_8012F4D0_ovl_01, sp, arg1, arg0);
    }
}

void func_8008CBFC_ovl_01(u32 arg0)
{
    u32 base = (u32)D_800C7650_ovl_01;
    s16 sp[4];
    u32 q;

    if (*(s32 *)(base + 0x18000 + 0x1A5C) & 0x8000) {
        sp[0] = 0x50;
        sp[2] = 0x28;
        sp[1] = 0;
        sp[3] = 0x1E;
        q = arg0 / 3;
        func_80047CF8_ovl_01(D_8012F4D0_ovl_01, sp,
                             ((arg0 - q * 3) * 0x28) & 0xFFF8,
                             (q * 0x1E) & 0xFFFE);
    }
}
