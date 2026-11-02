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

extern M2C_UNK D_800C7650_ovl_01;
extern s8 D_80114EDA_ovl_01;

void func_8006D364_ovl_01(void) {
    M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x215C8) = -1;
    M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x215CA) = -1;
    M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x215CC) = -1;
    M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x215CE) = -1;
    M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x21654) = 0;
    M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A64) = 0;
    M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A68) = 0;
    M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A6C) = 0;
    M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A70) = 0;
    D_80114EDA_ovl_01 = 0;
}
