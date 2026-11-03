extern volatile u32 func_80165478_ovl_35[];
void func_801649A8_ovl_19(void *arg0) { volatile u32 *table = func_80165478_ovl_35 + 2; s32 i = *((u8 *)arg0 + 5); i -= 1; ((void (*)(void))table[i])(); }
