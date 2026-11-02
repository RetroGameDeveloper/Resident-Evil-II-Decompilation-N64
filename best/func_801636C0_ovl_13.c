/* func_801636C0_ovl_13 - ovl_13 */
s32 func_80077D48_ovl_01(s32, void *);
s32 func_80089D34_ovl_01(void *, s32, s32, s32);
s32 func_80033634_ovl_01(void);
void func_80165BD8_ovl_13(void *, s32, s32);

void func_801636C0_ovl_13(u8 *p, s32 arg1, s32 arg2) {
    static void *jtbl_801663F8_ovl_13[5] = { &&L0, &&L1, &&L2, &&L3, &&L4 };
    void **tbl;
    s16 v[3];
    u8 state;
    u8 *q;

    state = *(u8 *)(p + 6);
    if (state >= 5) goto end;
    tbl = jtbl_801663F8_ovl_13;
    goto *tbl[state];

L0:
    func_80077D48_ovl_01(3, p);
    *(s32 *)(p + 0x1E8) = 0x09000700;
    *(u16 *)(p + 0x1E2) = 0;
    *(u16 *)(p + 0x1E0) = 0;
    *(u16 *)(p + 0x2C0) = 0;
    *(u8 *)(p + 0x2B9) = 0;
    *(u8 *)(p + 6) = 1;
L1:
    if (func_80089D34_ovl_01(p, arg1, arg2, 0x200) != 0) {
        *(u8 *)(p + 6) = 2;
    }
L2:
    *(u16 *)(p + 0x2C0) += 0x14;
    *(s32 *)(p + 0x2C) += (s16)*(u16 *)(p + 0x2C0);
    v[0] = *(u16 *)(p + 0x2A);
    v[1] = *(u16 *)(p + 0x2E);
    v[2] = *(u16 *)(p + 0x32);
    arg1 = *(s16 *)(p + 0x25E) - 0xFA;
    if (arg1 >= *(s32 *)(p + 0x2C)) goto end;
    func_80077D48_ovl_01(5, p);
    *(s32 *)(p + 0x2C) = arg1;
    *(s32 *)(p + 0x1E8) = 0x0B000700;
    *(u8 *)(p + 0x2B5) = func_80033634_ovl_01() & 0xF;
    *(u16 *)(p + 0x68) = 0;
    *(u8 *)(p + 6) = 3;
    goto end;
L3:
    q = p + 0x2B5;
    if (--*q == 0xFF) {
        *(u8 *)(p + 6) = 4;
    }
    func_80089D34_ovl_01(p, arg1, arg2, 0x200);
    q = p + 0x1E9;
    --*q;
    goto end;
L4:
    if (func_80089D34_ovl_01(p, arg1, arg2, 0x200) != 0) {
        func_80165BD8_ovl_13(p, 1, 9);
    }
end:
    return;
}
