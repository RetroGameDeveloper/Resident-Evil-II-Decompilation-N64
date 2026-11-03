extern s32 func_80040A44_ovl_01(s32, s32);

s16 func_8003593C_ovl_01(s16 a, s16 b)
{
    s32 aa = a;
    s32 bb = b;
    s32 t = -bb;
    s32 r = (((aa & 0x80000000) == 0) << 11) | 0x400;

    if (t != 0) {
        r = func_80040A44_ovl_01((aa << 12) / t, b);
        if (t < 0)
            r = -(s16)r;
    }
    return (s16)r;
}
