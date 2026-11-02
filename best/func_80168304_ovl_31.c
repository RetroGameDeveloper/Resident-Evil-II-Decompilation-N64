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

u16 func_80032D44_ovl_01(s16, s16, s16, s16);       /* extern */
s32 func_80033634_ovl_01();                         /* extern */
M2C_UNK func_800377B0_ovl_01(s32, s16, M2C_UNK *, u16 *); /* extern */
M2C_UNK func_80040E88_ovl_01(u16 *, M2C_UNK *);     /* extern */
M2C_UNK func_8004279C_ovl_01(M2C_UNK *, u16 *, u16 *); /* extern */
M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */
M2C_UNK func_8016248C_ovl_31(void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_801671A8_ovl_31(void *);               /* extern */
M2C_UNK func_801672E0_ovl_31(void *);               /* extern */
M2C_UNK func_80167418_ovl_31(void *);               /* extern */
M2C_UNK func_801675A8_ovl_31(void *);               /* extern */
M2C_UNK func_80167840_ovl_31(void *);               /* extern */
M2C_UNK func_80168758_ovl_31(void *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E8FC8_ovl_01;
extern M2C_UNK D_8016C464_ovl_31;

void func_80168304_ovl_31(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u16 sp10;
    u16 sp12;
    u16 sp14;
    u16 sp18;
    u16 sp1A;
    u16 sp1C;
    M2C_UNK sp20;
    u16 temp_a0;
    u16 temp_s4;
    u8 temp_v1;
    void *temp_s0;

    if (M2C_FIELD(arg0, u8 *, 6) == 0) {
        temp_s0 = M2C_FIELD(arg0, s32 *, 0x234) + 0xD38;
        temp_s4 = func_80032D44_ovl_01(M2C_FIELD(arg0, s16 *, 0x2A), M2C_FIELD(arg0, s16 *, 0x32), M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19AAA), M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19AB2));
        sp10 = 0;
        sp12 = temp_s4;
        sp14 = 0;
        func_80040E88_ovl_01(&sp10, &sp20);
        sp10 = 0xC8;
        sp12 = -0xC8U;
        sp1A = 0;
        sp1C = 0;
        sp18 = (M2C_FIELD(arg0, u16 *, 0x1E0) * 4) + 0x12C;
        if (!((M2C_FIELD(arg0, u8 *, 0x26E) % 3) & 0xFF)) {
            sp10 = 0x96;
            sp12 = 0x320;
            sp1A = 0x2BC;
            sp18 = (M2C_FIELD(arg0, u16 *, 0x1E0) * 2) + 0x96;
        }
        if (((M2C_FIELD(arg0, u8 *, 0x26E) % 3) & 0xFF) == 2) {
            sp10 = 0xC8;
            sp12 = -0x2BCU;
            sp1A = -0x2BCU;
            sp18 = (M2C_FIELD(arg0, u16 *, 0x1E0) * 2) + 0xC8;
        }
        func_8004279C_ovl_01(&sp20, &sp10, &sp10);
        sp10 += M2C_FIELD(temp_s0, u16 *, 0x4E);
        sp12 += M2C_FIELD(temp_s0, u16 *, 0x52);
        sp14 += M2C_FIELD(temp_s0, u16 *, 0x56);
        func_8004279C_ovl_01(&sp20, &sp18, &sp18);
        sp18 += M2C_FIELD(temp_s0, u16 *, 0x4E);
        sp1A += M2C_FIELD(temp_s0, u16 *, 0x52);
        sp1C += M2C_FIELD(temp_s0, u16 *, 0x56);
        temp_v1 = M2C_FIELD(arg0, u8 *, 5);
        if ((temp_v1 != 0x10) && (temp_v1 != 0xC)) {
            func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 8) + 0x17D0) | 0x10000, (s16) temp_s4, &D_800E8FC8_ovl_01, &sp10);
            sp12 -= (func_80033634_ovl_01() & 0x3F & 0xFF) - 0x40;
            func_800377B0_ovl_01(((func_80033634_ovl_01() & 0xFF) * 8) + 0x17D0, (s16) temp_s4, &D_800E8FC8_ovl_01, &sp10);
            func_800377B0_ovl_01(((func_80033634_ovl_01() & 0xFF) * 8) + 0x17D0, (s16) temp_s4, &D_800E8FC8_ovl_01, &sp18);
            sp12 -= (func_80033634_ovl_01() & 0x3F & 0xFF) - 0x40;
            func_800377B0_ovl_01(((func_80033634_ovl_01() & 0xFF) * 8) + 0x17D0, (s16) temp_s4, &D_800E8FC8_ovl_01, &sp18);
            if (M2C_FIELD(arg0, u8 *, 5) != 1) {
                func_80077D48_ovl_01(2, arg0);
            }
        }
        if ((u32) (M2C_FIELD(arg0, u8 *, 5) - 5) < 2U) {
            M2C_FIELD(arg0, s8 *, 0x2BC) = 1;
        }
        if ((u8) M2C_FIELD(arg0, u8 *, 0x26E) < 3U) {
            if (M2C_FIELD(arg0, u8 *, 5) == 9) {
                func_80167418_ovl_31(arg0);
            }
            if (M2C_FIELD(arg0, u8 *, 5) == 0x11) {
                func_801675A8_ovl_31(arg0);
            }
            if (M2C_FIELD(arg0, u8 *, 5) == 0xA) {
                func_801671A8_ovl_31(arg0);
            }
            if (M2C_FIELD(arg0, u8 *, 5) == 0xB) {
                func_801672E0_ovl_31(arg0);
            }
        }
        if (M2C_FIELD(arg0, u8 *, 5) == 0xE) {
            func_80167840_ovl_31(arg0);
        }
        if (M2C_FIELD(arg0, u16 *, 0x2B6) & 0x400) {
            M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0x298);
            goto block_30;
        }
        temp_a0 = M2C_FIELD(arg0, u16 *, 0x2B6);
        M2C_FIELD(arg0, u8 *, 0x2B9) = (u8) (M2C_FIELD(arg0, u8 *, 0x2B9) + M2C_FIELD((M2C_FIELD(arg0, u8 *, 5) + &D_8016C464_ovl_31), u8 *, -1));
        if (!(temp_a0 & 1)) {
            M2C_FIELD(arg0, u16 *, 0x2B6) = (u16) (temp_a0 | 1);
            M2C_FIELD(arg0, s8 *, 0x2B8) = 0xF;
        }
        if ((u8) M2C_FIELD(arg0, u8 *, 0x2B9) < 0xCU) {
            M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0x298);
            func_8016248C_ovl_31(arg0, arg1, arg2);
            return;
        }
        M2C_FIELD(arg0, u8 *, 0x2B9) = 0U;
        M2C_FIELD(arg0, s8 *, 0x2B8) = 0;
        M2C_FIELD(arg0, u16 *, 0x2B6) = (u16) (M2C_FIELD(arg0, u16 *, 0x2B6) & 0xFFFE);
        goto block_29;
    }
block_29:
block_30:
    func_80168758_ovl_31(arg0, arg1, arg2);
}
