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

s32 func_80029F38_ovl_01(void *arg0) {
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    void *temp_a0;
    void *temp_s1;
    void *var_a0;

    temp_s1 = M2C_FIELD(arg0, void **, 0x178);
    var_v1 = M2C_FIELD(temp_s1, s32 *, 0xC);
    temp_a0 = M2C_FIELD(arg0, void **, 0x174);
    if (var_v1 < 0) {
        var_v1 += 7;
    }
    M2C_FIELD(temp_a0, s32 *, 0x5C) = (s32) (M2C_FIELD(temp_a0, s32 *, 0x5C) + (var_v1 >> 3));
    M2C_FIELD(temp_s1, s32 *, 0xC) = 0;
    var_v0 = 0;
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x174), s32 (**)(void *), 8)(arg0) != 0) {
        var_v1_2 = 0;
        if (M2C_FIELD(arg0, s32 *, 0x118) > 0) {
            var_a0 = temp_s1;
            do {
                M2C_FIELD(var_a0, s32 *, 0x10) = 0;
                var_v1_2 += 1;
                var_a0 += 4;
            } while (var_v1_2 < M2C_FIELD(arg0, s32 *, 0x118));
        }
        var_v0 = 1;
        M2C_FIELD(temp_s1, s32 *, 0x24) = 0;
        M2C_FIELD(temp_s1, s32 *, 0x20) = (s32) M2C_FIELD(arg0, s32 *, 0xE8);
    }
    return var_v0;
}
