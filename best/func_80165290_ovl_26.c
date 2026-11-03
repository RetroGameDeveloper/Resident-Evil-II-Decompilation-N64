extern u8 D_801671B0_ovl_26[];
s32 func_80033634_ovl_01(void);
void func_80166B18_ovl_26(void *, s32, s32);
void func_80165290_ovl_26(void *arg0, unsigned char value, u32 n)
{
  s32 i = 0;
  s32 r = func_80033634_ovl_01() & 7;
  if (n != 0)
  {
    do
    {
      func_80166B18_ovl_26(arg0, D_801671B0_ovl_26[r + i], value & 0xFF);
      i++;
    }
    while (i < n);
  }
}

