/* ---- func_80079374_ovl_01 ---- */
typedef struct S_80079374_ent {
    s16 unk_00;
    s16 unk_02;
    u8  unk_04[0x24];
    s8  unk_28;
} S_80079374_ent;
extern S_80079374_ent D_8011A31C_ovl_01[];
void func_80079290_ovl_01(s32, s32, s32);

void func_80079374_ovl_01(s32 arg0, s32 arg1, s32 arg2) {
    S_80079374_ent *base = D_8011A31C_ovl_01;
    s32 idx = (s16)arg0;
    S_80079374_ent *p = base + idx;
    if (p->unk_28 != 0) {
        s32 t = ((s16)arg1 + (s16)arg2) >> 1;
        p->unk_02 = t;
        p->unk_00 = t;
        func_80079290_ovl_01(idx, arg1, arg2);
    }
}

/* ---- func_80087D04_ovl_01 ---- */
extern s32 D_80129E34_ovl_01;
extern u8 D_8013A290[];
void func_80007F50(void *);
s32 func_800082D0(void *, void *, s32);

void func_80087D04_ovl_01(s32 arg0) {
    u8 *p = (u8 *)((arg0 * 0x68) + (s32)&D_80129E34_ovl_01);
    if (func_800082D0(D_8013A290, p, arg0) == 0) {
        func_80007F50(p);
        func_80007F50(p);
        func_80007F50(p);
    }
}
