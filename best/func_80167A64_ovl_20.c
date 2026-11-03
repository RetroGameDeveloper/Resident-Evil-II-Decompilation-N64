extern volatile u32 D_80168258_ovl_20[];
void func_80167A64_ovl_20(void *arg0) {
    volatile u32 *base = D_80168258_ovl_20;
    u32 i = *((u8 *)arg0 + 5);
    ((void (*)(void))base[i])();
}
