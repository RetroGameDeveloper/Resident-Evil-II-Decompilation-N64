void func_80009120(f32 *p) {
    s32 i;
    s32 j;
    f32 one;
    f32 *d;
    i = 0;
    one = 1.0f;
    d = p;
    for (; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (i == j)
                *d = one;
            else
                ((s32 *)p)[j] = 0;
        }
        d += 5;
        p += 4;
    }
}
