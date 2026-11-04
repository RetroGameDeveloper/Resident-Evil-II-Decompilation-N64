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
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2 -mcpu=r4600, tried by autopilot */

s32 func_800A5C84_ovl_01();
extern u32 D_8014E10C;
extern s32 D_8014E110;

s32 func_800ADCC8_ovl_01(s32 arg0, u16 *arg1) {
    void *sp10;
    char *var_v1;
    char *var_a1;
    u16 var_a3;
    u32 var_a2;
    void *var_s0;

    var_a1 = arg1;
    var_a2 = 0;
    if (D_8014E10C != 0) {
        var_v1 = &D_8014E110;
loop_2:
        if (*(s32 *)var_v1 != var_a1) {
            var_a2 += 1;
            var_v1 += 0xC;
            if (var_a2 < (u32) D_8014E10C) {
                goto loop_2;
            }
        }
    }
    var_a3 = *(u16 *)var_a1;
    if (var_a3 != 0xFFFF) {
        var_s0 = (char *)(var_a1); var_s0 += (s32)(2);
loop_6:
        if (var_a3 == (arg0 & 0xFFFF)) {
            if (M2C_FIELD(var_s0, u16 *, 0) == 0) {
                sp10 = var_a1 + 0xC;
                M2C_FIELD(var_s0, s32 *, 6) = (s32) (M2C_FIELD(var_s0, s32 *, 2) + M2C_FIELD(((var_a2 * 0xC) + &D_8014E110), s32 *, 4));
                func_800A5C84_ovl_01(&sp10, var_a1 + 8, var_a2, var_a3);
            }
            M2C_FIELD(var_s0, u16 *, 0) += 1;
        } else {
            var_a1 += 0x1C;
            var_a3 = *(u16 *)var_a1;
            var_s0 += 0x1C;
            if (var_a3 != 0xFFFF) {
                goto loop_6;
            }
        }
    }
    return 1;
}
