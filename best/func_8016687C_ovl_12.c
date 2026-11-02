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

s32 func_80166678_ovl_12(void *, M2C_UNK);          /* extern */
extern M2C_UNK D_800C7650_ovl_01;

u8 func_8016687C_ovl_12(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C8) == 0) {
        if (func_80166678_ovl_12(arg0, 0) == 0) {
            if (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A5C) & 0x10000000) {
                if (func_80166678_ovl_12(arg0, 1) != 0) {
                    goto block_4;
                }
                /* Duplicate return node #6. Try simplifying control flow for better match */
                return 0U;
            }
            /* Duplicate return node #6. Try simplifying control flow for better match */
            return 0U;
        }
block_4:
        return M2C_FIELD(arg0, u8 *, 0x2BA);
    }
    return 0U;
}
