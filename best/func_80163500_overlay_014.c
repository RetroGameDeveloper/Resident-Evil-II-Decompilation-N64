typedef struct Sub
{
  u8 pad[0x28];
  s32 unk28;
  u8 pad2[4];
  s32 unk30;
} Sub;
typedef struct B6
{
  u8 p[2];
  u8 unk6;
  u8 unk7;
} B6;
typedef union U4
{
  s32 unk4;
  B6 b;
} U4;
typedef struct S
{
  u8 pad0[4];
  U4 u;
  u8 pad8[0x20];
  s32 unk28;
  u8 pad2c[4];
  s32 unk30;
  u8 pad34[0x32];
  u16 unk66;
  u8 pad68[0x178];
  s16 unk1E0;
  u8 pad1E2[2];
  s16 unk1E4;
  u8 pad1E6[2];
  s32 unk1E8;
  u8 pad1EC[0xD8];
  Sub *unk2C4;
  u16 unk2C8;
  u8 pad2CA[4];
  s8 unk2CE;
} S;
extern void *func_801626E8_ovl_14(S *);
extern s32 func_80032EA4_ovl_01(S *, s32, s32, s32);
extern s32 func_80040BE4_ovl_01(s32);
extern s32 func_8008A974_ovl_01(S *, s32, s32, s32);
extern void func_80032B8C_ovl_01(S *, s32);
void func_80163500_overlay_014(S *a, s32 b, s32 c)
{
  s16 s1;
  s32 dy;
  s32 one = 1;
  switch (a->u.b.unk6)
  {
    case 0:
      if (a->unk2C4 != 0)
    {
      a->unk1E8 = 0x2000F00;
      a->unk2CE = 3;
      a->unk2C8 &= 0xFFFD;
      a->u.b.unk6 = 2;
      goto state2;
    }
      a->unk1E8 = 0x4000F00;
      a->unk2CE = 3;
      a->unk2C8 &= 0xFFFD;
      a->u.b.unk6 = one;

    case 1:
      a->unk2C4 = (Sub *) func_801626E8_ovl_14(a);
      a->u.b.unk7 = a->u.b.unk7 + 1;
      func_8008A974_ovl_01(a, b, c, 0x100);
      if (a->unk2C4 != 0)
    {
      a->unk1E8 = 0x2000F00;
      a->u.b.unk6 = 2;
    }
    else
    {
      if (a->u.b.unk7 < 0x79)
      {
        break;
      }
      a->u.unk4 = 0x1040000;
      a->unk1E8 = 0x2000F00;
      break;
    }

    case 2:
      state2:
    if (func_80032EA4_ovl_01(a, a->unk2C4->unk28, a->unk2C4->unk30, 0x200) == 0)
    {
      one = a->unk28;
      one = a->unk2C4->unk28 - one;
      dy = a->unk2C4->unk30 - a->unk30;
      if (func_80040BE4_ovl_01((one * one) + (dy * dy)) < 0xFA0)
      {
        s1 = func_80032EA4_ovl_01(a, a->unk2C4->unk28, a->unk2C4->unk30, 0x40);
      }
      else
      {
        s1 = func_80032EA4_ovl_01(a, a->unk2C4->unk28, a->unk2C4->unk30, 0x10);
        a->u.b.unk7 = a->u.b.unk7 + 1;
      }
      a->unk1E0 = -40;
      a->unk1E4 = 0;
      a->unk66 = a->unk66 + s1;
      func_80032B8C_ovl_01(a, 0);
    }
    else
    {
      a->u.unk4 = 0x1130000;
    }

      after:
    func_8008A974_ovl_01(a, b, c, 0x100);

      if (s1 == 0)
    {
      a->u.unk4 = 0x1020000;
    }
      if (a->u.b.unk7 >= 0x21)
    {
      a->u.unk4 = 0x1050000;
    }
      break;

  }

}

