inline char *inline_fn(void *arg0)
{
  return (char *) arg0;
}

void func_80166C3C_ovl_17(void *p, s32 a, s32 b, s32 c)
{
  s16 v[3];
  s16 new_var2;
  s32 t[2];
  volatile s32 reserve[6];
  v[0] = (*((u16 *) (((char *) p) + 0x64))) + a;
  p = inline_fn(p) - -0x2c;
  v[1] = (*((u16 *) (((char *) p) + 0x66))) + b;
  v[2] = (*((u16 *) (((char *) p) + 0x68))) + c;
  func_80040E88_ovl_01(v, t);
  func_8004279C_ovl_01(t, ((char *) p) + 0x1e0, v);
  new_var2 = v[0];
  *((s32 *) (((char *) p) + 0x28)) += (s16) new_var2;
  *((s32 *) p) += (s16) v[1];
  *((s32 *) (((char *) p) + 0x30)) += (s16) v[2];
}

