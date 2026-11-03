extern volatile u32 D_80166FAC_ovl_32[];
void func_801652CC_ovl_32(void *arg0) { void (*fn)(void) = (void (*)(void))D_80166FAC_ovl_32[((u8 *)arg0)[5]]; fn(); }
