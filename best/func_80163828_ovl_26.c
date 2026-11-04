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

M2C_UNK func_800377B0_ovl_01(s32, s16, void *, s16 *); /* extern */
M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80163950_ovl_26(void *, M2C_UNK, M2C_UNK); /* extern */

void func_80163828_ovl_26(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s16 sp10;
    s16 sp12;
    s16 sp14;
    u8 temp_v1;
    void *temp_a0;
    void *temp_a2;

    temp_v1 = M2C_FIELD(arg0, u8 *, 7);
    temp_a0 = arg0 + 0x2B4;
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (M2C_FIELD(temp_a0, u8 *, 0x13) != 0) {
        case 1:
            M2C_FIELD(arg0, u8 *, 7) = 2U;
            M2C_FIELD(temp_a0, s8 *, 0x12) = 2;
            M2C_FIELD(temp_a0, u8 *, 0x13) = 0U;
            M2C_FIELD(temp_a0, s8 *, 0x14) = 0x20;
            temp_a2 = M2C_FIELD(arg0, void **, 0x234);
            sp14 = 0;
            sp12 = 0;
            sp10 = 0;
            func_800377B0_ovl_01((M2C_FIELD(arg0, u8 *, 0x2C0) << 0x10) | 0x1D000C00, (s16) (M2C_FIELD(arg0, u16 *, 0x66) + M2C_FIELD(temp_a2, u16 *, 0xD92) + (M2C_FIELD(arg0, u8 *, 0x2CD) << 0xB)), temp_a2 + 0x1060, &sp10);
            func_80077D48_ovl_01(3, arg0);
        }
        break;
    case 2:
        if (M2C_FIELD(temp_a0, u8 *, 0x13) != 0) {
            func_80163950_ovl_26(arg0, arg1, arg2);
        }
        break;
    }
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x40);
}
