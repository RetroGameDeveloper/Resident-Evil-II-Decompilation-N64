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
s32 func_800439B8_ovl_01(s32, s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_8004789C_ovl_01(s32, u8, u8, u8);      /* extern */
M2C_UNK func_800478E8_ovl_01(s32, s32, s32);        /* extern */
extern s32 D_800C527C_ovl_01;
extern M2C_UNK D_800DF650_ovl_01;
extern M2C_UNK D_8012BF38_ovl_01;
extern M2C_UNK D_801310D8_ovl_01;

void func_800965C4_ovl_01(s32 arg0) {
    s32 temp_a1;
    s32 temp_s3;
    s32 temp_s4;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    u32 temp_v1;
    u32 var_a1;
    u8 var_v0;
    void *temp_v0;

    var_a1 = D_800C527C_ovl_01 + 0x3BB64;
    temp_v1 = D_800C527C_ovl_01 + 0x3C004;
    if (var_a1 < temp_v1) {
        var_a1 = temp_v1;
    }
    var_s1 = var_a1 + 0xA3C;
    var_s2 = 2;
    temp_s4 = M2C_FIELD(&D_8012BF38_ovl_01, s16 *, 0x34) + M2C_FIELD(&D_8012BF38_ovl_01, s8 *, 0x22);
    temp_s3 = M2C_FIELD(&D_8012BF38_ovl_01, s16 *, 0x36) + M2C_FIELD(&D_8012BF38_ovl_01, s8 *, 0x23);
    if (M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0x2B) != 0) {
        if ((u8) M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0x2A) < 0x46U) {
            M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0x2B) = 0U;
        }
        var_v0 = M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0x2A) - 3;
    } else {
        var_v0 = M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0x2A) + 3;
        if ((u8) M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0x2A) >= 0x7DU) {
            M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0x2B) = 1U;
            var_v0 = M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0x2A) + 3;
        }
    }
    M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0x2A) = var_v0;
    if (M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0xD) == 0xA) {
        var_s4 = temp_s4 + 0x28;
        var_s3 = temp_s3 - 0x26;
    } else {
        var_s4 = temp_s4 + ((M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0xD) & 1) * 0x28);
        var_s3 = temp_s3 + (((u8) M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0xD) >> 1) * 0x1E);
    }
    do {
        var_s2 -= 1;
        temp_v0 = ((var_s2 + (arg0 * 3)) * 4) + &D_801310D8_ovl_01;
        func_800478E8_ovl_01(var_s1, (M2C_FIELD(temp_v0, u16 *, 0) + var_s4) & 0xFFFF, (M2C_FIELD(temp_v0, u16 *, 2) + var_s3) & 0xFFFF);
        func_8004789C_ovl_01(var_s1, M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0x2A), M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0x2A), M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0x2A));
        func_80043650_ovl_01();
        temp_a1 = var_s1;
        var_s1 += 0x14;
        M2C_FIELD(&D_800DF650_ovl_01, s32 *, 0x208) = func_800439B8_ovl_01(M2C_FIELD(&D_800DF650_ovl_01, s32 *, 0x208), temp_a1, 0, 0);
    } while (var_s2 != 0);
}
