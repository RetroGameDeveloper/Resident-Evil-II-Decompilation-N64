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

void func_801835E8_ovl_02(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 var_t2;
    u8 *var_a0;
    u8 *var_a1;
    u8 *var_t3;
    u8 temp_v0;
    u8 temp_v1;
    void *var_a2;
    void *var_t0;
    void *var_t1;

    var_a0 = arg0;
    var_a1 = arg1;
    var_t3 = var_a0 + arg2;
    var_t2 = 0;
    if (arg4 > 0) {
        var_a2 = var_a1 + 7;
        var_t1 = var_t3 + 7;
        var_t0 = var_a0 + 7;
        do {
            *var_a1 = (u8) ((u32) (*var_a1 + ((u32) (*var_a0 + *var_t3 + 1) >> 1) + 1) >> 1);
            M2C_FIELD(var_a2, u8 *, -6) = (u8) ((u32) (M2C_FIELD(var_a2, u8 *, -6) + ((u32) (M2C_FIELD(var_t0, u8 *, -6) + M2C_FIELD(var_t1, u8 *, -6) + 1) >> 1) + 1) >> 1);
            M2C_FIELD(var_a2, u8 *, -5) = (u8) ((u32) (M2C_FIELD(var_a2, u8 *, -5) + ((u32) (M2C_FIELD(var_t0, u8 *, -5) + M2C_FIELD(var_t1, u8 *, -5) + 1) >> 1) + 1) >> 1);
            var_a0 += arg3;
            M2C_FIELD(var_a2, u8 *, -4) = (u8) ((u32) (M2C_FIELD(var_a2, u8 *, -4) + ((u32) (M2C_FIELD(var_t0, u8 *, -4) + M2C_FIELD(var_t1, u8 *, -4) + 1) >> 1) + 1) >> 1);
            var_t3 += arg3;
            M2C_FIELD(var_a2, u8 *, -3) = (u8) ((u32) (M2C_FIELD(var_a2, u8 *, -3) + ((u32) (M2C_FIELD(var_t0, u8 *, -3) + M2C_FIELD(var_t1, u8 *, -3) + 1) >> 1) + 1) >> 1);
            var_t2 += 1;
            M2C_FIELD(var_a2, u8 *, -2) = (u8) ((u32) (M2C_FIELD(var_a2, u8 *, -2) + ((u32) (M2C_FIELD(var_t0, u8 *, -2) + M2C_FIELD(var_t1, u8 *, -2) + 1) >> 1) + 1) >> 1);
            var_a1 += arg3;
            M2C_FIELD(var_a2, u8 *, -1) = (u8) ((u32) (M2C_FIELD(var_a2, u8 *, -1) + ((u32) (M2C_FIELD(var_t0, u8 *, -1) + M2C_FIELD(var_t1, u8 *, -1) + 1) >> 1) + 1) >> 1);
            temp_v1 = M2C_FIELD(var_t0, u8 *, 0);
            var_t0 += arg3;
            temp_v0 = M2C_FIELD(var_t1, u8 *, 0);
            var_t1 += arg3;
            M2C_FIELD(var_a2, u8 *, 0) = (u8) ((u32) (M2C_FIELD(var_a2, u8 *, 0) + ((u32) (temp_v1 + temp_v0 + 1) >> 1) + 1) >> 1);
            var_a2 += arg3;
        } while (var_t2 < arg4);
    }
}
