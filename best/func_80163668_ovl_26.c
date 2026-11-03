extern volatile u32 D_8016722C_ovl_26[];
void func_80163668_ovl_26(void *arg0) {
    volatile u32 *base = D_8016722C_ovl_26;
    u32 idx = *((u8 *)arg0 + 6);
    ((void (*)(void))base[idx])();
}
