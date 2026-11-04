extern void (*D_801717B0_ovl_07[])(void);
extern u8 D_80171D29_ovl_07;
void func_8016E850_ovl_07(void);
void func_8016FAC4_ovl_07(void);
void func_8004CDB8_ovl_01(s32);

void func_8016E800_overlay_066(void) {
    func_8016E850_ovl_07();
    while (1) {
        D_801717B0_ovl_07[D_80171D29_ovl_07]();
        func_8016FAC4_ovl_07();
        func_8004CDB8_ovl_01(1);
    }
}
