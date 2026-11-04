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

s32 func_80040E88_ovl_01(void *, void *);           /* extern */

s32 func_80165B50_ovl_35(s32 arg0, s32 arg1, s16 arg2, s32 arg3) {
    s32 var_v0;
    void *temp_s0;
    void *temp_s0_2;

    temp_s0 = M2C_FIELD(arg0, s32 *, 0x234) + ((arg1 & 0x3F) * 0x178);
    if (!(arg1 & 0x40)) {
        M2C_FIELD(temp_s0, s16 *, 0x58) = (s16) -arg2;
        M2C_FIELD(temp_s0, s16 *, 0x5A) = (s16) -arg3;
        func_80040E88_ovl_01(temp_s0 + 0x58, temp_s0 + 8);
    }
    var_v0 = arg1 & 0x80;
    temp_s0_2 = temp_s0 + 0x2F0;
    if (var_v0 == 0) {
        M2C_FIELD(temp_s0_2, s16 *, 0x58) = arg2;
        M2C_FIELD(temp_s0_2, s16 *, 0x5A) = (s16) arg3;
        var_v0 = func_80040E88_ovl_01(temp_s0_2 + 0x58, temp_s0_2 + 8);
    }
    return var_v0;
}
