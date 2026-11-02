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

M2C_UNK func_80162CE0_ovl_15();                     /* extern */
extern M2C_UNK D_800C7650_ovl_01;

void func_80162698_ovl_15(void *arg0) {
    func_80162CE0_ovl_15();
    if ((M2C_FIELD(arg0, u8 *, 0x2B6) == 1) && ((M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x1A5E0) - M2C_FIELD(arg0, s32 *, 0x30)) < 0x251C)) {
        M2C_FIELD(arg0, s32 *, 4) = 0x01010000;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x28C) < 0x5AU) {
        M2C_FIELD(arg0, s32 *, 4) = 0x01010000;
    }
    if (M2C_FIELD(arg0, u8 *, 0x2D4) != 0) {
        M2C_FIELD(arg0, s32 *, 4) = 0x01010000;
    }
}
