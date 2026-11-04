extern s32 func_800662B8_ovl_01(u8 *arg0, u8 *arg1);
extern u32 D_80168CE0_ovl_14;

s32 func_801622FC_overlay_014(u8 *o)
{
    static void *jtbl_80168650_ovl_14[7] = { &&end, &&L1, &&L2, &&L3, &&L4, &&L5, &&end };
    u8 *s0;
    u8 *d;
    s32 v;

    s0 = *(u8 **)(o + 0x234) + 0x2050;
    v = *(u8 *)(o + 0x2B6);
    if ((u32)v < 7) {
        goto *jtbl_80168650_ovl_14[v];
    }
    goto end;
L4:
    *(u8 *)(o + 0x2DC) = 0;
    *(u8 *)(o + 0x2B6) = *(u8 *)(o + 0x2B6) + 1;
    v = *(u8 *)(o + 0x2DC) + 1;
    *(u8 *)(o + 0x2DC) = v;
    if ((u8)v != 0x11) {
        goto end;
    }
    *(u8 *)(o + 0x2B6) = *(u8 *)(o + 0x2B6) + 1;
    goto end;
L1:
    d = *(u8 **)(s0 + 0x120);
    *(s32 *)(s0 + 0) = 1;
    v = *(u16 *)(d + 0xC) + 0x800;
    *(u16 *)(d + 0xC) = v;
    func_800662B8_ovl_01(o, s0);
    if (*(s16 *)(*(u8 **)(s0 + 0x120) + 0xC) < 0x1000) {
        goto end;
    }
    *(u8 *)(o + 0x2B6) = *(u8 *)(o + 0x2B6) + 1;
    goto end;
L2:
    d = *(u8 **)(s0 + 0x120);
    v = *(u16 *)(d + 0x10) + 0x400;
    *(u16 *)(d + 0x10) = v;
    func_800662B8_ovl_01(o, s0);
    if (*(s16 *)(*(u8 **)(s0 + 0x120) + 0x10) < 0x1000) {
        goto end;
    }
    *(u8 *)(o + 0x2DC) = 4;
    *(u8 *)(o + 0x2B6) = *(u8 *)(o + 0x2B6) + 1;
    goto end;
L3:
    v = *(u8 *)(o + 0x2DC);
    d = *(u8 **)(s0 + 0x120);
    *(u16 *)(d + v * 4 + 4) = *(u16 *)(d + v * 4 + 4) + 0x1000;
    func_800662B8_ovl_01(o, s0);
    v = *(u8 *)(o + 0x2DC);
    if (*(s16 *)(*(u8 **)(s0 + 0x120) + v * 4 + 4) < 0x1000) {
        goto end;
    }
    *(u8 *)(o + 0x2DC) = v + 1;
    if ((u8)(v + 1) != 0xB) {
        goto end;
    }
    *(u8 *)(o + 0x2B6) = *(u8 *)(o + 0x2B6) + 1;
    d = *(u8 **)(s0 + 0x120);
    *(u16 *)(d + 0xC) = 0;
    d = *(u8 **)(s0 + 0x120);
    *(u16 *)(d + 0x10) = 0;
    d = *(u8 **)(s0 + 0x120);
    *(u16 *)(d + 0x14) = 0;
    d = *(u8 **)(s0 + 0x120);
    *(u16 *)(d + 0x18) = 0;
    d = *(u8 **)(s0 + 0x120);
    *(u16 *)(d + 0x1C) = 0;
    d = *(u8 **)(s0 + 0x120);
    *(u16 *)(d + 0x20) = 0;
    d = *(u8 **)(s0 + 0x120);
    *(u16 *)(d + 0x24) = 0;
    d = *(u8 **)(s0 + 0x120);
    *(u16 *)(d + 0x28) = 0;
    goto end;
L5:
    d = *(u8 **)(s0 + 0x120);
    v = *(u16 *)(d + 0x2C) - 0x1000;
    *(u16 *)(d + 0x2C) = v;
    func_800662B8_ovl_01(o, s0);
    if (*(s16 *)(*(u8 **)(s0 + 0x120) + 0x2C) > 0) {
        goto end;
    }
    *(u8 *)(o + 0x2B6) = 0;
    D_80168CE0_ovl_14 = 0;
    *(s32 *)(s0 + 0) = 0;
    goto end;
end:
    return 0;
}
