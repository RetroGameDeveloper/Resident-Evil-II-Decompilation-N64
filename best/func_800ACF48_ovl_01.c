void func_800A5618_ovl_01(void);
void func_800A5660_ovl_01(void);

typedef struct {
    s32 unk0;
    u16 unk4;
    u16 unk6;
    u16 unk8;
    u16 unkA;
} T_801529A0;

extern s32 D_80152990;
extern T_801529A0 D_801529A0[];

s32 func_800ACF48_ovl_01(s32 arg0) {
    T_801529A0 *tbl;
    s32 i;
    s32 n;

    func_800A5618_ovl_01();
    n = D_80152990;
    tbl = D_801529A0;
    for (i = 0; i < n; i++) {
        if (tbl[i].unk4 == (u16)arg0) {
            break;
        }
    }
    if (i != D_80152990) {
        T_801529A0 *e = &D_801529A0[i];
        if (--e->unk8 == 0) {
            s32 j;
            for (j = i + 1; j < D_80152990; j++) {
                D_801529A0[j - 1] = D_801529A0[j];
            }
            D_80152990--;
            func_800A5660_ovl_01();
            return 1;
        }
    }
    func_800A5660_ovl_01();
    return 0;
}
