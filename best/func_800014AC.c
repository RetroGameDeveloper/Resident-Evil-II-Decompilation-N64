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

extern M2C_UNK D_800138B0;
extern u32 D_80013EB4;

void func_800014AC(s32 arg0) {
    M2C_UNK *var_v1;
    u32 var_a1;

    var_a1 = 0;
    if (D_80013EB4 != 0) {
        var_v1 = &D_800138B0;
loop_2:
        if (arg0 == M2C_FIELD(var_v1, s32 *, 0)) {
            M2C_FIELD(var_v1, s32 *, 8) = 0;
            if (var_a1 == D_80013EB4) {
                D_80013EB4 = var_a1 - 1;
            }
        } else {
            var_a1 += 1;
            var_v1 += 0xC;
            if (var_a1 >= (u32) D_80013EB4) {

            } else {
                goto loop_2;
            }
        }
    }
}
