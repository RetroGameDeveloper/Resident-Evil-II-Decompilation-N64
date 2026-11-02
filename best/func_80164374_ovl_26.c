extern s32 func_80089D34_ovl_01(void *, s32, s32, s32);
void func_80164374_ovl_26(void *arg0, s32 arg1, s32 arg2)
{
  s16 *new_var;
  u8 temp_v1 = *(((u8 *) arg0) + 7);
  s32 one = 1;
  switch (temp_v1)
  {
    new_var = (s16 *) (((u8 *) arg0) + 0x1f4);
    case 0:
      *new_var = 0xf;
      *(((u8 *) arg0) + 7) = one;
      *(((s8 *) arg0) + 0x25d) = 9;
      *(((u8 *) arg0) + 0x25c) = (u8) ((*(((u8 *) arg0) + 0x25c)) & 0xfe);

    case 1:
      if ((func_80089D34_ovl_01(arg0, arg1, arg2, 0x40) != 0) || (func_80089D34_ovl_01(arg0, arg1, arg2, 0x40) != 0))
    {
      *(((u8 *) arg0) + 7) = 2;
      *((s32 *) (((u8 *) arg0) + 0x1e8)) = 0x0c000000;
      func_80089D34_ovl_01(arg0, arg1, arg2, 0x10040);
      *(((s8 *) arg0) + 0x2c1) = 0x44;
      *(((s8 *) arg0) + 0x2c3) = 3;
    }
      break;

    case 2:
      func_80089D34_ovl_01(arg0, arg1, arg2, 0x10040);
      func_80089D34_ovl_01(arg0, arg1, arg2, 0x10040);
      if (((*((u32 *) (*((u32 *) (((u8 *) arg0) + 0x214))))) & 0x20000) != 0)
    {
      *(((s8 *) arg0) + 5) = one;
      *((s16 *) (((u8 *) arg0) + 6)) = 0;
      *(((u8 *) arg0) + 0x26f) = (u8) ((*(((u8 *) arg0) + 0x26f)) & 0x7f);
    }

  }

}

