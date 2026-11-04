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

void func_80166C94_ovl_26(void *arg0, s32 arg1, s16 arg2) {
    func_80066804_ovl_01(M2C_FIELD(arg0, s32 *, 0x234) + (arg1 * 0x178) + 0x4C, arg2, 1 << M2C_FIELD(arg0, u8 *, 0x1A2), 0x400);
}
