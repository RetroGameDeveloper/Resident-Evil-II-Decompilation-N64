extern void func_80052C00_ovl_01(s32, s32, s32);
extern void func_80052C9C_ovl_01(s32, s32, s32);
void func_80163A38_ovl_27(void *arg0, s8 arg1)
{
  u8 *p;
  p[5] = arg1;
  p = (u8 *) arg0;
  p[4] = 2;
  p[6] = 0;
  p[7] = 0;
  p[0x26F] |= 0x80;
  func_80052C00_ovl_01(3, 0, p[0x26F]);
  func_80052C9C_ovl_01(4, 0xC8, 3);
}

