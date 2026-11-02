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

M2C_UNK func_80052C00_ovl_01(u8, M2C_UNK);          /* extern */
M2C_UNK func_80052C9C_ovl_01(u8, u8, M2C_UNK);      /* extern */
M2C_UNK func_80052D40_ovl_01(u8, u8, u8, u8);       /* extern */
extern M2C_UNK D_80110F0C_ovl_01;

void func_8005D730_ovl_01(void *arg0) {
    void *temp_s0;

    temp_s0 = (((M2C_FIELD(arg0, u8 *, 0x1AB) - 2) & 0xFF) * 6) + &D_80110F0C_ovl_01;
    func_80052C00_ovl_01(M2C_FIELD(temp_s0, u8 *, 0), 0);
    func_80052C9C_ovl_01(M2C_FIELD(temp_s0, u8 *, 1), M2C_FIELD((((M2C_FIELD(arg0, u16 *, 0x1AA) - 2) * 6) + &D_80110F0C_ovl_01), u8 *, 2), 0);
    func_80052D40_ovl_01(M2C_FIELD(temp_s0, u8 *, 5), M2C_FIELD(temp_s0, u8 *, 3), M2C_FIELD(temp_s0, u8 *, 4), M2C_FIELD(temp_s0, u8 *, 1));
}
