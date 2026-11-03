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

s32 func_800439B8_ovl_01(s32, void *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800DF650_ovl_01;
extern u16 D_80160B78_ovl_03;
extern M2C_UNK D_80160B9C_ovl_03;
extern M2C_UNK D_80160BB8_ovl_03;
extern s32 D_8016148C_ovl_03;

void func_8015E8AC_ovl_03(s32 arg0) {
    s32 temp_v0_2;
    s32 var_a3;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_t0;
    s32 var_t1;
    s8 temp_v1;
    u16 *var_a2;
    u32 var_s1;
    u32 var_s1_2;
    u8 temp_v0;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a1;

    var_s1 = 0;
    var_a2 = &D_80160B78_ovl_03;
    do {
        var_s0 = 0;
loop_2:
        temp_a0 = ((*var_a2 + var_s0) * 0x28) + &D_80160BB8_ovl_03;
        temp_v0 = M2C_FIELD((&D_80160BB8_ovl_03 - 0x1C), u8 *, 0xB);
        var_s0 += 1;
        M2C_FIELD(temp_a0, u8 *, 2) = temp_v0;
        M2C_FIELD(temp_a0, u8 *, 1) = temp_v0;
        M2C_FIELD(temp_a0, u8 *, 0) = temp_v0;
        if (var_s0 == 0) {
            goto loop_2;
        }
        var_s1 += 1;
        var_a2 += 2;
    } while (var_s1 < 3U);
    var_s0_2 = 0;
    var_t1 = 0x4B0;
    var_t0 = 0x230;
    var_a3 = 0x140;
    do {
        if (arg0 == 0) {
            switch (D_8016148C_ovl_03) {            /* irregular */
            case 0:
                M2C_FIELD(((M2C_FIELD(&D_800DF650_ovl_01, u8 *, 0x538) * 0x14) + var_t0 + &D_80160B9C_ovl_03), s16 *, 0x26) = 0x100;
                if (var_s0_2 == 0) {
                    M2C_FIELD(((M2C_FIELD(&D_800DF650_ovl_01, u8 *, 0x538) * 0x14) + &D_80160B9C_ovl_03), s16 *, 0x166) = 0;
                } else {
                    M2C_FIELD(((M2C_FIELD(&D_800DF650_ovl_01, u8 *, 0x538) * 0x14) + var_a3 + &D_80160B9C_ovl_03), s16 *, 0x26) = 0;
                }
                break;
            case 1:
                M2C_FIELD(((M2C_FIELD(&D_800DF650_ovl_01, u8 *, 0x538) * 0x14) + var_a3 + &D_80160B9C_ovl_03), s16 *, 0x26) = 0x100;
                if (var_s0_2 == 0) {
                    M2C_FIELD(((M2C_FIELD(&D_800DF650_ovl_01, u8 *, 0x538) * 0x14) + &D_80160B9C_ovl_03), s16 *, 0x256) = 0;
                } else {
                    M2C_FIELD(((M2C_FIELD(&D_800DF650_ovl_01, u8 *, 0x538) * 0x14) + var_t0 + &D_80160B9C_ovl_03), s16 *, 0x26) = 0;
                }
                break;
            }
            M2C_FIELD(((M2C_FIELD(&D_800DF650_ovl_01, u8 *, 0x538) * 0x14) + var_t1 + &D_80160B9C_ovl_03), s16 *, 0x26) = 0x100;
        } else {
            M2C_FIELD(((M2C_FIELD(&D_800DF650_ovl_01, u8 *, 0x538) * 0x14) + var_a3 + &D_80160B9C_ovl_03), s16 *, 0x26) = 0x100;
            M2C_FIELD(((M2C_FIELD(&D_800DF650_ovl_01, u8 *, 0x538) * 0x14) + var_t0 + &D_80160B9C_ovl_03), s16 *, 0x26) = 0x100;
            if (var_s0_2 == 0) {
                M2C_FIELD(((M2C_FIELD(&D_800DF650_ovl_01, u8 *, 0x538) * 0x14) + &D_80160B9C_ovl_03), s16 *, 0x4D6) = 0;
            } else {
                M2C_FIELD(((M2C_FIELD(&D_800DF650_ovl_01, u8 *, 0x538) * 0x14) + var_t1 + &D_80160B9C_ovl_03), s16 *, 0x26) = 0x100;
            }
        }
        var_t1 += 0x28;
        var_t0 += 0x28;
        var_s0_2 += 1;
        var_a3 += 0x28;
    } while (var_s0_2 == 0);
    var_s1_2 = 0;
    temp_a1 = &D_80160BB8_ovl_03 - 0x1C;
    temp_a0_2 = ((&D_80160B78_ovl_03)[(u32) M2C_ERROR(/* Read from unset register $t2 */) >> 1] * 0x28) + &D_80160BB8_ovl_03;
    temp_v1 = M2C_FIELD(temp_a1, u8 *, 0xB) + M2C_FIELD(temp_a1, u8 *, 7);
    M2C_FIELD(temp_a0_2, s8 *, 2) = temp_v1;
    M2C_FIELD(temp_a0_2, s8 *, 1) = temp_v1;
    M2C_FIELD(temp_a0_2, s8 *, 0) = temp_v1;
    var_s0_3 = 0;
    do {
loop_25:
        temp_v0_2 = (&D_80160B78_ovl_03)[var_s1_2] + var_s0_3;
        var_s0_3 += 1;
        M2C_FIELD(&D_800DF650_ovl_01, s32 *, 0x204) = func_800439B8_ovl_01(M2C_FIELD(&D_800DF650_ovl_01, s32 *, 0x204), (temp_v0_2 * 0x28) + &D_80160BB8_ovl_03, 0, 0);
        if (var_s0_3 == 0) {
            goto loop_25;
        }
        var_s1_2 += 1;
        var_s0_3 = 0;
    } while (var_s1_2 < 3U);
}
