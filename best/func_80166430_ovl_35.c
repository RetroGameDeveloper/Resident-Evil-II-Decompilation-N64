s32 func_800377B0_ovl_01(s32, s16, void *, u16 *);
s32 func_80040E88_ovl_01(void *, void *);
s32 func_8004279C_ovl_01(void *, s32, u16 *);
extern u8 D_801667D8_ovl_35[];
extern s32 D_800E8FC8_ovl_01;
void func_80166430_ovl_35(void *arg0, s32 arg1, void *arg2, s32 arg3)
{
  u16 v[3];
  s32 pad[8];
  int new_var;
  u8 *q = D_801667D8_ovl_35 + ((arg1 & 0x7f) * 6);
  func_80040E88_ovl_01(((s8 *) arg0) + 0x64, &pad[0]);
  func_8004279C_ovl_01(&pad[0], arg3, v);
  v[0] += *((u16 *) ((s8 *) arg2));
  v[1] += *((u16 *) (((s8 *) arg2) + 2));
  new_var = q[0] & 0x7f;
  v[2] += *((u16 *) (((s8 *) arg2) + 4));
  func_800377B0_ovl_01(((new_var << 24) | ((q[1] + (*((u16 *) (q + 2)))) << 16)) | (*((u16 *) (q + 4))), *((s16 *) (((s8 *) arg0) + 0x66)), &D_800E8FC8_ovl_01, v);
}

