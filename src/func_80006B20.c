extern u8 D_80014F9C;
extern u8 D_80014FD8[];
extern s32 D_80014FDC;

typedef struct { u8 b0; u8 b1; u8 b2; s8 b3; s8 b4; s8 b5; s8 b6; s8 b7; } Blob8;

void func_80006B20(s8 a) {
    u8 *p;
    s32 *q;
    s32 *base;
    Blob8 b;
    s32 i = 14;
    u8 ff;

    q = (s32 *)D_80014FD8;
    do {
        *q = 0;
        i--;
        q -= 1;
    } while (i >= 0);
    base = &D_80014FDC;
    p = (u8 *)base - 0x3C;
    *base = 1;
    ff = 0xFF;
    b.b0 = ff;
    b.b1 = 1;
    b.b2 = 3;
    b.b3 = a;
    b.b4 = ff;
    b.b5 = ff;
    b.b6 = ff;
    b.b7 = ff;
    for (i = 0; i < D_80014F9C; i++) {
        *(Blob8 *)p = b;
        p += 8;
    }
    *p = 0xFE;
}
