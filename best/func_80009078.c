void func_80009078(void *arg0, volatile s32 *arg1)
{
    s32 sp[2];
    f32 temp_fv0;
    volatile s32 *p;
    s32 temp_v0;
    s32 temp_v1;
    s32 j;
    s32 i;
    void *out;
    void *base;
    volatile u16 *q;

    base = arg0;
    p = arg1;
    q = (volatile u16 *)(arg1 + 8);
    i = 0;
    do {
        j = 0;
        out = base;
    loop2:
        temp_v0 = (*p & 0xFFFF0000) | *q;
        sp[0] = temp_v0;
        temp_v1 = ((*p << 16) & 0xFFFF0000) | q[1];
        temp_fv0 = (f32)temp_v1 * 0.0000152587890625f;
        j += 1;
        q += 2;
        p += 1;
        sp[1] = temp_v1;
        *(f32 *)out = (f32)temp_v0 * 0.0000152587890625f;
        *((f32 *)out + 1) = temp_fv0;
        out = (u8 *)out + 8;
        if (j < 2) goto loop2;
        i += 1;
        base = (u8 *)base + 0x10;
    } while (i < 4);
}
