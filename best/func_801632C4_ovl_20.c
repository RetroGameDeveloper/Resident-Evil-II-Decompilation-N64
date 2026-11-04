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

M2C_UNK func_800377B0_ovl_01(M2C_UNK, s16, s32, s16 *); /* extern */
s32 func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern s8 D_80167F4A_ovl_20;
extern s8 D_80167F4B_ovl_20;

void func_801632C4_ovl_20(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s16 sp10;
    s16 sp12;
    s16 sp14;
    s16 temp_v0_7;
    s32 temp_s1;
    s32 temp_v0_2;
    s32 temp_v0_4;
    s32 temp_v0_6;
    u16 temp_a0_4;
    u8 temp_v1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_v0;
    void *temp_v0_3;
    void *temp_v0_5;

    if (M2C_FIELD(arg0, s8 *, 0x2BE) < 3) {
        M2C_FIELD(arg0, s8 *, 0x2BE) = (s8) ((u8) M2C_FIELD(arg0, s8 *, 0x2BE) | 0x82);
    }
    if (M2C_FIELD(arg0, s8 *, 0x2BC) < 2) {
        M2C_FIELD(arg0, s8 *, 0x2BC) = 1;
    }
    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x05003F00;
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        if (!(M2C_FIELD(arg0, u16 *, 0x2BA) & 0x400)) {
            *M2C_FIELD(&D_800C7650_ovl_01, s32 **, 0x19D44) = 0;
            M2C_FIELD(arg0, u16 *, 0x2BA) = (u16) (M2C_FIELD(arg0, u16 *, 0x2BA) | 0x400);
            M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x19A76) = (u8) (M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x19A76) - 1);
        }
        temp_v0 = func_80032020_ovl_01(0x27);
        temp_a0 = M2C_FIELD(arg0, s32 *, 0x234) + 0x5E0;
        M2C_FIELD(temp_v0, s32 *, 0x28) = (s32) M2C_FIELD(temp_a0, s32 *, 0x4C);
        M2C_FIELD(temp_v0, s32 *, 0x2C) = (s32) M2C_FIELD(arg0, s32 *, 0x2C);
        M2C_FIELD(temp_v0, s32 *, 0x30) = (s32) M2C_FIELD(temp_a0, s32 *, 0x54);
        temp_v0_2 = (func_80033634_ovl_01() & 0xFF) - 0x80;
        M2C_FIELD(temp_v0, s16 *, 0x1AA) = 2;
        M2C_FIELD(temp_v0, s16 *, 0x66) = (s16) (M2C_FIELD(arg0, u16 *, 0x66) - temp_v0_2);
        M2C_FIELD(arg0, s16 *, 0x1F4) = 0x78;
        M2C_FIELD(arg0, u8 *, 0x25C) = (u8) (M2C_FIELD(arg0, u8 *, 0x25C) | 2);
        /* fallthrough */
    case 1:
        if (M2C_FIELD(arg0, s16 *, 0x1F4) == 0x64) {
            if ((u8) M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x19A76) < 5U) {
                temp_v0_3 = func_80032020_ovl_01(0x27);
                temp_a0_2 = M2C_FIELD(arg0, s32 *, 0x234) + 0x5E0;
                M2C_FIELD(temp_v0_3, s32 *, 0x28) = (s32) M2C_FIELD(temp_a0_2, s32 *, 0x4C);
                M2C_FIELD(temp_v0_3, s32 *, 0x2C) = (s32) M2C_FIELD(arg0, s32 *, 0x2C);
                M2C_FIELD(temp_v0_3, s32 *, 0x30) = (s32) M2C_FIELD(temp_a0_2, s32 *, 0x54);
                temp_v0_4 = func_80033634_ovl_01() & 0xFF;
                M2C_FIELD(temp_v0_3, s16 *, 0x1AA) = 2;
                M2C_FIELD(temp_v0_3, s16 *, 0x66) = (s16) ((M2C_FIELD(arg0, u16 *, 0x66) - temp_v0_4) + 0x880);
            }
        }
        if (M2C_FIELD(arg0, s16 *, 0x1F4) == 0x5A) {
            if ((u8) M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x19A76) < 5U) {
                if (func_80033634_ovl_01() & 1) {
                    temp_v0_5 = func_80032020_ovl_01(0x27);
                    temp_a0_3 = M2C_FIELD(arg0, s32 *, 0x234) + 0x5E0;
                    M2C_FIELD(temp_v0_5, s32 *, 0x28) = (s32) M2C_FIELD(temp_a0_3, s32 *, 0x4C);
                    M2C_FIELD(temp_v0_5, s32 *, 0x2C) = (s32) M2C_FIELD(arg0, s32 *, 0x2C);
                    M2C_FIELD(temp_v0_5, s32 *, 0x30) = (s32) M2C_FIELD(temp_a0_3, s32 *, 0x54);
                    temp_v0_6 = func_80033634_ovl_01() & 0xFF;
                    M2C_FIELD(temp_v0_5, s16 *, 0x1AA) = 2;
                    M2C_FIELD(temp_v0_5, s16 *, 0x66) = (s16) ((M2C_FIELD(arg0, u16 *, 0x66) - temp_v0_6) + 0x480);
                }
            }
        }
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x40) != 0) {
            M2C_FIELD(arg0, s8 *, 0x1EA) = 0x3F;
            D_80167F4A_ovl_20 = 3 - ((func_80033634_ovl_01() & 0xFF) % 6);
            D_80167F4B_ovl_20 = 0xF - ((func_80033634_ovl_01() & 0xFF) % 30);
        }
        if ((M2C_FIELD(arg0, s16 *, 0x1F4) < 0x3C) && !((u16) M2C_FIELD(arg0, s16 *, 0x1F4) & 0xF)) {
            temp_s1 = M2C_FIELD(arg0, s32 *, 0x234);
            sp10 = 0x80 - (func_80033634_ovl_01() & 0xFF);
            sp12 = 0;
            sp14 = 0x80 - (func_80033634_ovl_01() & 0xFF);
            func_800377B0_ovl_01(0x151000, (s16) M2C_FIELD(arg0, u16 *, 0x66), temp_s1 + 0x618, &sp10);
        }
        temp_v0_7 = (u16) M2C_FIELD(arg0, s16 *, 0x1F4) - 1;
        M2C_FIELD(arg0, s16 *, 0x1F4) = temp_v0_7;
        if (temp_v0_7 == -1) {
            M2C_FIELD(arg0, s32 *, 4) = 0x01010000;
            M2C_FIELD(arg0, s8 *, 0x2BE) = (s8) ((u8) M2C_FIELD(arg0, s8 *, 0x2BE) & 0x7F);
            temp_a0_4 = (func_80033634_ovl_01() & 0xFF) + 0x12C;
            M2C_FIELD(arg0, u16 *, 0x2B4) = temp_a0_4;
            if ((u8) M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x19A76) < 4U) {
                M2C_FIELD(arg0, u16 *, 0x2B4) = (u16) (temp_a0_4 >> 1);
            }
            if (((u32) M2C_FIELD(arg0, u32 *, 0x28C) < 0xFA0U) && (M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x19CEF) == 0)) {
                M2C_FIELD(arg0, s32 *, 4) = 0x01030000;
            }
        }
        break;
    }
}
