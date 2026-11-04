s32 func_800A5618_ovl_01();
s32 func_800A5660_ovl_01();
s32 func_800AAF30_ovl_01(void *, f32 *);
s32 func_800AB26C_ovl_01(void *, void *, void *);
extern f32 D_800BA7D4_ovl_01;
extern u8 D_801362B0_ovl_01;
s32 func_800AA658_ovl_01(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4, u8 arg5)
{
  f32 sp10;
  f32 sp14;
  s32 sp18;
  f32 sp1C;
  f32 sp20;
  s32 sp24;
  f32 sp28;
  f32 sp2C;
  s32 sp30;
  s32 sp34;
  s32 sp38;
  s32 sp3C;
  if (D_801362B0_ovl_01 == 0)
  {
    return 0;
    *((s32 *) (((char *) arg0) + 0x28)) = (s32) (*((s32 *) (((char *) arg3) + 4)));
  }
  func_800A5618_ovl_01();
  *((s32 *) (((char *) arg0) + 0xC)) = (s32) (*((s32 *) (((char *) arg1) + 0)));
  *((s32 *) (((char *) arg0) + 0x10)) = (s32) (*((s32 *) (((char *) arg1) + 4)));
  *((s32 *) (((char *) arg0) + 0x14)) = (s32) (*((s32 *) (((char *) arg1) + 8)));
  *((s32 *) (((char *) arg0) + 0x18)) = (s32) (*((s32 *) (((char *) arg2) + 0)));
  *((s32 *) (((char *) arg0) + 0x1C)) = (s32) (*((s32 *) (((char *) arg2) + 4)));
  *((s32 *) (((char *) arg0) + 0x20)) = (s32) (*((s32 *) (((char *) arg2) + 8)));
  *((s32 *) (((char *) arg0) + 0x24)) = (s32) (*((s32 *) (((char *) arg3) + 0)));
  *((s32 *) (((char *) arg0) + 0x2C)) = (s32) (*((s32 *) (((char *) arg3) + 8)));
  *((f32 *) (((char *) arg0) + 0x3C)) = (f32) (-(*((f32 *) (((char *) arg4) + 0))));
  *((f32 *) (((char *) arg0) + 0x40)) = (f32) (-(*((f32 *) (((char *) arg4) + 4))));
  *((f32 *) (((char *) arg0) + 0x44)) = (f32) (-(*((f32 *) (((char *) arg4) + 8))));
  func_800AB26C_ovl_01(arg0 + 0x30, arg0 + 0x3C, arg0 + 0x24);
  sp10 = *((f32 *) (((char *) arg0) + 0x30));
  sp1C = *((f32 *) (((char *) arg0) + 0x34));
  sp28 = *((f32 *) (((char *) arg0) + 0x38));
  sp14 = *((f32 *) (((char *) arg0) + 0x3C));
  sp20 = *((f32 *) (((char *) arg0) + 0x40));
  sp2C = *((f32 *) (((char *) arg0) + 0x44));
  sp18 = *((s32 *) (((char *) arg0) + 0x24));
  sp24 = *((s32 *) (((char *) arg0) + 0x28));
  sp30 = *((s32 *) (((char *) arg0) + 0x2C));
  sp34 = *((s32 *) (((char *) arg0) + 0xC));
  sp38 = *((s32 *) (((char *) arg0) + 0x10));
  sp3C = *((s32 *) (((char *) arg0) + 0x14));
  func_800AAF30_ovl_01(arg0 + 0x48, &sp10);
  *((f32 *) (((char *) arg0) + 0x84)) = (f32) (((f32) (arg5 & 0xFF)) / D_800BA7D4_ovl_01);
  func_800A5660_ovl_01();
  return 1;
}

