s32 func_80033634_ovl_01(void);
s32 func_801672F4_ovl_30(void *, u8, s32);
extern u8 D_80167D30_ovl_30[];
void func_80165518_ovl_30(void *arg0)
{
  u8 *p = (u8 *) arg0;
  u8 t = p[0x26e];
  s32 flag = ((t % 3) & 0xff) != 0;
  s32 off;
  u32 i = 0;
  s32 mode = p[4];
  off = flag * 4;
  if (mode == 2)
  {
    do
    {
      i++;
      flag = D_80167D30_ovl_30[off + (func_80033634_ovl_01() & 7)];
      func_801672F4_ovl_30(arg0, flag, 4);
    }
    while (i < 3);
  }
  else
  {
    do
    {
      i++;
      func_801672F4_ovl_30(arg0, D_80167D30_ovl_30[off + (func_80033634_ovl_01() & 7)], 5);
    }
    while (i < 4);
  }
}

