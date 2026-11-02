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

M2C_UNK func_800B2038_ovl_01(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern u8 D_80119E13_ovl_01;
extern u8 D_80119E14_ovl_01;
extern u16 D_80119E1C_ovl_01;
extern u8 D_8011A22F_ovl_01;

void func_800750E0_ovl_01(s32 arg0) {
    if (arg0 & 0xFFFF) {
        D_8011A22F_ovl_01 = D_80119E13_ovl_01;
    }
    func_800B2038_ovl_01(((s32) (D_80119E13_ovl_01 * D_80119E1C_ovl_01) >> 7) & 0xFF, 0, 0, 1);
    func_800B2038_ovl_01(((s32) (D_80119E14_ovl_01 * D_80119E1C_ovl_01) >> 7) & 0xFF, 0, 1, 0);
}
