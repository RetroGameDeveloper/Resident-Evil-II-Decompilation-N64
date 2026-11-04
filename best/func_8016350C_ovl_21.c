extern u32 D_80163A80_ovl_21;

s32 func_8016350C_ovl_21(void) {
    u32 i;
    u32 one;
    u32 bit;
    u32 m;
    u32 *p;
    u32 j;
    u32 mask;
    u32 *q;

    i = 0;
    one = 1;
    p = &D_80163A80_ovl_21;
    for (; i < 0x20; i++) {
        bit = ((u32)func_80033634_ovl_01() & 0xFF) >> 3;
        m = one << bit;
        if (!(*p & m)) {
            *p |= m;
            return bit;
        }
    }
    j = 0;
    mask = 1;
    q = &D_80163A80_ovl_21;
    for (; j < 0x20; j++, mask <<= 1) {
        if (!(*q & mask)) {
            *q |= j;
            return j;
        }
    }
    return 0;
}
