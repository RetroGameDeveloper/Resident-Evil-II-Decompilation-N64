/* Partial candidate from function #265451 in project #68; rechecked locally. */
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

extern M2C_UNK D_80166ED4_overlay_032;

void func_8016690C_ovl_32(s32 arg0, s8 arg1, s8 arg2) {
    void *temp_v1;

    temp_v1 = ((arg0 & 0xFF) * 0x1C) + &D_80166ED4_overlay_032;
    M2C_FIELD(temp_v1, s8 *, 2) = arg1;
    M2C_FIELD(temp_v1, s8 *, 3) = arg2;
}
