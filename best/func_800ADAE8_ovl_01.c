typedef struct S_func_800ADAE8_ovl_01_arg1 {
    u8 unk_00[9];
    s8 unk_09;
    u8 unk_0A[2];
} S_func_800ADAE8_ovl_01_arg1;

typedef struct S_80157DC0 {
    u16 unk_00;
    s16 unk_02;
    void *unk_04;
} S_80157DC0;

extern s32 D_80157DB0;
extern S_80157DC0 D_80157DC0[];

void func_800A5618_ovl_01(void);
void func_800A5660_ovl_01(void);

s32 func_800ADAE8_ovl_01(s32 arg0, S_func_800ADAE8_ovl_01_arg1 *arg1, s16 arg2) {
    s32 i;
    s32 count;
    s32 n;
    u16 id;
    S_80157DC0 *p;
    S_80157DC0 *entry;

    count = D_80157DB0;
    i = 0;
    if (count > 0) {
        id = arg0 & 0xFFFF;
        p = D_80157DC0;
    search:
        if (p->unk_00 == id) {
            goto found;
        }
        i++;
        p++;
        if (i < count) {
            goto search;
        }
    }
found:
    if (i == D_80157DB0 && i < 0x80) {
        func_800A5618_ovl_01();
        n = arg2 & 0xFFFF;
        entry = &D_80157DC0[D_80157DB0];
        entry->unk_00 = arg0;
        entry->unk_02 = arg2;
        entry->unk_04 = arg1;
        for (i = 0; i < n; i++) {
            arg1->unk_09 = 0x1F;
            arg1++;
        }
        D_80157DB0++;
        func_800A5660_ovl_01();
        return 1;
    }
    return 0;
}
