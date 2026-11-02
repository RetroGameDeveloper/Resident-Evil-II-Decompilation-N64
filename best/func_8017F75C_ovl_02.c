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
extern M2C_UNK D_80184C2C_ovl_02;
extern M2C_UNK D_80184C6C_ovl_02;
extern M2C_UNK D_80184CEC_ovl_02;
extern s32 D_80185700_ovl_02;

s8 func_8017F75C_ovl_02(void) {
    M2C_UNK *var_v0;
    s32 var_s0;
    void *temp_s0;

    var_s0 = func_8017BB30_ovl_02(9);
    if (var_s0 < 0x80) {
        if (var_s0 >= 8) {
            var_s0 = var_s0 >> 1;
            var_v0 = &D_80184C6C_ovl_02;
            goto block_8;
        }
        if (var_s0 > 0) {
            var_v0 = &D_80184CEC_ovl_02;
            goto block_8;
        }
        D_80185700_ovl_02 = 1;
        return 0;
    }
    var_s0 = var_s0 >> 4;
    var_v0 = &D_80184C2C_ovl_02;
block_8:
    temp_s0 = (var_s0 * 2) + var_v0;
    func_8017BB68_ovl_02(M2C_FIELD(temp_s0, s8 *, 1));
    return M2C_FIELD(temp_s0, s8 *, 0);
}
