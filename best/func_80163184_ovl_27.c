extern void func_80089D34_ovl_01(void *, s32, s32, s32);
extern void func_801636DC_ovl_27(void *, s32);
void func_80163184_ovl_27(void *p, s32 a1, s32 a2)
{
  s16 v;
  u8 *new_var;
  u8 *q = ((u8 *) p) + 0x2B4;
  switch (((u8 *) p)[6])
  {
    new_var = q;
    case 0:
      ((u8 *) p)[6] = 1;
      *((u16 *) (new_var + 0xE)) = 0x400;
      *((s32 *) (((u8 *) p) + 0x1E8)) = (((u8 *) p)[0x2B4] << 19) + 0xF00;

    case 1:
      v = (*((u16 *) (q + 0xE))) - 0x20;
      *((u16 *) (q + 0xE)) = v;
      if (v < 0)
    {
      *((u16 *) (q + 0xE)) = 0;
      *((s32 *) (((u8 *) p) + 4)) = 0x1000000;
    }
      break;

  }

  func_80089D34_ovl_01(p, a1, a2, 0x100);
  func_801636DC_ovl_27(p, 0);
}

