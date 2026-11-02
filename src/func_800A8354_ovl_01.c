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

s32 func_800A67C0_ovl_01(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32); /* extern */
void *func_800ADFD4_ovl_01(s32);                    /* extern */

s32 func_800A8354_ovl_01(s32 arg0, u8 arg1, u8 arg2) {
    s32 var_s0;
    u8 var_s1;
    u8 var_s2;
    void *temp_v0;

    var_s1 = arg1;
    var_s2 = arg2;
    var_s0 = -1;
    temp_v0 = func_800ADFD4_ovl_01(arg0 & 0xFFFF);
    if (temp_v0 != NULL) {
        if ((var_s1 & 0xFF) == 0xFF) {
            var_s1 = M2C_FIELD(temp_v0, u8 *, 6);
        }
        if ((var_s2 & 0xFF) == 0xFF) {
            var_s2 = M2C_FIELD(temp_v0, u8 *, 7);
        }
        var_s0 = func_800A67C0_ovl_01((M2C_FIELD(temp_v0, u16 *, 2) << 0x10) | (M2C_FIELD(temp_v0, u8 *, 5) << 8) | M2C_FIELD(temp_v0, u8 *, 4), M2C_FIELD(temp_v0, u8 *, 8) | 0x80, var_s1 & 0xFF, var_s2 & 0xFF, 0xFF, 0xFF, 0, 0xFF, (s32) M2C_FIELD(temp_v0, u8 *, 9), 0);
    }
    return var_s0;
}
