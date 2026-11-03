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

extern M2C_UNK D_800C7650_ovl_01;

void func_801644C4_ovl_35(void *arg0) {
    s32 var_v1;
    void *temp_a1;

    temp_a1 = arg0 + 0x2B4;
    if (M2C_FIELD(temp_a1, u8 *, 0x11) != 0) {
        M2C_FIELD(temp_a1, u8 *, 0xF) = 1U;
    }
    var_v1 = 0xFA;
    if (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) & 0x20) {
        var_v1 = 0xC8;
    }
    if ((M2C_FIELD(temp_a1, u8 *, 0x15) != 0) && (M2C_FIELD(temp_a1, u8 *, 0xF) == 0) && (M2C_FIELD(temp_a1, u8 *, 9) & 1) && ((u32) M2C_FIELD(arg0, s16 *, 0x1F2) < (u32) ((M2C_FIELD(temp_a1, u8 *, 0x15) * var_v1) / 3))) {
        M2C_FIELD(temp_a1, u8 *, 0xF) = 1U;
        M2C_FIELD(temp_a1, u8 *, 0x15) = (u8) (M2C_FIELD(temp_a1, u8 *, 0x15) - 1);
    }
}
