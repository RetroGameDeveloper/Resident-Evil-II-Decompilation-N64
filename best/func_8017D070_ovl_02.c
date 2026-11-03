extern s32 func_8017D0D8_ovl_02(void);
extern s32 D_80185790_ovl_02;
extern u8 D_801857A4_ovl_02[];
extern u8 D_801861DC_ovl_02[];
extern u8 *D_80186C14_ovl_02;
s32 func_8017D070_impl(void) {
    s32 r;
    u8 **pp;
    pp = &D_80186C14_ovl_02;
    *pp = D_801857A4_ovl_02;
    r = func_8017D0D8_ovl_02();
    if (D_80185790_ovl_02 != 0) {
        *pp = D_801861DC_ovl_02;
        func_8017D0D8_ovl_02();
        *pp = D_801857A4_ovl_02;
    }
    return r;
}
void func_8017D070_ovl_02(void) __attribute__((alias("func_8017D070_impl")));
