extern volatile u32 D_80167250_ovl_26[];
void func_80164168_ovl_26(void *arg0)
{
  u8 *p = (u8 *)arg0;
  ((void (*)(void))D_80167250_ovl_26[p[6]])();
  p[0x2D6] = 1;
  p[0x2D7] = 1;
}
