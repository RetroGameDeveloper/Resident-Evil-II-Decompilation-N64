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

extern M2C_UNK D_8013A420;
extern M2C_UNK *D_8013BC20;
extern M2C_UNK D_8013BC30;
extern s32 D_80143BFC;

void func_800A1E6C_ovl_01(void) {
    M2C_UNK *var_a0_2;
    M2C_UNK *var_v1;
    M2C_UNK *var_v1_2;
    s32 var_a1;
    u32 var_a0;

    var_a0 = 0;
    var_v1 = &D_8013BC30;
    do {
        M2C_FIELD(var_v1, s8 *, 0xFC0) = 0;
        M2C_FIELD(var_v1, s8 *, 0xFC1) = 1;
        var_a0 += 1;
        var_v1 += 0xFF8;
    } while (var_a0 < 8U);
    var_a0_2 = NULL;
    D_8013BC20 = &D_8013A420;
    var_a1 = 0;
    var_v1_2 = &D_8013A420;
    do {
        M2C_FIELD(var_v1_2, M2C_UNK **, 4) = var_a0_2;
        if (var_a0_2 != NULL) {
            *var_a0_2 = var_v1_2;
        }
        var_a0_2 = var_v1_2;
        var_a1 += 1;
        var_v1_2 = var_a0_2 + 0x18;
    } while (var_a1 < 0x100);
    M2C_FIELD(var_a0_2, s32 *, 0) = 0;
    D_80143BFC = 0;
}
