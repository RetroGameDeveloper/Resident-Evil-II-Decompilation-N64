static inline static static static void *inline_fn(void *arg0)
{
  return arg0;
}

void func_80169F38_ovl_31(void *arg0, void *arg1, void *arg2)
{
  volatile u8 new_var3;
  volatile u8 *p = inline_fn(arg0);
  unsigned short new_var;
  short new_var4;
  volatile unsigned char new_var2;
  new_var3 = (new_var3 = p[6]);
  new_var = new_var3;
  new_var2 = new_var;
  new_var2 = new_var2 == 0;
  if (new_var2)
  {
    new_var4 = 0x1e8;
    p[new_var4] = 0;
    p[6] = 1;
    p[0x25c] = 1;
    p[0x26f] |= 128;
  }
}

