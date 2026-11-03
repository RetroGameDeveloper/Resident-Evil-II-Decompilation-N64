void func_80008FE0(f32 *arg0, s32 *arg1)
{
    s32 *out0 = arg1;
    s32 *out1 = out0 + 8;
    s32 row = 0;
    f32 scale = 65536.0f;
    s32 mask = 0xFFFF0000;
    u8 *rowp = (u8 *)arg0;
    s32 col;
    f32 *p;
    f32 fv0, fv1;
    s32 a, b;

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
