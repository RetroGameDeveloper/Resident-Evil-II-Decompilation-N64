/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2 -mcpu=r4600, tried by autopilot */
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

M2C_UNK func_80032C08_ovl_01(void *, M2C_UNK, M2C_UNK); /* extern */
s16 func_80032D44_ovl_01(s16, s16, M2C_UNK, M2C_UNK); /* extern */
s32 func_80040BE4_ovl_01(s32);                      /* extern */
M2C_UNK func_80052C9C_ovl_01(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */
s32 func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80165D94_ovl_30(void *, M2C_UNK);      /* extern */

void func_80164498_ovl_30(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_hi;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    u16 temp_v0_5;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 7);
    switch (temp_v1) {                              /* irregular */
    case 0:
        temp_v0 = 0x1388 - M2C_FIELD(arg0, s32 *, 0x28);
        temp_v0_2 = -0x40D8 - M2C_FIELD(arg0, s32 *, 0x30);
        M2C_FIELD(arg0, u8 *, 7) = 1U;
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x0D000F00;
        temp_v0_3 = func_80040BE4_ovl_01((temp_v0 * temp_v0) + (temp_v0_2 * temp_v0_2));
        temp_hi = MULT_HI(temp_v0_3, 0x78787879);
        temp_v0_4 = temp_v0_3 >> 0x1F;
        M2C_FIELD(arg0, u16 *, 0x1E2) = -0x54AU;
        M2C_FIELD(arg0, s16 *, 0x1E4) = 0;
        M2C_FIELD(arg0, s16 *, 0x1E0) = (s16) ((temp_hi >> 3) - temp_v0_4);
        M2C_FIELD(arg0, s16 *, 0x2B6) = func_80032D44_ovl_01(M2C_FIELD(arg0, s16 *, 0x2A), M2C_FIELD(arg0, s16 *, 0x32), 0x1388, -0x40D8);
        M2C_FIELD(arg0, s8 *, 0x2CD) = 0;
        M2C_FIELD(arg0, u8 *, 0x25C) = (u8) (M2C_FIELD(arg0, u8 *, 0x25C) | 1);
        /* fallthrough */
    case 1:
        func_80165D94_ovl_30(arg0, 0x80);
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
        if (*M2C_FIELD(arg0, s32 **, 0x214) & 0x10000) {
            M2C_FIELD(arg0, u8 *, 7) = 2U;
            M2C_FIELD(arg0, s8 *, 0x2BD) = 1;
            M2C_FIELD(arg0, s8 *, 0x207) = 0;
            M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 8);
            M2C_FIELD(arg0, u8 *, 0x26F) = (u8) (M2C_FIELD(arg0, u8 *, 0x26F) | 0x80);
            func_80077D48_ovl_01(6, arg0);
block_15:
            func_80052C9C_ovl_01(8, 0x64, 0);
        }
        break;
    case 2:
        func_80032C08_ovl_01(arg0, 0, 0);
        if ((M2C_FIELD(arg0, s8 *, 0x207) == 0) && (func_80089D34_ovl_01(arg0, arg1, arg2, 0x100) != 0)) {
            M2C_FIELD(arg0, s8 *, 0x207) = 1;
            M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x400);
        }
        temp_v0_5 = M2C_FIELD(arg0, u16 *, 0x1E2) + 0x50;
        M2C_FIELD(arg0, u16 *, 0x1E2) = temp_v0_5;
        if (!(temp_v0_5 & 0x8000) && (M2C_FIELD(arg0, s32 *, 0x2C) >= -0x1770)) {
            M2C_FIELD(arg0, s16 *, 6) = 0x100;
            M2C_FIELD(arg0, s32 *, 0x28) = 0x1388;
            M2C_FIELD(arg0, s32 *, 0x2C) = -0x1770;
            M2C_FIELD(arg0, s32 *, 0x30) = -0x40D8;
            func_80077D48_ovl_01(7, arg0);
            M2C_FIELD(arg0, s8 *, 0x2CF) = 0x1C;
            M2C_FIELD(arg0, s8 *, 0x2CE) = 7;
            goto block_15;
        }
        break;
    }
    M2C_FIELD(arg0, s8 *, 0x1A2) = (s8) (M2C_FIELD(arg0, s32 *, 0x2C) / 1800);
}
