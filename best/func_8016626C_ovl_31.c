extern s32 func_80089D34_ovl_01(void *, s32, s32, s32);
extern void func_800334F8_ovl_01(void *, s32, s32, s32);
extern void func_80032B8C_ovl_01(void *, s32);

void func_8016626C_ovl_31(u8 *arg0, s32 arg1, s32 arg2) {
    static void *jtbl_8016C160_ovl_31[7] = { &&L0, &&L1, &&L2, &&L3, &&L4, &&L5, &&L6 };
    u8 mode = arg0[6];
    u16 v;
    s16 t0;

    if ((u32)mode >= 7) return;
    goto *jtbl_8016C160_ovl_31[mode];

L0:
    *(s32 *)(arg0 + 0x1E8) = 0x17000000;
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
    if (*(u16 *)(arg0 + 0x270) & 1) {
        arg0[6] = 1;
        *(u8 *)(*(s32 *)(arg0 + 0x208) + 0xE) = 7;
        *(u16 *)(arg0 + 0x1AA) &= 0xBFFF;
    }
    *(s16 *)(arg0 + 0x1E0) = 0;
    *(u16 *)(arg0 + 0x1E2) = 0;
    *(s16 *)(arg0 + 0x1E4) = 0;
    *(u16 *)(arg0 + 0x1F4) = 0;
    arg0[0x1A2] = 0;
    return;
L1:
    arg0[6] = arg0[6] + func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
    v = *(u16 *)(arg0 + 0x1E2) + 0x1E - *(u16 *)(arg0 + 0x1F4);
    *(u16 *)(arg0 + 0x1E2) = v;
    *(s32 *)(arg0 + 0x2C) += (s16)v;
    t0 = *(s16 *)(arg0 + 0x25E);
    *(u16 *)(arg0 + 0x1F4) = *(u16 *)(arg0 + 0x1F4) - 1;
    if (!(t0 < *(s32 *)(arg0 + 0x2C))) return;
    *(s32 *)(arg0 + 0x2C) = t0;
    arg0[6] = 3;
    *(s32 *)(arg0 + 0x1E8) = 0x19050300;
    func_800334F8_ovl_01(arg0, arg1, arg2, 0);
    return;
L2:
    func_800334F8_ovl_01(arg0, arg1, arg2, 0);
    arg0[6] = arg0[6] + func_80089D34_ovl_01(arg0, arg1, arg2, 0x400);
    func_80032B8C_ovl_01(arg0, 0);
    return;
L3:
    *(s32 *)(arg0 + 0x1E8) = 0x09000700;
    arg0[6] = 5;
    func_800334F8_ovl_01(arg0, arg1, arg2, 0);
    arg0[6] = arg0[6] + func_80089D34_ovl_01(arg0, arg1, arg2, 0x200);
    func_80032B8C_ovl_01(arg0, 0);
    return;
L4:
    *(s32 *)(arg0 + 4) = 0x01010000;
    arg0[0x2BA] = 0x1E;
    return;
L5:
L6:
    return;
}
