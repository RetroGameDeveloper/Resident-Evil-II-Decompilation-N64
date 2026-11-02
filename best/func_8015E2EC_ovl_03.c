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
s32 func_800439B8_ovl_01(s32, void *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800DF650_ovl_01;
extern M2C_UNK D_80160848_ovl_03;
extern u8 D_80160BA5_ovl_03;
extern M2C_UNK D_80160BB8_ovl_03;

void func_8015E2EC_ovl_03(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp10;
    s32 sp18;
    M2C_UNK *sp1C;
    M2C_UNK *var_t1;
    s32 temp_s5;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_t0;
    s32 var_v1;
    u16 temp_v1;
    u32 temp_fp;
    u32 var_s6;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 var_s7;
    void *temp_a1;
    void *temp_s3;

    func_80043650_ovl_01();
    if (arg3 != 0) {
        var_s7 = D_80160BA5_ovl_03;
        var_s6 = 0;
    } else {
        var_s7 = 8 - D_80160BA5_ovl_03;
        var_s6 = 0;
    }
    var_t1 = &D_80160BB8_ovl_03;
    temp_s3 = &D_80160BB8_ovl_03 - 0x1C;
    var_s2 = 2;
    sp10 = arg2 * var_s7;
    do {
        var_s1 = 0;
        temp_s5 = var_s6 * 2;
        temp_fp = (u32) (sp10 * var_s7 * var_s7 * var_s7) >> 0xC;
        var_s0 = 2;
        var_t0 = arg2 - temp_fp;
        var_v1 = var_s2;
loop_5:
        temp_a1 = (var_v1 * 0x28) + var_t1;
        temp_v1 = M2C_FIELD((((temp_s5 + var_s0) * 0xC) + &D_80160848_ovl_03), u16 *, 2);
        M2C_FIELD(temp_a1, u8 *, 2) = 0x80U;
        M2C_FIELD(temp_a1, u8 *, 1) = 0x80U;
        M2C_FIELD(temp_a1, u8 *, 0) = 0x80U;
        M2C_FIELD(temp_a1, u16 *, 6) = temp_v1;
        if (M2C_FIELD(temp_s3, u8 *, 9) != 0) {
            if (var_s6 == arg1) {
                if (arg3 != 0) {
                    M2C_FIELD(temp_a1, u16 *, 6) = (u16) (temp_v1 - temp_fp);
                } else {
                    M2C_FIELD(temp_a1, u16 *, 6) = (u16) (M2C_FIELD(temp_a1, u16 *, 6) - var_t0);
                }
            } else {
                temp_v0 = M2C_FIELD(temp_s3, u8 *, 0xA);
                M2C_FIELD(temp_a1, u8 *, 2) = temp_v0;
                M2C_FIELD(temp_a1, u8 *, 1) = temp_v0;
                M2C_FIELD(temp_a1, u8 *, 0) = temp_v0;
            }
        }
        if (var_s6 == arg0) {
            if (M2C_FIELD(temp_s3, u8 *, 9) == 8) {
                if (var_s1 == 0) {
                    M2C_FIELD(((M2C_FIELD(&D_800DF650_ovl_01, u8 *, 0x538) * 0x14) + (var_s2 * 0x28) + temp_s3), s16 *, 0x26) = 0;
                } else {
                    M2C_FIELD(((M2C_FIELD(&D_800DF650_ovl_01, u8 *, 0x538) * 0x14) + ((temp_s5 + var_s0) * 0x28) + temp_s3), s16 *, 0x26) = 0;
                }
            } else {
                if (var_s1 == 0) {
                    M2C_FIELD(((M2C_FIELD(&D_800DF650_ovl_01, u8 *, 0x538) * 0x14) + (var_s2 * 0x28) + temp_s3), s16 *, 0x26) = 0;
                } else {
                    M2C_FIELD(((M2C_FIELD(&D_800DF650_ovl_01, u8 *, 0x538) * 0x14) + ((temp_s5 + var_s0) * 0x28) + temp_s3), s16 *, 0x26) = 0;
                }
                temp_v0_2 = M2C_FIELD(temp_s3, u8 *, 7) + 0x80;
                M2C_FIELD(temp_a1, u8 *, 2) = temp_v0_2;
                M2C_FIELD(temp_a1, u8 *, 1) = temp_v0_2;
                M2C_FIELD(temp_a1, u8 *, 0) = temp_v0_2;
            }
        } else {
            M2C_FIELD(((M2C_FIELD(&D_800DF650_ovl_01, u8 *, 0x538) * 0x14) + ((temp_s5 + var_s0) * 0x28) + temp_s3), s16 *, 0x26) = 0x100;
        }
        var_s0 += 1;
        var_s1 += 1;
        sp18 = var_t0;
        sp1C = var_t1;
        M2C_FIELD(&D_800DF650_ovl_01, s32 *, 0x204) = func_800439B8_ovl_01(M2C_FIELD(&D_800DF650_ovl_01, s32 *, 0x204), temp_a1, 0, 0);
        var_v1 = var_s2 + var_s1;
        if (var_s1 == 0) {
            goto loop_5;
        }
        var_s6 += 1;
        var_s2 += 2;
    } while (var_s6 < 3U);
}
