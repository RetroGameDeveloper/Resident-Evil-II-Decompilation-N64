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

M2C_UNK func_801628B0_ovl_27();                     /* extern */
M2C_UNK func_80162994_ovl_27(void *);               /* extern */
extern M2C_UNK D_800C7650_ovl_01;

void func_8016281C_ovl_27(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 6) == 0) {
        func_801628B0_ovl_27();
    } else {
        func_80162994_ovl_27(arg0);
    }
    M2C_FIELD(arg0, u8 *, 0x2CA) = (u8) M2C_FIELD(arg0, u8 *, 7);
    M2C_FIELD(arg0, u8 *, 0x2C9) = (u8) M2C_FIELD(arg0, u8 *, 6);
    if ((M2C_FIELD(arg0, s16 *, 0x270) == 1) || (M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19A78) & 0x10)) {
        M2C_FIELD(arg0, s16 *, 0x1F2) = -1;
        M2C_FIELD(arg0, s32 *, 4) = 0x030A0000;
    }
}
