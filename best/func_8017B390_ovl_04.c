extern s32 D_800E90C0_ovl_01;
extern s32 D_800E90C4_ovl_01;
extern s32 D_800E91F0_ovl_01;
extern u32 D_8010BF48_ovl_01;
extern s32 D_80181E6C_ovl_04;
extern s32 D_80181E70_ovl_04;

s32 func_80025B0C_ovl_01(void);
void func_8004CEC0_ovl_01(s32);
void func_8004CEF4_ovl_01(s32);
void func_80026948_ovl_01(s32);
void func_800269B8_ovl_01(s32, s32);
void func_80026AC0_ovl_01(void);
void func_8004CE04_ovl_01(void);
void func_8017CE8C_ovl_04(void);

void func_8017B390_ovl_04(void) {
    u32 *p = &D_8010BF48_ovl_01;
    s32 *q = &D_80181E6C_ovl_04;
    s32 *r = &D_80181E70_ovl_04;
    *p = (*p << 1) | 1;
    *q = func_80025B0C_ovl_01();
    *r = D_800E91F0_ovl_01;
    func_8004CEC0_ovl_01(0);
    func_8017CE8C_ovl_04();
    func_8004CEF4_ovl_01(0);
    D_800E90C4_ovl_01 = -1;
    D_800E90C0_ovl_01 = -1;
    *p >>= 1;
    func_800269B8_ovl_01(*q, -1);
    func_80026948_ovl_01(*r);
    func_80026AC0_ovl_01();
    func_8004CE04_ovl_01();
}
