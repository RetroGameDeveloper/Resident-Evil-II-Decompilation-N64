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
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2 -mcpu=r4600, tried by autopilot */

s32 func_801620C8_ovl_17();
s32 func_80166FBC_ovl_17();

void func_80164940_ovl_17(void *arg0, s32 arg1, s32 arg2) {
    u8 temp_a3;
    void *temp_s0;

    temp_s0 = arg0 + 0x2B4;
    if (M2C_FIELD(arg0, u8 *, 0x2D8) != 1) {
        func_80166FBC_ovl_17(arg0, 1, 0);
    }
    if (M2C_FIELD(temp_s0, u8 *, 0x1E) != 0) {
        temp_a3 = M2C_FIELD(temp_s0, u8 *, 0x1D);
        M2C_FIELD(arg0, s32 *, 4) = (s32) ((M2C_FIELD(temp_s0, u8 *, 0x1B) << 0x10) + (M2C_FIELD(temp_s0, u8 *, 0x1C) << 8) + temp_a3 + 0x01000000);
        func_801620C8_ovl_17(arg0, arg1, arg2, temp_a3);
        return;
    }
    M2C_FIELD(temp_s0, s8 *, 0x19) = 1;
    M2C_FIELD(arg0, s32 *, 4) = 0x01040000;
}
