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

M2C_UNK func_8004251C_ovl_01(s32, void *, void *, s32); /* extern */
extern u16 D_800E8FE8_ovl_01;

s32 func_8005FA80_ovl_01(void *arg0) {
    s32 *var_s1;
    s32 var_a0;
    s32 var_a3;
    s32 var_s2;
    u16 *var_a1;
    u16 *var_a2;
    u16 *var_t0;
    u16 *var_v1;
    u16 temp_v0_2;
    void *temp_v0;
    void *temp_v1;
    void *var_s0;

    var_s2 = 6;
    temp_v0 = M2C_FIELD(arg0, void **, 0x234);
    var_s1 = temp_v0 + 0x1D60;
    var_s0 = temp_v0 + 0x1E8C;
    do {
        var_t0 = var_s1 + 8;
        var_a3 = 2;
        var_a2 = &D_800E8FE8_ovl_01;
        M2C_FIELD(var_s0, s8 *, 4) = 0xFF;
        *var_s1 = 0;
        M2C_FIELD(var_s0, s32 *, 0x4C) = 0;
loop_2:
        var_a1 = var_t0;
        var_a0 = 2;
        var_v1 = var_a2;
loop_3:
        temp_v0_2 = *var_v1;
        var_v1 += 2;
        var_a0 -= 1;
        *var_a1 = temp_v0_2;
        var_a1 += 2;
        if (var_a0 != -1) {
            goto loop_3;
        }
        var_t0 += 6;
        var_a3 -= 1;
        var_a2 += 6;
        if (var_a3 != -1) {
            goto loop_2;
        }
        func_8004251C_ovl_01(M2C_FIELD(var_s0, s32 *, -0xC8), var_s1 + 8, var_s1 + 0x38, var_a3);
        var_s1 += 0x2F0;
        M2C_FIELD(var_s0, u16 *, -0x16) = (u16) M2C_FIELD(arg0, u16 *, 0x66);
        temp_v1 = M2C_FIELD(arg0, void **, 0x234);
        var_s2 -= 1;
        M2C_FIELD(var_s0, s32 *, -0xC8) = (s32) (temp_v1 + 0x1060);
        M2C_FIELD(var_s0, s32 *, 0) = (s32) (temp_v1 + 0x1028);
        var_s0 += 0x2F0;
    } while (var_s2 != 0);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x234), s16 *, 0x1144) = 0;
    return 0;
}
