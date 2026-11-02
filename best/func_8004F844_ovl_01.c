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

s32 func_8004D948_ovl_01(s32, s32 *, s32 *);        /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern s32 *D_800E1388_ovl_01;

s32 func_8004F844_ovl_01(s32 arg0, s32 *arg1) {
    s32 **var_s0;
    s32 *temp_a2;
    s32 var_v0;

    if (*arg1 & 2) {
        return 0;
    }
    var_s0 = &D_800E1388_ovl_01;
    if (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x1828C) != &D_800E1388_ovl_01) {
loop_3:
        temp_a2 = *var_s0;
        if ((arg1 == temp_a2) || !(*temp_a2 & 1) || (var_v0 = 1, (func_8004D948_ovl_01(arg0, arg1, temp_a2) == 0))) {
            var_s0 += 4;
            if (var_s0 == M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x1828C)) {
                goto block_7;
            }
            goto loop_3;
        }
    } else {
block_7:
        var_v0 = 0;
    }
    return var_v0;
}
