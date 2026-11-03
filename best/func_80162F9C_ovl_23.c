extern volatile s16 D_800F9DE0_ovl_01[];
void func_80162F9C_ovl_23(void)
{
  u32 i = 0;
  volatile s16 *p = D_800F9DE0_ovl_01;
  s32 magic = 0x2AAAAAAB;
  do {
    s32 x = *p;
    *p = (s16)(x / 6);
    i++;
    p++;
  } while (i < 30);
}
