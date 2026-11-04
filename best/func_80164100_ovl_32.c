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

M2C_UNK func_800377B0_ovl_01(s32, s16, M2C_UNK *, u16 *); /* extern */
M2C_UNK func_80040E88_ovl_01(s16 *, M2C_UNK *);     /* extern */
M2C_UNK func_8004279C_ovl_01(M2C_UNK *, s16 *, s16 *); /* extern */
M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */
M2C_UNK func_80162330_ovl_32(void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_801638F4_ovl_32(void *);               /* extern */
M2C_UNK func_80163B3C_ovl_32(void *);               /* extern */
M2C_UNK func_80163D5C_ovl_32(void *);               /* extern */
M2C_UNK func_80163E18_ovl_32(void *);               /* extern */
M2C_UNK func_801645CC_ovl_32(void *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E8FC8_ovl_01;
extern M2C_UNK D_80166F78_ovl_32;

void func_80164100_ovl_32(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s16 sp10;
    u16 sp12;
    s16 sp14;
    u16 sp18;
    u16 sp1A;
    s16 sp1C;                                       /* compiler-managed */
    M2C_UNK sp20;
    s16 temp_v0;
    s32 temp_lo;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 var_s4;
    u16 temp_a0;
    u8 temp_v1;
    u8 temp_v1_2;

    if (M2C_FIELD(arg0, u8 *, 6) == 0) {
        sp10 = 0;
        sp14 = 0;
        sp12 = M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19AE6);
        func_80040E88_ovl_01(&sp10, &sp20);
        sp10 = 0x1000;
        sp12 = 0;
        func_8004279C_ovl_01(&sp20, &sp10, &sp10);
        var_s4 = 0;
        if ((sp10 < -0x40) && (temp_v1 = M2C_FIELD(arg0, u8 *, 5), (temp_v1 != 0x10))) {
            if ((u32) (temp_v1 - 9) >= 4U) {
                temp_lo = (s32) (sp14 * (M2C_FIELD(arg0, s32 *, 0x28) - (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19AA8) - 0xC6F))) / sp10;
                sp1C = (s16) temp_lo;
                sp1A = -0x578U;
                sp18 = M2C_FIELD(arg0, u16 *, 0x2A) + 0xC6F;
                if (!((M2C_FIELD(arg0, u8 *, 0x26E) % 3) & 0xFF)) {
                    sp12 = -0x2BCU;
                }
                if (((M2C_FIELD(arg0, u8 *, 0x26E) % 3) & 0xFF) == 2) {
                    sp12 = -0x7D0U;
                }
                temp_v0 = temp_lo + M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19AB2);
                sp1C = temp_v0;
                if (temp_v0 >= -0x5013) {
                    sp1C = -0x5014;
                }
                if (sp1C < -0x6590) {
                    sp1C = -0x6590;
                }
                if (M2C_FIELD(arg0, u8 *, 5) == 1) {
                    sp1C = M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x19CB4), u16 *, 0x107E);
                }
                temp_s0 = func_80033634_ovl_01();
                func_800377B0_ovl_01(((temp_s0 & 1) << 0x10) | (((func_80033634_ovl_01() & 0xFF) * 8) + 0x1FA0), 0, &D_800E8FC8_ovl_01, &sp18);
                sp18 += 0x1F4;
                sp1C -= (func_80033634_ovl_01() & 0xFF) - 0x80;
                temp_s0_2 = func_80033634_ovl_01();
                func_800377B0_ovl_01(((temp_s0_2 & 1) << 0x10) | (((func_80033634_ovl_01() & 0xFF) * 4) + 0x1FA0), 0, &D_800E8FC8_ovl_01, &sp18);
                if ((sp1C < -0x57E4) && (sp1C >= -0x5DBF)) {
                    var_s4 = 1;
                }
            }
        }
        temp_s1 = func_80032D44_ovl_01((s16) M2C_FIELD(arg0, u16 *, 0x2A), M2C_FIELD(arg0, s16 *, 0x32), M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19AAA), (s16) M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19AB2));
        if (var_s4 == 1) {
            sp18 = M2C_FIELD(arg0, u16 *, 0x142) + 0x1F4;
            sp1A = M2C_FIELD(arg0, u16 *, 0x146);
            sp1C = M2C_FIELD(arg0, u16 *, 0x14A);
            func_800377B0_ovl_01(((func_80033634_ovl_01() & 0xFF) * 8) + 0x1FA0, (s16) temp_s1, &D_800E8FC8_ovl_01, &sp18);
            sp10 = (u16) sp10 + 0x1F4;
            func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 8) + 0x1FA0) | 0x10000, (s16) temp_s1, &D_800E8FC8_ovl_01, &sp18);
            if (M2C_FIELD(arg0, u8 *, 5) != var_s4) {
                func_80077D48_ovl_01(8, arg0);
            }
        }
        temp_v1_2 = M2C_FIELD(arg0, u8 *, 5);
        if ((temp_v1_2 == 9) || (temp_v1_2 == 0x11)) {
            func_80163D5C_ovl_32(arg0);
        }
        if (M2C_FIELD(arg0, u8 *, 5) == 0xA) {
            func_801638F4_ovl_32(arg0);
        }
        if (M2C_FIELD(arg0, u8 *, 5) == 0xB) {
            func_80163B3C_ovl_32(arg0);
        }
        if (M2C_FIELD(arg0, u8 *, 5) == 0xE) {
            func_80163E18_ovl_32(arg0);
        }
        if ((u8) M2C_FIELD((M2C_FIELD(arg0, u8 *, 5) + &D_80166F78_ovl_32), u8 *, -1) >= 0xBU) {
            M2C_FIELD(arg0, s8 *, 0x2C1) = 7;
        }
        if (M2C_FIELD(arg0, u16 *, 0x2C2) & 2) {
            M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0x298);
            if ((u8) M2C_FIELD(arg0, s32 *, 4) == 1) {
                func_80162330_ovl_32(arg0, arg1, arg2);
                return;
            }
            goto block_41;
        }
        temp_a0 = M2C_FIELD(arg0, u16 *, 0x2C2);
        M2C_FIELD(arg0, u8 *, 0x2BE) = (u8) (M2C_FIELD(arg0, u8 *, 0x2BE) + M2C_FIELD((M2C_FIELD(arg0, u8 *, 5) + &D_80166F78_ovl_32), u8 *, -1));
        if (!(temp_a0 & 1)) {
            M2C_FIELD(arg0, u16 *, 0x2C2) = (u16) (temp_a0 | 1);
            M2C_FIELD(arg0, s8 *, 0x2BD) = 0xF;
        }
        if ((u8) M2C_FIELD(arg0, u8 *, 0x2BE) < 0xFU) {
            M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0x298);
            func_80162330_ovl_32(arg0, arg1, arg2);
            return;
        }
        M2C_FIELD(arg0, u8 *, 0x2BE) = 0U;
        M2C_FIELD(arg0, s8 *, 0x2BD) = 0;
        M2C_FIELD(arg0, u16 *, 0x2C2) = (u16) (M2C_FIELD(arg0, u16 *, 0x2C2) & 0xFFFE);
        goto block_40;
    }
block_40:
block_41:
    func_801645CC_ovl_32(arg0, arg1, arg2);
}
