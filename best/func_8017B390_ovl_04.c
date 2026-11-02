/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

s32 func_80025B0C_ovl_01();                         /* extern */
M2C_UNK func_80026948_ovl_01(s32);                  /* extern */
M2C_UNK func_800269B8_ovl_01(s32, M2C_UNK);         /* extern */
M2C_UNK func_80026AC0_ovl_01();                     /* extern */
M2C_UNK func_8004CE04_ovl_01();                     /* extern */
M2C_UNK func_8004CEC0_ovl_01(M2C_UNK);              /* extern */
M2C_UNK func_8004CEF4_ovl_01(M2C_UNK);              /* extern */
M2C_UNK func_8017CE8C_ovl_04();                     /* extern */
extern s32 D_800E90C0_ovl_01;
extern s32 D_800E90C4_ovl_01;
extern s32 D_800E91F0_ovl_01;
extern u32 D_8010BF48_ovl_01;
extern s32 D_80181E6C_ovl_04;
extern s32 D_80181E70_ovl_04;

void func_8017B390_ovl_04(void) {
    D_8010BF48_ovl_01 = (D_8010BF48_ovl_01 * 2) | 1;
    D_80181E6C_ovl_04 = func_80025B0C_ovl_01();
    D_80181E70_ovl_04 = D_800E91F0_ovl_01;
    func_8004CEC0_ovl_01(0);
    func_8017CE8C_ovl_04();
    func_8004CEF4_ovl_01(0);
    D_800E90C4_ovl_01 = -1;
    D_800E90C0_ovl_01 = -1;
    D_8010BF48_ovl_01 = (u32) D_8010BF48_ovl_01 >> 1;
    func_800269B8_ovl_01(D_80181E6C_ovl_04, -1);
    func_80026948_ovl_01(D_80181E70_ovl_04);
    func_80026AC0_ovl_01();
    func_8004CE04_ovl_01();
}
