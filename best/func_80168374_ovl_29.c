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
s32 func_80032D44_ovl_01(s16, s16, s16, s16);       /* extern */
M2C_UNK func_800334F8_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_80033634_ovl_01();                         /* extern */
M2C_UNK func_80035AAC_ovl_01_108(void *);           /* extern */
M2C_UNK func_800377B0_ovl_01(s32, u16, M2C_UNK *, u16 *); /* extern */
M2C_UNK func_80040E88_ovl_01(u16 *, M2C_UNK *);     /* extern */
M2C_UNK func_8004279C_ovl_01(M2C_UNK *, u16 *, u16 *); /* extern */
M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */
s32 func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_801671CC_ovl_29(void *);               /* extern */
M2C_UNK func_80167334_ovl_29(void *);               /* extern */
M2C_UNK func_8016746C_ovl_29(void *);               /* extern */
M2C_UNK func_801675FC_ovl_29(void *);               /* extern */
M2C_UNK func_8016778C_ovl_29(void *);               /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E8FC8_ovl_01;

void func_80168374_ovl_29(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    M2C_UNK sp20;
    u16 sp40;
    u16 sp42;
    u16 sp44;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s2_2;
    u16 temp_s4;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 temp_v1_3;
    void *temp_a1;
    void *temp_s0;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    temp_a1 = M2C_FIELD(arg0, void **, 0x208);
    switch (temp_v1) {                              /* irregular */
    case 0:
        temp_s0 = M2C_FIELD(arg0, s32 *, 0x234) + 0x178;
        temp_s4 = func_80032D44_ovl_01(M2C_FIELD(arg0, s16 *, 0x2A), M2C_FIELD(arg0, s16 *, 0x32), M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19AAA), M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19AB2)) & 0xFF;
        sp40 = 0;
        sp42 = temp_s4;
        sp44 = 0;
        func_80040E88_ovl_01(&sp40, &sp20);
        sp40 = 0x64;
        sp42 = 0;
        if (!((M2C_FIELD(arg0, u8 *, 0x26E) % 3) & 0xFF)) {
            sp42 = 0x2BC;
        }
        func_8004279C_ovl_01(&sp20, &sp40, &sp40);
        sp40 += M2C_FIELD(temp_s0, u16 *, 0x4E);
        sp42 += M2C_FIELD(temp_s0, u16 *, 0x52);
        sp44 += M2C_FIELD(temp_s0, u16 *, 0x56);
        if (M2C_FIELD(arg0, u8 *, 5) != 0x10) {
            func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 8) + 0x17D0) | 0x10000, temp_s4, &D_800E8FC8_ovl_01, &sp40);
            sp42 -= (func_80033634_ovl_01() & 0x3F & 0xFF) - 0x40;
            func_800377B0_ovl_01(((func_80033634_ovl_01() & 0xFF) * 8) + 0x17D0, temp_s4, &D_800E8FC8_ovl_01, &sp40);
        }
        if ((u32) (M2C_FIELD(arg0, u8 *, 5) - 5) < 2U) {
            M2C_FIELD(arg0, s8 *, 0x2C5) = 1;
        }
        if ((u8) M2C_FIELD(arg0, u8 *, 0x26E) < 3U) {
            if (M2C_FIELD(arg0, u8 *, 5) == 9) {
                func_8016746C_ovl_29(arg0);
            }
            if (M2C_FIELD(arg0, u8 *, 5) == 0x11) {
                func_801675FC_ovl_29(arg0);
            }
            if (M2C_FIELD(arg0, u8 *, 5) == 0xA) {
                func_801671CC_ovl_29(arg0);
            }
            if (M2C_FIELD(arg0, u8 *, 5) == 0xB) {
                func_80167334_ovl_29(arg0);
            }
        }
        if (M2C_FIELD(arg0, u8 *, 5) == 0xE) {
            func_8016778C_ovl_29(arg0);
        }
        if (M2C_FIELD(arg0, u8 *, 5) == 0x10) {
            func_801671CC_ovl_29(arg0);
        }
        if (!(M2C_FIELD(arg0, u16 *, 0x2B8) & 0x100)) {
            M2C_FIELD(arg0, s16 *, 0x1F2) = 0xA;
            M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0x298);
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x0A000300;
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, s8 *, 0x2BC) = 2;
        M2C_FIELD(arg0, s8 *, 0x2BD) = 0;
        M2C_FIELD(arg0, u8 *, 0x26F) = (u8) (M2C_FIELD(arg0, u8 *, 0x26F) | 0x80);
        M2C_FIELD(arg0, u16 *, 0x2B8) = (u16) (M2C_FIELD(arg0, u16 *, 0x2B8) | 0x11);
        func_80035AAC_ovl_01_108(arg0);
        M2C_FIELD(arg0, u8 *, 0x25C) = (u8) (M2C_FIELD(arg0, u8 *, 0x25C) | 2);
    case 1:
        if ((u8) M2C_FIELD(arg0, u8 *, 0x1E9) < 0xFU) {
            temp_s1 = M2C_FIELD(arg0, s32 *, 0x234);
            sp40 = 0x40 - ((u32) (func_80033634_ovl_01() & 0xFF) >> 1);
            sp42 = 0;
            sp44 = 0x40 - ((u32) (func_80033634_ovl_01() & 0xFF) >> 1);
            temp_s0_2 = ((func_80033634_ovl_01() & 1) << 0x10) | 0xC00;
            func_800377B0_ovl_01(temp_s0_2, (func_80033634_ovl_01() & 0xFF) * 0x10, temp_s1 + 0x4A0, &sp40);
        }
        temp_v1_2 = M2C_FIELD(arg0, u8 *, 0x1E9);
        if ((u32) (temp_v1_2 - 0x51) < 0x1CU) {
            if (temp_v1_2 == 0x51) {
                func_80077D48_ovl_01(9, arg0);
            }
            temp_s2 = M2C_FIELD(arg0, s32 *, 0x234);
            sp40 = 0x40 - ((u32) (func_80033634_ovl_01() & 0xFF) >> 1);
            sp42 = -0xC8U;
            sp44 = 0x40 - ((u32) (func_80033634_ovl_01() & 0xFF) >> 1);
            temp_s0_3 = ((func_80033634_ovl_01() & 1) << 0x10) | 0xC00;
            func_800377B0_ovl_01(temp_s0_3, (func_80033634_ovl_01() & 0xFF) * 0x10, temp_s2 + 0x4A0, &sp40);
            temp_s2_2 = M2C_FIELD(arg0, s32 *, 0x234);
            sp40 = 0x100 - ((func_80033634_ovl_01() & 0xFF) * 2);
            sp42 = 0xD4 - ((func_80033634_ovl_01() & 0xFF) * 4);
            sp44 = 0x100 - ((func_80033634_ovl_01() & 0xFF) * 2);
            temp_s0_4 = ((func_80033634_ovl_01() & 1) << 0x10) | 0x17B8;
            func_800377B0_ovl_01(temp_s0_4, (func_80033634_ovl_01() & 0xFF) * 0x10, temp_s2_2 + 0x328, &sp40);
        }
        func_800334F8_ovl_01(arg0, arg1, arg2, 0);
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x400) != 0) {
            M2C_FIELD(arg0, u8 *, 6) = 2U;
            M2C_FIELD(arg0, s16 *, 0x1F4) = 0xD2;
            M2C_FIELD(arg0, s8 *, 0x2BC) = 0;
            M2C_FIELD(arg0, s8 *, 0x2BD) = 0;
            M2C_FIELD(arg0, u16 *, 0x2B8) = (u16) (M2C_FIELD(arg0, u16 *, 0x2B8) & 0xFFDF);
            M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 2);
        }
        func_80032B8C_ovl_01(arg0, 0);
        return;
    case 2:
        temp_v1_3 = M2C_FIELD(temp_a1, u8 *, 0x18);
        if (temp_v1_3 != 0x10) {
            M2C_FIELD(temp_a1, u8 *, 0x18) = (u8) (temp_v1_3 - 1);
            M2C_FIELD(temp_a1, u8 *, 0x40) = (u8) (M2C_FIELD(temp_a1, u8 *, 0x40) - 1);
        }
        if ((s32) M2C_FIELD(temp_a1, u8 *, 0x40) & 1) {
            M2C_FIELD(temp_a1, u8 *, 0x18) = (s32) ((s32) M2C_FIELD(temp_a1, u8 *, 0x18) + 0x10100);
            M2C_FIELD(temp_a1, u8 *, 0x40) = (s32) ((s32) M2C_FIELD(temp_a1, u8 *, 0x40) + 0x10100);
            M2C_FIELD(temp_a1, s8 *, 0x1B) = 1;
        }
        if (M2C_FIELD(arg0, s16 *, 0x1F4) != 0) {
            M2C_FIELD(temp_a1, u16 *, 4) = (u16) (M2C_FIELD(temp_a1, u16 *, 4) + 5);
            M2C_FIELD(temp_a1, u16 *, 6) = (u16) (M2C_FIELD(temp_a1, u16 *, 6) + 5);
            M2C_FIELD(arg0, s16 *, 0x1F4) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x1F4) - 1);
        }
        return;
    }
}
