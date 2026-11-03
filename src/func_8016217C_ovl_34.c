typedef void (*Fn)(u8 *, s32, s32);
extern Fn D_80162830_ovl_34[];
void func_8016217C_ovl_34(u8 *p, s32 x, s32 y) {
    volatile Fn *table = D_80162830_ovl_34;
    u32 n = (p[5] - 1) * 9 + p[0x26E];
    table[n](p, x, y);
}
