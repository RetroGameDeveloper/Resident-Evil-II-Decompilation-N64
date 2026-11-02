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

s32 func_80032EA4_ovl_01(s32, s32, s32, M2C_UNK);   /* extern */
extern void *D_8011B4EC_ovl_01;
extern u16 D_8011B500_ovl_01;

void *func_80080C98_ovl_01(s32 arg0) {
    s32 var_s3;
    u16 *var_s1;
    void **var_s2;
    void *temp_s0;
    void *var_s4;
    void *var_s5;
    void *var_v0;

    var_s4 = NULL;
    var_s5 = NULL;
    var_s3 = 2;
    var_s1 = &D_8011B500_ovl_01;
    var_s2 = &D_8011B4EC_ovl_01;
loop_1:
    temp_s0 = *var_s2;
    if (temp_s0 != NULL) {
        if (func_80032EA4_ovl_01(arg0, M2C_FIELD(temp_s0, s32 *, 0x28), M2C_FIELD(temp_s0, s32 *, 0x30), 0x400) == 0) {
            if ((u16) *var_s1 < 0x7FFFFFFFU) {
                var_s4 = temp_s0;
                goto block_9;
            }
            var_s1 += 2;
        } else {
            if ((u16) *var_s1 < 0x7FFFFFFFU) {
                var_s5 = temp_s0;
            }
block_9:
            var_s1 += 2;
        }
        var_s3 -= 1;
        var_s2 += 4;
        if (var_s3 != -1) {
            goto loop_1;
        }
    }
    var_v0 = var_s4;
    if (var_s4 == NULL) {
        var_v0 = var_s5;
    }
    return var_v0;
}
