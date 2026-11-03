extern volatile unsigned char func_8000E800(s32);
extern s32 D_80000308;
extern u32 D_A4600000;
s32 func_8000C870(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
  u32 st;
  unsigned int new_var;
  st = *((volatile u32 *) (new_var = 0xA4600010));
  while (st & 3)
  {
    st = *((volatile u32 *) 0xA4600010);
  }

  D_A4600000 = func_8000E800(arg2);
  *((volatile u32 *) 0xA4600004) = (D_80000308 | arg1) & 0x1FFFFFFF;
  switch (arg0)
  {
    case 0:
      *((volatile u32 *) 0xA460000C) = arg3 - 1;
      break;

    case 1:
      *((volatile u32 *) 0xA4600008) = arg3 - 1;
      break;

    default:
      return -1;

  }

  return 0;
}

