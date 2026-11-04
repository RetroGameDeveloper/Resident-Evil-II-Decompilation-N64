s32 func_800072E0(void);
void func_80007300(s32);
void func_80024D60_ovl_01(void);
void func_80026AE0_ovl_01(void);
void func_8006B40C_ovl_01(s32, s32, s32);
void func_8006B6E4_ovl_01(void);
extern u8 D_80112720_ovl_01;
extern u8 D_80112908_ovl_01;
void func_800270E0_ovl_01(void);
f32 func_80083E90_ovl_01(f32 a, f32 b, f32 c, f32 d);
extern u8 D_800C7650_ovl_01[];
extern u8 D_800E9127_ovl_01;
extern s32 D_8011C350_ovl_01[];
s32 func_80026948_ovl_01(u16, void *);
s32 func_80026AC0_ovl_01(void);
void func_80084450_ovl_01(void)
{
  unsigned long new_var;
  u8 *base = D_800C7650_ovl_01;
  s32 *new_var2;
  if (D_800E9127_ovl_01 != 2)
  {
    u8 *p = base + 0x18000;
    s32 v = *((s32 *) (p + 0x1a3c));
    new_var2 = D_8011C350_ovl_01;
    new_var = 2;
    if (v & 0x20000000)
    {
      *((s32 *) (p + 0x1a3c)) = v & 0xdfffffff;
    }
    else
    {
      s32 a = *((s16 *) (p + 0x215f8));
      s32 b = *((s16 *) (p + 0x215fa));
      s32 c = *((s16 *) (p + 0x215fc));
      u16 n = *((u16 *) ((new_var2[a] + (b * 4)) + (c * new_var)));
      func_80026948_ovl_01(n, base);
      if (1)
      {
        func_80026AC0_ovl_01();
      }
    }
  }
}

s32 func_800845AC_ovl_01(void *);
extern u8 D_800C7650_ovl_01[];
void func_80084540_ovl_01(void);
