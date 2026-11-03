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

M2C_UNK func_80047B34_ovl_01(M2C_UNK *, u8);        /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_80160848_ovl_03;
extern M2C_UNK D_80160B9C_ovl_03;
extern M2C_UNK D_80160BB8_ovl_03;
extern M2C_UNK D_80161400_ovl_03;
extern M2C_UNK D_8016141C_ovl_03;

void func_8015E168_ovl_03(void) {
    M2C_UNK *temp_a0;
    M2C_UNK *var_s0;
    M2C_UNK *var_s1;
    M2C_UNK *var_s3;
    s16 var_v0;
    u32 var_s2;
    u32 var_s4;
    u8 temp_a1;

    var_s4 = 0;
    var_s3 = &D_80160BB8_ovl_03;
    do {
        var_s2 = 0;
        var_s1 = &D_80160848_ovl_03;
        var_s0 = var_s3;
loop_2:
        M2C_FIELD(var_s0, s32 *, 0) = 0x808080;
        M2C_FIELD(var_s0, s8 *, 3) = 0;
        M2C_FIELD(var_s0, M2C_UNK **, 0xC) = &D_8016141C_ovl_03;
        M2C_FIELD(var_s0, u16 *, 4) = (u16) M2C_FIELD(var_s1, u16 *, 0);
        M2C_FIELD(var_s0, u16 *, 6) = (u16) M2C_FIELD(var_s1, u16 *, 2);
        M2C_FIELD(var_s0, u16 *, 0x10) = (u16) M2C_FIELD(var_s1, u16 *, 4);
        M2C_FIELD(var_s0, u16 *, 0x12) = (u16) M2C_FIELD(var_s1, u16 *, 6);
        M2C_FIELD(var_s0, u8 *, 8) = (u8) M2C_FIELD(var_s1, u8 *, 8);
        M2C_FIELD(var_s0, u8 *, 9) = (u8) M2C_FIELD(var_s1, u8 *, 9);
        if (var_s2 < 0x2CU) {
            M2C_FIELD(var_s0, s16 *, 0xA) = 0;
        } else {
            if (var_s2 == 0x30) {
                var_v0 = 0x140;
                goto block_8;
            }
            var_v0 = 0x100;
            if (var_s2 >= 0x31U) {
                M2C_FIELD(var_s0, M2C_UNK **, 0xC) = &D_80161400_ovl_03;
                M2C_FIELD(var_s0, s16 *, 0xA) = 0;
            } else {
block_8:
                M2C_FIELD(var_s0, s16 *, 0xA) = var_v0;
            }
        }
        temp_a1 = M2C_FIELD(var_s1, u8 *, 0xA);
        var_s1 += 0xC;
        temp_a0 = var_s0;
        var_s0 += 0x28;
        var_s2 += 1;
        func_80047B34_ovl_01(temp_a0, temp_a1);
        if (var_s2 < 0x34U) {
            goto loop_2;
        }
        var_s4 += 1;
        var_s3 += 0x14;
    } while (var_s4 < 2U);
    if (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) & 1) {
        M2C_FIELD(&D_80160B9C_ovl_03, u16 *, 0x7A0) = (u16) (M2C_FIELD(&D_80160B9C_ovl_03, u16 *, 0x7A0) + 0x10);
        M2C_FIELD(&D_80160B9C_ovl_03, u16 *, 0x7B4) = (u16) (M2C_FIELD(&D_80160B9C_ovl_03, u16 *, 0x7B4) + 0x10);
        M2C_FIELD(&D_80160B9C_ovl_03, u16 *, 0x7A2) = (u16) (M2C_FIELD(&D_80160B9C_ovl_03, u16 *, 0x7A2) - 4);
        M2C_FIELD(&D_80160B9C_ovl_03, u16 *, 0x7B6) = (u16) (M2C_FIELD(&D_80160B9C_ovl_03, u16 *, 0x7B6) - 4);
    }
}
