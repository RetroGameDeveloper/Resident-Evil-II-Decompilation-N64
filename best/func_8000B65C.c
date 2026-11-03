typedef struct {
    u8 b0;
    u8 b1;
    u8 b2;
    s8 b3;
    s8 b4;
    s8 b5;
    s8 b6;
    s8 b7;
} Blob8;

extern u8 D_80014F9C;
extern s8 D_80014FE0;
extern u8 D_80016470[];
extern s32 D_800164AC;

void func_8000B65C(s8 a0) {
    Blob8 b;
    s32 *base;
    Blob8 *p;
    u8 ff;
    s32 i;

    p = (Blob8 *)D_80016470;
    base = &D_800164AC;
    ff = 0xFF;
    i = 0;
    *base = 1;
    b.b1 = 1;
    D_80014FE0 = a0;
    b.b0 = ff;
    b.b2 = 3;
    b.b3 = a0;
    b.b4 = ff;
    b.b5 = ff;
    b.b6 = ff;
    b.b7 = ff;
    for (; i < D_80014F9C; i++) {
        *p = b;
        p++;
    }
    *(u8 *)p = 0xFE;
}
