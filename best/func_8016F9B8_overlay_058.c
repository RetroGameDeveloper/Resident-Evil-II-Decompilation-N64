extern volatile s32 D_80171D38_ovl_07;
extern volatile u16 D_80171D44_ovl_07;
void func_8017001C_ovl_07(s32, s32, s32);
void func_8016EC28_ovl_07(void);
void func_8016EAE4_ovl_07(void);
void func_80077460_ovl_01(s32, s32);

void func_8016F9B8_overlay_058(void) {
    if (D_80171D38_ovl_07 == 0xC8) {
        func_8017001C_ovl_07(4, 1, 0);
    }
    if (D_80171D38_ovl_07 == 0x1F4) {
        func_8017001C_ovl_07(4, 0, 0);
        D_80171D44_ovl_07 |= 0x2008;
        func_8016EC28_ovl_07();
    }
    if (D_80171D38_ovl_07 == 0x280) {
        func_8017001C_ovl_07(2, 5, 0);
    }
    if (D_80171D38_ovl_07 == 0x294) {
        func_8017001C_ovl_07(8, 1, 0);
    }
    if (D_80171D38_ovl_07 == 0x424) {
        func_8017001C_ovl_07(8, 0, 0);
        D_80171D44_ovl_07 |= 0x2008;
        func_8016EC28_ovl_07();
        func_80077460_ovl_01(0xB4, 0x18);
    }
    if (D_80171D38_ovl_07 == 0x4B0) {
        func_8016EAE4_ovl_07();
    }
    D_80171D38_ovl_07 += 1;
}
