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

extern M2C_UNK D_80162FA0_ovl_25;

void func_80162D0C_ovl_25(void *arg0, s32 arg1, s32 arg2) {
    s32 *temp_v1;
    s32 temp_v0;
    s32 var_a3;
    s32 var_v0;
    s32 var_v0_2;

    var_a3 = 7;
    var_v0 = 7 & 0xFF;
    do {
        temp_v1 = M2C_FIELD(arg0, s32 *, 0x234) + (*(var_v0 + (((arg1 & 0xFF) * 7) - 1) + &D_80162FA0_ovl_25) * 0x178);
        if (arg2 & 0xFF) {
            var_v0_2 = *temp_v1 | 1;
        } else {
            var_v0_2 = *temp_v1 & ~1;
        }
        *temp_v1 = var_v0_2;
        temp_v0 = var_a3 - 1;
        var_a3 = temp_v0;
        var_v0 = var_a3 & 0xFF;
    } while (temp_v0 & 0xFF);
    if (arg2 & 0xFF) {
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) & ~2);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 2);
}
