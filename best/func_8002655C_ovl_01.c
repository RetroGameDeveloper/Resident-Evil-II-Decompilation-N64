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

extern s32 D_80026648_ovl_01;
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E9118_ovl_01;

void func_8002655C_ovl_01(void) {
    func_80042A54_ovl_01();
    func_8004CA48_ovl_01();
    func_80004A20();
    M2C_FIELD(&D_800C7650_ovl_01, s8 *, 0x21962) = 0;
    M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) = (s32) (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) | 0x40);
    func_800278AC_ovl_01();
    M2C_FIELD(&D_800C7650_ovl_01, s8 *, 0x18538) = 0;
    D_80119E13_ovl_01 = 0x64;
    D_80119E14_ovl_01 = 0x64;
    M2C_FIELD(&D_800C7650_ovl_01, s8 *, 0x18539) = 0;
    M2C_FIELD(&D_800E9118_ovl_01, s8 *, 0xCA) = 0;
    M2C_FIELD(&D_800E9118_ovl_01, s32 *, 0xC0) = 0;
    M2C_FIELD(&D_800E9118_ovl_01, s32 *, 0xC4) = 0x014000F0;
    func_800750E0_ovl_01(1, 0x014000F0);
    func_80075F84_ovl_01();
    func_8004C97C_ovl_01();
    func_800850D4_ovl_01();
    func_8004CD84_ovl_01(0, &D_80026648_ovl_01);
}
