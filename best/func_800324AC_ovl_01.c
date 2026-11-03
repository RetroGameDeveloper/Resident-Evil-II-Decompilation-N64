extern u8 D_800C7650_ovl_01[];
typedef union 
{
  u64 q;
  struct 
  {
    u32 lo;
    u32 hi;
  } w;
} U64;
void func_800324AC_ovl_01(void *arg0)
{
  U64 b;
  u32 off;
  u8 *g;
  off = 0x18000;
  b.w.lo = (u32) D_800C7650_ovl_01;
  g = (u8 *) (b.w.lo + off);
  *((u32 *) arg0) = 0;
  *((u32 *) (((u8 *) arg0) + 4)) = 0;
  off = g[0x1A76] + -1;
  g[0x1A76] = off;
}

