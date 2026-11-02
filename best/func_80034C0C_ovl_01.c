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

s32 func_80040A44_ovl_01(s32);                      /* extern */
s32 func_80040BE4_ovl_01(s32, s32);                 /* extern */

void func_80034C0C_ovl_01(void *arg0, void *arg1, void *arg2) {
    s32 temp_lo;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s3;

    temp_s1 = M2C_FIELD(arg1, s32 *, 0) - M2C_FIELD(arg0, s32 *, 0);
    temp_lo = temp_s1 * temp_s1;
    temp_s0 = M2C_FIELD(arg1, s32 *, 8) - M2C_FIELD(arg0, s32 *, 8);
    temp_s3 = M2C_FIELD(arg0, s32 *, 4) - M2C_FIELD(arg1, s32 *, 4);
    temp_s2 = func_80040BE4_ovl_01(temp_lo + (temp_s0 * temp_s0), temp_lo);
    if (temp_s0 != 0) {
        M2C_FIELD(arg2, s16 *, 2) = (s16) ((((temp_s0 & 0x80000000) == 0) << 0xB) + 0x400);
    }
    if (temp_s1 != 0) {
        M2C_FIELD(arg2, s16 *, 2) = (s16) (((0x1000 - func_80040A44_ovl_01((s32) (temp_s0 << 0xC) / temp_s1)) - (((u32) temp_s1 >> 0x14) & 0x800)) & 0xFFF);
    }
    if (temp_s3 != 0) {
        M2C_FIELD(arg2, s16 *, 4) = (s16) ((((temp_s3 & 0x80000000) == 0) << 0xB) + 0xC00);
    }
    if (temp_s2 != 0) {
        M2C_FIELD(arg2, s16 *, 4) = (s16) ((0x1000 - func_80040A44_ovl_01((s32) (temp_s3 << 0xC) / temp_s2)) & 0xFFF);
    }
}
