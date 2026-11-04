extern s32 D_800C7614_ovl_01;
extern u8 D_800C7650_ovl_01[];
extern u8 D_8012BF38_ovl_01[];
extern u8 D_8012FF48_ovl_01[];
void func_8006B3A4_ovl_01(s32 arg0);
s32 func_8008C4FC_ovl_01(u32 arg0);
void func_80025E6C(void);
void func_8008CC9C_ovl_01(void);
u32 func_8008CFEC_ovl_01(void)
{
  u8 *s0 = D_8012BF38_ovl_01;
  u32 hi;
  u32 base = (u32) D_800C7650_ovl_01;
  u32 tbl = (u32) D_8012FF48_ovl_01;
  u32 idx = *((u8 *) (s0 + 8));
  u8 **new_var;
  u32 ent;
  u8 *ptr;
  s32 r;
  ent = base + (idx * 4);
  ent = ent + hi;
  ent = *((u8 *) (ent + 0x1818));
  ptr = *((u8 **) ((tbl + (ent * 8)) + 4));
  r = func_8008C4FC_ovl_01(*ptr);
  if ((*((u8 *) ((*(new_var = &s0)) + 0xA))) == 0x11)
  {
    return 0;
  }
  return ((u32) (~r)) >> 31;
  hi = 0x20000;
}

void func_8009BE50_ovl_01(void);
