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

s32 func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, s32); /* extern */

void func_80161D78_ovl_37(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_v0_2;
    s32 temp_v1_2;
    u8 temp_v0;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 5);
    switch (temp_v1) {                              /* irregular */
    case 10:
        M2C_FIELD(arg0, s32 *, 0x2B8) = 1;
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x700;
        M2C_FIELD(arg0, s32 *, 0x2B4) = 0;
block_9:
        M2C_FIELD(arg0, u8 *, 5) = 0xCU;
    case 12:
        if (func_80089D34_ovl_01(arg0, arg1, arg2, (M2C_FIELD(arg0, s32 *, 0x2B4) << 0x10) | 0x200) != 0) {
            M2C_FIELD(arg0, u8 *, 5) = 0xDU;
            M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) ((M2C_FIELD(arg0, s32 *, 0x2B8) << 0x18) + 0x700);
block_12:
        case 13:
            if (func_80089D34_ovl_01(arg0, arg1, arg2, (M2C_FIELD(arg0, s32 *, 0x2B4) << 0x10) | 0x200) != 0) {
                M2C_FIELD(arg0, s8 *, 4) = 2;
                return;
            }
        } else {
            return;
        }
        break;
    case 11:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x01000700;
        M2C_FIELD(arg0, s32 *, 0x2B4) = 1;
        M2C_FIELD(arg0, s32 *, 0x2B8) = 0;
        goto block_9;
    default:
        temp_v0 = M2C_FIELD(arg0, u8 *, 5);
        temp_v0_2 = temp_v0 & 1;
        temp_v1_2 = ((temp_v0 >> 1) << 0x18) + 0x700;
        M2C_FIELD(arg0, u8 *, 5) = 0xDU;
        M2C_FIELD(arg0, s32 *, 0x2B4) = temp_v0_2;
        M2C_FIELD(arg0, s32 *, 0x1E8) = temp_v1_2;
        goto block_12;
    }
}
