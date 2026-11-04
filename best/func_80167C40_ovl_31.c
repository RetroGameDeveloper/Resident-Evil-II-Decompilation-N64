static inline static static static static static volatile short inline_fn(volatile short arg0)
{
  return arg0;
}

static inline volatile short inline_fn2(volatile short arg0)
{
  return inline_fn((unsigned char) arg0);
}

void func_80167C40_ovl_31(void *arg0)
{
  volatile short new_var5;
  volatile short new_var3;
  volatile short new_var4;
  volatile char new_var2;
  volatile short new_var;
  new_var3 = 0;
  new_var4 = (char) new_var3;
  new_var = new_var4;
  do
  {
  }
  while (0);
  new_var4 = new_var;
  new_var3 = (new_var5 = inline_fn2(new_var4));
  ;
  do
  {
  }
  while (new_var3);
}

