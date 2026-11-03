void func_801826FC_ovl_02(u8 *src, u8 *dst, s32 stride, s32 count)
{
    u8 *t0 = src;
    u8 *t1 = dst;
    s32 v1 = 0;

    if (count <= 0)
        return;

    src += 7;
    dst += 7;

    do {
        t1[0] = t0[0];
        dst[-6] = src[-6];
        dst[-5] = src[-5];
        dst[-4] = src[-4];
        dst[-3] = src[-3];
        t0 += stride;
        dst[-2] = src[-2];
        v1++;
        t1 += stride;
        dst[-1] = src[-1];
        dst[0] = src[0];
        src += stride;
    } while (v1 < count);

    dst += stride;
}
