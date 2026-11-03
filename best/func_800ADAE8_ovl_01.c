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

M2C_UNK func_800A5618_ovl_01(s32, s32, s16);        /* extern */
M2C_UNK func_800A5660_ovl_01();                     /* extern */
extern s32 D_80157DB0;
extern u16 D_80157DC0;

s32 func_800ADAE8_ovl_01(s32 arg0, void *arg1, s16 arg2) {
    s16 temp_s3;
    s16 var_a2;
    s32 temp_a2;
    s32 temp_s2;
    s32 var_a0;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_v0;
    u16 *var_v1;
    void *temp_v0;
    void *var_s0;

    var_a0 = arg0;
    var_a2 = arg2;
    var_s0 = arg1;
    var_a1 = 0;
    temp_s2 = var_a0;
    temp_s3 = var_a2;
    if (D_80157DB0 > 0) {
        var_a2 = temp_s2 & 0xFFFF;
        var_a0 = D_80157DB0;
        var_v1 = &D_80157DC0;
loop_2:
        if (*var_v1 != var_a2) {
            var_a1 += 1;
            var_v1 += 8;
            if (var_a1 >= var_a0) {

            } else {
                goto loop_2;
            }
        }
    }
    var_v0 = 0;
    if (var_a1 == D_80157DB0) {
        var_v0 = 0;
        if (var_a1 < 0x80) {
            func_800A5618_ovl_01(var_a0, var_a1, var_a2);
            var_a1_2 = 0;
            temp_a2 = temp_s3 & 0xFFFF;
            temp_v0 = (D_80157DB0 * 8) + &D_80157DC0;
            M2C_FIELD(temp_v0, s16 *, 0) = (s16) temp_s2;
            M2C_FIELD(temp_v0, s16 *, 2) = temp_s3;
            M2C_FIELD(temp_v0, void **, 4) = var_s0;
            if (temp_a2 != 0) {
                do {
                    M2C_FIELD(var_s0, s8 *, 9) = 0x1F;
                    var_a1_2 += 1;
                    var_s0 += 0xC;
                } while (var_a1_2 < temp_a2);
            }
            D_80157DB0 += 1;
            func_800A5660_ovl_01();
            var_v0 = 1;
        }
    }
    return var_v0;
}
