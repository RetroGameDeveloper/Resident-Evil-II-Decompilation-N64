extern s32 D_801477E8;
extern s32 D_80147F40;
extern s32 D_80147F44;
extern u8 D_801362B0_ovl_01;
extern u8 D_80147A40[];
extern s32 D_80143FB0[];
void func_800A6BA4_ovl_01(void);

void func_800A8410_ovl_01(void) {
    if (D_80147F40 != 0) {
        D_801477E8 = D_80147F40 * 0x7D00 / D_80147F44 * 8;
        func_800A6BA4_ovl_01();
    }
}

s32 func_800A8304_ovl_01(s32 arg0) {
    u8 *p;

    p = (u8 *)((arg0 & 0xFF) * 0x28 + (s32)D_80147A40);
    if (*(u8 *)(p + 0x14) == 4)
        return 0;
    if (*(s32 *)(p + 0xC) == 0)
        return 0;
    if (*(s32 *)(p + 8) < 0)
        return 1;
    return 0;
}

void func_800A82CC_ovl_01(s32 arg0, u8 arg1) {
    if (D_801362B0_ovl_01 != 0) {
        *(u8 *)((arg0 & 0xFF) * 0x28 + (s32)D_80147A40 + 0x14) = arg1;
    }
}

void func_800A8278_ovl_01(s32 arg0, s32 arg1) {
    if ((arg1 & 0xFF) == 0xFF)
        arg1 = 8;
    D_80143FB0[arg1 & 0xFF] = (u32)((arg0 * 0x18) << 9) / 240;
}
