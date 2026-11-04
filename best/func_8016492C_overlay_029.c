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

M2C_UNK func_80032B8C_ovl_01(void *, M2C_UNK);      /* extern */
M2C_UNK func_800334F8_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_80033634_ovl_01();                         /* extern */
M2C_UNK func_800377B0_ovl_01(M2C_UNK, s16, void *, s16 *); /* extern */
M2C_UNK func_800662B8_ovl_01(void *, void *);       /* extern */
M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */
s32 func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650_ovl_01;

void func_8016492C_overlay_029(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s16 sp10;
    s16 sp12;
    s16 sp14;
    u16 temp_v0;
    u16 temp_v1_3;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 temp_v1_8;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_s2;
    void *temp_s3;
    void *temp_s3_2;
    void *temp_s3_3;
    void *temp_s3_4;
    void *temp_s5;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_6;
    void *temp_v1_7;
    void *temp_v1_9;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    M2C_FIELD(arg0, s8 *, 0x2B5) = 0;
    M2C_FIELD(arg0, u16 *, 0x2B8) = (u16) (M2C_FIELD(arg0, u16 *, 0x2B8) | 0x80);
    if (temp_v1 != 0) {
        if (temp_v1 != 1) {
            M2C_FIELD(arg0, u16 *, 0x1F2) = 0x2328U;
            return;
        }
        goto block_4;
    }
    M2C_FIELD(arg0, s32 *, 0x1E8) = 0x0E000F00;
    M2C_FIELD(arg0, u8 *, 6) = 1U;
    sp10 = 0x190;
    sp12 = 0x64;
    sp14 = 0;
    func_800377B0_ovl_01(0x13D0, M2C_FIELD(arg0, s16 *, 0x66), M2C_FIELD(arg0, void **, 0x234) + 0x4A0, &sp10);
    M2C_FIELD(arg0, u8 *, 0x25C) = (u8) (M2C_FIELD(arg0, u8 *, 0x25C) | 2);
    M2C_FIELD(arg0, u16 *, 0x1F6) = (u16) M2C_FIELD(arg0, u16 *, 0x1F2);
    func_80077D48_ovl_01(0xC, arg0);
    M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A5C) = (s32) (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A5C) & ~8);
