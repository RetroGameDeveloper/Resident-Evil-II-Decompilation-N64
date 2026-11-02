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

void func_80008FE0(void *arg0, s32 *arg1) {
    f32 temp_fv0;
    f32 temp_fv1;
    s32 *var_t0;
    s32 *var_t1;
    s32 temp_ft0;
    s32 temp_fv1_2;
    s32 var_a3;
    s32 var_t3;
    void *var_a2;
    void *var_t2;

    var_t0 = arg1;
    var_t1 = var_t0 + 0x20;
    var_t3 = 0;
    var_t2 = arg0;
    do {
        var_a3 = 0;
        var_a2 = var_t2;
loop_2:
        temp_fv1 = M2C_FIELD(var_a2, f32 *, 0) * 65536.0f;
        temp_fv0 = M2C_FIELD(var_a2, f32 *, 4) * 65536.0f;
        var_a2 += 8;
        var_a3 += 1;
        temp_ft0 = (s32) temp_fv1;
        temp_fv1_2 = (s32) temp_fv0;
        *var_t0 = (temp_ft0 & 0xFFFF0000) | ((u32) temp_fv1_2 >> 0x10);
        var_t0 += 4;
        *var_t1 = ((temp_ft0 << 0x10) & 0xFFFF0000) | (temp_fv1_2 & 0xFFFF);
        var_t1 += 4;
        if (var_a3 < 2) {
            goto loop_2;
        }
        var_t3 += 1;
        var_t2 += 0x10;
    } while (var_t3 < 4);
}
