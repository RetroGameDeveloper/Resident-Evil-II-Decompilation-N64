extern u8 D_80148B80[];
extern u8 D_80148C00[];
void func_800AC63C_ovl_01(s32 arg0, s32 arg1, u8 arg2);
extern s32 D_80143F08;
extern s32 (*D_80143FAC)(s32);
s32 func_800A56F0_ovl_01(void);
void func_800A5B60_ovl_01(void)
{
  s32 x = D_80143F08;
  volatile long new_var;
  if (x)
  {
    func_800A56F0_ovl_01();
    new_var = x;
    D_80143FAC(new_var);
    D_80143F08 = 0;
  }
}

extern s32 D_80143EAC;
void func_800A5AB4_ovl_01(s32 arg0);
