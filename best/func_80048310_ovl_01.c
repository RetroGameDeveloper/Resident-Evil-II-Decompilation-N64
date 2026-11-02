typedef struct S_8004A028_obj {
    u8 unk_00[0x14];
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
} S_8004A028_obj;

typedef struct S_8004A028_vec {
    s32 x;
    s32 y;
    s32 z;
} S_8004A028_vec;

s32 func_800416EC_ovl_01(void *arg0, void *arg1);
s32 func_8004229C_ovl_01(void *arg0, void *arg1, void *arg2);
s32 func_800421E4_ovl_01(void *arg0, s32 *arg1, s32 *arg2);

void func_8004A028_ovl_01(S_8004A028_obj *arg0, S_8004A028_obj *arg1, S_8004A028_obj *arg2) {
    u8 buf[0x20];
    S_8004A028_vec vec;

    func_800416EC_ovl_01(arg0, buf);
    func_8004229C_ovl_01(buf, arg1, arg2);
    vec.x = arg1->unk_14 - arg0->unk_14;
    vec.y = arg1->unk_18 - arg0->unk_18;
    vec.z = arg1->unk_1C - arg0->unk_1C;
    func_800421E4_ovl_01(buf, &vec.x, &vec.x);
    arg2->unk_14 = vec.x;
    arg2->unk_18 = vec.y;
    arg2->unk_1C = vec.z;
}

extern f32 D_800B8950_ovl_01;
extern f32 D_800B8954_ovl_01;
extern f32 D_800B8958_ovl_01;
extern f32 D_800F578C_ovl_01[];
f32 func_800482C4_ovl_01(s32 arg0);

f32 func_80048310_ovl_01(f32 arg0) {
    f32 v;
    f32 scaled;
    f32 *tab;
    f32 *pcur;
    f32 *pnext;
    s32 idx;
    f32 cur;
    f32 next;
    f32 mul;

    v = arg0;
    if (v < 0.0f) {
        v = -v;
    }
    scaled = v * D_800B8950_ovl_01;
    idx = (s32) scaled;
    if (idx >= 0x190) {
        return func_800482C4_ovl_01(idx);
    }
    tab = D_800F578C_ovl_01;
    pcur = &tab[idx];
    pnext = &tab[idx + 1];
    cur = *pcur;
    next = *pnext;
    cur = cur + (next - cur) * (scaled - (f32) idx);
    mul = D_800B8954_ovl_01;
    if (arg0 < 0.0f) {
        mul = D_800B8958_ovl_01;
    }
    return mul * cur;
}

typedef struct S_8004A358_ent {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} S_8004A358_ent;
extern u8 D_800C7650_ovl_01[];

s32 func_8004A358_ovl_01(S_8004A358_ent *arg0, s32 arg1, S_8004A358_ent *arg2) {
    s32 off;
    u8 *base;
    s16 ref;
    s16 hi;
    s16 lo;
    s32 a;
    s32 b;
    s32 v;
    S_8004A358_ent *p0;
    S_8004A358_ent *p1;

    off = (arg1 << 3) & 0x3F8;
    base = (u8 *) ((u32) D_800C7650_ovl_01 + 0x18000);
    ref = *(s16 *) (base + 0x1A42);
    p0 = (S_8004A358_ent *) ((u8 *) arg0 - off);
    p1 = (S_8004A358_ent *) ((u8 *) arg2 - off);
    a = p1->unk_08 - ref;
    b = p0->unk_0C - ref;
    if ((a ^ b) < 0) {
        return 0;
    }
    v = (*(s32 *) ((u8 *) arg2 + off) - *(s32 *) ((u8 *) arg0 + off + 4)) * b / (a + b)
        + *(s32 *) ((u8 *) arg0 + off + 4);
    hi = *(s16 *) (base + 0x1A44);
    lo = *(s16 *) (base + 0x1A46);
    return (u32) (v - lo) < (u32) (hi - lo);
}
