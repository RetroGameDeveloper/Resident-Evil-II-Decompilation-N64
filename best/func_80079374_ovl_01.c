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

M2C_UNK func_80079290_ovl_01(s16, void *);          /* extern */
extern M2C_UNK D_8011A31C_ovl_01;

void func_80079374_ovl_01(s16 arg0, s16 arg1, s16 arg2) {
    s32 temp_v1;
    void *temp_a3;

    temp_a3 = (arg0 * 0x3C) + &D_8011A31C_ovl_01;
    if (M2C_FIELD(temp_a3, s8 *, 0x28) != 0) {
        temp_v1 = (s32) (arg1 + arg2) >> 1;
        M2C_FIELD(temp_a3, s16 *, 2) = (s16) temp_v1;
        M2C_FIELD(temp_a3, s16 *, 0) = (s16) temp_v1;
        func_80079290_ovl_01(arg0, temp_a3);
    }
}
