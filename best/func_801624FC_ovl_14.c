extern void func_80082230_ovl_01(void *arg0, s32 arg1, s32 arg2);
extern void func_800377B0_ovl_01(s32 arg0, s32 arg1, void *arg2, void *arg3);
extern s32 func_80033634_ovl_01(void);
extern u8 D_800C7650_ovl_01[];

void func_801624FC_ovl_14(u8 *o)
{
    u8 buf[8];
    u8 *s0;
    u8 *s2;
    s32 a1;

    s0 = *(u8 **)(o + 0x208);
    s2 = *(u8 **)(o + 0x234);
    func_80082230_ovl_01(buf, 0, 8);
    switch (*(u8 *)(o + 0x2B7)) {
    case 0:
        a1 = 0x2328 - (*(s16 *)(o + 0x25E) - *(s32 *)(s2 + 0x50));
        a1 = a1 < 0 ? 0 : a1;
        *(u16 *)(s0 + 4) = (*(u16 *)(o + 0x2B8) * a1) / 9000;
        *(u16 *)(s0 + 6) = (*(u16 *)(o + 0x2BA) * a1) / 9000;
        break;
    case 1:
        *(s32 *)(s0 + 0x14) = (s32)(s2 + 0x33C);
        *(u16 *)(o + 0x1F6) = 0;
        *(s32 *)o |= 0xA;
        *(u8 *)(o + 0x2B7) = *(u8 *)(o + 0x2B7) + 1;
    case 2:
        if (*(s16 *)(o + 0x1F6) < 0x70) {
            a1 = (s16)(*(u16 *)(o + 0x1F6) + 1);
            *(u16 *)(o + 0x1F6) = a1;
            if (a1 < 0x10) {
                *(u8 *)(s0 + 0x18) = (u32)(*(u8 *)(D_800C7650_ovl_01) * (a1 + 1)) >> 4;
                *(u8 *)(s0 + 0x19) = (u32)((*(u16 *)(D_800C7650_ovl_01) & 0xFF) * (*(s16 *)(o + 0x1F6) + 1)) >> 4;
                *(u8 *)(s0 + 0x1A) = (u32)(((*(u32 *)(D_800C7650_ovl_01) >> 8) & 0xFF) * (*(s16 *)(o + 0x1F6) + 1)) >> 4;
            }
            *(u16 *)(s0 + 4) = *(u16 *)(s0 + 4) + 4;
            *(u16 *)(s0 + 6) = *(u16 *)(s0 + 6) + 4;
        }
        break;
    }
    if (*(s16 *)(o + 0x1F2) > 0) {
        if ((func_80033634_ovl_01() & 0x1F) == 0) {
            func_800377B0_ovl_01(0x150800, 0, s2 + 0xD70, buf);
        }
    }
}
