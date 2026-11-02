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

s32 func_8008C498_ovl_01(M2C_UNK);                  /* extern */
M2C_UNK func_8008CB28_ovl_01(s32, s32);             /* extern */
M2C_UNK func_8008CBFC_ovl_01(s32);                  /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_8012BF38_ovl_01;

void func_8008C548_ovl_01(void) {
    s32 temp_v0;
    s32 temp_v0_3;
    s32 var_s2;
    u32 temp_s0_2;
    u32 var_s1;
    u8 temp_s0;
    void *temp_s0_3;
    void *temp_v0_2;
    void *temp_v1;
    void *var_s3;

    temp_v0 = func_8008C498_ovl_01(0);
    var_s1 = temp_v0 + 1;
    if (temp_v0 == 9) {
        func_8008CBFC_ovl_01(0xD);
        temp_v0_2 = &D_800C7650_ovl_01 + 0x20024;
        M2C_FIELD(temp_v0_2, s8 *, 0x1818) = 0;
        M2C_FIELD(temp_v0_2, s8 *, 0x1819) = 0;
        M2C_FIELD(temp_v0_2, s8 *, 0x181A) = 0;
        return;
    }
    if ((temp_v0 >= 0) && (var_s1 < 0xAU)) {
        temp_v0_3 = var_s1 * 4;
        var_s3 = temp_v0_3 + &D_800C7650_ovl_01;
        var_s2 = temp_v0_3 - 4;
        do {
            temp_s0 = var_s1 - 1;
            func_8008CB28_ovl_01((var_s1 >> 1) + var_s1, (temp_s0 >> 1) - 1 + var_s1);
            temp_v1 = &D_800C7650_ovl_01 + var_s2;
            M2C_FIELD(temp_v1, u8 *, 0x21818) = (u8) M2C_FIELD(var_s3, u8 *, 0x21818);
            M2C_FIELD(temp_v1, u8 *, 0x21819) = (u8) M2C_FIELD(var_s3, u8 *, 0x21819);
            M2C_FIELD(temp_v1, u8 *, 0x2181A) = (u8) M2C_FIELD(var_s3, u8 *, 0x2181A);
            if (M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 8) == var_s1) {
                M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 8) = temp_s0;
            }
            if (M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0x358C) == var_s1) {
                M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0x358C) = temp_s0;
            }
            var_s3 += 4;
            var_s1 += 1;
            var_s2 += 4;
        } while (var_s1 < (u8) M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x21488));
        temp_s0_2 = var_s1 - 1;
        func_8008CBFC_ovl_01((temp_s0_2 >> 1) - 1 + var_s1);
        temp_s0_3 = &D_800C7650_ovl_01 + (temp_s0_2 * 4);
        M2C_FIELD(temp_s0_3, s8 *, 0x21818) = 0;
        M2C_FIELD(temp_s0_3, s8 *, 0x21819) = 0;
        M2C_FIELD(temp_s0_3, s8 *, 0x2181A) = 0;
    }
}
