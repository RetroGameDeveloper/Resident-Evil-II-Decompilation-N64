s32 func_8006B250_ovl_01(u8 *arg0) {
    u32 x;
    s32 a;
    s32 b;

    x = *(u16 *)(arg0 + 0xA);
    b = ((x >> 6) & 0x1F) * 1800;
    a = (x >> 11) * 100;
    return -a - b;
}
