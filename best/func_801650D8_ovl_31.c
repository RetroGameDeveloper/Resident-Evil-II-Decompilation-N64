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

M2C_UNK func_80052C9C_ovl_01(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *, u16); /* extern */
s32 func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_801650D8_ovl_31(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    M2C_UNK var_a0;
    u16 temp_a2;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x0F020300;
        temp_a2 = M2C_FIELD(arg0, u16 *, 0x2B6) & 0xFF43;
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, u16 *, 0x2B6) = temp_a2;
        if (M2C_FIELD(arg0, s16 *, 0x25E) == -0xE10) {
            var_a0 = 4;
            M2C_FIELD(arg0, u16 *, 0x2B6) = (u16) (temp_a2 | 0x20);
            M2C_FIELD(arg0, s16 *, 0x136) = 0x1F4;
            M2C_FIELD(arg0, s16 *, 0x138) = 0x1F4;
            M2C_FIELD(arg0, s16 *, 0x12C) = 0x1F4;
            M2C_FIELD(arg0, s16 *, 0x12E) = 0x1F4;
        } else {
            var_a0 = 3;
        }
        func_80077D48_ovl_01(var_a0, arg0, temp_a2);
        func_80052C9C_ovl_01(8, 0x64, 0);
        /* fallthrough */
    case 1:
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x400) != 0) {
            M2C_FIELD(arg0, u8 *, 6) = 2U;
            return;
        }
        return;
    case 2:
        M2C_FIELD(arg0, s32 *, 4) = 0x01030000;
        M2C_FIELD(arg0, s8 *, 0x2CE) = 0x5A;
        if ((M2C_FIELD(arg0, u16 *, 0x2B6) & 2) && !(func_80033634_ovl_01() & 3)) {
            M2C_FIELD(arg0, s32 *, 4) = 0x010A0000;
        }
        break;
    }
}
