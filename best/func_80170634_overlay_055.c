extern u8 D_80172158_ovl_07[];
extern u8 D_80171FE8_ovl_07[];
extern u16 D_80171D44_ovl_07;
extern u16 D_80171D2C_ovl_07;
extern s32 D_80171ADC_ovl_07;
extern s32 D_80171AF4_ovl_07;
void func_80083788_ovl_01(s32 *bits, u32 n);
s32 func_800837DC_ovl_01(s32 *bits, u32 n);
s32 func_80170748_ovl_07(s32 x);

void func_80170634_overlay_055(void)
{
    u8 *s0 = D_80172158_ovl_07;

    if (*(u8 *)(s0 + 0x156) >= 2) {
        func_80083788_ovl_01((s32 *)s0, 0x14);
        D_80171D44_ovl_07 |= 0x200;
    }
    s0 = D_80171FE8_ovl_07;
    if (func_800837DC_ovl_01((s32 *)s0, 0x9C) == 0) {
        if (func_800837DC_ovl_01((s32 *)(s0 + 0x170), 0x12) != 0) {
            D_80171D44_ovl_07 |= 0x400;
        }
    }
    if (func_80170748_ovl_07(0xF) != 0) {
        D_80171ADC_ovl_07 = 0;
        D_80171D44_ovl_07 |= 0x10;
    }
    if (func_80170748_ovl_07(0x12) != 0) {
        D_80171AF4_ovl_07 = 0;
        D_80171D44_ovl_07 |= 0x40;
    }
    s0 = D_80171FE8_ovl_07;
    if (func_800837DC_ovl_01((s32 *)s0, 0x9C) == 0) {
        func_80083788_ovl_01((s32 *)(s0 + 0x170), 0x12);
    }
}
