extern s32 func_801626E8_ovl_14(u8 *arg0);
extern void func_800334F8_ovl_01(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
extern s32 func_8008A974_ovl_01(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
extern void func_80032B8C_ovl_01(u8 *arg0, s32 arg1);
extern void func_80162ED8_ovl_14(u8 *arg0, s32 arg1, s32 arg2);
extern s32 func_80033634_ovl_01(u8 *arg0);
extern void func_80032C9C_ovl_01(u8 *arg0, s32 arg1, s32 arg2);

void func_80163070_overlay_014(u8 *o, s32 a1, s32 a2)
{
    static void *jtbl_801686E0_ovl_14[5] = { &&L0, &&L1, &&L2, &&L0, &&L4 };
    s32 r;
    s32 v;
    u32 base;
    u32 addr;

    *(u8 *)(o + 0x2CE) = 4;
    r = func_801626E8_ovl_14(o);
    *(s32 *)(o + 0x2C4) = r;
    if (r != 0) {
        v = *(u8 *)(o + 0x2B5);
        if (v == 1) {
            goto store_10e;
        }
        if (v == 2) {
            goto store_10f;
        }
        goto end;
    store_10e:
        *(s32 *)(o + 4) = 0x010E0000;
        goto end;
    store_10f:
        *(s32 *)(o + 4) = 0x010F0000;
        goto end;
    }
    v = *(u8 *)(o + 6);
    if ((u32)v < 5) {
        base = (u32)jtbl_801686E0_ovl_14;
        addr = base + (v << 2);
        goto *(void **)addr;
    }
    goto end;
L0:
    *(s32 *)(o + 0x1E8) = 0x03002F00;
    *(u16 *)(o + 0x2C8) |= 2;
    *(u8 *)(o + 0x2CC) = 0;
    v = *(u8 *)(o + 7) + 1;
    *(u8 *)(o + 7) = v;
    if ((v & 0xFF) < 2) {
        *(u8 *)(o + 6) = 1;
    } else {
        *(u16 *)(o + 6) = 0x400;
        goto Dfull;
    }
L1:
    func_800334F8_ovl_01(o, a1, a2, 0);
    if (func_8008A974_ovl_01(o, a1, a2, 0x55) != 0) {
        *(u8 *)(o + 6) = 3;
    }
    func_80032B8C_ovl_01(o, 0);
    goto end;
L2:
    *(u16 *)(o + 6) = *(u16 *)(o + 6) + func_8008A974_ovl_01(o, a1, a2, 0x10400);
    goto end;
Dfull:
    *(s32 *)(o + 0x1E8) = 0x01001F00;
L4:
    func_80162ED8_ovl_14(o, 12, 0);
    func_800334F8_ovl_01(o, a1, a2, 0);
    if (func_8008A974_ovl_01(o, a1, a2, 0x80) != 0 && (func_80033634_ovl_01(o) & 3) == 0) {
        *(u16 *)(o + 6) = 0;
    }
    func_80032C9C_ovl_01(o, 0, 0);
    goto end;
end:
    return;
}
