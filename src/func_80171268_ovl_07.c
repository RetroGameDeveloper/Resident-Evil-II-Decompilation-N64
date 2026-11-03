void func_80171268_ovl_07(u16 **arg0, u8 **arg1) {
    u16 *t0;
    u32 t1;
    u8 *a3;
    u8 *a2;
    u8 v0;
    u8 v1;
    u8 a0v;

    t1 = 0;
    a3 = *arg1;
    t0 = *arg0;
    a2 = a3 + 1;
    do {
        v0 = a2[1];
        v1 = a2[0];
        a2 += 3;
        a0v = *a3;
        a3 += 3;
        t1 += 1;
        *t0 = ((v0 >> 3) << 1) + ((v1 >> 3) << 6) + ((a0v >> 3) << 11) | 1;
        t0 += 1;
    } while (t1 < 0x140);
    *arg0 = t0;
    *arg1 = a3;
}
