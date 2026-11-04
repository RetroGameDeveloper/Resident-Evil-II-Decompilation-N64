extern s32 func_800A5618_ovl_01(void);
extern s32 func_800A5660_ovl_01(s32 *, s32 *);
s32 func_800AD7B8_ovl_01(volatile unsigned long long arg0)
{
  unsigned int new_var2;
  s32 **new_var4;
  volatile unsigned long long new_var;
  s32 *new_var3;
  (void) new_var;
  new_var3 = (s32 *) 0;
  new_var = arg0;
  ;
  func_800A5618_ovl_01();
  new_var4 = &new_var3;
  func_800A5660_ovl_01(*new_var4, *new_var4);
  return 0;
}

