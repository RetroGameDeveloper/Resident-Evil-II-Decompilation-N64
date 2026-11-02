/* func_80165020_ovl_11 - ovl_11 */
s8 func_80033634_ovl_01(void);
s32 func_80077D48_ovl_01(s32, void *);
s32 func_80089D34_ovl_01(void *, s32, s32, s32);

void func_80165020_ovl_11(u8 *p, s32 arg1, s32 arg2) {
    static void *jtbl_8016DD10_ovl_11[5] = { &&L0, &&L1, &&L2, &&L2, &&L3 };
    s32 pick;
    u8 state;

    state = *(u8 *)(p + 6);
    if (state >= 5) goto end;
    goto *jtbl_8016DD10_ovl_11[state];

L0:
    *(s32 *)(p + 0x1E8) = 0x17000000;
    if (*(u16 *)(p + 0x2B6) & 4) {
        *(s32 *)(p + 0x1E8) = 0x16000000;
    }
    func_80089D34_ovl_01(p, arg1, arg2, 0x100);
    *(u8 *)(p + 6) = 1;
    *(u8 *)(p + 0x26F) |= 0x80;
    *(u8 *)(p + 0x25C) |= 1;
    if (!(*(u16 *)(p + 0x1AA) & 0x4000)) {
        *(u8 *)(p + 6) = 2;
    }
    goto end;

L1:
    *(s32 *)(p + 0x1E8) = ((func_80033634_ovl_01() & 0xF) << 16) + 0x08000F00;
    if (*(u16 *)(p + 0x2B6) & 4) {
        *(s32 *)(p + 0x1E8) = ((func_80033634_ovl_01() & 0xF) << 16) + 0x09000F00;
    }
    /* fall through */
L2:
    *(u8 *)(p + 6) = 3;
    if (*(u8 *)(p + 0x2D5) == 0) {
        if (func_80033634_ovl_01() & 1) {
            pick = 0xC;
        } else if (func_80033634_ovl_01() & 1) {
            pick = 0xB;
        } else {
            pick = 0xA;
        }
        func_80077D48_ovl_01(pick, p);
        *(u8 *)(p + 0x2D5) = 0x96;
    }
    *(u8 *)(p + 6) += func_80089D34_ovl_01(p, arg1, arg2, 0x100);
    goto end;

L3:
    *(s32 *)(p + 4) = 0x01010000;
    *(u8 *)(p + 0x26F) &= 0x7F;
    *(u8 *)(p + 0x25C) &= 0xFE;
    *(s32 *)(p) |= 0x0C000000;
end:
    return;
}
