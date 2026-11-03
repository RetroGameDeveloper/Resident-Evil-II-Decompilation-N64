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

M2C_UNK func_8017FF94_ovl_02();                     /* extern */
s32 func_8017FFF0_ovl_02(s32);                      /* extern */
extern M2C_UNK D_80185580_ovl_02;
extern s32 D_80185690_ovl_02;
extern s32 D_8018569C_ovl_02;
extern s32 D_801856A8_ovl_02;
extern s32 D_801856C0_ovl_02;
extern s32 D_801856C4_ovl_02;
extern s32 D_801856C8_ovl_02;
extern s32 D_801856CC_ovl_02;
extern s32 D_801856D0_ovl_02;
extern s32 D_801856D4_ovl_02;
extern s32 D_801856D8_ovl_02;
extern s32 D_801856DC_ovl_02;
extern s32 D_801856E0_ovl_02;
extern s32 D_801856E4_ovl_02;
extern s32 D_801856E8_ovl_02;
extern s32 D_80185708_ovl_02;
extern s32 D_80185720_ovl_02;
extern s32 D_80185728_ovl_02;
extern s32 D_80185738_ovl_02;
extern s32 D_80185744_ovl_02;
extern s32 D_80185748_ovl_02;
extern s32 D_80185754_ovl_02;
extern s32 D_80185758_ovl_02;
extern s32 D_80185770_ovl_02;
extern M2C_UNK D_8018577C_ovl_02;
extern s32 D_80185788_ovl_02;
extern s32 D_80185798_ovl_02;
extern M2C_UNK D_801857A4_ovl_02;
extern s32 D_80185BC0_ovl_02;
extern s32 D_80185BC4_ovl_02;

void func_80180FA0_ovl_02(void) {
    s32 *var_s1;
    s32 *var_s2;
    s32 *var_s3;
    s32 *var_s5;
    s32 temp_a0_2;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_lo;
    s32 var_s6;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s8 *temp_a0;
    s8 var_a1;

    D_801856C0_ovl_02 = func_8017FFF0_ovl_02(0x400) + 0x180;
    var_a1 = -0x180;
    do {
        temp_a0 = D_801856C0_ovl_02 + var_a1;
        if (var_a1 >= 0) {
            if (var_a1 >= 0x100) {
                *temp_a0 = -1;
            } else {
                *temp_a0 = var_a1;
            }
        } else {
            *temp_a0 = 0;
        }
        var_a1 += 1;
    } while (var_a1 < 0x280);
    if (D_80185BC0_ovl_02 == 0) {
        D_80185708_ovl_02 = 1;
        D_80185738_ovl_02 = 1;
        D_80185720_ovl_02 = 3;
        D_80185728_ovl_02 = 1;
        D_801856DC_ovl_02 = 1;
        D_80185798_ovl_02 = 5;
    }
    var_v0 = D_801856C4_ovl_02 + 0xF;
    if (var_v0 < 0) {
        var_v0 = D_801856C4_ovl_02 + 0x1E;
    }
    D_801856CC_ovl_02 = var_v0 >> 4;
    if (D_80185BC0_ovl_02 != 0) {
        if (D_80185708_ovl_02 == 0) {
            var_v0_2 = D_801856C8_ovl_02 + 0x1F;
            if (var_v0_2 < 0) {
                var_v0_2 = D_801856C8_ovl_02 + 0x3E;
            }
            var_v1 = (var_v0_2 >> 5) * 2;
        } else {
            goto block_18;
        }
    } else {
block_18:
        var_v0_3 = D_801856C8_ovl_02 + 0xF;
        if (var_v0_3 < 0) {
            var_v0_3 = D_801856C8_ovl_02 + 0x1E;
        }
        var_v1 = var_v0_3 >> 4;
    }
    D_801856D0_ovl_02 = var_v1;
    var_v1_2 = D_801856CC_ovl_02 * 0x10;
    D_801856D4_ovl_02 = var_v1_2;
    temp_a0_2 = D_801856D0_ovl_02 * 0x10;
    D_801856D8_ovl_02 = temp_a0_2;
    if (D_801856DC_ovl_02 != 3) {
        var_v1_2 = var_v1_2 >> 1;
    }
    D_801856E0_ovl_02 = var_v1_2;
    var_v1_3 = temp_a0_2;
    if (D_801856DC_ovl_02 == 1) {
        var_v1_3 = var_v1_3 >> 1;
    }
    var_s6 = 0;
    var_s1 = &D_80185770_ovl_02;
    var_s5 = &D_801856A8_ovl_02;
    var_s3 = &D_8018569C_ovl_02;
    var_s2 = &D_80185690_ovl_02;
    D_801856E4_ovl_02 = var_v1_3;
    D_801856E8_ovl_02 = *(((D_801856DC_ovl_02 - 1) * 4) + &D_80185580_ovl_02);
    do {
        if (var_s1 == &D_80185770_ovl_02) {
            var_lo = D_801856D4_ovl_02 * D_801856D8_ovl_02;
        } else {
            var_lo = D_801856E0_ovl_02 * D_801856E4_ovl_02;
        }
        *var_s2 = func_8017FFF0_ovl_02(var_lo);
        *var_s3 = func_8017FFF0_ovl_02(var_lo);
        *var_s5 = func_8017FFF0_ovl_02(var_lo);
        if (M2C_FIELD(&D_801857A4_ovl_02, s32 *, 0x420) == 2) {
            var_a0 = D_80185744_ovl_02 * D_80185748_ovl_02;
            if (var_s1 != &D_80185770_ovl_02) {
                var_v0_4 = var_a0;
                if (var_a0 < 0) {
                    var_v0_4 = var_a0 + 3;
                }
                var_a0 = var_v0_4 >> 2;
            }
            var_a0_2 = D_80185744_ovl_02 * D_80185748_ovl_02;
            *var_s1 = func_8017FFF0_ovl_02(var_a0);
            if (var_s1 != &D_80185770_ovl_02) {
                var_v0_5 = var_a0_2;
                if (var_a0_2 < 0) {
                    var_v0_5 = var_a0_2 + 3;
                }
                var_a0_2 = var_v0_5 >> 2;
            }
            *(var_s6 + &D_8018577C_ovl_02) = func_8017FFF0_ovl_02(var_a0_2);
        }
        var_s6 += 4;
        var_s1 += 4;
        var_s5 += 4;
        var_s3 += 4;
        var_s2 += 4;
    } while ((s32) var_s1 < (s32) (&D_80185770_ovl_02 + 0xC));
    if (D_80185BC4_ovl_02 == 2) {
        D_80185788_ovl_02 = func_8017FFF0_ovl_02(D_80185744_ovl_02 * ((s32) (D_80185748_ovl_02 * D_80185758_ovl_02) / (s32) D_80185754_ovl_02) * 2);
    }
    func_8017FF94_ovl_02();
}
