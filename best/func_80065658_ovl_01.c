extern s32 D_800C7650_ovl_01;
s32 func_80033634_ovl_01(void);
typedef union 
{
  u64 q;
  struct 
  {
    u32 lo;
    u32 hi;
  } w;
} U64;
inline int inline_fn(u16 arg0, int arg1)
{
  return arg0 != arg1;
}

u32 func_80065658_ovl_01(void)
{
  U64 b;
  u32 *p;
  u16 temp_s0;
  u32 var_v0;
  var_v0 = 0x18000;
  b.w.lo = (u32) (&D_800C7650_ovl_01);
  p = (u32 *) (b.w.lo + var_v0);
  p = (u32 *) (*((u32 *) (p + (0x27C / 4))));
  p = *((u32 *) (p + (0x38 / 4)));
  temp_s0 = *((u16 *) p);
  var_v0 = 0xFF;
  if (inline_fn(temp_s0, 0))
  {
    var_v0 = func_80033634_ovl_01();
    var_v0 = var_v0 & 0xFF;
    ;
  }
  return var_v0 % temp_s0;
}

