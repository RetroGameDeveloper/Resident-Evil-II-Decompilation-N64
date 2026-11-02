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

M2C_UNK func_80067058_ovl_01(void *, void *, s32, s32); /* extern */

void func_80066E58_ovl_01(void *arg0, s32 arg1, void *arg2) {
    s16 temp_v1;
    s16 temp_v1_3;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_v1_2;
    s32 temp_v1_4;
    s32 var_a2;
    s32 var_a3;
    u16 temp_a0;

    temp_v1 = M2C_FIELD(arg2, s16 *, 0);
    temp_a0 = M2C_FIELD(arg0, u16 *, 0x12C);
    temp_a1 = M2C_FIELD(arg0, s32 *, 0x120);
    var_a2 = ((M2C_FIELD(arg2, u16 *, 4) + temp_v1 + temp_a0) - temp_a1) + 1;
    temp_v1_2 = ((temp_v1 - temp_a0) - temp_a1) - 1;
    if (-temp_v1_2 < var_a2) {
        var_a2 = temp_v1_2;
    }
    temp_v1_3 = M2C_FIELD(arg2, s16 *, 2);
    temp_a0_2 = M2C_FIELD(arg0, s32 *, 0x128);
    var_a3 = ((M2C_FIELD(arg2, u16 *, 6) + temp_v1_3 + arg1) - temp_a0_2) + 1;
    temp_v1_4 = ((temp_v1_3 - arg1) - temp_a0_2) - 1;
    if (-temp_v1_4 < var_a3) {
        var_a3 = temp_v1_4;
    }
    func_80067058_ovl_01(arg0, arg0 + 0x1B4, var_a2, var_a3);
}
