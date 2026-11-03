extern volatile u32 D_80168250_ovl_20[];
void func_8016778C_overlay_020(void *arg0) {
    volatile u32 *base = D_80168250_ovl_20;
    u32 i = *((u8 *)arg0 + 5);
    ((void (*)(void))base[i])();
}
