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

M2C_UNK func_80089D34_ovl_01(M2C_UNK);              /* extern */

void func_80166138_ovl_17(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1E8) = 0x0D000700;
    func_80089D34_ovl_01(0x200);
    func_80167608_ovl_17(arg0, 0x2002, (func_80033634_ovl_01() & 3) + 6);
    func_80166FBC_ovl_17(arg0, 0x13, 1);
    func_801661C8_ovl_17(arg0);
    M2C_FIELD(arg0, s32 *, 4) = 0x07000000;
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x42);
    if (M2C_FIELD(arg0, s8 *, 0x2D6) < 0) {
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s16 *, 0x1A8) + 0x46);
    }
}
