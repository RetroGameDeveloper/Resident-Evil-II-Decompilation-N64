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

s32 func_80089D34_ovl_01(void *, M2C_UNK);          /* extern */
extern M2C_UNK D_800C7650_ovl_01;

void func_80164B18_ovl_26(void *arg0) {
    void *temp_s1;

    temp_s1 = arg0 + 0x2B4;
    if (M2C_FIELD(arg0, u8 *, 7) == 0) {
        M2C_FIELD(arg0, u8 *, 7) = 1U;
        M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) ((((M2C_FIELD(arg0, u8 *, 0x2CD) * 0xD) + 0xB) << 0x18) + 0x3F00);
        M2C_FIELD(temp_s1, u8 *, 4) = (u8) M2C_FIELD(temp_s1, u8 *, 0xC);
    }
    if (func_80089D34_ovl_01(arg0, 0x40) != 0) {
        M2C_FIELD(arg0, s8 *, 5) = 1;
        M2C_FIELD(arg0, s16 *, 6) = 0;
        M2C_FIELD(temp_s1, s8 *, 8) = 0x1E;
        M2C_FIELD(temp_s1, s8 *, 0xA) = 0x1E;
        M2C_FIELD(temp_s1, s8 *, 9) = 0x2D;
        M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19A78) = (u16) (M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19A78) & 0xFF7F);
        M2C_FIELD(arg0, s8 *, 0x2B6) = 0;
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) & ~0x42);
    }
}
