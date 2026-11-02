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

s32 func_8007880C_ovl_01(s8, s32);                  /* extern */
extern s8 D_80119E4B_ovl_01;
extern s32 D_80119E78_ovl_01;
extern M2C_UNK D_80119E9C_ovl_01;
extern M2C_UNK D_80119ECC_ovl_01;
extern u8 D_8011A22E_ovl_01;

void func_80077D48_ovl_01(s8 arg0, void *arg1) {
    s16 temp_a2;
    s16 var_s5;
    s32 temp_s2;
    s8 var_s1;
    s8 var_s4;
    u32 var_a0;
    u32 var_a1;
    u8 temp_v1;
    void *temp_s0;
    void *temp_v1_2;
    void *temp_v1_3;
    void *var_a3;
    void *var_v1;

    var_s4 = arg0;
    if (M2C_FIELD(arg1, s32 *, 0) & 0x2000) {
        var_s4 = arg0 + 0x10;
    }
    var_s5 = 3;
    if (D_80119E78_ovl_01 != 0) {
        temp_s0 = D_80119E78_ovl_01 + ((var_s4 & 0xFF) * 4);
        if ((M2C_FIELD(temp_s0, s32 *, 0) != -1) && (D_80119E4B_ovl_01 != -1)) {
            temp_v1 = (u8) M2C_FIELD(temp_s0, s32 *, 0);
            if (temp_v1 & 0x80) {
                var_s5 = temp_v1 & 0x7F;
            }
            var_s1 = M2C_FIELD(temp_s0, u8 *, 3) & 0x1F;
            temp_s2 = M2C_FIELD(temp_s0, u8 *, 2) & 0xF;
            if (!(func_8007880C_ovl_01(var_s1, temp_s2) & 0xFF)) {
                temp_v1_2 = (var_s1 * 2) + &D_80119E9C_ovl_01;
                M2C_FIELD(temp_v1_2, s8 *, 0) = (s8) (temp_s2 & 7);
                M2C_FIELD(temp_v1_2, s8 *, 1) = var_s1;
                temp_v1_3 = (var_s1 * 0x24) + &D_80119ECC_ovl_01;
                M2C_FIELD(temp_v1_3, s8 *, 0) = 1;
                M2C_FIELD(temp_v1_3, s8 *, 1) = var_s4;
                M2C_FIELD(temp_v1_3, s16 *, 4) = var_s5;
                var_a0 = (u8) M2C_FIELD(temp_s0, u8 *, 2) >> 4;
                var_a1 = (u8) M2C_FIELD(temp_s0, u8 *, 3) >> 5;
                temp_a2 = M2C_FIELD(temp_s0, u8 *, 1) & 0x7F;
                M2C_FIELD(temp_v1_3, s16 *, 6) = temp_a2;
                M2C_FIELD(temp_v1_3, s16 *, 8) = (s16) var_a0;
                M2C_FIELD(temp_v1_3, f32 *, 0x14) = (f32) M2C_FIELD(arg1, s32 *, 0x28);
                M2C_FIELD(temp_v1_3, f32 *, 0x18) = (f32) M2C_FIELD(arg1, s32 *, 0x2C);
                M2C_FIELD(temp_v1_3, f32 *, 0x1C) = (f32) M2C_FIELD(arg1, s32 *, 0x30);
                M2C_FIELD(temp_v1_3, s16 *, 0x12) = 1;
                if (D_8011A22E_ovl_01 != 0) {
                    M2C_FIELD(temp_v1_3, s16 *, 0x20) = 1;
                } else {
                    M2C_FIELD(temp_v1_3, s16 *, 0x20) = 0;
                }
                if (var_a1 != 0) {
                    var_a3 = (var_s1 * 0x24) + &D_80119ECC_ovl_01;
                    var_v1 = (var_s1 * 2) + &D_80119E9C_ovl_01;
                    do {
                        var_a1 -= 1;
                        var_a3 += 0x24;
                        var_v1 += 2;
                        var_s1 += 1;
                        M2C_FIELD(var_v1, s8 *, 0) = (s8) (temp_s2 & 7);
                        M2C_FIELD(var_v1, s8 *, 1) = var_s1;
                        var_a0 += 1;
                        if (D_8011A22E_ovl_01 != 0) {
                            M2C_FIELD(var_a3, s16 *, 0x20) = 1;
                        } else {
                            M2C_FIELD(var_a3, s16 *, 0x20) = 0;
                        }
                        M2C_FIELD(var_a3, s8 *, 1) = var_s4;
                        M2C_FIELD(var_a3, s8 *, 0) = 1;
                        M2C_FIELD(var_a3, s16 *, 4) = var_s5;
                        M2C_FIELD(var_a3, s16 *, 6) = temp_a2;
                        M2C_FIELD(var_a3, s16 *, 8) = (s16) var_a0;
                        M2C_FIELD(var_a3, f32 *, 0x14) = (f32) M2C_FIELD(arg1, s32 *, 0x28);
                        M2C_FIELD(var_a3, f32 *, 0x18) = (f32) M2C_FIELD(arg1, s32 *, 0x2C);
                        M2C_FIELD(var_a3, f32 *, 0x1C) = (f32) M2C_FIELD(arg1, s32 *, 0x30);
                        M2C_FIELD(var_a3, s16 *, 0x12) = 1;
                    } while (var_a1 != 0);
                }
            }
        }
    }
}
