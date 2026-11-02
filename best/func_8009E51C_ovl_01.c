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

M2C_UNK func_80043650_ovl_01();                     /* extern */
s32 func_8004500C_ovl_01(s32, s32 *, M2C_UNK, s16); /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_80132194_ovl_01;
extern M2C_UNK D_801326A8_ovl_01;
extern u16 D_801326D0_ovl_01;
extern s16 D_801326D2_ovl_01;
extern u16 D_801326D4_ovl_01;
extern s16 D_801326D6_ovl_01;
extern s16 D_801326D8_ovl_01;
extern u8 *D_801326E8_ovl_01;
extern M2C_UNK D_801326EC_ovl_01;

void func_8009E51C_ovl_01(void) {
    s16 temp_a3;
    s16 temp_v1_2;
    s16 var_s4;
    s32 *temp_a1;
    s32 *var_s3;
    s32 temp_a0_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s8 temp_a2;
    s8 temp_t0;
    u8 *var_s1;
    u8 *var_s2;
    u8 temp_a0;
    void *temp_t4;
    void *var_s0;

    func_80043650_ovl_01();
    if (D_801326D0_ovl_01 != 0) {
        D_801326D0_ovl_01 -= 1;
        D_801326D2_ovl_01 = 0;
    } else {
        D_801326D0_ovl_01 = 0xA;
        D_801326D2_ovl_01 = -1;
    }
    if (D_801326D4_ovl_01 != 0) {
        D_801326D4_ovl_01 -= 1;
        D_801326D6_ovl_01 = 0;
    } else {
        D_801326D4_ovl_01 = 3;
        D_801326D6_ovl_01 = -1;
    }
    var_s2 = D_801326E8_ovl_01;
    var_s4 = D_801326D8_ovl_01;
    var_s3 = (M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x18538) * 0x500) + &D_801326EC_ovl_01;
    var_s1 = var_s2 + 8;
    var_s0 = var_s3 + 3;
    do {
        var_s4 -= 1;
        if (M2C_FIELD(var_s1, u8 *, -7) & 0x10) {
            *var_s2 = 0;
        }
        temp_a0 = *var_s2;
        if ((temp_a0 & 1) && (((u8) M2C_FIELD(var_s1, u8 *, -7) >> 4) == 2)) {
            temp_t4 = (M2C_FIELD(var_s1, u8 *, -5) * 0xA) + &D_80132194_ovl_01;
            if (temp_a0 & 4) {
                temp_v0 = M2C_FIELD(var_s1, s32 *, 0) + 0x20202;
                M2C_FIELD(var_s1, s32 *, 0) = temp_v0;
                if (temp_v0 > 0x60605F) {
                    M2C_FIELD(var_s1, s32 *, 0) = 0x606060;
                    *var_s2 &= 0xF9;
                }
            }
            if (*var_s2 & 8) {
                temp_v0_2 = M2C_FIELD(var_s1, s32 *, 0) + 0xFFFEFEFF;
                M2C_FIELD(var_s1, s32 *, 0) = temp_v0_2;
                if (temp_v0_2 <= 0) {
                    M2C_FIELD(var_s1, s32 *, 0) = 0;
                    *var_s2 &= 0xF7;
                }
            }
            if (*var_s2 & 0x20) {
                M2C_FIELD(temp_t4, u8 *, 8) = (u8) (M2C_FIELD(temp_t4, u8 *, 8) - (D_801326D6_ovl_01 * 2));
                M2C_FIELD(temp_t4, u8 *, 9) = (u8) (M2C_FIELD(temp_t4, u8 *, 9) - (D_801326D6_ovl_01 * 2));
            }
            if (*var_s2 & 0x40) {
                M2C_FIELD(temp_t4, u8 *, 8) = (u8) (M2C_FIELD(temp_t4, u8 *, 8) + (D_801326D6_ovl_01 * 2));
                M2C_FIELD(temp_t4, u8 *, 9) = (u8) (M2C_FIELD(temp_t4, u8 *, 9) + (D_801326D6_ovl_01 * 2));
            }
            *var_s3 = M2C_FIELD(var_s1, s32 *, 0) + 0x2E000000;
            temp_a0_2 = (s32) (0x140 - M2C_FIELD(temp_t4, u8 *, 8)) / 2;
            temp_v1 = (s32) (0xF0 - M2C_FIELD(temp_t4, u8 *, 9)) / 2;
            temp_t0 = M2C_FIELD(temp_t4, u8 *, 4) + M2C_FIELD(temp_t4, u8 *, 6);
            M2C_FIELD(var_s0, s16 *, 1) = (s16) temp_a0_2;
            M2C_FIELD(var_s0, s16 *, 3) = (s16) temp_v1;
            temp_a3 = temp_a0_2 + M2C_FIELD(temp_t4, u8 *, 8);
            M2C_FIELD(var_s0, u8 *, 5) = (u8) M2C_FIELD(temp_t4, u8 *, 4);
            temp_a1 = var_s3;
            M2C_FIELD(var_s0, s16 *, 7) = 0;
            M2C_FIELD(var_s0, s16 *, 9) = temp_a3;
            M2C_FIELD(var_s0, s16 *, 0xB) = (s16) temp_v1;
            M2C_FIELD(var_s0, s8 *, 0xD) = temp_t0;
            M2C_FIELD(var_s0, u8 *, 6) = (u8) M2C_FIELD(temp_t4, u8 *, 5);
            var_s3 += 0x28;
            M2C_FIELD(var_s0, u8 *, 0xE) = (u8) M2C_FIELD(temp_t4, u8 *, 5);
            temp_v1_2 = temp_v1 + M2C_FIELD(temp_t4, u8 *, 9);
            M2C_FIELD(var_s0, s16 *, 0x11) = (s16) temp_a0_2;
            M2C_FIELD(var_s0, s16 *, 0x13) = temp_v1_2;
            M2C_FIELD(var_s0, s16 *, 0xF) = (s16) (M2C_FIELD(temp_t4, u16 *, 0) + 0xA0);
            temp_a2 = M2C_FIELD(temp_t4, u8 *, 5) + M2C_FIELD(temp_t4, u8 *, 7);
            M2C_FIELD(var_s0, s8 *, 0x16) = temp_a2;
            M2C_FIELD(var_s0, s8 *, 0x1E) = temp_a2;
            M2C_FIELD(var_s0, s16 *, 0x19) = temp_a3;
            M2C_FIELD(var_s0, s16 *, 0x1B) = temp_v1_2;
            M2C_FIELD(var_s0, s8 *, 0x1D) = temp_t0;
            M2C_FIELD(var_s0, M2C_UNK **, 0x21) = &D_801326A8_ovl_01;
            M2C_FIELD(var_s0, u8 *, 0x15) = (u8) M2C_FIELD(temp_t4, u8 *, 4);
            M2C_FIELD(var_s0, s8 *, 0) = 4;
            var_s0 += 0x28;
            M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18204) = func_8004500C_ovl_01(M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18204), temp_a1, 0, temp_a3);
        }
        var_s1 += 0xC;
        var_s2 += 0xC;
    } while (var_s4 != 0);
}
