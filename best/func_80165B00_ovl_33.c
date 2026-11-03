extern volatile u32 D_80167234_ovl_33[];
void func_80165B00_ovl_33(void *arg0) { void (*fn)(void) = (void (*)(void))D_80167234_ovl_33[((u8 *)arg0)[5]]; fn(); }
