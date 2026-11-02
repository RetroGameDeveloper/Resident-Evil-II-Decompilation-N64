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

void func_80009078(void *arg0, s32 *arg1) {
    s32 sp0;
    s32 sp4;
    f32 temp_fv0;
    s32 *var_a1;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a3;
    s32 var_t1;
    void *var_a0;
    void *var_a2;
    void *var_t0;

    var_a0 = arg0;
    var_a1 = arg1;
    var_t0 = var_a1 + 0x20;
    var_t1 = 0;
    do {
        var_a3 = 0;
        var_a2 = var_a0;
loop_2:
        temp_v0 = (*var_a1 & 0xFFFF0000) | M2C_FIELD(var_t0, u16 *, 0);
        sp0 = temp_v0;
        temp_v1 = ((*var_a1 << 0x10) & 0xFFFF0000) | M2C_FIELD(var_t0, u16 *, 2);
        temp_fv0 = (f32) temp_v1 * 0.000015258789f;
        var_a3 += 1;
        var_t0 += 4;
        var_a1 += 4;
        sp4 = temp_v1;
        M2C_FIELD(var_a2, f32 *, 0) = (f32) ((f32) temp_v0 * 0.000015258789f);
        M2C_FIELD(var_a2, f32 *, 4) = temp_fv0;
        var_a2 += 8;
        if (var_a3 < 2) {
            goto loop_2;
        }
        var_t1 += 1;
        var_a0 += 0x10;
    } while (var_t1 < 4);
}
