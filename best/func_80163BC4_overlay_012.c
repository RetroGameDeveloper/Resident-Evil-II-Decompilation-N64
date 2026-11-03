extern void func_80033678_ovl_01(void *);
void func_80163BC4_overlay_012(void *arg0, s32 arg1, s32 arg2)
{
  u8 *p = arg0;
  s32 temp;
 do { if (p[7] == 0) { func_800334F8_ovl_01(arg0, arg1, arg2, 0); temp = func_80089D34_ovl_01(arg0, arg1, arg2, 0x80); func_80032B8C_ovl_01(arg0, 0); if (temp) { p[7] = 1; *((u16 *) (p + 0x1F4)) = 2; *((u32 *) (p + 0x1E8)) = 0x19001F00; func_800334F8_ovl_01(arg0, arg1, arg2, 0); func_80089D34_ovl_01(arg0, arg1, arg2, 0x80); } } else { func_800334F8_ovl_01(arg0, arg1, arg2, 0); if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x80)) { u16 x = (*((u16 *) (p + 0x1F4))) - 1; *((u16 *) (p + 0x1F4)) = x; if ((x << 16) == 0) { p[5] = 12; *((u16 *) (p + 6)) = 0; } } } } while (0);
  func_80033678_ovl_01(arg0);
}
