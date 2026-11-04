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

M2C_UNK func_80033A0C_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_8004279C_ovl_01(s32, s16 *, s16 *);    /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK func_80164FF8_ovl_19;
extern M2C_UNK func_801652DC_ovl_19;

void func_80161D60_ovl_19(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s16 sp18;
    s16 sp1A;
    s16 sp1C;
    s32 *temp_v1_10;
    s32 *temp_v1_4;
    s32 *temp_v1_5;
    s32 *temp_v1_6;
    s32 *temp_v1_7;
    s32 *temp_v1_8;
    s32 *temp_v1_9;
    s32 *var_s0;
    s32 *var_s0_2;
    s32 temp_a0;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a0_2;
    void *temp_s0;
    void *temp_v1_2;
    void *temp_v1_3;

    M2C_FIELD(arg0, s32 *, 4) = 0x01000000;
    M2C_FIELD(arg0, s16 *, 0x26C) = 0;
    M2C_FIELD(arg0, s16 *, 0x268) = 0;
    M2C_FIELD(arg0, s16 *, 0x264) = 0;
    M2C_FIELD(arg0, s8 *, 0x26F) = 0;
    M2C_FIELD(arg0, s16 *, 0x1E0) = 0x96;
    M2C_FIELD(arg0, s16 *, 0x1F2) = (s16) ((func_80033634_ovl_01() & 1) + 1);
    M2C_FIELD(arg0, s16 *, 0x1E0) = 0x50;
    M2C_FIELD(arg0, s16 *, 0x134) = -0xC8;
    M2C_FIELD(arg0, s16 *, 0x136) = 0xC8;
    M2C_FIELD(arg0, s16 *, 0x13A) = 0xC8;
    M2C_FIELD(arg0, s16 *, 0x138) = 0xC8;
    M2C_FIELD(arg0, s16 *, 0x12C) = 0xC8;
    M2C_FIELD(arg0, s16 *, 0x12E) = 0xC8;
    M2C_FIELD(arg0, s16 *, 0x28A) = 0x12C;
    M2C_FIELD(arg0, s32 *, 0x284) = 1;
    M2C_FIELD(arg0, s8 *, 0x25C) = 0;
    M2C_FIELD(arg0, s8 *, 0x25D) = 0;
    M2C_FIELD(arg0, s16 *, 0x2C8) = 0;
    M2C_FIELD(arg0, s16 *, 0x130) = 0;
    M2C_FIELD(arg0, s16 *, 0x132) = 0;
    M2C_FIELD(arg0, s32 *, 0x1E8) = 0;
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x400000);
    temp_v1 = M2C_FIELD(arg0, s32 *, 0) | 2;
    M2C_FIELD(arg0, u16 *, 0x1AA) = (u16) (M2C_FIELD(arg0, u16 *, 0x1AA) | 0x2000);
    M2C_FIELD(arg0, s32 *, 0) = temp_v1;
    M2C_FIELD(arg0, s32 *, 0) = (s32) (temp_v1 | 0x04000000);
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
    func_80033A0C_ovl_01(arg0 + 0x208, 0, 0x012C0190, 0, M2C_FIELD(arg0, s32 **, 0x234) + 0x4C);
    if (!(M2C_FIELD(arg0, u16 *, 0x1AA) & 0xFFF)) {
        M2C_FIELD(arg0, s32 *, 0x284) = 0;
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) & 0xFBFFFFFF);
        temp_v1_2 = M2C_FIELD(arg0, void **, 0x208);
        M2C_FIELD(arg0, u16 *, 0x1AA) = (u16) (M2C_FIELD(arg0, u16 *, 0x1AA) | 0x4000);
        var_a0 = 0xA;
        M2C_FIELD(temp_v1_2, u8 *, 0xE) = (u8) (M2C_FIELD(temp_v1_2, u8 *, 0xE) | 8);
        var_s0 = M2C_FIELD(arg0, s32 **, 0x234);
        do {
            var_a0 -= 1;
            *var_s0 |= 0x4000;
            var_s0 += 0x178;
        } while (var_a0 != 0);
    }
    if ((M2C_FIELD(arg0, u16 *, 0x1AA) & 0xFFF) == 1) {
        M2C_FIELD(arg0, s8 *, 5) = 3;
        M2C_FIELD(arg0, s8 *, 6) = 0;
        M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x19D40), s32 *, 0x224) = (s32) M2C_FIELD(arg0, s32 *, 0x224);
        M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x19D40), s32 *, 0x228) = (s32) M2C_FIELD(arg0, s32 *, 0x228);
        temp_v1_3 = M2C_FIELD(arg0, void **, 0x208);
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) & 0xFBFFFFFF);
        M2C_FIELD(arg0, s32 *, 0x284) = 0;
        M2C_FIELD(arg0, u16 *, 0x1AA) = (u16) (M2C_FIELD(arg0, u16 *, 0x1AA) | 0x4000);
        var_a0_2 = 0xA;
        M2C_FIELD(temp_v1_3, u8 *, 0xE) = (u8) (M2C_FIELD(temp_v1_3, u8 *, 0xE) | 8);
        var_s0_2 = M2C_FIELD(arg0, s32 **, 0x234);
        do {
            var_a0_2 -= 1;
            *var_s0_2 |= 0x4000;
            var_s0_2 += 0x178;
        } while (var_a0_2 != 0);
    }
    if ((M2C_FIELD(arg0, u16 *, 0x1AA) & 0xFFF) == 2) {
        M2C_FIELD(arg0, s8 *, 5) = 6;
        temp_v1_4 = M2C_FIELD(arg0, s32 **, 0x234);
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) & 0xFBFFFFFF);
        M2C_FIELD(temp_v1_4, s32 *, 0x5E0) = (s32) (M2C_FIELD(temp_v1_4, s32 *, 0x5E0) | 0x4000);
        temp_v1_5 = M2C_FIELD(arg0, s32 **, 0x234);
        M2C_FIELD(temp_v1_5, s32 *, 0x758) = (s32) (M2C_FIELD(temp_v1_5, s32 *, 0x758) | 0x4000);
        temp_v1_6 = M2C_FIELD(arg0, s32 **, 0x234);
        M2C_FIELD(temp_v1_6, s32 *, 0x8D0) = (s32) (M2C_FIELD(temp_v1_6, s32 *, 0x8D0) | 0x4000);
        temp_v1_7 = M2C_FIELD(arg0, s32 **, 0x234);
        M2C_FIELD(temp_v1_7, s32 *, 0xA48) = (s32) (M2C_FIELD(temp_v1_7, s32 *, 0xA48) | 0x4000);
        temp_v1_8 = M2C_FIELD(arg0, s32 **, 0x234);
        M2C_FIELD(temp_v1_8, s32 *, 0xBC0) = (s32) (M2C_FIELD(temp_v1_8, s32 *, 0xBC0) | 0x4000);
        temp_v1_9 = M2C_FIELD(arg0, s32 **, 0x234);
        M2C_FIELD(temp_v1_9, s32 *, 0xD38) = (s32) (M2C_FIELD(temp_v1_9, s32 *, 0xD38) | 0x4000);
        temp_v1_10 = M2C_FIELD(arg0, s32 **, 0x234);
        M2C_FIELD(temp_v1_10, s32 *, 0x178) = (s32) (M2C_FIELD(temp_v1_10, s32 *, 0x178) | 0x4000);
        temp_a0 = M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x19D40), s32 *, 0x234);
        sp18 = 0;
        sp1A = 0x32;
        sp1C = 0;
        temp_s0 = temp_a0 + 0x5E0;
        func_8004279C_ovl_01(temp_a0 + 0x618, &sp18, &sp18);
        M2C_FIELD(arg0, s32 *, 0x28) = (s32) (sp18 + M2C_FIELD(temp_s0, s32 *, 0x4C));
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (sp1A + M2C_FIELD(temp_s0, s32 *, 0x50));
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x800);
        M2C_FIELD(arg0, s16 *, 0x212) = 0x800;
        M2C_FIELD(arg0, s8 *, 0x26F) = 0x80;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (sp1C + M2C_FIELD(temp_s0, s32 *, 0x54));
    }
    if ((M2C_FIELD(arg0, u16 *, 0x1AA) & 0xFFF) == 3) {
        M2C_FIELD(arg0, s8 *, 5) = 1;
        M2C_FIELD(arg0, s16 *, 0x1F2) = (s16) ((func_80033634_ovl_01() & 1) + 2);
    }
    M2C_FIELD((((M2C_FIELD(arg0, u8 *, 8) - 0x10) * 4) + &D_800C7650_ovl_01), M2C_UNK **, 0x18298) = &func_80164FF8_ovl_19;
    M2C_FIELD((((M2C_FIELD(arg0, u8 *, 8) - 0x10) * 4) + &D_800C7650_ovl_01), M2C_UNK **, 0x18398) = &func_801652DC_ovl_19;
}
