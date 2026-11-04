void func_8016303C_ovl_14(void *arg0) {
    u8 *base;
    u32 i;
    i = 0;
    base = *(u8 **)((u8 *)arg0 + 0x234);
    do {
        *(u32 *)base |= 0x8000;
        i++;
        base += 0x178;
    } while (i < 0x16);
}
