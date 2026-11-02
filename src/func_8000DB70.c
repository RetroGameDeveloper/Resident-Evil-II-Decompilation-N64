extern volatile u32 D_A4080000;

u32 func_8000DB70(void) {
    return *(volatile u32 *)0xA4040010;
}

void func_8000DB10(s32 arg0) {
    *(volatile u32 *)0xA4040010 = arg0;
}

s32 func_8000DAE0(s32 arg0) {
    if (*(volatile u32 *)0xA4040010 & 1) {
        D_A4080000 = arg0;
        return 0;
    }
    return -1;
}

s32 func_8000DB20(u8 *arg0) {
    u32 v;
    s32 bit;

    v = func_8000DB70();
    bit = (v >> 8) & 1;
    if (v & 0x80) {
        *(s32 *)(arg0 + 4) = (*(s32 *)(arg0 + 4) | bit) & ~2;
    }
    return bit;
}
