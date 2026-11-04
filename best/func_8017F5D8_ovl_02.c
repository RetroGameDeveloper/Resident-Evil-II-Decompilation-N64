extern s32 func_8017BE48_ovl_02(s32);
extern s32 func_8017BB30_ovl_02(s32);
extern s32 func_8017BB68_ovl_02(s32);
extern s32 D_80185700_ovl_02;
extern s8 D_80184C2C_ovl_02[];
extern s8 D_80184C6C_ovl_02[];
extern s8 D_80184CEC_ovl_02[];
extern s8 D_80184BE4_ovl_02[];
extern s8 D_80184DEC_ovl_02[];
extern s8 D_80184E2C_ovl_02[];
s32 func_8017F720_ovl_02(void);
s8 func_8017F75C_ovl_02(void);
s8 func_8017F5D8_ovl_02(void)
{
  s32 x;
  s8 *p;
  if (!func_8017BB30_ovl_02(3))
  {
    D_80185700_ovl_02 = 1;
    return 0;
  }
  p = D_80184BE4_ovl_02 + (x * 2);
  func_8017BB68_ovl_02(p[1]);
  return p[0];
}

s32 func_8017F8CC_ovl_02(void);
