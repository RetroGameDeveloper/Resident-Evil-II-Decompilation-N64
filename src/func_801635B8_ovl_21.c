extern void func_80163664_ovl_21(void *arg0, s32 arg1, s32 arg2, s32 arg3);
extern void * volatile jtbl_80163760_ovl_21[];

void func_801635B8_ovl_21(void *arg0, s32 arg1) {
    static void *const keep[8] = {
        &&L_A1, &&L_B, &&L_A2, &&L_D, &&L_A3, &&L_A4, &&L_G, &&L_R
    };
    s32 idx = arg1 - 1;
    void * volatile *tbl;

    if ((u32)idx >= 0x13) goto L_R;
    tbl = jtbl_80163760_ovl_21;
    goto *tbl[idx];

L_A1:
    func_80163664_ovl_21(arg0, 0, 0x10, 0x1000);
    return;

L_B:
    func_80163664_ovl_21(arg0, 4, 9, 0x800);
    return;

L_A2:
    func_80163664_ovl_21(arg0, 0, 0x10, 0x1000);
    return;

L_D:
    *(u8 *)((u8 *)arg0 + 0x2C4) = 7;
    return;

L_A3:
    func_80163664_ovl_21(arg0, 0, 0x10, 0x1000);
    return;

L_A4:
    func_80163664_ovl_21(arg0, 0, 0x10, 0x1000);
    return;

L_G:
    func_80163664_ovl_21(arg0, 5, 4, 0x1300);
    return;

L_R:
    return;
}
