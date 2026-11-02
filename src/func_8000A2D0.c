s32 func_8000A66C(void);
s32 func_800087A0(s32, s32, s32, u8 *);

s32 func_8000A2D0(void *arg0) {
    u8 buf[0x20];
    s32 result;
    s32 i;
    u8 *p;

    if (*(u8 *)((u8 *)arg0 + 0x65) != 0) {
        *(u8 *)((u8 *)arg0 + 0x65) = 0;
        result = func_8000A66C();
        if (result != 0) return result;
    }
    result = func_800087A0(*(s32 *)((u8 *)arg0 + 4), *(s32 *)((u8 *)arg0 + 8), 1, buf);
    if (result == 0) goto compare;
    if (result != 2) return result;
    result = func_800087A0(*(s32 *)((u8 *)arg0 + 4), *(s32 *)((u8 *)arg0 + 8), 1, buf);
    if (result != 0) return result;
compare:
    for (i = 0, p = buf; i < 0x20; i++, p++) {
        u8 *q = (u8 *)arg0 + i;
        if (q[0xC] != *p) return 2;
    }
    return 0;
}
