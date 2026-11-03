extern u8 func_80166F04_ovl_26[];
void func_80162330_ovl_32(void *arg0) {
    volatile u32 *table = (volatile u32 *)(func_80166F04_ovl_26 + 8);
    u16 flag = *(u16 *)((u8 *)arg0 + 0x1AA);
    void (*fn)(void) = (void (*)(void))table[flag & 0x3F];
    fn();
}
