extern s16 D_800F9DE0_ovl_01[30];

void func_80165138_ovl_15(void) {
    u32 i;

    for (i = 0; i < 30; i++) {
        D_800F9DE0_ovl_01[i] = (s16)(D_800F9DE0_ovl_01[i] / 6);
    }
}
