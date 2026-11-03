s32 func_80077D48_ovl_01(u32, void *);
void func_80162EF8_ovl_11(void *p)
{
  u32 x = *((u32 *) (*((u32 *) (((u8 *) p) + 0x214))));
  if ((x & 0x08000000) && ((x >> 28) < 2))
  {
    if (x || p)
    {
      func_80077D48_ovl_01(x >> 28, p);
    }
    else
    {
      func_80077D48_ovl_01(x >> 28, p);
    }
  }
}

