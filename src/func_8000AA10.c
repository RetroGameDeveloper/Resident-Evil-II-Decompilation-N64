s32 func_8000AA10(s32 arg0, s32 arg1)
{
  char new_var;
  extern s32 func_8000AAF0(s32);
  extern s32 func_8000AB80(s32, void *);
  extern s32 func_8000C9E0(s32, void *, s32);
  extern s32 func_8000D1F0(s32, void *);
  extern u8 D_80016470[];
  volatile u32 out[4];
  s32 temp_s0;
  s32 var_v0;
  func_8000AAF0(arg1);
  func_8000D1F0(1, D_80016470);
  func_8000C9E0(arg0, (void *) (&out[2]), 1);
  temp_s0 = func_8000D1F0(0, D_80016470);
  func_8000C9E0(arg0, (void *) (&out[2]), 1);
  func_8000AB80(arg1, (void *) (&out[0]));
  if ((new_var = ((volatile u8 *) out)[2]) & 1)
  {
    if (new_var & 2)
    {
      return 2;
    }
  }
  if (((*((volatile u16 *) (((volatile u8 *) out) + 2))) & 0x1ff) != 0x100)
  {
    return 1;
  }
  if (((volatile u8 *) out)[2] & 4)
  {
    return 4;
  }
  return temp_s0;
}

