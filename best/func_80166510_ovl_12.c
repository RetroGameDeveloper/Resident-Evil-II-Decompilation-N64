extern unsigned char D_80166EF8_ovl_12[];
void func_80166510_ovl_12(void *p, s16 d)
{
  u8 *t = D_80166EF8_ovl_12;
  s32 ix;
  u8 val;
  if (d != 0)
  {
    ix = (d > 0) * 2;
  }
  else
  {
    ix = 1;
  }
  val = t[ix];
  if (((u8 *) p)[0x1e8] != val)
  {
    ((u8 *) p)[0x1e8] = val;
    if (((u8 *) p)[0x1ea] < 7)
    {
      ((u8 *) p)[0x1ea] = 15;
    }
  }
}

