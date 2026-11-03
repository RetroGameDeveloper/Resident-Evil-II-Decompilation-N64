extern u32 D_80016224;
extern u32 D_800128D0;
extern void func_80007B6C(void);

void func_80007A9C(void) {
    s32 *q = (s32 *)(D_80016224 + 0x14);
    u32 st;
    st = *(volatile u32 *)0xA4600010;
    while (st & 3) {
        st = *(volatile u32 *)0xA4600010;
    }
    *(volatile u32 *)0xA5000510 = q[4] | 0x10000000;
    st = *(volatile u32 *)0xA4600010;
    while (st & 3) {
        st = *(volatile u32 *)0xA4600010;
    }
    *(volatile u32 *)0xA5000510 = q[4];
    func_80007B6C();
    *(volatile u32 *)0xA4600010 = 2;
    D_800128D0 |= 0x100401;
}
