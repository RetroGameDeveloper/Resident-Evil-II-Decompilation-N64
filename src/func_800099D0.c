s32 func_80009B9C(u8 *, s32, s32, u8);

s32 func_800099D0(u8 *arg0, u16 *arg1, s32 arg2, s32 *arg3, u8 arg4, s32 *arg5, s32 *arg6) {
    u8 buf[0x20];
    s32 ret;
    s32 start;
    s32 i;
    s32 prev;
    s32 first;
    s32 k;

    ret = 0;
    start = 1;
    if (arg4 == 0) {
        start = *(s32 *)(arg0 + 0x60);
    }
    i = start;
    for (; i < 0x80; i++) {
        if (arg1[i] == 3) {
            break;
        }
    }
    if (i == 0x80) {
        *arg3 = -1;
        return ret;
    }
    for (k = 0x1F; k >= 0; k--) {
        buf[k] = 0;
    }
    *arg5 = 1;
    prev = i;
    first = prev;
    i = prev + 1;
    if (*arg5 < arg2 && i < 0x80) {
        do {
            if (arg1[i] == 3) {
                u8 *p = (u8 *)(arg1 + prev);
                p[0] = arg4;
                p[1] = i;
                ret = func_80009B9C(arg0, prev, (s32)buf, arg4 & 0xFF);
                if (ret != 0) {
                    return ret;
                }
                (*arg5)++;
                prev = i;
            }
            i++;
        } while (*arg5 < arg2 && i < 0x80);
    }
    *arg3 = first;
    if (i == 0x80 && *arg5 < arg2) {
        *arg6 = prev;
        return ret;
    }
    {
        u16 *q = arg1 + prev;
        *q = 1;
    }
    ret = func_80009B9C(arg0, prev, (s32)buf, arg4);
    *arg6 = 0;
    return ret;
}
