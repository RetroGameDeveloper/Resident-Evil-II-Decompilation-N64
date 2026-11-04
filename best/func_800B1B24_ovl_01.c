extern s32 D_80158A20;
extern s32 D_80158A40;
void func_800B1B24_ovl_01(void *arg0)
{
  u8 temp_a1;
  if (((*((s32 *) (((char *) arg0) + 0x60))) != (-1)) && ((*((u8 *) (((char *) arg0) + 0x4A))) != 0xFF))
  {
    temp_a1 = (*(((*((u8 *) (((char *) arg0) + 0x4A))) + ((*((u8 *) (((char *) arg0) + 0x4B))) * 0x10)) + (&D_80158A40)) = *((u8 *) (((char *) arg0) + 0x63)));
    if ((*((u8 *) (((char *) arg0) + 0x4B))) == 0xFF)
    {
      *(temp_a1 + (&D_80158A20)) = temp_a1;
      return;
    }
  }
}

