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

s32 func_8017BB30_ovl_02(M2C_UNK);                  /* extern */
s32 func_8017BB4C_ovl_02();                         /* extern */
M2C_UNK func_8017BB68_ovl_02(s8);                   /* extern */
extern M2C_UNK D_80184BF4_ovl_02;
extern M2C_UNK D_80184C04_ovl_02;
extern M2C_UNK D_80184C14_ovl_02;
extern s32 D_80185700_ovl_02;

s8 func_8017F63C_ovl_02(void) {
    M2C_UNK *var_v0_2;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_v1;
    s8 *var_s0;
    s8 var_v0;

    var_v0 = 0;
    if (func_8017BB4C_ovl_02() == 0) {
        temp_v0 = func_8017BB30_ovl_02(9);
        if (temp_v0 >= 0x40) {
            var_v1 = temp_v0 >> 6;
            var_v0_2 = &D_80184BF4_ovl_02;
            goto block_3;
        }
        if (temp_v0 < 0x18) {
            temp_v1 = temp_v0 - 0xC;
            if (temp_v1 >= 0) {
                var_s0 = (temp_v1 * 2) + &D_80184C14_ovl_02;
                func_8017BB68_ovl_02(M2C_FIELD(var_s0, s8 *, 1));
                if (func_8017BB4C_ovl_02() != 0) {
                    goto block_14;
                }
                goto block_15;
            }
            D_80185700_ovl_02 = 1;
            return 0;
        }
        var_v1 = temp_v0 >> 3;
        var_v0_2 = &D_80184C04_ovl_02;
block_3:
        var_s0 = (var_v1 * 2) + var_v0_2;
        func_8017BB68_ovl_02(M2C_FIELD(var_s0, s8 *, 1));
        if (func_8017BB4C_ovl_02() != 0) {
block_14:
            return -*var_s0;
        }
block_15:
        var_v0 = *var_s0;
        /* Duplicate return node #16. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
