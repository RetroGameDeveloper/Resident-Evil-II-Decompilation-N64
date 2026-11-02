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

extern u8 D_801479F8;
extern s8 D_801587D8;
extern s8 D_801587D9;
extern s16 D_801587DA;
extern s8 D_801587DC;
extern M2C_UNK D_801587E0;
extern s8 D_80158860;
extern s8 D_801588E0;
extern s8 D_801589E0;

void func_800AEC6C_ovl_01(void) {
    M2C_UNK *var_v1;
    s8 *var_v0;
    s8 temp_v0;
    u32 temp_a0;
    u32 var_a2;
    u8 var_a0;
    void *temp_v1;

    var_a0 = 0;
    if (D_801479F8 != 0) {
        do {
            temp_v1 = (var_a0 * 4) + &D_80158860;
            temp_v0 = var_a0 - 1;
            var_a0 += 1;
            M2C_FIELD(temp_v1, s8 *, 0) = temp_v0;
            M2C_FIELD(temp_v1, u8 *, 1) = var_a0;
            M2C_FIELD(temp_v1, s16 *, 2) = 1;
        } while (var_a0 < (u8) D_801479F8);
    }
    var_a2 = 0;
    D_80158860 = 0xFF;
    M2C_FIELD((((D_801479F8 - 1) * 4) + &D_80158860), s8 *, 1) = 0xFF;
    D_801589E0 = 0;
    temp_a0 = D_801479F8 & 0xFF;
    D_801587D9 = D_801479F8 - 1;
    if (temp_a0 != 0) {
        var_v1 = &D_801587E0;
        do {
            M2C_FIELD(var_v1, s16 *, 2) = 0;
            var_a2 += 1;
            var_v1 += 4;
        } while (var_a2 < temp_a0);
        var_a2 = 0;
    }
    var_v0 = &D_801588E0;
    do {
        *var_v0 = 0xFF;
        var_a2 += 1;
        var_v0 = var_a2 + &D_801588E0;
    } while (var_a2 < 0x100U);
    D_801587DA = 0xFFFF;
    D_801587DC = 0;
    D_801587D8 = 0;
}
