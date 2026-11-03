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

extern s32 *D_8010B688_ovl_01;
extern s32 *D_8010B68C_ovl_01;
extern s32 D_80113790_ovl_01;
extern s32 D_80113794_ovl_01;

void func_80082410_ovl_01(void) {
    s32 *var_v1;
    s32 *var_v1_2;
    s32 var_a0;
    s32 var_a0_2;

    var_v1 = D_8010B688_ovl_01;
    var_a0 = ((u32) (D_80113790_ovl_01 * D_80113794_ovl_01) >> 1) - 1;
    if (var_a0 != -1) {
        do {
            *var_v1 = 0;
            var_a0 -= 1;
            var_v1 += 4;
        } while (var_a0 != -1);
    }
    if (D_8010B68C_ovl_01 != NULL) {
        var_a0_2 = ((u32) (D_80113790_ovl_01 * D_80113794_ovl_01) >> 1) - 1;
        var_v1_2 = D_8010B68C_ovl_01;
        if (var_a0_2 != -1) {
            do {
                *var_v1_2 = 0;
                var_a0_2 -= 1;
                var_v1_2 += 4;
            } while (var_a0_2 != -1);
        }
    }
}
