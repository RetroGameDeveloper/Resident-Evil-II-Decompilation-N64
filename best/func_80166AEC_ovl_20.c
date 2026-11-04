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
M2C_UNK func_800377B0_ovl_01(s32, s16, void *, M2C_UNK); /* extern */
s32 func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80164DA0_ovl_20(void *);               /* extern */
M2C_UNK func_801651CC_ovl_20(void *, M2C_UNK);      /* extern */
extern s8 D_80167F4A_ovl_20;
extern s8 D_80167F4B_ovl_20;

void func_80166AEC_ovl_20(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u8 temp_v1;
    void *temp_a0;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_s1_3;
    void *temp_s1_4;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    M2C_FIELD(arg0, u8 *, 0x2BE) = (u8) (M2C_FIELD(arg0, u8 *, 0x2BE) | 0x82);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        temp_a0 = M2C_FIELD(arg0, void **, 0x234);
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x06000700;
        M2C_FIELD(arg0, u8 *, 0x25C) = (u8) (M2C_FIELD(arg0, u8 *, 0x25C) & 0xFD);
        M2C_FIELD(arg0, u16 *, 0x66) = (u16) (M2C_FIELD(arg0, u16 *, 0x66) + M2C_FIELD(temp_a0, u16 *, 0x5A));
        M2C_FIELD(temp_a0, u16 *, 0x5A) = 0U;
        if (M2C_FIELD(arg0, u8 *, 5) == 0x11) {
            func_80164DA0_ovl_20(arg0);
        }
        M2C_FIELD(arg0, u16 *, 0x2BA) = (u16) (M2C_FIELD(arg0, u16 *, 0x2BA) | 0x1000);
        /* fallthrough */
    case 1:
        if (M2C_FIELD(arg0, u8 *, 5) == 0xE) {
            if (!(M2C_FIELD(arg0, u8 *, 0x1E9) & 3)) {
                func_801651CC_ovl_20(arg0, 0);
            }
        }
        func_800334F8_ovl_01(arg0, arg1, arg2, 0);
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x200) != 0) {
            M2C_FIELD(arg0, s32 *, 0x1E8) = 0x0A003F00;
            temp_s1 = M2C_FIELD(arg0, void **, 0x234);
            M2C_FIELD(arg0, u8 *, 6) = 2U;
            M2C_FIELD(arg0, u8 *, 0x25C) = (u8) (M2C_FIELD(arg0, u8 *, 0x25C) & 0xFD);
            func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 4) + 0x17D0) | 0x040F0000, (s16) M2C_FIELD(arg0, u16 *, 0x66), temp_s1 + 0xD70, 0);
            temp_s1_2 = M2C_FIELD(arg0, void **, 0x234);
            func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 4) + 0x1FA0) | 0x040F0000, (s16) M2C_FIELD(arg0, u16 *, 0x66), temp_s1_2 + 0x1350, 0);
            temp_s1_3 = M2C_FIELD(arg0, void **, 0x234);
            func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 4) + 0x1000) | 0x040F0000, (s16) M2C_FIELD(arg0, u16 *, 0x66), temp_s1_3 + 0x4A0, 0);
            temp_s1_4 = M2C_FIELD(arg0, void **, 0x234);
            func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 4) + 0x1000) | 0x040F0000, (s16) M2C_FIELD(arg0, u16 *, 0x66), temp_s1_4 + 0x1B0, 0);
            if (M2C_FIELD(arg0, u8 *, 5) == 0xE) {
                func_801651CC_ovl_20(arg0, 1);
            }
        } else {
block_18:
        }
        func_80032B8C_ovl_01(arg0, 0);
        break;
    case 2:
        func_800334F8_ovl_01(arg0, arg1, arg2, 0);
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x40) != 0) {
            M2C_FIELD(arg0, s32 *, 4) = 0x01010000;
            M2C_FIELD(arg0, u8 *, 0x2BE) = (u8) (M2C_FIELD(arg0, u8 *, 0x2BE) & 0x7F);
        }
        goto block_18;
    }
    if (!(M2C_FIELD(arg0, u8 *, 0x1E9) & 3)) {
        D_80167F4A_ovl_20 = 3 - ((func_80033634_ovl_01() & 0xFF) % 6);
        D_80167F4B_ovl_20 = 0xF - ((func_80033634_ovl_01() & 0xFF) % 30);
    }
}
