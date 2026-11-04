s32 func_80089D34_ovl_01(void *, s32);
extern s32 D_800C7650_ovl_01;
void func_80164B18_ovl_26(void *arg0)
{
  void *temp_s1;
  temp_s1 = arg0 + 0x2B4;
  if ((*((u8 *) (((char *) arg0) + 7))) == 0)
  {
    *((u8 *) (((char *) arg0) + 7)) = 1U;
    *((s32 *) (((char *) arg0) + 0x1E8)) = (s32) (((((*((u8 *) (((char *) arg0) + 0x2CD))) * 0xD) + 0xB) << 0x18) + 0x3F00);
    *((u8 *) (((char *) temp_s1) + 4)) = (u8) (*((u8 *) (((char *) temp_s1) + 0xC)));
  }
  if (func_80089D34_ovl_01(arg0, 0x40) != 0)
  {
    if (temp_s1)
    {
      *((s8 *) (((char *) arg0) + 5)) = 1;
      *((s16 *) (((char *) arg0) + 6)) = 0;
      *((s8 *) (((char *) temp_s1) + 8)) = 0x1E;
      *((s8 *) (((char *) temp_s1) + 0xA)) = 0x1E;
      *((s8 *) (((char *) temp_s1) + 9)) = 0x2D;
      *((u16 *) (((char *) (&D_800C7650_ovl_01)) + 0x19A78)) = (u16) ((*((u16 *) (((char *) (&D_800C7650_ovl_01)) + 0x19A78))) & 0xFF7F);
      *((s8 *) (((char *) arg0) + 0x2B6)) = 0;
      *((s32 *) (((char *) arg0) + 0)) = (s32) ((*((s32 *) (((char *) arg0) + 0))) & (~0x42));
    }
    else
    {
      *((s8 *) (((char *) arg0) + 5)) = 1;
      *((s16 *) (((char *) arg0) + 6)) = 0;
      *((s8 *) (((char *) temp_s1) + 8)) = 0x1E;
      *((s8 *) (((char *) temp_s1) + 0xA)) = 0x1E;
      *((s8 *) (((char *) temp_s1) + 9)) = 0x2D;
      *((u16 *) (((char *) (&D_800C7650_ovl_01)) + 0x19A78)) = (u16) ((*((u16 *) (((char *) (&D_800C7650_ovl_01)) + 0x19A78))) & 0xFF7F);
      *((s8 *) (((char *) arg0) + 0x2B6)) = 0;
      *((s32 *) (((char *) arg0) + 0)) = (s32) ((*((s32 *) (((char *) arg0) + 0))) & (~0x42));
    }
  }
}

