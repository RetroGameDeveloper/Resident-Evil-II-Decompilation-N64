s32 func_80032EA4_ovl_01(void *, s32, s32, s16);

s32 func_80166CE4_ovl_26(void *arg0, s32 arg1, s32 arg2, s16 arg3) {
    u8 *p = (u8 *)arg0;
    u8 b;
    u16 old;
    s32 r;
    b = *(u8 *)(p + 0x2CD);
    old = *(u16 *)(p + 0x66);
    *(u16 *)(p + 0x66) = old + (b << 11);
    r = func_80032EA4_ovl_01(arg0, arg1, arg2, arg3);
    *(u16 *)(p + 0x66) = old;
    return (s16)r;
}
