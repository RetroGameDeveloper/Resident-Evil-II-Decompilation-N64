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

M2C_UNK func_80004CFC(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_8007530C_ovl_01(s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_800A21B8_ovl_01(s32, M2C_UNK, s32, M2C_UNK); /* extern */
s32 func_800A8B68_ovl_01(s32, s32, s32, M2C_UNK);   /* extern */
extern s32 D_800C527C_ovl_01;
extern u8 D_80119E14_ovl_01;

s32 func_80180570_ovl_02(s32 arg1, s32 arg2) {
    s32 temp_s0;
    s32 temp_v0;

    func_80004CFC((D_800C527C_ovl_01 + 0x3B807) & ~7, 0, 0);
    temp_s0 = arg1 & 0xFFFF;
    func_8007530C_ovl_01(temp_s0, 8, 1);
    temp_v0 = func_800A8B68_ovl_01(temp_s0, arg2 & 0xFFFF, (D_800C527C_ovl_01 + 0x3B807) & ~7, 0);
    func_800A21B8_ovl_01(((D_80119E14_ovl_01 * 0x7F) / 100) & 0xFF, 0, temp_v0, 0);
    return temp_v0;
}
