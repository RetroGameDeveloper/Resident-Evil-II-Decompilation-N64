void func_80035AAC_ovl_01_108(void);
void func_80164D10_ovl_12(void *, s32, s32);
void func_80077D48_ovl_01(s32, void *);

void func_80165AB8_ovl_12(void *arg0, s32 b, s32 c) {
    u8 *p;
    s32 t;

    p = (u8 *)arg0;
    func_80035AAC_ovl_01_108();
    t = *(u8 *)(p + 0x2BF) & 0x3F;
    *(u8 *)(p + 0x2BF) = 0;
    func_80164D10_ovl_12(p, b, c);
    if (*(u8 *)(p + 0x2CD) == 0) {
        func_80077D48_ovl_01(7, p);
    }
    if (t == 2) {
        *(u16 *)(p + 0x1E0) = 0;
    }
}
