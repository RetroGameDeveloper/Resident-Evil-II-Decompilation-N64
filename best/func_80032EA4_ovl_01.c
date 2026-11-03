s32 func_80032D44_ovl_01(s16, s16, s16, s16);
s32 func_80032EA4_ovl_01(u8 *p, s16 a, s16 b, s16 c) {
    s32 diff;
    s32 d;
    diff = func_80032D44_ovl_01(*(s16 *)(p + 0x2A), *(s16 *)(p + 0x32), a, b) - *(u16 *)(p + 0x66);
    d = (c + diff) & 0xFFF;
    if (d < c * 2) return 0;
    if ((u32)d < 0x801) return c;
    return -c;
}
