extern s32 func_80089D34_ovl_01(void *, s32, s32, s32);
void func_801635A0_ovl_33(void *arg0, s32 arg1, s32 arg2)
{
  u8 *new_var;
  u8 *p = (u8 *) arg0;
  u8 *s0 = (u8 *) (*((u32 *) (((u8 *) arg0) + 0x234)));
  u16 v;
  switch (((u8 *) arg0)[6])
  {
    new_var = (u8 *) arg0;
    case 0:
      *((s32 *) (new_var + 0x1E8)) = 0x1F00;
      p[6] = 1;

    case 1:
      func_80089D34_ovl_01(p, arg1, arg2, 0x80);
      v = (*((u16 *) (s0 + 0x124))) - 0x40;
      *((u16 *) (s0 + 0x124)) = v;
      if (((s16) v) < 0)
    {
 do { *((u16 *) (s0 + 0x124)) = 0; } while (0);
      *((u32 *) (p + 4)) = 0x01000000;
    }
      break;

  }

}
