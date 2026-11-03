/* Partial candidate from function #265638 in project #68; rechecked locally. */
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

s32 func_80032B8C_ovl_01();
s32 func_80089D34_ovl_01();
s32 func_80166520_ovl_35();

void func_80163C90_ovl_35(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s16 *, 6) = 0x100;
    M2C_FIELD(arg0, s16 *, 0x64) = 0;
    M2C_FIELD(arg0, s32 *, 0) |= 4;
    func_80166520_ovl_35(arg0, 1);
    M2C_FIELD(arg0, s16 *, 0x1E0) = 0x30F;
    M2C_FIELD(arg0, s16 *, 0x1E4) = 0;
    func_80032B8C_ovl_01(arg0, 0);
    M2C_FIELD(arg0, s16 *, 0x68) = -0x400;
    M2C_FIELD(arg0, s32 *, 0x1E8) = 0x08000000;
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
}
