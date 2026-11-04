static inline static static s32 inline_fn(s32 arg0)
{
  return arg0;
}

static inline static static s32 inline_fn2(s32 arg0)
{
  return inline_fn(arg0);
}

void func_8017C30C_ovl_02(s32 a)
{
  s32 new_var5[2];
  s32 *new_var3;
  s32 new_var4;
  if (new_var3)
  {
    new_var4 = a;
    new_var5[1] = inline_fn2(new_var4);
    new_var3 = &new_var5[1];
  }
  else
  {
    new_var4 = a;
    new_var5[1] = inline_fn2(new_var4);
    new_var3 = &new_var5[1];
  }
  if (1)
  {
    ;
    (void) new_var5[0];
    new_var5[0] = *new_var3;
  }
}

