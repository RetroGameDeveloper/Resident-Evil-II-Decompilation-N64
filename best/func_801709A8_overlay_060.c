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
M2C_UNK func_800377B0_ovl_01(s32, s16, s32, s16 *); /* extern */

void func_801709A8_overlay_060(void *arg0) {
    s16 sp10;
    s16 sp12;
    s16 sp14;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_s2_3;

    temp_s2 = M2C_FIELD(arg0, s32 *, 0x234);
    sp10 = 0x1091 - ((func_80033634_ovl_01() & 0xFF) * 2);
    sp12 = 0x934 - ((func_80033634_ovl_01() & 0xFF) * 2);
    sp14 = 0x100 - ((func_80033634_ovl_01() & 0xFF) * 2);
    temp_s2_2 = temp_s2 + 0x38;
    func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 4) + 0x2838) | 0x06000000, M2C_FIELD(arg0, s16 *, 0x66), temp_s2_2, &sp10);
    func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 4) + 0x1770) | 0x040F0000, M2C_FIELD(arg0, s16 *, 0x66), temp_s2_2, &sp10);
    sp10 = 0x1091 - ((func_80033634_ovl_01() & 0xFF) * 2);
    sp12 = 0xEAC - ((func_80033634_ovl_01() & 0xFF) * 2);
    sp14 = 0x510 - ((func_80033634_ovl_01() & 0xFF) * 2);
    func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 4) + 0x2838) | 0x06000000, M2C_FIELD(arg0, s16 *, 0x66), temp_s2_2, &sp10);
    sp10 = 0xD71 - ((func_80033634_ovl_01() & 0xFF) * 2);
    sp12 = 0xB28 - ((func_80033634_ovl_01() & 0xFF) * 2);
    sp14 = -0x450 - ((func_80033634_ovl_01() & 0xFF) * 2);
    func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 4) + 0x2838) | 0x06000000, M2C_FIELD(arg0, s16 *, 0x66), temp_s2_2, &sp10);
    func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 4) + 0x1770) | 0x040F0000, M2C_FIELD(arg0, s16 *, 0x66), temp_s2_2, &sp10);
    sp10 = 0x6CD - ((func_80033634_ovl_01() & 0xFF) * 2);
    sp12 = 0x2F4 - ((func_80033634_ovl_01() & 0xFF) * 2);
    sp14 = 0xC4 - ((func_80033634_ovl_01() & 0xFF) * 2);
    func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 4) + 0x2838) | 0x06000000, M2C_FIELD(arg0, s16 *, 0x66), temp_s2_2, &sp10);
    temp_s2_3 = M2C_FIELD(arg0, s32 *, 0x234) + 0x1B0;
    sp10 = 0x6B8 - ((func_80033634_ovl_01() & 0xFF) * 2);
    sp12 = 0x2F4 - ((func_80033634_ovl_01() & 0xFF) * 2);
    sp14 = 0xC4 - ((func_80033634_ovl_01() & 0xFF) * 2);
    func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 4) + 0x1A28) | 0x06000000, M2C_FIELD(arg0, s16 *, 0x66), temp_s2_3, &sp10);
    func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 4) + 0xFA0) | 0x040F0000, M2C_FIELD(arg0, s16 *, 0x66), temp_s2_3, &sp10);
}
