s32 func_8000C9E0();
extern s32 D_80112780_ovl_01;
extern s32 D_80112788_ovl_01;
extern char D_80139F30[];
s32 func_8006BC70_ovl_01(s32 arg0)
{
  char (**new_var3)[];
  s32 new_var2;
  char (*new_var)[];
  s32 new_var4;
  if (arg0 != 0)
  {
    return 0;
  }
  new_var4 = D_80112780_ovl_01;
  if (D_80112788_ovl_01 != D_80112780_ovl_01)
  {
    if (D_80112788_ovl_01 != D_80112780_ovl_01)
    {
      new_var = &D_80139F30;
      new_var2 = D_80112788_ovl_01;
      new_var3 = &new_var;
      do
      {
        func_8000C9E0(*new_var3);
      }
      while (new_var2 != new_var4);
    }
  }
  return 1;
}

