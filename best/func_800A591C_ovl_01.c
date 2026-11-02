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

extern f32 D_800BA670_ovl_01;
extern s32 D_80143EAC;

void func_800A591C_ovl_01(s32 arg0) {
    void *temp_v1;

    temp_v1 = D_80143EAC + ((arg0 & 0xFFFF) * 0x68);
    M2C_FIELD(temp_v1, s8 *, 0x5C) = 0;
    M2C_FIELD(temp_v1, s32 *, 0x50) = 0;
    M2C_FIELD(temp_v1, s32 *, 0x58) = 0;
    M2C_FIELD(temp_v1, s32 *, 0x4C) = 0;
    M2C_FIELD(temp_v1, f32 *, 0x54) = (f32) D_800BA670_ovl_01;
    M2C_FIELD(temp_v1, s8 *, 0) = 1;
    M2C_FIELD(temp_v1, u16 *, 0x48) = (u16) M2C_FIELD(temp_v1, u16 *, 0x20);
}
