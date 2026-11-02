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

extern void *D_801583D0;

s32 func_800AF074_ovl_01(u32 arg0) {
    u32 temp_v0;
    void *var_v0;
    void *var_v1;

    if (arg0 != -1U) {
        var_v1 = D_801583D0;
        var_v0 = NULL;
        if (var_v1 != NULL) {
loop_2:
            temp_v0 = M2C_FIELD(var_v1, u32 *, 8);
            if (temp_v0 != arg0) {
                var_v0 = NULL;
                if (arg0 >= temp_v0) {
                    var_v1 = M2C_FIELD(var_v1, void **, 0);
                    if (var_v1 != NULL) {
                        goto loop_2;
                    }
                }
            } else {
                var_v0 = var_v1;
            }
        }
        if (var_v0 != NULL) {
            return M2C_FIELD(var_v0, s32 *, 0xC);
        }
        /* Duplicate return node #8. Try simplifying control flow for better match */
        return -1;
    }
    return -1;
}
