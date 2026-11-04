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

M2C_UNK func_8002751C_ovl_01(M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_8004CA04_ovl_01();                     /* extern */
M2C_UNK func_8004CCD8_ovl_01(M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_8004CE44_ovl_01(M2C_UNK);              /* extern */
M2C_UNK func_8006BB3C_ovl_01(M2C_UNK);              /* extern */
M2C_UNK func_8006BC70_ovl_01(M2C_UNK);              /* extern */
M2C_UNK func_80075CA8_ovl_01();                     /* extern */
M2C_UNK func_80075CCC_ovl_01();                     /* extern */
M2C_UNK func_8008459C_ovl_01();                     /* extern */
extern s32 D_80012820;
extern M2C_UNK D_800C7650_ovl_01;
extern s8 D_800E91E1_ovl_01;

void func_800260D0_ovl_01(void) {
    M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x1825C) = 0;
    func_8006BC70_ovl_01(0);
    func_8006BB3C_ovl_01(0);
    func_8002751C_ovl_01(2, 1);
    func_8004CE44_ovl_01(0);
    func_8004CE44_ovl_01(1);
    func_80075CCC_ovl_01();
    func_80075CA8_ovl_01();
    func_800278AC_ovl_01();
    D_800E91E1_ovl_01 = 0;
    func_8004CA04_ovl_01();
    func_8008459C_ovl_01();
    D_80012820 = 0;
    func_8004CCD8_ovl_01(0, 1);
}
