extern u8 D_80014F9C;
extern u8 D_80014FA0;

typedef struct {
    u8 b0;
    u8 b1;
    u8 b2;
    u8 b3;
    u8 b4;
    u8 b5;
    u8 b6;
    u8 b7;
} S8;

void func_80006A6C(u8 *arg0, u16 *arg1) {
    s32 i;
    u8 *q = (u8 *)arg1 + 2;
    u16 *p = arg1;
    u8 bits = 0;
    u8 *rp = &D_80014FA0;

    for (i = 0; i < D_80014F9C; i++) {
        S8 rec;
        u8 c;
        rec = *(S8 *)rp;
        c = (rec.b2 & 0xC0) >> 4;
        q[1] = c;
        if (c == 0) {
            *p = rec.b4 | (rec.b5 << 8);
            bits |= 1 << i;
            q[0] = rec.b6;
        }
        p += 2;
        q += 4;
        rp += 8;
    }
    *arg0 = bits;
}
