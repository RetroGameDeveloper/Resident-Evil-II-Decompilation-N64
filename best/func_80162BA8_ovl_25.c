extern volatile u32 D_8016307C_ovl_25[];
void func_80162BA8_ovl_25(void *arg0) {
  volatile u32 *p = D_8016307C_ovl_25;
  s32 idx = ((u8 *)arg0)[0x26E];
  void (*fn)(void) = (void (*)(void))p[idx];
  fn();
}
