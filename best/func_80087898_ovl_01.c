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

extern M2C_UNK D_80127560_ovl_01;

s32 func_80087898_ovl_01(void *arg0, s32 arg1) {
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_a3;
    s32 var_t1;
    s32 var_t3;
    u16 var_t2;
    void *temp_v0;
    void *temp_v1;
    void *var_a1;
    void *var_a2;

    var_t3 = 0;
    temp_v0 = M2C_FIELD(arg0, void **, 0x4C);
    var_t1 = M2C_FIELD(temp_v0, s32 *, 4);
    var_a2 = M2C_FIELD(temp_v0, void **, 8);
    var_a3 = 0;
    if (arg1 < 0) {
        var_t2 = -1U;
    } else {
        var_t2 = *((arg1 * 2) + &D_80127560_ovl_01);
    }
loop_4:
    var_t1 -= 1;
    if (var_t1 != -1) {
        var_a1 = M2C_FIELD(var_a2, void **, 4);
        var_a0 = M2C_FIELD(var_a2, s32 *, 0);
loop_6:
        var_a0 -= 1;
        if (var_a0 != -1) {
            temp_v1 = M2C_FIELD(var_a1, void **, 8);
            if (M2C_FIELD(temp_v1, s32 *, 8) >= (s32) var_t2) {
                var_a3 += 1;
                M2C_FIELD(temp_v1, s32 *, 8) = -1;
            }
            temp_v1_2 = M2C_FIELD(temp_v1, s32 *, 8);
            if (var_t3 < temp_v1_2) {
                var_t3 = temp_v1_2;
            }
            var_a1 += 0x10;
            goto loop_6;
        }
        var_a2 += 0x10;
        goto loop_4;
    }
    return var_a3;
}
