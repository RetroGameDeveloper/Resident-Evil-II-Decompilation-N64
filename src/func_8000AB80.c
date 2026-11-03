typedef struct {
    s8 b0;
    s8 b1;
    s8 b2;
    s8 b3;
    s8 b4;
    s8 b5;
} S6;

extern s8 D_80016470;

void func_8000AB80(s32 n, u8 *out) {
    S6 s;
    s8 *p = &D_80016470;
    s32 i;

    for (i = 0; i < n; i++) {
        p++;
    }
    s = *(S6 *)p;
    out[3] = (((u8 *)&s)[1] & 0xC0) >> 4;
    if (out[3] == 0) {
        *(u16 *)out = ((u8 *)&s)[3] | (((u8 *)&s)[4] << 8);
        out[2] = ((u8 *)&s)[5];
    }
}
