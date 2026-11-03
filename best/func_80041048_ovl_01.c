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

s32 func_800408F0_ovl_01(s16);                      /* extern */
s16 func_80040998_ovl_01(s16);                      /* extern */

void func_80041048_ovl_01(void *arg0, void *arg1) {
    s16 temp_s4;
    s16 temp_s5;
    s16 temp_v0;
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_lo;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_t0;
    s32 temp_t1;
    s32 temp_v1;

    temp_s2 = func_800408F0_ovl_01(M2C_FIELD(arg0, s16 *, 0));
    temp_s5 = func_80040998_ovl_01(M2C_FIELD(arg0, s16 *, 0));
    temp_s3 = func_800408F0_ovl_01(M2C_FIELD(arg0, s16 *, 2));
    temp_s4 = func_80040998_ovl_01(M2C_FIELD(arg0, s16 *, 2));
    temp_s0 = func_800408F0_ovl_01(M2C_FIELD(arg0, s16 *, 4));
    temp_v0 = func_80040998_ovl_01(M2C_FIELD(arg0, s16 *, 4));
    temp_lo = temp_s3 * temp_s0;
    temp_v1 = (s32) (temp_s5 * temp_s4) >> 0xC;
    temp_t0 = temp_v1 * temp_v0;
    temp_a0 = temp_s3 * temp_v0;
    temp_a2 = temp_s2 * temp_v0;
    temp_t1 = temp_s5 * (temp_a0 >> 0xC);
    M2C_FIELD(arg1, s16 *, 0xA) = (s16) -temp_s5;
    M2C_FIELD(arg1, s16 *, 4) = (s16) ((s32) (temp_s4 * temp_s2) >> 0xC);
    M2C_FIELD(arg1, s16 *, 6) = (s16) (temp_a2 >> 0xC);
    M2C_FIELD(arg1, s16 *, 2) = (s16) ((s32) ((temp_v1 * temp_s0) - temp_a0) >> 0xC);
    M2C_FIELD(arg1, s16 *, 8) = (s16) ((s32) (temp_s2 * temp_s0) >> 0xC);
    M2C_FIELD(arg1, s16 *, 0x10) = (s16) ((s32) (temp_s2 * temp_s3) >> 0xC);
    M2C_FIELD(arg1, s16 *, 0) = (s16) ((s32) (temp_lo + temp_t0) >> 0xC);
    M2C_FIELD(arg1, s16 *, 0xC) = (s16) ((s32) (temp_t1 - (temp_s4 * temp_s0)) >> 0xC);
    M2C_FIELD(arg1, s16 *, 0xE) = (s16) ((s32) ((temp_s4 * temp_v0) + (temp_s5 * (temp_lo >> 0xC))) >> 0xC);
}
