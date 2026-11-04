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

M2C_UNK func_80032C08_ovl_01(void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */
M2C_UNK func_80089D34_ovl_01(M2C_UNK);              /* extern */
M2C_UNK func_80165A08_ovl_17(void *);               /* extern */
M2C_UNK func_80166FBC_ovl_17(void *, M2C_UNK, M2C_UNK); /* extern */
s32 func_80167974_ovl_17(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_8016590C_ovl_17(void *arg0) {
    M2C_UNK var_a1;
    u8 temp_v1;
    void *temp_s1;

    temp_s1 = arg0 + 0x2B4;
    func_80089D34_ovl_01(0x200);
    func_80032C08_ovl_01(arg0, 0, 0);
    M2C_FIELD(arg0, u16 *, 0x1E2) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E2) + 0x28);
    if (func_80167974_ovl_17(arg0, 0, 0, 0) != 0) {
        var_a1 = 5;
        M2C_FIELD(arg0, s8 *, 6) = 2;
        M2C_FIELD(arg0, s32 *, 0) = (s32) ((M2C_FIELD(arg0, s32 *, 0) & 0xE7FFFFFF) | 0x04000000);
        M2C_FIELD(temp_s1, s8 *, 0xA) = 0;
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x42);
        if (M2C_FIELD(arg0, s8 *, 0x2D6) < 0) {
            var_a1 = 6;
        }
        func_80077D48_ovl_01(var_a1, arg0);
        func_80165A08_ovl_17(arg0);
        if (M2C_FIELD(temp_s1, s8 *, 0x22) < 0) {
            temp_v1 = M2C_FIELD(temp_s1, u8 *, 0x24);
            if (((s32) temp_v1 >= 9) && (((s32) temp_v1 < 0xB) || (temp_v1 == 0x10))) {
                func_80166FBC_ovl_17(arg0, 0, 7);
            }
        }
    }
}
