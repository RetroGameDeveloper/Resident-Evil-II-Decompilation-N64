extern volatile u32 D_80167F44_ovl_17[];
void func_80165B58_ovl_17(void *arg0) {
    volatile u32 *base = D_80167F44_ovl_17;
    u32 i = *((u8 *)arg0 + 6);
    ((void (*)(void))base[i])();
}
