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

s32 func_80033634_ovl_01();                         /* extern */
M2C_UNK func_800377B0_ovl_01(s32, s16, s32, M2C_UNK); /* extern */
M2C_UNK func_80052C00_ovl_01(M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_80052C9C_ovl_01(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80052D40_ovl_01(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80077B0C_ovl_01(M2C_UNK, void *);      /* extern */
s32 func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650_ovl_01;

void func_80168120_ovl_28(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u8 temp_v1;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_v1_2;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x07000300;
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A5C) = (s32) (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A5C) | 0x40);
        M2C_FIELD(arg0, s8 *, 0x25C) = 1;
        M2C_FIELD(arg0, u8 *, 0x26F) = (u8) (M2C_FIELD(arg0, u8 *, 0x26F) | 0x80);
        M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19C72) = -1;
        func_800377B0_ovl_01(0x21000, M2C_FIELD(arg0, s16 *, 0x66), M2C_FIELD(arg0, void **, 0x234) + 0xBF8, 0);
        func_80077B0C_ovl_01(0x04020001, arg0 + 0x28);
        func_80052C00_ovl_01(2, 0);
        func_80052C9C_ovl_01(0xA, 0xFA, 0);
        func_80052D40_ovl_01(0x1E, 0xFA, 0x50, 0xA);
        func_80052C00_ovl_01(2, 0x37);
        func_80052C00_ovl_01(3, 0x3C);
        func_80052C00_ovl_01(3, 0x42);
        func_80052C00_ovl_01(8, 0x4B);
        func_80052C9C_ovl_01(0x1E, 0x78, 0x2D);
        func_80052D40_ovl_01(0x1E, 0x78, 0, 0x4B);
        func_80052C9C_ovl_01(5, 0xFA, 0xAA);
        func_80052D40_ovl_01(0x3C, 0xFA, 0, 0xAF);
        /* fallthrough */
    case 1:
        if (M2C_FIELD(arg0, u8 *, 0x1E9) == 0x17) {
            func_80077B0C_ovl_01(0x04030001, arg0 + 0x28);
        }
        if ((u8) M2C_FIELD(arg0, u8 *, 0x1E9) < 0xAU) {
            temp_s0 = M2C_FIELD(arg0, void **, 0x234);
            func_800377B0_ovl_01(((func_80033634_ovl_01() & 1) << 0x10) | 0x1000, M2C_FIELD(arg0, s16 *, 0x66), temp_s0 + 0x38, 0);
            temp_s0_2 = M2C_FIELD(arg0, void **, 0x234);
            func_800377B0_ovl_01(((func_80033634_ovl_01() & 1) << 0x10) | 0x1000, M2C_FIELD(arg0, s16 *, 0x66), temp_s0_2 + 0xBF8, 0);
        }
        if (M2C_FIELD(arg0, u8 *, 0x1E9) == 5) {
            temp_v1_2 = M2C_FIELD(arg0, void **, 0x234);
            temp_s0_3 = temp_v1_2 + 0xBC0;
            M2C_FIELD(temp_v1_2, s32 *, 0xBC0) = (s32) (M2C_FIELD(temp_v1_2, s32 *, 0xBC0) | 0x80);
            M2C_FIELD(temp_s0_3, s32 *, 0x130) = 0x40;
            M2C_FIELD(temp_s0_3, s32 *, 0x134) = 0x202030;
            temp_s0_4 = M2C_FIELD(arg0, void **, 0x234);
            M2C_FIELD(temp_s0_4, s32 *, 0x130) = 0x80;
            M2C_FIELD(temp_s0_4, s32 *, 0x134) = 0x101030;
            M2C_FIELD(temp_s0_4, s32 *, 0) = (s32) (M2C_FIELD(temp_s0_4, s32 *, 0) | 0x80);
        }
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x400) != 0) {
            M2C_FIELD(arg0, u8 *, 6) = 2U;
            M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 2);
        }
        break;
    }
}
