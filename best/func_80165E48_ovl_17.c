void func_80166138_ovl_17(void);
extern volatile u32 D_80167F50_ovl_17[];
void func_80165E48_ovl_17(void *arg0)
{
  u8 *p = (u8 *)arg0;
  if (p[0x2C0]) goto special;
  {
    u32 i = p[0x2BE];
    ((void (*)(void))D_80167F50_ovl_17[i])();
  }
  goto done;
special:
  func_80166138_ovl_17();
done:
  return;
}
