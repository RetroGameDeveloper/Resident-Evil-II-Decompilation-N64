void func_8003420C_ovl_01_18(void *arg0, s32 dx, s32 dy, s32 id)
{
  u32 *list;
  u8 *entries;
  s32 outer;
  u8 *entry;
  s32 ddx;
  s32 ddy;
  if (id < 0)
  {
    return;
  }
  ddx = dx << 8;
  list = *((u32 **) (((u8 *) arg0) + 0xC8));
  ddy = dy << 8;
  entries = (u8 *) list[1];
  outer = (s32) list[0];
  entry = entries + 0xE;
  for (;;)
  {
    u32 *obj;
    outer--;
    if (outer == (-1))
    {
      return;
    }
    obj = *((u32 **) (entry - 6));
    if ((*((s32 *) (((u8 *) obj) + 8))) == id)
    {
      s32 inner = *((s16 *) entry);
      u8 *base = (u8 *) (*((u32 *) entries));
      s32 i;
      inner--;
      if (inner != (-1))
      {
        s32 lim = -1;
        i = 0xA;
        inner--;
        do
        {
          u16 x;
          u16 y;
          x = (*((u16 *) ((base + i) - 2))) + ddx;
          y = (*((u16 *) (base + i))) + ddy;
          *((u16 *) ((base + i) - 2)) = x;
          *((u16 *) (base + i)) = y;
          i += 0x10;
        }
        while (inner != lim);
      }
    }
    entry += 0x10;
    entries += 0x10;
  }

}

