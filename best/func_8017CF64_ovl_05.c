extern u8 D_800C7650_ovl_01[];
extern volatile u8 D_800E9118_ovl_01[];
extern u8 D_8017E53F_ovl_05;
extern u8 D_8017E549_ovl_05;
extern u8 D_8017E54A_ovl_05;
extern u8 D_8017E54D_ovl_05;
extern u32 D_8017E550_ovl_05;
extern s32 func_80077B0C_ovl_01(u32, s32, s32);
void func_8017CF64_ovl_05(void)
{
  union 
  {
    u64 q;
    struct 
    {
      u32 lo;
      u32 hi;
    } w;
  } b;
  u32 off;
  u8 *base;
  s32 v;
  u32 a;
  off = 0x18000;
  b.w.lo = (u32) D_800C7650_ovl_01;
  base = (u8 *) (off + b.w.lo);
  v = *((s32 *) (base + 0x268));
  if (v & 0x3000)
  {
    D_8017E549_ovl_05 = 2;
    D_8017E54A_ovl_05 = 0;
    D_8017E550_ovl_05 = 0x2C808080;
    D_8017E54D_ovl_05 = 0;
    D_8017E53F_ovl_05 |= 8;
    D_800E9118_ovl_01[0xCB] = D_800E9118_ovl_01[0xCB];
    a = 0x04050000;
    if ((*((s32 *) (base + 0x268))) & 0x1000)
    {
      a = 0x04060000;
    }
    func_80077B0C_ovl_01(a, 0, *((s32 *) (base + 0x268)));
  }
}

