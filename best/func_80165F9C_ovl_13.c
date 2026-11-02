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

void func_80165F9C_ovl_13(void *arg0) {
    u16 temp_v1;

    if ((M2C_FIELD(arg0, u16 *, 0x2C6) & 4) && ((u32) (M2C_FIELD(arg0, u8 *, 5) - 0xB) >= 4U)) {
        M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19A78) = (u16) (M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19A78) & 0xFFFE);
        M2C_FIELD(arg0, u16 *, 0x2C6) = (u16) (M2C_FIELD(arg0, u16 *, 0x2C6) & 0xFFFB);
    }
    temp_v1 = M2C_FIELD(arg0, u16 *, 0x2C6);
    if (temp_v1 & 0x80) {
        M2C_FIELD(arg0, u16 *, 0x2C6) = (u16) (temp_v1 & 0xFF7F);
        M2C_FIELD(arg0, s8 *, 0x2BD) = 0x78;
    }
}
