typedef union { u64 q; struct { u32 lo; u32 hi; } w; } U64_ovl_03;
extern s32 D_800C5278_ovl_01;
extern s32 D_8016141C_ovl_03[7];
extern s32 D_80161400_ovl_03[7];
extern s32 D_80161490_ovl_03;
s32 func_800479F8_ovl_01(s32, void *, s32, s32);
void func_800269B8_ovl_01(s32);
void func_80026948_ovl_01(s32);

void func_8015B204_ovl_03(void) {
    s32 v;
    u32 saddr;
    u32 daddr;
    U64_ovl_03 bs;
    U64_ovl_03 bd;
    u8 *s;
    u8 *d;
    v = func_800479F8_ovl_01(D_800C5278_ovl_01, D_8016141C_ovl_03, 0x14CC, 1);
    saddr = (u32)D_8016141C_ovl_03;
    bs.q = (u64)saddr;
    s = (u8 *)bs.w.lo;
    daddr = (u32)D_80161400_ovl_03;
    bd.q = (u64)daddr;
    d = (u8 *)bd.w.lo;
    *(u64 *)d = *(u64 *)s;
    *(u64 *)(d + 8) = *(u64 *)(s + 8);
    *(u64 *)(d + 0x10) = *(u64 *)(s + 0x10);
    *(u32 *)(d + 0x18) = *(u32 *)(s + 0x18);
    D_80161490_ovl_03 = v;
    *(s32 *)(d + 0x14) += 0x100;
    func_800269B8_ovl_01(0);
    func_80026948_ovl_01(0x14BA);
}
