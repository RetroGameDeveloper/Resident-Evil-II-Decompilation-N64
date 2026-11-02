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

s32 func_800439B8_ovl_01(s32, s32, M2C_UNK, M2C_UNK); /* extern */
extern s32 D_800EFD34_ovl_01;
extern s32 D_800EFD3C_ovl_01;
extern s32 D_800EFD40_ovl_01;

s32 func_80043898_ovl_01(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 var_a0;
    s32 var_s0;

    var_a0 = arg0;
    var_s0 = arg1;
    D_800EFD34_ovl_01 = -1;
    D_800EFD40_ovl_01 = 0;
    D_800EFD3C_ovl_01 = 0;
    if (var_s0 != arg2) {
        do {
            temp_v0 = func_800439B8_ovl_01(var_a0, var_s0, 0, 0);
            var_s0 += 0x14;
            var_a0 = temp_v0;
        } while (var_s0 != arg2);
    }
    return var_a0;
}
