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
M2C_UNK func_80032DEC_ovl_01(void *, s32, s32, M2C_UNK); /* extern */
M2C_UNK func_8003334C_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_800377B0_ovl_01(s32, s16, void *, s16 *); /* extern */
M2C_UNK func_80052C00_ovl_01(M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_80052C9C_ovl_01(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_80059E30_ovl_01(s32, M2C_UNK);             /* extern */
s32 func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E10D0_ovl_01;
extern s32 D_800E10D4_ovl_01;

void func_80166808_ovl_31(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s16 sp10;
    s16 sp12;
    s16 sp14;
    s32 var_a0;
    u8 temp_v1;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_v1_2;
    void *temp_v1_3;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x1B000700;
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        func_80032DEC_ovl_01(arg0, M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19AA8), M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19AB0), 0x800);
        M2C_FIELD(&D_800C7650_ovl_01, void **, 0x19CD0) = arg0;
        D_8003322C(&D_800E10D0_ovl_01, arg1, arg2, 0);
        D_800E10D4_ovl_01 = 0x05000000;
        M2C_FIELD(arg0, u8 *, 0x207) = 0U;
        var_a0 = 0x46;
        if (M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19C72) >= 0xAB) {
            var_a0 = M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19C72) - 0x64;
        }
        if (func_80059E30_ovl_01(var_a0, 0) == 2) {
            D_800E10D4_ovl_01 = 0x06020000;
            M2C_FIELD(arg0, u8 *, 0x26F) = (u8) (M2C_FIELD(arg0, u8 *, 0x26F) | 0x80);
            M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) = (s32) (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) | 0x100);
            M2C_FIELD(arg0, u8 *, 0x207) = 1U;
        }
        M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19CA4) = (s32) M2C_FIELD(arg0, s32 *, 0x224);
        M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x19CEF) = (u8) (M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x19CEF) | 0x80);
        M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19CA8) = (s32) M2C_FIELD(arg0, s32 *, 0x228);
        M2C_FIELD(arg0, u8 *, 0x26F) = (u8) (M2C_FIELD(arg0, u8 *, 0x26F) | 0x80);
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x1000);
        M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A80) = (s32) (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A80) | 0x1000);
        M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19C76) = (s16) (M2C_FIELD(arg0, u16 *, 0x66) + 0x800);
        func_80052C9C_ovl_01(0x14, 0x78, 0);
        /* fallthrough */
    case 1:
        M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19C80) = (u16) M2C_FIELD(arg0, u16 *, 0x200);
        M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19C84) = (u16) M2C_FIELD(arg0, u16 *, 0x204);
        func_8003334C_ovl_01(arg0, arg1, arg2, 0);
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x200) != 0) {
            M2C_FIELD(arg0, s32 *, 4) = 0x01030000;
            M2C_FIELD(arg0, s8 *, 0x2BA) = 0x96;
            M2C_FIELD(arg0, s8 *, 0x2CE) = 0x96;
            M2C_FIELD(arg0, s8 *, 0x2D8) = 0x96;
            if (M2C_FIELD(arg0, u8 *, 0x207) & 1) {
                M2C_FIELD(arg0, s8 *, 0x2BA) = 0xFA;
                M2C_FIELD(arg0, s8 *, 0x2CE) = 0xFA;
            }
            M2C_FIELD(arg0, u8 *, 0x26F) = (u8) (M2C_FIELD(arg0, u8 *, 0x26F) & 0x7F);
            M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) & ~0x1000);
        }
        if (M2C_FIELD(arg0, u8 *, 0x1E9) == 8) {
            sp10 = 0x76C;
            sp12 = 0x100;
            sp14 = 0;
            temp_s0 = M2C_FIELD(arg0, void **, 0x234) + 0xEE8;
            func_800377B0_ovl_01(0x1BB8, (s16) M2C_FIELD(arg0, u16 *, 0x66), temp_s0, &sp10);
            sp10 = 0x7D0;
            sp12 = 0;
            func_800377B0_ovl_01(0x11FA0, (s16) M2C_FIELD(arg0, u16 *, 0x66), temp_s0, &sp10);
            func_80052C00_ovl_01(6, 0);
            func_80052C9C_ovl_01(8, 0xFA, 3);
            func_80052C00_ovl_01(3, 0xF);
            func_80052C00_ovl_01(2, 0x14);
            func_80052C9C_ovl_01(0x46, 0x64, 0xB);
            func_80052C00_ovl_01(3, 0x19);
            func_80052C9C_ovl_01(0xD, 0xFA, 0x19);
            func_80052C00_ovl_01(3, 0x28);
            func_80052C00_ovl_01(3, 0x2D);
            func_80052C00_ovl_01(3, 0x32);
            func_80052C9C_ovl_01(0xD, 0xFA, 0x32);
            func_80052C00_ovl_01(3, 0x41);
            func_80052C00_ovl_01(0xA, 0x46);
            func_80052C9C_ovl_01(8, 0xFA, 0x46);
        }
        if ((M2C_FIELD(arg0, u8 *, 0x207) & 1) && (M2C_FIELD(arg0, u8 *, 0x1E9) == 0x1E)) {
            temp_v1_2 = M2C_FIELD(arg0, void **, 0x234);
            M2C_FIELD(temp_v1_2, s32 *, 0xEB0) = (s32) (M2C_FIELD(temp_v1_2, s32 *, 0xEB0) | 0x80);
            temp_v1_3 = temp_v1_2 + 0xEB0;
            M2C_FIELD(temp_v1_3, s32 *, 0x130) = 0x30;
            M2C_FIELD(temp_v1_3, s32 *, 0x134) = 0x202020;
            sp10 = 0x86C - ((func_80033634_ovl_01() & 0xFF) * 2);
            sp12 = 0x100 - ((func_80033634_ovl_01() & 0xFF) * 2);
            sp14 = 0x100 - ((func_80033634_ovl_01() & 0xFF) * 2);
            temp_s0_2 = M2C_FIELD(arg0, void **, 0x234);
            func_800377B0_ovl_01(((func_80033634_ovl_01() & 0xFF) * 2) + 0x1FA0, (s16) M2C_FIELD(arg0, u16 *, 0x66), temp_s0_2 + 0xEE8, &sp10);
        }
        if ((u8) M2C_FIELD(arg0, u8 *, 0x1E9) >= 9U) {
            sp10 = 0x86C - ((func_80033634_ovl_01() & 0xFF) * 2);
            sp12 = 0x100 - ((func_80033634_ovl_01() & 0xFF) * 2);
            sp14 = 0x100 - ((func_80033634_ovl_01() & 0xFF) * 2);
            temp_s0_3 = M2C_FIELD(arg0, void **, 0x234) + 0xEE8;
            func_800377B0_ovl_01(((func_80033634_ovl_01() & 0xFF) * 2) + 0x830, (s16) M2C_FIELD(arg0, u16 *, 0x66), temp_s0_3, &sp10);
            sp10 = 0x8D0 - ((func_80033634_ovl_01() & 0xFF) * 2);
            func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 2) + 0x830) | 0x10000, (s16) M2C_FIELD(arg0, u16 *, 0x66), temp_s0_3, &sp10);
        }
        return;
    }
}
