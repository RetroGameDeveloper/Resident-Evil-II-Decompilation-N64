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

s32 func_80032D44_ovl_01(s16, s16, s16, s16);       /* extern */

void func_80162A48_overlay_022(void *arg0, s16 arg1, s16 arg2, s16 arg3) {
    s16 var_s1;
    s32 temp_a0_2;
    u16 temp_a0;
    u16 temp_a1;
    u16 temp_v1;
    u16 var_v1;

    var_s1 = arg3;
    temp_a0 = (func_80032D44_ovl_01(M2C_FIELD(arg0, s16 *, 0x2A), M2C_FIELD(arg0, s16 *, 0x32), arg1, arg2) + 0x800) & 0xFFF;
    var_v1 = temp_a0;
    if (arg3 & 0x8000) {
        var_s1 = -arg3;
        var_v1 = (temp_a0 + 0x800) & 0xFFF;
    }
    temp_a1 = M2C_FIELD(arg0, u16 *, 0x66);
    temp_a0_2 = (var_s1 + (var_v1 - temp_a1)) & 0xFFF;
    if (temp_a0_2 >= ((s32) (var_s1 << 0x10) >> 0xF)) {
        temp_v1 = temp_a1 - var_s1;
        M2C_FIELD(arg0, u16 *, 0x66) = temp_v1;
        if ((u32) temp_a0_2 < 0x801U) {
            M2C_FIELD(arg0, u16 *, 0x66) = (u16) (temp_v1 + (var_s1 * 2));
        }
        return;
    }
    M2C_FIELD(arg0, u16 *, 0x66) = var_v1;
}
