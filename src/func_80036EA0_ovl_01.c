void func_80040E88_ovl_01(void *arg0, void *arg1);

void func_80036EA0_ovl_01(u8 *arg0) {
    u8 *p = arg0;

    *(s16 *)(p + 0x1D8) = 0;
    *(s16 *)(p + 0x1DA) = 0;
    *(s16 *)(p + 0x1DC) = 0;
    func_80040E88_ovl_01(p + 0x1D8, p + 0x1B8);
}
