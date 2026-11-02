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

M2C_UNK func_8000E9D0(M2C_UNK);                     /* extern */
extern u8 D_80112794_ovl_01;

void func_8006BE40_ovl_01(void) {
    M2C_UNK var_a0;
    M2C_UNK var_a0_2;
    M2C_UNK var_a0_3;
    M2C_UNK var_a0_4;

    var_a0 = 2;
    if (D_80112794_ovl_01 & 1) {
        var_a0 = 1;
    }
    func_8000E9D0(var_a0);
    var_a0_2 = 8;
    if (D_80112794_ovl_01 & 2) {
        var_a0_2 = 4;
    }
    func_8000E9D0(var_a0_2);
    var_a0_3 = 0x20;
    if (D_80112794_ovl_01 & 4) {
        var_a0_3 = 0x10;
    }
    func_8000E9D0(var_a0_3);
    var_a0_4 = 0x80;
    if (D_80112794_ovl_01 & 8) {
        var_a0_4 = 0x40;
    }
    func_8000E9D0(var_a0_4);
}
