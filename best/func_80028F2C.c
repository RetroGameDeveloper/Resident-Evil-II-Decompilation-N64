/* ---- func_80079374_ovl_01 ---- */
typedef struct S_80079374_ent {
    s16 unk_00;
    s16 unk_02;
    u8  unk_04[0x24];
    s8  unk_28;
} S_80079374_ent;
extern S_80079374_ent D_8011A31C_ovl_01[];
void func_80079290_ovl_01(s32, void *);

void func_80079374_ovl_01(s32 arg0, s32 arg1, s32 arg2) {
    S_80079374_ent *base = D_8011A31C_ovl_01;
    S_80079374_ent *p = base + (s16)arg0;
    if (p->unk_28 != 0) {
        s32 t = ((s16)arg1 + (s16)arg2) >> 1;
        p->unk_02 = t;
        p->unk_00 = t;
        func_80079290_ovl_01(arg0, p);
    }
}

/* ---- func_80087D04_ovl_01 ---- */
extern u8 D_80129E34_ovl_01[];
extern u8 D_8013A290[];
void func_80007F50(void *);
s32 func_800082D0(void *, void *, s32);

void func_80087D04_ovl_01(s32 arg0) {
    u8 *base = D_80129E34_ovl_01;
    u8 *p = base + arg0 * 0x68;
    if (func_800082D0(D_8013A290, p, arg0) == 0) {
        func_80007F50(p);
        func_80007F50(p);
        func_80007F50(p);
    }
}

/* ---- func_80028F2C ---- */
typedef struct S_80028F2C_sub { s32 unk_00; s32 unk_04; } S_80028F2C_sub;
typedef struct S_80028F2C { u8 unk_00[0x14]; S_80028F2C_sub *unk_14; } S_80028F2C;
void func_80028DF0_ovl_01(void *);

void func_80028F2C(S_80028F2C *arg0, s32 arg1) {
    S_80028F2C_sub *p = arg0->unk_14;
    if (arg1 > 0) {
        while (p->unk_04 < arg1) {
            arg1 -= p->unk_04;
            func_80028DF0_ovl_01(arg0);
        }
        p->unk_00 += arg1;
        p->unk_04 -= arg1;
    }
}

/* ---- func_80028F34_ovl_01 ---- */
extern u8 D_80028DE0_ovl_01[];
extern u8 D_80028EB4_ovl_01[];
extern u8 D_8002D00C_ovl_01[];
extern u8 D_80028F2C_ovl_01[];

typedef struct S_80028F34_vtbl { u32 (*fn)(void *, s32, s32); } S_80028F34_vtbl;
typedef struct S_80028F34_sub {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
} S_80028F34_sub;
typedef struct S_80028F34 {
    u8 unk_00[4];
    S_80028F34_vtbl *unk_04;
    u8 unk_08[0xC];
    S_80028F34_sub *unk_14;
} S_80028F34;

void func_80028F34_ovl_01(S_80028F34 *arg0, s32 arg1) {
    S_80028F34_sub *p = arg0->unk_14;
    if (p == NULL) {
        p = (S_80028F34_sub *)arg0->unk_04->fn(arg0, 0, 0x28);
        arg0->unk_14 = p;
        p->unk_20 = arg0->unk_04->fn(arg0, 0, 0xA000);
    }
    p = arg0->unk_14;
    p->unk_08 = (s32)D_80028DE0_ovl_01;
    p->unk_0C = (s32)func_80028DF0_ovl_01;
    p->unk_10 = (s32)D_80028EB4_ovl_01;
    p->unk_14 = (s32)D_8002D00C_ovl_01;
    p->unk_18 = (s32)D_80028F2C_ovl_01;
    p->unk_1C = arg1;
    p->unk_04 = 0;
    p->unk_00 = 0;
}
