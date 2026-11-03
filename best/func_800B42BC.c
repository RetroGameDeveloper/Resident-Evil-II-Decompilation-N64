extern s32 D_80112780_ovl_01;
extern s32 D_80112788_ovl_01;
extern u8 D_800C5694_ovl_01;
extern s32 D_8010B680_ovl_01;
extern s32 D_8010B684_ovl_01;
extern s32 func_8006BF78_ovl_01(s32);
void func_800268F4_ovl_01(void);
extern u8 D_80136D20_ovl_01;
extern u8 D_80158AC0[];
s32 func_800B392C_ovl_01(s32, s32);
s32 func_800B42BC(s32 arg0)
{
  int new_var;
  u32 v1;
  u32 a0;
  if (arg0 == (-1))
  {
    return 0;
  }
  if (D_80136D20_ovl_01 == 0)
  {
    return 0;
  }
  a0 = 0;
  v1 = (u32) D_80158AC0;
  new_var = v1 + 0x1200;
  for (;;)
  {
    if ((*((u8 *) new_var)) == 0)
    {
      a0++;
    }
    else
      if ((*((s32 *) (v1 + 0x1224))) == arg0)
    {
      break;
    }
    else
    {
      a0++;
    }
    if (a0 >= 2)
    {
      a0 = -1;
      break;
    }
    v1 += 0x1228;
  }

  if (a0 == (-1))
  {
    return 0;
  }
  func_800B392C_ovl_01(a0, arg0);
  return 1;
}

