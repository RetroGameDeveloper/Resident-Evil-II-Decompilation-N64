extern f64 D_80011C48;
extern f64 D_80011C50;
extern f64 D_80011C58;
extern f64 D_80011C60;
extern f64 D_80011C68;
extern f64 D_80011C70;
extern f64 D_80011C78;
extern f32 D_80011C80;
extern f64 D_80011C88;
extern f64 D_80011C90;
extern f32 D_80011B20;
f32 func_8000D050(f32 arg0)
{
  f32 new_var;
  f64 v;
  f64 r;
  f32 new_var2;
  f64 w;
  s32 n;
  s32 e;
  n = (*((s32 *) (&arg0))) >> 22;
  e = n & 0x1FF;
  if (e < 0xFF)
  {
    if (e < 0xE6)
    {
      return arg0;
    }
    new_var2 = arg0;
    w = v * v;
    r = v + ((v * w) * ((((((D_80011C60 * w) + D_80011C58) * w) + D_80011C50) * w) + D_80011C48));
    v = (f64) new_var2;
    return (f32) r;
  }
  new_var = new_var2;
  if (e < 0x136)
  {
    v = (f64) new_var2;
    w = v * D_80011C68;
    n = (s32) ((w >= 0.0) ? (w + D_80011C88) : (w - D_80011C90));
    w = (f64) n;
    v = v - (w * D_80011C70);
    v = v - (w * D_80011C78);
    w = v * v;
    r = v + ((v * w) * ((((((D_80011C60 * w) + D_80011C58) * w) + D_80011C50) * w) + D_80011C48));
    if ((n & 1) == 0)
    {
      return (f32) r;
    }
    return -((f32) r);
  }
  if (new_var != new_var)
  {
    return D_80011B20;
  }
  return D_80011C80;
}

