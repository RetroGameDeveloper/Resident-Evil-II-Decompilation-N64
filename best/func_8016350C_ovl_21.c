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

s32 func_80033634_ovl_01(s32, s32);                 /* extern */
extern s32 D_80163A80_ovl_21;

u32 func_8016350C_ovl_21(s32 arg0, s32 arg1) {
    s32 temp_a1;
    s32 var_a0;
    s32 var_a1;
    u32 temp_v0;
    u32 temp_v1;
    u32 var_s0;
    u32 var_v1;

    var_a0 = arg0;
    var_a1 = arg1;
    var_s0 = 0;
loop_1:
    temp_v1 = (u32) (func_80033634_ovl_01(var_a0, var_a1) & 0xFF) >> 3;
    var_a0 = D_80163A80_ovl_21;
    temp_a1 = 1 << temp_v1;
    var_s0 += 1;
    if (!(var_a0 & temp_a1)) {
        D_80163A80_ovl_21 = var_a0 | temp_a1;
        return temp_v1;
    }
    var_a1 = 1;
    if (var_s0 >= 0x20U) {
        var_v1 = 0;
loop_5:
        if (D_80163A80_ovl_21 & var_a1) {
            var_v1 += 1;
            temp_v0 = var_v1 < 0x20U;
            var_a1 *= 2;
            if (temp_v0 == 0) {
                return temp_v0;
            }
            goto loop_5;
        }
        D_80163A80_ovl_21 |= var_v1;
        return var_v1;
    }
    goto loop_1;
}
