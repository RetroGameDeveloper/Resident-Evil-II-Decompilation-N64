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

extern M2C_UNK D_8011A31C_ovl_01;

void func_80075F84_ovl_01(void) {
    M2C_UNK *var_a2;
    s32 temp_v0;
    s32 var_a1;
    s32 var_a3;
    u32 var_a0;
    void *temp_v1;

    var_a3 = 0;
    var_a2 = &D_8011A31C_ovl_01;
    do {
        var_a0 = 0;
        var_a1 = var_a3;
        M2C_FIELD(var_a2, s8 *, 0x28) = 0;
        M2C_FIELD(var_a2, s16 *, 2) = 0;
        M2C_FIELD(var_a2, s16 *, 0) = 0;
loop_2:
        temp_v1 = var_a1 + &D_8011A31C_ovl_01;
        temp_v0 = var_a0 + var_a3;
        var_a0 += 1;
        M2C_FIELD(temp_v1, s32 *, 4) = -1;
        M2C_FIELD(temp_v1, s32 *, 0x14) = 0;
        M2C_FIELD((temp_v0 + &D_8011A31C_ovl_01), s8 *, 0x24) = 0;
        var_a1 += 4;
        if (var_a0 < 4U) {
            goto loop_2;
        }
        var_a2 += 0x3C;
        var_a3 += 0x3C;
    } while ((u32) var_a2 < (u32) (&D_8011A31C_ovl_01 + 0x384));
}
