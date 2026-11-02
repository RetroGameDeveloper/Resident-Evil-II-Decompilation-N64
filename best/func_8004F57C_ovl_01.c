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

extern M2C_UNK D_800C7650_ovl_01;
extern s32 D_800E1898_ovl_01;

s32 *func_8004F57C_ovl_01(void *arg0, void *arg1) {
    s32 *var_a3;
    s32 *var_t0;
    s32 temp_a1;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_a2;

    var_t0 = &D_800E1898_ovl_01;
    if ((u32) &D_800E1898_ovl_01 < (u32) M2C_FIELD(&D_800C7650_ovl_01, u32 *, 0x20F48)) {
        var_a3 = &D_800E1898_ovl_01 + 0x128;
loop_2:
        temp_v1 = *var_t0;
        if ((temp_v1 & 0x101) != 0x101) {
            var_t0 += 0x368;
            goto block_17;
        }
        if (temp_v1 & 2) {
            var_t0 += 0x368;
            goto block_17;
        }
        if (M2C_FIELD(arg0, s32 *, 0x2C) != (M2C_FIELD(var_a3, s32 *, -4) - M2C_FIELD(var_a3, u16 *, 0x12))) {
            var_t0 += 0x368;
            goto block_17;
        }
        temp_v1_2 = -(s32) ((u16) M2C_FIELD(arg1, u16 *, 0xC) >> 1);
        temp_a1 = temp_v1_2 + M2C_FIELD(var_a3, u16 *, 4);
        temp_v1_3 = temp_v1_2 + M2C_FIELD(var_a3, u16 *, 6);
        var_a2 = (u32) (temp_a1 * 2) < (u32) ((M2C_FIELD(var_a3, s32 *, -8) - M2C_FIELD(arg1, s32 *, 0)) + temp_a1);
        if ((u32) (temp_v1_3 * 2) < (u32) ((M2C_FIELD(var_a3, s32 *, 0) - M2C_FIELD(arg1, s32 *, 8)) + temp_v1_3)) {
            var_a2 |= 2;
        }
        if (var_a2 != 0) {
            var_t0 += 0x368;
block_17:
            var_a3 += 0x368;
            if ((u32) var_t0 >= (u32) M2C_FIELD(&D_800C7650_ovl_01, u32 *, 0x20F48)) {
                /* Duplicate return node #18. Try simplifying control flow for better match */
                return M2C_FIELD(arg0, s32 **, 0x280);
            }
            goto loop_2;
        }
        return var_t0;
    }
    return M2C_FIELD(arg0, s32 **, 0x280);
}
