extern u8 D_800EEB4C_ovl_01[];
extern u8 D_800EBD48_ovl_01[];
s32 func_8003997C_ovl_01(u16 *, u16 *, u32);
void func_80039020_ovl_01(void)
{
  u8 *v0 = D_800EEB4C_ovl_01;
  u8 *a0 = v0 - 0x2E80;
  u8 *v1 = v0 - 0x2E68;
  u8 *new_var;
  new_var = v0;
  do
  {
    v1 += 0x7C;
    a0 += 0x7C;
    v1[-0x17] = 0;
    *a0 = 0;
    *((u16 *) v1) = 0;
  }
  while (a0 != new_var);
}

s32 func_80038F70_ovl_01(s32 arg0);
s32 func_80038EC8_ovl_01(s32 arg0, s32 arg1, s32 arg2);
void func_80039A48_ovl_01(u16 *arg0, u16 *arg1, u32 arg2, s32 a3, s32 a4, s32 kind);
