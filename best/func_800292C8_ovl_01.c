typedef struct S_800292C8_tbl {
    void *(*f0)(void *, s32, s32);
    s32 (*f1)(void *, s32, s32);
} S_800292C8_tbl;

typedef struct S_800292C8_inner {
    void (*fn)(void *);
    u8 pad[0x10];
    s32 unk14;
} S_800292C8_inner;

typedef struct S_800292C8_arg0 {
    S_800292C8_inner *unk00;
    S_800292C8_tbl *tbl;
    u8 pad08[0x164];
    void *unk16C;
} S_800292C8_arg0;

extern u8 D_80029000_ovl_01;

void func_800292C8_ovl_01(S_800292C8_arg0 *a, s32 b) {
    void *p = a->tbl->f0(a, 1, 0x60);
    s32 *q;
    s32 val;
    s32 i;

    a->unk16C = p;
    *(void **)p = &D_80029000_ovl_01;

    if (b) {
        a->unk00->unk14 = 4;
        a->unk00->fn(a);
    } else {
        val = a->tbl->f1(a, 1, 0x500) + 0x480;
        i = 9;
        q = (s32 *)((u8 *)p + 0x24);
        do {
            *(s32 *)((u8 *)q + 0x10) = val;
            val -= 0x80;
            i--;
            q--;
        } while (i >= 0);
        *(s32 *)((u8 *)p + 0x38) = 0;
    }
}
