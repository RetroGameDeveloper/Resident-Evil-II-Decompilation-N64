extern volatile u32 D_80167F68_ovl_30[];
void func_80166E74_ovl_30(void *arg0, void *arg1) {
  volatile u32 *p = D_80167F68_ovl_30;
  s32 idx = ((u8 *)arg1)[0x10];
  ((void (*)(void))p[idx])();
}
