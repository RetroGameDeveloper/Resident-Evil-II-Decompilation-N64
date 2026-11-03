typedef struct S_2c4
{
  u8 unk_00[0x66];
  s16 unk_66;
} S_2c4;
typedef struct S_f16b
{
  u8 unk_00[6];
  u8 unk_06;
  u8 unk_07;
  u8 unk_08[0x20];
  s32 unk_28;
  u8 unk_2C[4];
  s32 unk_30;
  u8 unk_34[0x1AC];
  s16 unk_1E0;
  s16 unk_1E2;
  s16 unk_1E4;
  u8 unk_1E6[2];
  s32 unk_1E8;
  u8 unk_1EC[6];
  s16 unk_1F2;
  u16 unk_1F4;
  u8 unk_1F6[0x79];
  u8 unk_26F;
  u8 unk_270[0x54];
  S_2c4 *unk_2C4;
  u16 unk_2C8;
  u8 unk_2CA;
  u8 unk_2CB;
  u8 unk_2CC[2];
  s8 unk_2CE;
} S_f16b;
void func_80077D48_ovl_01(s32 arg0, void *arg1);
void func_80162B24_ovl_16(void *arg0, void *arg1, s32 arg2);
void func_80083800_ovl_01(s16 arg0, void *arg1, void *arg2);
void func_80032F24_ovl_01(void *arg0, s16 arg1, s32 arg2);
s32 func_8008A974_ovl_01(void *arg0, void *arg1, s32 arg2, s32 arg3);
void func_80165A04_ovl_16(void *arg0);
void func_80167368_ovl_16(void);
void func_801662E8_ovl_16(S_f16b *self, void *arg1, s32 arg2)
{
  S_f16b *new_var;
  void *p;
  s32 one = 1;
  s32 state = self->unk_07;
  if (state == one)
  {
    goto L1;
  }
  if (state < 2)
  {
    if (state == 0)
    {
      goto L0;
    }
  }
  else
  {
    if (state == 2)
    {
      goto L2;
    }
    if (state == 3)
    {
      goto L3;
    }
  }
  goto Lend;
  L0:
  self->unk_26F |= 0x80;

  func_80077D48_ovl_01(7, self);
  func_80162B24_ovl_16(self, ((u8 *) func_80167368_ovl_16) + (self->unk_2CB * 8), 1);
  p = &self->unk_1E0;
  self->unk_1E0 = 0x64;
  self->unk_1E4 = 0;
  self->unk_1E2 = 0;
  func_80083800_ovl_01(self->unk_2C4->unk_66, p, p);
  func_80032F24_ovl_01(self, self->unk_2C4->unk_66, 0x80);
  self->unk_1F4 = 0;
  self->unk_1E8 = 0x0A000300;
  self->unk_07 = one;
  self->unk_2C8 |= 2;
  L1:
  self->unk_07 = self->unk_07 + func_8008A974_ovl_01(self, arg1, arg2, 0x400);

  self->unk_1F4 = self->unk_1F4 + 1;
  if (((s16) self->unk_1F4) == 4)
  {
    if (one)
    {
      p = &self->unk_1E0;
      self->unk_1E0 = 0x32;
      self->unk_1E4 = 0;
      self->unk_1E2 = 0;
      func_80083800_ovl_01(self->unk_2C4->unk_66, p, p);
    }
    else
    {
      p = &self->unk_1E0;
      self->unk_1E0 = 0x32;
      self->unk_1E4 = 0;
      self->unk_1E2 = 0;
      func_80083800_ovl_01(self->unk_2C4->unk_66, p, p);
    }
  }
  self->unk_28 += self->unk_1E0;
  new_var = self;
  self->unk_30 += self->unk_1E4;
  goto Lend;
  L2:
  if (self->unk_1F2 < 0)
  {
    self->unk_07 = 0;
    self->unk_06 = self->unk_06 + 1;
    goto Lend;
  }

  new_var->unk_1E8 = 0x05000F00;
  self->unk_07 = 3;
  self->unk_2C8 |= 2;
  L3:
  if (func_8008A974_ovl_01(self, arg1, arg2, 0x10100) != 0)
  {
    self->unk_2CE = 3;
    self->unk_26F &= 0x7F;
    func_80165A04_ovl_16(self);
  }

  Lend:
  ;

  ;
  ;
}

