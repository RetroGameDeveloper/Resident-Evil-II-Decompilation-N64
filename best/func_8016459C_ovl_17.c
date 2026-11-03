extern volatile u32 D_80167DEC_ovl_17[];
void func_8016459C_ovl_17(void *arg0) {
    volatile u32 *base = D_80167DEC_ovl_17;
    u32 i = *((u8 *)arg0 + 5);
    ((void (*)(void))base[i])();
}
