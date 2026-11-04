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
M2C_UNK func_80040E88_ovl_01(u16 *, M2C_UNK *);     /* extern */
M2C_UNK func_8004279C_ovl_01(M2C_UNK *, u16 *, u16 *); /* extern */
M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */
M2C_UNK func_801642DC_ovl_28(void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_801666EC_ovl_28(void *);               /* extern */
M2C_UNK func_801667CC_ovl_28(void *);               /* extern */
M2C_UNK func_8016695C_ovl_28(void *);               /* extern */
M2C_UNK func_80166A94_ovl_28(void *);               /* extern */
M2C_UNK func_80166C24_ovl_28(void *);               /* extern */
M2C_UNK func_80167910_ovl_28(void *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E8FC8_ovl_01;

void func_80167600_ovl_28(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u16 sp10;
    u16 sp12;
    u16 sp14;
    M2C_UNK sp18;
    s32 temp_s4;
    void *temp_s0;

    if (M2C_FIELD(arg0, u16 *, 0x2B8) & 0x10) {
        if (M2C_FIELD(arg0, u8 *, 6) == 0) {
            temp_s0 = M2C_FIELD(arg0, s32 *, 0x234) + 0x178;
            temp_s4 = func_80032D44_ovl_01(M2C_FIELD(arg0, s16 *, 0x2A), M2C_FIELD(arg0, s16 *, 0x32), M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19AAA), M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19AB2));
            sp10 = 0;
            sp12 = (u16) temp_s4;
            sp14 = 0;
            func_80040E88_ovl_01(&sp10, &sp18);
            sp10 = 0x64;
            sp12 = 0x100 - ((func_80033634_ovl_01() & 0xFF) * 2);
            sp14 = 0x80 - (func_80033634_ovl_01() & 0xFF);
            if (!((M2C_FIELD(arg0, u8 *, 0x26E) % 3) & 0xFF)) {
                sp10 = 0x64;
                sp12 = 0x3BC - ((func_80033634_ovl_01() & 0xFF) * 2);
            }
            func_8004279C_ovl_01(&sp18, &sp10, &sp10);
            sp10 += M2C_FIELD(temp_s0, u16 *, 0x4E);
            sp12 += M2C_FIELD(temp_s0, u16 *, 0x52);
            sp14 += M2C_FIELD(temp_s0, u16 *, 0x56);
            if (M2C_FIELD(arg0, u8 *, 5) != 0x10) {
                func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 8) + 0x17D0) | 0x10000, (s16) temp_s4, &D_800E8FC8_ovl_01, &sp10);
                sp12 -= (func_80033634_ovl_01() & 0x3F & 0xFF) - 0x40;
                func_800377B0_ovl_01(((func_80033634_ovl_01() & 0xFF) * 8) + 0x17D0, (s16) temp_s4, &D_800E8FC8_ovl_01, &sp10);
                if (M2C_FIELD(arg0, u8 *, 5) != 1) {
                    func_80077D48_ovl_01(8, arg0);
                }
            }
            if ((u8) M2C_FIELD(arg0, u8 *, 0x26E) < 3U) {
                if (M2C_FIELD(arg0, u8 *, 5) == 9) {
                    func_8016695C_ovl_28(arg0);
                }
                if (M2C_FIELD(arg0, u8 *, 5) == 0x11) {
                    func_80166A94_ovl_28(arg0);
                }
                if (M2C_FIELD(arg0, u8 *, 5) == 0xA) {
                    func_801666EC_ovl_28(arg0);
                }
                if (M2C_FIELD(arg0, u8 *, 5) == 0xB) {
                    func_801667CC_ovl_28(arg0);
                }
            }
            if (M2C_FIELD(arg0, u8 *, 5) == 0xE) {
                func_80166C24_ovl_28(arg0);
            }
            if ((u32) (M2C_FIELD(arg0, u8 *, 5) - 5) < 2U) {
                M2C_FIELD(arg0, s8 *, 0x2C3) = 1;
            }
            if (M2C_FIELD(arg0, u8 *, 5) == 0x10) {
                func_801666EC_ovl_28(arg0);
            }
            M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0x298);
            if ((u16) M2C_FIELD(arg0, s32 *, 4) == 0x109) {
                func_801642DC_ovl_28(arg0, arg1, arg2);
                return;
            }
            goto block_25;
        }
        goto block_25;
    }
block_25:
    func_80167910_ovl_28(arg0, arg1, arg2);
}
