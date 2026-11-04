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
M2C_UNK func_800334F8_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_800377B0_ovl_01(s32, s16, void *, u16 *); /* extern */
M2C_UNK func_80052C00_ovl_01(M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_80052C9C_ovl_01(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80052D40_ovl_01(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650_ovl_01;

void func_80169F38_ovl_31(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u16 sp10;
    u16 sp12;
    u16 sp14;
    s32 temp_a0;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_s0_5;
    s32 var_a0;
    u16 *var_a3;
    u8 temp_v1;
    u8 temp_v1_3;
    u8 temp_v1_4;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_s1_3;
    void *temp_s2;
    void *temp_s2_2;
    void *temp_s2_3;
    void *temp_s2_4;
    void *temp_s2_5;
    void *temp_v1_2;
    void *var_a2;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x700;
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A5C) = (s32) (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A5C) | 0x40);
        M2C_FIELD(arg0, s8 *, 0x25C) = 1;
        M2C_FIELD(arg0, u8 *, 0x26F) = (u8) (M2C_FIELD(arg0, u8 *, 0x26F) | 0x80);
        if (M2C_FIELD(arg0, u8 *, 5) == 0) {
            temp_s2 = M2C_FIELD(arg0, void **, 0x234) + 0xBC0;
            sp10 = M2C_FIELD(temp_s2, u16 *, 0x1E);
            sp12 = M2C_FIELD(temp_s2, u16 *, 0x22);
            sp14 = M2C_FIELD(temp_s2, u16 *, 0x26);
            temp_s2_2 = M2C_FIELD(arg0, void **, 0x234);
            temp_s0 = temp_s2_2 + 0x38;
            func_800377B0_ovl_01(0x1F40, M2C_FIELD(arg0, s16 *, 0x66), temp_s0, &sp10);
            func_800377B0_ovl_01(0x21F40, M2C_FIELD(arg0, s16 *, 0x66), temp_s0, &sp10);
            func_800377B0_ovl_01(0x21F40, (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x66) + 0x800), temp_s0, &sp10);
            M2C_FIELD(temp_s2_2, s32 *, 0x130) = 0x40;
            M2C_FIELD(temp_s2_2, s32 *, 0x134) = 0x30;
            M2C_FIELD(temp_s2_2, s32 *, 0) = (s32) (M2C_FIELD(temp_s2_2, s32 *, 0) | 0x80);
            temp_v1_2 = M2C_FIELD(arg0, void **, 0x234);
            temp_s2_3 = temp_v1_2 + 0xBC0;
            M2C_FIELD(temp_v1_2, s32 *, 0xBC0) = (s32) (M2C_FIELD(temp_v1_2, s32 *, 0xBC0) | 0x4000);
            temp_a0 = M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x19D40), s32 *, 0x234) + ((0x12 - (M2C_FIELD(arg0, u8 *, 5) * 5)) * 0x178);
            M2C_FIELD(temp_s2_3, s32 *, 0x64) = (s32) (temp_a0 + 0x38);
            M2C_FIELD(temp_s2_3, s32 *, 0x12C) = temp_a0;
            M2C_FIELD(temp_s2_3, s32 *, 0x1C) = 0;
            M2C_FIELD(temp_s2_3, s32 *, 0x20) = 0x258;
            M2C_FIELD(temp_s2_3, s32 *, 0x24) = (s32) (0x12C - (M2C_FIELD(arg0, u8 *, 5) * 0x258));
        } else {
            temp_s1 = M2C_FIELD(arg0, void **, 0x234);
            sp10 = 0;
            sp12 = -0x12CU;
            sp14 = 0;
            temp_s2_4 = temp_s1 + 0x178;
            temp_s0_2 = temp_s1 + 0x1B0;
            func_800377B0_ovl_01(0x1F40, M2C_FIELD(arg0, s16 *, 0x66), temp_s0_2, &sp10);
            func_800377B0_ovl_01(0x21F40, M2C_FIELD(arg0, s16 *, 0x66), temp_s0_2, NULL);
            func_800377B0_ovl_01(0x21F40, (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x66) + 0x800), temp_s0_2, NULL);
            M2C_FIELD(temp_s1, s32 *, 0x178) = (s32) (M2C_FIELD(temp_s1, s32 *, 0x178) | 0x80);
            M2C_FIELD(temp_s2_4, s32 *, 0x130) = 0x40;
            M2C_FIELD(temp_s2_4, s32 *, 0x134) = 0x30;
            func_800377B0_ovl_01(0x1F40, M2C_FIELD(arg0, s16 *, 0x66), M2C_FIELD(arg0, void **, 0x234) + 0xBF8, NULL);
            func_800377B0_ovl_01(0x1F40, M2C_FIELD(arg0, s16 *, 0x66), M2C_FIELD(arg0, void **, 0x234) + 0xD70, NULL);
            func_800377B0_ovl_01(0x1F40, M2C_FIELD(arg0, s16 *, 0x66), M2C_FIELD(arg0, void **, 0x234) + 0x11D8, NULL);
        }
        func_80052C00_ovl_01(2, 0);
        func_80052C00_ovl_01(6, 0xA);
        func_80052C00_ovl_01(0xA, 0x17);
        func_80052C00_ovl_01(6, 0x28);
        func_80052C9C_ovl_01(0x1E, 0xFA, 0);
        func_80052D40_ovl_01(0x78, 0xFA, 0, 0x1E);
        func_80052C00_ovl_01(3, 0x48);
        func_80052C9C_ovl_01(8, 0xFA, 0x48);
        /* fallthrough */
    case 1:
        if (M2C_FIELD(arg0, u8 *, 5) == 0) {
            temp_v1_3 = M2C_FIELD(arg0, u8 *, 0x1E9);
            if (temp_v1_3 < 0x3CU) {
                if (temp_v1_3 & 1) {
                    temp_s1_2 = M2C_FIELD(arg0, void **, 0x234);
                    temp_s0_3 = func_80033634_ovl_01();
                    func_800377B0_ovl_01(((temp_s0_3 & 1) << 0x10) | (((func_80033634_ovl_01() & 0xFF) * 4) + 0x7D0), 0, temp_s1_2 + 0xBF8, NULL);
                    sp10 = 0;
                    sp12 = -0x258U;
                    sp14 = 0;
                    temp_s2_5 = M2C_FIELD(arg0, void **, 0x234);
                    temp_s0_4 = func_80033634_ovl_01();
                    var_a0 = ((temp_s0_4 & 1) << 0x10) | (((func_80033634_ovl_01() & 0xFF) * 8) + 0x7D0);
                    var_a3 = &sp10;
                    var_a2 = temp_s2_5 + 0x38;
                    goto block_14;
                }
            }
        } else {
            temp_v1_4 = M2C_FIELD(arg0, u8 *, 0x1E9);
            if (temp_v1_4 < 0x3CU) {
                if (temp_v1_4 & 1) {
                    temp_s1_3 = M2C_FIELD(arg0, void **, 0x234);
                    temp_s0_5 = func_80033634_ovl_01();
                    var_a0 = ((temp_s0_5 & 1) << 0x10) | (((func_80033634_ovl_01() & 0xFF) * 8) + 0xFA0);
                    var_a3 = NULL;
                    var_a2 = temp_s1_3 + 0x1B0;
block_14:
                    func_800377B0_ovl_01(var_a0, M2C_FIELD(arg0, s16 *, 0x66), var_a2, var_a3);
                }
            }
        }
        func_800334F8_ovl_01(arg0, arg1, arg2, 0);
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x200) != 0) {
            M2C_FIELD(arg0, u8 *, 6) = 2U;
        }
        func_80032B8C_ovl_01(arg0, 0);
        break;
    }
}
