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

void *func_80042010_ovl_01(void *arg0, void *arg1) {
    s16 temp_a2;
    s16 temp_a3;
    s16 temp_at;
    s16 temp_t1;
    s16 temp_t1_2;
    s16 temp_t1_3;
    s16 temp_t2;
    s16 temp_t2_2;
    s16 temp_t2_3;
    s16 temp_t3;
    s16 temp_t3_2;
    s16 temp_t3_3;
    s16 temp_t4;
    s16 temp_t5;
    s16 temp_t6;
    s16 temp_t7;
    s16 temp_v0;
    s16 temp_v1;

    temp_t4 = M2C_FIELD(arg0, s16 *, 0);
    temp_t1 = M2C_FIELD(arg1, s16 *, 0);
    temp_t5 = M2C_FIELD(arg0, s16 *, 2);
    temp_t2 = M2C_FIELD(arg1, s16 *, 6);
    temp_t6 = M2C_FIELD(arg0, s16 *, 4);
    temp_t3 = M2C_FIELD(arg1, s16 *, 0xC);
    temp_t7 = M2C_FIELD(arg0, s16 *, 6);
    temp_a2 = M2C_FIELD(arg0, s16 *, 8);
    temp_a3 = M2C_FIELD(arg0, s16 *, 0xA);
    M2C_FIELD(arg0, s16 *, 0) = (s16) ((s32) ((temp_t5 * temp_t2) + (temp_t4 * temp_t1) + (temp_t6 * temp_t3)) >> 0xC);
    temp_v0 = M2C_FIELD(arg0, s16 *, 0xC);
    temp_v1 = M2C_FIELD(arg0, s16 *, 0xE);
    temp_at = M2C_FIELD(arg0, s16 *, 0x10);
    M2C_FIELD(arg0, s16 *, 6) = (s16) ((s32) ((temp_a2 * temp_t2) + (temp_t7 * temp_t1) + (temp_a3 * temp_t3)) >> 0xC);
    temp_t1_2 = M2C_FIELD(arg1, s16 *, 2);
    temp_t2_2 = M2C_FIELD(arg1, s16 *, 8);
    M2C_FIELD(arg0, s16 *, 0xC) = (s16) ((s32) ((temp_v1 * temp_t2) + (temp_v0 * temp_t1) + (temp_at * temp_t3)) >> 0xC);
    temp_t3_2 = M2C_FIELD(arg1, s16 *, 0xE);
    M2C_FIELD(arg0, s16 *, 2) = (s16) ((s32) ((temp_t5 * temp_t2_2) + (temp_t4 * temp_t1_2) + (temp_t6 * temp_t3_2)) >> 0xC);
    M2C_FIELD(arg0, s16 *, 8) = (s16) ((s32) ((temp_a2 * temp_t2_2) + (temp_t7 * temp_t1_2) + (temp_a3 * temp_t3_2)) >> 0xC);
    temp_t1_3 = M2C_FIELD(arg1, s16 *, 4);
    temp_t2_3 = M2C_FIELD(arg1, s16 *, 0xA);
    temp_t3_3 = M2C_FIELD(arg1, s16 *, 0x10);
    M2C_FIELD(arg0, s16 *, 0xE) = (s16) ((s32) ((temp_v1 * temp_t2_2) + (temp_v0 * temp_t1_2) + (temp_at * temp_t3_2)) >> 0xC);
    M2C_FIELD(arg0, s16 *, 4) = (s16) ((s32) ((temp_t5 * temp_t2_3) + (temp_t4 * temp_t1_3) + (temp_t6 * temp_t3_3)) >> 0xC);
    M2C_FIELD(arg0, s16 *, 0xA) = (s16) ((s32) ((temp_a2 * temp_t2_3) + (temp_t7 * temp_t1_3) + (temp_a3 * temp_t3_3)) >> 0xC);
    M2C_FIELD(arg0, s16 *, 0x10) = (s16) ((s32) ((temp_v1 * temp_t2_3) + (temp_v0 * temp_t1_3) + (temp_at * temp_t3_3)) >> 0xC);
    return arg0;
}
