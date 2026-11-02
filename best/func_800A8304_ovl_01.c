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

extern M2C_UNK D_80147A40;

s32 func_800A8304_ovl_01(s32 arg0) {
    s32 var_v0;
    void *temp_a0;

    temp_a0 = ((arg0 & 0xFF) * 0x28) + &D_80147A40;
    var_v0 = 0;
    if (M2C_FIELD(temp_a0, u8 *, 0x14) != 4) {
        var_v0 = 0;
        if (M2C_FIELD(temp_a0, s32 *, 0xC) != 0) {
            var_v0 = 1;
            if (M2C_FIELD(temp_a0, s32 *, 8) >= 0) {
                var_v0 = 0;
            }
        }
    }
    return var_v0;
}
