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

extern u8 D_801479F8;
extern s8 D_80148180;

void func_800A94E0_ovl_01(void) {
    s32 var_v1;
    s8 *var_a0;

    var_v1 = 0;
    if (D_801479F8 != 0) {
        var_a0 = &D_80148180;
        do {
            *var_a0 = 0;
            var_v1 += 1;
            var_a0 += 0x18;
        } while (var_v1 < (s32) D_801479F8);
    }
}
