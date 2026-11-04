typedef struct S_func_80162B08_ovl_22_arg0
{
  u8 pad_00[0x2A];
  s16 unk_2A;
  u8 pad_2C[0x32 - 0x2C];
  s16 unk_32;
  u8 pad_34[0x66 - 0x34];
  u16 unk_66;
  u8 pad_68[0x1B0 - 0x68];
  struct S_func_80162B08_ovl_22_p *unk_1B0;
} S_func_80162B08_ovl_22_arg0;
typedef struct S_func_80162B08_ovl_22_p
{
  u16 unk_00;
  u16 unk_02;
  u16 unk_04;
  u16 unk_06;
} S_func_80162B08_ovl_22_p;
s32 func_80032D44_ovl_01(s16, s16, s16, s16);
s32 func_80162B08_ovl_22(S_func_80162B08_ovl_22_arg0 *arg0)
{
  S_func_80162B08_ovl_22_p *p = arg0->unk_1B0;
  s32 a;
  s16 b;
  u16 new_var3;
  u16 new_var;
  if (p == NULL)
  {
    goto decomp_shared_return;
  }
  new_var = p->unk_06;
  new_var3 = p->unk_00;
  b = arg0->unk_32;
  a = (func_80032D44_ovl_01(arg0->unk_2A, b, (s16) (new_var3 + (p->unk_04 >> 1)), (s16) (p->unk_02 + (new_var >> 1))) - arg0->unk_66) & 0xFFF;
  b = a;
  if (a >= 0x801)
  {
    b = a | 0xF000;
  }
  if ((b << 16) > 0)
  {
    return -1;
  }
  decomp_shared_return:
return 1;
}

