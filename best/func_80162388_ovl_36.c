inline u8 *inline_fn(void *arg0)
{
  return (u8 *) arg0;
}

inline u8 *inline_fn2(void *arg0)
{
  return inline_fn(arg0) + 0x1F4;
}

void func_80162388_ovl_36(void *p, s32 x, s32 y)
{
  s16 a[3];
  s16 b[3];
  s32 *new_var;
  u16 t;
  u8 state = *((u8 *) (((u8 *) p) + 7));
  s32 one = 1;
  switch (state)
  {
    case 0:
      *((s32 *) (((u8 *) p) + 0x1E8)) = 0x01003F00;
      if (1)
    {
    }
      *((u8 *) (((u8 *) p) + 7)) = one;
      *((u16 *) inline_fn2(p)) = 30;

    case 1:
      func_80089D34_ovl_01(p, x, y, 0x40);
      t = (*((u16 *) (((u8 *) p) + 0x1F4))) - 1;
      one = (t << 16) == 0;
      *((u16 *) (((u8 *) p) + 0x1F4)) = t;
      if (one)
    {
      *((u8 *) (((u8 *) p) + 7)) = 2;
    }
      break;

    case 2:
      *((u8 *) (((u8 *) p) + 7)) = 3;
      a[0] = 0;
      a[1] = 0;
      a[2] = 0;
      b[0] = 0;
      b[1] = 0;
      b[2] = 0;
      func_80037C80_ovl_01(0x2B001000, *((s16 *) (((u8 *) p) + 0x66)), (*((s32 *) (((u8 *) p) + 0x234))) + 0x328, a, b);
      new_var = (s32 *) (((u8 *) p) + 0x1E8);
      *new_var = 0x3F00;
      func_80077D48_ovl_01(0, p);

    case 3:
      func_80089D34_ovl_01(p, x, y, 0x40);
      if ((*((u8 *) (((u8 *) p) + 0x1EA))) == 0)
    {
      *((s16 *) (((u8 *) p) + 6)) = 0;
    }
      break;

  }

}

