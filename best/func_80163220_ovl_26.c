extern u8 func_801671EC_ovl_30[];
extern void func_801625F8_ovl_26(void *);
void func_80163220_ovl_26(void *arg0) {
    volatile u32 *table = (volatile u32 *)(func_801671EC_ovl_30 + 0x34);
    u8 idx = *(u8 *)((u8 *)arg0 + 6);
    void (*fn)(void) = (void (*)(void))table[idx];
    fn();
    func_801625F8_ovl_26(arg0);
}
