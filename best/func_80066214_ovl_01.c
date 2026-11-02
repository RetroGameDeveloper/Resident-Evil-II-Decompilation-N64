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

void func_80066214_ovl_01(void *arg0, s32 *arg1) {
    s32 temp_t1;
    s32 var_a2;
    s32 var_t2;
    s32 var_t3;
    u16 *var_a0;
    u16 *var_a3;
    u16 temp_v1;
    void **var_t0;
    void *var_a1;

    M2C_FIELD(arg0, s32 **, 0x258) = arg1;
    if (arg1 != NULL) {
        var_t3 = 0;
        if (*arg1 != 0) {
            var_a1 = arg1 + 0xC;
            var_t0 = M2C_FIELD(arg0, s32 *, 0x234) + 0x120;
            var_t2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC4), s32 *, 4);
            do {
                *var_t0 = NULL;
                var_a3 = var_a1 + 0xC;
                if (*arg1 & (1 << var_t3)) {
                    *var_t0 = var_a1;
                    temp_t1 = M2C_FIELD(var_a1, s32 *, 8);
                    var_a0 = var_a1 + 0xE;
                    var_a2 = temp_t1;
loop_5:
                    var_a2 -= 1;
                    if (var_a2 != -1) {
                        temp_v1 = *var_a3;
                        *var_a3 = *var_a0;
                        *var_a0 = temp_v1;
                        var_a0 += 4;
                        var_a3 += 4;
                        goto loop_5;
                    }
                    var_a1 += (temp_t1 * 4) + 0xC;
                }
                var_t0 += 0x178;
                var_t2 -= 1;
                var_t3 += 1;
            } while (var_t2 != 0);
        }
    }
}
