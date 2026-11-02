s32 func_80005134(u8 *arg0, u8 *arg1)
{
    u8 *start = arg0;
    s32 n, v, len;
    do {
        n = *(s32 *)arg1;
        arg1 += 4;
        if (n > 0) {
            while (--n != -1) {
                *(s32 *)arg0 = *(s32 *)arg1;
                arg1 += 4;
                arg0 += 4;
            }
        } else if (n < 0) {
            v = *(s32 *)arg1;
            arg1 += 4;
            while (++n != 1) {
                *(s32 *)arg0 = v;
                arg0 += 4;
            }
        }
        len = arg0 - start;
    } while (n != 0);
    return len;
}
