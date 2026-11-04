typedef struct S_func_80165B8C_ovl_17_arg0
{
  u8 unk_00[0x6];
  s8 unk_06;
  u8 unk_07[0x5D];
  u16 unk_64;
  u16 unk_66;
  u8 unk_68[0x178];
  s16 unk_1E0;
  s16 unk_1E2;
  s16 unk_1E4;
  u8 unk_1E6[0x2];
  s32 unk_1E8;
  u8 unk_1EC[0x8];
  s16 unk_1F4;
  s16 unk_1F6;
  u8 unk_1F8[0xBE];
  s16 unk_2B6;
  u8 unk_2B8[0x7];
  s8 unk_2BF;
  u8 unk_2C0[0xC];
  u8 unk_2CC;
  u8 unk_2CD[0xB];
  u8 unk_2D8;
} S_func_80165B8C_ovl_17_arg0;
void func_80089D34_ovl_01(void *arg0, s32 arg1, s32 arg2, u32 arg3);
void func_80165B8C_ovl_17(S_func_80165B8C_ovl_17_arg0 *arg0, s32 arg1, s32 arg2)
{
  int new_var;
  arg0->unk_06 = 1;
  arg0->unk_1F4 = 0x800;
  arg0->unk_1E8 = 0x01090000;
  func_80089D34_ovl_01(arg0, arg1, arg2, 0x400);
  arg0->unk_2BF = 1;
  arg0->unk_2B6 = 0;
  arg0->unk_1E0 = 0x1E0;
  arg0->unk_1E2 = 0;
  arg0->unk_1E4 = 0;
  if (arg0->unk_2CC & 1)
  {
    arg0->unk_1F4 = 0;
    arg0->unk_1F6 = (arg0->unk_2CC << 10) - arg0->unk_66;
  }
  else
  {
    arg0->unk_1F6 = 0;
    arg0->unk_1F4 = (new_var = -arg0->unk_64);
  }
  if (arg0->unk_2D8 != 1)
  {
    func_80166FBC_ovl_17(arg0, 0, 0);
  }
}

