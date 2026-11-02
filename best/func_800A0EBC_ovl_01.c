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

M2C_UNK func_800AEE20_ovl_01(s32);                  /* extern */
extern M2C_UNK *D_8013BC20;
extern M2C_UNK D_8013BC30;

void func_800A0EBC_ovl_01(s32 arg0) {
    M2C_UNK *temp_v0;
    M2C_UNK *temp_v0_2;
    M2C_UNK *var_a0_2;
    M2C_UNK *var_a0_3;
    M2C_UNK *var_a1;
    s32 var_a0;
    s32 var_v1_2;
    u32 var_v1;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *var_s0;
    void *var_s0_2;

    var_v1 = 0;
    var_a1 = &D_8013BC30;
loop_1:
    if ((M2C_FIELD(var_a1, u8 *, 0xFC1) != 0) || (M2C_FIELD(var_a1, s32 *, 0) != (arg0 & 0x7FFFFFFF))) {
        var_v1 += 1;
        var_a1 += 0xFF8;
        if (var_v1 >= 8U) {
            var_a0 = -1;
        } else {
            goto loop_1;
        }
    } else {
        var_a0 = var_v1 | (arg0 & 0x80000000);
    }
    if (var_a0 != -1) {
        if (var_a0 >= 0) {
            temp_v1 = (var_a0 * 0xFF8) + &D_8013BC30;
            if ((M2C_FIELD(temp_v1, u8 *, 0xFC0) != 0) && (M2C_FIELD(temp_v1, u8 *, 0xFC1) == 0)) {
                M2C_FIELD(temp_v1, u8 *, 0xFC0) = 0U;
                var_s0 = M2C_FIELD(temp_v1, void **, 0xF78);
                if (var_s0 != NULL) {
                    do {
                        func_800AEE20_ovl_01(M2C_FIELD(var_s0, s32 *, 8));
                        var_s0 = M2C_FIELD(var_s0, void **, 0);
                    } while (var_s0 != NULL);
                }
                var_s0_2 = M2C_FIELD(temp_v1, void **, 0xF7C);
                var_v1_2 = var_a0 << 9;
                if (var_s0_2 != NULL) {
                    do {
                        func_800AEE20_ovl_01(M2C_FIELD(var_s0_2, s32 *, 8));
                        var_s0_2 = M2C_FIELD(var_s0_2, void **, 0);
                        var_v1_2 = var_a0 << 9;
                    } while (var_s0_2 != NULL);
                }
                temp_v1_2 = ((var_v1_2 - var_a0) * 8) + &D_8013BC30;
                var_a0_2 = M2C_FIELD(temp_v1_2, M2C_UNK **, 0xF78);
                if (var_a0_2 != NULL) {
                    if (*var_a0_2 != NULL) {
                        do {
                            var_a0_2 = *var_a0_2;
                        } while (*var_a0_2 != NULL);
                    }
                    if (D_8013BC20 != NULL) {
                        *var_a0_2 = D_8013BC20;
                        M2C_FIELD(D_8013BC20, M2C_UNK **, 4) = var_a0_2;
                    }
                    temp_v0 = M2C_FIELD(temp_v1_2, M2C_UNK **, 0xF78);
                    M2C_FIELD(temp_v1_2, M2C_UNK **, 0xF78) = NULL;
                    D_8013BC20 = temp_v0;
                }
                var_a0_3 = M2C_FIELD(temp_v1_2, M2C_UNK **, 0xF7C);
                if (var_a0_3 != NULL) {
                    if (*var_a0_3 != NULL) {
                        do {
                            var_a0_3 = *var_a0_3;
                        } while (*var_a0_3 != NULL);
                    }
                    if (D_8013BC20 != NULL) {
                        *var_a0_3 = D_8013BC20;
                        M2C_FIELD(D_8013BC20, M2C_UNK **, 4) = var_a0_3;
                    }
                    temp_v0_2 = M2C_FIELD(temp_v1_2, M2C_UNK **, 0xF7C);
                    M2C_FIELD(temp_v1_2, M2C_UNK **, 0xF7C) = NULL;
                    D_8013BC20 = temp_v0_2;
                }
            }
            M2C_FIELD(((var_a0 * 0xFF8) + &D_8013BC30), s8 *, 0xFC1) = 1;
            return;
        }
        temp_v1_3 = ((var_a0 & 0x7FFFFFFF) * 0xFF8) + &D_8013BC30;
        if ((M2C_FIELD(temp_v1_3, u8 *, 0xFC0) != 0) && (M2C_FIELD(temp_v1_3, u8 *, 0xFC1) == 0)) {
            M2C_FIELD(temp_v1_3, s32 *, 0xFF0) = 0;
        }
    }
}
