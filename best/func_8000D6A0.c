void *func_8000D6A0(s8 *src, s8 *dst, s32 n)
{
    s8 *ret = dst;
    s8 *end;
    u32 w0, w1, w2, w3, w4, w5, w6, w7;

    if (n == 0) {
        return ret;
    }
    if (src == dst) {
        return ret;
    }

    if ((s32)dst < (s32)src || (s32)dst >= (s32)src + n) {
        if (n >= 0x10) {
            if (((u32)src & 3) == ((u32)dst & 3)) {
                switch ((u32)src & 3) {
                case 1:
                    *dst = *src;
                    *(s16 *)(dst + 1) = *(s16 *)(src + 1);
                    src += 3;
                    dst += 3;
                    n -= 3;
                    break;
                case 2:
                    *(s16 *)dst = *(s16 *)src;
                    src += 2;
                    dst += 2;
                    n -= 2;
                    break;
                default:
                    *dst = *src;
                    src += 1;
                    dst += 1;
                    n -= 1;
                    break;
                }
                while (n >= 0x20) {
                    w0 = ((u32 *)src)[0];
                    w1 = ((u32 *)src)[1];
                    w2 = ((u32 *)src)[2];
                    w3 = ((u32 *)src)[3];
                    w4 = ((u32 *)src)[4];
                    w5 = ((u32 *)src)[5];
                    w6 = ((u32 *)src)[6];
                    w7 = ((u32 *)src)[7];
                    src += 0x20;
                    ((u32 *)dst)[0] = w0;
                    ((u32 *)dst)[1] = w1;
                    ((u32 *)dst)[2] = w2;
                    ((u32 *)dst)[3] = w3;
                    ((u32 *)dst)[4] = w4;
                    ((u32 *)dst)[5] = w5;
                    ((u32 *)dst)[6] = w6;
                    ((u32 *)dst)[7] = w7;
                    dst += 0x20;
                    n -= 0x20;
                }
                while (n >= 0x10) {
                    w0 = ((u32 *)src)[0];
                    w1 = ((u32 *)src)[1];
                    w2 = ((u32 *)src)[2];
                    w3 = ((u32 *)src)[3];
                    src += 0x10;
                    ((u32 *)dst)[0] = w0;
                    ((u32 *)dst)[1] = w1;
                    ((u32 *)dst)[2] = w2;
                    ((u32 *)dst)[3] = w3;
                    dst += 0x10;
                    n -= 0x10;
                }
                while (n >= 4) {
                    w0 = ((u32 *)src)[0];
                    src += 4;
                    ((u32 *)dst)[0] = w0;
                    dst += 4;
                    n -= 4;
                }
            }
        }
        if (n != 0) {
            end = src + n;
            do {
                *dst++ = *src++;
            } while (src != end);
        }
        return ret;
    }

    src += n;
    dst += n;
    if (n >= 0x10) {
        if (((u32)src & 3) == ((u32)dst & 3)) {
            switch ((u32)src & 3) {
            case 3:
                *(dst - 1) = *(src - 1);
                *(s16 *)(dst - 3) = *(s16 *)(src - 3);
                src -= 3;
                dst -= 3;
                n -= 3;
                break;
            case 2:
                *(s16 *)(dst - 2) = *(s16 *)(src - 2);
                src -= 2;
                dst -= 2;
                n -= 2;
                break;
            default:
                *(dst - 1) = *(src - 1);
                src -= 1;
                dst -= 1;
                n -= 1;
                break;
            }
            while (n >= 0x20) {
                w0 = ((u32 *)(src - 0x04))[0];
                w1 = ((u32 *)(src - 0x08))[0];
                w2 = ((u32 *)(src - 0x0C))[0];
                w3 = ((u32 *)(src - 0x10))[0];
                w4 = ((u32 *)(src - 0x14))[0];
                w5 = ((u32 *)(src - 0x18))[0];
                w6 = ((u32 *)(src - 0x1C))[0];
                w7 = ((u32 *)(src - 0x20))[0];
                src -= 0x20;
                ((u32 *)(dst - 0x04))[0] = w0;
                ((u32 *)(dst - 0x08))[0] = w1;
                ((u32 *)(dst - 0x0C))[0] = w2;
                ((u32 *)(dst - 0x10))[0] = w3;
                ((u32 *)(dst - 0x14))[0] = w4;
                ((u32 *)(dst - 0x18))[0] = w5;
                ((u32 *)(dst - 0x1C))[0] = w6;
                ((u32 *)(dst - 0x20))[0] = w7;
                dst -= 0x20;
                n -= 0x20;
            }
            while (n >= 0x10) {
                w0 = ((u32 *)(src - 0x04))[0];
                w1 = ((u32 *)(src - 0x08))[0];
                w2 = ((u32 *)(src - 0x0C))[0];
                w3 = ((u32 *)(src - 0x10))[0];
                src -= 0x10;
                ((u32 *)(dst - 0x04))[0] = w0;
                ((u32 *)(dst - 0x08))[0] = w1;
                ((u32 *)(dst - 0x0C))[0] = w2;
                ((u32 *)(dst - 0x10))[0] = w3;
                dst -= 0x10;
                n -= 0x10;
            }
            while (n >= 4) {
                w0 = ((u32 *)(src - 0x04))[0];
                src -= 4;
                ((u32 *)(dst - 0x04))[0] = w0;
                dst -= 4;
                n -= 4;
            }
        }
    }
    if (n != 0) {
        src -= 1;
        dst -= 1;
        end = src - n;
        do {
            *dst-- = *src--;
        } while (src != end);
    }
    return ret;
}
