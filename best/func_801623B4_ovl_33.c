extern u8 func_8016708C_ovl_30[];
void func_801623B4_ovl_33(void *arg0) {
    volatile u32 *table = (volatile u32 *)(func_8016708C_ovl_30 + 0x24);
    u16 flag = *(u16 *)((u8 *)arg0 + 0x1AA);
    void (*fn)(void) = (void (*)(void))table[flag & 0x3F];
    fn();
}
