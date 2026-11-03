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

void func_80047CF8_ovl_01(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_t0;
    s32 var_v1;
    u16 *var_a2;
    u16 *var_a3;
    u16 temp_v0_2;

    temp_v1 = M2C_FIELD(arg0, s32 *, 4);
    var_t0 = 0;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x14);
    var_a3 = temp_v0 + (temp_v1 * (arg3 & 0xFFFF)) + (arg2 & 0xFFFF);
    var_a2 = temp_v0 + (temp_v1 * M2C_FIELD(arg1, s16 *, 2)) + M2C_FIELD(arg1, s16 *, 0);
    if (M2C_FIELD(arg1, s16 *, 6) > 0) {
        do {
            var_v1 = 0;
            if (M2C_FIELD(arg1, s16 *, 4) > 0) {
                do {
                    temp_v0_2 = *var_a2;
                    var_a2 += 2;
                    var_v1 += 2;
                    *var_a3 = temp_v0_2;
                    var_a3 += 2;
                } while (var_v1 < M2C_FIELD(arg1, s16 *, 4));
            }
            var_t0 += 1;
            temp_v1_2 = M2C_FIELD(arg0, s32 *, 4) - M2C_FIELD(arg1, s16 *, 4);
            var_a3 += temp_v1_2;
            var_a2 += temp_v1_2;
        } while (var_t0 < M2C_FIELD(arg1, s16 *, 6));
    }
}
