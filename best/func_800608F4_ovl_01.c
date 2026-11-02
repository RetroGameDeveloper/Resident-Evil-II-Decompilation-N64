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

s16 func_80040BE4_ovl_01(s32);                      /* extern */
s16 func_80060984_ovl_01(s16, s16);                 /* extern */

void func_800608F4_ovl_01(void *arg0, void *arg1) {
    s16 temp_s2;
    s16 temp_v0;
    s16 temp_v1;
    s16 temp_v1_2;

    temp_v1 = M2C_FIELD(arg0, s16 *, 0);
    temp_v1_2 = M2C_FIELD(arg0, s16 *, 4);
    temp_s2 = func_80060984_ovl_01(M2C_FIELD(arg0, s16 *, 0), M2C_FIELD(arg0, s16 *, 4));
    temp_v0 = (func_80060984_ovl_01(func_80040BE4_ovl_01((temp_v1 * temp_v1) + (temp_v1_2 * temp_v1_2)), -M2C_FIELD(arg0, s16 *, 2)) - 0x400) & 0xFFF;
    M2C_FIELD(arg1, s16 *, 0) = 0;
    M2C_FIELD(arg1, s16 *, 2) = temp_s2;
    M2C_FIELD(arg1, s16 *, 4) = temp_v0;
}
