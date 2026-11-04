extern s32 func_80084514_ovl_01(s32);
extern u8 D_800C7650_ovl_01[];
void func_80166740_ovl_32(s32 arg0, s32 arg1)
{
  u8 *p;
  s32 *q = *((s32 **) (p + 0x1D38));
  *((s32 *) (((u8 *) q) + 4)) = func_80084514_ovl_01(arg1);
  p = (D_800C7650_ovl_01 + 0x18000) + ((arg0 + 3) * 4);
}

