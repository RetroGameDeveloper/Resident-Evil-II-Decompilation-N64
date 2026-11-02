typedef struct 
{
  u8 pad0[4];
  s32 state;
  u8 pad8[0x2B0 - 8];
  s32 timer;
  u8 unk[0x20];
} Obj;
extern s32 D_80165FF0_ovl_15[];
extern s32 D_80166010_ovl_15[];
extern s32 D_800C7650_ovl_01[];
void func_801621F0_ovl_15(Obj *arg0, s32 arg1, s32 arg2);
void func_8016266C_ovl_15(Obj *arg0)
{
  int new_var2;
  int new_var;
  if (new_var)
  {
    new_var = 0;
  }
  else
  {
  }
  new_var2 = !(*(((u8 *) arg0) + 6));
  if (new_var2)
  {
    func_80036764_ovl_01(arg0, new_var, 0x20, new_var);
  }
  new_var = 0;
}

void func_80162698_ovl_15(Obj *arg0);
void func_8016271C_ovl_15(Obj *arg0);
