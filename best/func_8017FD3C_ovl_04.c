extern void func_8017F7C4_ovl_04(void);
extern s32 func_8017FF08_ovl_04(s32);
extern s32 func_8017FE8C_ovl_04(void);
s32 func_8017FD3C_ovl_04(s32 arg0)
{
    s32 s3;
    s32 s0;
    s32 s1 = 8;
    s32 s2 = 0xFF;
    func_8017F7C4_ovl_04();
    s3 = 3;
loop:
    if (func_8017FF08_ovl_04(arg0 << 4) == 0)
    {
        s1--;
    }
    else
    {
        s0 = func_8017FE8C_ovl_04();
        if (s0 == s3)
            goto ret3;
        if (!(s0 & 1) && s0 == s2)
            goto end;
        s2 = s0;
        s1--;
    }
    if (s1 != 0)
        goto loop;
end:
    return s0;
ret3:
    return 3;
}
