typedef struct S2C4
{
  u8 pad[0x66];
  s16 unk66;
} S2C4;
typedef struct S
{
  u8 unk0[6];
  u8 unk6;
  u8 unk7;
  u8 pad8[0x20];
  s32 unk28;
  u8 pad2c[4];
  s32 unk30;
  u8 pad34[0x1AC];
  s16 unk1E0;
  s16 unk1E2;
  s16 unk1E4;
  u8 pad1E6[2];
  s32 unk1E8;
  u8 pad1EC[6];
  s16 unk1F2;
  u16 unk1F4;
  u8 pad1F6[0x79];
  u8 unk26F;
  u8 pad270[0x54];
  S2C4 *unk2C4;
  u16 unk2C8;
  u8 unk2CA;
  u8 unk2CB;
  u8 pad2CC[2];
  s8 unk2CE;
} S;
extern s32 D_80168B74_ovl_14;
extern s32 func_80032F24_ovl_01(S *, s16, s32);
extern s32 func_80077D48_ovl_01(s32, S *);
extern s32 func_80083800_ovl_01(s16, void *, void *);
extern s32 func_8008A974_ovl_01(S *, s32, s32, s32);
extern s32 func_80162B24_ovl_14(S *, void *, s32);
extern s32 func_80166BFC_ovl_14(S *);
void func_801674D8_ovl_14(S *a, s32 b, s32 c)
{
  s16 *new_var;
  s32 one = 1;
  u8 ns;
  s16 n;
  switch (a->unk7)
  {
    case 0:
      a->unk26F |= 0x80;
      func_80077D48_ovl_01(7, a);
      func_80162B24_ovl_14(a, ((u8 *) (&D_80168B74_ovl_14)) + (a->unk2CB * 8), 1);
      a->unk1E0 = 100;
      a->unk1E4 = 0;
      a->unk1E2 = 0;
      func_80083800_ovl_01(a->unk2C4->unk66, &a->unk1E0, &a->unk1E0);
      func_80032F24_ovl_01(a, a->unk2C4->unk66, 0x80);
      a->unk1F4 = 0;
      a->unk1E8 = 0xA000300;
      a->unk7 = one;
      a->unk2C8 |= 2;

    case 1:
      ns = a->unk7 + func_8008A974_ovl_01(a, b, c, 0x400);
      n = a->unk1F4 + 1;
      a->unk1F4 = n;
      new_var = &a->unk1E0;
      a->unk7 = ns;
      if (n == 4)
    {
      a->unk1E0 = 50;
      a->unk1E4 = 0;
      a->unk1E2 = 0;
      func_80083800_ovl_01(a->unk2C4->unk66, &a->unk1E0, new_var);
    }
      a->unk28 += a->unk1E0;
      a->unk30 += a->unk1E4;
      break;

    case 2:
      do
    {
      if (a->unk1F2 < 0)
      {
        a->unk7 = 0;
        a->unk6++;
        break;
      }
      a->unk1E8 = 0x5000F00;
    }
    while (0);
      a->unk7 = 3;
      a->unk2C8 |= 2;

    case 3:
      if (func_8008A974_ovl_01(a, b, c, 0x10100))
    {
      a->unk2CE = one + 2;
      a->unk26F &= 0x7F;
      func_80166BFC_ovl_14(a);
    }
      break;

  }

}

