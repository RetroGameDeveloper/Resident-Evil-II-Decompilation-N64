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

M2C_UNK func_80052C00_ovl_01(M2C_UNK, M2C_UNK, u8, s8); /* extern */
M2C_UNK func_80052C9C_ovl_01(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_80166888_ovl_26(void *arg0, s32 arg1) {
    s8 temp_a3;
    u8 temp_a2;

    temp_a3 = arg1 + 2;
    M2C_FIELD(arg0, s8 *, 4) = 2;
    M2C_FIELD(arg0, s8 *, 5) = temp_a3;
    M2C_FIELD(arg0, s8 *, 6) = 0;
    M2C_FIELD(arg0, s8 *, 7) = 0;
    temp_a2 = M2C_FIELD(arg0, u8 *, 0x26F) | 0x80;
    M2C_FIELD(arg0, u8 *, 0x26F) = temp_a2;
    func_80052C00_ovl_01(3, 0, temp_a2, temp_a3);
    func_80052C9C_ovl_01(8, 0xC8, 0);
}
