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

s32 func_80033634_ovl_01();                         /* extern */
M2C_UNK func_80035AAC_ovl_01_108(void *);           /* extern */
M2C_UNK func_800377B0_ovl_01(M2C_UNK, s16, void *, u16 *); /* extern */
M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */
s32 func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80167890_ovl_11(void *);               /* extern */
M2C_UNK func_80167A3C_ovl_11(void *);               /* extern */
M2C_UNK func_80167B24_ovl_11(void *);               /* extern */
M2C_UNK func_80167C08_ovl_11(void *);               /* extern */
extern M2C_UNK D_8016DDDC_ovl_11;

void func_8016B174_ovl_11(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    M2C_UNK sp10;
    M2C_UNK sp14;
    s8 sp18;
    u16 sp20;
    s16 sp22;
    u16 sp24;
    M2C_UNK var_a0;
    s32 var_v0;
    u16 temp_v0;
    u8 temp_v1;
    u8 temp_v1_2;
    void *temp_a0;
    void *temp_a2;
    void *temp_t0;
    void *temp_t0_2;

    sp10 = M2C_UNALIGNED32(M2C_FIELD(&D_8016DDDC_ovl_11, M2C_UNK *, 0));
    sp14 = M2C_UNALIGNED32(M2C_FIELD(&D_8016DDDC_ovl_11, M2C_UNK *, 4));
    sp18 = M2C_FIELD(&D_8016DDDC_ovl_11, s8 *, 8);
    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        temp_v0 = M2C_FIELD(arg0, u16 *, 0x2B6) | 4;
        M2C_FIELD(arg0, u16 *, 0x2B6) = temp_v0;
        if (M2C_FIELD(arg0, u8 *, 0x2D0) == 1) {
            M2C_FIELD(arg0, u16 *, 0x2B6) = (u16) (temp_v0 & 0xFFFB);
        }
        temp_a0 = &sp10 + (M2C_FIELD(arg0, u8 *, 0x2D0) * 3);
        if ((u8) M2C_FIELD(arg0, u8 *, 0x1E9) >= (u8) M2C_FIELD(temp_a0, u8 *, 0)) {
            M2C_FIELD(arg0, u16 *, 0x2B6) = (u16) (M2C_FIELD(arg0, u16 *, 0x2B6) & 0xFFFB);
            M2C_FIELD(arg0, s8 *, 0x207) = 1;
            var_v0 = (M2C_FIELD((&sp10 + (M2C_FIELD(arg0, u8 *, 0x2D0) * 3)), u8 *, 2) << 0x18) + 0x1E1F00;
        } else {
            M2C_FIELD(arg0, s8 *, 0x207) = 0;
            var_v0 = (M2C_FIELD(temp_a0, u8 *, 1) << 0x18) + 0x1F00;
        }
        M2C_FIELD(arg0, s32 *, 0x1E8) = var_v0;
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        temp_t0 = M2C_FIELD(arg0, void **, 0x234) + 0xBC0;
        M2C_FIELD(arg0, u8 *, 0x25C) = (u8) (M2C_FIELD(arg0, u8 *, 0x25C) | 1);
        M2C_FIELD(arg0, u8 *, 0x26F) = (u8) (M2C_FIELD(arg0, u8 *, 0x26F) | 0x80);
        sp20 = M2C_FIELD(temp_t0, u16 *, 0x1E);
        sp22 = M2C_FIELD(temp_t0, u16 *, 0x22) + 0x12C;
        sp24 = M2C_FIELD(temp_t0, u16 *, 0x26);
        func_800377B0_ovl_01(0x1FA0, M2C_FIELD(arg0, s16 *, 0x66), M2C_FIELD(arg0, void **, 0x234) + 0x38, &sp20);
        var_a0 = 0xB;
        if (func_80033634_ovl_01() & 1) {
            var_a0 = 0xD;
        }
        func_80077D48_ovl_01(var_a0, arg0);
        func_80035AAC_ovl_01_108(arg0);
        if ((M2C_FIELD(arg0, u8 *, 5) == 0xA) && !(M2C_FIELD(arg0, u16 *, 0x1AA) & 0x80)) {
            func_80167890_ovl_11(arg0);
        }
        if (M2C_FIELD(arg0, u8 *, 5) == 0xB) {
            func_80167A3C_ovl_11(arg0);
            temp_a2 = M2C_FIELD(arg0, void **, 0x234);
            temp_t0_2 = temp_a2 + 0xBC0;
            M2C_FIELD(temp_a2, s32 *, 0xBC0) = (s32) (M2C_FIELD(temp_a2, s32 *, 0xBC0) | 0x10);
            M2C_FIELD(temp_t0_2, s16 *, 0x136) = -0x7FE2;
            M2C_FIELD(temp_t0_2, s16 *, 0x130) = 0;
            M2C_FIELD(temp_t0_2, s16 *, 0x132) = 0;
            M2C_FIELD(temp_t0_2, s8 *, 0x134) = 0xA;
            M2C_FIELD(temp_t0_2, s8 *, 0x135) = 0xA;
            M2C_FIELD(temp_t0_2, s32 *, 0x60) = 0x304040;
            func_800377B0_ovl_01(0x040F0FA0, M2C_FIELD(arg0, s16 *, 0x66), temp_a2 + 0xBF8, NULL);
        }
        temp_v1_2 = M2C_FIELD(arg0, u8 *, 5);
        if ((temp_v1_2 == 9) || (temp_v1_2 == 0x11)) {
            if (!(M2C_FIELD(arg0, u16 *, 0x1AA) & 0x80)) {
                func_80167B24_ovl_11(arg0);
            }
        }
        if (M2C_FIELD(arg0, u8 *, 5) == 0xE) {
            func_80167C08_ovl_11(arg0);
        }
        M2C_FIELD(arg0, s16 *, 0x1E0) = 0xB;
        /* fallthrough */
    case 1:
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x80) != 0) {
            if (M2C_FIELD(arg0, s8 *, 0x207) == 0) {
                M2C_FIELD(arg0, u8 *, 6) = 2U;
                return;
            }
block_35:
            M2C_FIELD(arg0, u8 *, 6) = 3U;
            return;
        }
        return;
    case 2:
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x80);
        if (M2C_FIELD(arg0, u8 *, 0x1EA) == 0) {
            goto block_35;
        }
        break;
    case 3:
        M2C_FIELD(arg0, s32 *, 4) = 0x07000000;
        break;
    }
}
