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

s32 func_80032EA4_ovl_01();

s32 func_80173874_overlay_054(void *arg0, s32 arg1, s32 arg2, s16 arg3) {
    s32 temp_v0;
    u16 temp_s1;

    temp_s1 = M2C_FIELD(arg0, u16 *, 0x66);
    M2C_FIELD(arg0, u16 *, 0x66) = (u16) (temp_s1 + (M2C_FIELD(arg0, u8 *, 0x2CD) << 0xB));
    temp_v0 = func_80032EA4_ovl_01(arg0, arg1, arg2, arg3) << 0x10;
    M2C_FIELD(arg0, u16 *, 0x66) = temp_s1;
    return temp_v0 >> 0x10;
}
