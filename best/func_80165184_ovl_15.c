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

M2C_UNK func_80052C00_ovl_01(M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_80052D40_ovl_01(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_80059E30_ovl_01(s32, M2C_UNK);             /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern s32 D_800E10D4_ovl_01;

void func_80165184_ovl_15(s32 arg0) {
    s32 temp_v0;

    func_80052C00_ovl_01(3, 0);
    func_80052D40_ovl_01(0xE, 0xD2, 0x28, 2);
    temp_v0 = func_80059E30_ovl_01(arg0, 0);
    if (temp_v0 & 1) {
        M2C_FIELD(&D_800C7650_ovl_01, s8 *, 0x19A86) = 4;
    }
    if (temp_v0 & 2) {
        D_800E10D4_ovl_01 = 0x03000000;
    }
}
