extern s32 D_80185400_ovl_02;
extern s32 D_80185404_ovl_02;
extern s32 D_80185408_ovl_02;
extern s32 D_80134450_ovl_01;
extern s32 D_801344B0_ovl_01;

void func_801808D8_ovl_02(void) {
    if (D_80185400_ovl_02 != -1) {
        func_800B4064_ovl_01();
    }
    if (D_80185404_ovl_02 != -1) {
        func_800B4064_ovl_01();
    }
    if (D_80185408_ovl_02 != -1) {
        func_8018064C_ovl_02(D_80185408_ovl_02);
        D_80185408_ovl_02 = -1;
    }
    if (*((s32 *)&D_801344B0_ovl_01 + (D_80134450_ovl_01 * 0x112)) == 3) {
        func_800B2148_ovl_01(&D_801344B0_ovl_01);
    }
}
