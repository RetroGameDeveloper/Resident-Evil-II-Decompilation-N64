typedef struct S_func_8016234C_ovl_12_arg0
{
  u8 pad_00[5];
  s8 unk_05;
  u16 unk_06;
  u8 pad_08[0x1A2 - 0x08];
  u8 unk_1A2;
  u8 pad_1A3[0x28C - 0x1A3];
  u32 unk_28C;
} S_func_8016234C_ovl_12_arg0;
s32 func_80162120_ovl_12(void);
void func_80166B20_ovl_12(void *, s32, u8 *);
extern u8 D_800C7650_ovl_01[];
void func_8016234C_ovl_12(S_func_8016234C_ovl_12_arg0 *arg0)
{
  union 
  {
    u64 q;
    struct 
    {
      u32 lo;
      u32 hi;
    } w;
  } b;
  u8 *base;
  u32 off;
  s32 ret;
  ret = func_80162120_ovl_12();
  off = 0x18000;
  b.q = (u64) ((u32) D_800C7650_ovl_01);
  base = (u8 *) (off + ((u32) b.q));
  if (base[0x1C22] == arg0->unk_1A2)
  {
    if (arg0->unk_28C < 0xFA0)
    {
      arg0->unk_05 = 1;
      arg0->unk_06 = 0;
    }
    else
      if (ret == 1)
    {
      arg0->unk_05 = 1;
      arg0->unk_06 = 0;
    }
    else
      if ((*((u16 *) (base + 0x1A78))) & 0x20)
    {
      arg0->unk_05 = 1;
      arg0->unk_06 = 0;
    }
    else
    {
      if ((*((u16 *) (base + 0x1A7A))) & 1)
      {
        arg0->unk_05 = 2;
      }
      arg0->unk_06 = 0;
    }
  }
  func_80166B20_ovl_12(arg0, ret, base);
}

