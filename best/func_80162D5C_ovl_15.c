extern s32 func_8016352C_ovl_15(s32, s16, s32);
extern s32 func_801635F4_ovl_15(s32, s16, s32);
extern void func_80162F38_ovl_15(void *);

void func_80162D5C_ovl_15(u8 *arg0) {
    static void *jtbl_80165E10_ovl_15[6] = { &&E0, &&L1, &&L2, &&L3, &&L4, &&L5 };
    s32 mode = *(s8 *)(arg0 + 0x2C0);
    s32 r;

    if ((u32)mode >= 6) return;
    goto *jtbl_80165E10_ovl_15[mode];

L1:
    *(u8 *)(arg0 + 0x2C0) = *(u8 *)(arg0 + 0x2C0) + 1;
    *(volatile u16 *)(arg0 + 0x1F4) = 0;
L2:
    r = func_8016352C_ovl_15(4, ++*(u16 *)(arg0 + 0x1F4), 0x14);
    *(u16 *)(arg0 + 0x2C6) = *(u16 *)(arg0 + 0x2C6) + r;
    r = func_8016352C_ovl_15(4, *(s16 *)(arg0 + 0x1F4), -0x64);
    *(u16 *)(arg0 + 0x2C4) = *(u16 *)(arg0 + 0x2C4) + r;
    if (*(s16 *)(arg0 + 0x1F4) == 4) {
        *(u8 *)(arg0 + 0x2C0) = *(u8 *)(arg0 + 0x2C0) + 1;
        *(u16 *)(arg0 + 0x1F4) = 0;
    }
    return;
L3:
    r = func_801635F4_ovl_15(4, ++*(u16 *)(arg0 + 0x1F4), 0x14);
    *(u16 *)(arg0 + 0x2C6) = *(u16 *)(arg0 + 0x2C6) + r;
    r = func_801635F4_ovl_15(4, *(s16 *)(arg0 + 0x1F4), -0x64);
    *(u16 *)(arg0 + 0x2C4) = *(u16 *)(arg0 + 0x2C4) + r;
    if (*(s16 *)(arg0 + 0x1F4) == 4) {
        *(u8 *)(arg0 + 0x2C0) = *(u8 *)(arg0 + 0x2C0) + 1;
        *(u16 *)(arg0 + 0x1F4) = 0;
    }
    return;
L4:
    r = func_8016352C_ovl_15(3, ++*(u16 *)(arg0 + 0x1F4), -0x14);
    *(u16 *)(arg0 + 0x2C6) = *(u16 *)(arg0 + 0x2C6) + r;
    r = func_8016352C_ovl_15(3, *(s16 *)(arg0 + 0x1F4), 0x64);
    *(u16 *)(arg0 + 0x2C4) = *(u16 *)(arg0 + 0x2C4) + r;
    if (*(s16 *)(arg0 + 0x1F4) == 3) {
        *(u8 *)(arg0 + 0x2C0) = *(u8 *)(arg0 + 0x2C0) + 1;
        *(u16 *)(arg0 + 0x1F4) = 0;
    }
    goto T3;
L5:
    r = func_801635F4_ovl_15(3, ++*(u16 *)(arg0 + 0x1F4), -0x14);
    *(u16 *)(arg0 + 0x2C6) = *(u16 *)(arg0 + 0x2C6) + r;
    r = func_801635F4_ovl_15(3, *(s16 *)(arg0 + 0x1F4), 0x64);
    *(u16 *)(arg0 + 0x2C4) = *(u16 *)(arg0 + 0x2C4) + r;
    if (*(s16 *)(arg0 + 0x1F4) == 3) {
        *(u16 *)(arg0 + 0x1F4) = 0;
        *(u8 *)(arg0 + 0x2C0) = 0;
    }
T3:
    func_80162F38_ovl_15(arg0);
    return;
E0:
    return;
}
