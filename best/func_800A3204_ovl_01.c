/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2 -mcpu=r4600, tried by autopilot */
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

M2C_UNK func_80007320(void *, s32);                 /* extern */
extern void *D_80143F18;
extern void *D_80143F1C;
extern s32 D_80143F20;
extern s32 D_80143F24;
extern void *D_80143F28;
extern M2C_UNK D_80143F90;

void func_800A3204_ovl_01(s32 arg0) {
    s32 temp_s1;
    s32 var_a0;
    s32 var_a1;
    void *temp_v0;
    void *temp_v0_2;
    void *var_a2;
    void *var_v1;

    temp_s1 = arg0 << 8;
    D_80143F18 = M2C_FIELD(&D_80143F90, void *(**)(s32, M2C_UNK), 0x18)(arg0 * 0x14, 0);
    temp_v0 = M2C_FIELD(&D_80143F90, void *(**)(s32, M2C_UNK), 0x18)(temp_s1, 0);
    D_80143F1C = temp_v0;
    func_80007320(temp_v0, temp_s1);
    var_a1 = 1;
    D_80143F24 = 0;
    D_80143F28 = D_80143F18;
    M2C_FIELD(D_80143F18, void **, 8) = (void *) D_80143F1C;
    M2C_FIELD(D_80143F18, s32 *, 4) = 0;
    if (arg0 > 1) {
        var_a2 = D_80143F1C + 0x100;
        var_a0 = 0;
        var_v1 = D_80143F18 + 0x14;
        do {
            M2C_FIELD(var_v1, void **, 8) = var_a2;
            var_a2 += 0x100;
            temp_v0_2 = D_80143F18 + var_a0;
            var_a0 += 0x14;
            M2C_FIELD(var_v1, void **, 4) = temp_v0_2;
            M2C_FIELD(var_v1, void **, -0x14) = var_v1;
            var_a1 += 1;
            var_v1 += 0x14;
        } while (var_a1 < arg0);
    }
    D_80143F20 = 0;
    M2C_FIELD(((var_a1 * 0x14) + D_80143F18), s32 *, -0x14) = 0;
}
