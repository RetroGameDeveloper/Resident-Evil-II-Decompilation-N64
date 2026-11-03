extern volatile u32 D_80162CB8_ovl_18[];
void func_80161EF4_ovl_18(void *arg0) {
    volatile u32 *base = D_80162CB8_ovl_18;
    u32 i = *((u8 *)arg0 + 5);
    ((void (*)(void))base[i])();
}
