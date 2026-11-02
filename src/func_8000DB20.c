u32 func_8000DB70(void) {
    return *(volatile u32 *)0xA4040010;
}

s32 func_8000DB20(u8 *arg0) {
    u32 v;
    s32 bit;

    v = func_8000DB70();
    bit = v >> 8;
    bit &= 1;
    if (v & 0x80) {
        *(s32 *)(arg0 + 4) = (*(s32 *)(arg0 + 4) | bit) & ~2;
    }
    return bit;
}
