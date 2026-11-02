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

extern M2C_UNK D_80143FB0;

void func_800A8278_ovl_01(s32 arg0, s32 arg1) {
    s32 var_a1;

    var_a1 = arg1;
    if ((var_a1 & 0xFF) == 0xFF) {
        var_a1 = 8;
    }
    *(((var_a1 & 0xFF) * 4) + &D_80143FB0) = ((arg0 * 0x18) << 9) / 240;
}
