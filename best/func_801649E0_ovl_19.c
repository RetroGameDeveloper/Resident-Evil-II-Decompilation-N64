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
s32 func_80033634_ovl_01();                         /* extern */
M2C_UNK func_800377B0_ovl_01(s32, s16, void *, s16 *); /* extern */
M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_801649E0_ovl_19(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s16 sp10;
    s16 sp12;
    s16 sp14;
    s16 temp_a0_2;
    s16 temp_v0;
    s16 temp_v1_5;
    s32 *temp_s0;
    s32 *var_s0;
    s32 *var_s0_2;
    s32 *var_v1_2;
    s32 temp_a0;
    s32 temp_v0_2;
    s32 temp_v1_3;
    s32 temp_v1_6;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 temp_v1_4;
    void *temp_s2;
    void *var_a2;
    void *var_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    temp_s2 = M2C_FIELD(arg0, void **, 0x208);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) (((func_80033634_ovl_01() & 7) << 0x10) + 0x09000F00);
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, s16 *, 0x1F4) = 0;
        func_800377B0_ovl_01(0x817D0, 0, M2C_FIELD(arg0, s32 **, 0x234) + 0x38, NULL);
        temp_v1_2 = M2C_FIELD(arg0, u8 *, 5);
        M2C_FIELD(arg0, s16 *, 0x1F2) = -1;
        M2C_FIELD(arg0, s8 *, 0x207) = 0;
        if (((u32) (temp_v1_2 - 9) < 2U) || (temp_v1_3 = temp_v1_2 & 0xFF, (temp_v1_3 == 0x10)) || (temp_v1_3 == 0x11)) {
            func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 4) + 0xC18) | 0x05040000, M2C_FIELD(arg0, s16 *, 0x66), arg0 + 0x14, NULL);
            M2C_FIELD(arg0, s8 *, 0x207) = 1;
        }
        temp_v1_4 = M2C_FIELD(arg0, u8 *, 5);
        if ((temp_v1_4 == 0xB) || (temp_v1_4 == 0xE)) {
            func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 4) + 0xC18) | 0x040F0000, M2C_FIELD(arg0, s16 *, 0x66), arg0 + 0x14, NULL);
            M2C_FIELD(arg0, s8 *, 0x207) = 1;
        }
        if (M2C_FIELD(arg0, u8 *, 5) == 0xC) {
            M2C_FIELD(arg0, u16 *, 0x1E0) = 0U;
            M2C_FIELD(arg0, s16 *, 0x1E4) = 0;
        }
        func_80077D48_ovl_01(3, arg0);
        /* fallthrough */
    case 1:
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
        func_80032B8C_ovl_01(arg0, 0);
        M2C_FIELD(arg0, u16 *, 0x1E0) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E0) - (M2C_FIELD(arg0, s16 *, 0x1F4) * 0x14));
        M2C_FIELD(arg0, s16 *, 0x1F4) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x1F4) + 1);
        if ((s16) M2C_FIELD(arg0, u16 *, 0x1E0) < 0) {
            M2C_FIELD(arg0, u8 *, 6) = 2U;
            var_a0 = 0xA;
            var_s0 = M2C_FIELD(arg0, s32 **, 0x234);
            M2C_FIELD(arg0, s16 *, 0x1F4) = (s16) (func_80033634_ovl_01() & 7);
            var_v1 = var_s0 + 0x128;
            do {
                var_a0 -= 1;
                *var_s0 |= 0x2000;
                M2C_FIELD(var_v1, s16 *, -4) = 0x1000;
                M2C_FIELD(var_v1, s16 *, -2) = 0x1000;
                M2C_FIELD(var_v1, s16 *, 0) = 0x1000;
                var_v1 += 0x178;
                var_s0 += 0x178;
            } while (var_a0 != 0);
        }
        break;
    case 2:
        temp_v1_5 = M2C_FIELD(arg0, s16 *, 0x1F4);
        if ((temp_v1_5 == 0x1E) || (temp_v1_5 == 0x3C)) {
            M2C_FIELD(arg0, s8 *, 0x1EA) = 7;
            M2C_FIELD(arg0, s32 *, 0x1E8) = (s8) ((u8) M2C_FIELD(arg0, s32 *, 0x1E8) + 1);
        }
        temp_v0 = (u16) M2C_FIELD(arg0, s16 *, 0x1F4) + 1;
        M2C_FIELD(arg0, s16 *, 0x1F4) = temp_v0;
        if (!(temp_v0 & 0x1F) && (M2C_FIELD(arg0, s8 *, 0x207) == 0)) {
            temp_s0 = M2C_FIELD(arg0, s32 **, 0x234);
            sp10 = ((u32) (func_80033634_ovl_01() & 0xFF) >> 1) + 0x40;
            sp12 = 0xC8;
            sp14 = 0x40 - ((u32) (func_80033634_ovl_01() & 0xFF) >> 1);
            func_800377B0_ovl_01(0x805F4, (func_80033634_ovl_01() & 0xFF) * 0x10, temp_s0 + 0x38, &sp10);
        }
        var_a0_2 = 0xA;
        var_a2 = M2C_FIELD(arg0, s32 **, 0x234) + 0x128;
        do {
            var_a0_2 -= 1;
            M2C_FIELD(var_a2, u16 *, -4) = (u16) (M2C_FIELD(var_a2, u16 *, -4) + 0xA);
            M2C_FIELD(var_a2, u16 *, 0) = (u16) (M2C_FIELD(var_a2, u16 *, 0) + 0xA);
            M2C_FIELD(var_a2, u16 *, -2) = (u16) (M2C_FIELD(var_a2, u16 *, -2) - 0x28);
            var_a2 += 0x178;
        } while (var_a0_2 != 0);
        var_s0_2 = M2C_FIELD(arg0, s32 **, 0x234);
        var_a0_3 = 0xA;
        if (M2C_FIELD(var_s0_2, u8 *, 0x63) != 0x20) {
            var_v1_2 = var_s0_2 + 0x60;
            do {
                var_s0_2 += 0x178;
                var_a0_3 -= 1;
                *var_v1_2 += 0xFFFEFFFF;
                var_v1_2 += 0x178;
            } while (var_a0_3 != 0);
            var_s0_2 -= 0x178;
        }
        temp_a0 = M2C_FIELD(temp_s2, s32 *, 0x18);
        if ((temp_a0 & 0xFF0000) != 0x200000) {
            M2C_FIELD(temp_s2, s32 *, 0x18) = (s32) (temp_a0 + 0xFFFC0000 + 0x03000300);
            M2C_FIELD(temp_s2, s8 *, 0x1B) = 1;
            M2C_FIELD(temp_s2, u16 *, 4) = (u16) (M2C_FIELD(temp_s2, u16 *, 4) + 0xA);
            M2C_FIELD(temp_s2, u16 *, 6) = (u16) (M2C_FIELD(temp_s2, u16 *, 6) + 0xA);
        }
        if (M2C_FIELD(var_s0_2, s16 *, 0x126) < 0) {
            M2C_FIELD(arg0, u8 *, 6) = 3U;
        }
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
        break;
    case 3:
        M2C_FIELD(arg0, s32 *, 4) = 0x07000000;
        break;
    }
    temp_v1_6 = M2C_FIELD(arg0, s32 *, 0x2C);
    temp_v0_2 = temp_v1_6 + 0x64;
    if (temp_v1_6 < M2C_FIELD(arg0, s16 *, 0x25E)) {
        temp_a0_2 = M2C_FIELD(arg0, s16 *, 0x25E);
        M2C_FIELD(arg0, s32 *, 0x2C) = temp_v0_2;
        if (temp_v0_2 >= temp_a0_2) {
            M2C_FIELD(arg0, s32 *, 0x2C) = (s32) temp_a0_2;
        }
    }
}
