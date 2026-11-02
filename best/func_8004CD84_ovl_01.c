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

extern M2C_UNK D_8010B2C8_ovl_01;

void func_8004CD84_ovl_01(s32 arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = (arg0 * 0x1C8) + &D_8010B2C8_ovl_01;
    M2C_FIELD(temp_v0, s32 *, 0x1B8) = arg1;
    M2C_FIELD(temp_v0, s16 *, 0) = 2;
}
