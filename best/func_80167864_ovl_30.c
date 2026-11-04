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
extern s8 D_80167CE0_ovl_30;
extern s8 D_80167CE1_ovl_30;
extern M2C_UNK D_80167CE2_ovl_30;
extern M2C_UNK D_80167CE4_ovl_30;
extern u16 D_80167CE6_ovl_30;
extern u16 D_80167CE8_ovl_30;
extern s8 D_80167CEA_ovl_30;
extern s8 D_80167CEB_ovl_30;

void func_80167864_ovl_30(M2C_UNK arg1) {
    s16 var_v0;
    s16 var_v0_2;
    s8 temp_a0;
    s8 temp_t1;
    s8 temp_t4;
    s8 temp_t5;

    if (D_80167CEA_ovl_30 < D_80167CE0_ovl_30) {
        D_80167CE6_ovl_30 = -1U;
    }
    if (D_80167CE0_ovl_30 < D_80167CEA_ovl_30) {
        D_80167CE6_ovl_30 = 1;
    }
    if (D_80167CEB_ovl_30 < D_80167CE1_ovl_30) {
        D_80167CE8_ovl_30 = -1U;
    }
    if (D_80167CE1_ovl_30 < D_80167CEB_ovl_30) {
        D_80167CE8_ovl_30 = 1;
    }
    if (-(s16) D_80167CE6_ovl_30 == (s16) D_80167CE6_ovl_30) {
        M2C_FIELD(&D_80167CE2_ovl_30, s16 *, 0) = (s16) ((M2C_FIELD(&D_80167CE2_ovl_30, s16 *, 0) * 2) / 3);
    }
    if (-(s16) D_80167CE8_ovl_30 == (s16) D_80167CE8_ovl_30) {
        M2C_FIELD(&D_80167CE4_ovl_30, s16 *, 0) = (s16) ((M2C_FIELD(&D_80167CE4_ovl_30, s16 *, 0) * 2) / 3);
    }
    if (D_80167CE0_ovl_30 != D_80167CEA_ovl_30) {

    } else {
        var_v0 = M2C_FIELD(&D_80167CE2_ovl_30, s16 *, 0);
        if (var_v0 < 0) {
            var_v0 = -var_v0;
        }
        if (var_v0 < 3) {
            D_80167CE0_ovl_30 = (s8) (u8) D_80167CEA_ovl_30;
            D_80167CE6_ovl_30 = 0;
            M2C_FIELD(&D_80167CE2_ovl_30, s16 *, 0) = 0;
        }
    }
    if (D_80167CE1_ovl_30 == D_80167CEB_ovl_30) {
        var_v0_2 = M2C_FIELD(&D_80167CE4_ovl_30, s16 *, 0);
        if (var_v0_2 < 0) {
            var_v0_2 = -var_v0_2;
        }
        if (var_v0_2 < 3) {
            D_80167CE1_ovl_30 = (s8) (u8) D_80167CEB_ovl_30;
            D_80167CE8_ovl_30 = 0;
            M2C_FIELD(&D_80167CE4_ovl_30, s16 *, 0) = 0;
        }
    }
    temp_t4 = (s8) (u8) D_80167CE0_ovl_30;
    temp_t5 = (s8) (u8) D_80167CE1_ovl_30;
    M2C_FIELD(&D_80167CE4_ovl_30, s16 *, 0) = (s16) ((u16) M2C_FIELD(&D_80167CE4_ovl_30, s16 *, 0) + D_80167CE8_ovl_30);
    M2C_FIELD(&D_80167CE2_ovl_30, s16 *, 0) = (s16) ((u16) M2C_FIELD(&D_80167CE2_ovl_30, s16 *, 0) + D_80167CE6_ovl_30);
    temp_a0 = (u8) D_80167CE0_ovl_30 + M2C_FIELD(&D_80167CE2_ovl_30, u8 *, 1);
    temp_t1 = (u8) D_80167CE1_ovl_30 + M2C_FIELD(&D_80167CE4_ovl_30, u8 *, 1);
    D_80167CE0_ovl_30 = temp_a0;
    D_80167CE1_ovl_30 = temp_t1;
    if (temp_a0 >= 9) {
        D_80167CE0_ovl_30 = 8;
    }
    if (D_80167CE0_ovl_30 < -8) {
        D_80167CE0_ovl_30 = -8;
    }
    if (temp_t1 >= 9) {
        D_80167CE1_ovl_30 = 8;
    }
    if (D_80167CE1_ovl_30 < -8) {
        D_80167CE1_ovl_30 = -8;
    }
    D_80034224(arg1, (s16) ((s8) (u8) D_80167CE1_ovl_30 - temp_t5), (s16) ((s8) (u8) D_80167CE0_ovl_30 - temp_t4), D_800EB230_ovl_01);
}
