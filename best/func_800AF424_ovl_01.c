typedef struct S_e
{
  u8 pad00[0x10];
  union 
  {
    s32 unk10;
    struct 
    {
      u8 unk10b[3];
      u8 unk13;
    } b;
  } u10;
  u8 pad14[0x1B];
  u8 unk2F;
  u8 pad30[1];
  u8 unk31;
  u8 pad32[7];
  u8 unk39;
  u8 pad3A[0x10];
  u8 unk4A;
  u8 unk4B;
  u8 unk4C;
  u8 pad4D[1];
  u16 unk4E;
  u8 pad50[0x10];
  s32 unk60;
  u8 pad64[0x56];
  u16 unkBA;
  u8 padBC[1];
  u8 unkBD;
  u8 unkBE;
} S_e;
typedef struct S_a1
{
  u32 unk0;
  u8 unk4;
  u8 unk5;
  u16 unk6;
} S_a1;
typedef struct S_ent
{
  u8 pad00[0x10];
  s32 unk10;
  s32 unk14;
} S_ent;
extern u8 D_801443E8[];
extern s32 func_800B17FC_ovl_01(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_800AF424_ovl_01(S_e *arg0, S_a1 *arg1)
{
  u32 v;
  s32 t;
  s32 combined;
  s32 clamped;
  s32 res;
  s32 prev;
  S_ent *ent;
  u8 *base;
  v = arg1->unk0;
  t = arg0->unk4E + ((s32) (((s32) (v << 16)) >> 24));
  combined = (((v >> 16) << 16) | (arg1->unk5 << 8)) | arg1->unk4;
  if (t >= 0)
  {
    clamped = 0x7F;
    if (t < 0x80)
    {
      clamped = t;
    }
  }
  else
  {
    clamped = 0;
  }
  t = clamped;
  if (arg0->unk4C != 0)
  {
    t |= 0x80;
  }
  arg0->unkBD = 1;
  res = func_800B17FC_ovl_01(combined, arg0->unkBA, t & 0xFF, arg0->unk31, arg0->unk39, arg0->unk4A, arg0->unk4B, arg1->unk6, arg0->unk2F, 0, arg0->unkBE);
  arg0->unkBD = 0;
  if (res != (-1))
  {
    base = D_801443E8;
    ent = (S_ent *) (base + ((res & 0xFF) * 0x1A0));
    t = arg0->unk60;
    ent->unk14 = t;
    prev = arg0->u10.unk10;
    if (prev == (-1))
    {
      arg0->u10.unk10 = res;
    }
    else
    {
      ent->unk10 = prev;
      ((S_ent *) (base + (arg0->u10.b.unk13 * 0x1A0)))->unk14 = res;
      arg0->u10.unk10 = res;
    }
  }
  return 0;
}

