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

M2C_UNK func_800A5AB4_ovl_01(s32);                  /* extern */
M2C_UNK func_800AE140_ovl_01(M2C_UNK *);            /* extern */
M2C_UNK func_800AEB9C_ovl_01(M2C_UNK *);            /* extern */
extern M2C_UNK D_801443E8;
extern u8 D_801479F8;

void func_800AEF54_ovl_01(s32 arg0) {
    M2C_UNK *var_s0;
    s32 var_s1;

    var_s1 = 0;
    if (D_801479F8 != 0) {
        var_s0 = &D_801443E8;
        do {
            if (M2C_FIELD(var_s0, s32 *, 0) != 0) {
                if (!(arg0 & 0xFF) || (M2C_FIELD(var_s0, u8 *, 0x4C) == 0)) {
                    func_800AE140_ovl_01(var_s0);
                    M2C_FIELD(var_s0, s32 *, 0x28) = 0;
                    M2C_FIELD(var_s0, s32 *, 0x24) = (s32) (M2C_FIELD(var_s0, s32 *, 0x24) & ~3);
                    func_800AEB9C_ovl_01(var_s0);
                    M2C_FIELD(var_s0, s32 *, 0) = 0;
                    M2C_FIELD(var_s0, s32 *, 0x24) = (s32) (M2C_FIELD(var_s0, s32 *, 0x24) & ~3);
                    goto block_6;
                }
            } else {
block_6:
                func_800A5AB4_ovl_01(var_s1);
            }
            var_s1 += 1;
            var_s0 += 0x1A0;
        } while (var_s1 < (s32) D_801479F8);
    }
}
