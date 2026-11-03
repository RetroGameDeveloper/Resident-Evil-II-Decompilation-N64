extern s32 func_8017F7C4_ovl_04(void);
extern s32 func_8017FFA0_ovl_04(s32);
extern s32 func_8017FE8C_ovl_04(void);

s32 func_8017FDD4_ovl_04(s32 arg0)
{
    s32 s0 = 3;
    s32 s1;

    func_8017F7C4_ovl_04();
    do {
        if (!func_8017FFA0_ovl_04(arg0 << 4)) {
            s0--;
        } else {
            s0--;
            s1 = func_8017FE8C_ovl_04();
            if (!s1)
                return 0;
        }
    } while (s0);
    return s1;
}
