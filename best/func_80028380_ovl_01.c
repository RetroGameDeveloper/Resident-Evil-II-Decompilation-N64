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

void func_80028380_ovl_01(void *arg0) {
    s32 var_a1;
    s32 var_s0;
    s32 var_v1;

    var_s0 = 1;
    var_a1 = 1;
    do {
        var_s0 -= 1;
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), M2C_UNK (**)(void *, s32), 0x24)(arg0, var_a1);
        var_a1 = var_s0;
    } while (var_s0 > 0);
    var_v1 = 0x64;
    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        var_v1 = 0xC8;
    }
    M2C_FIELD(arg0, s32 *, 0x10) = var_v1;
}
