extern s32 func_8017BB30_ovl_02(s32);
extern void func_8017BB68_ovl_02(s8);
extern s8 D_80184C2C_ovl_02[];
extern s8 D_80184C6C_ovl_02[];
extern s8 D_80184CEC_ovl_02[];
extern s32 D_80185700_ovl_02;
s32 func_8017F75C_ovl_02(void)
{
    s32 s0 = func_8017BB30_ovl_02(9);
    s8 *base;
    s8 *p;
    if (s0 >= 0x80)
    {
        s0 >>= 4;
        base = D_80184C2C_ovl_02;
    }
    else if (s0 >= 8)
    {
        s0 >>= 1;
        base = D_80184C6C_ovl_02;
    }
    else if (s0 > 0)
    {
        base = D_80184CEC_ovl_02;
    }
    else
    {
        D_80185700_ovl_02 = 1;
        return 0;
    }
    p = (s8 *)((s0 << 1) + (s32)base);
    func_8017BB68_ovl_02(p[1]);
    return p[0];
}
