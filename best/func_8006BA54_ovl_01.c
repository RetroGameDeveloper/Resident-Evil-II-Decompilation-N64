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

M2C_UNK func_8000C9E0(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_8006B40C_ovl_01(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_8006B6E4_ovl_01();                     /* extern */
M2C_UNK func_8006B8D0_ovl_01();                     /* extern */
extern s8 D_80112721_ovl_01;
extern M2C_UNK D_80112908_ovl_01;
extern M2C_UNK D_801129C4_ovl_01;
extern s32 D_80113774_ovl_01;
extern M2C_UNK (*func_80112778_ovl_01)();

void func_8006BA54_ovl_01(void) {
    func_8000C9E0(&D_801129C4_ovl_01, 0, 1);
    if (M2C_FIELD(&D_80112908_ovl_01, u8 *, 4) == 0) {
        D_80113774_ovl_01 = 0;
        func_8006B40C_ovl_01(4, 0, 1);
        D_80112721_ovl_01 = 4;
        M2C_FIELD(&D_80112908_ovl_01, u8 *, 4) = 1U;
        if (func_80112778_ovl_01 != NULL) {
            func_80112778_ovl_01();
        }
        M2C_FIELD(&D_80112908_ovl_01, u8 *, 4) = 4U;
        if (D_80113774_ovl_01 == 0) {
            M2C_FIELD(&D_80112908_ovl_01, u8 *, 4) = 8U;
        }
        D_80112721_ovl_01 = 0xA;
        func_8006B6E4_ovl_01();
        func_8006B8D0_ovl_01();
        func_8006B40C_ovl_01(4, 0, 2);
    }
}
