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

s32 func_80032D44_ovl_01(s16, s16, s16, s16);       /* extern */

s32 func_80162B08_ovl_22(void *arg0) {
    s32 temp_a0;
    s32 var_v0;
    s32 var_v1;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0x1B0);
    var_v0 = 1;
    if (temp_v1 != NULL) {
        temp_a0 = (func_80032D44_ovl_01(M2C_FIELD(arg0, s16 *, 0x2A), M2C_FIELD(arg0, s16 *, 0x32), (s16) (M2C_FIELD(temp_v1, u16 *, 0) + ((u16) M2C_FIELD(temp_v1, u16 *, 4) >> 1)), (s16) (M2C_FIELD(temp_v1, u16 *, 2) + ((u16) M2C_FIELD(temp_v1, u16 *, 6) >> 1))) - M2C_FIELD(arg0, u16 *, 0x66)) & 0xFFF;
        var_v1 = temp_a0;
        if (temp_a0 >= 0x801) {
            var_v1 = temp_a0 | 0xF000;
        }
        var_v0 = -1;
        if ((var_v1 << 0x10) <= 0) {
            var_v0 = 1;
        }
    }
    return var_v0;
}
