extern u8 D_80013860[];
extern u8 D_80013874[];
u64 func_80006100(u64 value, u64 divisor);
u64 func_80010EC0(u64 value, u64 divisor);
void *func_80010584(u64 *out, u64 value, u64 divisor);
void func_8000DE9C(u8 *dst, u8 *src, s32 len);
typedef struct 
{
  s64 unk0;
  u8 *unk8;
  s32 unkC;
  s32 unk10;
  s32 unk14;
  u8 unk18[0xC];
  s32 unk24;
  s32 unk28;
  s32 unk2C;
  s32 unk30;
} S_func_80010C70;
void func_80010C70(S_func_80010C70 *arg0, s32 arg1)
{
  u8 *p;
  u8 *q;
  u8 *tbl;
  s32 base;
  s32 n;
  s64 val;
  u8 buf[0x18];
  u64 res[2];
  s32 len;
  s32 t;
  tbl = D_80013860;
  if ((arg1 & 0xFF) == 0x58)
  {
    tbl = D_80013874;
  }
  if ((arg1 & 0xFF) != 0x6F)
  {
    if (((arg1 & 0xFF) != 0x78) && ((arg1 & 0xFF) != 0x58))
    {
      base = 0xA;
    }
    else
    {
      base = 0x10;
    }
  }
  else
  {
    base = 8;
  }
  val = arg0->unk0;
  n = 0x18;
  if ((((arg1 & 0xFF) == 0x64) || ((arg1 & 0xFF) == 0x69)) && (arg0->unk0 < 0))
  {
    val = -val;
  }
  if ((val != 0) || (arg0->unk24 != 0))
  {
    n--;
    q = buf + n;
    *q = tbl[(s32) func_80010EC0(val, base)];
  }
  arg0->unk0 = func_80006100(val, base);
  p = buf + n;
  while ((arg0->unk0 > 0) && (n > 0))
  {
    func_80010584(res, arg0->unk0, base);
    arg0->unk0 = res[0];
    p--;
    n--;
    *p = tbl[(s32) res[1]];
  }

  len = 0x18 - n;
  arg0->unk14 = len;
  func_8000DE9C(arg0->unk8, buf + n, len);
  if (arg0->unk14 < arg0->unk24)
  {
    arg0->unk10 = arg0->unk24 - arg0->unk14;
  }
  if ((arg0->unk24 < 0) && ((arg0->unk30 & 0x14) == 0x10))
  {
    t = ((arg0->unk28 - arg0->unkC) - (n = arg0->unk10)) - arg0->unk14;
    if (t > 0)
    {
      arg0->unk10 = arg0->unk10 + t;
    }
  }
}

