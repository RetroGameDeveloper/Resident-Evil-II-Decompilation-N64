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

s32 func_80089D34_ovl_01(M2C_UNK);                  /* extern */

void func_80164D38_ovl_17(void *arg0) {
    void *temp_s1;

    temp_s1 = arg0 + 0x2B4;
    if (func_80089D34_ovl_01(0x400) != 0) {
        M2C_FIELD(temp_s1, s8 *, 0xB) = 0;
        M2C_FIELD(temp_s1, s8 *, 0xA) = 0;
        M2C_FIELD(arg0, s32 *, 4) = 0x01000000;
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x0C000000);
        M2C_FIELD(arg0, u8 *, 0x26F) = (u8) (M2C_FIELD(arg0, u8 *, 0x26F) & 0x7F);
    }
}
