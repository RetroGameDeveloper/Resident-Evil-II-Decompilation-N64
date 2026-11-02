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

s32 func_80074D94_ovl_01(s32, s32);                 /* extern */

s32 func_80162C10_ovl_18(void *arg0) {
    s32 temp_a0;
    s32 temp_v0;

    temp_v0 = func_80074D94_ovl_01(M2C_FIELD(arg0, s32 *, 0x28), M2C_FIELD(arg0, s32 *, 0x30));
    temp_a0 = M2C_FIELD(arg0, s32 *, 0x2C);
    if (temp_a0 < M2C_FIELD(arg0, s16 *, 0x25E)) {
        if ((temp_a0 - 0xA) < temp_v0) {
            return 0;
        }
        return temp_v0;
    }
    return 1;
}
