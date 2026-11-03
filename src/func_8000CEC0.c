typedef struct { s32 f0; s32 f4; s32 f8; s32 fC; s32 f10; s32 f14; s32 f18; s32 f1C; } T;
extern u64 func_8000E100(T *p, s32 a);
extern void func_8000E0A0(u64 r);
extern s32 **D_80012960;

s32 func_8000CEC0(T *p, s32 x1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    u64 r;

    p->f0 = 0;
    p->f4 = 0;
    p->f10 = a2;
    p->f14 = a3;
    p->f8 = a4;
    p->fC = a5;
    if (a2 == 0) {
        if (a3 == 0) {
            p->f10 = a4;
            p->f14 = a5;
        }
    }
    p->f18 = a6;
    p->f1C = a7;
    r = func_8000E100(p, a6);
    if (*D_80012960 == (s32 *)p) {
        func_8000E0A0(r);
    }
    return 0;
}
