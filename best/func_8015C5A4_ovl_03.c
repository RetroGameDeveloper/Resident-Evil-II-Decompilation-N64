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
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2 -mcpu=r4600, tried by autopilot */

s32 func_80007000();
s32 func_80077B0C_ovl_01();
s32 func_8015E2EC_ovl_03();
s32 func_8015EBB8_ovl_03();
extern char D_800C7650_ovl_01[];
extern s32 D_800F9DD0_ovl_01;
extern f64 D_801603D0_ovl_03;
extern f64 D_801603D8_ovl_03;
extern f64 D_801603E0_ovl_03;
extern f64 D_801603E8_ovl_03;
extern char D_80160B9C_ovl_03[];
extern u8 D_80160BA2_ovl_03;
extern s32 D_80161470_ovl_03;
extern s32 D_8016148C_ovl_03;

void func_8015C5A4_ovl_03(void) {
    f32 temp_ft2;
    f32 temp_fv1;
    f32 var_ft0;
    f32 var_fv1;
    f64 temp_ft0;
    f64 temp_ft1;
    f64 var_fv0;
    s32 temp_a1;
    u8 temp_v0;
    u8 temp_v1;
    u8 temp_v1_2;

    switch (*(u8 *)(D_80160B9C_ovl_03 + 3)) { /* irregular */
    case 0:
        D_8016148C_ovl_03 = 0;
        *(u8 *)(D_80160B9C_ovl_03 + 0xA) = 0x80U;
        *(u8 *)(D_80160B9C_ovl_03 + 8) = 2U;
        *(u8 *)(D_80160B9C_ovl_03 + 9) = 0U;
        *(u8 *)(D_80160B9C_ovl_03 + 0xB) = 0U;
        *(u8 *)(D_80160B9C_ovl_03 + 7) = 0U;
        D_80161470_ovl_03 = 0;
        *(u8 *)(D_80160B9C_ovl_03 + 3) = 1U;
        /* fallthrough */
    case 1:
        *(u8 *)(D_80160B9C_ovl_03 + 0xA) = (u8) (*(u8 *)(D_80160B9C_ovl_03 + 0xA) - 0x10);
        temp_v1 = *(u8 *)(D_80160B9C_ovl_03 + 9) + 1;
        *(u8 *)(D_80160B9C_ovl_03 + 9) = temp_v1;
        *(u8 *)(D_80160B9C_ovl_03 + 0xB) = (u8) (*(u8 *)(D_80160B9C_ovl_03 + 0xB) + 0x10);
        if ((temp_v1 & 0xFF) == 8) {
            *(u8 *)(D_80160B9C_ovl_03 + 0xA) = 0U;
            *(u8 *)(D_80160B9C_ovl_03 + 0xB) = 0x80U;
            *(u8 *)(D_80160B9C_ovl_03 + 3) = (u8) (*(u8 *)(D_80160B9C_ovl_03 + 3) + 1);
        }
        break;
    case 2:
        if (*(u16 *)(D_800C7650_ovl_01 + 0x1825E) & 0x4000) {
            if (*(u8 *)(D_80160B9C_ovl_03 + 6) == 0) {
                *(u8 *)(D_80160B9C_ovl_03 + 6) = (u8) (*(u8 *)(D_80160B9C_ovl_03 + 6) + 1);
                func_80077B0C_ovl_01(0x04040000, 0);
            }
        }
        if (*(u16 *)(D_800C7650_ovl_01 + 0x1825E) & 0x1000) {
            if (*(u8 *)(D_80160B9C_ovl_03 + 6) != 0) {
                *(u8 *)(D_80160B9C_ovl_03 + 6) = (u8) (*(u8 *)(D_80160B9C_ovl_03 + 6) - 1);
                func_80077B0C_ovl_01(0x04040000, 0);
                goto block_17;
            }
            goto block_18;
        }
block_17:
        if (D_80160BA2_ovl_03 == 0) {
block_18:
            if ((*(u16 *)(D_800C7650_ovl_01 + 0x1825E) & 0x8000) && (D_8016148C_ovl_03 != 0)) {
                D_8016148C_ovl_03 -= 1;
                func_80077B0C_ovl_01(0x04040000, 0);
            }
            if (*(u16 *)(D_800C7650_ovl_01 + 0x1825E) & 0x2000) {
                if (D_8016148C_ovl_03 == 0) {
                    D_8016148C_ovl_03 = 1;
                    func_80077B0C_ovl_01(0x04040000, 0);
                }
            }
        }
        temp_v0 = (*(u8 *)(D_80160B9C_ovl_03 + 8)) + (*(u8 *)(D_80160B9C_ovl_03 + 7));
        *(u8 *)(D_80160B9C_ovl_03 + 7) = temp_v0;
        if ((u32) ((temp_v0 - 1) & 0xFF) >= 0x30U) {
            *(u8 *)(D_80160B9C_ovl_03 + 8) = (u8) -(*(u8 *)(D_80160B9C_ovl_03 + 8) & 0xFF);
        }
        if (*(s32 *)(D_800C7650_ovl_01 + 0x18268) & 0x2000) {
            func_80077B0C_ovl_01(0x04050000, 0);
            *(u8 *)(D_80160B9C_ovl_03 + 3) = 3U;
        }
        if ((*(s32 *)(D_800C7650_ovl_01 + 0x18268) & 0x1000) || (*(s32 *)(D_800C7650_ovl_01 + 0x18258) & 0x800)) {
            if (*(u8 *)(D_80160B9C_ovl_03 + 6) == 1) {
                func_80077B0C_ovl_01(0x04050000, 0);
                *(u8 *)(D_80160B9C_ovl_03 + 3) = 3U;
                *(s8 *)(D_80160B9C_ovl_03 + 0xD) = 0;
            } else {
                *(s8 *)(D_80160B9C_ovl_03 + 5) = 1;
                *(s8 *)(D_80160B9C_ovl_03 + 2) = 4;
                *(u8 *)(D_800C7650_ovl_01 + 0x21962) = (u8) (*(u8 *)(D_800C7650_ovl_01 + 0x21962) & 0xF);
                if (D_8016148C_ovl_03 & 1) {
                    temp_a1 = (func_80007000(D_800C7650_ovl_01 + 0x20000) * 0x41C64E6D) + 0x3039;
                    D_800F9DD0_ovl_01 = temp_a1;
                    temp_fv1 = (f32) ((((f64) (((temp_a1 >> 0x10) & 0x7FFF) % 32767) / D_801603D0_ovl_03) * D_801603D8_ovl_03) + D_801603E0_ovl_03);
                    var_ft0 = temp_fv1;
                    if (temp_fv1 < 0.0f) {
                        var_ft0 = -temp_fv1;
                    }
                    temp_ft2 = var_ft0 - (f32) (s32) var_ft0;
                    temp_ft0 = (f64) temp_ft2;
                    temp_ft1 = (f64) temp_fv1;
                    if (D_801603E8_ovl_03 < temp_ft0) {
                        if (!(temp_ft1 > 0.0)) {
                            var_fv1 = temp_fv1 - temp_ft2;
                        } else {
                            var_fv0 = temp_ft1 + (D_801603E0_ovl_03 - temp_ft0);
                            goto block_46;
                        }
                    } else if (!(temp_ft1 >= 0.0)) {
                        var_fv0 = temp_ft1 - (D_801603E0_ovl_03 - temp_ft0);
block_46:
                        var_fv1 = (f32) var_fv0;
                    } else {
                        var_fv1 = temp_fv1 - temp_ft2;
                    }
                    *(u8 *)(D_800C7650_ovl_01 + 0x21962) = (u8) (*(u8 *)(D_800C7650_ovl_01 + 0x21962) | ((s32) var_fv1 * 0x10));
                }
                func_80077B0C_ovl_01(0x04060000, 0);
            }
        }
        break;
    case 3:
        D_80161470_ovl_03 = 1;
        *(u8 *)(D_80160B9C_ovl_03 + 7) = 0U;
        *(u8 *)(D_80160B9C_ovl_03 + 0xA) = (u8) (*(u8 *)(D_80160B9C_ovl_03 + 0xA) + 0x10);
        *(u8 *)(D_80160B9C_ovl_03 + 0xB) = (u8) (*(u8 *)(D_80160B9C_ovl_03 + 0xB) - 0x10);
        temp_v1_2 = *(u8 *)(D_80160B9C_ovl_03 + 9) - 1;
        *(u8 *)(D_80160B9C_ovl_03 + 9) = temp_v1_2;
        if (!(temp_v1_2 & 0xFF)) {
            *(u8 *)(D_80160B9C_ovl_03 + 0xA) = 0x80U;
            *(u8 *)(D_80160B9C_ovl_03 + 0xB) = 0U;
            *(u8 *)(D_80160B9C_ovl_03 + 6) = 1U;
            *(s8 *)(D_80160B9C_ovl_03 + 2) = 0;
            *(u8 *)(D_80160B9C_ovl_03 + 3) = 0U;
        }
        break;
    }
    func_8015EBB8_ovl_03(D_80160BA2_ovl_03);
    func_8015E2EC_ovl_03(1, 1, 0x1B, D_80161470_ovl_03);
}
