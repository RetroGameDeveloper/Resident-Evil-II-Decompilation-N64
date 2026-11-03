typedef struct 
{
  u8 x[0x2D0];
} Obj;
extern void func_801648EC_ovl_23();
typedef void (*Fn)(Obj *, s32, s32);
extern volatile Fn D_801665AC_ovl_23[];
inline u8 *inline_fn(Obj *arg0)
{
  return arg0->x;
}

void func_80164B78_ovl_23(Obj *a, s32 b, s32 c)
{
  s32 ff = 0xFF;
  s32 v;
  volatile Fn *tbl;
  v = inline_fn(a)[5];
  if (v != ff)
  {
    a->x[0x2BB] = v;
    a->x[5] = ff;
    func_801648EC_ovl_23();
  }
  tbl = D_801665AC_ovl_23;
  ff = inline_fn(a)[0x26E];
  tbl[ff](a, b, c);
}

