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

extern M2C_UNK *D_80143F34;
extern M2C_UNK *D_80143F38;
extern M2C_UNK *D_80143F3C;

M2C_UNK *func_800A3568_ovl_01(void) {
    M2C_UNK *temp_a0;
    M2C_UNK *temp_a3;
    M2C_UNK *temp_v0;
    M2C_UNK *temp_v0_2;

    temp_a3 = D_80143F3C;
    if (D_80143F3C != NULL) {
        temp_v0_2 = M2C_FIELD(temp_a3, M2C_UNK **, 0);
        D_80143F3C = temp_v0_2;
        if (temp_v0_2 != NULL) {
            M2C_FIELD(temp_v0_2, s32 *, 4) = 0;
        }
        if (D_80143F38 != NULL) {
            M2C_FIELD(temp_a3, M2C_UNK **, 0) = NULL;
            M2C_FIELD(temp_a3, M2C_UNK **, 4) = (M2C_UNK *) D_80143F38;
            *D_80143F38 = temp_a3;
        } else {
            M2C_FIELD(temp_a3, M2C_UNK **, 0) = D_80143F34;
            if (D_80143F34 != NULL) {
                M2C_FIELD(D_80143F34, M2C_UNK **, 4) = temp_a3;
            }
            D_80143F34 = temp_a3;
        }
        D_80143F38 = temp_a3;
        return temp_a3;
    }
    temp_a0 = D_80143F38;
    M2C_FIELD(M2C_FIELD(D_80143F34, M2C_UNK **, 0), s32 *, 4) = 0;
    temp_v0 = D_80143F34;
    D_80143F38 = temp_v0;
    *temp_a0 = temp_v0;
    M2C_FIELD(temp_v0, M2C_UNK **, 4) = temp_a0;
    M2C_FIELD(temp_v0, M2C_UNK **, 0) = NULL;
    D_80143F34 = M2C_FIELD(D_80143F34, M2C_UNK **, 0);
    return temp_v0;
}
