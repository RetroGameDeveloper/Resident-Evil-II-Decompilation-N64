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

s32 func_80135C50_ovl_01(s32, s32);                 /* extern */
extern M2C_UNK *D_80143F24;
extern M2C_UNK *D_80143F28;
extern u16 D_80143F6C;
extern s32 D_80143F70;
extern s32 D_80143F7C;
extern s32 D_80143F8C;

s32 func_800A3314_ovl_01(s32 arg0) {
    M2C_UNK *temp_v0;
    M2C_UNK *temp_v0_2;
    M2C_UNK *var_s1;
    M2C_UNK *var_s1_2;
    s32 temp_a1;
    u16 temp_a0;
    void *temp_v0_3;

    var_s1_2 = D_80143F24;
    if (var_s1_2 != NULL) {
loop_1:
        if (M2C_FIELD(var_s1_2, s32 *, 0xC) != arg0) {
            var_s1_2 = M2C_FIELD(var_s1_2, M2C_UNK **, 0);
            if (var_s1_2 == NULL) {
                goto block_3;
            }
            goto loop_1;
        }
        M2C_FIELD(var_s1_2, s16 *, 0x10) = 2;
        return M2C_FIELD(var_s1_2, s32 *, 8);
    }
block_3:
    var_s1 = D_80143F28;
    if (D_80143F28 != NULL) {
        temp_v0 = *var_s1;
        D_80143F28 = temp_v0;
        if (temp_v0 != NULL) {
            M2C_FIELD(temp_v0, s32 *, 4) = 0;
        }
        if (D_80143F24 != NULL) {
            M2C_FIELD(D_80143F24, M2C_UNK **, 4) = var_s1;
        }
        temp_v0_2 = D_80143F24;
        D_80143F24 = var_s1;
        *var_s1 = temp_v0_2;
    } else {
        var_s1 = D_80143F24;
        if (var_s1 != NULL) {
loop_11:
            if (M2C_FIELD(var_s1, u16 *, 0x10) != 0) {
                var_s1 = M2C_FIELD(var_s1, M2C_UNK **, 0);
                if (var_s1 == NULL) {

                } else {
                    goto loop_11;
                }
            }
        }
    }
    M2C_FIELD(var_s1, s16 *, 0x10) = 2;
    M2C_FIELD(var_s1, s32 *, 0xC) = arg0;
    temp_a1 = D_80143F70 + 0xC;
    D_80143F70 = temp_a1;
    temp_a0 = D_80143F6C;
    D_80143F7C = func_80135C50_ovl_01(D_80143F7C, temp_a1);
    temp_v0_3 = (temp_a0 * 0xC) + D_80143F8C;
    M2C_FIELD(temp_v0_3, s32 *, 4) = arg0;
    M2C_FIELD(temp_v0_3, s32 *, 0) = 0x100;
    D_80143F6C = temp_a0 + 1;
    M2C_FIELD(((temp_a0 * 0xC) + D_80143F8C), s32 *, 8) = (s32) M2C_FIELD(var_s1, s32 *, 8);
    return M2C_FIELD(var_s1, s32 *, 8);
}
