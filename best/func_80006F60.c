extern s32 D_800128F0;
extern s32 func_8000BE30(void);
extern s32 func_80007450(s32, void *, s32);
extern volatile int func_8000CB60(s32, void *, s32);
s32 func_80006F60(s32 a, void *p, s32 c)
{
  s32 r;
  unsigned long new_var;
  if (!D_800128F0)
  {
    *((s32 *) (((u8 *) p) + 20)) = a;
    return -1;
  }
  *((s16 *) p) = (c) ? (15) : (16);
  if ((*((u8 *) (((u8 *) p) + 2))) != 1)
  {
    r = func_8000BE30();
    return func_8000CB60(r, p, 0);
  }
  new_var = 0;
  r = func_8000BE30();
  return func_80007450(r, p, new_var);
}

