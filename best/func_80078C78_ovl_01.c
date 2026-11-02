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

M2C_UNK func_80079290_ovl_01(s16);                  /* extern */
M2C_UNK func_800A1EE0_ovl_01(s32);                  /* extern */
M2C_UNK func_800A1F24_ovl_01(s32);                  /* extern */
M2C_UNK func_800A1F68_ovl_01(s32);                  /* extern */
s32 func_800A2148_ovl_01(s32);                      /* extern */
s32 func_800A8B68_ovl_01(u16, u16, s32, M2C_UNK);   /* extern */
extern M2C_UNK D_8011A31C_ovl_01;

void func_80078C78_ovl_01(s16 arg0, u8 arg1, s16 arg3) {
    u8 sp10;
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s3;
    s32 var_s5;
    s8 temp_v0;
    s8 var_v1;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_v1;
    void *var_v0;
    void *var_v0_2;

    temp_s0 = arg0 * 0x3C;
    temp_v1 = temp_s0 + &D_8011A31C_ovl_01;
    temp_v0 = M2C_FIELD(temp_v1, s8 *, 0x28);
    sp10 = arg1;
    if (temp_v0 != 0) {
        var_s2 = 0;
        if (temp_v0 > 0) {
            var_s1 = temp_s0;
            var_s3 = var_s1;
            var_s5 = var_s1;
loop_3:
            temp_s0_2 = var_s1 + &D_8011A31C_ovl_01;
            if (M2C_FIELD(temp_s0_2, s32 *, 0x14) != 0) {
                temp_a0 = M2C_FIELD(temp_s0_2, s32 *, 4);
                var_v0 = var_s5 + &D_8011A31C_ovl_01;
                if (temp_a0 != -1) {
                    var_v0 = var_s5 + &D_8011A31C_ovl_01;
                    if (func_800A2148_ovl_01(temp_a0) & 0xFF) {
                        func_800A1EE0_ovl_01(M2C_FIELD(temp_s0_2, s32 *, 4));
                        var_v0 = var_s5 + &D_8011A31C_ovl_01;
                    }
                }
                M2C_FIELD(temp_s0_2, s32 *, 4) = func_800A8B68_ovl_01(M2C_FIELD(temp_v1, u16 *, 0x2A), M2C_FIELD(var_v0, u16 *, 0x2C), M2C_FIELD(temp_s0_2, s32 *, 0x14), 0);
                M2C_FIELD(temp_v1, s8 *, 0x28) = -2;
                if (arg3 != 0) {
                    M2C_FIELD((var_s3 + &D_8011A31C_ovl_01), s8 *, 0x24) = 0;
                } else {
                    M2C_FIELD((var_s3 + &D_8011A31C_ovl_01), s8 *, 0x24) = 0x7F;
                }
                var_s3 += 1;
                var_s1 += 4;
                var_s2 += 1;
                var_s5 += 2;
                if (var_s2 < 4) {
                    goto loop_3;
                }
            }
            func_80079290_ovl_01(arg0);
        }
        var_s2_2 = 0;
        if (sp10 == 0) {
            temp_v1_2 = arg0 * 0x3C;
            var_s1_2 = temp_v1_2;
loop_14:
            temp_s0_3 = var_s1_2 + &D_8011A31C_ovl_01;
            if (M2C_FIELD(temp_s0_3, s32 *, 0x14) != 0) {
                var_s2_2 += 1;
                if ((M2C_FIELD((temp_v1_2 + &D_8011A31C_ovl_01), s8 *, 0x28) == -2) && (func_800A2148_ovl_01(M2C_FIELD(temp_s0_3, s32 *, 4)) & 0xFF)) {
                    func_800A1F24_ovl_01(M2C_FIELD(temp_s0_3, s32 *, 4));
                }
                var_s1_2 += 4;
                if (var_s2_2 < 4) {
                    goto loop_14;
                }
            }
            var_v0_2 = (arg0 * 0x3C) + &D_8011A31C_ovl_01;
            var_v1 = -1;
            goto block_29;
        }
        if (sp10 == 1) {
            temp_v1_3 = arg0 * 0x3C;
            var_s1_3 = temp_v1_3;
loop_22:
            temp_s0_4 = var_s1_3 + &D_8011A31C_ovl_01;
            if (M2C_FIELD(temp_s0_4, s32 *, 0x14) != 0) {
                var_s2_2 += 1;
                if ((M2C_FIELD((temp_v1_3 + &D_8011A31C_ovl_01), s8 *, 0x28) == -1) && (func_800A2148_ovl_01(M2C_FIELD(temp_s0_4, s32 *, 4)) & 0xFF)) {
                    func_800A1F68_ovl_01(M2C_FIELD(temp_s0_4, s32 *, 4));
                }
                var_s1_3 += 4;
                if (var_s2_2 >= 4) {

                } else {
                    goto loop_22;
                }
            }
            var_v0_2 = (arg0 * 0x3C) + &D_8011A31C_ovl_01;
            var_v1 = -2;
block_29:
            M2C_FIELD(var_v0_2, s8 *, 0x28) = var_v1;
        }
    }
}
