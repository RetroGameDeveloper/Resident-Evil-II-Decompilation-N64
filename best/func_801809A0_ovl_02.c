static inline static long long inline_fn(volatile long long arg0)
{
  return (long long) arg0;
}

void func_801809A0_ovl_02(void)
{
  volatile int new_var;
  volatile long long new_var2;
  do
  {
    new_var2 = 1;
    new_var = inline_fn(new_var2);
    {
    }
  }
  while (0);
}

