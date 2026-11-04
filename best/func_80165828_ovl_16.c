#define HANDLE (*(s32 *)((u8 *)&func_801674BC_ovl_17+4))
extern void func_801658F4_ovl_16(void *, s32 *, s32);
extern u32 D_800E10D0_ovl_01;
extern s32 func_801674BC_ovl_17;
typedef void (*Fn)(void *, s32, s32);
extern volatile Fn D_80167478_ovl_16[];
static inline static u8 *inline_fn(u8 *arg0)
{
  return arg0 + 0x2c8;
}

void func_80165828_ovl_16(void *arg0, s32 arg1, s32 arg2)
{
  u8 *p = arg0;
  s32 x;
  u32 new_var;
  u8 v;
  if (p[5] != 255)
  {
    p[0x2cb] = v;
    new_var = (u32) (&D_800E10D0_ovl_01);
    x = p[0xc];
    if (HANDLE == x)
    {
      HANDLE = 0;
    }
    v = p[5];
    p[0x2c4] = new_var;
    p[5] = 255;
    p[0x2b5] = 2;
    func_801658F4_ovl_16(arg0, &HANDLE, 255);
    if (p[0x26e])
    {
      *((u32 *) p) &= ~0xe;
      *((u16 *) inline_fn(p)) &= 0xfd0f;
    }
  }
  D_80167478_ovl_16[p[0x26e]](arg0, x, arg2);
}

