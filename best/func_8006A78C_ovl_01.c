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

M2C_UNK func_8008386C_ovl_01(M2C_UNK, s32, s16 *, s16 *); /* extern */
extern M2C_UNK D_800B92C8_ovl_01;

s32 func_8006A78C_ovl_01(s32 arg0) {
    s16 sp10;
    s16 sp14;
    s16 var_v0;
    s16 var_v0_2;
    s32 var_s0;

    sp10 = M2C_UNALIGNED32(M2C_FIELD(&D_800B92C8_ovl_01, M2C_UNK *, 0));
    sp14 = M2C_UNALIGNED32(M2C_FIELD(&D_800B92C8_ovl_01, M2C_UNK *, 4));
    func_8008386C_ovl_01(0, arg0, &sp10, &sp10);
    var_v0 = sp10;
    var_s0 = 0;
    if (var_v0 < 0) {
        var_v0 = -var_v0;
    }
    if (var_v0 >= 0x4001) {
        var_s0 = 1;
    }
    var_v0_2 = sp14;
    if (var_v0_2 < 0) {
        var_v0_2 = -var_v0_2;
    }
    if (var_v0_2 >= 0x4001) {
        var_s0 = 2;
    }
    return var_s0;
}
