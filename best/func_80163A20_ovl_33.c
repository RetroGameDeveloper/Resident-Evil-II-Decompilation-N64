static inline static int inline_fn(int arg0)
{
  return arg0;
}

static inline static int inline_fn2(int arg0)
{
  return inline_fn((float) arg0);
}

static inline static int inline_fn23(int arg0)
{
  return inline_fn2(arg0);
}

void func_80163A20_ovl_33(void *arg0, void *arg1, void *arg2)
{
  int new_var4;
  int new_var3;
  int new_var;
  volatile unsigned int new_var2;
  new_var3 = 0;
  new_var = new_var3;
  new_var2 = new_var;
  new_var4 = inline_fn23(new_var2);
  {
  }
}

