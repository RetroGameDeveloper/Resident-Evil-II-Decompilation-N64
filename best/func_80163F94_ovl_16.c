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

s32 func_8008A974_ovl_01(void *, M2C_UNK);          /* extern */
s32 func_80162820_ovl_16(void *);                   /* extern */

void func_80163F94_ovl_16(void *arg0) {
    s32 temp_v0_2;
    u8 temp_v0;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x04000F00;
        M2C_FIELD(arg0, s8 *, 0x2CE) = 3;
        M2C_FIELD(arg0, u8 *, 6) = 0x100;
        M2C_FIELD(arg0, s16 *, 0x1F4) = 0;
        M2C_FIELD(arg0, u16 *, 0x2C8) = (u16) (M2C_FIELD(arg0, u16 *, 0x2C8) & 0xFFFD);
        /* fallthrough */
    case 1:
        if (func_8008A974_ovl_01(arg0, 0x100) != 0) {
            M2C_FIELD(arg0, s32 *, 0x1E8) = 0x04000300;
            M2C_FIELD(arg0, u8 *, 6) = (u8) (M2C_FIELD(arg0, u8 *, 6) + 1);
        }
        break;
    case 2:
        if (func_8008A974_ovl_01(arg0, 0x400) != 0) {
            M2C_FIELD(arg0, s32 *, 4) = 0x01040000;
        }
        break;
    }
    temp_v0 = M2C_FIELD(arg0, u8 *, 7) + 1;
    M2C_FIELD(arg0, u8 *, 7) = temp_v0;
    if ((u32) (temp_v0 & 0xFF) >= 0xBU) {
        temp_v0_2 = func_80162820_ovl_16(arg0);
        M2C_FIELD(arg0, s32 *, 0x2C4) = temp_v0_2;
        if (temp_v0_2 != 0) {
            M2C_FIELD(arg0, s32 *, 4) = 0x010F0000;
        }
    }
}
