void func_80047BA4_ovl_01(void *, s16 *, s32, s32);
extern u8 D_800C7650_ovl_01[];
extern u8 D_8012F4EC_ovl_01[];
void func_8008C9EC_ovl_01(u32 arg0, s32 arg1, char arg2)
{
  s16 sp[4];
  u8 *dst;
  if ((*((s32 *) (D_800C7650_ovl_01 + 0x19A5C))) & 0x8000)
  {
    dst = D_8012F4EC_ovl_01;
    sp[2] = 0x28;
    sp[3] = 0x1E;
    sp[0] = (arg0 % 3) * 0x28;
    sp[1] = (arg0 / 3) * 0x1E;
    func_80047BA4_ovl_01(dst, sp, arg2, arg0 / 3);
    if (((u32) (arg1 - 0xE)) < 6)
    {
      sp[0] = ((arg0 + 1) % 3) * 0x28;
      sp[1] = ((arg0 + 1) / 3) * 0x1E;
      func_80047BA4_ovl_01(dst, sp, arg2, (arg0 + 1) / 3);
      func_80047BA4_ovl_01(dst, sp, arg2 + 0x19320, (arg0 + 1) / 3);
    }
  }
}

