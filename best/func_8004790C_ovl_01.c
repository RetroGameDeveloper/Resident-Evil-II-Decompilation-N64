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

void func_8004790C_ovl_01(void *arg0, s16 arg1, s16 arg2, s16 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8) {
    M2C_FIELD(arg0, s16 *, 4) = arg1;
    M2C_FIELD(arg0, s16 *, 6) = arg2;
    M2C_FIELD(arg0, s16 *, 0xC) = arg3;
    M2C_FIELD(arg0, s16 *, 0xE) = (s16) arg4;
    M2C_FIELD(arg0, s16 *, 0x14) = (s16) arg5;
    M2C_FIELD(arg0, s16 *, 0x16) = (s16) arg6;
    M2C_FIELD(arg0, s16 *, 0x1C) = (s16) arg7;
    M2C_FIELD(arg0, s16 *, 0x1E) = (s16) arg8;
}
