extern s32 func_8017BB68_ovl_02(s32);
extern s32 func_8017BE48_ovl_02(s32);
extern void func_8017B568_ovl_02();
extern u32 D_80185690_ovl_02;
extern volatile s32 D_80185708_ovl_02;
extern volatile s32 D_80185720_ovl_02;
extern volatile s32 D_80185734_ovl_02;
extern volatile s32 D_80185744_ovl_02;
extern volatile s32 D_80185748_ovl_02;
extern volatile s32 D_8018574C_ovl_02;
extern volatile s32 D_80185750_ovl_02;
extern volatile s32 D_80185754_ovl_02;
extern volatile s32 D_80185758_ovl_02;
extern volatile s32 D_80185798_ovl_02;
extern u32 *D_80186C14_ovl_02;
void func_8017DECC_ovl_02(void);
void func_8017DA1C_ovl_02(void);
void func_8017D964_ovl_02(void)
{
  s32 x;
  s32 new_var2;
  unsigned short new_var;
  x = func_8017BE48_ovl_02(2);
  new_var = 0x420 / 4;
  x++;
  func_8017BE48_ovl_02(4);
  D_80186C14_ovl_02[new_var] = x;
  x = 2;
  if (D_80186C14_ovl_02[new_var] == x)
  {
    D_80185744_ovl_02 = func_8017BE48_ovl_02(14);
    func_8017BB68_ovl_02(1);
    D_80185748_ovl_02 = func_8017BE48_ovl_02(14);
    D_8018574C_ovl_02 = func_8017BE48_ovl_02(5);
    D_80185750_ovl_02 = func_8017BE48_ovl_02(5);
    new_var2 = func_8017BE48_ovl_02(5);
    D_80185754_ovl_02 = new_var2;
    D_80185758_ovl_02 = func_8017BE48_ovl_02(5);
  }
}

void func_8017D79C_ovl_02(void);
