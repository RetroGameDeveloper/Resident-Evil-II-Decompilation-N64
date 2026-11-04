extern void func_8016559C_ovl_26(void);
extern void func_80166B18_ovl_26(void *, s32, s32);
extern void func_801656F0_ovl_26(void *, s32, s32);
void func_80165900_ovl_26(void *arg0)
{
  int new_var;
  u8 *p;
  s32 s3;
  s32 s1 = 12;
  int s0;
  u32 n;
  func_8016559C_ovl_26();
  n = p[0x26e];
  p[0x25c] |= 1;
  if (((n - ((n / 3) * 3)) == 0) && (p[0x2d9] == 0))
  {
    s1 = 6;
    s3 = 9;
  }
  else
  {
    s3 = (new_var = 14);
  }
  s0 = (s1 - 1) & 255;
  func_80166B18_ovl_26(arg0, s0, 0);
  func_80166B18_ovl_26(arg0, s0, 3);
  func_801656F0_ovl_26(arg0, s1, s3);
  p = arg0;
}

