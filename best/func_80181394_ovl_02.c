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

extern s32 D_80134450_ovl_01;
extern M2C_UNK D_801344B0_ovl_01;

void func_80181394_ovl_02(s32 *arg0) {
    s32 *var_a2;
    s32 *var_t0;
    s32 temp_a3;
    s32 temp_v1;
    u32 var_a0;
    u32 var_t2;

    var_t0 = arg0;
    var_t2 = 0;
    temp_a3 = (s32) (M2C_FIELD(((D_80134450_ovl_01 * 0x112) + &D_801344B0_ovl_01), u16 *, 8) - M2C_FIELD(((D_80134450_ovl_01 * 0x112) + &D_801344B0_ovl_01), u16 *, 4)) >> 1;
loop_1:
    if (var_t2 < (u16) M2C_FIELD(((D_80134450_ovl_01 * 0x112) + &D_801344B0_ovl_01), u16 *, 6)) {
        var_a0 = 0;
        if (temp_a3 != 0) {
            var_a2 = var_t0;
            do {
                *var_a2 = 0;
                var_a2 += 4;
                temp_v1 = var_a0 + temp_a3;
                var_a0 += 1;
                *(((temp_v1 + M2C_FIELD(((D_80134450_ovl_01 * 0x112) + &D_801344B0_ovl_01), u16 *, 4)) * 4) + var_t0) = 0;
            } while (var_a0 < (u32) temp_a3);
        }
        var_t2 += 1;
        var_t0 += M2C_FIELD(((D_80134450_ovl_01 * 0x112) + &D_801344B0_ovl_01), u16 *, 8) * 4;
        goto loop_1;
    }
}
