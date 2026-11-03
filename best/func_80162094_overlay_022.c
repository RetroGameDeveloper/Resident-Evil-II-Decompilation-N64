s32 func_80059E30_ovl_01(s32, s32);
extern s32 D_800E10D4_ovl_01;

void func_80162094_overlay_022(s32 arg0) {
    if (func_80059E30_ovl_01(arg0, 0) & 2) {
        D_800E10D4_ovl_01 = 0x03000000;
    }
}
