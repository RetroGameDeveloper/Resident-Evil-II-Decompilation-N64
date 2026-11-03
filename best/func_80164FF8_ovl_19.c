extern volatile u32 D_801654C8_ovl_19[];
void func_80164FF8_ovl_19(void *arg0) {
    volatile u32 *base = D_801654C8_ovl_19;
    u32 i = *((u8 *)arg0 + 5);
    ((void (*)(void))base[i])();
}
