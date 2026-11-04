s32 func_80083800_ovl_01(s16 arg0, void *arg1, void *arg2);
s32 func_80032D44_ovl_01(s16 arg0, s16 arg1, s16 arg2, s16 arg3);

typedef struct S_arg0_80163030 {
    u8 unk_00[0x2A];
    union { u16 u; s16 s; } unk_2A;
    u8 unk_2C[6];
    union { u16 u; s16 s; } unk_32;
    u8 unk_34[0x32];
    s16 unk_66;
} S_arg0_80163030;

typedef struct S_D_800E10D0 {
    u8 unk_00[0x28];
    union { s32 w; struct { u16 lo; s16 hi; } h; } unk_28;
    u8 unk_2C[4];
    union { s32 w; struct { u16 lo; s16 hi; } h; } unk_30;
    u8 unk_34[0x32];
    s16 unk_66;
} S_D_800E10D0;

extern u8 D_800E10D0_ovl_01[];

void func_80163030_ovl_23(S_arg0_80163030 *p, u16 a) {
    S_D_800E10D0 *g = (S_D_800E10D0 *)D_800E10D0_ovl_01;
    u16 pos[3];
    s32 r;

    pos[0] = a;
    pos[1] = 0;
    pos[2] = 0;
    func_80083800_ovl_01(p->unk_66, pos, pos);
    pos[0] += p->unk_2A.u;
    g->unk_28.w = (s16)pos[0];
    pos[2] += p->unk_32.u;
    g->unk_30.w = (s16)pos[2];
    r = func_80032D44_ovl_01(g->unk_28.h.hi, g->unk_30.h.hi,
                             p->unk_2A.s, p->unk_32.s);
    g->unk_66 = r - 0x32;
}
