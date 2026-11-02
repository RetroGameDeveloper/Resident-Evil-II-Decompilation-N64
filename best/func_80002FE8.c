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

M2C_UNK func_800022BC(s32, void *, M2C_UNK *);      /* extern */

s32 func_80002FE8(void *arg0) {
    M2C_UNK sp10;
    s32 temp_a0_2;
    s32 var_v0;
    void *temp_a0;

    if (arg0 != NULL) {
        temp_a0 = M2C_FIELD(arg0, void **, 0x1C);
        var_v0 = -2;
        if (temp_a0 != NULL) {
            if (M2C_FIELD(arg0, M2C_UNK (**)(s32, void *), 0x24) == NULL) {
                goto block_3;
            }
            temp_a0_2 = M2C_FIELD(temp_a0, s32 *, 0x14);
            if (temp_a0_2 != 0) {
                func_800022BC(temp_a0_2, arg0, &sp10);
            }
            M2C_FIELD(arg0, M2C_UNK (**)(s32, void *), 0x24)(M2C_FIELD(arg0, s32 *, 0x28), M2C_FIELD(arg0, void **, 0x1C));
            var_v0 = 0;
            M2C_FIELD(arg0, void **, 0x1C) = NULL;
            /* Duplicate return node #7. Try simplifying control flow for better match */
            return var_v0;
        }
        return var_v0;
    }
block_3:
    return -2;
}
