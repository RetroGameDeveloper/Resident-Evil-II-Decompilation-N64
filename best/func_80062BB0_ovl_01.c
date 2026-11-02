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

s32 func_80062BB0_ovl_01(u32 arg0) {
    s32 var_v0;
    s32 var_v1;

    var_v1 = 0;
    if (arg0 <= 0x1FFFFU) {
        var_v0 = (arg0 >> 6) & 0x7FF;
    } else {
        var_v1 = 1;
        if (arg0 <= 0x2FFFFU) {
            var_v0 = (arg0 >> 5) & 0x7FF;
        } else {
            var_v1 = 2;
            if (arg0 <= 0x37FFFU) {
                var_v0 = (arg0 >> 4) & 0x7FF;
            } else {
                var_v1 = 3;
                if (arg0 <= 0x3BFFFU) {
                    var_v0 = (arg0 >> 3) & 0x7FF;
                } else {
                    var_v1 = 4;
                    if (arg0 <= 0x3DFFFU) {
                        var_v0 = (arg0 >> 2) & 0x7FF;
                    } else {
                        var_v1 = 5;
                        if (arg0 <= 0x3EFFFU) {
                            var_v0 = (arg0 >> 1) & 0x7FF;
                        } else {
                            var_v1 = 6;
                            if (arg0 > 0x3F7FFU) {
                                var_v1 = 7;
                            }
                            var_v0 = arg0 & 0x7FF;
                        }
                    }
                }
            }
        }
    }
    return ((var_v0 * 4) | (var_v1 << 0xD)) & 0xFFFF;
}
