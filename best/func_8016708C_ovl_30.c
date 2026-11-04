void func_800662B8_ovl_01(void *arg0, void *arg1);

void func_8016708C_ovl_30(u8 *arg0, u8 *arg1) {
    u8 *a = arg1;
    u8 *p;
    u8 *q;
    u8 one = 1;

    switch (a[0x11]) {
    case 0:
        a[0x11] = one;
        a[0x12] = 0;
    case 1:
        if (++a[0x12] >= 9) {
            a[0x11] = 2;
            a[0x12] = 8;
        }
        break;
    case 2:
        if (--a[0x12] == 0) {
            a[0x10] = 0;
            a[0x11] = 0;
            a[0x12] = 0;
        }
        break;
    }

    p = *(u8 **)(arg0 + 0x234);
    p = p + 0x1028;
    q = *(u8 **)(p + 0x120);
    *(u16 *)(q + 0xC) = a[0x12] << 9;
    func_800662B8_ovl_01(arg0, p);
}
