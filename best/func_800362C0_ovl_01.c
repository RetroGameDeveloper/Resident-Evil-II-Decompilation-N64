void func_800362C0_ovl_01(void *arg0, void *arg1, void *arg2)
{
  volatile int x = 1;
  volatile int new_var;
  volatile int new_var2;
  volatile int new_var3;
  long long new_var4;
  new_var2 = (new_var = x);
  new_var4 = new_var2;
  new_var3 = new_var4;
  new_var2 = new_var3;
  new_var3 = new_var2;
  (void) new_var3;
}

