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

M2C_UNK func_800A5D40_ovl_01(s32, s32, M2C_UNK, M2C_UNK, s32, s32, s32, s32); /* extern */
extern s32 D_80143EAC;

void func_800A5A00_ovl_01(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, s32 arg4) {
    s32 temp_a1;

    temp_a1 = D_80143EAC + (arg0 * 0x68);
    func_800A5D40_ovl_01(temp_a1 + 0x42, temp_a1 + 0x40, arg1, arg2, arg3, temp_a1 + 0x44, arg4, temp_a1 + 0x46);
}
