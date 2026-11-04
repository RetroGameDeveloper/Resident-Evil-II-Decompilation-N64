extern u8 D_800C7650_ovl_01[];
extern s32 func_80032EA4_ovl_01(void *, void *, void *, s32);
void func_801652E4_ovl_11(u8 *p)
{
  union 
  {
    u64 q;
    struct 
    {
      u32 hi;
      u32 lo;
    } w;
  } b;
  u32 off;
  u32 base;
  u32 t;
  u32 v;
  u32 x;
  u32 y;
  off = 0x18000;
  b.w.hi = off;
  b.w.lo = (u32) D_800C7650_ovl_01;
  x = b.w.hi;
  y = b.w.lo;
  base = y + x;
  t = *((u32 *) (p + 0x28C));
  func_80032EA4_ovl_01(p, *((void **) (base + 0x1AA8)), *((void **) (base + 0x1AB0)), 0x400);
 do { } while (0);
  if ((((((func_80032EA4_ovl_01(p, *((void **) (base + 0x1AA8)), *((void **) (base + 0x1AB0)), 0x200) << 16) == 0) && (t < 0x514)) && (!((*((u8 *) (base + 0x1CEF))) & 0x80))) && ((*((u16 *) (p + 0x1F0))) & 0x800)) && (p[0x1A2] == (*((u8 *) (base + 0x1C22)))))
  {
    *((u32 *) (p + 4)) = 0x01010000;
    v = *((u8 *) (base + 0x1CEF));
    *((u8 *) (base + 0x1CEF)) = v | 0x80;
  }
}
