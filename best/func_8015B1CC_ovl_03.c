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

s32 func_800479F8_ovl_01(s32, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern s32 D_800C5278_ovl_01;
extern M2C_UNK D_8016141C_ovl_03;
extern s32 D_80161490_ovl_03;

void func_8015B1CC_ovl_03(void) {
    D_80161490_ovl_03 = func_800479F8_ovl_01(D_800C5278_ovl_01, &D_8016141C_ovl_03, 0x14CC, 1);
}
