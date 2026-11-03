typedef void (*Fn)(u8 *, s32, s32);
extern Fn D_80167210_ovl_33[];
void func_80165A58_ovl_33(u8 *p, s32 x, s32 y) {
    volatile Fn *table = D_80167210_ovl_33;
    u32 n = (p[5] - 1) * 9 + p[0x26E];
    table[n](p, x, y);
}
