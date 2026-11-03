/* identical to func_80036BB4 (matched), with its names changed by decompdecomp */
typedef struct 
{
  u8 pad0[0x1A4];
  s32 f1A4;
  u8 pad1[0x40];
  u8 f1E8;
  s8 f1E9;
  s8 f1EA;
  u8 pad2[0x2C];
  s32 f218;
} T80036BB4;
s32 func_8008A974_ovl_01(void *p, s32 a, s32 b, s32 c);
s32 func_80036C14(T80036BB4 *p, s32 a1, int a2, s32 a3)
{
  s32 q;
  s32 hi;
  if (p->f1E8 != a1)
  {
    p->f1E8 = a1;
    p->f1E9 = 0;
    p->f1EA = a2;
  }
  q = 0x1000 / ((u32) (a2 + 1));
  hi = a3 << 16;
 do { return func_8008A974_ovl_01(p, p->f1A4, p->f218, q | hi) != 0; } while (0);
}
