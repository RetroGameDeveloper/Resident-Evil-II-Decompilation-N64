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

M2C_UNK func_800A5618_ovl_01();                     /* extern */
M2C_UNK func_800A5660_ovl_01();                     /* extern */
s32 func_800A8354_ovl_01(s32, s32, s32);            /* extern */
extern u8 D_801362B0_ovl_01;

s32 func_800B2238_ovl_01(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_s0;

    var_s0 = -1;
    if (D_801362B0_ovl_01 != 0) {
        func_800A5618_ovl_01();
        var_s0 = func_800A8354_ovl_01(arg0 & 0xFFFF, arg1 & 0xFF, arg2 & 0xFF);
        func_800A5660_ovl_01();
    }
    return var_s0;
}
