typedef struct S_80166D80_arg0
{
  u8 pad[0x2B4];
  u8 unk_2B4;
  u8 pad2[0x2BE - 0x2B5];
  u8 unk_2BE;
} S_80166D80_arg0;
typedef struct S_80166D80_g
{
  u8 pad[0x2BF];
  u8 unk_2BF;
} S_80166D80_g;
extern u8 D_800C7650_ovl_01[];
extern s32 func_80052C9C_ovl_01(s32, s32, s32, void *);
extern s32 func_80052D40_ovl_01(s32, s32, s32, s32);
void func_80166D80_ovl_33(S_80166D80_arg0 *arg0)
{
  S_80166D80_g *new_var;
  u32 off;
  union 
  {
    u64 q;
    struct 
    {
      u32 lo;
      u32 hi;
    } w;
  } b;
  S_80166D80_g *new_var2;
  u8 *base;
  S_80166D80_g *p;
  short new_var3;
  u8 t;
  off = 0x18000;
  b.w.lo = (u32) D_800C7650_ovl_01;
  base = (u8 *) (off + b.w.lo);
  new_var2 = *((S_80166D80_g **) (base + 0x1D40));
  new_var = new_var2;
  p = new_var;
  p->unk_2BF &= ~(2 << arg0->unk_2B4);
  t = arg0->unk_2BE;
  if (t != 0)
  {
    arg0->unk_2BE = (u8) (t - 1);
    p = *((S_80166D80_g **) (base + 0x1D40));
    new_var3 = 2 << arg0->unk_2B4;
    p->unk_2BF |= new_var3;
    func_80052C9C_ovl_01(3, 0x82, 0, p);
    func_80052D40_ovl_01(0x19, 0x82, 0, 3);
  }
}

