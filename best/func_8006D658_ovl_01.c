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

M2C_UNK func_8006D60C_ovl_01(void *, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK D_80113A70_ovl_01;

void func_8006D658_ovl_01(u32 arg0, M2C_UNK arg2) {
    M2C_UNK var_a2;
    s32 *var_a0_2;
    s32 var_v0;
    s32 var_v1;
    u32 var_a0;
    void *temp_v1;
    void *var_v1_2;
    void *var_v1_3;

    var_a0 = arg0;
    var_a2 = arg2;
    if (M2C_FIELD(&D_80113A70_ovl_01, u8 *, 0x1464) == 0) {
        var_v1 = var_a0 * 2;
        if (var_a0 >= 0xAU) {
            var_v1_2 = &D_80113A70_ovl_01 + 0x2E8;
            var_a0 = 2;
            if (M2C_FIELD(var_v1_2, u8 *, 1) != 0) {
                var_a2 = 9;
loop_4:
                if (var_a0 != 9) {
                    var_a0 += 1;
                    var_v1_2 += 0x174;
                    if (var_a0 < 0xAU) {
                        if (M2C_FIELD(var_v1_2, u8 *, 1) != 0) {
                            goto loop_4;
                        }
                        goto block_14;
                    }
                } else {
                    goto block_14;
                }
            } else {
                goto block_14;
            }
        } else {
            goto block_15;
        }
    } else {
        var_v1 = var_a0 * 2;
        if (var_a0 >= 0xEU) {
            var_v1_3 = &D_80113A70_ovl_01 + 0xE88;
            var_a0 = 0xA;
            if (M2C_FIELD(var_v1_3, u8 *, 1) != 0) {
                var_a2 = 0xD;
loop_11:
                if (var_a0 != 0xD) {
                    var_a0 += 1;
                    var_v1_3 += 0x174;
                    if (var_a0 < 0xEU) {
                        if (M2C_FIELD(var_v1_3, u8 *, 1) == 0) {
                            goto block_14;
                        }
                        goto loop_11;
                    }
                } else {
                    goto block_14;
                }
            } else {
block_14:
                var_v1 = var_a0 * 2;
                goto block_15;
            }
        } else {
block_15:
            temp_v1 = &D_80113A70_ovl_01 + ((var_v1 + var_a0) * 0x7C);
            M2C_FIELD(temp_v1, s8 *, 2) = 0;
            var_a0_2 = temp_v1 + 0x158;
            var_v0 = 6;
            do {
                *var_a0_2 = 0;
                var_v0 -= 1;
                var_a0_2 += 4;
            } while (var_v0 != 0);
            func_8006D60C_ovl_01(temp_v1, var_a2, &D_80113A70_ovl_01);
        }
    }
}
