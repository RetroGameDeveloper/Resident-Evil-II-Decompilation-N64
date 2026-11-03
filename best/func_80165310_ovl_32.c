extern volatile u32 D_80166FB0_ovl_32[];
void func_80165310_ovl_32(void *arg0) { void (*fn)(void) = (void (*)(void))D_80166FB0_ovl_32[((u8 *)arg0)[5]]; fn(); }
