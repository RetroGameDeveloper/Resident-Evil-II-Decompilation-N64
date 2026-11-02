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

s32 func_800AF074_ovl_01();                         /* extern */
extern u8 D_801362B0_ovl_01;
extern M2C_UNK D_801443E8;

s32 func_800A81E8_ovl_01(void) {
    s32 var_a0;
    s32 var_s0;
    s32 var_v0;
    void *temp_v1;

    var_s0 = -1;
    if (D_801362B0_ovl_01 != 0) {
        var_a0 = func_800AF074_ovl_01();
        if (var_a0 != -1) {
            var_v0 = var_a0 & 0xFF;
            do {
                temp_v1 = (var_v0 * 0x1A0) + &D_801443E8;
                if (M2C_FIELD(temp_v1, s32 *, 0x60) == var_a0) {
                    var_s0 = 0;
                    M2C_FIELD(temp_v1, s32 *, 0x24) = (s32) (M2C_FIELD(temp_v1, s32 *, 0x24) | 8);
                }
                var_a0 = M2C_FIELD(temp_v1, s32 *, 0x10);
                var_v0 = var_a0 & 0xFF;
            } while (var_a0 != -1);
        }
    }
    return var_s0;
}
