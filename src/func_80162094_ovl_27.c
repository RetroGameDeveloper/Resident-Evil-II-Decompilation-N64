extern void func_80089D34_ovl_01(void *, s32, s32, s32);
extern void func_801636DC_ovl_27(void *, s32);

void func_80162094_ovl_27(void *arg0, s32 arg1, s32 arg2) {
    u8 *p = arg0;
    u16 v1;
    u32 a, b;

    if (p[6] == 0) {
        v1 = *(u16 *)(p + 0x2C0);
        a = p[5];
        p[6] = 1;
        b = *(u8 *)(p + 0x2B4);
        *(u16 *)(p + 0x2C2) = 0;
        *(u16 *)(p + 0x2BC) = v1;
        *(s32 *)(p + 0x1E8) = (a << 24) + ((b << (a + 2)) << 16) + 0x700;
    }
    func_80089D34_ovl_01(p, arg1, arg2, 0x200);
    func_801636DC_ovl_27(p, 0);
}
