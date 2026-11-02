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

M2C_UNK func_80164E08_ovl_26(void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80166B18_ovl_26(void *, M2C_UNK, M2C_UNK, u32); /* extern */

void func_801651F8_ovl_26(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    M2C_UNK var_a1;

    if (M2C_FIELD(arg0, u8 *, 6) == 0) {
        if (((M2C_FIELD(arg0, u8 *, 0x26E) % 3) & 0xFF) || (var_a1 = 5, (M2C_FIELD(arg0, u8 *, 0x2D9) != 0))) {
            var_a1 = 0xB;
        }
        func_80166B18_ovl_26(arg0, var_a1, 2, MULTU_HI(M2C_FIELD(arg0, u8 *, 0x26E), 0xAAAAAAAB));
    }
    func_80164E08_ovl_26(arg0, arg1, arg2);
}
