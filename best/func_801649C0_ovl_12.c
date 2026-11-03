void func_801649C0_ovl_12(void *p, s32 a, s32 b)
{
  u8 *new_var2;
  s16 x;
  unsigned short new_var3;
  u8 *new_var;
  do
  {
    if ((*((u8 *) (((u8 *) p) + 7))) == 0)
    {
      func_80032C08_ovl_01(0x800, 0);
      new_var2 = (u8 *) p;
      *((u16 *) (new_var2 + 0x1e2)) += 40;
      if ((*((s32 *) (((u8 *) p) + 0x2c))) < (*((s16 *) (0x25e + ((u8 *) p)))))
      {
        goto next;
      }
      *((u8 *) (((u8 *) p) + 7)) = 1;
      new_var = ((u8 *) p) + 0x2c;
      *((u8 *) (((u8 *) p) + 0x2b5)) = 0;
      x = *((s16 *) (((u8 *) p) + 0x25e));
      new_var3 = 0xefffffff;
      *((s32 *) new_var) = x;
      *((u32 *) p) = ((*((u32 *) p)) & 0xefffffff) | 0x04000000;
      func_80077D48_ovl_01(10, p, x, new_var3);
      next:
      if ((*((u8 *) (((u8 *) p) + 0x1e9))) < 17)
      {
        func_80089D34_ovl_01(p, a, b, 256);
      }
      else
      {
        *((s16 *) (((u8 *) p) + 0x1e0)) = 0;
      }

    }
    else
      if (func_80089D34_ovl_01(p, a, b, 256))
    {
      *((s8 *) (((u8 *) p) + 5)) = 13;
      do
      {
      }
      while (0);
      *((s16 *) (((u8 *) p) + 6)) = 256;
      *((u8 *) (((u8 *) p) + 0x26f)) &= 127;
    }
    if ((*((s16 *) (((u8 *) p) + 0x1f4))) < 1024)
    {
      *((u16 *) (((u8 *) p) + 0x66)) = (*((u16 *) (((u8 *) p) + 0x66))) + 256;
      *((s16 *) (((u8 *) p) + 0x1f4)) += 256;
    }
  }
  while (0);
}

