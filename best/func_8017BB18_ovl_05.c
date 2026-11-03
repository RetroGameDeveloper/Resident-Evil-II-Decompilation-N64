extern u8 D_800C7650_ovl_01[];
extern u8 D_8017E53F_ovl_05;
extern u8 D_8017E549_ovl_05;
extern u8 D_8017E54C_ovl_05;
extern s32 D_8017E4C8_ovl_05[];
extern s32 func_80077B0C_ovl_01(s32, s32);

typedef union { u64 q; struct { u32 lo; u32 hi; } w; } U64;

void func_8017BB18_ovl_05(void) {
    U64 b;
    u32 off;
    u8 *g;
    u8 *pf;
    s32 *tbl;

    if (D_8017E53F_ovl_05 & 0xC)
        return;
    off = 0x18000;
    b.w.lo = (u32)D_800C7650_ovl_01;
    g = (u8 *)(b.w.lo + off);
    if (*(u16 *)(g + 0x25E) & 0x100) {
        func_80077B0C_ovl_01(0x04050000, 0);
        pf = &D_8017E549_ovl_05;
        *pf = 2;
    } else {
        tbl = D_8017E4C8_ovl_05;
        ((void (*)(void))tbl[D_8017E54C_ovl_05])();
    }
}
