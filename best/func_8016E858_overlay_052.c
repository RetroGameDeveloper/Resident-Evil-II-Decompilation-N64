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

s32 func_80033A0C_ovl_01();
s32 func_80089D34_ovl_01();
s32 func_8016E92C_overlay_052();

void func_8016E858_overlay_052(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 4) = 0x01000000;
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x1000);
    M2C_FIELD(arg0, u8 *, 0x26F) = 0x80;
    M2C_FIELD(arg0, s32 *, 0) |= 0x44A;
    func_80033A0C_ovl_01(arg0 + 0x208, 0, 0, 0, arg0 + 0x28);
    func_8016E92C_overlay_052(arg0);
}
