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

s32 func_8004EBA4_ovl_01(void *, M2C_UNK *);        /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E1898_ovl_01;

M2C_UNK *func_8004ECFC_ovl_01(void *arg0) {
    M2C_UNK *var_s0;
    M2C_UNK *var_v0;

    var_s0 = &D_800E1898_ovl_01;
    if ((u32) &D_800E1898_ovl_01 < (u32) M2C_FIELD(&D_800C7650_ovl_01, u32 *, 0x20F48)) {
loop_2:
        if (((M2C_FIELD(var_s0, s32 *, 0) & 0x101) != 0x101) || (M2C_FIELD(arg0, u8 *, 0x1A2) != M2C_FIELD(var_s0, u8 *, 0x1A2)) || (M2C_FIELD(arg0, s32 *, 0x280) == var_s0) || (var_v0 = var_s0, (func_8004EBA4_ovl_01(arg0, var_s0) == 0))) {
            var_s0 += 0x368;
            if ((u32) var_s0 >= (u32) M2C_FIELD(&D_800C7650_ovl_01, u32 *, 0x20F48)) {
                goto block_7;
            }
            goto loop_2;
        }
    } else {
block_7:
        var_v0 = NULL;
    }
    return var_v0;
}
