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

extern u32 D_801581C0;
extern M2C_UNK *D_801583D0;
extern M2C_UNK *D_801583D4;

u32 func_800AE2A0_ovl_01(void *arg0) {
    M2C_UNK *temp_a1;
    M2C_UNK *temp_v0;
    M2C_UNK *var_a2;
    M2C_UNK *var_t0;
    u32 temp_v1;
    u32 temp_v1_2;
    u32 temp_v1_3;
    u32 var_a3;

    do {
        temp_v1 = D_801581C0;
        D_801581C0 = temp_v1 + 1;
    } while (temp_v1 == -1U);
    var_a3 = temp_v1;
    var_a2 = D_801583D0;
    var_t0 = NULL;
    if (var_a2 != NULL) {
loop_4:
        temp_v1_2 = M2C_FIELD(var_a2, u32 *, 8);
        if (var_a3 >= temp_v1_2) {
            if (temp_v1_2 == var_a3) {
                do {
                    temp_v1_3 = D_801581C0;
                    D_801581C0 = temp_v1_3 + 1;
                } while (temp_v1_3 == -1U);
                var_a3 = temp_v1_3;
            }
            var_t0 = var_a2;
            var_a2 = M2C_FIELD(var_a2, M2C_UNK **, 0);
            if (var_a2 != NULL) {
                goto loop_4;
            }
        }
    }
    temp_a1 = D_801583D4;
    if (temp_a1 != NULL) {
        temp_v0 = M2C_FIELD(temp_a1, M2C_UNK **, 0);
        D_801583D4 = temp_v0;
        if (temp_v0 != NULL) {
            M2C_FIELD(temp_v0, s32 *, 4) = 0;
        }
        if (var_t0 != NULL) {
            *var_t0 = temp_a1;
        } else {
            D_801583D0 = temp_a1;
        }
        M2C_FIELD(temp_a1, M2C_UNK **, 4) = var_t0;
        M2C_FIELD(temp_a1, M2C_UNK **, 0) = var_a2;
        if (var_a2 != NULL) {
            M2C_FIELD(var_a2, M2C_UNK **, 4) = temp_a1;
        }
        M2C_FIELD(temp_a1, u32 *, 8) = var_a3;
        M2C_FIELD(temp_a1, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 0x60);
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = temp_a1;
        return var_a3;
    }
    return -1U;
}
