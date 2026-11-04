extern u8 D_801672BC_ovl_26[];
s32 func_80033634_ovl_01(void);
void func_80166B18_ovl_26(void *arg0, u8 arg1, s32 arg2);
s32 func_80077D48_ovl_01(s32 arg0, void *arg1);

void func_8016512C_ovl_26(u8 *p) {
    volatile u8 *tbl;

    if (p[0x2D9] == 0) {
        p[0x2C1] = 6;
        p[0x2C3] = 3;
    }
    tbl = D_801672BC_ovl_26;
    func_80166B18_ovl_26(p, tbl[func_80033634_ovl_01() & 7], 0);
    if (p[5] == 0x12) {
        func_80166B18_ovl_26(p, tbl[func_80033634_ovl_01() & 7], 1);
    }
    func_80077D48_ovl_01(2, p);
    *(s32 *)(p + 4) = (p[0x2CA] << 16) + (p[0x2CB] << 8) + p[0x2CC] + 0x01000000;
}
