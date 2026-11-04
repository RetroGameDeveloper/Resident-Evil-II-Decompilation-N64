u8 func_80052E88_ovl_01(volatile u8 *arg0)
{
  volatile u8 *p0;
  volatile u8 *p1;
  u32 i;
  u8 max;
  u16 t;
  u8 tv;
  s16 sv;
  int new_var;
  p0 = arg0;
  max = 0;
  i = 0;
  p1 = p0 + 1;
  do
  {
    if ((*p0) != 0)
    {
      t = *((volatile u16 *) (p1 + 1));
      if (t != 0)
      {
        *((volatile u16 *) (p1 + 1)) = t - 1;
      }
      else
      {
        t = (*((volatile u16 *) (p1 + 3))) - 1;
        *((volatile u16 *) (p1 + 3)) = t;
        if (!(t & 0xFFFF))
        {
          *p0 = 0;
        }
        sv = *((volatile s16 *) (p1 + 5));
        if (sv != 0)
        {
          t = (*((volatile u16 *) (p1 + 7))) + (*((volatile u16 *) (p1 + 5)));
          *((volatile u16 *) (p1 + 7)) = t;
          new_var = 7;
          *((volatile u8 *) (p1 + 0)) = t >> new_var;
        }
        tv = *((volatile u8 *) (p1 + 0));
        if (max < tv)
        {
          max = tv;
        }
      }
    }
    i++;
    p1 += 0xA;
    p0 += 0xA;
  }
  while (i < 0x20);
  return max;
}

