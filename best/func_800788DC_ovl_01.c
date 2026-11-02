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

M2C_UNK func_80078FF0_ovl_01(s8);                   /* extern */
M2C_UNK func_800791C4_ovl_01(s8);                   /* extern */
M2C_UNK func_80079374_ovl_01(s8, s16, s16);         /* extern */
s32 func_80079448_ovl_01(s8, M2C_UNK);              /* extern */
extern s32 D_80119D24_ovl_01;
extern M2C_UNK D_80119E84_ovl_01;

void func_800788DC_ovl_01(s32 arg0) {
    s16 temp_a1;
    void *var_s0;

    var_s0 = &D_80119E84_ovl_01 + 0x18;
    do {
        var_s0 -= 8;
        if (arg0 != 0) {
            if (M2C_FIELD(var_s0, u8 *, 0) == 5) {
                temp_a1 = M2C_FIELD(var_s0, s16 *, 4);
                func_80079374_ovl_01(M2C_FIELD(var_s0, s8 *, 2), temp_a1, temp_a1);
                if (D_80119D24_ovl_01 != 0) {
                    func_80078FF0_ovl_01(M2C_FIELD(var_s0, s8 *, 2));
                }
                M2C_FIELD(var_s0, u8 *, 0) = 1U;
            }
        } else if ((M2C_FIELD(var_s0, u8 *, 0) == 1) && ((func_80079448_ovl_01(M2C_FIELD(var_s0, s8 *, 2), 0) << 0x10) != 0)) {
            func_80079374_ovl_01(M2C_FIELD(var_s0, s8 *, 2), 0, 0);
            func_800791C4_ovl_01(M2C_FIELD(var_s0, s8 *, 2));
            M2C_FIELD(var_s0, u8 *, 0) = 5U;
        }
    } while (var_s0 != &D_80119E84_ovl_01);
}
