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

s32 func_80004CFC(u16, s32, M2C_UNK, M2C_UNK *);    /* extern */
extern M2C_UNK D_800B9E6C_ovl_01;
extern u16 D_8012BE60_ovl_01;

s32 func_8008D2C4_ovl_01(s32 arg0) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 var_s2;
    s32 var_v0;
    u16 *var_s1;
    u16 temp_a0;

    var_s2 = 0;
    var_s1 = &D_8012BE60_ovl_01;
    var_v0 = arg0 + 7;
    do {
        temp_s0_2 = var_v0 & ~7;
        temp_a0 = *var_s1;
        var_s1 += 2;
        var_s2 += 1;
        temp_s0 = temp_s0_2 + func_80004CFC(temp_a0, temp_s0_2, 0, &D_800B9E6C_ovl_01);
        var_v0 = temp_s0 + 7;
    } while (var_s2 < 0x6A);
    return temp_s0;
}
