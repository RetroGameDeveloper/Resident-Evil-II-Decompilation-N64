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
M2C_UNK func_8017BB68_ovl_02(s8);                   /* extern */
s32 func_8017BE48_ovl_02(s8);                       /* extern */
extern M2C_UNK D_80184E4C_ovl_02;
extern M2C_UNK D_80184E8C_ovl_02;

s32 func_8017F96C_ovl_02(void) {
    M2C_UNK *var_v1_2;
    s32 var_a0;
    s32 var_v1;
    s8 temp_s0;
    void *temp_v0;

    var_a0 = func_8017BB30_ovl_02(5);
    if (var_a0 < 0x1F) {
        var_v1_2 = &D_80184E4C_ovl_02;
    } else {
        var_a0 = func_8017BB30_ovl_02(0xA) - 0x3E0;
        var_v1_2 = &D_80184E8C_ovl_02;
    }
    temp_v0 = (var_a0 * 2) + var_v1_2;
    temp_s0 = M2C_FIELD(temp_v0, s8 *, 0);
    func_8017BB68_ovl_02(M2C_FIELD(temp_v0, s8 *, 1));
    var_v1 = 0;
    if (temp_s0 != 0) {
        var_v1 = func_8017BE48_ovl_02(temp_s0);
        if (!((var_v1 >> (temp_s0 - 1)) & 1)) {
            var_v1 = (var_v1 + 1) - (1 << temp_s0);
        }
    }
    return var_v1;
}
