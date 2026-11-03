extern u8 func_80166D68_ovl_14[];
extern void func_80166458_ovl_12(void *);
void func_80164870_ovl_12(void *arg0) {
    volatile u32 *table = (volatile u32 *)(func_80166D68_ovl_14 + 8);
    u8 idx = *(u8 *)((u8 *)arg0 + 6);
    void (*fn)(void) = (void (*)(void))table[idx];
    fn();
    func_80166458_ovl_12(arg0);
}
