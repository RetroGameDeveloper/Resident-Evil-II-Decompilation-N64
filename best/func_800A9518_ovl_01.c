extern u8 D_801479F8;
extern u8 D_80148180;
void func_800A94E0_ovl_01(void);
s32 func_800A5BF0_ovl_01(s32, s32);
extern u8 D_801479F8;
extern u8 D_80148180;
void func_800A9518_ovl_01(void)
{
  int new_var;
  s32 i = 0;
  new_var = 12;
  if (D_801479F8)
  {
    u8 *p = &D_80148180;
    do
    {
      if ((*p) == 1)
      {
        func_800A5BF0_ovl_01(*((s32 *) (p + 8)), *((s32 *) (p + new_var)));
      }
      p += 0x18;
    }
    while (i < ((s32) D_801479F8));
    i++;
  }
}

extern u8 D_801362B0_ovl_01;
s32 func_800AF074_ovl_01(void);
extern u8 D_801443E8;
s32 func_800A81E8_ovl_01(void);
extern f64 D_800BA710_ovl_01;
extern f64 D_800BA718_ovl_01;
f64 func_800A61F8_ovl_01(f64 arg0);
