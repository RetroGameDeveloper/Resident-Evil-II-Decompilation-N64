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

extern M2C_UNK D_80148C20;
extern M2C_UNK D_8014CF20;

void func_800AC5B4_ovl_01(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK *var_a1;
    s32 temp_a2;
    s32 var_a0;
    s32 var_v0;

    temp_a2 = arg2 & 0xFF;
    if (temp_a2 != 0xFF) {
        var_a1 = &D_80148C20;
        var_a0 = (arg0 & 0xFF) + ((arg1 & 0xFF) * 0x86);
        var_v0 = temp_a2 * 0x860;
    } else {
        var_a1 = &D_8014CF20;
        var_a0 = arg0 & 0xFF;
        var_v0 = (arg1 & 0xFF) * 0x86;
    }
    *(var_a0 + var_v0 + var_a1) = arg3 & 0x7F;
}
