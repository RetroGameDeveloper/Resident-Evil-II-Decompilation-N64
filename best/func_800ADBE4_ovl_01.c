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

M2C_UNK func_800A5618_ovl_01(s32, s32);             /* extern */
M2C_UNK func_800A5660_ovl_01();                     /* extern */
extern s32 D_80157DB0;
extern u16 D_80157DC0;

s32 func_800ADBE4_ovl_01(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a1;
    s32 var_s0;
    s32 var_v0;
    s32 var_v1_2;
    u16 *var_v1;
    void *temp_v0_2;
    void *var_a1_2;

    var_a0 = arg0;
    var_a1 = arg1;
    var_s0 = 0;
    if (D_80157DB0 > 0) {
        var_a0 &= 0xFFFF;
        var_a1 = D_80157DB0;
        var_v1 = &D_80157DC0;
loop_2:
        if (*var_v1 != var_a0) {
            var_s0 += 1;
            var_v1 += 8;
            if (var_s0 >= var_a1) {

            } else {
                goto loop_2;
            }
        }
    }
    var_v0 = 0;
    if (var_s0 != D_80157DB0) {
        func_800A5618_ovl_01(var_a0, var_a1);
        var_v1_2 = var_s0 + 1;
        if (var_v1_2 < D_80157DB0) {
            temp_v0 = var_v1_2 * 8;
            var_a1_2 = temp_v0 + &D_80157DC0;
            var_a0_2 = temp_v0 - 8;
            do {
                temp_v0_2 = var_a0_2 + &D_80157DC0;
                M2C_FIELD(temp_v0_2, s32 *, 0) = (s32) M2C_FIELD(var_a1_2, s32 *, 0);
                M2C_FIELD(temp_v0_2, s32 *, 4) = (s32) M2C_FIELD(var_a1_2, s32 *, 4);
                var_a1_2 += 8;
                var_v1_2 += 1;
                var_a0_2 += 8;
            } while (var_v1_2 < D_80157DB0);
        }
        D_80157DB0 -= 1;
        func_800A5660_ovl_01();
        var_v0 = 1;
    }
    return var_v0;
}
