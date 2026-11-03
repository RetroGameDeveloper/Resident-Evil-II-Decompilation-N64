extern s16 D_8017E274_ovl_05[];
extern u8 D_8017E544_ovl_05[];
extern u8 D_8017E54C_ovl_05;

void func_8017B390_ovl_05(void) {
    union { u64 q; s16 *w; } b;
    s16 *p;
    b.q = (u64)(u32)&D_8017E274_ovl_05;
    p = (s16 *)(u32)b.q;
    p[0x109] = 0;
    p[0xC3] = 0;
    p[0x7D] = 0;
    p[0x37] = 0;
    p[0x113] = 0;
    p[0xCD] = 0;
    p[0x87] = 0;
    p[0x41] = 0;
    if (D_8017E544_ovl_05[D_8017E54C_ovl_05] == 4) {
        p[0xD7] = 0;
        p[0x91] = 0;
        p[0x4B] = 0;
        p[0x05] = 0;
        p[0xFF] = 0x20;
        p[0xB9] = 0x20;
        p[0x73] = 0x20;
        p[0x2D] = 0x20;
    } else {
        p[0xD7] = 0x20;
        p[0x91] = 0x20;
        p[0x4B] = 0x20;
        p[0x05] = 0x20;
        p[0xFF] = 0;
        p[0xB9] = 0;
        p[0x73] = 0;
        p[0x2D] = 0;
    }
}