block_4:
    temp_v1_2 = M2C_FIELD(arg0, u8 *, 0x1E9);
    if ((temp_v1_2 == 0x1E) || (temp_v1_2 == 0x23) || (temp_v1_2 == 0x32)) {
        sp10 = 0x12C;
        sp12 = 0;
        sp14 = 0;
        func_800377B0_ovl_01(0x13D0, M2C_FIELD(arg0, s16 *, 0x66), M2C_FIELD(arg0, void **, 0x234) + 0x4A0, &sp10);
    }
    if ((u32) (M2C_FIELD(arg0, u8 *, 0x1E9) - 6) < 0x13U) {
        temp_s5 = M2C_FIELD(arg0, void **, 0x234);
        sp10 = 0x190;
        sp12 = -0x2C - ((func_80033634_ovl_01() & 0xFF) * 2);
        sp14 = 0x80 - (func_80033634_ovl_01() & 0xFF);
        temp_s3 = temp_s5 + 0x2F0;
        temp_s2 = temp_s5 + 0x328;
        func_800377B0_ovl_01(0x17B8, (func_80033634_ovl_01() & 0xFF) * 0x10, temp_s2, &sp10);
        sp12 = -0x2C - ((func_80033634_ovl_01() & 0xFF) * 2);
        sp14 = 0x80 - (func_80033634_ovl_01() & 0xFF);
        func_800377B0_ovl_01(0x117B8, (func_80033634_ovl_01() & 0xFF) * 0x10, temp_s2, &sp10);
        if (M2C_FIELD(arg0, u8 *, 0x1E9) == 0xF) {
            M2C_FIELD(temp_s5, s32 *, 0x2F0) = (s32) (M2C_FIELD(temp_s5, s32 *, 0x2F0) | 0x80);
            M2C_FIELD(temp_s3, s32 *, 0x130) = 0x101030;
            M2C_FIELD(temp_s3, s32 *, 0x134) = 0x101020;
        }
    }
    temp_v1_3 = M2C_FIELD(arg0, u16 *, 0x136);
    if (temp_v1_3 < 0x44CU) {
        M2C_FIELD(arg0, u16 *, 0x136) = (u16) (temp_v1_3 + 5);
        M2C_FIELD(arg0, u16 *, 0x138) = (u16) (M2C_FIELD(arg0, u16 *, 0x138) + 5);
        M2C_FIELD(arg0, u16 *, 0x12E) = (u16) (M2C_FIELD(arg0, u16 *, 0x12E) + 5);
        M2C_FIELD(arg0, u16 *, 0x12C) = (u16) (M2C_FIELD(arg0, u16 *, 0x12C) + 5);
    }
    temp_s3_2 = M2C_FIELD(arg0, void **, 0x234) + 0x2F0;
    temp_a0 = M2C_FIELD(temp_s3_2, void **, 0x120);
    M2C_FIELD(temp_a0, u16 *, 0x10) = (u16) (M2C_FIELD(temp_a0, u16 *, 0x10) - ((M2C_FIELD(arg0, u8 *, 0x1E9) & 1) << 7));
    if ((u32) (M2C_FIELD(arg0, u8 *, 0x1E9) - 0x3D) < 0x1FU) {
        temp_v1_4 = M2C_FIELD(temp_s3_2, void **, 0x120);
        M2C_FIELD(temp_v1_4, u16 *, 0x10) = (u16) (M2C_FIELD(temp_v1_4, u16 *, 0x10) + 0x40);
        temp_v1_5 = M2C_FIELD(temp_s3_2, void **, 0x120);
        M2C_FIELD(temp_v1_5, u16 *, 0xC) = (u16) (M2C_FIELD(temp_v1_5, u16 *, 0xC) + 0x80);
    }
    func_800662B8_ovl_01(arg0, temp_s3_2);
    temp_a0_2 = M2C_FIELD(temp_s3_2, void **, 0x120);
    M2C_FIELD(temp_a0_2, u16 *, 0x10) = (u16) (M2C_FIELD(temp_a0_2, u16 *, 0x10) + ((M2C_FIELD(arg0, u8 *, 0x1E9) & 1) << 7));
    if ((u8) M2C_FIELD(arg0, u8 *, 0x1E9) >= 0x15U) {
        temp_s3_3 = M2C_FIELD(arg0, void **, 0x234) + 0x178;
        temp_v1_6 = M2C_FIELD(temp_s3_3, void **, 0x120);
        M2C_FIELD(temp_v1_6, u16 *, 0xC) = (u16) (M2C_FIELD(temp_v1_6, u16 *, 0xC) + 0x40);
        temp_v1_7 = M2C_FIELD(temp_s3_3, void **, 0x120);
        if ((s16) M2C_FIELD(temp_v1_7, u16 *, 0xC) >= 0x1001) {
            M2C_FIELD(temp_v1_7, u16 *, 0xC) = 0x1000U;
            M2C_FIELD(arg0, u16 *, 0x2B8) = (u16) (M2C_FIELD(arg0, u16 *, 0x2B8) | 0x20);
        }
        func_800662B8_ovl_01(arg0, temp_s3_3);
    }
    temp_v1_8 = M2C_FIELD(arg0, u8 *, 0x1E9);
    if (((u32) (temp_v1_8 - 0x15) < 0x29U) && !(temp_v1_8 & 3)) {
        temp_s1 = M2C_FIELD(arg0, void **, 0x234);
        sp10 = 0x16C - (func_80033634_ovl_01() & 0x7F);
        sp12 = 0xC8;
        sp14 = 0x16C - (func_80033634_ovl_01() & 0x7F);
        temp_s1_2 = temp_s1 + 0x328;
        func_800377B0_ovl_01(0x13D0, M2C_FIELD(arg0, s16 *, 0x66), temp_s1_2, &sp10);
        sp14 = 0xFF14 - (func_80033634_ovl_01() & 0x7F);
        func_800377B0_ovl_01(0x13D0, M2C_FIELD(arg0, s16 *, 0x66), temp_s1_2, &sp10);
    }
    if (M2C_FIELD(arg0, u8 *, 0x1E9) == 0x28) {
        temp_v1_9 = M2C_FIELD(arg0, void **, 0x234);
        temp_s3_4 = temp_v1_9 + 0x178;
        M2C_FIELD(temp_v1_9, s32 *, 0x178) = (s32) (M2C_FIELD(temp_v1_9, s32 *, 0x178) | 0x80);
        M2C_FIELD(temp_s3_4, s32 *, 0x130) = 0x101040;
        M2C_FIELD(temp_s3_4, s32 *, 0x134) = 0x101020;
    }
    func_800334F8_ovl_01(arg0, arg1, arg2, 0);
    if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x100) != 0) {
        M2C_FIELD(arg0, s32 *, 4) = 0x01010000;
        M2C_FIELD(arg0, s8 *, 0x2B6) = 0xA;
        M2C_FIELD(arg0, u8 *, 0x25C) = (u8) (M2C_FIELD(arg0, u8 *, 0x25C) & 0xFD);
        temp_v0 = M2C_FIELD(arg0, u16 *, 0x1F6);
        M2C_FIELD(arg0, u16 *, 0x2B8) = (u16) ((M2C_FIELD(arg0, u16 *, 0x2B8) & 0xFF7F) | 0x100);
        M2C_FIELD(arg0, u16 *, 0x1F2) = temp_v0;
        if ((s16) temp_v0 >= 0x65) {
            M2C_FIELD(arg0, u16 *, 0x1F2) = 0x64U;
        }
    } else {
        func_80032B8C_ovl_01(arg0, 0);
        M2C_FIELD(arg0, u16 *, 0x1F2) = 0x2328U;
    }
}
