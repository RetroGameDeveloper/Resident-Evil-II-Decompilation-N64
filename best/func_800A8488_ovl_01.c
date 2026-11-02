extern s16 D_80147F70;
extern u8 D_801362B1_ovl_01;
extern u8 D_801362B0_ovl_01;
extern s32 D_80143FB0;
void func_800A5618_ovl_01(void);
void func_800A5660_ovl_01(void);
void func_800A5A00_ovl_01(s32, s32, s32, s32, s32);

void func_800A8C88_ovl_01(void) {
    D_80147F70 = 0;
}

void func_800A85AC_ovl_01(void) {
    D_801362B1_ovl_01 = 0x2A;
}

void func_800A943C_ovl_01(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4) {
    if (D_801362B0_ovl_01 != 0) {
        if (arg0 != -1) {
            func_800A5618_ovl_01();
            func_800A5A00_ovl_01(arg0, (arg1 & 0xFF) << 16, (arg2 & 0xFF) << 16,
                                 (arg3 & 0xFF) << 16, (arg4 & 0xFF) << 16);
            func_800A5660_ovl_01();
        }
    }
}

s32 func_800A8488_ovl_01(u8 *arg0) {
    s32 idx;

    if (arg0[0x4B] != 0xFF) {
        idx = arg0[0x4B] << 2;
    } else {
        idx = 0x20;
    }
    return *(s32 *)((u8 *)&D_80143FB0 + idx);
}
