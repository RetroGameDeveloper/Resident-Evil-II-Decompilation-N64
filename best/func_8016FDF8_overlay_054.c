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

M2C_UNK func_800334F8_ovl_01(M2C_UNK);              /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650;

void func_8016FDF8_overlay_054(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    M2C_FIELD(arg0, s8 *, 6) = 1;
    M2C_FIELD(arg0, s8 *, 0x2B9) = 0xF;
    M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) ((((M2C_FIELD(arg0, u8 *, 0x2CD) * 0xD) + 2) << 0x18) + 0x3F00);
    M2C_FIELD(arg0, u8 *, 0x25C) = (u8) (M2C_FIELD(arg0, u8 *, 0x25C) & 0xFD);
    func_800334F8_ovl_01(0);
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x40);
    M2C_FIELD(arg0, s16 *, 0x1E4) = 0;
    M2C_FIELD(arg0, s16 *, 0x1E0) = 0;
    M2C_FIELD(&D_800C7650, u16 *, 0x19A78) = (u16) (M2C_FIELD(&D_800C7650, u16 *, 0x19A78) | 0x40);
    M2C_FIELD(arg0, s8 *, 0x206) = 0;
    M2C_FIELD(arg0, s8 *, 0x2BF) = 0x5A;
    M2C_FIELD(arg0, s8 *, 0x2B6) = 0;
}
