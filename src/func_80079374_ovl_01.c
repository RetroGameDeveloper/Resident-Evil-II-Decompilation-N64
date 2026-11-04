typedef struct S_80079374_ent {
    s16 unk_00;
    s16 unk_02;
    u8  unk_04[0x24];
    s8  unk_28;
    u8  unk_29[0x13];
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
