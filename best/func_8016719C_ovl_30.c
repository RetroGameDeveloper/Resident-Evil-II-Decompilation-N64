extern volatile s8 D_80167CEB_ovl_30;
s32 func_8016719C_ovl_30(s32 arg0)
{
  s8 x = D_80167CEB_ovl_30 + arg0;
  D_80167CEB_ovl_30 = x;
  if (x >= 9) {
    D_80167CEB_ovl_30 = 8;
    return 1;
  }
  if (x < -8) {
    D_80167CEB_ovl_30 = -8;
    return -1;
  }
  return 0;
}
