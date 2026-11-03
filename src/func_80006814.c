extern u8 D_80014F9C;
extern u8 D_80014FA0[];
extern s32 D_80014FDC;

typedef struct { u8 a; u8 b; u8 c; u8 d; u16 e; s8 f; s8 g; } Rec;

void func_80006814(void) {
    u8 *p;
    s32 i;
    Rec r;

    p = D_80014FA0;
    for (i = 14; i >= 0; i--) {
        ((s32 *)p)[i] = 0;
    }
    D_80014FDC = 1;
    r.a = 0xFF;
    r.b = 1;
    r.c = 4;
    r.d = 1;
    r.e = 0xFFFF;
    r.f = -1;
    r.g = -1;
    for (i = 0; i < D_80014F9C; i++) {
        *(Rec *)p = r;
        p += 8;
    }
    *p = 0xFE;
}
