typedef union 
{
  u64 q;
  struct 
  {
    u32 lo;
    u32 hi;
  } w;
} U64;
extern u8 D_800C7650_ovl_01;
s32 func_80089D34_ovl_01(void *arg0, s32 arg1, s32 arg2, u32 arg3);
void func_80166684_ovl_33(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_8016362C_ovl_33(S_func_80163254_ovl_33_arg0 *arg0, s32 arg1, s32 arg2)
{
  u8 st;
  s32 *obj;
  U64 b;
  u8 *p;
  do
  {
  }
  while (0);
  st = *((u8 *) (((u8 *) arg0) + 6));
  switch (st)
  {
    case 0:
      *((u8 *) (((u8 *) arg0) + 6)) = 1;
      arg0->unk_1E8 = 0x07001F00;

    case 1:
      b.w.hi = 0x18000;
      b.w.lo = (u32) (&D_800C7650_ovl_01);
      p = (u8 *) (b.w.lo + b.w.hi);
 do { ; func_80166684_ovl_33(arg0, (*((s32 **) (p + 0x1CB4)))[0x14] - 0x1F4, (*((s32 **) (p + 0x1CB4)))[0x15], 0x40); if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x80) != 0) { arg0->unk_04 = 0x01040000; } } while (0);
      break;

  }

}
