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

void func_80165CA0_ovl_26(void *arg0) {
    s32 temp_v0;
    s32 var_a1;
    s32 var_a2;
    s32 var_t0;
    s32 var_v1;
    u32 var_t1;
    void *temp_a3;

    var_t1 = 0;
    var_t0 = 0;
    do {
        temp_a3 = M2C_FIELD(arg0, s32 *, 0x234) + var_t0;
        temp_v0 = M2C_FIELD(temp_a3, s32 *, 0x60);
        var_a2 = temp_v0 & 0xFF;
        if (var_a2 != 0) {
            var_a2 -= 1;
        }
        var_a1 = temp_v0 & 0xFF00;
        if (var_a1 != 0) {
            var_a1 -= 0x100;
        }
        var_v1 = temp_v0 & 0xFF0000;
        if (var_v1 & 0xFF0000) {
            var_v1 += 0xFFFF0000;
        }
        M2C_FIELD(temp_a3, s32 *, 0x60) = (s32) (var_v1 | var_a1 | var_a2);
        var_t1 += 1;
        var_t0 += 0x178;
    } while (var_t1 < 0x1AU);
}
