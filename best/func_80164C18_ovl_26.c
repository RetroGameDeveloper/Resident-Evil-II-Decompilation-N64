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

s32 func_800837DC_ovl_01(M2C_UNK *, M2C_UNK);       /* extern */
M2C_UNK func_80089D34_ovl_01(M2C_UNK);              /* extern */
extern M2C_UNK D_800E8C80_ovl_01;

void func_80164C18_ovl_26(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 7) == 0) {
        M2C_FIELD(arg0, u8 *, 7) = 1U;
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x0C000000;
        M2C_FIELD(arg0, u8 *, 0x25C) = (u8) (M2C_FIELD(arg0, u8 *, 0x25C) | 2);
        func_80089D34_ovl_01(0x10040);
        M2C_FIELD(arg0, s8 *, 0x2C1) = 8;
        M2C_FIELD(arg0, s8 *, 0x2C3) = 3;
    }
    if (func_800837DC_ovl_01(&D_800E8C80_ovl_01, 0x5F) != 0) {
        M2C_FIELD(arg0, s16 *, 6) = 0x100;
    }
}
