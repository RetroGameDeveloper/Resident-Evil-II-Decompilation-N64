s32 func_80032C08_ovl_01(void *, s32, s32);
s32 func_80032DEC_ovl_01(void *, s16, s16, s32);
s32 func_80089D34_ovl_01(void *, s32, s32, s32);
inline u16 inline_fn(u8 *arg0)
{
  return *((u16 *) (arg0 + 0x1E0));
}

void func_80163070_ovl_13(void *arg0, s32 arg1, s32 arg2)
{
  u8 *p = arg0;
  u8 state = p[6];
  u8 v;
  u16 timer;
  u8 *new_var;
  ;
  switch (state)
  {
    case 0:
      *((s32 *) (p + 0x1E8)) = 0x03000700;
      *((s16 *) (p + 0x1E2)) = 40;
      p[0x2B5] = 0;
      p[6] = 1;

    case 1:
      v = p[0x2B5] - 1;
      p[0x2B5] = v;
      if (v == 255)
    {
      if (1)
      {
        p[0x2B5] = 15;
      }
    }
      func_80032DEC_ovl_01(p, *((s16 *) (p + 0x260)), *((s16 *) (p + 0x262)), 0x20);
      func_80032C08_ovl_01(p, 0, 0);
      timer = inline_fn(p);
      if (((s16) timer) < 300)
    {
      timer++;
      *((u16 *) (p + 0x1E0)) = timer;
    }
      func_80089D34_ovl_01(p, arg1, arg2, 0x200);

  }

}

