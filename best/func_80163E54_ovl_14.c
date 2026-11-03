extern s32 func_8008A974_ovl_01(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
extern void func_80032DEC_ovl_01(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
extern void func_800334F8_ovl_01(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
extern s32 func_80033634_ovl_01(u8 *arg0);
extern void func_80032C9C_ovl_01(u8 *arg0, s32 arg1, s32 arg2);
inline volatile u8 *inline_fn(u8 *arg0, int arg1)
{
  return (volatile u8 *) (arg0 + arg1);
}

void func_80163E54_ovl_14(u8 *o, s32 a1, s32 a2)
{
  s32 state;
  u32 v;
  s32 one = 1;
  u8 *ptr;
  state = *((u8 *) (o + 6));
  switch (state)
  {
    case 0:
      *((volatile s32 *) (o + 0x1E8)) = 0x06050300;
      *inline_fn(o, 0x2CE) = 4;
      *((u16 *) (o + 6)) = 0x100;
      *((volatile u16 *) (o + 0x2C8)) |= 2;

    case 1:
      if (func_8008A974_ovl_01(o, a1, a2, 0x400) != 0)
    {
      *((s32 *) (o + 0x1E8)) = 0;
      *((u16 *) (o + 6)) = 0x200;
    }
      ptr = *((u8 **) (o + 0x2C4));
      func_80032DEC_ovl_01(o, *((s32 *) (ptr + 0x28)), *((s32 *) (ptr + 0x30)), 0x40);
      break;

    case 2:
      if ((*((u32 *) (o + 0x28C))) < 0x9C4)
    {
      *((s32 *) (o + 4)) = 0x010F0000;
    }
      ptr = *((u8 **) (o + 0x2C4));
      func_80032DEC_ovl_01(o, *((s32 *) (ptr + 0x28)), *((s32 *) (ptr + 0x30)), 0x40);
      func_800334F8_ovl_01(o, a1, a2, 0);
      if (func_8008A974_ovl_01(o, a1, a2, 0x1000) != 0)
    {
      v = *((u32 *) (o + 0x28C));
      if (v >= 0x1F41)
      {
        *((u8 *) (o + 0x2B5)) = one;
        *((s32 *) (o + 4)) = 0x01000000;
        goto end;
      }
      if (v < 0x7D0)
      {
        *((s32 *) (o + 4)) = 0x010F0000;
        break;
      }
      else
        if ((func_80033634_ovl_01(o) & 3) != 0)
      {
        ;
      }
      else
      {
        *((s32 *) (o + 0x1E8)) = 0;
        *((u16 *) (o + 6)) = 0x200;
      }
    }
      func_80032C9C_ovl_01(o, 0, 0);
      break;

    case 3:
      v = ++(*((u8 *) (o + 7)));
      if ((v & 0xFF) >= 6)
    {
      *((s32 *) (o + 0x1E8)) = 0;
      *((u16 *) (o + 6)) = 0x200;
    }

  }

  end:
  return;

}

