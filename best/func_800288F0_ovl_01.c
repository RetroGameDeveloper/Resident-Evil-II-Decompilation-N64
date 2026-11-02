typedef struct S_obj0_288F0
{
  void (*unk_00)(void *);
  u8 pad_04[0x10];
  s32 unk_14;
  s32 unk_18;
} S_obj0_288F0;
typedef struct S_obj8_288F0
{
  void (*unk_00)(void *);
  u32 unk_04;
  u32 unk_08;
} S_obj8_288F0;
typedef struct S_obj164_288F0
{
  void (*unk_00)(void *);
  void (*unk_04)(void *);
  u32 unk_08;
} S_obj164_288F0;
typedef struct S_obj168_288F0
{
  u8 pad_00[4];
  void (*unk_04)(void *, s32, u32 *, s32);
  u32 unk_08;
} S_obj168_288F0;
typedef struct S_arg0_288F0
{
  S_obj0_288F0 *unk_00;
  u8 pad_04[4];
  S_obj8_288F0 *unk_08;
  u8 pad_0C[4];
  s32 unk_10;
  u8 pad_14[0x2C];
  s32 unk_40;
  u8 pad_44[0x34];
  s32 unk_78;
  u8 pad_7C[0xE8];
  S_obj164_288F0 *unk_164;
  S_obj168_288F0 *unk_168;
} S_arg0_288F0;
void func_8002DDE4_ovl_01(S_arg0_288F0 *arg0);
void func_800288F0_ovl_01(S_arg0_288F0 *arg0)
{
  u32 sp10;
  u32 old;
  s32 var_v1;
  u32 count;
  s32 state;
  s32 zero;
  if (arg0->unk_10 != 0xCA)
  {
    if (arg0->unk_00 || zero)
    {
      arg0->unk_00->unk_14 = 0xE;
      arg0->unk_00->unk_18 = arg0->unk_10;
      arg0->unk_00->unk_00(arg0);
    }
    else
    {
      arg0->unk_00->unk_14 = 0xE;
      arg0->unk_00->unk_18 = arg0->unk_10;
      arg0->unk_00->unk_00(arg0);
    }
  }
  func_8002DDE4_ovl_01(arg0);
  state = 0x11;
  loop:
  arg0->unk_164->unk_00(arg0);

  count = arg0->unk_164->unk_08;
  if (count == 0)
  {
    sp10 = 0;
    if (count < arg0->unk_168->unk_08)
    {
      do
      {
        if (arg0->unk_08 != NULL)
        {
          arg0->unk_08->unk_04 = sp10;
          arg0->unk_08->unk_08 = arg0->unk_168->unk_08;
          arg0->unk_08->unk_00(arg0);
        }
        old = sp10;
        zero = 0;
        arg0->unk_168->unk_04(arg0, zero, &sp10, zero);
        if (sp10 == old)
        {
          arg0->unk_00->unk_14 = state;
          arg0->unk_00->unk_00(arg0);
        }
      }
      while (arg0->unk_168->unk_08 > sp10);
    }
    arg0->unk_164->unk_04(arg0);
    goto loop;
  }
  arg0->unk_78 = 0;
  var_v1 = 0xCB;
  if (arg0->unk_40 != 0)
  {
    var_v1 = 0xCC;
  }
  arg0->unk_10 = var_v1;
}

