extern s32 D_80185700_ovl_02;
extern s32 D_80185720_ovl_02;
extern s32 D_80185728_ovl_02;
extern s32 D_8018572C_ovl_02;
extern s32 D_80185740_ovl_02;
extern u8 D_80184AD0_ovl_02[];
extern u8 D_80184ADC_ovl_02[];

u32 func_8017F1E0_ovl_02(void);
s32 func_8017BE48_ovl_02(s32 arg0);

void func_8017EB38_ovl_02(s32 *arg0, s32 *arg1, s32 *arg2, s32 *arg3, s32 *arg4, s32 *arg5, s32 *arg6, s32 *arg7, s32 *arg8) {
    s32 s0;
    s32 s1;
    s32 s2;
    u32 s3;
    u8 s4;
    s32 s5;
    s32 s6;
    u8 s7;
    s32 v0;
    s32 v1;

    s3 = func_8017F1E0_ovl_02();
    if (D_80185700_ovl_02 != 0)
        return;
    if (s3 & 0x20) {
        s4 = 4;
        if (D_80185740_ovl_02 != 0)
            s4 = D_80184AD0_ovl_02[func_8017BE48_ovl_02(2) + (D_80185740_ovl_02 - 1) * 4];
    } else {
        s4 = (s3 >> 3) & 8;
    }
    s7 = D_80184ADC_ovl_02[s4];
    if (s3 & 0xC) {
        if (D_80185720_ovl_02 == 3) {
            s0 = 2;
            if (D_80185728_ovl_02 != 0)
                goto L8017EC4C;
        }
        s0 = func_8017BE48_ovl_02(2);
    } else if ((s3 & 1) && D_8018572C_ovl_02 != 0) {
        s0 = 1;
        if (D_80185720_ovl_02 == 3)
            s0 = 2;
    }
L8017EC4C:
    if (D_80185720_ovl_02 == 3) {
        s1 = 1;
        v0 = s0 ^ 2;
        if (s0 == 1) {
            if (s7 < 2)
                s1 = 2;
            v0 = s0 ^ 2;
        }
        s2 = (v0 == 0);
    } else {
        s1 = 1;
        if (s0 == 2)
            s1 = 2;
        s2 = 0;
    }
    s5 = 0;
    s6 = (s0 == 3);
    if (s2 == 0)
        s5 = (D_80185720_ovl_02 == 3);
    v1 = 0;
    if (D_80185720_ovl_02 == 3) {
        if (D_80185728_ovl_02 == 0 && (s3 & 3) != 0)
            v1 = func_8017BE48_ovl_02(1);
    }
    *arg0 = s3;
    *arg1 = s4;
    *arg2 = s7;
    *arg3 = s0;
    *arg4 = s1;
    *arg5 = s2;
    *arg6 = s6;
    *arg7 = s5;
    *arg8 = v1;
}
