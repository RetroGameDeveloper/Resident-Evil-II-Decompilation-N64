extern s32 D_800E9118_ovl_01;

void func_8002751C_ovl_01(s8 arg0, s16 arg1) {
    u64 base = (u64)(u32)&D_800E9118_ovl_01;
    u8 *p = (u8 *)(u32)base;
    *(s16 *)(p + 0xD6) = arg1;
    *(s8 *)(p + 0xC8) = arg0;
}
