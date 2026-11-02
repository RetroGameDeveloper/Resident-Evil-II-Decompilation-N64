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

M2C_UNK func_8017B568_ovl_02(s32 *);                /* extern */
M2C_UNK func_8017DEEC_ovl_02(s32, s32 *, s32 *, s32 *); /* extern */
extern s32 D_80185690_ovl_02;
extern s32 D_8018569C_ovl_02;
extern s32 D_801856A8_ovl_02;
extern s32 D_801856B4_ovl_02;
extern s32 D_801856D4_ovl_02;
extern s32 D_801856E0_ovl_02;
extern s32 D_801856EC_ovl_02;
extern s32 D_80185720_ovl_02;
extern s32 D_8018573C_ovl_02;
extern s32 D_801857A0_ovl_02;

void func_8017DD30_ovl_02(s32 arg0) {
    s32 *var_a0;
    s32 *var_a0_2;
    s32 *var_a1;
    s32 *var_a2;
    s32 *var_a3;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_v0;

    if ((D_80185720_ovl_02 == 3) && (D_8018573C_ovl_02 != 0)) {
        D_8018573C_ovl_02 = 0;
    }
    var_a0 = &D_801856B4_ovl_02;
    var_a1 = &D_80185690_ovl_02;
    var_a2 = &D_8018569C_ovl_02;
    var_a3 = &D_801856A8_ovl_02;
    do {
        if (D_801856EC_ovl_02 == 3) {
            *var_a0 = *var_a3;
        } else {
            if (D_8018573C_ovl_02 == 0) {
                temp_v1 = *var_a2;
                *var_a2 = *var_a1;
                *var_a1 = temp_v1;
            }
            *var_a0 = *var_a1;
        }
        if (D_80185720_ovl_02 == 2) {
            temp_v0 = *var_a0;
            if (var_a0 == &D_801856B4_ovl_02) {
                var_v0 = temp_v0 + D_801856D4_ovl_02;
            } else {
                var_v0 = temp_v0 + D_801856E0_ovl_02;
            }
            *var_a0 = var_v0;
        }
        var_a0 += 4;
        var_a1 += 4;
        var_a2 += 4;
        var_a3 += 4;
    } while ((s32) var_a0 < (s32) (&D_801856B4_ovl_02 + 0xC));
    func_8017DEEC_ovl_02(arg0, var_a1, var_a2, var_a3);
    if (arg0 != 0) {
        if (((D_80185720_ovl_02 == 3) || (D_8018573C_ovl_02 != 0)) && (D_801857A0_ovl_02 == 0)) {
            if (D_801856EC_ovl_02 != 3) {
                var_a0_2 = &D_8018569C_ovl_02;
            } else {
                var_a0_2 = &D_801856A8_ovl_02;
            }
            func_8017B568_ovl_02(var_a0_2);
        }
    }
    if (D_80185720_ovl_02 != 3) {
        D_8018573C_ovl_02 = D_8018573C_ovl_02 == 0;
    }
}
