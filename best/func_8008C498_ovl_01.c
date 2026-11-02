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

extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E7650_ovl_01;

u32 func_8008C498_ovl_01(s32 arg0) {
    M2C_UNK *var_a1;
    u32 var_a2;
    u32 var_v0;
    u32 var_v1;

    var_v1 = 0;
    var_a2 = 0;
    var_a1 = &D_800C7650_ovl_01;
loop_1:
    if (M2C_FIELD(var_a1, u8 *, 0x21818) == 0) {
        var_a2 += 1;
        if (arg0 == 0) {
            return var_v1;
        }
    }
    var_v1 += 1;
    var_a1 += 4;
    if (var_v1 >= (u8) M2C_FIELD(&D_800E7650_ovl_01, u8 *, 0x1488)) {
        var_v0 = -1U;
        if (arg0 != 0) {
            var_v0 = var_a2;
        }
        return var_v0;
    }
    goto loop_1;
}
