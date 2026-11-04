extern s32 func_8017BB68_ovl_02(s32);
extern s32 func_8017BE48_ovl_02(s32);
extern u8 *D_80186C14_ovl_02;
extern volatile s32 D_80185744_ovl_02;
extern volatile s32 D_80185748_ovl_02;
extern volatile s32 D_8018574C_ovl_02;
extern volatile s32 D_80185750_ovl_02;
extern volatile s32 D_80185754_ovl_02;
extern volatile s32 D_80185758_ovl_02;
void func_8017D964_ovl_02(void)
{
  u8 **pp = &D_80186C14_ovl_02;
  s32 x;
  *((s32 *) ((*pp) + 0x420)) = (x = func_8017BE48_ovl_02(2));
  x++;
  func_8017BE48_ovl_02(4);
  if ((*((s32 *) ((*pp) + 0x420))) == 2)
  {
    D_80185744_ovl_02 = func_8017BE48_ovl_02(14);
    func_8017BB68_ovl_02(1);
    D_80185748_ovl_02 = func_8017BE48_ovl_02(14);
    D_8018574C_ovl_02 = func_8017BE48_ovl_02(5 ^ 0);
    D_80185750_ovl_02 = func_8017BE48_ovl_02(5);
    D_80185754_ovl_02 = func_8017BE48_ovl_02(5);
    D_80185758_ovl_02 = func_8017BE48_ovl_02(5);
  }
}

