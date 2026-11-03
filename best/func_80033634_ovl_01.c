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

extern M2C_UNK D_800C7650_ovl_01;

s32 func_80033634_ovl_01(void) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = ((u16) M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x18272) >> 7) & 0xFF;
    temp_v0 = ((M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x18272) + temp_v1) & 0xFF) | (temp_v1 << 8);
    M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18270) = temp_v0;
    return temp_v0 & 0xFF;
}
