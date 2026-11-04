s32 func_80066804_ovl_01();
void func_80173824_overlay_054(void *arg0, s32 arg1, s32 arg2)
{
  unsigned char new_var;
  new_var = arg1 * 0x178;
  func_80066804_ovl_01(((*((s32 *) (((char *) arg0) + 0x234))) + new_var) + 0x4C, arg2, 1 << (*((u8 *) (((char *) arg0) + 0x1A2))));
}

