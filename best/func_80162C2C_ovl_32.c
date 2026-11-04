static inline static volatile short inline_fn(volatile short arg0)
{
  return arg0;
}

void func_80162C2C_ovl_32(void *a, s32 b, s32 c)
{
  volatile long new_var3;
  volatile short *new_var6;
  volatile short new_var2;
  volatile long new_var5;
  int new_var;
  volatile short new_var4;
  new_var3 = 0;
  new_var = new_var3;
  new_var2 = new_var;
  new_var3 = new_var2;
  new_var = new_var3;
  new_var6 = &new_var4;
  new_var4 = new_var;
  new_var5 = inline_fn(*new_var6);
  do
  {
  }
  while (new_var5);
}

