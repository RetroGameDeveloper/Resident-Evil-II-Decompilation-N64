/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2 -mcpu=r4600, tried by autopilot */
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

void func_8016369C_ovl_26(void *arg0) {
    u8 var_a1;
    void *temp_a2;

    temp_a2 = arg0 + 0x2B4;
    var_a1 = M2C_FIELD(temp_a2, u8 *, 0x26);
    if (M2C_FIELD(arg0, u8 *, 8) != 0x2E) {
        var_a1 += 8;
    }
    M2C_FIELD(temp_a2, u8 *, 0xC) = var_a1;
    M2C_FIELD(temp_a2, s8 *, 0xB) = 0x5A;
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) & ~4);
    M2C_FIELD(temp_a2, s8 *, 2) = 0;
    M2C_FIELD(arg0, s16 *, 6) = 0x100;
    M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) ((M2C_FIELD(arg0, u8 *, 0x2CD) * 0x0D000000) + 0x3F00);
    if (M2C_FIELD(temp_a2, u8 *, 4) == 0) {
        M2C_FIELD(arg0, s16 *, 6) = 0x200;
        M2C_FIELD(temp_a2, s8 *, 0x12) = 1;
        M2C_FIELD(temp_a2, s8 *, 0x13) = 0;
        M2C_FIELD(temp_a2, s8 *, 0x14) = 0x20;
    }
}
