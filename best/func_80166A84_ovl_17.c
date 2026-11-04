extern s32 D_800C7650_ovl_01[];
extern s32 D_800E10D0_ovl_01[];
extern s32 func_80032EA4_ovl_01(void *, s32, s32, s16);
typedef union 
{
  u64 q;
  struct 
  {
    u32 lo;
    u32 hi;
  } w;
} U64;
void func_80166A84_ovl_17(void *arg0, s32 arg1)
{
  U64 b;
  unsigned int new_var;
  s32 *q;
  u8 *base;
  s32 x;
  s32 y;
  if (((u8 *) arg0)[0x2D3])
  {
    b.w.lo = (u32) D_800C7650_ovl_01;
    base = (u8 *) (b.w.lo + 0x18000);
    q = *((s32 **) (base + 0x1D3C));
  }
  else
  {
    q = D_800E10D0_ovl_01;
  }
  if (((u8 *) arg0)[0x2BE])
  {
    new_var = ((s32 *) arg0)[12];
    x = q[10] - ((s32 *) arg0)[10];
    y = q[12] - new_var;
    func_80032EA4_ovl_01(arg0, ((s32 *) arg0)[10] - x, new_var - y, arg1);
  }
  else
  {
    func_80032EA4_ovl_01(arg0, q[10], q[12], arg1);
  }
}

