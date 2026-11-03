typedef struct S_8014E180_ent {
    s32 unk0;
    u16 unk4;
    u16 unk6;
} S_8014E180_ent;

extern s32 D_8014E170_ovl_01;
extern S_8014E180_ent D_8014E180_ovl_01[];

void func_800A5618_ovl_01(void);
void func_800A5660_ovl_01(void);

s32 func_800AD060_ovl_01(s16 arg0, s32 arg1) {
    u32 id;
    s32 i;
    s32 cnt;
    s32 j;
    S_8014E180_ent *p;
    S_8014E180_ent *e;

    func_800A5618_ovl_01();
    i = 0;
    cnt = D_8014E170_ovl_01;
    if (cnt > 0) {
        id = arg0 & 0xFFFF;
        p = D_8014E180_ovl_01;
loop2:
        if ((u16)p->unk4 < id) {
            i++;
            p++;
            if (i < cnt) goto loop2;
        }
        if (i < D_8014E170_ovl_01) {
            e = &D_8014E180_ovl_01[i];
            if ((u16)e->unk4 == id) goto found;
            if (D_8014E170_ovl_01 >= 0x800) goto overflow;
            j = D_8014E170_ovl_01 - 1;
            if (j >= i) {
                do {
                    D_8014E180_ovl_01[j + 1] = D_8014E180_ovl_01[j];
                    j--;
                } while (j >= i);
            }
            D_8014E170_ovl_01 = D_8014E170_ovl_01 + 1;
            goto insert;
        }
    }
    cnt = D_8014E170_ovl_01;
    if (cnt >= 0x800) goto overflow;
    D_8014E170_ovl_01 = cnt + 1;
    goto insert;
found:
    func_800A5660_ovl_01();
    e->unk6 = (u16)(e->unk6 + 1);
    return 0;
overflow:
    func_800A5660_ovl_01();
    return 0;
insert:
    e = &D_8014E180_ovl_01[i];
    e->unk4 = arg0;
    e->unk0 = arg1;
    e->unk6 = 1;
    func_800A5660_ovl_01();
    return 1;
}
