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

extern s32 D_80143EAC;

void func_800A5864_ovl_01(s32 arg0, s32 arg1) {
    void *temp_a0;

    temp_a0 = (arg0 * 0x68) + D_80143EAC;
    M2C_FIELD(temp_a0, s16 *, 0x28) = 0x14;
    if (arg1 & 0xFF) {
        M2C_FIELD(temp_a0, s8 *, 0x5C) = 3;
        M2C_FIELD(temp_a0, s32 *, 0x54) = 0;
        M2C_FIELD(temp_a0, s32 *, 0x50) = 0;
        M2C_FIELD(temp_a0, s16 *, 0x48) = 0x14;
        M2C_FIELD(temp_a0, f32 *, 0x58) = (f32) M2C_FIELD(temp_a0, f32 *, 0x4C);
    }
}
