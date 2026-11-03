extern u8 D_80167D8C_ovl_30[];
void func_80162114_ovl_30(void *arg0) {
    volatile u32 *base = (volatile u32 *)D_80167D8C_ovl_30;
    u8 index = ((u8 *)arg0)[6];
    u32 address = base[index];
    ((void (*)(void))address)();
}
