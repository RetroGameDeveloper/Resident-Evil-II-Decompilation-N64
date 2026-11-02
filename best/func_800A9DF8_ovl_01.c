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

extern s32 D_801484D0;
extern u8 D_80148650;
extern M2C_UNK D_80148660;
extern u8 D_801489E0;

s32 func_800A9DF8_ovl_01(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    M2C_UNK *temp_v0_2;
    M2C_UNK *temp_v1;
    M2C_UNK *var_a1_2;
    s32 *var_v1;
    s32 var_a1;
    u8 temp_a0;
    void *temp_a2;
    void *temp_v0;
    void *temp_v1_2;

    var_a1 = 0;
    if (D_80148650 != 0) {
        var_v1 = &D_801484D0;
loop_2:
        if (M2C_FIELD(arg0, s32 *, 0x38) != *var_v1) {
            var_a1 += 1;
            var_v1 += 0xC;
            if (var_a1 < (s32) D_80148650) {
                goto loop_2;
            }
        }
    }
    if (var_a1 == D_80148650) {
        if ((var_a1 & 0xFF) == 0x20) {
            /* Duplicate return node #6. Try simplifying control flow for better match */
            return 0;
        }
        temp_v0 = (var_a1 * 0xC) + &D_801484D0;
        M2C_FIELD(temp_v0, s32 *, 4) = 0;
        M2C_FIELD(temp_v0, s32 *, 8) = 0;
        D_80148650 = var_a1 + 1;
        M2C_FIELD(temp_v0, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0x38);
        goto block_8;
    }
block_8:
    if (D_801489E0 != 0x20) {
        temp_a2 = (var_a1 * 0xC) + &D_801484D0;
        var_a1_2 = M2C_FIELD(temp_a2, M2C_UNK ***, 4);
        if (var_a1_2 != NULL) {
            if (*var_a1_2 != NULL) {
loop_11:
                if (!(M2C_FIELD(var_a1_2, f32 *, 4) < arg1)) {
                    var_a1_2 = M2C_FIELD(var_a1_2, M2C_UNK **, 0);
                    if (*var_a1_2 != NULL) {
                        goto loop_11;
                    }
                }
            }
            temp_v0_2 = (D_801489E0 * 0x1C) + &D_80148660;
            *temp_v0_2 = *var_a1_2;
            *var_a1_2 = temp_v0_2;
        } else {
            temp_v1 = (D_801489E0 * 0x1C) + &D_80148660;
            *temp_v1 = NULL;
            M2C_FIELD(temp_a2, M2C_UNK **, 4) = temp_v1;
        }
        temp_a0 = D_801489E0;
        temp_v1_2 = (temp_a0 * 0x1C) + &D_80148660;
        M2C_FIELD(temp_v1_2, void **, 0x18) = arg0;
        M2C_FIELD(temp_v1_2, f32 *, 8) = arg2;
        M2C_FIELD(temp_v1_2, f32 *, 0xC) = arg3;
        M2C_FIELD(temp_v1_2, f32 *, 0x14) = arg5;
        M2C_FIELD(temp_v1_2, f32 *, 0x10) = arg4;
        D_801489E0 = temp_a0 + 1;
        M2C_FIELD(((temp_a0 * 0x1C) + &D_80148660), f32 *, 4) = arg1;
        return 1;
    }
    return 0;
}
