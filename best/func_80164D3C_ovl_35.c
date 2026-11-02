extern s32 func_80033634_ovl_01(void);
extern void func_80166324_ovl_35(void *, s32, s32);
extern void func_80164604_ovl_35(void *, s32, s32);
extern void func_80089D34_ovl_01(void *, s32, s32, s32);
typedef void (*Fn)(void *, s32, s32);
extern volatile Fn D_80166728_ovl_35[];
void func_80164D3C_ovl_35(void *arg0, s32 arg1, s32 arg2)
{
  u8 *p = arg0;
  if (p[6] == 0)
  {
    s32 x = func_80033634_ovl_01();
    func_80166324_ovl_35(arg0, 8, x & 3);
    x = func_80033634_ovl_01();
    func_80166324_ovl_35(arg0, 8, (x & 3) | 4);
    func_80164604_ovl_35(arg0, arg1, arg2);
  }
  else
    if (arg0 || arg1)
  {
    D_80166728_ovl_35[p[6]](arg0, arg1, arg2);
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
  }
  else
  {
    D_80166728_ovl_35[p[6]](arg0, arg1, arg2);
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
  }
}

