/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2 -mcpu=r4600, tried by autopilot */
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

M2C_UNK func_800B2038_ovl_01(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_800793D4_ovl_01(s16 arg0) {
    func_800B2038_ovl_01(((s32) ((u8) D_80119E13_ovl_01 * arg0) >> 7) & 0xFF, 0, 0, 1);
    func_800B2038_ovl_01(((s32) ((u8) D_80119E14_ovl_01 * arg0) >> 7) & 0xFF, 0, 1, 0);
}
