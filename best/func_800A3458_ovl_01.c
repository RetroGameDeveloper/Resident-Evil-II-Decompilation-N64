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
extern void *D_80143F2C;
extern void *D_80143F30;
extern s32 D_80143F34;
extern s32 D_80143F38;
extern void *D_80143F3C;
extern M2C_UNK D_80143F90;

void func_800A3458_ovl_01(s32 arg0) {
    s32 temp_s2;
    s32 temp_s3;
    s32 var_a1;
    s32 var_a3;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *var_a2;
    void *var_v1;

    temp_s3 = arg0 & 0xFFFF;
    temp_s2 = temp_s3 * 0x600;
    temp_v0 = M2C_FIELD(&D_80143F90, void *(**)(s32, M2C_UNK), 0x18)(temp_s2, 0);
    D_80143F2C = temp_v0;
    func_80007320(temp_v0, temp_s2);
    temp_v0_2 = M2C_FIELD(&D_80143F90, void *(**)(s32, M2C_UNK), 0x18)(temp_s3 * 0x18, 0);
    var_a3 = 1;
    D_80143F30 = temp_v0_2;
    D_80143F34 = 0;
    D_80143F38 = 0;
    D_80143F3C = temp_v0_2;
    M2C_FIELD(temp_v0_2, s32 *, 4) = 0;
    M2C_FIELD(temp_v0_2, void **, 0x14) = (void *) D_80143F2C;
    if (temp_s3 > 1) {
        var_a2 = D_80143F2C + 0x600;
        var_a1 = 0;
        var_v1 = temp_v0_2 + 0x18;
        do {
            M2C_FIELD(var_v1, void **, 0x14) = var_a2;
            var_a2 += 0x600;
            temp_v0_3 = temp_v0_2 + var_a1;
            var_a1 += 0x18;
            M2C_FIELD(var_v1, void **, -0x18) = var_v1;
            M2C_FIELD(var_v1, void **, 4) = temp_v0_3;
            var_a3 += 1;
            var_v1 += 0x18;
        } while (var_a3 < temp_s3);
    }
    M2C_FIELD(((var_a3 * 0x18) + D_80143F30), s32 *, -0x18) = 0;
}
