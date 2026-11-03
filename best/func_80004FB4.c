s32 func_80004FB4(u8 *dst, u8 *src)
{
    u8 *start = dst;
    s8 n;

    do {
        n = *src++;
        if (n > 0) {
            n--;
            while (n != -1) {
                *dst++ = *src++;
                n--;
            }
        } else if (n < 0) {
            u8 b = *src++;
            n++;
            while (n != 1) {
                *dst++ = b;
                n++;
            }
        }
    } while (n != 0);
    return dst - start;
}
