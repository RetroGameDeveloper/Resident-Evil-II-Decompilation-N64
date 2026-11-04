void func_8016714C_ovl_30(s16 arg0);
void func_8016719C_ovl_30(s16 arg0);

void func_80166FE4_ovl_30(void *arg0, u8 *arg1) {
    s16 s1;
    u8 s0;
    u8 t;

    t = arg1[0x12];
    if (t == 0) {
        s1 = (func_80033634_ovl_01() & 7) - 3;
        s0 = (func_80033634_ovl_01() & 3) & 0xFF;
        if (s0 & 1)
            func_8016714C_ovl_30(s1);
        if (s0 & 2)
            func_8016719C_ovl_30(s1);
        arg1[0x12] = arg1[0x11] * (func_80033634_ovl_01() & 7);
    } else {
        arg1[0x12] = t - 1;
    }
}
