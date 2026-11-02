void func_800837B0_ovl_01(s32 *arg0, u32 arg1) {
    arg0[arg1 >> 5] &= ~(0x80000000U >> (arg1 & 0x1F));
}

void func_80083788_ovl_01(s32 *arg0, u32 arg1) {
    arg0[arg1 >> 5] |= 0x80000000U >> (arg1 & 0x1F);
}

s32 func_800837DC_ovl_01(s32 *arg0, u32 arg1) {
    return arg0[arg1 >> 5] & (0x80000000U >> (arg1 & 0x1F));
}

void func_80083778_ovl_01(void) {
}
