typedef struct 
{
  u8 pad[0x2BE];
  s8 x;
} Obj;
s32 func_80162D40_ovl_20(Obj *p, s32 a, volatile unsigned short b)
{
  s32 x = p->x;
  if (x < 3)
  {
    p->x = x | 0x82;
  }
  if (((s8) p->pad[0x2bc]) < 2)
  {
    p->pad[0x2bc] = 1;
  }
  p->pad[0x2b9] = 15;
  x = p->pad[6] == 0;
  if (x)
  {
    *((u32 *) (p->pad + 0x1e8)) = 0x04003f00;
    p->pad[6] = 1;
 do { *((u16 *) (p->pad + 0x1f4)) = 0; *((u16 *) (p->pad + 0x1f6)) = 0; } while (0);
    p->pad[0x25c] |= 2;
  }
  return a + b;
}
