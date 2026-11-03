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

M2C_UNK func_80162674_ovl_20();                     /* extern */
M2C_UNK func_80166E1C_ovl_20();                     /* extern */

void func_80166DD8_ovl_20(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 0x2BA) & 0x2000) {
        M2C_FIELD(arg0, s16 *, 0x1F2) = 0;
        M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0x298);
        func_80162674_ovl_20();
        return;
    }
    func_80166E1C_ovl_20();
}
