s32 func_8002751C_ovl_01();
s32 func_80027530_ovl_01();
s32 func_800276B4_ovl_01();
s32 func_8009E86C_ovl_01();
extern char D_800E9118_ovl_01[];
extern u8 D_801326C8_ovl_01;
extern s8 D_801326CA_ovl_01;
extern u8 D_801326CB_ovl_01;
extern s32 D_801326E0_ovl_01;
static inline int inline_fn(u8 arg0)
{
  return arg0 & 8;
}

void func_8009CE94_ovl_01(void)
{
  u8 temp_v1;
  void *temp_a2;
  temp_a2 = (char *) (D_801326CB_ovl_01 * 0x2C);
  temp_a2 += (s32) (&D_800E9118_ovl_01);
  if ((((*((s16 *) (((char *) temp_a2) + 0x10))) != 0x7FFF) && (((u16) (*((s16 *) (((char *) temp_a2) + 0x10)))) != 0x8000)) && ((*((s16 *) (((char *) temp_a2) + 0x12))) != 0x100))
  {
    if (D_801326C8_ovl_01 & 2)
    {
      if (func_800276B4_ovl_01(D_801326CB_ovl_01) != 0)
      {
        ;
        D_801326C8_ovl_01 = temp_v1 & 0xFD;
        if (D_801326C8_ovl_01 & 4)
        {
          D_801326CA_ovl_01 = 3;
          D_801326E0_ovl_01 = 0;
          func_8009E86C_ovl_01(0, 1);
        }
        else
        {
          if (inline_fn(D_801326C8_ovl_01))
          {
            D_801326CA_ovl_01 = 1;
          }
          else
          {
            D_801326CA_ovl_01 = 0;
          }
          D_801326C8_ovl_01 &= 0xF7;
        }
        func_8002751C_ovl_01(5, 0);
      }
    }
    else
    {
      func_80027530_ovl_01(D_801326CB_ovl_01 | 0x200);
      D_801326CA_ovl_01 = 2;
      D_801326C8_ovl_01 |= 2;
    }
  }
}

