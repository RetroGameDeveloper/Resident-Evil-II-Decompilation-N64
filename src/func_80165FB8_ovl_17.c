/* machine draft (m2c) for gcc-2.7.2-kmc -O2 -mips3 -mgp32 -mfp32 -G0 -mcpu=r4600, tried by autopilot */
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

void func_80165FB8_ovl_17(void *arg0, s32 arg1, s32 arg2) {
    if (M2C_FIELD(arg0, u8 *, 6) == 0) {
        func_80166FBC_ovl_17(arg0, 0x13, 1);
        func_801661C8_ovl_17(arg0);
        func_80167608_ovl_17(arg0, 0x2004, (func_80033634_ovl_01() & 3) + 6);
    }
    func_8016587C_ovl_17(arg0, arg1, arg2);
}
