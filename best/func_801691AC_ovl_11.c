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

s32 func_80033634_ovl_01(s32);                      /* extern */
M2C_UNK func_800377B0_ovl_01(M2C_UNK, s16, s32, s16 *); /* extern */
M2C_UNK func_80040D24_ovl_01(M2C_UNK *, s32);       /* extern */
M2C_UNK func_80040E88_ovl_01(s16 *, M2C_UNK *);     /* extern */
M2C_UNK func_800416EC_ovl_01(M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_80042010_ovl_01(s32, M2C_UNK *);       /* extern */
M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */
s32 func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80167890_ovl_11(void *);               /* extern */
M2C_UNK func_80167A3C_ovl_11(void *);               /* extern */
M2C_UNK func_80167C08_ovl_11(void *);               /* extern */

void func_801691AC_ovl_11(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s16 sp10;
    s16 sp12;
    s16 sp14;
    M2C_UNK sp18;
    M2C_UNK sp38;
    s16 temp_v0_2;
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_s2_2;
    u16 temp_v0;
    u8 temp_v1;
    u8 temp_v1_2;

    sp10 = 0;
    sp12 = 0;
    sp14 = 0;
    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, s16 *, 0x1F4) = 0;
        M2C_FIELD(arg0, s16 *, 0x1F6) = 1;
        M2C_FIELD(arg0, s8 *, 0x206) = 0;
        if (M2C_FIELD(arg0, u16 *, 0x26C) & 0x20) {
            M2C_FIELD(arg0, s16 *, 0x1F6) = -1;
        }
        sp12 = 0x12C;
        func_800377B0_ovl_01(0x17D0, M2C_FIELD(arg0, s16 *, 0x66), M2C_FIELD(arg0, s32 *, 0x234) + 0xBF8, &sp10);
        temp_a0 = M2C_FIELD(arg0, s32 *, 0x2C4);
        M2C_FIELD(arg0, s8 *, 0x1EA) = 0xF;
        if ((temp_a0 & 0xFF000000) == 0x01000000) {
            M2C_FIELD(arg0, s32 *, 0x2C8) = temp_a0;
        }
        if (M2C_FIELD(arg0, s16 *, 0x1F2) < 0) {
            temp_s0 = M2C_FIELD(arg0, s32 *, 0x234);
            M2C_FIELD(arg0, s16 *, 0x1F2) = 0;
            M2C_FIELD(arg0, s8 *, 0x206) = 1;
            func_800377B0_ovl_01(0x31F40, (func_80033634_ovl_01(temp_a0) & 0xFF) * 0x10, temp_s0 + 0xBF8, &sp10);
            M2C_FIELD(arg0, s8 *, 0x1EA) = 0xF;
        }
        if (M2C_FIELD(arg0, u8 *, 0x2D5) == 0) {
            func_80077D48_ovl_01(0xC, arg0);
            M2C_FIELD(arg0, u8 *, 0x2D5) = 0x96U;
        }
        if ((M2C_FIELD(arg0, u8 *, 5) == 0xA) && !(M2C_FIELD(arg0, u16 *, 0x1AA) & 0x80) && ((u8) M2C_FIELD(arg0, u8 *, 0x26E) < 3U)) {
            func_80167890_ovl_11(arg0);
            M2C_FIELD(arg0, u16 *, 0x2B6) = (u16) (M2C_FIELD(arg0, u16 *, 0x2B6) | 0x800);
        }
        M2C_FIELD(arg0, s8 *, 0x207) = 0x18;
        if (M2C_FIELD(arg0, u8 *, 5) == 0x10) {
            if (!(M2C_FIELD(arg0, u16 *, 0x1AA) & 0x80) && ((u8) M2C_FIELD(arg0, u8 *, 0x2D6) >= 9U)) {
                func_80167890_ovl_11(arg0);
                M2C_FIELD(arg0, u16 *, 0x2B6) = (u16) (M2C_FIELD(arg0, u16 *, 0x2B6) | 0x800);
            }
            M2C_FIELD(arg0, s8 *, 0x207) = 2;
            M2C_FIELD(arg0, u8 *, 0x2D6) = (u8) (M2C_FIELD(arg0, u8 *, 0x2D6) + 1);
        }
        temp_v1_2 = M2C_FIELD(arg0, u8 *, 5);
        if ((temp_v1_2 == 0xF) || (temp_v1_2 == 0x12)) {
            M2C_FIELD(arg0, s8 *, 0x207) = 2;
        }
        if ((M2C_FIELD(arg0, u8 *, 5) == 0xB) && ((u8) M2C_FIELD(arg0, u8 *, 0x26E) < 3U)) {
            func_80167A3C_ovl_11(arg0);
        }
        if (M2C_FIELD(arg0, u8 *, 5) == 0xE) {
            func_80167C08_ovl_11(arg0);
        case 1:
        }
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x100) == 0) {
            temp_s2 = M2C_FIELD(arg0, s32 *, 0x234);
            sp14 = -(M2C_FIELD(arg0, s16 *, 0x1F4) * M2C_FIELD(arg0, s8 *, 0x207) * 8) * M2C_FIELD(arg0, s16 *, 0x1F6);
            func_80040E88_ovl_01(&sp10, &sp18);
            func_80042010_ovl_01(temp_s2 + 8, &sp18);
            func_800416EC_ovl_01(&sp18, &sp38);
            func_80040D24_ovl_01(&sp38, temp_s2 + 0x178 + 8);
            temp_v0 = (u16) M2C_FIELD(arg0, s16 *, 0x1F4);
            M2C_FIELD(arg0, s16 *, 0x1F4) = (s16) (temp_v0 + 1);
            if ((s16) temp_v0 >= 3) {
                M2C_FIELD(arg0, u8 *, 6) = 2U;
                M2C_FIELD(arg0, s16 *, 0x1F4) = 0x10;
                return;
            }
        } else {
block_42:
            M2C_FIELD(arg0, s16 *, 0x136) = 0x1F4;
            M2C_FIELD(arg0, s16 *, 0x138) = 0x1F4;
            M2C_FIELD(arg0, s16 *, 0x12C) = 0x1F4;
            M2C_FIELD(arg0, s16 *, 0x12E) = 0x1F4;
            M2C_FIELD(arg0, s16 *, 0x134) = -0x5DC;
            M2C_FIELD(arg0, s16 *, 0x13A) = 0x5DC;
            M2C_FIELD(arg0, u16 *, 0x2B6) = (u16) (M2C_FIELD(arg0, u16 *, 0x2B6) & 0xFFED);
            M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x0C000000);
            M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0x2C8);
            M2C_FIELD(arg0, u16 *, 0x1AA) = (u16) (M2C_FIELD(arg0, u16 *, 0x1AA) & 0xDFFF);
            M2C_FIELD(arg0, u8 *, 6) = (u8) (M2C_FIELD(arg0, u8 *, 6) + 1);
            return;
        }
        break;
    case 2:
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x100) == 0) {
            temp_s2_2 = M2C_FIELD(arg0, s32 *, 0x234);
            sp14 = -(M2C_FIELD(arg0, s16 *, 0x1F4) * M2C_FIELD(arg0, s8 *, 0x207)) * M2C_FIELD(arg0, s16 *, 0x1F6);
            func_80040E88_ovl_01(&sp10, &sp18);
            func_80042010_ovl_01(temp_s2_2 + 8, &sp18);
            func_800416EC_ovl_01(&sp18, &sp38);
            func_80040D24_ovl_01(&sp38, temp_s2_2 + 0x178 + 8);
            temp_v0_2 = (u16) M2C_FIELD(arg0, s16 *, 0x1F4) - 1;
            M2C_FIELD(arg0, s16 *, 0x1F4) = temp_v0_2;
            if (temp_v0_2 == -1) {
                M2C_FIELD(arg0, u8 *, 6) = 3U;
                return;
            }
        } else {
            goto block_42;
        }
        break;
    case 3:
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x100) != 0) {
            goto block_42;
        }
        break;
    }
}
