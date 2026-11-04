static inline static volatile short inline_fn(volatile short arg0)
{
  return arg0;
}

void func_8016570C_ovl_30(void *arg0)
{
  volatile short new_var3;
  unsigned short pad;
  volatile short new_var;
  volatile unsigned short new_var2;
  new_var = 1;
  new_var2 = new_var;
  pad = new_var2;
  new_var = inline_fn(new_var);
  new_var3 = new_var;
  if (new_var3)
  {
  }
}

