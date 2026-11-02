s32 func_80008B70(s32, s32, s32, void *, s32);
s32 func_8000A66C(u8 *);

s32 func_80009C68(u16 *arg0, u16 *arg1, u16 *arg2) {
    u16 *end = arg0 + 14;
    u16 v;

    *arg2 = 0;
    *arg1 = 0;
    do {
        v = *arg0;
        *arg1 += v;
        *arg2 += ~v;
        arg0++;
    } while (arg0 < end);
    return 0;
}

s32 func_80009C30(u8 *arg0, s32 arg1) {
    s32 i = 0;
    u16 sum = 0;

    if (arg1 > 0) {
        do {
            sum += *arg0;
            arg0++;
            i++;
        } while (i < arg1);
    }
    return sum;
}

void func_80009B9C(u8 *p, s32 arg1, s32 arg2, u8 arg3) {
    s32 i;

    p[0x65] = arg3;
    if (func_8000A66C(p) == 0) {
        for (i = 0; i < 8; i++) {
            if (func_80008B70(*(s32 *)(p + 4), *(s32 *)(p + 8),
                              ((arg1 * 8) + i) & 0xFFFF, (void *)arg2, 0) != 0) {
                break;
            }
        }
        p[0x65] = 0;
        func_8000A66C(p);
    }
}

s32 func_8000A66C(u8 *arg0) {
    u8 buf[32];
    s32 i;

    for (i = 0; i < 32; i++) {
        buf[i] = arg0[0x65];
    }
    return func_80008B70(*(s32 *)(arg0 + 4), *(s32 *)(arg0 + 8), 0x400, buf, 0);
}
