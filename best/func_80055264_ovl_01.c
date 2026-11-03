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

f32 func_80047DA0_ovl_01(f32, f32);                 /* extern */
f32 func_80048090_ovl_01(f32);                      /* extern */
extern f32 D_800B8EEC_ovl_01;
extern f64 D_800B8EF0_ovl_01;
extern f32 D_800B8EF8_ovl_01;
extern f32 D_800B8EFC_ovl_01;
extern M2C_UNK D_800C7650_ovl_01;
extern s8 D_8010DBA2_ovl_01;
extern s8 D_8010DBA3_ovl_01;
extern s8 D_8010DBA4_ovl_01;
extern s8 D_8010DBA5_ovl_01;
extern s8 D_8010DBA6_ovl_01;
extern s8 D_8010DBA7_ovl_01;
extern s8 D_8010DBA8_ovl_01;
extern s8 D_8010DBA9_ovl_01;
extern f32 D_8010DBAC_ovl_01;
extern s32 D_8010DD08_ovl_01;
extern u16 D_8010DD0A_ovl_01;
extern f32 D_8010DD0C_ovl_01;
extern s32 D_8010DD10_ovl_01;

void func_80055264_ovl_01(void *arg0, s32 arg1) {
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs1;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 var_a0_2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s8 temp_s0;
    s8 temp_s1;
    s8 var_a0;
    u32 temp_v1;
    u32 temp_v1_2;

    if ((u8) M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x2148E) < 2U) {
        var_a0 = M2C_FIELD(&D_800C7650_ovl_01, s8 *, 0x18210);
        if (((D_8010DBA9_ovl_01 < M2C_FIELD(&D_800C7650_ovl_01, s8 *, 0x18211)) || (M2C_FIELD(&D_800C7650_ovl_01, s8 *, 0x18211) < D_8010DBA8_ovl_01)) && ((var_v0 = var_a0 * 2, ((D_8010DBA7_ovl_01 < var_a0) != 0)) || (var_v0 = var_a0 * 2, ((var_a0 < D_8010DBA8_ovl_01) != 0)))) {
            var_a0 += var_v0;
        }
        if (D_8010DBA3_ovl_01 < var_a0) {
            temp_v1 = (u32) (arg1 & 0xFF) >> 3;
            if (temp_v1 != 0) {
                var_v0_2 = D_8010DD08_ovl_01 + temp_v1;
            } else {
                var_v0_2 = D_8010DD08_ovl_01 + 1;
            }
            D_8010DD08_ovl_01 = var_v0_2;
            temp_a1 = arg1 & 0xFF;
            if (temp_a1 < D_8010DD08_ovl_01) {
                D_8010DD08_ovl_01 = temp_a1;
            }
        } else if (var_a0 < D_8010DBA4_ovl_01) {
            temp_v1_2 = (u32) (arg1 & 0xFF) >> 3;
            if (temp_v1_2 != 0) {
                var_v0_3 = D_8010DD08_ovl_01 - temp_v1_2;
            } else {
                var_v0_3 = D_8010DD08_ovl_01 - 1;
            }
            D_8010DD08_ovl_01 = var_v0_3;
            temp_a1_2 = arg1 & 0xFF;
            if (temp_a1_2 < -D_8010DD08_ovl_01) {
                D_8010DD08_ovl_01 = -temp_a1_2;
            }
        } else if ((D_8010DBA5_ovl_01 < var_a0) || (var_a0 < D_8010DBA6_ovl_01)) {
            var_v0_4 = D_8010DBA6_ovl_01 + 0x80;
            if (var_a0 < D_8010DBA6_ovl_01) {
                var_a0_2 = (var_a0 - D_8010DBA6_ovl_01) << 8;
                if (var_v0_4 < 0) {
                    var_v0_4 = D_8010DBA6_ovl_01 + 0x8F;
                }
            } else {
                var_v0_4 = 0x80 - D_8010DBA5_ovl_01;
                var_a0_2 = (var_a0 - D_8010DBA5_ovl_01) << 8;
                if (var_v0_4 < 0) {
                    var_v0_4 += 0xF;
                }
            }
            D_8010DD08_ovl_01 = (s32) ((s32) ((var_a0_2 / (s32) (var_v0_4 >> 4)) * (arg1 & 0xFF)) / (s8) D_8010DBA2_ovl_01) >> 8;
        } else {
            D_8010DD08_ovl_01 = 0;
        }
        M2C_FIELD(arg0, u16 *, 0x66) = (u16) (M2C_FIELD(arg0, u16 *, 0x66) + D_8010DD0A_ovl_01);
        return;
    }
    temp_s0 = M2C_FIELD(&D_800C7650_ovl_01, s8 *, 0x18210);
    temp_s1 = -M2C_FIELD(&D_800C7650_ovl_01, s8 *, 0x18211);
    temp_fs1 = func_80047DA0_ovl_01((f32) temp_s1, (f32) temp_s0) - D_800B8EEC_ovl_01;
    temp_fs0 = (f32) ((temp_s0 * temp_s0) + (temp_s1 * temp_s1));
    temp_fs0_2 = temp_fs0 * func_80048090_ovl_01(temp_fs0);
    D_8010DBAC_ovl_01 = temp_fs1;
    D_8010DD10_ovl_01 = (s32) temp_fs0_2;
    M2C_FIELD(arg0, u16 *, 0x66) = (u16) (s32) (((f32) ((f64) (D_8010DD0C_ovl_01 + temp_fs1) + D_800B8EF0_ovl_01) * D_800B8EF8_ovl_01) / D_800B8EFC_ovl_01);
}
