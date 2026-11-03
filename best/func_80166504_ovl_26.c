extern volatile u32 D_80167328_ovl_26[];
void func_80166504_ovl_26(void *arg0) {
  volatile u32 *p = D_80167328_ovl_26;
  s32 idx = ((u8 *)arg0)[0x2C6];
  void (*fn)(void *, u8 *) = (void (*)(void *, u8 *))p[idx];
  fn(arg0, (u8 *)arg0 + 0x2B4);
}
