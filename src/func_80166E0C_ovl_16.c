/* identical to func_80162944_ovl_23 (matched), with its names changed by decompdecomp */
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

M2C_UNK func_800377B0_ovl_01(s32, s16, s32, s32);   /* extern */

void func_80166E0C_ovl_16(void *arg0, s32 arg1, s32 arg2, s32 arg3, s16 arg4, s32 arg5, s32 arg6) {
    func_800377B0_ovl_01((arg1 << 0x18) | (arg2 << 0x10) | arg3, arg4, M2C_FIELD(arg0, s32 *, 0x234) + (arg5 * 0x178) + 0x38, arg6);
}
