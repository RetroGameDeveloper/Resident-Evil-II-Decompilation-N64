extern s32 D_80000300;
extern s32 D_800138A0;
extern s32 D_80018A80;
s32 func_800004F0(s32);
s32 func_800070C0(void);
s32 func_80000598(void);

void main(void) {
    s32 *p = &D_800138A0;
    s32 n = &D_80018A80 - &D_800138A0;

    n--;
    while (n != -1) {
        *p++ = 0;
        n--;
    }
    func_800004F0(0);
    func_800070C0();
    if (D_80000300 == 0) {
        for (;;) {
        }
    }
    func_80000598();
}
