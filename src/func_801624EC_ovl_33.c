extern s32 func_80033634_ovl_01(void);
void func_801624EC_ovl_33(void *arg0) {
    u8 *p = (u8 *)arg0;
    if (*(u8 *)(p + 6) == 0) {
        *(s32 *)(p + 0x1E8) = 0x3F00;
        *(u8 *)(p + 6) = 1;
        *(u8 *)(p + 0x25C) &= 0xFD;
        *(s16 *)(p + 0x1F4) = (func_80033634_ovl_01() & 0x3F) + 0x3C;
        *(s32 *)*(u32 *)(p + 0x234) &= ~1;
    }
}
