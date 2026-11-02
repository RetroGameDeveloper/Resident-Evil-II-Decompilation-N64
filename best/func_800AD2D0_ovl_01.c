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

M2C_UNK func_800A5618_ovl_01(s32 *, s32 *);         /* extern */
M2C_UNK func_800A5660_ovl_01(s32, s32 *, s32);      /* extern */
extern s32 D_8014E10C;
extern s32 D_8014E110;

s32 func_800AD2D0_ovl_01(s32 *arg0, s32 arg1) {
    s16 var_s0;
    s32 *temp_s1;
    s32 *var_a0;
    s32 *var_a1;
    s32 *var_a1_2;
    s32 temp_a0;
    s32 var_a2;
    s32 var_v0;
    s32 var_v1;
    u32 temp_v1;
    void *temp_v0;

    var_a0 = arg0;
    temp_s1 = var_a0;
    var_v1 = 0;
    if (D_8014E10C > 0) {
        var_a0 = &D_8014E110;
loop_2:
        if (*var_a0 != temp_s1) {
            var_v1 += 1;
            var_a0 += 0xC;
            if (var_v1 >= D_8014E10C) {

            } else {
                goto loop_2;
            }
        }
    }
    var_v0 = 1;
    if (var_v1 == D_8014E10C) {
        var_a1 = temp_s1;
        if (var_v1 < 8) {
            var_s0 = 0;
            if (*var_a1 != 0xFFFF) {
                do {
                    var_a1 += 0x1C;
                    var_s0 += 1;
                } while (*var_a1 != 0xFFFF);
            }
            func_800A5618_ovl_01(var_a0, var_a1);
            var_a2 = 0;
            var_a1_2 = temp_s1;
            temp_a0 = D_8014E10C;
            temp_v0 = (temp_a0 * 0xC) + &D_8014E110;
            temp_v1 = var_s0 & 0xFFFF;
            M2C_FIELD(temp_v0, s32 **, 0) = var_a1_2;
            M2C_FIELD(temp_v0, s16 *, 8) = var_s0;
            M2C_FIELD(temp_v0, s32 *, 4) = arg1;
            if (temp_v1 != 0) {
                do {
                    M2C_FIELD(var_a1_2, s16 *, 2) = 0;
                    var_a2 += 1;
                    var_a1_2 += 0x1C;
                } while ((u32) (var_a2 & 0xFFFF) < temp_v1);
            }
            D_8014E10C += 1;
            func_800A5660_ovl_01(temp_a0, var_a1_2, var_a2);
            return 1;
        }
        var_v0 = 0;
        /* Duplicate return node #14. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
