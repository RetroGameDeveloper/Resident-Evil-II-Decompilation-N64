void func_80162888_ovl_36(void *);
extern volatile u32 D_80162FE8_ovl_36[];
void func_801625CC_ovl_36(void *arg0)
{
  void *p = arg0;
  u32 i = *((u8 *)p + 6);
  ((void (*)(void *))D_80162FE8_ovl_36[i])(p);
  func_80162888_ovl_36(p);
}
