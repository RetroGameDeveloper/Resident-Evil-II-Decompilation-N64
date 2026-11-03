typedef struct {
    s16 unk0;
    s16 unk2;
    u8 pad4[0x24];
    s8 unk28;
    u8 pad29[0x13];
} Ent;

extern Ent D_8011A31C_ovl_01[];
extern void func_80079290_ovl_01(s32, s32, s32, void *);

void func_80079374_ovl_01(s32 arg0, s32 arg1, s32 arg2)
{
    Ent *base = D_8011A31C_ovl_01;
    s32 idx = (s16)arg0;
    Ent *p = base + idx;
    if (p->unk28 != 0) {
        s32 v = ((s16)arg1 + (s16)arg2) >> 1;
        p->unk2 = v;
        p->unk0 = v;
        func_80079290_ovl_01(idx, arg1, arg2, p);
    }
}
