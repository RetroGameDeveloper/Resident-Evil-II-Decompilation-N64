extern f64 D_80011B50;
extern f64 D_80011B58;
extern f64 D_80011B60;
extern f64 D_80011B68;
f32 func_80006BE0(f32);
f32 func_8000D050(f32);
void func_80009120(f32 *);
void func_80008FE0(f32 *, s32);
typedef union 
{
  s32 i;
  f32 f;
} FI;
void func_80009470(s32 arg0, s16 *arg1, FI arg2, FI arg3, FI arg4, FI arg5, FI arg6)
{
  f32 mtx[16];
  f32 f2;
  f32 f3;
  f32 f4;
  f32 f5;
  f32 f6;
  f32 cot;
  f32 num;
  f32 den;
  f32 p;
  f32 q;
  f32 r;
  f32 *mp;
  f32 new_var;
  s32 i;
  volatile int new_var2;
  s32 j;
  s32 v;
  f64 t;
  new_var = arg2.f;
  f2 = new_var;
  f3 = arg3.f;
  f4 = arg4.f;
  f5 = arg5.f;
  f6 = arg6.f;
  mp = mtx;
  func_80009120(mp);
  f2 = ((f32) (((f64) f2) * D_80011B50)) / 2.0f;
  cot = func_80006BE0(f2) / func_8000D050(f2);
  num = f4 + f5;
  den = f4;
  den = den - f5;
  p = num / den;
  q = ((2.0f * f4) * f5) / den;
  r = cot / f3;
  ((s32 *) mtx)[15] = 0;
  mtx[11] = -1.0f;
  mtx[5] = cot;
  mtx[10] = p;
  mtx[14] = q;
  mtx[0] = r;
  for (i = 0; i < 4; i++)
  {
    for (j = 0; j < 4; j++)
    {
      mp[j] *= f6;
    }

    mp += 4;
  }

  if (arg1 != NULL)
  {
    t = (f64) (f4 + f5);
    if (t <= D_80011B58)
    {
      v = 0xFFFF;
    }
    else
    {
      t = D_80011B60 / t;
      if (!(t >= D_80011B68))
      {
        v = (s32) t;
      }
      else
      {
        v = (s32) (t - D_80011B68);
        v |= 0x80000000;
      }
      *arg1 = v;
      new_var2 = v;
      if ((new_var2 & 0xFFFF) != 0)
      {
        goto done;
      }
      v = 1;
    }
    *arg1 = v;
    done:
    ;

    ;
    ;
  }
  func_80008FE0(mtx, arg0);
}

