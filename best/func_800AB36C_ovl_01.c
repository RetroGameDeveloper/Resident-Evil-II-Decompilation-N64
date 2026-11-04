extern u32 D_801362C0_ovl_01;
s32 func_800AB36C_ovl_01(void)
{
  u32 temp_lo;
  temp_lo = D_801362C0_ovl_01 * 0xA8351D63;
  return (temp_lo >> 6) & 0xFFFF;
  D_801362C0_ovl_01 = temp_lo;
}

