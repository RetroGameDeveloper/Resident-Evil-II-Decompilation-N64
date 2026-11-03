extern volatile s32 D_800C75E0_ovl_01;

s32 func_80025B0C_ovl_01(void) {
    return D_800C75E0_ovl_01;
}

extern f32 D_800B8950_ovl_01;
extern f32 D_800B8954_ovl_01;
extern f32 D_800B8958_ovl_01;
extern f32 D_800F578C_ovl_01[];
f32 func_800482C4_ovl_01(s32 arg0);

f32 func_80048310_ovl_01(f32 arg0) {
    f32 v;
    f32 scaled;
    s32 idx;
    s32 idx1;
    f32 cur;
    f32 next;

    v = arg0;
    if (v < 0.0f) {
        v = -v;
    }
    scaled = D_800B8950_ovl_01 * v;
    idx = (s32)scaled;
    if (idx >= 0x190) {
        return func_800482C4_ovl_01(idx);
    }
    {
        f32 *tab = D_800F578C_ovl_01;
        f32 *pcur = &tab[idx];
        f32 *pnext;
        idx1 = idx + 1;
        pnext = &tab[idx1];
        cur = *pcur;
        next = *pnext;
        cur = cur + (next - cur) * (scaled - idx);
    }
    {
        f32 mul = D_800B8954_ovl_01;
        if (arg0 < 0.0f) {
            mul = D_800B8958_ovl_01;
        }
        return mul * cur;
    }
}

typedef struct S_obj14 {
    u8 unk_00[0x14];
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
} S_obj14;

s32 func_800416EC_ovl_01(void *arg0, void *arg1);
s32 func_8004229C_ovl_01(void *arg0, void *arg1, void *arg2);
s32 func_800421E4_ovl_01(void *arg0, s32 *arg1, s32 *arg2);

void func_8004A028_ovl_01(S_obj14 *arg0, S_obj14 *arg1, S_obj14 *arg2) {
    u8 buf[0x20];
    s32 vec[3];

    func_800416EC_ovl_01(arg0, buf);
    func_8004229C_ovl_01(buf, arg1, arg2);
    vec[0] = arg1->unk_14 - arg0->unk_14;
    vec[1] = arg1->unk_18 - arg0->unk_18;
    vec[2] = arg1->unk_1C - arg0->unk_1C;
    func_800421E4_ovl_01(buf, vec, vec);
    arg2->unk_14 = vec[0];
    arg2->unk_18 = vec[1];
    arg2->unk_1C = vec[2];
}
