extern u8 D_800C7650_ovl_01[];
extern s32 func_80040E88_ovl_01(void *, void *);
extern s32 func_8004279C_ovl_01(void *, void *, void *);
typedef union 
{
  u64 q;
  struct 
  {
    u32 lo;
    u32 hi;
  } w;
} U64;
void func_80164900_ovl_19(void *arg0, unsigned int arg1, s16 arg2)
{
  s16 h[4];
  s32 tmp[8];
  U64 b;
  u32 off;
  u8 *p;
  h[0] = 0;
  h[1] = arg2;
  h[2] = 0;
  func_80040E88_ovl_01(h, tmp);
  h[0] = arg1;
  h[1] = 0;
  h[2] = 0;
  func_8004279C_ovl_01(tmp, h, h);
  off = 0x18000;
  b.q = (u64) ((u32) D_800C7650_ovl_01);
  p = (u8 *) (off + ((u32) b.q));
  *((s32 *) (((u8 *) arg0) + 0x28)) = h[0] + (*((s32 *) (p + 0x1AA8)));
  *((s32 *) (((u8 *) arg0) + 0x30)) = h[2] + (*((s32 *) (p + 0x1AB0)));
}

