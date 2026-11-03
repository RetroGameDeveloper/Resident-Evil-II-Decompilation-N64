extern volatile u16 D_80171C28_ovl_07[];
extern volatile u8 D_80171D2A_ovl_07;
extern s32 func_80026948_ovl_01(s32);

void func_80171188_ovl_07(u32 a) {
    s32 r;
    func_80026948_ovl_01(D_80171C28_ovl_07[a & 0xFF]);
    if (r == -1)
        D_80171D2A_ovl_07 |= 1;
}
