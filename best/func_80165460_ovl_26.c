extern s32 func_80033634_ovl_01(void);
extern s32 func_80164E08_ovl_26(void *, s32, s32);
extern s32 func_80165290_ovl_26(void *, s32, s32);
extern s32 func_80166B18_ovl_26(void *, u8, s32);
extern u8 D_801671B0_ovl_26[];
void func_8016537C_ovl_26(void *p);
void func_801653C4_ovl_26(void *p, s32 a, s32 b);
void func_80165320_ovl_26(void *p, s32 a, s32 b);
inline u8 inline_fn(void *arg0, int arg1)
{
  return ((u8 *) arg0)[arg1];
}

void func_80165460_ovl_26(void *p, s32 a, s32 b)
{
  s32 new_var;
  short new_var3;
  int new_var2;
  do
  {
  }
  while (0);
  new_var3 = inline_fn(p, 6) == 0;
  new_var = b;
  if (new_var3)
  {
    new_var2 = 0;
    new_var3 = new_var2;
    if (inline_fn(p, 0x2db) == new_var3)
    {
      ((u8 *) p)[0x2db] = 0x3c;
      func_80165290_ovl_26(p, 2, 6);
    }
  }
  func_80164E08_ovl_26(p, a, new_var);
}

