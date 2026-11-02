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

s32 func_8007880C_ovl_01(s8, s32, M2C_UNK);         /* extern */
extern M2C_UNK D_80119E48_ovl_01;
extern M2C_UNK D_80119E6C_ovl_01;
extern M2C_UNK D_80119E9C_ovl_01;
extern M2C_UNK D_80119ECC_ovl_01;
extern u8 D_8011A22E_ovl_01;

void func_80077B0C_ovl_01(u32 arg0, void *arg1) {
    s16 temp_fp;
    s16 temp_s7;
    s32 temp_s3;
    s8 temp_s6;
    s8 var_s0;
    u32 temp_v1;
    u32 var_s1;
    u32 var_s2;
    u32 var_s5;
    u8 temp_a0;
    u8 temp_v1_2;
    u8 temp_v1_3;
    void *temp_a1;
    void *temp_v1_4;
    void *temp_v1_5;
    void *var_a2;
    void *var_v1;

    temp_v1 = arg0 >> 0x18;
    if (*(temp_v1 + &D_80119E48_ovl_01) != -1) {
        var_s5 = temp_v1;
        temp_s6 = (arg0 >> 0x10) & 0xFF;
        temp_a1 = *((var_s5 * 4) + &D_80119E6C_ovl_01) + (temp_s6 * 4);
        temp_fp = arg0 & 0xFF;
        if (M2C_FIELD(temp_a1, s32 *, 0) != -1) {
            temp_v1_2 = (u8) M2C_FIELD(temp_a1, s32 *, 0);
            if (temp_v1_2 & 0x80) {
                var_s5 = temp_v1_2 & 0x7F;
            }
            temp_v1_3 = M2C_FIELD(temp_a1, u8 *, 3);
            temp_a0 = M2C_FIELD(temp_a1, u8 *, 2);
            var_s0 = temp_v1_3 & 0x1F;
            var_s2 = temp_a0 >> 4;
            var_s1 = temp_v1_3 >> 5;
            temp_s7 = M2C_FIELD(temp_a1, u8 *, 1) & 0x7F;
            temp_s3 = temp_a0 & 0xF;
            if (!(func_8007880C_ovl_01(var_s0, temp_s3, -1) & 0xFF)) {
                temp_v1_4 = (var_s0 * 2) + &D_80119E9C_ovl_01;
                M2C_FIELD(temp_v1_4, s8 *, 0) = (s8) (temp_s3 & 7);
                M2C_FIELD(temp_v1_4, s8 *, 1) = var_s0;
                temp_v1_5 = (var_s0 * 0x24) + &D_80119ECC_ovl_01;
                M2C_FIELD(temp_v1_5, s8 *, 1) = temp_s6;
                M2C_FIELD(temp_v1_5, s8 *, 0) = 1;
                M2C_FIELD(temp_v1_5, s16 *, 4) = (s16) var_s5;
                M2C_FIELD(temp_v1_5, s16 *, 6) = temp_s7;
                M2C_FIELD(temp_v1_5, s16 *, 8) = (s16) var_s2;
                if (arg1 != NULL) {
                    M2C_FIELD(temp_v1_5, f32 *, 0x14) = (f32) M2C_FIELD(arg1, s32 *, 0);
                    M2C_FIELD(temp_v1_5, f32 *, 0x18) = (f32) M2C_FIELD(arg1, s32 *, 4);
                    M2C_FIELD(temp_v1_5, f32 *, 0x1C) = (f32) M2C_FIELD(arg1, s32 *, 8);
                }
                M2C_FIELD(temp_v1_5, s16 *, 0x12) = temp_fp;
                if (D_8011A22E_ovl_01 != 0) {
                    M2C_FIELD(temp_v1_5, s16 *, 0x20) = 1;
                } else {
                    M2C_FIELD(temp_v1_5, s16 *, 0x20) = 0;
                }
                if (var_s1 != 0) {
                    var_a2 = (var_s0 * 0x24) + &D_80119ECC_ovl_01;
                    var_v1 = (var_s0 * 2) + &D_80119E9C_ovl_01;
                    do {
                        var_s1 -= 1;
                        var_a2 += 0x24;
                        var_v1 += 2;
                        var_s0 += 1;
                        M2C_FIELD(var_v1, s8 *, 0) = (s8) (temp_s3 & 7);
                        M2C_FIELD(var_v1, s8 *, 1) = var_s0;
                        M2C_FIELD(var_a2, s8 *, 1) = temp_s6;
                        M2C_FIELD(var_a2, s8 *, 0) = 1;
                        var_s2 += 1;
                        M2C_FIELD(var_a2, s16 *, 4) = (s16) var_s5;
                        M2C_FIELD(var_a2, s16 *, 6) = temp_s7;
                        M2C_FIELD(var_a2, s16 *, 8) = (s16) var_s2;
                        if (D_8011A22E_ovl_01 != 0) {
                            M2C_FIELD(var_a2, s16 *, 0x20) = 1;
                        } else {
                            M2C_FIELD(var_a2, s16 *, 0x20) = 0;
                        }
                        if (arg1 != NULL) {
                            M2C_FIELD(var_a2, f32 *, 0x14) = (f32) M2C_FIELD(arg1, s32 *, 0);
                            M2C_FIELD(var_a2, f32 *, 0x18) = (f32) M2C_FIELD(arg1, s32 *, 4);
                            M2C_FIELD(var_a2, f32 *, 0x1C) = (f32) M2C_FIELD(arg1, s32 *, 8);
                        }
                        M2C_FIELD(var_a2, s16 *, 0x12) = temp_fp;
                    } while (var_s1 != 0);
                }
            }
        }
    }
}
