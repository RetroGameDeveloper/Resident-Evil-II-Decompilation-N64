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

M2C_UNK D_8003322C(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_8003334C_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_800377B0_ovl_01(s32, s16, s32, s16 *); /* extern */
M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */
s32 func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E10D0_ovl_01;
extern s32 D_800E10D4_ovl_01;

void func_80163620_ovl_32(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s16 sp10;
    s16 sp12;
    s16 sp14;
    s32 temp_s0;
    s32 temp_s1;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x09000700;
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(&D_800C7650_ovl_01, void **, 0x19CD0) = arg0;
        D_8003322C(&D_800E10D0_ovl_01, arg1, arg2, 0);
        D_800E10D4_ovl_01 = 0x06000000;
        M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19CA4) = (s32) M2C_FIELD(arg0, s32 *, 0x224);
        M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x19CEF) = (u8) (M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x19CEF) | 0x80);
        M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19CA8) = (s32) M2C_FIELD(arg0, s32 *, 0x228);
        M2C_FIELD(arg0, u8 *, 0x26F) = (u8) (M2C_FIELD(arg0, u8 *, 0x26F) | 0x80);
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x1000);
        M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A80) = (s32) (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A80) | 0x1002);
        M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19C76) = (s16) (M2C_FIELD(arg0, u16 *, 0x66) + 0x800);
        func_80077D48_ovl_01(6, arg0);
        /* fallthrough */
    case 1:
        if (M2C_FIELD(arg0, u8 *, 0x1E9) == 0xA) {
            func_80077D48_ovl_01(7, arg0);
        }
        if ((u32) (M2C_FIELD(arg0, u8 *, 0x1E9) - 0x10) < 0xEU) {
            temp_s1 = M2C_FIELD(arg0, s32 *, 0x234);
            sp10 = 0x100 - ((func_80033634_ovl_01() & 0xFF) * 2);
            sp12 = 0x100 - ((func_80033634_ovl_01() & 0xFF) * 2);
            sp14 = 0x100 - ((func_80033634_ovl_01() & 0xFF) * 2);
            temp_s0 = func_80033634_ovl_01();
            func_800377B0_ovl_01(((temp_s0 & 1) << 0x10) | (((func_80033634_ovl_01() & 0xFF) * 8) + 0x17D0), (s16) M2C_FIELD(arg0, u16 *, 0x66), temp_s1 + 0x618, &sp10);
        }
        func_8003334C_ovl_01(arg0, arg1, arg2, 0);
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x200) != 0) {
            M2C_FIELD(arg0, u8 *, 6) = 2U;
            return;
        }
        return;
    case 2:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x02000700;
        M2C_FIELD(arg0, u8 *, 6) = 3U;
        func_80077D48_ovl_01(0xA, arg0);
        M2C_FIELD(arg0, s16 *, 0x1F6) = 0x96;
        /* fallthrough */
    case 3:
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x200);
        if (M2C_FIELD(arg0, s16 *, 0x1F6) != 0) {
            M2C_FIELD(arg0, s16 *, 0x1F6) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x1F6) - 1);
        }
        if ((M2C_FIELD(arg0, s16 *, 0x1F6) == 0) && (M2C_FIELD(M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x234) + 0x2F0), void **, 0x120), s16 *, 0xC) < 0x1770)) {
            M2C_FIELD(arg0, s8 *, 0x2B4) = 0;
            M2C_FIELD(arg0, s8 *, 0x2B5) = 0;
        }
        break;
    }
}
