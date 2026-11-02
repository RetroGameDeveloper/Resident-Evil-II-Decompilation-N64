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

void func_80183050_ovl_02(u8 *arg0, s8 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 var_t2;
    s8 *var_a1;
    u8 *var_a0;
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
        var_t1 = var_a1 + 0xF;
        var_t0 = var_t3 + 0xF;
        var_a2 = var_a0 + 0xF;
        do {
            *var_a1 = (s8) ((u32) (*var_a0 + *var_t3 + 1) >> 1);
            M2C_FIELD(var_t1, s8 *, -0xE) = (s8) ((u32) (M2C_FIELD(var_a2, u8 *, -0xE) + M2C_FIELD(var_t0, u8 *, -0xE) + 1) >> 1);
            M2C_FIELD(var_t1, s8 *, -0xD) = (s8) ((u32) (M2C_FIELD(var_a2, u8 *, -0xD) + M2C_FIELD(var_t0, u8 *, -0xD) + 1) >> 1);
            M2C_FIELD(var_t1, s8 *, -0xC) = (s8) ((u32) (M2C_FIELD(var_a2, u8 *, -0xC) + M2C_FIELD(var_t0, u8 *, -0xC) + 1) >> 1);
            M2C_FIELD(var_t1, s8 *, -0xB) = (s8) ((u32) (M2C_FIELD(var_a2, u8 *, -0xB) + M2C_FIELD(var_t0, u8 *, -0xB) + 1) >> 1);
            M2C_FIELD(var_t1, s8 *, -0xA) = (s8) ((u32) (M2C_FIELD(var_a2, u8 *, -0xA) + M2C_FIELD(var_t0, u8 *, -0xA) + 1) >> 1);
            M2C_FIELD(var_t1, s8 *, -9) = (s8) ((u32) (M2C_FIELD(var_a2, u8 *, -9) + M2C_FIELD(var_t0, u8 *, -9) + 1) >> 1);
            M2C_FIELD(var_t1, s8 *, -8) = (s8) ((u32) (M2C_FIELD(var_a2, u8 *, -8) + M2C_FIELD(var_t0, u8 *, -8) + 1) >> 1);
            M2C_FIELD(var_t1, s8 *, -7) = (s8) ((u32) (M2C_FIELD(var_a2, u8 *, -7) + M2C_FIELD(var_t0, u8 *, -7) + 1) >> 1);
            M2C_FIELD(var_t1, s8 *, -6) = (s8) ((u32) (M2C_FIELD(var_a2, u8 *, -6) + M2C_FIELD(var_t0, u8 *, -6) + 1) >> 1);
            M2C_FIELD(var_t1, s8 *, -5) = (s8) ((u32) (M2C_FIELD(var_a2, u8 *, -5) + M2C_FIELD(var_t0, u8 *, -5) + 1) >> 1);
            var_a0 += arg3;
            M2C_FIELD(var_t1, s8 *, -4) = (s8) ((u32) (M2C_FIELD(var_a2, u8 *, -4) + M2C_FIELD(var_t0, u8 *, -4) + 1) >> 1);
            var_t3 += arg3;
            M2C_FIELD(var_t1, s8 *, -3) = (s8) ((u32) (M2C_FIELD(var_a2, u8 *, -3) + M2C_FIELD(var_t0, u8 *, -3) + 1) >> 1);
            var_t2 += 1;
            M2C_FIELD(var_t1, s8 *, -2) = (s8) ((u32) (M2C_FIELD(var_a2, u8 *, -2) + M2C_FIELD(var_t0, u8 *, -2) + 1) >> 1);
            var_a1 += arg3;
            M2C_FIELD(var_t1, s8 *, -1) = (s8) ((u32) (M2C_FIELD(var_a2, u8 *, -1) + M2C_FIELD(var_t0, u8 *, -1) + 1) >> 1);
            temp_v0 = M2C_FIELD(var_a2, u8 *, 0);
            var_a2 += arg3;
            temp_v1 = M2C_FIELD(var_t0, u8 *, 0);
            var_t0 += arg3;
            M2C_FIELD(var_t1, s8 *, 0) = (s8) ((u32) (temp_v0 + temp_v1 + 1) >> 1);
            var_t1 += arg3;
        } while (var_t2 < arg4);
    }
}
