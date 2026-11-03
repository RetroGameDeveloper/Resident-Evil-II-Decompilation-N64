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

extern M2C_UNK D_800C7650_ovl_01;

void func_80167B9C_ovl_30(s32 arg0) {
    u8 temp_v0;
    void *temp_a1;

    temp_a1 = arg0 + 0x2B4;
    if (M2C_FIELD(temp_a1, u8 *, 0x1A) != 0) {
        M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A5C) = (s32) (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A5C) | (0x80000000U >> M2C_FIELD(temp_a1, u8 *, 0x1B)));
        temp_v0 = M2C_FIELD(temp_a1, u8 *, 0x1A) - 1;
        M2C_FIELD(temp_a1, u8 *, 0x1A) = temp_v0;
        if (!(temp_v0 & 0xFF)) {
            M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A5C) = (s32) (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A5C) & ~8 & ~4);
        }
    }
}
