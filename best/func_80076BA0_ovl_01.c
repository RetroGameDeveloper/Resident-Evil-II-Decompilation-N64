s32 func_80078FF0_ovl_01(s8);
extern s32 D_800C7650_ovl_01;
extern s32 D_80119D24_ovl_01;
extern s32 D_80119E84_ovl_01;
void func_80076BA0_ovl_01(void)
{
  int new_var2;
  char *new_var;
  if (!((*((s32 *) (((char *) (&D_800C7650_ovl_01)) + 0x19A3C))) & 0x2000))
  {
    if (((*((u8 *) (((char *) (&D_80119E84_ovl_01)) + 1))) != 0xFF) && ((*((u8 *) (((char *) (&D_80119E84_ovl_01)) + 1))) == 0))
    {
      if ((*((s8 *) (((char *) (&D_80119E84_ovl_01)) + 2))) >= 0)
      {
        if (D_80119D24_ovl_01 != 0)
        {
          func_80078FF0_ovl_01(*((s8 *) (((char *) (&D_80119E84_ovl_01)) + 2)));
        }
        *((s8 *) (((char *) (&D_80119E84_ovl_01)) + 0)) = 1;
      }
    }
    new_var2 = 0;
    if (((*((u8 *) (((char *) (&D_80119E84_ovl_01)) + 9))) != 0xFF) && ((*((u8 *) (((char *) (&D_80119E84_ovl_01)) + 9))) == new_var2))
    {
      if ((*((s8 *) (((char *) (&D_80119E84_ovl_01)) + 0xA))) >= 0)
      {
        if (D_80119D24_ovl_01 != new_var2)
        {
          func_80078FF0_ovl_01(*((s8 *) (((char *) (&D_80119E84_ovl_01)) + 0xA)));
        }
        *((s8 *) (((char *) (&D_80119E84_ovl_01)) + 8)) = 1;
      }
    }
    new_var = (char *) (&D_80119E84_ovl_01);
    new_var = new_var + 0x11;
    if ((((*((u8 *) new_var)) != 0xFF) && ((*((u8 *) (((char *) (&D_80119E84_ovl_01)) + 0x11))) == new_var2)) && ((*((s8 *) (((char *) (&D_80119E84_ovl_01)) + 0x12))) >= new_var2))
    {
      if (D_80119D24_ovl_01 != new_var2)
      {
        func_80078FF0_ovl_01(*((s8 *) (((char *) (&D_80119E84_ovl_01)) + 0x12)));
      }
      *((s8 *) (((char *) (&D_80119E84_ovl_01)) + 0x10)) = 1;
    }
  }
}

