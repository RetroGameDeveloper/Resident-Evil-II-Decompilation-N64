extern u8 D_80166690_ovl_35[];
void func_80089D34_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_801634F0_ovl_35(u8 *arg0, s32 arg1, s32 arg2)
{
  u16 temp_v0_2;
  u8 temp_v0;
  u8 idx;
  int new_var;
  volatile u8 *base;
  new_var = 1;
  if (arg0[0x7] == 0)
  {
    arg0[0x7] = new_var;
    idx = func_80033634_ovl_01() & 7;
    base = D_80166690_ovl_35;
    temp_v0 = base[idx];
    arg0[0x2C3] = 0;
    *((u16 *) (arg0 + 0x1F4)) = ((s8) temp_v0) + 0x96;
  }
  temp_v0_2 = (*((u16 *) (arg0 + 0x1F4))) - 1;
  *((u16 *) (arg0 + 0x1F4)) = temp_v0_2;
  if (((temp_v0_2 << 16) == 0) || (arg0[0x2C3] != 0))
  {
    *((s16 *) (arg0 + 6)) = 0x200;
  }
  func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
}

