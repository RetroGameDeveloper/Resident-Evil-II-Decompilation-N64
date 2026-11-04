extern s32 func_800377B0_ovl_01(s32, s16, volatile unsigned char, u16 *);
extern s32 func_80166430_ovl_35(void *, s32, u16 *, u16 *);
extern s32 D_801667D8_ovl_35;
extern s32 D_8016682C_ovl_35;
void func_80166324_ovl_35(void *arg0, s32 arg1, s32 arg2)
{
  volatile u16 sp10;
  volatile u16 sp12;
  volatile u16 sp14;
  volatile u16 sp18;
  volatile u16 sp1a;
  volatile u16 sp1c;
  s32 temp_a2;
  u8 *temp_a3;
  u8 *temp_t0;
  s32 temp_v1;
  temp_a3 = ((u8 *) (&D_8016682C_ovl_35)) + (arg2 * 8);
  temp_a2 = arg1 & 0x7f;
  temp_t0 = ((u8 *) (&D_801667D8_ovl_35)) + (temp_a2 * 6);
  temp_v1 = (*((s32 *) (((u8 *) arg0) + 0x234))) + ((*((s16 *) temp_a3)) * 0x178);
  if (!(arg1 & 0x80))
  {
    sp10 = *((u16 *) (temp_a3 + 2));
    sp12 = *((u16 *) (temp_a3 + 4));
    sp14 = *((u16 *) (temp_a3 + 6));
    func_800377B0_ovl_01((((temp_t0[0] & 0x7f) << 24) | ((temp_t0[1] + (*((u16 *) (temp_t0 + 2)))) << 16)) | (*((u16 *) (temp_t0 + 4))), *((s16 *) (((u8 *) arg0) + 0x66)), temp_v1 + 0x38, (u16 *) (&sp10));
    return;
  }
  sp10 = *((u16 *) (temp_v1 + 0x4e));
  sp12 = *((u16 *) (((u8 *) arg0) + 0x25e));
  sp14 = *((u16 *) (temp_v1 + 0x56));
  sp1a = 0;
  sp18 = *((u16 *) (temp_a3 + 2));
  sp1c = *((u16 *) (temp_a3 + 6));
  func_80166430_ovl_35(arg0, temp_a2, (u16 *) (&sp10), (u16 *) (&sp18));
}

