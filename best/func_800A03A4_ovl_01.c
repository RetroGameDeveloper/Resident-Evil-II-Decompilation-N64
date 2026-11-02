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

M2C_UNK func_800A81E8_ovl_01(s32, void *);          /* extern */
extern void *D_80143BF8;

s32 func_800A03A4_ovl_01(void) {
    s32 temp_v0_3;
    void **temp_v1_2;
    void *temp_s2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;
    void *var_s0;

    temp_v0 = M2C_FIELD(D_80143BF8, void **, 0xF78);
    var_s0 = temp_v0;
    if (temp_v0 == NULL) {
        return 0;
    }
    do {
        temp_s2 = M2C_FIELD(var_s0, void **, 0);
        if ((M2C_FIELD(var_s0, s32 *, 0x14) + M2C_FIELD(D_80143BF8, s32 *, 0x120)) >= M2C_FIELD(var_s0, s32 *, 0xC)) {
            func_800A81E8_ovl_01(M2C_FIELD(var_s0, s32 *, 8), D_80143BF8);
            temp_v1 = M2C_FIELD(var_s0, void **, 0);
            if (temp_v1 != NULL) {
                M2C_FIELD(temp_v1, void ***, 4) = (void **) M2C_FIELD(var_s0, void ***, 4);
            }
            temp_v1_2 = M2C_FIELD(var_s0, void ***, 4);
            if (temp_v1_2 != NULL) {
                *temp_v1_2 = M2C_FIELD(var_s0, void **, 0);
            } else {
                M2C_FIELD(D_80143BF8, void **, 0xF78) = (void *) M2C_FIELD(var_s0, void **, 0);
            }
            temp_v0_2 = M2C_FIELD(D_80143BF8, void **, 0xF7C);
            M2C_FIELD(var_s0, void **, 0) = temp_v0_2;
            if (temp_v0_2 != NULL) {
                M2C_FIELD(M2C_FIELD(D_80143BF8, void **, 0xF7C), void **, 4) = var_s0;
            }
            M2C_FIELD(var_s0, void ***, 4) = NULL;
            M2C_FIELD(D_80143BF8, void **, 0xF7C) = var_s0;
        } else {
            temp_v0_3 = M2C_FIELD(var_s0, s32 *, 0x10) + M2C_FIELD(D_80143BF8, s32 *, 0x118);
            M2C_FIELD(var_s0, s32 *, 0x10) = (s32) (temp_v0_3 & 0xFFFF);
            M2C_FIELD(var_s0, s32 *, 0x14) = (s32) (M2C_FIELD(var_s0, s32 *, 0x14) + ((temp_v0_3 >> 0x10) + M2C_FIELD(D_80143BF8, s32 *, 0x11C)));
        }
        var_s0 = temp_s2;
    } while (var_s0 != NULL);
    return 1;
}
