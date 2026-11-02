extern s32 func_80000F60(void);
extern s32 func_800072E0(void);
extern s32 func_80007300(s32);
extern s32 func_8000DED0(s32, void *);
extern void *D_8001294C;
extern void *D_80012950;
void func_80006E30(void *arg0)
{
  void *s0 = arg0;
  void *v0;
  void *v1;
  u8 *new_var2;
  s32 s1 = func_800072E0();
  unsigned int new_var;
  if (!s0)
  {
    s0 = D_80012950;
  }
  else
  {
    new_var = *((u16 *) (((u8 *) s0) + 16));
    if (new_var != 1)
    {
      func_8000DED0(*((s32 *) (((u8 *) s0) + 8)), s0);
    }
  }
  v1 = D_8001294C;
  new_var2 = (u8 *) s0;
  if (v1 == s0)
  {
    D_8001294C = *((void **) (new_var2 + 12));
  }
  else
  {
    v0 = *((void **) (((u8 *) v1) + 12));
    while (v0)
    {
      if (v0 == s0)
      {
        *((void **) (((u8 *) v1) + 12)) = *((void **) (new_var2 + 12));
        break;
      }
      v1 = v0;
      v0 = *((void **) (((u8 *) v0) + 12));
    }

  }
  if (s0 == D_80012950)
  {
    func_80000F60();
  }
  func_80007300(s1);
}

