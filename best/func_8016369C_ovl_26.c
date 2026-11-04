void func_8016369C_ovl_26(void *arg0)
{
  u8 var_a1;
  arg0 = arg0 + 0x2B4;
  var_a1 = *((u8 *) (((char *) arg0) + 0x26));
  if ((*((u8 *) (((char *) arg0) + 8))) != 0x2E)
  {
    var_a1 += 8;
  }
  *((u8 *) (((char *) arg0) + 0xC)) = var_a1;
  *((s8 *) (((char *) arg0) + 0xB)) = 0x5A;
  *((s32 *) (((char *) arg0) + 0)) = (s32) ((*((s32 *) (((char *) arg0) + 0))) & (~4));
  *((s8 *) (((char *) arg0) + 2)) = 0;
  *((s16 *) (((char *) arg0) + 6)) = 0x100;
  *((s32 *) (((char *) arg0) + 0x1E8)) = (s32) (((*((u8 *) (((char *) arg0) + 0x2CD))) * 0x0D000000) + 0x3F00);
  if ((*((u8 *) (((char *) arg0) + 4))) == 0)
  {
    *((s16 *) (((char *) arg0) + 6)) = 0x200;
    *((s8 *) (((char *) arg0) + 0x12)) = 1;
    *((s8 *) (((char *) arg0) + 0x13)) = 0;
    *((s8 *) (((char *) arg0) + 0x14)) = 0x20;
  }
}

