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

s32 func_80032EA4_ovl_01(void *, s32, s32, s16);    /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E10D0_ovl_01;

s32 func_80165F34_ovl_35(void *arg0, s32 arg1, s32 arg2, s16 arg3) {
    M2C_UNK *var_s0;
    s32 temp_v1;
    s32 var_s1;
    s32 var_v0;

    if (arg1 != 0) {
        var_s0 = M2C_FIELD(&D_800C7650_ovl_01, M2C_UNK **, 0x19D3C);
        var_s1 = M2C_FIELD(arg0, s32 *, 0x290) & 0x3FFFFFFF;
    } else {
        var_s0 = &D_800E10D0_ovl_01;
        var_s1 = M2C_FIELD(arg0, s32 *, 0x28C);
    }
    temp_v1 = func_80032EA4_ovl_01(arg0, M2C_FIELD(var_s0, s32 *, 0x28), M2C_FIELD(var_s0, s32 *, 0x30), arg3);
    var_v0 = 0;
    if ((var_s1 < arg2) && (temp_v1 == 0)) {
        var_v0 = 0;
        if (M2C_FIELD(var_s0, s16 *, 0x1F2) >= 0) {
            var_v0 = 1;
            if (M2C_FIELD(var_s0, u8 *, 0x26F) & 0x80) {
                var_v0 = 0;
            }
        }
    }
    return var_v0;
}
