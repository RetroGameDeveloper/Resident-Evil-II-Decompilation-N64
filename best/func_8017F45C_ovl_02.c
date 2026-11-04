s32 func_8017BB30_ovl_02(s32);
s32 func_8017BB68_ovl_02(s8);
extern s32 D_80185700_ovl_02;
extern s8 D_80184B40_ovl_02[];
extern s8 D_80184B10_ovl_02[];
extern s8 D_80184B30_ovl_02[];
extern s8 D_80184B60_ovl_02[];
extern s8 D_80184B80_ovl_02[];
s8 func_8017F45C_ovl_02(void)
{
  s8 *p;
  s8 *new_var;
  s32 i = func_8017BB30_ovl_02(4);
  if (i == 0)
  {
    D_80185700_ovl_02 = 1;
    return 0;
  }
 do { new_var = D_80184B40_ovl_02; p = new_var + (i * 2); func_8017BB68_ovl_02(p[1]); return p[0]; } while (0);
}

s8 func_8017F3B0_ovl_02(void);
s8 func_8017F4C0_ovl_02(void);
