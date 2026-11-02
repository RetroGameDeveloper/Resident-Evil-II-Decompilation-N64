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

M2C_UNK func_800A5BF0_ovl_01(s32, s32);             /* extern */
extern u8 D_801479F8;
extern M2C_UNK D_80148180;

void func_800A9518_ovl_01(void) {
    M2C_UNK *var_s0;
    s32 var_s1;

    var_s1 = 0;
    if (D_801479F8 != 0) {
        var_s0 = &D_80148180;
        do {
            if (M2C_FIELD(var_s0, u8 *, 0) == 1) {
                func_800A5BF0_ovl_01(M2C_FIELD(var_s0, s32 *, 8), M2C_FIELD(var_s0, s32 *, 0xC));
            }
            var_s1 += 1;
            var_s0 += 0x18;
        } while (var_s1 < (s32) D_801479F8);
    }
}
