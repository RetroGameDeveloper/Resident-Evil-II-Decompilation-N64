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

void func_80183B10_ovl_02(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_a0;
    s32 temp_a0_10;
    s32 temp_a0_11;
    s32 temp_a0_12;
    s32 temp_a0_13;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_a0_7;
    s32 temp_a0_8;
    s32 temp_a0_9;
    s32 temp_t1;
    s32 temp_v0;
    s32 var_t6;
    u8 *var_a1;
    u8 *var_t5;
    u8 *var_t7;
    u8 temp_t0;
    u8 temp_v0_2;
    u8 temp_v1;
    u8 temp_v1_2;
    void *var_t2;
    void *var_t3;
    void *var_t4;

    var_a1 = arg1;
    var_t5 = arg0;
    var_t7 = var_t5 + arg2;
    var_t6 = 0;
    if (arg4 > 0) {
        var_t2 = var_a1 + 0xF;
        var_t4 = var_t7 + 0x10;
        var_t3 = var_t5 + 0x10;
        do {
            temp_v1 = *var_t5;
            var_t5 += arg3;
            temp_t0 = *var_t7;
            var_t7 += arg3;
            var_t6 += 1;
            temp_t1 = M2C_FIELD(var_t3, u8 *, -0xF) + M2C_FIELD(var_t4, u8 *, -0xF) + 2;
            *var_a1 = (u8) ((u32) (*var_a1 + ((u32) (temp_v1 + temp_t0 + temp_t1) >> 2) + 1) >> 1);
            var_a1 += arg3;
            temp_a0 = M2C_FIELD(var_t3, u8 *, -0xE) + M2C_FIELD(var_t4, u8 *, -0xE);
            M2C_FIELD(var_t2, u8 *, -0xE) = (u8) ((u32) (M2C_FIELD(var_t2, u8 *, -0xE) + ((u32) (temp_a0 + temp_t1) >> 2) + 1) >> 1);
            temp_a0_2 = M2C_FIELD(var_t3, u8 *, -0xD) + M2C_FIELD(var_t4, u8 *, -0xD);
            M2C_FIELD(var_t2, u8 *, -0xD) = (u8) ((u32) (M2C_FIELD(var_t2, u8 *, -0xD) + ((u32) (temp_a0_2 + (temp_a0 + 2)) >> 2) + 1) >> 1);
            temp_a0_3 = M2C_FIELD(var_t3, u8 *, -0xC) + M2C_FIELD(var_t4, u8 *, -0xC);
            M2C_FIELD(var_t2, u8 *, -0xC) = (u8) ((u32) (M2C_FIELD(var_t2, u8 *, -0xC) + ((u32) (temp_a0_3 + (temp_a0_2 + 2)) >> 2) + 1) >> 1);
            temp_a0_4 = M2C_FIELD(var_t3, u8 *, -0xB) + M2C_FIELD(var_t4, u8 *, -0xB);
            M2C_FIELD(var_t2, u8 *, -0xB) = (u8) ((u32) (M2C_FIELD(var_t2, u8 *, -0xB) + ((u32) (temp_a0_4 + (temp_a0_3 + 2)) >> 2) + 1) >> 1);
            temp_a0_5 = M2C_FIELD(var_t3, u8 *, -0xA) + M2C_FIELD(var_t4, u8 *, -0xA);
            M2C_FIELD(var_t2, u8 *, -0xA) = (u8) ((u32) (M2C_FIELD(var_t2, u8 *, -0xA) + ((u32) (temp_a0_5 + (temp_a0_4 + 2)) >> 2) + 1) >> 1);
            temp_a0_6 = M2C_FIELD(var_t3, u8 *, -9) + M2C_FIELD(var_t4, u8 *, -9);
            M2C_FIELD(var_t2, u8 *, -9) = (u8) ((u32) (M2C_FIELD(var_t2, u8 *, -9) + ((u32) (temp_a0_6 + (temp_a0_5 + 2)) >> 2) + 1) >> 1);
            temp_a0_7 = M2C_FIELD(var_t3, u8 *, -8) + M2C_FIELD(var_t4, u8 *, -8);
            M2C_FIELD(var_t2, u8 *, -8) = (u8) ((u32) (M2C_FIELD(var_t2, u8 *, -8) + ((u32) (temp_a0_7 + (temp_a0_6 + 2)) >> 2) + 1) >> 1);
            temp_a0_8 = M2C_FIELD(var_t3, u8 *, -7) + M2C_FIELD(var_t4, u8 *, -7);
            M2C_FIELD(var_t2, u8 *, -7) = (u8) ((u32) (M2C_FIELD(var_t2, u8 *, -7) + ((u32) (temp_a0_8 + (temp_a0_7 + 2)) >> 2) + 1) >> 1);
            temp_a0_9 = M2C_FIELD(var_t3, u8 *, -6) + M2C_FIELD(var_t4, u8 *, -6);
            M2C_FIELD(var_t2, u8 *, -6) = (u8) ((u32) (M2C_FIELD(var_t2, u8 *, -6) + ((u32) (temp_a0_9 + (temp_a0_8 + 2)) >> 2) + 1) >> 1);
            temp_a0_10 = M2C_FIELD(var_t3, u8 *, -5) + M2C_FIELD(var_t4, u8 *, -5);
            M2C_FIELD(var_t2, u8 *, -5) = (u8) ((u32) (M2C_FIELD(var_t2, u8 *, -5) + ((u32) (temp_a0_10 + (temp_a0_9 + 2)) >> 2) + 1) >> 1);
            temp_a0_11 = M2C_FIELD(var_t3, u8 *, -4) + M2C_FIELD(var_t4, u8 *, -4);
            M2C_FIELD(var_t2, u8 *, -4) = (u8) ((u32) (M2C_FIELD(var_t2, u8 *, -4) + ((u32) (temp_a0_11 + (temp_a0_10 + 2)) >> 2) + 1) >> 1);
            temp_a0_12 = M2C_FIELD(var_t3, u8 *, -3) + M2C_FIELD(var_t4, u8 *, -3);
            M2C_FIELD(var_t2, u8 *, -3) = (u8) ((u32) (M2C_FIELD(var_t2, u8 *, -3) + ((u32) (temp_a0_12 + (temp_a0_11 + 2)) >> 2) + 1) >> 1);
            temp_a0_13 = M2C_FIELD(var_t3, u8 *, -2) + M2C_FIELD(var_t4, u8 *, -2);
            M2C_FIELD(var_t2, u8 *, -2) = (u8) ((u32) (M2C_FIELD(var_t2, u8 *, -2) + ((u32) (temp_a0_13 + (temp_a0_12 + 2)) >> 2) + 1) >> 1);
            temp_v0 = M2C_FIELD(var_t3, u8 *, -1) + M2C_FIELD(var_t4, u8 *, -1);
            M2C_FIELD(var_t2, u8 *, -1) = (u8) ((u32) (M2C_FIELD(var_t2, u8 *, -1) + ((u32) (temp_v0 + (temp_a0_13 + 2)) >> 2) + 1) >> 1);
            temp_v1_2 = M2C_FIELD(var_t3, u8 *, 0);
            var_t3 += arg3;
            temp_v0_2 = M2C_FIELD(var_t4, u8 *, 0);
            var_t4 += arg3;
            M2C_FIELD(var_t2, u8 *, 0) = (u8) ((u32) (M2C_FIELD(var_t2, u8 *, 0) + ((u32) (temp_v0 + 2 + temp_v1_2 + temp_v0_2) >> 2) + 1) >> 1);
            var_t2 += arg3;
        } while (var_t6 < arg4);
    }
}
