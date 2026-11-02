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

void *func_8004279C_ovl_01(void *arg0, void *arg1, void *arg2) {
    M2C_ERROR(/* unknown instruction: dadd $t8, $t8, $t9 */);
    M2C_FIELD(arg2, s16 *, 0) = (s16) ((s64) M2C_ERROR(/* unknown instruction: dadd $t8, $t8, $t9 */) >> 0xC);
    M2C_ERROR(/* unknown instruction: dadd $t8, $t8, $t9 */);
    M2C_FIELD(arg2, s16 *, 2) = (s16) ((s64) M2C_ERROR(/* unknown instruction: dadd $t8, $t8, $t9 */) >> 0xC);
    M2C_ERROR(/* unknown instruction: dadd $t8, $t8, $t9 */);
    M2C_FIELD(arg2, s16 *, 4) = (s16) ((s64) M2C_ERROR(/* unknown instruction: dadd $t8, $t8, $t9 */) >> 0xC);
    return arg2;
}
