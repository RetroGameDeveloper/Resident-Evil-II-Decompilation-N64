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

M2C_UNK D_80033678(M2C_UNK *);                      /* extern */
M2C_UNK func_80032C08_ovl_01(M2C_UNK *, s32, M2C_UNK); /* extern */
s16 func_80032D44_ovl_01(s16, s16, s16, s16);       /* extern */
s32 func_80033634_ovl_01();                         /* extern */
s32 func_80040BE4_ovl_01(s32, s32);                 /* extern */
M2C_UNK func_80052C9C_ovl_01(M2C_UNK, M2C_UNK, M2C_UNK, s16); /* extern */
s32 func_800656BC_ovl_01(s16, s16);                 /* extern */
M2C_UNK func_80077D48_ovl_01(M2C_UNK, M2C_UNK *);   /* extern */
s32 func_80089D34_ovl_01(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_801635A0_ovl_30(M2C_UNK *, M2C_UNK);   /* extern */
M2C_UNK func_801637A4_ovl_30(M2C_UNK *);            /* extern */
M2C_UNK func_801672F4_ovl_30(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 func_8016764C_ovl_30(M2C_UNK *, M2C_UNK);       /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E10D0_ovl_01;
extern M2C_UNK D_80167DCC_ovl_30;

void func_8016481C_ovl_30(M2C_UNK *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s16 temp_a3;
    s16 temp_v0_6;
    s32 temp_hi;
    s32 temp_lo;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v1_2;
    u16 temp_v0_7;
    u8 temp_v1;
    void *temp_a0;
    void *temp_v0;

    temp_v1 = M2C_FIELD(arg0, u8 *, 7);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, u8 *, 7) = 1U;
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x0D000F00;
        temp_v0 = M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x1827C), s32 *, 0x38) + (*((func_800656BC_ovl_01(M2C_FIELD(&D_800E10D0_ovl_01, s16 *, 0x2A), M2C_FIELD(&D_800E10D0_ovl_01, s16 *, 0x32)) & 0xFF) + &D_80167DCC_ovl_30) * 0xC);
        temp_a0 = temp_v0 + 4;
        M2C_FIELD(arg0, s16 *, 0x260) = (s16) ((s32) (M2C_FIELD(temp_v0, s16 *, 4) + M2C_FIELD(temp_a0, s16 *, 4)) >> 1);
        temp_v0_2 = M2C_FIELD(arg0, s16 *, 0x260) - M2C_FIELD(arg0, s32 *, 0x28);
        temp_lo = temp_v0_2 * temp_v0_2;
        temp_v1_2 = (s32) (M2C_FIELD(temp_a0, s16 *, 2) + M2C_FIELD(temp_a0, s16 *, 6)) >> 1;
        temp_v0_3 = temp_v1_2 - M2C_FIELD(arg0, s32 *, 0x30);
        M2C_FIELD(arg0, s16 *, 0x262) = (s16) temp_v1_2;
        temp_v0_4 = func_80040BE4_ovl_01(temp_lo + (temp_v0_3 * temp_v0_3), temp_lo);
        temp_hi = MULT_HI(temp_v0_4, 0x2E8BA2E9);
        temp_v0_5 = temp_v0_4 >> 0x1F;
        M2C_FIELD(arg0, u16 *, 0x1E2) = -0x354U;
        M2C_FIELD(arg0, s16 *, 0x1E4) = 0;
        M2C_FIELD(arg0, s16 *, 0x1E0) = (s16) ((temp_hi >> 2) - temp_v0_5);
        temp_v0_6 = func_80032D44_ovl_01(M2C_FIELD(arg0, s16 *, 0x2A), M2C_FIELD(arg0, s16 *, 0x32), M2C_FIELD(arg0, s16 *, 0x260), M2C_FIELD(arg0, s16 *, 0x262));
        M2C_FIELD(arg0, s16 *, 0x2B6) = temp_v0_6;
        M2C_FIELD(arg0, s16 *, 0x66) = temp_v0_6;
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 4);
        /* fallthrough */
    case 1:
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
        if (*M2C_FIELD(arg0, s32 **, 0x214) & 0x10000) {
            M2C_FIELD(arg0, u8 *, 7) = 2U;
            M2C_FIELD(arg0, s8 *, 0x207) = 0;
            func_80077D48_ovl_01(6, arg0);
            return;
        }
        return;
    case 2:
        func_80032C08_ovl_01(arg0, M2C_FIELD(arg0, s16 *, 0x2B6) - M2C_FIELD(arg0, s16 *, 0x66), 0);
        if (M2C_FIELD(arg0, s8 *, 0x207) == 0) {
            if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x100) != 0) {
                M2C_FIELD(arg0, s8 *, 0x207) = 1;
            }
        }
        temp_v0_7 = M2C_FIELD(arg0, u16 *, 0x1E2) + 0x50;
        M2C_FIELD(arg0, u16 *, 0x1E2) = temp_v0_7;
        M2C_FIELD(arg0, s8 *, 0x1A2) = (s8) (M2C_FIELD(arg0, s32 *, 0x2C) / 1800);
        if (((s16) temp_v0_7 >= 0x354) && (M2C_FIELD(arg0, s16 *, 0x1E0) != 0)) {
            M2C_FIELD(arg0, s16 *, 0x1E0) = 0;
            M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) & ~0x40C);
            M2C_FIELD(arg0, s16 *, 0x66) = func_80032D44_ovl_01(M2C_FIELD(arg0, s16 *, 0x2A), M2C_FIELD(arg0, s16 *, 0x32), M2C_FIELD(&D_800E10D0_ovl_01, s16 *, 0x2A), M2C_FIELD(&D_800E10D0_ovl_01, s16 *, 0x32));
            M2C_FIELD(arg0, u16 *, 0x1AA) = (u16) (M2C_FIELD(arg0, u16 *, 0x1AA) & 0xBBFF);
        }
        if ((M2C_FIELD(arg0, s32 *, 0x2C) + 0xC8) >= M2C_FIELD(arg0, s16 *, 0x25E)) {
            M2C_FIELD(arg0, u8 *, 7) = 3U;
            M2C_FIELD(arg0, s32 *, 0x1E8) = 0x0E000300;
            M2C_FIELD(arg0, s8 *, 0x206) = 1;
            M2C_FIELD(arg0, s8 *, 0x2BD) = 0;
            func_80089D34_ovl_01(arg0, arg1, arg2, 0x400);
            temp_a3 = M2C_FIELD(arg0, s16 *, 0x262);
            M2C_FIELD(arg0, s32 *, 0x28) = (s32) M2C_FIELD(arg0, s16 *, 0x260);
            M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(arg0, s16 *, 0x25E);
            M2C_FIELD(arg0, s8 *, 0x1A2) = 0;
            M2C_FIELD(arg0, s8 *, 0x207) = 0;
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) temp_a3;
            M2C_FIELD(arg0, u8 *, 0x26F) = (u8) (M2C_FIELD(arg0, u8 *, 0x26F) & 0x7F);
            M2C_FIELD(arg0, u16 *, 0x1AA) = (u16) (M2C_FIELD(arg0, u16 *, 0x1AA) & 0xBBFF);
            func_80052C9C_ovl_01(8, 0x8C, 0, temp_a3);
            return;
        }
        break;
    case 3:
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x400) != 0) {
            M2C_FIELD(arg0, s8 *, 0x2BD) = 0;
            M2C_FIELD(arg0, s8 *, 5) = 2;
            M2C_FIELD(arg0, s16 *, 6) = 0;
            M2C_FIELD(arg0, u8 *, 0x2C7) = 0x3CU;
            if ((0x57EA >> (func_80033634_ovl_01() & 0xF)) & 1) {
                M2C_FIELD(arg0, u8 *, 0x2C7) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C7) + 0x3C);
            }
            func_801637A4_ovl_30(arg0);
        }
        D_80033678(arg0);
        if ((*M2C_FIELD(arg0, s32 **, 0x214) & 0x10000) && (M2C_FIELD(arg0, s8 *, 0x206) == 0) && (func_8016764C_ovl_30(arg0, 0) != 0)) {
            M2C_FIELD(arg0, s8 *, 0x206) = 1;
            M2C_FIELD(arg0, s8 *, 0x207) = 3;
            func_80077D48_ovl_01(3, arg0);
            func_801672F4_ovl_30(&D_800E10D0_ovl_01, 8, 0);
        }
        if (*M2C_FIELD(arg0, s32 **, 0x214) & 0x08000000) {
            M2C_FIELD(arg0, s8 *, 0x2CF) = 0x1D;
            M2C_FIELD(arg0, s8 *, 0x2CE) = 7;
        }
        func_801635A0_ovl_30(arg0, 0xE);
        if (M2C_FIELD(arg0, s8 *, 0x207) != 0) {
            func_801672F4_ovl_30(arg0, 0xE, 1);
            func_801672F4_ovl_30(arg0, 0x10, 1);
            M2C_FIELD(arg0, s8 *, 0x207) = (s8) ((u8) M2C_FIELD(arg0, s8 *, 0x207) - 1);
        }
        break;
    }
}
