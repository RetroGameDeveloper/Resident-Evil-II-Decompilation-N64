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

extern u16 D_8011377A_ovl_01;
extern u16 D_8011377E_ovl_01;
extern M2C_UNK D_801314F0_ovl_01;

void func_80042AC0_ovl_01(void) {
    s16 temp_a0;
    s16 temp_v1;

    M2C_FIELD(&D_801314F0_ovl_01, s16 *, 0xA4) = 0x1FF;
    M2C_FIELD(&D_801314F0_ovl_01, s16 *, 0xAC) = 0x1FF;
    M2C_FIELD(&D_801314F0_ovl_01, s16 *, 0xA6) = 0;
    M2C_FIELD(&D_801314F0_ovl_01, s16 *, 0xAE) = 0;
    temp_v1 = D_8011377A_ovl_01 * 2;
    temp_a0 = D_8011377E_ovl_01 * 2;
    M2C_FIELD(&D_801314F0_ovl_01, s16 *, 0xA0) = temp_v1;
    M2C_FIELD(&D_801314F0_ovl_01, s16 *, 0xA2) = temp_a0;
    M2C_FIELD(&D_801314F0_ovl_01, s16 *, 0xA8) = temp_v1;
    M2C_FIELD(&D_801314F0_ovl_01, s16 *, 0xAA) = temp_a0;
}
