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

void func_80183770_ovl_02(u8 *arg0, s8 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 var_t5;
    s8 *var_a1;
    u8 *var_a0;
    u8 *var_t6;
    u8 temp_a2;
    u8 temp_a2_2;
    u8 temp_a2_3;
    u8 temp_a2_4;
    u8 temp_a2_5;
    u8 temp_a2_6;
    u8 temp_a2_7;
    u8 temp_a2_8;
    u8 temp_t0;
    u8 temp_t0_2;
    u8 temp_t0_3;
    u8 temp_t0_4;
    u8 temp_t0_5;
    u8 temp_t0_6;
    u8 temp_t0_7;
    u8 temp_t0_8;
    u8 temp_t1;
    u8 temp_t1_2;
    u8 temp_t1_3;
    u8 temp_t1_4;
    u8 temp_t1_5;
    u8 temp_t1_6;
    u8 temp_t1_7;
    u8 temp_t1_8;
    u8 temp_v0;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 temp_v1_3;
    u8 temp_v1_4;
    u8 temp_v1_5;
    u8 temp_v1_6;
    u8 temp_v1_7;
    u8 temp_v1_8;
    u8 temp_v1_9;
    void *var_t2;
    void *var_t3;
    void *var_t4;

    var_a0 = arg0;
    var_a1 = arg1;
    var_t6 = var_a0 + arg2;
    var_t5 = 0;
    if (arg4 > 0) {
        var_t4 = var_a1 + 0xF;
        var_t3 = var_t6 + 0x10;
        var_t2 = var_a0 + 0x10;
        do {
            temp_a2 = *var_a0;
            var_a0 += arg3;
            temp_v1 = *var_t6;
            var_t6 += arg3;
            var_t5 += 1;
            temp_t0 = M2C_FIELD(var_t2, u8 *, -0xF);
            temp_t1 = M2C_FIELD(var_t3, u8 *, -0xF);
            *var_a1 = (s8) ((u32) (temp_a2 + temp_t0 + temp_v1 + temp_t1 + 2) >> 2);
            var_a1 += arg3;
            temp_a2_2 = M2C_FIELD(var_t2, u8 *, -0xE);
            temp_v1_2 = M2C_FIELD(var_t3, u8 *, -0xE);
            M2C_FIELD(var_t4, s8 *, -0xE) = (s8) ((u32) (temp_t0 + temp_a2_2 + temp_t1 + temp_v1_2 + 2) >> 2);
            temp_t0_2 = M2C_FIELD(var_t2, u8 *, -0xD);
            temp_t1_2 = M2C_FIELD(var_t3, u8 *, -0xD);
            M2C_FIELD(var_t4, s8 *, -0xD) = (s8) ((u32) (temp_a2_2 + temp_t0_2 + temp_v1_2 + temp_t1_2 + 2) >> 2);
            temp_a2_3 = M2C_FIELD(var_t2, u8 *, -0xC);
            temp_v1_3 = M2C_FIELD(var_t3, u8 *, -0xC);
            M2C_FIELD(var_t4, s8 *, -0xC) = (s8) ((u32) (temp_t0_2 + temp_a2_3 + temp_t1_2 + temp_v1_3 + 2) >> 2);
            temp_t0_3 = M2C_FIELD(var_t2, u8 *, -0xB);
            temp_t1_3 = M2C_FIELD(var_t3, u8 *, -0xB);
            M2C_FIELD(var_t4, s8 *, -0xB) = (s8) ((u32) (temp_a2_3 + temp_t0_3 + temp_v1_3 + temp_t1_3 + 2) >> 2);
            temp_a2_4 = M2C_FIELD(var_t2, u8 *, -0xA);
            temp_v1_4 = M2C_FIELD(var_t3, u8 *, -0xA);
            M2C_FIELD(var_t4, s8 *, -0xA) = (s8) ((u32) (temp_t0_3 + temp_a2_4 + temp_t1_3 + temp_v1_4 + 2) >> 2);
            temp_t0_4 = M2C_FIELD(var_t2, u8 *, -9);
            temp_t1_4 = M2C_FIELD(var_t3, u8 *, -9);
            M2C_FIELD(var_t4, s8 *, -9) = (s8) ((u32) (temp_a2_4 + temp_t0_4 + temp_v1_4 + temp_t1_4 + 2) >> 2);
            temp_a2_5 = M2C_FIELD(var_t2, u8 *, -8);
            temp_v1_5 = M2C_FIELD(var_t3, u8 *, -8);
            M2C_FIELD(var_t4, s8 *, -8) = (s8) ((u32) (temp_t0_4 + temp_a2_5 + temp_t1_4 + temp_v1_5 + 2) >> 2);
            temp_t0_5 = M2C_FIELD(var_t2, u8 *, -7);
            temp_t1_5 = M2C_FIELD(var_t3, u8 *, -7);
            M2C_FIELD(var_t4, s8 *, -7) = (s8) ((u32) (temp_a2_5 + temp_t0_5 + temp_v1_5 + temp_t1_5 + 2) >> 2);
            temp_a2_6 = M2C_FIELD(var_t2, u8 *, -6);
            temp_v1_6 = M2C_FIELD(var_t3, u8 *, -6);
            M2C_FIELD(var_t4, s8 *, -6) = (s8) ((u32) (temp_t0_5 + temp_a2_6 + temp_t1_5 + temp_v1_6 + 2) >> 2);
            temp_t0_6 = M2C_FIELD(var_t2, u8 *, -5);
            temp_t1_6 = M2C_FIELD(var_t3, u8 *, -5);
            M2C_FIELD(var_t4, s8 *, -5) = (s8) ((u32) (temp_a2_6 + temp_t0_6 + temp_v1_6 + temp_t1_6 + 2) >> 2);
            temp_a2_7 = M2C_FIELD(var_t2, u8 *, -4);
            temp_v1_7 = M2C_FIELD(var_t3, u8 *, -4);
            M2C_FIELD(var_t4, s8 *, -4) = (s8) ((u32) (temp_t0_6 + temp_a2_7 + temp_t1_6 + temp_v1_7 + 2) >> 2);
            temp_t0_7 = M2C_FIELD(var_t2, u8 *, -3);
            temp_t1_7 = M2C_FIELD(var_t3, u8 *, -3);
            M2C_FIELD(var_t4, s8 *, -3) = (s8) ((u32) (temp_a2_7 + temp_t0_7 + temp_v1_7 + temp_t1_7 + 2) >> 2);
            temp_a2_8 = M2C_FIELD(var_t2, u8 *, -2);
            temp_v1_8 = M2C_FIELD(var_t3, u8 *, -2);
            M2C_FIELD(var_t4, s8 *, -2) = (s8) ((u32) (temp_t0_7 + temp_a2_8 + temp_t1_7 + temp_v1_8 + 2) >> 2);
            temp_t0_8 = M2C_FIELD(var_t2, u8 *, -1);
            temp_t1_8 = M2C_FIELD(var_t3, u8 *, -1);
            M2C_FIELD(var_t4, s8 *, -1) = (s8) ((u32) (temp_a2_8 + temp_t0_8 + temp_v1_8 + temp_t1_8 + 2) >> 2);
            temp_v0 = M2C_FIELD(var_t2, u8 *, 0);
            var_t2 += arg3;
            temp_v1_9 = M2C_FIELD(var_t3, u8 *, 0);
            var_t3 += arg3;
            M2C_FIELD(var_t4, s8 *, 0) = (s8) ((u32) (temp_t0_8 + temp_v0 + temp_t1_8 + temp_v1_9 + 2) >> 2);
            var_t4 += arg3;
        } while (var_t5 < arg4);
    }
}
