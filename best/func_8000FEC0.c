s32 func_8000FEC0(s16 *out, u16 *p)
{
  u16 bits = *p;
  s32 exp = (bits & 0x7ff0) >> 4;
  s32 exponent = exp;
  if (exponent == 0x7ff)
  {
    do
    {
      *out = 0;
      if (((((*p) & 15) || p[1]) || p[2]) || p[3])
      {
        return 2;
      }
      return 1;
    }
    while (0);
  }
  if (exponent > 0)
  {
    *p = (bits & 0x800f) | 0x3ff0;
    *out = exp - 0x3fe;
    return -1;
  }
  exp = exponent;
  if (exp < 0)
  {
    return 2;
  }
  *out = 0;
  return 0;
}

