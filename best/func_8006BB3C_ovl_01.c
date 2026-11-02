extern s32 D_80113770_ovl_01;
extern s32 *D_8011277C_ovl_01;
extern s32 *D_801129BC_ovl_01;
extern u8 D_80139EF0;
void func_8000C9E0(void *, s32 *, s32);

void func_8006B3A4_ovl_01(s32 arg0) {
    D_80113770_ovl_01 = arg0;
}

u32 func_8006B394_ovl_01(u32 arg0, u32 arg1) {
    return (arg0 < arg1) ? (arg1 - arg0) : (arg1 - arg0);
}

s32 func_8006BB3C_ovl_01(s32 arg0) {
    s32 sp10;
    s32 base;

    if (arg0 == 1) return 0;
    if (arg0 < 0) return (s32)D_801129BC_ovl_01;
    base = arg0;
    if (base == 0) {
        base = 1;
        D_8011277C_ovl_01 = D_801129BC_ovl_01;
    }
    do {
        func_8000C9E0(&D_80139EF0, &sp10, 1);
    } while (sp10 < base + (s32)D_8011277C_ovl_01);
    D_8011277C_ovl_01 = D_801129BC_ovl_01;
}
