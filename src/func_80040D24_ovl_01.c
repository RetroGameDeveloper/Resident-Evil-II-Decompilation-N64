typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec;

void func_8004229C_ovl_01(s32, s32, void *);
void func_800424EC_ovl_01(void *, s32);
f32 func_80048090_ovl_01(f32);

extern f64 D_800B8790_ovl_01;
extern f64 D_800B8798_ovl_01;
extern f32 D_800B87A0_ovl_01;
extern f32 D_800B87A4_ovl_01;

s32 func_80040D24_ovl_01(s32 arg0, s32 arg1) {
    s32 buf[8];

    func_8004229C_ovl_01(arg0, arg1, buf);
    func_800424EC_ovl_01(buf, arg1);
    return arg1;
}

void func_80040C9C_ovl_01(Vec *a, Vec *b, Vec *c) {
    c->x = a->y * b->z - a->z * b->y;
    c->y = a->z * b->x - a->x * b->z;
    c->z = a->x * b->y - a->y * b->x;
}

s32 func_80040C34_ovl_01(u32 arg0) {
    f64 d = (f64)(s32)arg0;
    f32 f;

    if ((s32)arg0 < 0) {
        d += D_800B8798_ovl_01;
    }
    f = (f32)d * D_800B87A0_ovl_01;
    return (s32)(f * func_80048090_ovl_01(f) * D_800B87A4_ovl_01);
}

s32 func_80040BE4_ovl_01(u32 arg0) {
    f64 d = (f64)(s32)arg0;
    f32 f;

    if ((s32)arg0 < 0) {
        d += D_800B8790_ovl_01;
    }
    f = (f32)d;
    return (s32)(f * func_80048090_ovl_01(f));
}
