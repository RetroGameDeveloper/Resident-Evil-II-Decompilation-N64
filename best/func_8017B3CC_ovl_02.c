extern s32 D_80184AA0_ovl_02[];
extern void func_80184A40_ovl_02(void);
extern void func_80007320(s32, s32);
extern void func_80004EE0(void *, s32, s32, s32, s32, void *);

void func_8017B3CC_ovl_02(void *arg0) {
    if (D_80184AA0_ovl_02[2] == 0) {
        func_80007320(D_80184AA0_ovl_02[1], 0x1000);
        func_80004EE0(arg0, D_80184AA0_ovl_02[1], D_80184AA0_ovl_02[0], 0x1000, 0, &func_80184A40_ovl_02);
        D_80184AA0_ovl_02[2] = 0x1000;
        D_80184AA0_ovl_02[0] += 0x1000;
    }
}
