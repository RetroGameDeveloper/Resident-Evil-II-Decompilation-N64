typedef struct S_8000EB40_obj
{
  u16 flags;
  u8 pad2[6];
  u8 *unk8;
  u8 padC[0xC];
  f32 unk18;
  u8 pad1C[4];
  s32 unk20;
} S_8000EB40_obj;
extern S_8000EB40_obj *D_800129D4;
extern f64 D_80011CF0;
s32 func_800072E0(void);
void func_80007300(s32);
void func_8000EB40(f32 arg0)
{
  int new_var3;
  s32 tmp;
  S_8000EB40_obj *o;
  S_8000EB40_obj *new_var;
  f32 f;
  S_8000EB40_obj *new_var2;
  tmp = func_800072E0();
  o = D_800129D4;
  new_var2 = o;
  o->unk18 = arg0;
  new_var2->flags |= 2;
  new_var3 = (*((u32 *) (o->unk8 + 0x20))) & 0xFFF;
  f = (new_var = o)->unk18 * ((f32) ((f64) ((u32) new_var3)));
  new_var->unk20 = ((u32) f) & 0xFFF;
  func_80007300(tmp);
}

