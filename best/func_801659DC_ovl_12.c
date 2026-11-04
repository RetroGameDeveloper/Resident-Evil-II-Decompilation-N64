void func_801659DC_ovl_12(u8 *arg0, s32 arg1) {
    if (arg1 == 0) {
        *(s16 *)(arg0 + 0x134) = -500;
        *(s16 *)(arg0 + 0x13A) = 500;
        *(u32 *)arg0 = (*(u32 *)arg0 & 0xE7FFFFFF) | 0x04000000;
    } else {
        *(s16 *)(arg0 + 0x134) = -1000;
        *(s16 *)(arg0 + 0x13A) = 1000;
        *(u32 *)arg0 = *(u32 *)arg0 | 0x0C000000;
    }
}
