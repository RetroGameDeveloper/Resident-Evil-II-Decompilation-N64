typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec;

void func_80040C9C_ovl_01(Vec *a, Vec *b, Vec *c) {
    s32 t;

    t = a->y * b->z;
    c->x = t - a->z * b->y;
    t = a->z * b->x;
    c->y = t - a->x * b->z;
    t = a->x * b->y;
    c->z = t - a->y * b->x;
}
