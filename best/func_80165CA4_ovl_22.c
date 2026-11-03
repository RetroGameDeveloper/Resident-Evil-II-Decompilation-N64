extern volatile u32 D_80166870_ovl_22[];
void func_80165CA4_ovl_22(void *arg0) {
    volatile u32 *base = D_80166870_ovl_22;
    u32 i = *((u8 *)arg0 + 5);
    ((void (*)(void))base[i])();
}
