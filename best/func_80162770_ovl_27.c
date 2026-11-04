s32 func_80033634_ovl_01(void);
s32 func_80089D34_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_801636DC_ovl_27(void *arg0, s32 arg1);
void func_80162770_ovl_27(u8 *arg0, s32 arg1, s32 arg2)
{
  u32 v;
 do { if (arg0[6] == 0) { arg0[6] = 1; arg0[0x2C7] = 1; *((s16 *) (arg0 + 0x2C2)) = 0x400; *((s32 *) (arg0 + 0x1E8)) = (func_80033634_ovl_01() & 7) << 16; func_80089D34_ovl_01(arg0, arg1, arg2, 0x200); v = arg0[0x2BF]; if ((v == 1) && (arg0[0x2C6] == 0)) { *((u32 *) (arg0 + 4)) = 0x02020000; arg0[0x2BE] = 0; v = arg0[0x2BF]; arg0[0x206] = v; } } } while (0);
  func_801636DC_ovl_27(arg0, 0);
}
