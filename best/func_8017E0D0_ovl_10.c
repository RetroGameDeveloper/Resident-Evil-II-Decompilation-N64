typedef union { u64 q; struct { u32 hi; u32 lo; } w; } U64;
typedef union { u8 *p; u32 a; } UP;

extern s32 D_800C527C_ovl_01;
extern u8 D_800C7650_ovl_01;
extern s8 D_8017E6B4_ovl_10;
extern u8 D_8017E864_ovl_10;

s32 func_8003997C_ovl_01(s32, s32, s32);
s32 func_800479F8_ovl_01(s32, void *, s32, s32);
void func_8017E18C_ovl_10(s32);

void func_8017E0D0_ovl_10(void) {
    U64 u;
    UP v;
    u8 *base;
    u8 *tbl;
    u32 arg;

    u.w.lo = (u32)&D_800C7650_ovl_01;
    u.w.hi = 0x18000;
    base = (u8 *)(u.w.lo + u.w.hi);

    v.p = &D_8017E864_ovl_10;
    tbl = v.p;

    if (!(*(u32 *)(base + 0x1A3C) & 0x100) &&
        (*(u32 *)(base + 0x1A5C) & 0x10000000) &&
        (*(u8 *)(*(u32 *)(base + 0x1D3C) + 4) == 3)) {
        D_8017E6B4_ovl_10 = 1;
    }

    func_800479F8_ovl_01(D_800C527C_ovl_01 + 0x3B800, tbl, 0x14CF, 0);
    arg = *(u32 *)(tbl + 0x18) + 0x200;
    func_8003997C_ovl_01(arg, arg, 0x100);
    func_8017E18C_ovl_10(0xC68);
}
