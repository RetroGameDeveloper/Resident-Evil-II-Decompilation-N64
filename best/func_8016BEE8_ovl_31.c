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

s32 func_80032EA4_ovl_01(void *, s16, s16, M2C_UNK); /* extern */
s32 func_80033634_ovl_01();                         /* extern */
u32 func_80040BE4_ovl_01(s32);                      /* extern */
extern M2C_UNK D_800DF650_ovl_01;
extern M2C_UNK D_8016C230_ovl_31;
extern u8 D_8016C250_ovl_31;
extern M2C_UNK D_8016C254_ovl_31;
extern M2C_UNK D_8016C258_ovl_31;
extern s8 D_8016C298_ovl_31;

void func_8016BEE8_ovl_31(void *arg0) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_v0;
    s32 var_v1;
    u32 temp_v0_6;
    u32 var_s5;
    void *temp_v0;
    void *temp_v1_3;

    var_s5 = 0x7FFFFFFF;
    temp_s0 = func_80033634_ovl_01();
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x28);
    var_s3 = ((s32) (temp_s0 & 0xFF) >> (func_80033634_ovl_01() & 3)) & 1;
    if (temp_v1 < -0x3A98) {
        var_s3 = 0;
    }
    if (temp_v1 >= -0x2E17) {
        var_s3 = 1;
    }
    var_s0 = 0;
    temp_v1_2 = var_s3 & 0xFF;
    var_s1 = temp_v1_2 * 4;
    var_s2 = 0;
    D_8016C250_ovl_31 = 0;
    if (M2C_FIELD(arg0, u16 *, 0x2B6) & 0x20) {
        var_s1 = (temp_v1_2 ^ 1) * 4;
    }
    do {
        temp_v0 = (((var_s1 & 0xFF) + (var_s0 & 0xFF)) * 4) + &D_8016C230_ovl_31;
        var_v0 = var_s0 + 1;
        if (func_80032EA4_ovl_01(arg0, M2C_FIELD(temp_v0, s16 *, 0), M2C_FIELD(temp_v0, s16 *, 2), 0x270) == 0) {
            temp_v0_2 = var_s2 & 0xFF;
            var_s2 += 1;
            D_8016C250_ovl_31 += 1;
            *(temp_v0_2 + &D_8016C254_ovl_31) = var_s1 + var_s0;
            var_v0 = var_s0 + 1;
        }
        var_s0 = var_v0;
    } while ((u32) (var_v0 & 0xFF) < 4U);
    var_s0_2 = 0;
    temp_s1 = var_s3 * 8;
    D_8016C298_ovl_31 = 0;
    var_v1 = 0 & 0xFF;
    do {
        temp_v1_3 = (((temp_s1 & 0xFF) + var_v1) * 4) + &D_8016C258_ovl_31;
        temp_v0_4 = M2C_FIELD(&D_800DF650_ovl_01, s32 *, 0x1AA8) - M2C_FIELD(temp_v1_3, s16 *, 0);
        temp_v0_5 = M2C_FIELD(&D_800DF650_ovl_01, s32 *, 0x1AB0) - M2C_FIELD(temp_v1_3, s16 *, 2);
        temp_v0_6 = func_80040BE4_ovl_01((temp_v0_4 * temp_v0_4) + (temp_v0_5 * temp_v0_5));
        if (temp_v0_6 < var_s5) {
            D_8016C298_ovl_31 = temp_s1 + var_s0_2;
            var_s5 = temp_v0_6;
        }
        temp_v0_3 = var_s0_2 + 1;
        var_s0_2 = temp_v0_3;
        var_v1 = var_s0_2 & 0xFF;
    } while ((u32) (temp_v0_3 & 0xFF) < 8U);
}
