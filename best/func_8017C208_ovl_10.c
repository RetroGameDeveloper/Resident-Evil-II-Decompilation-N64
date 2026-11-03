typedef struct S_func_8017C208_ovl_10 {
    u16 unk_00;
    u16 unk_02;
    u16 unk_04;
    u8 pad_06[0x2E - 0x06];
    s16 unk_2E;
    s32 unk_30;
    u8 pad_34[0x35 - 0x34];
    u8 unk_35;
    u8 pad_36[0x3C - 0x36];
    u8 *unk_3C;
} S_func_8017C208_ovl_10;

void func_8017E18C_ovl_10(s32);
void func_8017C5E4_ovl_10(void);
extern S_func_8017C208_ovl_10 D_8017E680_ovl_10;

void func_8017C208_ovl_10(void) {
    union { u64 q; S_func_8017C208_ovl_10 *w; } b;
    S_func_8017C208_ovl_10 *p;
    u16 t, n;
    b.q = (u64)&D_8017E680_ovl_10;
    p = (S_func_8017C208_ovl_10 *)(u32)b.q;
    if (p->unk_35 == 0) {
        func_8017E18C_ovl_10(0xC68);
        p->unk_35 = 1;
    }
    func_8017C5E4_ovl_10();
    t = p->unk_04 + 1;
    p->unk_04 = t;
    if (*(u16 *)(p->unk_3C + 0x14) < (s16)t) {
        n = p->unk_02;
        p->unk_30 = 0;
        p->unk_2E = 0;
        D_8017E680_ovl_10.unk_00 = 0;
        p->unk_04 = 0;
        p->unk_02 = n + 1;
    }
}
