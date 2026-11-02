extern s32 D_80148B74;
extern s32 D_80148B78;
extern s16 D_801362C4_ovl_01[];
extern s32 D_801362C0_ovl_01;
f32 func_8000DB80(f32);

typedef struct S_vec3 { f32 x; f32 y; f32 z; } S_vec3;

void func_800AAF10_ovl_01(void) {
    s32 *p;

    p = &D_80148B74;
    *p = 0;
    p = &D_80148B78;
    *p = 0;
}

void func_800AB1EC_ovl_01(S_vec3 *p) {
    f32 sum;
    f32 d;

    sum = p->x * p->x + p->y * p->y + p->z * p->z;
    d = __builtin_sqrtf(sum);
    if (d != d) {
        d = func_8000DB80(sum);
    }
    p->x /= d;
    p->z /= d;
    p->y /= d;
}

s16 func_800AB2D0_ovl_01(s32 arg0) {
    s16 *tab = D_801362C4_ovl_01;
    u32 a = arg0 & 0xFFF;

    if (a < 0x400) {
        return tab[a];
    }
    if (a < 0x800) {
        return tab[~arg0 & 0x3FF];
    }
    if (a < 0xC00) {
        return -tab[arg0 & 0x3FF];
    }
    return -tab[~arg0 & 0x3FF];
}

u32 func_800AB36C_ovl_01(void) {
    u32 *p = (u32 *)&D_801362C0_ovl_01;
    u32 v;

    v = *p * 0xA8351D63;
    *p = v;
    return (v >> 6) & 0xFFFF;
}
