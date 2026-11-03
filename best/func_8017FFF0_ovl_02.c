extern s32 D_801853E0_ovl_02[];
extern s32 D_801853E4_ovl_02;
extern s32 D_801853E8_ovl_02;

s32 func_8017FFF0_ovl_02(s32 arg0) {
    s32 var_a1 = arg0;
    s32 old;
    s32 *tbl = D_801853E0_ovl_02;

    if (var_a1 & 0x3F) {
        var_a1 = (var_a1 + 0x40) & ~0xBF;
    }
    if ((u32)(var_a1 + D_801853E4_ovl_02) > 0x25800U) {
        D_801853E4_ovl_02 = 0;
        D_801853E8_ovl_02 = D_801853E8_ovl_02 + 1;
    }
    old = D_801853E4_ovl_02;
    D_801853E4_ovl_02 = old + var_a1;
    return tbl[D_801853E8_ovl_02] + old;
}
