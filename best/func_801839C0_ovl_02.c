void func_801839C0_ovl_02(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    u8 *p;
    u8 *q;
    u8 *r;
    u32 a;
    u32 b;
    u32 c;
    u32 d;
    s32 i;

    r = arg0 + arg2;
    i = 0;
    if (arg4 > 0) {
        p = arg0;
        q = arg1;
        do {
            a = p[0];
            c = r[0];
            b = p[1];
            d = r[1];
            q[0] = (u8)((a + b + c + d + 2) >> 2);
            a = p[2];
            c = r[2];
            q[1] = (u8)((b + a + d + c + 2) >> 2);
            b = p[3];
            d = r[3];
            q[2] = (u8)((a + b + c + d + 2) >> 2);
            a = p[4];
            c = r[4];
            q[3] = (u8)((b + a + d + c + 2) >> 2);
            b = p[5];
            d = r[5];
            q[4] = (u8)((a + b + c + d + 2) >> 2);
            a = p[6];
            c = r[6];
            q[5] = (u8)((b + a + d + c + 2) >> 2);
            b = p[7];
            d = r[7];
            q[6] = (u8)((a + b + c + d + 2) >> 2);
            q[7] = (u8)((b + p[8] + d + r[8] + 2) >> 2);
            p += arg3;
            r += arg3;
            q += arg3;
            i++;
        } while (i < arg4);
    }
}
