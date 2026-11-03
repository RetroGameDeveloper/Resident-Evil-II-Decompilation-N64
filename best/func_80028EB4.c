void func_80028DF0_ovl_01(void *);

void func_80028EB4(void *arg0, s32 arg1) {
    s32 *buf = *(s32 **)((u8 *)arg0 + 0x14);
    s32 n = arg1;

    if (n > 0) {
        goto test;
    loop:
        n -= buf[1];
        func_80028DF0_ovl_01(arg0);
    test:
        if (buf[1] < n) {
            goto loop;
        }
        buf[0] += n;
        buf[1] -= n;
    }
}
