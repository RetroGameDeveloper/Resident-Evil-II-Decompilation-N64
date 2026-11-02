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

u32 func_800A8488_ovl_01(M2C_UNK);                  /* extern */

void func_800AB4B4_ovl_01(u32 *arg0, M2C_UNK arg1) {
    *arg0 = (u32) (((u32) (*arg0 << 0x10) / func_800A8488_ovl_01(arg1)) * 0x3E8) >> 5;
}
