extern s32 D_800C5680_ovl_01;
extern s32 D_800E91F0_ovl_01;

void func_800269B8_ovl_01(s32);
void func_80026948_ovl_01(s32);
void func_80026AC0_ovl_01(void);

void func_80025D80_ovl_01(void) {
    func_800269B8_ovl_01(D_800C5680_ovl_01);
    func_80026948_ovl_01(D_800E91F0_ovl_01);
    func_80026AC0_ovl_01();
}
