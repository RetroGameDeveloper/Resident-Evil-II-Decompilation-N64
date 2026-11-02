extern f64 D_80011B30;
extern f64 D_80011B38;
extern f64 D_80011B40;
extern f64 D_80011B48;

f32 func_80006BE0(f32);
f32 func_8000D050(f32);
void func_80009120(f32 *);

typedef union {
    s32 i;
    f32 f;
} FI;

typedef struct {
    f32 f00;
    f32 f04;
    f32 f08;
    f32 f0C;
    f32 f10;
    f32 f14;
    f32 f18;
    f32 f1C;
    f32 f20;
    f32 f24;
    f32 f28;
    f32 f2C;
    f32 f30;
    f32 f34;
    f32 f38;
    s32 f3C;
} Mtx;

void func_800092C0(f32 *arg0, s16 *arg1, FI arg2, FI arg3, FI arg4, FI arg5, FI arg6) {
    f32 cot;
    f32 f3;
    f32 f2;
    f32 f4;
    f32 f5;
    f32 f6;
    f32 temp;
    f32 num;
    f32 den;
    f32 p;
    f32 q;
    f32 r;
    f32 *mp;
    s32 i;
    s32 j;
    s32 v;
    f64 t;
    Mtx *m;

    f2 = arg2.f;
    f3 = arg3.f;
    f4 = arg4.f;
    f5 = arg5.f;
    f6 = arg6.f;
    func_80009120(arg0);
    f2 = (f32)((f64)f2 * D_80011B30);
    temp = f2 / 2.0f;
    cot = func_80006BE0(temp) / func_8000D050(temp);
    num = f4 + f5;
    den = f4 - f5;
    p = num / den;
    q = (2.0f * f4 * f5) / den;
    r = cot / f3;
    m = (Mtx *)arg0;
    m->f3C = 0;
    m->f2C = -1.0f;
    m->f14 = cot;
    m->f28 = p;
    m->f38 = q;
    m->f00 = r;
    mp = arg0;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            mp[j] *= f6;
        }
        mp += 4;
    }
    if (arg1 != NULL) {
        t = (f64)(f4 + f5);
        if (t <= D_80011B38) {
            v = 0xFFFF;
        } else {
            t = D_80011B40 / t;
            if (!(t >= D_80011B48)) {
                v = (s32)t;
            } else {
                v = (s32)(t - D_80011B48);
                v |= 0x80000000;
            }
            *arg1 = v;
            if ((v & 0xFFFF) != 0) {
                goto done;
            }
            v = 1;
        }
        *arg1 = v;
    done:;
    }
}
