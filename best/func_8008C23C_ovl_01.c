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

M2C_UNK func_8004BF9C_ovl_01(s32, M2C_UNK, s32, u32); /* extern */
s32 func_800837DC_ovl_01(M2C_UNK *, s32);           /* extern */
extern M2C_UNK D_800E8D18_ovl_01;
extern M2C_UNK D_8012FF48_ovl_01;

void func_8008C23C_ovl_01(s32 arg0, M2C_UNK arg1, s32 arg2, u32 arg3) {
    s32 var_s0;
    u32 var_a3;

    var_s0 = 0;
    if (arg3 < 0x64U) {
        var_s0 = M2C_FIELD(((arg3 * 8) + &D_8012FF48_ovl_01), u8 *, 1) & 0xF;
    }
    if ((var_s0 != 0) && (func_800837DC_ovl_01(&D_800E8D18_ovl_01, var_s0) != 0)) {
        var_a3 = var_s0 + 0x91;
    } else {
        var_a3 = arg3;
    }
    func_8004BF9C_ovl_01(arg0, arg1, arg2 | 0x4000, var_a3);
}
