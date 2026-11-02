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

M2C_UNK func_80032B8C_ovl_01(void *, M2C_UNK);      /* extern */
M2C_UNK func_80032F24_ovl_01(void *, s16, M2C_UNK); /* extern */
M2C_UNK func_800334F8_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_80033634_ovl_01();                         /* extern */
M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */
M2C_UNK func_80083800_ovl_01(s16, void *, void *);  /* extern */
s32 func_8008A974_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80162B24_ovl_16(void *, void *, M2C_UNK); /* extern */
M2C_UNK func_80165A04_ovl_16(void *);               /* extern */
extern M2C_UNK func_80167368_ovl_16;

void func_80166084_ovl_16(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u16 temp_v0;
    u8 temp_s1;
    void *temp_a1;

    temp_s1 = M2C_FIELD(arg0, u8 *, 7);
    switch (temp_s1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, u8 *, 0x26F) = (u8) (M2C_FIELD(arg0, u8 *, 0x26F) | 0x80);
        func_80077D48_ovl_01(7, arg0);
        func_80162B24_ovl_16(arg0, (M2C_FIELD(arg0, u8 *, 0x2CB) * 8) + &func_80167368_ovl_16, 0);
        temp_a1 = arg0 + 0x1E0;
        M2C_FIELD(arg0, s16 *, 0x1E0) = 0x32;
        M2C_FIELD(arg0, s16 *, 0x1E4) = 0;
        M2C_FIELD(arg0, s16 *, 0x1E2) = 0;
        func_80083800_ovl_01(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2C4), s16 *, 0x66), temp_a1, temp_a1);
        func_80032F24_ovl_01(arg0, (s16) ((u16) M2C_FIELD(M2C_FIELD(arg0, void **, 0x2C4), s16 *, 0x66) + 0x800), 0x80);
        M2C_FIELD(arg0, u16 *, 0x1F4) = (u16) (func_80033634_ovl_01() & 0x11);
        M2C_FIELD(arg0, s16 *, 0x170) = -0x2A0;
        M2C_FIELD(arg0, s16 *, 0x172) = 0;
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x09000000;
        M2C_FIELD(arg0, u8 *, 7) = 1U;
        M2C_FIELD(arg0, u16 *, 0x2C8) = (u16) (M2C_FIELD(arg0, u16 *, 0x2C8) | 2);
        /* fallthrough */
    case 1:
        M2C_FIELD(arg0, u8 *, 7) = (u8) (M2C_FIELD(arg0, u8 *, 7) + func_8008A974_ovl_01(arg0, arg1, arg2, 0x1000));
        if (M2C_FIELD(arg0, s16 *, 0x2D6) >= -0x31F) {
            M2C_FIELD(arg0, s16 *, 0x2D6) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x2D6) - 0x28);
        }
        M2C_FIELD(arg0, u8 *, 0x2CE) = 3U;
        M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) + M2C_FIELD(arg0, s16 *, 0x1E0));
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) + M2C_FIELD(arg0, s16 *, 0x1E4));
        return;
    case 2:
        if (M2C_FIELD(arg0, s16 *, 0x1F2) < 0) {
            M2C_FIELD(arg0, u8 *, 7) = 0U;
            M2C_FIELD(arg0, u8 *, 6) = (u8) (M2C_FIELD(arg0, u8 *, 6) + 1);
            return;
        }
        temp_v0 = M2C_FIELD(arg0, u16 *, 0x1F4) - 1;
        M2C_FIELD(arg0, u16 *, 0x1F4) = temp_v0;
        if ((temp_v0 << 0x10) <= 0) {
            M2C_FIELD(arg0, s32 *, 0x1E8) = 0x10000300;
            M2C_FIELD(arg0, u16 *, 0x1F4) = 0U;
            M2C_FIELD(arg0, u8 *, 7) = 3U;
            return;
        }
        return;
    case 3:
        M2C_FIELD(arg0, u16 *, 0x1F4) = (u16) (M2C_FIELD(arg0, u16 *, 0x1F4) + 1);
        if (M2C_FIELD(arg0, s16 *, 0x2D6) < -0x1F4) {
            M2C_FIELD(arg0, s16 *, 0x2D6) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x2D6) + 0x50);
        }
        func_800334F8_ovl_01(arg0, arg1, arg2, 0);
        if (func_8008A974_ovl_01(arg0, arg1, arg2, 0x400) != 0) {
            M2C_FIELD(arg0, s16 *, 0x2D6) = -0x1F4;
            M2C_FIELD(arg0, u8 *, 0x2CE) = temp_s1;
            M2C_FIELD(arg0, u8 *, 0x26F) = (u8) (M2C_FIELD(arg0, u8 *, 0x26F) & 0x7F);
            func_80165A04_ovl_16(arg0);
        }
        func_80032B8C_ovl_01(arg0, 0);
        break;
    }
}
