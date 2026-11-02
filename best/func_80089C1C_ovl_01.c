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

M2C_UNK func_80041D80_ovl_01(void *, void *);       /* extern */

void func_80089C1C_ovl_01(void *arg0, void *arg1, void *arg2, s32 arg3) {
    s32 temp_v1;

    temp_v1 = 0x1000 - arg3;
    M2C_FIELD(arg2, s16 *, 0) = (s16) ((u32) ((M2C_FIELD(arg0, s16 *, 0) * temp_v1) + (M2C_FIELD(arg1, s16 *, 0) * arg3)) >> 0xC);
    M2C_FIELD(arg2, s16 *, 2) = (s16) ((u32) ((M2C_FIELD(arg0, s16 *, 2) * temp_v1) + (M2C_FIELD(arg1, s16 *, 2) * arg3)) >> 0xC);
    M2C_FIELD(arg2, s16 *, 4) = (s16) ((u32) ((M2C_FIELD(arg0, s16 *, 4) * temp_v1) + (M2C_FIELD(arg1, s16 *, 4) * arg3)) >> 0xC);
    M2C_FIELD(arg2, s16 *, 6) = (s16) ((u32) ((M2C_FIELD(arg0, s16 *, 6) * temp_v1) + (M2C_FIELD(arg1, s16 *, 6) * arg3)) >> 0xC);
    M2C_FIELD(arg2, s16 *, 8) = (s16) ((u32) ((M2C_FIELD(arg0, s16 *, 8) * temp_v1) + (M2C_FIELD(arg1, s16 *, 8) * arg3)) >> 0xC);
    M2C_FIELD(arg2, s16 *, 0xA) = (s16) ((u32) ((M2C_FIELD(arg0, s16 *, 0xA) * temp_v1) + (M2C_FIELD(arg1, s16 *, 0xA) * arg3)) >> 0xC);
    func_80041D80_ovl_01(arg2, arg2);
}
