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

M2C_UNK func_8000CDF0(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_8000DB90(M2C_UNK *);                   /* extern */
M2C_UNK func_8000DCB0(M2C_UNK *);                   /* extern */
extern s32 D_80112768_ovl_01;
extern s32 D_8011276C_ovl_01;
extern M2C_UNK D_80112B90_ovl_01;
extern M2C_UNK D_80112D40_ovl_01;
extern M2C_UNK D_80112EF0_ovl_01;
extern M2C_UNK D_801130A0_ovl_01;
extern s32 D_80139E00;

void func_8006B8D0_ovl_01(void) {
    M2C_UNK *var_a0;
    M2C_UNK var_a1;

    if (D_80112768_ovl_01 == 0) {
        func_8000DCB0(&D_80112D40_ovl_01);
    } else {
        func_8000DB90(&D_80112D40_ovl_01);
    }
    if (D_8011276C_ovl_01 != 0) {
        func_8000CDF0(&D_80112D40_ovl_01, 0x1E);
        func_8000CDF0(&D_80112B90_ovl_01, 0x14);
        func_8000CDF0(&D_80112EF0_ovl_01, 0x15);
        var_a0 = &D_801130A0_ovl_01;
        var_a1 = 0x15;
    } else if (D_80139E00 & 8) {
        func_8000CDF0(&D_80112D40_ovl_01, 0x1E);
        func_8000CDF0(&D_80112B90_ovl_01, 0x14);
        func_8000CDF0(&D_80112EF0_ovl_01, 0x15);
        var_a0 = &D_801130A0_ovl_01;
        var_a1 = 0x15;
    } else {
        func_8000CDF0(&D_80112B90_ovl_01, 0x1E);
        func_8000CDF0(&D_80112EF0_ovl_01, 0x1F);
        func_8000CDF0(&D_801130A0_ovl_01, 0x1F);
        var_a0 = &D_80112D40_ovl_01;
        var_a1 = 0x14;
    }
    func_8000CDF0(var_a0, var_a1);
}
