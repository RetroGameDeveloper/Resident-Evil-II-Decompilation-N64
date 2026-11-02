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

M2C_UNK func_80001510(void *, void *, void *);      /* extern */

void *func_800015E0(void *arg0, s32 arg1, s32 arg2) {
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = M2C_FIELD(arg0, void *(**)(s32, M2C_UNK, s32), 0x20)(M2C_FIELD(arg0, s32 *, 0x28), 1, 0x3C);
    if (temp_v0 != NULL) {
        temp_v0_2 = M2C_FIELD(arg0, void *(**)(s32, M2C_UNK, s32), 0x20)(M2C_FIELD(arg0, s32 *, 0x28), 1, arg2);
        M2C_FIELD(temp_v0, void **, 0x24) = temp_v0_2;
        if (temp_v0_2 != NULL) {
            M2C_FIELD(temp_v0, void **, 0x28) = (void *) (temp_v0_2 + arg2);
            M2C_FIELD(temp_v0, s32 *, 0x34) = arg1;
            M2C_FIELD(temp_v0, s32 *, 0) = 0;
            func_80001510(temp_v0, arg0, temp_v0 + 0x38);
            return temp_v0;
        }
        M2C_FIELD(arg0, M2C_UNK (**)(s32, void *), 0x24)(M2C_FIELD(arg0, s32 *, 0x28), temp_v0);
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return NULL;
    }
    return NULL;
}
