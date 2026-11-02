extern u8 D_80014F9C;
extern u8 D_80014FA0;

void func_80006A6C(u8 *arg0, u16 *arg1) {
    u8 *q = (u8 *)arg1 + 2;
    u16 *p = arg1;
    u8 bits = 0;
    s32 i;
    for (i = 0; i < D_80014F9C; i++) {
        u8 rec[8];
        u8 c;
        __builtin_memcpy(rec, &D_80014FA0 + i * 8, 8);
        c = (rec[2] & 0xC0) >> 4;
        q[1] = c;
        if (c == 0) {
            *p = (rec[5] << 8) | rec[4];
            bits |= 1 << i;
            q[0] = rec[6];
        }
        p += 2;
        q += 4;
    }
    *arg0 = bits;
}
