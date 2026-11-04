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

M2C_UNK D_80066584(void *, void *);                 /* extern */
M2C_UNK func_80033A0C_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_80040E88_ovl_01(void *, void *, void *); /* extern */
M2C_UNK func_800662B8_ovl_01(void *, void *);       /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern s8 D_80168EC4_ovl_28;
extern s8 D_80168EC5_ovl_28;
extern s16 D_80168EC6_ovl_28;
extern s16 D_80168EC8_ovl_28;
extern s16 D_80168ECA_ovl_28;
extern s16 D_80168ECC_ovl_28;
extern s8 D_80168ECE_ovl_28;
extern s8 D_80168ECF_ovl_28;
extern M2C_UNK func_80167DE8_ovl_28;
extern M2C_UNK func_801680EC_ovl_28;

void func_80161F08_ovl_28(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s16 temp_a0_5;
    s16 temp_a0_6;
    s32 *temp_a2_3;
    s32 *temp_v0;
    s32 *temp_v1;
    s32 *temp_v1_10;
    s32 *temp_v1_3;
    s32 *temp_v1_4;
    s32 *temp_v1_5;
    s32 *temp_v1_6;
    s32 *temp_v1_7;
    s32 *temp_v1_8;
    s32 *temp_v1_9;
    s32 *var_s1;
    s32 *var_s1_2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_7;
    s32 temp_a0_8;
    s32 temp_v0_2;
    s32 var_a0;
    s32 var_a0_2;
    s8 temp_v1_2;
    void *temp_a2;
    void *temp_a2_2;
    void *temp_s1;
    void *temp_s1_10;
    void *temp_s1_11;
    void *temp_s1_2;
    void *temp_s1_3;
    void *temp_s1_4;
    void *temp_s1_5;
    void *temp_s1_6;
    void *temp_s1_7;
    void *temp_s1_8;
    void *temp_s1_9;
    void *var_v1;

    M2C_FIELD(arg0, s32 *, 4) = 0x01000000;
    M2C_FIELD(arg0, s16 *, 0x26C) = 0;
    M2C_FIELD(arg0, s16 *, 0x268) = 0;
    M2C_FIELD(arg0, s16 *, 0x264) = 0;
    M2C_FIELD(arg0, s8 *, 0x26F) = 0;
    M2C_FIELD(arg0, s16 *, 0x1F2) = 0x1F4;
    if (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) & 0x20) {
        M2C_FIELD(arg0, s16 *, 0x1F2) = 0x190;
    }
    M2C_FIELD(arg0, s8 *, 0x1ED) = -0x7E;
    M2C_FIELD(arg0, s8 *, 0x1EE) = -0x7E;
    M2C_FIELD(arg0, s8 *, 0x1EF) = -0x7E;
    M2C_FIELD(arg0, s8 *, 0x25D) = 3;
    M2C_FIELD(arg0, s8 *, 0x25C) = 0;
    temp_s1 = M2C_FIELD(arg0, s32 **, 0x234) + 0x468;
    M2C_FIELD(temp_s1, s16 *, 0x134) = 0x20;
    M2C_FIELD(temp_s1, s16 *, 0x136) = 0x20;
    M2C_FIELD(temp_s1, s16 *, 0x138) = 0x264;
    M2C_FIELD(temp_s1, s16 *, 0x13A) = 0x138;
    M2C_FIELD(temp_s1, s16 *, 0x130) = 0;
    M2C_FIELD(temp_s1, s16 *, 0x132) = 0;
    M2C_FIELD(arg0, s8 *, 0x2B4) = 0;
    M2C_FIELD(arg0, s8 *, 0x2B5) = 0;
    M2C_FIELD(arg0, s8 *, 0x2B6) = 0;
    M2C_FIELD(arg0, s8 *, 0x2BA) = 0;
    M2C_FIELD(arg0, s8 *, 0x2BC) = 0;
    M2C_FIELD(arg0, s8 *, 0x2BD) = 0;
    M2C_FIELD(arg0, s8 *, 0x2C3) = 0;
    M2C_FIELD(arg0, s8 *, 0x2C8) = 0;
    D_80168EC4_ovl_28 = 0;
    D_80168EC5_ovl_28 = 0;
    D_80168EC6_ovl_28 = 0;
    D_80168EC8_ovl_28 = 0;
    D_80168ECA_ovl_28 = 0;
    D_80168ECC_ovl_28 = 0;
    D_80168ECE_ovl_28 = 0;
    D_80168ECF_ovl_28 = 0;
    M2C_FIELD(arg0, s16 *, 0x134) = -0x5DC;
    M2C_FIELD(arg0, s16 *, 0x2B8) = 0;
    M2C_FIELD(arg0, s32 *, 0x284) = 1;
    M2C_FIELD(arg0, s16 *, 0x130) = 0;
    M2C_FIELD(arg0, s16 *, 0x132) = 0;
    M2C_FIELD(arg0, s16 *, 0x136) = 0x320;
    M2C_FIELD(arg0, s16 *, 0x13A) = 0x5DC;
    M2C_FIELD(arg0, s16 *, 0x138) = 0x320;
    M2C_FIELD(arg0, s16 *, 0x12C) = 0x320;
    M2C_FIELD(arg0, s16 *, 0x12E) = 0x320;
    M2C_FIELD(arg0, s16 *, 0x28A) = 0x1F4;
    M2C_FIELD(arg0, s32 *, 0x1E8) = 0;
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x0C000000);
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
    func_80033A0C_ovl_01(arg0 + 0x208, 0, 0x02BC0320, 0, M2C_FIELD(arg0, s32 **, 0x234) + 0x4C);
    M2C_FIELD((((M2C_FIELD(arg0, u8 *, 8) - 0x10) * 4) + &D_800C7650_ovl_01), M2C_UNK **, 0x18298) = &func_80167DE8_ovl_28;
    M2C_FIELD((((M2C_FIELD(arg0, u8 *, 8) - 0x10) * 4) + &D_800C7650_ovl_01), M2C_UNK **, 0x18398) = &func_801680EC_ovl_28;
    temp_v1 = M2C_FIELD(arg0, s32 **, 0x234);
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 4);
    M2C_FIELD(temp_v1, s32 *, 0x1780) = (s32) (M2C_FIELD(temp_v1, s32 *, 0x1780) | 0x4000);
    temp_v0 = M2C_FIELD(arg0, s32 **, 0x234);
    temp_s1_2 = temp_v0 + 0x18F8;
    temp_a2 = temp_v0 + 0x8D0;
    M2C_FIELD(temp_v0, s32 *, 0x18F8) = 0;
    M2C_FIELD(temp_s1_2, void **, 0x64) = (void *) (temp_v0 + 0x908);
    M2C_FIELD(temp_s1_2, s32 *, 0x20) = 0x86;
    M2C_FIELD(temp_s1_2, s32 *, 0x24) = 0x1E;
    M2C_FIELD(temp_s1_2, void **, 0x12C) = temp_a2;
    M2C_FIELD(temp_s1_2, s32 *, 0x1C) = 0xC;
    M2C_FIELD(temp_s1_2, s16 *, 0x58) = -0xC8;
    M2C_FIELD(temp_s1_2, s16 *, 0x5A) = 0;
    M2C_FIELD(temp_s1_2, s16 *, 0x5C) = 0;
    func_80040E88_ovl_01(temp_v0 + 0x1950, temp_v0 + 0x1900, temp_a2);
    M2C_FIELD(M2C_FIELD(arg0, s32 **, 0x234), s32 *, 0x1A70) = 0;
    temp_v1_2 = M2C_FIELD(arg0, u16 *, 0x1AA) & 0xFFF;
    if (temp_v1_2 == 1) {
        M2C_FIELD(arg0, s8 *, 5) = temp_v1_2;
        return;
    }
    if (temp_v1_2 == 3) {
        M2C_FIELD(arg0, s8 *, 5) = 0xC;
        goto block_18;
    }
    M2C_FIELD(arg0, s8 *, 5) = 0xA;
    M2C_FIELD(arg0, s16 *, 0x27A) = 0xEB8;
    temp_s1_3 = M2C_FIELD(arg0, s32 **, 0x234) + 0x178;
    M2C_FIELD(arg0, u16 *, 0x1AA) = (u16) (M2C_FIELD(arg0, u16 *, 0x1AA) | 0x4000);
    M2C_FIELD(M2C_FIELD(temp_s1_3, void **, 0x120), s16 *, 0xC) = 0x1000;
    func_800662B8_ovl_01(arg0, temp_s1_3);
    temp_s1_4 = M2C_FIELD(arg0, s32 **, 0x234) + 0x2F0;
    M2C_FIELD(M2C_FIELD(temp_s1_4, void **, 0x120), s16 *, 0xC) = 0x1000;
    func_800662B8_ovl_01(arg0, temp_s1_4);
    temp_s1_5 = M2C_FIELD(arg0, s32 **, 0x234) + 0x5E0;
    M2C_FIELD(M2C_FIELD(temp_s1_5, void **, 0x120), s16 *, 0xC) = 0x1000;
    M2C_FIELD(M2C_FIELD(temp_s1_5, void **, 0x120), s16 *, 0x10) = 0;
    func_800662B8_ovl_01(arg0, temp_s1_5);
    D_80066584(arg0, temp_s1_5);
    temp_s1_6 = M2C_FIELD(arg0, s32 **, 0x234) + 0x758;
    M2C_FIELD(M2C_FIELD(temp_s1_6, void **, 0x120), s16 *, 0xC) = 0x1000;
    func_800662B8_ovl_01(arg0, temp_s1_6);
    var_a0 = 0x10;
    var_s1 = M2C_FIELD(arg0, s32 **, 0x234);
    var_v1 = var_s1 + 0x128;
    do {
        var_a0 -= 1;
        *var_s1 |= 0x400;
        M2C_FIELD(var_v1, s16 *, -4) = 0xC28;
        M2C_FIELD(var_v1, s16 *, -2) = 0xEB8;
        M2C_FIELD(var_v1, s16 *, 0) = 0xC28;
        var_v1 += 0x178;
        var_s1 += 0x178;
    } while (var_a0 != 0);
    temp_v1_3 = M2C_FIELD(arg0, s32 **, 0x234);
    M2C_FIELD(temp_v1_3, s32 *, 0x178) = (s32) (M2C_FIELD(temp_v1_3, s32 *, 0x178) & ~0x400);
    temp_v1_4 = M2C_FIELD(arg0, s32 **, 0x234);
    M2C_FIELD(temp_v1_4, s32 *, 0x2F0) = (s32) (M2C_FIELD(temp_v1_4, s32 *, 0x2F0) & ~0x400);
    temp_v1_5 = M2C_FIELD(arg0, s32 **, 0x234);
    M2C_FIELD(temp_v1_5, s32 *, 0x5E0) = (s32) (M2C_FIELD(temp_v1_5, s32 *, 0x5E0) & ~0x400);
    temp_v1_6 = M2C_FIELD(arg0, s32 **, 0x234);
    M2C_FIELD(temp_v1_6, s32 *, 0x758) = (s32) (M2C_FIELD(temp_v1_6, s32 *, 0x758) & ~0x400);
    temp_v1_7 = M2C_FIELD(arg0, s32 **, 0x234);
    M2C_FIELD(temp_v1_7, s32 *, 0x8D0) = (s32) (M2C_FIELD(temp_v1_7, s32 *, 0x8D0) & ~0x400);
    temp_v1_8 = M2C_FIELD(arg0, s32 **, 0x234);
    temp_s1_7 = temp_v1_8 + 0x1780;
    M2C_FIELD(temp_v1_8, s32 *, 0x1780) = (s32) (M2C_FIELD(temp_v1_8, s32 *, 0x1780) | 0x4000);
    temp_a0 = M2C_FIELD(temp_s1_7, s32 *, 0xA8);
    temp_a2_2 = M2C_FIELD(arg0, s32 **, 0x234) + 0x8D0;
    M2C_FIELD(temp_s1_7, s32 *, 0xA8) = (s32) M2C_FIELD(temp_a2_2, s32 *, 0xA8);
    M2C_FIELD(temp_a2_2, s32 *, 0xA8) = temp_a0;
    temp_a0_2 = M2C_FIELD(temp_s1_7, s32 *, 0xAC);
    M2C_FIELD(temp_s1_7, s32 *, 0xAC) = (s32) M2C_FIELD(temp_a2_2, s32 *, 0xAC);
    M2C_FIELD(temp_a2_2, s32 *, 0xAC) = temp_a0_2;
    temp_a0_3 = M2C_FIELD(temp_s1_7, s32 *, 0xB0);
    M2C_FIELD(temp_s1_7, s32 *, 0xB0) = (s32) M2C_FIELD(temp_a2_2, s32 *, 0xB0);
    M2C_FIELD(temp_a2_2, s32 *, 0xB0) = temp_a0_3;
    temp_a0_4 = M2C_FIELD(temp_s1_7, s32 *, 0xB4);
    M2C_FIELD(temp_s1_7, s32 *, 0xB4) = (s32) M2C_FIELD(temp_a2_2, s32 *, 0xB4);
    M2C_FIELD(temp_a2_2, s32 *, 0xB4) = temp_a0_4;
    temp_a0_5 = M2C_FIELD(temp_s1_7, s16 *, 0xC4);
    M2C_FIELD(temp_s1_7, s16 *, 0xC4) = (s16) M2C_FIELD(temp_a2_2, u16 *, 0xC4);
    M2C_FIELD(temp_a2_2, u16 *, 0xC4) = (u16) temp_a0_5;
    temp_a0_6 = M2C_FIELD(temp_s1_7, s16 *, 0xC6);
    M2C_FIELD(temp_s1_7, s16 *, 0xC6) = (s16) M2C_FIELD(temp_a2_2, u16 *, 0xC6);
    M2C_FIELD(temp_a2_2, u16 *, 0xC6) = (u16) temp_a0_6;
    temp_a0_7 = M2C_FIELD(temp_s1_7, s32 *, 0xCC);
    M2C_FIELD(temp_s1_7, s32 *, 0xCC) = (s32) M2C_FIELD(temp_a2_2, s32 *, 0xCC);
    M2C_FIELD(temp_a2_2, s32 *, 0xCC) = temp_a0_7;
    temp_a0_8 = M2C_FIELD(temp_s1_7, s32 *, 0xC8);
    M2C_FIELD(temp_s1_7, s32 *, 0xC8) = (s32) M2C_FIELD(temp_a2_2, s32 *, 0xC8);
    M2C_FIELD(temp_a2_2, s32 *, 0xC8) = temp_a0_8;
    if (M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x19D40), s32 *, 0) != 0) {
        temp_v0_2 = M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x19D40), s32 *, 0x234);
        temp_s1_8 = M2C_FIELD(arg0, s32 **, 0x234) + 0x1A70;
        M2C_FIELD(temp_s1_8, s32 *, 0x64) = (s32) (temp_v0_2 + 0xBF8);
        M2C_FIELD(temp_s1_8, s32 *, 0x1C) = 0xEB;
        M2C_FIELD(temp_s1_8, s32 *, 0x12C) = (s32) (temp_v0_2 + 0xBC0);
        M2C_FIELD(temp_s1_8, s32 *, 0x20) = -0xB7;
        M2C_FIELD(temp_s1_8, s32 *, 0x24) = 0;
        if (M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x19D40), u8 *, 8) == 0x44) {
            M2C_FIELD(temp_s1_8, s32 *, 0x1C) = 0xF6;
            M2C_FIELD(temp_s1_8, s32 *, 0x20) = -0xFB;
            M2C_FIELD(temp_s1_8, s32 *, 0x24) = 0;
        }
    }
    if ((M2C_FIELD(arg0, u16 *, 0x1AA) & 0xFFF) == 2) {
        temp_v1_9 = M2C_FIELD(arg0, s32 **, 0x234);
        M2C_FIELD(temp_v1_9, s32 *, 0x18F8) = 1;
        M2C_FIELD(arg0, s8 *, 5) = 0xB;
        temp_s1_9 = temp_v1_9 + 0x18F8;
        M2C_FIELD(temp_v1_9, s32 *, 0x18F8) = (s32) (M2C_FIELD(temp_v1_9, s32 *, 0x18F8) | 0x400);
        M2C_FIELD(temp_s1_9, s16 *, 0x124) = 0x1000;
        M2C_FIELD(temp_s1_9, s16 *, 0x126) = 0x1000;
        M2C_FIELD(temp_s1_9, s16 *, 0x128) = 0;
        temp_a2_3 = M2C_FIELD(arg0, s32 **, 0x234);
        temp_s1_10 = temp_a2_3 + 0x1A70;
        M2C_FIELD(temp_a2_3, s32 *, 0x1A70) = 0x4401;
        M2C_FIELD(temp_s1_10, s16 *, 0x124) = 0x1000;
        M2C_FIELD(temp_s1_10, s16 *, 0x126) = 0x1000;
        M2C_FIELD(temp_s1_10, s16 *, 0x128) = 0x1000;
        M2C_FIELD(arg0, s8 *, 0x207) = 0;
        M2C_FIELD(M2C_FIELD(temp_s1_10, void **, 0x120), s16 *, 0xC) = 0;
        M2C_FIELD(M2C_FIELD(temp_s1_10, void **, 0x120), s16 *, 0x10) = 0x1000;
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x14000000;
        M2C_FIELD(arg0, u16 *, 0x1AA) = (u16) (M2C_FIELD(arg0, u16 *, 0x1AA) | 0x4000);
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
    }
    if ((M2C_FIELD(arg0, u16 *, 0x1AA) & 0xFFF) == 5) {
        temp_v1_10 = M2C_FIELD(arg0, s32 **, 0x234);
        temp_s1_11 = temp_v1_10 + 0x1A70;
        M2C_FIELD(temp_s1_11, void **, 0x64) = (void *) (temp_v1_10 + 0x38);
        M2C_FIELD(temp_s1_11, s32 **, 0x12C) = (s32 *) M2C_FIELD(arg0, s32 **, 0x234);
        M2C_FIELD(temp_v1_10, s32 *, 0x1A70) = 1;
        M2C_FIELD(M2C_FIELD(temp_s1_11, void **, 0x120), s16 *, 0xC) = 0x1000;
        M2C_FIELD(M2C_FIELD(temp_s1_11, void **, 0x120), s16 *, 0x10) = 0;
        func_800662B8_ovl_01(arg0, temp_s1_11);
        M2C_FIELD(temp_s1_11, s32 *, 0x1C) = 0;
        M2C_FIELD(temp_s1_11, s32 *, 0x20) = 0;
        M2C_FIELD(temp_s1_11, s32 *, 0x24) = 0;
        var_a0_2 = 0x10;
        M2C_FIELD(arg0, s8 *, 5) = 0;
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0xA);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x208), s8 *, 0xE) = 0;
        var_s1_2 = M2C_FIELD(arg0, s32 **, 0x234);
        do {
            var_a0_2 -= 1;
            *var_s1_2 |= 0x4000;
            var_s1_2 += 0x178;
        } while (var_a0_2 != 0);
    }
    if ((M2C_FIELD(arg0, u16 *, 0x1AA) & 0xFFF) == 4) {
        M2C_FIELD(arg0, s8 *, 5) = 0xD;
block_18:
        M2C_FIELD(arg0, u16 *, 0x1AA) = (u16) (M2C_FIELD(arg0, u16 *, 0x1AA) & 0xF000);
    }
}
