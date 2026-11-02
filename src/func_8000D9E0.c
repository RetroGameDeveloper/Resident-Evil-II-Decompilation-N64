s32 func_8000C620(void *, void *, s32);
s32 func_8000D9C0(void);
s32 func_8000E800(s32);
extern s32 D_80011CE0;
extern s32 D_80011CE4;
s32 func_8000D9E0(s32 a, s32 b, s32 c, s32 d)
{
  s32 r = -1;
  s32 val;
  if (b & 7)
  {
    func_8000C620(&D_80011CE0, &D_80011CE4, 0x3A);
  }
  if (c & 7)
  {
    func_8000C620(&D_80011CE0, &D_80011CE4, 0x3B);
  }
  if (d & 7)
  {
    func_8000C620(&D_80011CE0, &D_80011CE4, 0x3C);
  }
  if (func_8000D9C0())
  {
    return r;
  }
  *((volatile s32 *) 0xA4040000) = b;
  val = func_8000E800(c);
  *((volatile s32 *) 0xA4040004) = val;
  if (!a)
  {
    *((volatile s32 *) 0xA404000C) = d - 1;
  }
  else
  {
    *((volatile s32 *) 0xA4040008) = d - 1;
  }
  return 0;
}

