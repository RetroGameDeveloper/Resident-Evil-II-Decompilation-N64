extern s16 D_80139A18;
static inline static static static static volatile int inline_fn(volatile int arg0)
{
  return arg0;
}

static inline static static volatile int inline_fn2(volatile int arg0)
{
  return inline_fn(arg0);
}

s16 func_800434E8_ovl_01(void)
{
  volatile int new_var3;
  volatile int new_var6[2];
  unsigned char new_var4;
  volatile int new_var5;
  new_var6[0] = D_80139A18;
  new_var3 = new_var6[1];
  new_var6[1] = new_var6[0];
  new_var5 = inline_fn2(new_var3);
  ;
  return new_var5;
}

