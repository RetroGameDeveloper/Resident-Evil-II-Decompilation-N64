/* identical to func_8017208C_overlay_045 (matched), with its names changed by decompdecomp */
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

s32 func_801649F8_ovl_17();
s32 func_80166FBC_ovl_17();

void func_801654FC_ovl_17(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s8 *, 0x2D7) = 0x14;
    func_80166FBC_ovl_17(arg0, 0, 0xA);
    M2C_FIELD(arg0, s8 *, 5) = 7;
    func_801649F8_ovl_17(arg0, arg1, arg2);
}
