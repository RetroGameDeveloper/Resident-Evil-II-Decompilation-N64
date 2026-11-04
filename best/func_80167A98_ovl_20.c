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

M2C_UNK D_80034224(M2C_UNK, s16, s16, s32);         /* extern */
extern s32 D_800EB230_ovl_01;
extern s8 D_80167F40_ovl_20;
extern s8 D_80167F41_ovl_20;
extern M2C_UNK D_80167F42_ovl_20;
extern M2C_UNK D_80167F44_ovl_20;
extern u16 D_80167F46_ovl_20;
extern u16 D_80167F48_ovl_20;
extern s8 D_80167F4A_ovl_20;
extern s8 D_80167F4B_ovl_20;

void func_80167A98_ovl_20(M2C_UNK arg1) {
    s16 var_v0;
    s16 var_v0_2;
    s8 temp_a0;
    s8 temp_t1;
    s8 temp_t4;
    s8 temp_t5;

    if (D_80167F4A_ovl_20 < D_80167F40_ovl_20) {
        D_80167F46_ovl_20 = -1U;
    }
    if (D_80167F40_ovl_20 < D_80167F4A_ovl_20) {
        D_80167F46_ovl_20 = 1;
    }
    if (D_80167F4B_ovl_20 < D_80167F41_ovl_20) {
        D_80167F48_ovl_20 = -1U;
    }
    if (D_80167F41_ovl_20 < D_80167F4B_ovl_20) {
        D_80167F48_ovl_20 = 1;
    }
    if (-(s16) D_80167F46_ovl_20 == (s16) D_80167F46_ovl_20) {
        M2C_FIELD(&D_80167F42_ovl_20, s16 *, 0) = (s16) ((M2C_FIELD(&D_80167F42_ovl_20, s16 *, 0) * 2) / 3);
    }
    if (-(s16) D_80167F48_ovl_20 == (s16) D_80167F48_ovl_20) {
        M2C_FIELD(&D_80167F44_ovl_20, s16 *, 0) = (s16) ((M2C_FIELD(&D_80167F44_ovl_20, s16 *, 0) * 2) / 3);
    }
    if (D_80167F40_ovl_20 != D_80167F4A_ovl_20) {

    } else {
        var_v0 = M2C_FIELD(&D_80167F42_ovl_20, s16 *, 0);
        if (var_v0 < 0) {
            var_v0 = -var_v0;
        }
        if (var_v0 < 3) {
            D_80167F40_ovl_20 = (s8) (u8) D_80167F4A_ovl_20;
            D_80167F46_ovl_20 = 0;
            M2C_FIELD(&D_80167F42_ovl_20, s16 *, 0) = 0;
        }
    }
    if (D_80167F41_ovl_20 == D_80167F4B_ovl_20) {
        var_v0_2 = M2C_FIELD(&D_80167F44_ovl_20, s16 *, 0);
        if (var_v0_2 < 0) {
            var_v0_2 = -var_v0_2;
        }
        if (var_v0_2 < 3) {
            D_80167F41_ovl_20 = (s8) (u8) D_80167F4B_ovl_20;
            D_80167F48_ovl_20 = 0;
            M2C_FIELD(&D_80167F44_ovl_20, s16 *, 0) = 0;
        }
    }
    temp_t4 = (s8) (u8) D_80167F40_ovl_20;
    temp_t5 = (s8) (u8) D_80167F41_ovl_20;
    M2C_FIELD(&D_80167F44_ovl_20, s16 *, 0) = (s16) ((u16) M2C_FIELD(&D_80167F44_ovl_20, s16 *, 0) + D_80167F48_ovl_20);
    M2C_FIELD(&D_80167F42_ovl_20, s16 *, 0) = (s16) ((u16) M2C_FIELD(&D_80167F42_ovl_20, s16 *, 0) + D_80167F46_ovl_20);
    temp_a0 = (u8) D_80167F40_ovl_20 + M2C_FIELD(&D_80167F42_ovl_20, u8 *, 1);
    temp_t1 = (u8) D_80167F41_ovl_20 + M2C_FIELD(&D_80167F44_ovl_20, u8 *, 1);
    D_80167F40_ovl_20 = temp_a0;
    D_80167F41_ovl_20 = temp_t1;
    if (temp_a0 >= 4) {
        D_80167F40_ovl_20 = 3;
    }
    if (D_80167F40_ovl_20 < -3) {
        D_80167F40_ovl_20 = -3;
    }
    if (temp_t1 >= 0x10) {
        D_80167F41_ovl_20 = 0xF;
    }
    if (D_80167F41_ovl_20 < -0xF) {
        D_80167F41_ovl_20 = -0xF;
    }
    D_80034224(arg1, (s16) ((s8) (u8) D_80167F41_ovl_20 - temp_t5), (s16) ((s8) (u8) D_80167F40_ovl_20 - temp_t4), D_800EB230_ovl_01);
}
