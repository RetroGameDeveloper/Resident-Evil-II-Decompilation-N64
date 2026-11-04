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

void func_80182BA8_ovl_02(u8 *arg0, s8 *arg1, s32 arg2, s32 arg3) {
    s32 var_t3;
    s8 *var_a1;
    u8 *var_a0;
    u8 temp_t0;
    u8 temp_t0_2;
    u8 temp_t0_3;
    u8 temp_t0_4;
    u8 temp_v0;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 temp_v1_3;
    void *var_t1;
    void *var_t2;

    var_a0 = arg0;
    var_a1 = arg1;
    var_t3 = 0;
    if (arg3 > 0) {
        var_t2 = var_a1 + 7;
        var_t1 = var_a0 + 8;
        do {
            temp_t0 = M2C_FIELD(var_t1, u8 *, -7);
            *var_a1 = (s8) ((u32) (*var_a0 + temp_t0 + 1) >> 1);
            temp_v1 = M2C_FIELD(var_t1, u8 *, -6);
            M2C_FIELD(var_t2, s8 *, -6) = (s8) ((u32) (temp_t0 + temp_v1 + 1) >> 1);
            temp_t0_2 = M2C_FIELD(var_t1, u8 *, -5);
            M2C_FIELD(var_t2, s8 *, -5) = (s8) ((u32) (temp_v1 + temp_t0_2 + 1) >> 1);
            temp_v1_2 = M2C_FIELD(var_t1, u8 *, -4);
            M2C_FIELD(var_t2, s8 *, -4) = (s8) ((u32) (temp_t0_2 + temp_v1_2 + 1) >> 1);
            temp_t0_3 = M2C_FIELD(var_t1, u8 *, -3);
            var_a0 += arg2;
            M2C_FIELD(var_t2, s8 *, -3) = (s8) ((u32) (temp_v1_2 + temp_t0_3 + 1) >> 1);
            temp_v1_3 = M2C_FIELD(var_t1, u8 *, -2);/*__repair_loop_weight*/do {
            var_t3 += 1;} while (0);
            M2C_FIELD(var_t2, s8 *, -2) = (s8) ((u32) (temp_t0_3 + temp_v1_3 + 1) >> 1);
            temp_t0_4 = M2C_FIELD(var_t1, u8 *, -1);
            var_a1 += arg2;
            M2C_FIELD(var_t2, s8 *, -1) = (s8) ((u32) (temp_v1_3 + temp_t0_4 + 1) >> 1);
            temp_v0 = M2C_FIELD(var_t1, u8 *, 0);
            var_t1 += arg2;
            M2C_FIELD(var_t2, s8 *, 0) = (s8) ((u32) (temp_t0_4 + temp_v0 + 1) >> 1);
            var_t2 += arg2;
        } while (var_t3 < arg3);
    }
}
