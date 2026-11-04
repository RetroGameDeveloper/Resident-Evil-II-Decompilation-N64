extern u8 D_800EEB4C_ovl_01;
void func_80039020_ovl_01(void)
{
  u8 *v1;
  u8 *a0;
  u8 *base;
  base = &D_800EEB4C_ovl_01;
  a0 = base - 0x2E80;
  v1 = base - 0x2E68;
  do
  {
    v1 = v1 + 0x7C;
    a0++;
    a0--;
    a0 += 0x7C;
    v1[-0x17] = 0;
    *a0 = 0;
    *((s16 *) v1) = 0;
  }
  while (base != a0);
}

