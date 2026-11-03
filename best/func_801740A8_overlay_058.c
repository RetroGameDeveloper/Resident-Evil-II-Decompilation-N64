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

extern M2C_UNK D_800E10D0;

void func_801740A8_overlay_058(s32 arg0) {
    M2C_FIELD(&D_800E10D0, s8 *, 4) = 2;
    M2C_FIELD(&D_800E10D0, s8 *, 5) = (s8) (arg0 + 2);
    M2C_FIELD(&D_800E10D0, s8 *, 6) = 0;
    M2C_FIELD(&D_800E10D0, s8 *, 7) = 0;
}
