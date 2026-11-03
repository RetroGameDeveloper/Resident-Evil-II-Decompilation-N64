extern void func_80089D34_ovl_01(void *, s32, s32, s32);
extern void func_801636DC_ovl_27(void *, s32);

void func_80162094_ovl_27(u8 *arg0, s32 arg1, s32 arg2) {
    s32 t;
    u16 tmp;

    if (arg0[6] == 0) {
        tmp = *(u16 *)(arg0 + 0x2C0);
        t = arg0[5];
        arg0[6] = 1;
        *(u16 *)(arg0 + 0x2C2) = 0;
        *(u16 *)(arg0 + 0x2BC) = tmp;
        *(s32 *)(arg0 + 0x1E8) = (t << 24) + ((arg0[0x2B4] << (t + 2)) << 16) + 0x700;
    }
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x200);
    func_801636DC_ovl_27(arg0, 0);
}
