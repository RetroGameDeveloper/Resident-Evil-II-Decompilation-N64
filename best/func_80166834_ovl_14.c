extern void D_80036F94(void *arg0, s32 arg1, s32 arg2);
extern s32 func_80036D44_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_80166834_ovl_14(void *arg0)
{
  unsigned char new_var2;
  u16 *new_var;
  u8 *p = arg0;
  switch (p[6])
  {
    case 0:
      p[0x1E8] = 1;
      new_var2 = 0;
      *((s16 *) (p + 0x1F4)) = new_var2;
      p[0x2CC] = new_var2;
      p[6] = p[6] + 1;

    case 1:
      new_var = (u16 *) (p + 0x1F4);
      *new_var = (*((u16 *) (p + 0x1F4))) + 1;
      D_80036F94(p, (*((s32 *) (p + 0x2C4))) + 0x28, 0x40);
      func_80036D44_ovl_01(p, new_var2, 0xF, new_var2);
      if (((*((u32 *) (p + 0x28C))) < 0x9C4) || ((*((s16 *) (p + 0x1F4))) >= 0x100))
    {
      p[0x2B5] = 2;
      *((s32 *) (p + 0x4)) = 0x010B0000;
    }
      break;

  }

}

