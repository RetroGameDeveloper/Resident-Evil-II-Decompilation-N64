extern u8 func_80162580_ovl_17[];
void func_80161E3C_ovl_34(void *arg0) {
    volatile u32 *table = (volatile u32 *)(func_80162580_ovl_17 + 0x10);
    u16 flag = *(u16 *)((u8 *)arg0 + 0x1AA);
    void (*fn)(void) = (void (*)(void))table[flag & 0x3F];
    fn();
}
