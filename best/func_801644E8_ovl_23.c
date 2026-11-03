typedef union 
{
  u64 q;
  struct 
  {
    u32 lo;
    u32 hi;
  } w;
} U64;
extern u8 D_800C7650_ovl_01[];
extern s32 func_80032D44_ovl_01(s16, s16, s16, s16);
extern void func_80032F24_ovl_01(void *, s32, s32);
extern void func_80036C98_ovl_01(void *, s32, s32, s32);
void func_801644E8_ovl_23(O *a)
{
  U64 b;
  u32 off;
  u8 *base;
  s32 z;
  off = 0x18000;
  b.w.lo = (u32) D_800C7650_ovl_01;
  base = (u8 *) (off + b.w.lo);
  z = func_80032D44_ovl_01(*((s16 *) (base + 0x1AAA)), *((s16 *) (base + 0x1AB2)), *((s16 *) (a->p + 0x2A)), *((s16 *) (a->p + 0x32)));
  if (a->p[6] == 0)
  {
    if (*((u8 *) (base + 0x538)))
    {
      func_80036C98_ovl_01(a, 1, 3, 0);
 do { } while (0);
    }
    func_80032F24_ovl_01(a, (s16) z, 8);
  }
}
