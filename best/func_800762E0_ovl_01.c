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

extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_80119DC0_ovl_01;
extern s32 D_80119DC8_ovl_01;
extern s32 D_8011A6B8_ovl_01;

void func_800762E0_ovl_01(void) {
    D_80119DC8_ovl_01 = 0;
    D_80119DC8_ovl_01 = 1;
    D_8011A6B8_ovl_01 = M2C_FIELD(((M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x215F8) * 4) + *(((M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A5C) < 0) * 4) + &D_80119DC0_ovl_01)), s32 *, 4);
}
