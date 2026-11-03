extern u8 D_80169848_ovl_29[];
void func_801688DC_ovl_29(void *arg0) {
    volatile u32 *base = (volatile u32 *)D_80169848_ovl_29;
    u8 index = ((u8 *)arg0)[5];
    u32 address = base[index];
    ((void (*)(void))address)();
}
