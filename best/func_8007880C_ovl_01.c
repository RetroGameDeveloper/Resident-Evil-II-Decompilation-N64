extern volatile u8 D_80119E9C_ovl_01[];
extern s32 D_800E90B4_ovl_01;
s32 func_80040A44_ovl_01(s32 arg0);
s32 func_8007880C_ovl_01(s32 arg0, s32 arg1)
{
  u8 v;
  u32 a = arg1 & 7;
  s32 r;
  if (a < D_80119E9C_ovl_01[(arg0 & 0xFF) * 2])
  {
    r = 1;
    goto done;
  }
  if (D_80119E9C_ovl_01[(arg0 & 0xFF) * 2] != a)
  {
    r = 0;
    goto done;
  }
  r = 1;
  r = 0;
  if (!(arg1 & 8))
  {
  }
  done:
  return r;

}

s32 func_80078854_ovl_01(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_80026AC0_ovl_01(void);
