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

extern u8 D_80112794_ovl_01;
extern M2C_UNK D_80112908_ovl_01;
extern s32 D_801129BC_ovl_01;
extern s32 D_80139E00;

void func_8006BDD4_ovl_01(void) {
    M2C_FIELD(&D_80112908_ovl_01, s8 *, 0) = 8;
    M2C_FIELD(&D_80112908_ovl_01, s8 *, 1) = 8;
    M2C_FIELD(&D_80112908_ovl_01, s8 *, 2) = 8;
    M2C_FIELD(&D_80112908_ovl_01, s8 *, 3) = 8;
    M2C_FIELD(&D_80112908_ovl_01, s8 *, 6) = 8;
    M2C_FIELD(&D_80112908_ovl_01, s8 *, 4) = 0;
    M2C_FIELD(&D_80112908_ovl_01, s8 *, 5) = 0;
    D_801129BC_ovl_01 = 0;
    D_80139E00 = (D_80139E00 | 1) & ~2 & ~0x10 & ~0x20;
    D_80112794_ovl_01 &= 0xF7;
}
