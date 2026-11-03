void func_80009170(s32 *arg0)
{
    s32 buf[16];
    s32 i;
    f32 one;
    f32 *rowf;
    f32 *colf;
    s32 *ip;
    s32 j;
    s32 *q;
    s32 *out0;
    s32 *out1;
    s32 row;
    f32 scale;
    s32 mask;
    u8 *rowp;
    s32 col;
    f32 *p;
    f32 fv0, fv1;
    s32 a, b;

    i = 0;
    one = 1.0f;
    rowf = (f32 *)buf;
    ip = buf;
    do {
        j = 0;
        colf = rowf;
        q = ip;
        do {
            if (i == j) {
                *colf = one;
            } else {
                *q = 0;
            }
            j++;
            q++;
        } while (j < 4);
        rowf = (f32 *)((u8 *)rowf + 0x14);
        i++;
        ip += 4;
    } while (i < 4);

    out0 = arg0;
    out1 = out0 + 8;
    row = 0;
    scale = 65536.0f;
    mask = 0xFFFF0000;
    rowp = (u8 *)buf;
    do {
        col = 0;
        p = (f32 *)rowp;
        do {
            fv1 = p[0] * scale;
            fv0 = p[1] * scale;
            p += 2;
            col += 1;
            a = (s32)fv1;
            b = (s32)fv0;
            *out0++ = (a & mask) | ((u32)b >> 16);
            *out1++ = ((a << 16) & mask) | (b & 0xFFFF);
        } while (col < 2);
        row += 1;
        rowp += 0x10;
    } while (row < 4);
}
