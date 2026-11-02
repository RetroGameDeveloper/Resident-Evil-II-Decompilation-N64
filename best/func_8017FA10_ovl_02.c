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

void func_8017FA10_ovl_02(void *arg0) {
    s16 temp_a2;
    s16 temp_a3;
    s16 temp_t2;
    s16 temp_t3;
    s16 temp_t4;
    s16 temp_t5;
    s16 temp_v0;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a2_2;
    s32 temp_a2_3;
    s32 temp_a2_4;
    s32 temp_a3_2;
    s32 temp_a3_3;
    s32 temp_t1;
    s32 temp_t1_2;
    s32 temp_t1_3;
    s32 temp_t2_2;
    s32 temp_t2_3;
    s32 temp_t3_2;
    s32 temp_t3_3;
    s32 temp_t4_2;
    s32 temp_t4_3;
    s32 temp_t5_2;
    s32 temp_t5_3;
    s32 temp_t6;
    s32 temp_t6_2;
    s32 temp_t6_3;
    s32 temp_v1;

    temp_t3 = M2C_FIELD(arg0, s16 *, 0xC);
    temp_t5 = M2C_FIELD(arg0, s16 *, 4);
    temp_a2 = M2C_FIELD(arg0, s16 *, 2);
    temp_a3 = M2C_FIELD(arg0, s16 *, 0xE);
    temp_t2 = M2C_FIELD(arg0, s16 *, 0xA);
    temp_t4 = M2C_FIELD(arg0, s16 *, 6);
    temp_t6 = M2C_FIELD(arg0, s16 *, 8) << 0xB;
    if ((temp_t6 | temp_t3 | temp_t5 | temp_a2 | temp_a3 | temp_t2 | temp_t4) == 0) {
        temp_v0 = M2C_FIELD(arg0, u16 *, 0) * 8;
        M2C_FIELD(arg0, s16 *, 0xE) = temp_v0;
        M2C_FIELD(arg0, s16 *, 0xC) = temp_v0;
        M2C_FIELD(arg0, s16 *, 0xA) = temp_v0;
        M2C_FIELD(arg0, s16 *, 8) = temp_v0;
        M2C_FIELD(arg0, s16 *, 6) = temp_v0;
        M2C_FIELD(arg0, s16 *, 4) = temp_v0;
        M2C_FIELD(arg0, s16 *, 2) = temp_v0;
        M2C_FIELD(arg0, u16 *, 0) = (u16) temp_v0;
        return;
    }
    temp_t1 = (temp_a2 + temp_a3) * 0x235;
    temp_a2_2 = temp_t1 + (temp_a2 * 0x8E4);
    temp_a3_2 = temp_t1 - (temp_a3 * 0xD4E);
    temp_v1 = (temp_t2 + temp_t4) * 0x968;
    temp_t2_2 = temp_v1 - (temp_t2 * 0x31F);
    temp_t4_2 = temp_v1 - (temp_t4 * 0xFB1);
    temp_a1 = ((s16) M2C_FIELD(arg0, u16 *, 0) << 0xB) + 0x80;
    temp_t1_2 = temp_a1 + temp_t6;
    temp_a1_2 = temp_a1 - temp_t6;
    temp_t6_2 = (temp_t5 + temp_t3) * 0x454;
    temp_t3_2 = temp_t6_2 - (temp_t3 * 0xEC8);
    temp_t5_2 = temp_t6_2 + (temp_t5 * 0x620);
    temp_t6_3 = temp_a2_2 + temp_t2_2;
    temp_a2_3 = temp_a2_2 - temp_t2_2;
    temp_t2_3 = temp_a3_2 + temp_t4_2;
    temp_a3_3 = temp_a3_2 - temp_t4_2;
    temp_t4_3 = temp_t1_2 + temp_t5_2;
    temp_t1_3 = temp_t1_2 - temp_t5_2;
    temp_t5_3 = temp_a1_2 + temp_t3_2;
    temp_a1_3 = temp_a1_2 - temp_t3_2;
    temp_t3_3 = (s32) (((temp_a2_3 + temp_a3_3) * 0xB5) + 0x80) >> 8;
    temp_a2_4 = (s32) (((temp_a2_3 - temp_a3_3) * 0xB5) + 0x80) >> 8;
    M2C_FIELD(arg0, u16 *, 0) = (u16) ((s32) (temp_t4_3 + temp_t6_3) >> 8);
    M2C_FIELD(arg0, s16 *, 2) = (s16) ((s32) (temp_t5_3 + temp_t3_3) >> 8);
    M2C_FIELD(arg0, s16 *, 4) = (s16) ((s32) (temp_a1_3 + temp_a2_4) >> 8);
    M2C_FIELD(arg0, s16 *, 6) = (s16) ((s32) (temp_t1_3 + temp_t2_3) >> 8);
    M2C_FIELD(arg0, s16 *, 8) = (s16) ((s32) (temp_t1_3 - temp_t2_3) >> 8);
    M2C_FIELD(arg0, s16 *, 0xC) = (s16) ((s32) (temp_t5_3 - temp_t3_3) >> 8);
    M2C_FIELD(arg0, s16 *, 0xA) = (s16) ((s32) (temp_a1_3 - temp_a2_4) >> 8);
    M2C_FIELD(arg0, s16 *, 0xE) = (s16) ((s32) (temp_t4_3 - temp_t6_3) >> 8);
}
