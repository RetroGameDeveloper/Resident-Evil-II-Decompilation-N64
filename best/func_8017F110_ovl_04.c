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

extern void *D_801806F0_ovl_04;

void func_8017F110_ovl_04(s8 *arg0) {
    s32 var_a2;
    s8 *var_v0;
    u32 var_a1;
    u8 var_a1_2;
    void *temp_a0;

    var_a1 = 0;
    var_v0 = arg0;
    do {
        *var_v0 = 0xF;
        var_a1 += 1;
        var_v0 = arg0 + var_a1;
    } while (var_a1 < 0xFU);
    var_a1_2 = 0;
    var_a2 = 0;
loop_3:
    temp_a0 = D_801806F0_ovl_04 + var_a2;
    if (var_a1_2 < (u8) M2C_FIELD(D_801806F0_ovl_04, u8 *, 0x176)) {
        M2C_FIELD((((M2C_FIELD(temp_a0, u8 *, 0x3E) - 0x1A) * 0xA) + M2C_FIELD(temp_a0, u8 *, 0x3F) + arg0), u8 *, -0x1A) = var_a1_2;
        var_a1_2 += 1;
        var_a2 += 0x16;
        if (var_a1_2 < 0xFU) {
            goto loop_3;
        }
    }
}
