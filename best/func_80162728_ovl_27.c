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

M2C_UNK func_80089D34_ovl_01(M2C_UNK);              /* extern */
M2C_UNK func_801636DC_ovl_27(s32, M2C_UNK);         /* extern */

void func_80162728_ovl_27(s32 arg0) {
    func_80089D34_ovl_01(0x200);
    M2C_FIELD((arg0 + 0x2B4), s16 *, 0xE) = 0x400;
    func_801636DC_ovl_27(arg0, 0);
}
