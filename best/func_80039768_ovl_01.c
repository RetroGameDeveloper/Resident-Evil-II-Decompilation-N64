extern u8 D_800EBB34_ovl_01[];
extern u8 D_800E8FC8_ovl_01[];
void func_80039768_ovl_01(void)
{
  s32 *new_var;
  u8 *b = *((u8 **) D_800EBB34_ovl_01);
  s32 *m = (s32 *) D_800E8FC8_ovl_01;
  s32 mat[8];
  s16 out[3];
  s32 i;
  for (i = 0; i < 8; i++)
  {
    mat[i] = m[i];
  }

  new_var = (s32 *) (b + 0x34);
  *(b + 0x3c) = *new_var;
  *((u16 *) (b + 0x40)) = *((u16 *) (b + 0x38));
}

