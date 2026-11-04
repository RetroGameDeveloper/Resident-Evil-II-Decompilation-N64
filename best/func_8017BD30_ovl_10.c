typedef struct {
    s16 unk_00;
    u16 unk_02;
    s16 unk_04;
    s16 unk_06;
    s32 unk_08;
    u8 unk_0C[0x28 - 0x0C];
    s32 unk_28;
    u16 unk_2C;
    s16 unk_2E;
    s32 unk_30;
    s16 unk_34;
    s16 unk_36;
    u16 unk_38;
    u8 unk_3A[2];
    u8 *unk_3C;
    s32 unk_40;
    s32 unk_44;
    s32 unk_48;
    s32 unk_4C;
    s32 unk_50;
} S_state_ovl_10;

typedef union { u64 q; struct { u32 hi; u32 lo; } w; } U64_ovl_10;

extern S_state_ovl_10 D_8017E680_ovl_10;
extern u8 D_8017E4B0_ovl_10[];
extern u8 D_800C7650_ovl_01[];

void func_8017C1B4_ovl_10(void);
void func_8017BDEC_ovl_10(void);
void func_8017C0E8_ovl_10(void);
void func_8017C5E4_ovl_10(void);

void func_8017BD30_ovl_10(void) {
    U64_ovl_10 bs, bt;
    S_state_ovl_10 *d;
    u8 *tbl;
    u8 *p;
    s32 *pos;
    u16 t;

    bs.q = (u64)&D_8017E680_ovl_10;
    d = (S_state_ovl_10 *)(u32)bs.q;
    bt.w.hi = 0x18000;
    bt.w.lo = (u32)D_800C7650_ovl_01;
    tbl = (u8 *)(bt.w.lo + bt.w.hi);

    d->unk_28 = 0xBB8;
    d->unk_04 = 0;
    d->unk_30 = 0;
    D_8017E680_ovl_10.unk_00 = 8;
    d->unk_36 = 1;
    d->unk_2E = 0x10;
    t = *(u16 *)(tbl + 0x1AE6);
    p = *(u8 **)(tbl + 0x1CB4);
    d->unk_3C = D_8017E4B0_ovl_10;
    p += 0x38;
    d->unk_2C = t;
    pos = &d->unk_08;
    pos[2] = *(s32 *)(p + 0x18) - 0x3E8;
    pos[4] = *(s32 *)(p + 0x14);
    pos[6] = *(s32 *)(p + 0x1C);
    pos[5] = *(s32 *)(p + 0x18) - 0x12C;
    func_8017C1B4_ovl_10();
    func_8017BDEC_ovl_10();
    func_8017C0E8_ovl_10();
    func_8017C5E4_ovl_10();
}
