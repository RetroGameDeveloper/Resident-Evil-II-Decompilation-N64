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

extern M2C_UNK D_801719FC_ovl_07;

void func_8017001C_ovl_07(u32 arg0, s8 arg1, s32 arg2) {
    M2C_UNK *var_v1;
    u32 var_a3;

    var_v1 = &D_801719FC_ovl_07;
    var_a3 = 0;
    do {
        if ((arg0 >> var_a3) & 1) {
            M2C_FIELD(var_v1, s8 *, 0) = arg1;
        } else if (arg2 & 0xFF) {
            M2C_FIELD(var_v1, s8 *, 0) = 0;
        }
        if (M2C_FIELD(var_v1, u8 *, 1) & 0x20) {
            M2C_FIELD(var_v1, s8 *, 0) = 0;
        }
        var_a3 += 1;
        var_v1 += 0xC;
    } while (var_a3 < 0x1FU);
}
