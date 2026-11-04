typedef void (*Fn)(void *);
extern volatile u32 D_80167268_ovl_26[];
void func_80164BE4_ovl_26(void *p)
{
  volatile u32 *new_var2;
  u8 i = ((u8 *) p)[6];
  u8 new_var;
  void *new_var3;
  volatile u32 *base = D_80167268_ovl_26;
  new_var = i;
  base = base;
  new_var2 = base;
  new_var3 = p;
  ((Fn) (*(base = &new_var2[new_var])))(new_var3);
}

