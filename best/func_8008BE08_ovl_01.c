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

s32 func_800837DC_ovl_01(s32 *, M2C_UNK);           /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern s32 D_800E8C80_ovl_01;
extern M2C_UNK D_8012BE18_ovl_01;
extern M2C_UNK D_8012BF38_ovl_01;

void func_8008BE08_ovl_01(s32 arg0) {
    M2C_UNK *var_a1_2;
    s32 var_a2;
    s8 var_v1;
    u32 var_s0;
    void *temp_v0;
    void *var_a1;
    void *var_v0;

    var_s0 = 0;
    if ((u32) (arg0 - 0xE) < 2U) {
        M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x1853A) = (u8) M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 8);
        M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x1853B) = (u8) M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x21488);
        func_80083788_ovl_01(&D_800E8C80_ovl_01, 0x7FU);
        var_a2 = 0xB;
        if (arg0 == 0xE) {
            var_a2 = 0;
            M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0xA) = 3U;
            M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 8) = 0U;
        } else {
            M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0xA) = 0U;
            M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 8) = 0x80U;
        }
        M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x21488) = 8U;
        if (0U < 0xBU) {
            var_a1 = (0 * 4) + &D_800C7650_ovl_01;
            do {
                M2C_FIELD(var_a1, u8 *, 0x1853C) = (u8) M2C_FIELD(var_a1, u8 *, 0x21818);
                M2C_FIELD(var_a1, u8 *, 0x1853D) = (u8) M2C_FIELD(var_a1, u8 *, 0x21819);
                M2C_FIELD(var_a1, u8 *, 0x1853E) = (u8) M2C_FIELD(var_a1, u8 *, 0x2181A);
                temp_v0 = ((var_a2 + var_s0) * 3) + &D_8012BE18_ovl_01;
                M2C_FIELD(var_a1, u8 *, 0x21818) = (u8) M2C_FIELD(temp_v0, u8 *, 0);
                M2C_FIELD(var_a1, u8 *, 0x21819) = (u8) M2C_FIELD(temp_v0, u8 *, 1);
                var_s0 += 1;
                M2C_FIELD(var_a1, u8 *, 0x2181A) = (u8) M2C_FIELD(temp_v0, u8 *, 2);
                var_a1 += 4;
            } while (var_s0 < 0xBU);
        }
    } else {
        if (func_800837DC_ovl_01(&D_800E8C80_ovl_01, 0x7F) != 0) {
            var_a1_2 = &D_800C7650_ovl_01;
            do {
                M2C_FIELD(var_a1_2, u8 *, 0x21818) = (u8) M2C_FIELD(var_a1_2, u8 *, 0x1853C);
                M2C_FIELD(var_a1_2, u8 *, 0x21819) = (u8) M2C_FIELD(var_a1_2, u8 *, 0x1853D);
                var_s0 += 1;
                M2C_FIELD(var_a1_2, u8 *, 0x2181A) = (u8) M2C_FIELD(var_a1_2, u8 *, 0x1853E);
                var_a1_2 += 4;
            } while (var_s0 < 0xAU);
            M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x21488) = (u8) M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x1853B);
            M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 8) = (u8) M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x1853A);
            if ((M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x1853A) & 0xFF) == 0x80) {
                M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0xA) = 0U;
            } else {
                M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0xA) = (u8) M2C_FIELD((&D_800C7650_ovl_01 + (M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x1853A) * 4)), u8 *, 0x21818);
            }
            if (arg0 & 1) {
                var_v0 = &D_800C7650_ovl_01 + 0x20000;
                var_v1 = 0x30;
            } else {
                var_v0 = &D_800C7650_ovl_01 + 0x20000;
                var_v1 = 0x2F;
            }
            M2C_FIELD(var_v0, s8 *, 0x1840) = var_v1;
            M2C_FIELD(var_v0, s8 *, 0x1841) = 1;
            M2C_FIELD(var_v0, s8 *, 0x1842) = 0;
        }
        func_800837B0_ovl_01(&D_800E8C80_ovl_01, 0x7FU);
    }
}
