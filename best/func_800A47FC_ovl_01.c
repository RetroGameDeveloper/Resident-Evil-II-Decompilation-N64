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

extern f64 D_800BA620_ovl_01;
extern void *D_80143EAC;
extern u16 D_80143EB4;

void func_800A47FC_ovl_01(void) {
    f64 temp_fv0;
    s32 var_a0;
    void *var_v1;

    var_a0 = 0;
    if (D_80143EB4 != 0) {
        var_v1 = D_80143EAC;
        do {
            if (M2C_FIELD(var_v1, u8 *, 0) != 0) {
                temp_fv0 = M2C_FIELD(var_v1, f64 *, 8);
                M2C_FIELD(var_v1, s32 *, 0x14) = (s32) M2C_FIELD(var_v1, s32 *, 0x10);
                if (!(D_800BA620_ovl_01 <= temp_fv0)) {
                    M2C_FIELD(var_v1, s32 *, 0x10) = (s32) temp_fv0;
                } else {
                    M2C_FIELD(var_v1, s32 *, 0x10) = (s32) ((s32) (temp_fv0 - D_800BA620_ovl_01) | 0x80000000);
                }
            }
            var_a0 += 1;
            var_v1 += 0x68;
        } while (var_a0 < (s32) D_80143EB4);
    }
}
