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

s32 func_800A2148_ovl_01(s32);                      /* extern */
M2C_UNK func_800A21B8_ovl_01(M2C_UNK, s32, s32, M2C_UNK); /* extern */
extern M2C_UNK D_8011A31C_ovl_01;

void func_80078F14_ovl_01(s16 arg0, s32 arg2) {
    s32 temp_a0;
    s32 var_s1;
    s32 var_s2;
    void *temp_s0;
    void *temp_v1;

    temp_a0 = arg0 * 0x3C;
    temp_v1 = temp_a0 + &D_8011A31C_ovl_01;
    if (M2C_FIELD(temp_v1, s8 *, 0x28) != 0) {
        var_s2 = 0;
        var_s1 = temp_a0;
loop_2:
        temp_s0 = var_s1 + &D_8011A31C_ovl_01;
        if (M2C_FIELD(temp_s0, s32 *, 0x14) != 0) {
            if (func_800A2148_ovl_01(M2C_FIELD(temp_s0, s32 *, 4)) & 0xFF) {
                func_800A21B8_ovl_01(0, (arg2 * 0x10) & 0xFFFF, M2C_FIELD(temp_s0, s32 *, 4), 1);
                M2C_FIELD(temp_v1, s8 *, 0x28) = 1;
            }
            var_s2 += 1;
            var_s1 += 4;
            if (var_s2 < 4) {
                goto loop_2;
            }
        }
    }
}
