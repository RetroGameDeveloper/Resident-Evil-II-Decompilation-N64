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

M2C_UNK func_800A6BA4_ovl_01();                     /* extern */
extern s32 D_801477E8;
extern s32 D_80147F40;
extern s32 D_80147F44;

void func_800A8410_ovl_01(void) {
    if (D_80147F40 != 0) {
        D_801477E8 = ((s32) (D_80147F40 * 0x7D00) / (s32) D_80147F44) * 8;
        func_800A6BA4_ovl_01();
    }
}
