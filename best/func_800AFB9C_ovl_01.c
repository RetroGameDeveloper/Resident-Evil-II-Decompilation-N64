extern s32 func_800AB4A4_ovl_01(void *);
extern s32 func_800AB4B4_ovl_01(void *, void *);
extern s32 func_800AB514_ovl_01(s32);
extern s32 func_800ADE94_ovl_01(s32);
void func_800AFB9C_ovl_01(void *arg0, void *arg1, s32 arg2)
{
  void **new_var4;
  void *new_var;
  s32 new_var3;
  volatile long new_var2;
  new_var3 = arg2;
  if (arg1)
  {
    new_var4 = &arg1;
    new_var = *new_var4;
    (void) arg0;
    (void) new_var;
    (void) ((int) (new_var2 = arg2));
  }
  else
  {
    new_var = arg1;
    (void) arg0;
    (void) new_var;
    (void) ((int) (new_var2 = new_var3));
  }
}

