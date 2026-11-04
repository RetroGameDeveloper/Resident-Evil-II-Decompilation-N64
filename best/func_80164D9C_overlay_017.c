s32 func_80033634_ovl_01();
s32 func_80164A2C_ovl_17(void *, s32, s32);
s32 func_80167608_ovl_17(void *, s32, s32);
void func_80164D9C_overlay_017(void *arg0, s32 arg1, s32 arg2)
{
 do { if ((*((u8 *) (((char *) arg0) + 6))) == 0) { func_80167608_ovl_17(arg0, 0x2004, (func_80033634_ovl_01() & 1) + 1); } } while (0);
  func_80164A2C_ovl_17(arg0, arg1, arg2);
}
