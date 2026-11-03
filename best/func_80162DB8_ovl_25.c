extern volatile u32 D_801630A0_ovl_25[];
void func_80162DB8_ovl_25(void *arg0) {
    volatile u32 *base = D_801630A0_ovl_25;
    u32 idx = *((u8 *)arg0 + 5);
    ((void (*)(void))base[idx])();
}
