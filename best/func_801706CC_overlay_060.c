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

extern unsigned short D_800E109E;
extern unsigned short D_800E10A2;
extern unsigned short D_800E10A6;
s32 func_80033634_ovl_01();
s32 func_800377B0_ovl_01();
extern char D_800C7650[];

void func_801706CC_overlay_060(void *arg0) {
    u16 sp10;
    u16 sp12;
    u16 sp14;
    s32 temp_s0;
    s32 temp_s0_2;
    u16 temp_a0;
    void *temp_a1;

    temp_s0 = M2C_FIELD(arg0, s32 *, 0x234);
    temp_a1 = temp_s0 + 0x2F0;
    sp10 = D_800E109E - M2C_FIELD(temp_a1, u16 *, 0x4E);
    temp_a0 = M2C_FIELD(temp_a1, u16 *, 0x52);
    sp12 = D_800E10A2 - temp_a0;
    sp14 = D_800E10A6 - M2C_FIELD(temp_a1, u16 *, 0x56);
    temp_s0_2 = temp_s0 + 0x328;
    func_800377B0_ovl_01((((func_80033634_ovl_01(temp_a0, temp_a1) & 0xFF) * 4) + 0x2770) | 0x040F0000, M2C_FIELD(arg0, s16 *, 0x66), temp_s0_2, &sp10);
    sp10 += 0x320;
    func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 4) + 0x2710) | 0x040F0000, M2C_FIELD(arg0, s16 *, 0x66), temp_s0_2, &sp10);
    sp10 -= 0x320;
    sp14 -= 0x264;
    func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 4) + 0x1F40) | 0x040F0000, M2C_FIELD(arg0, s16 *, 0x66), temp_s0_2, &sp10);
    sp14 += 0x4C8;
    sp12 = (sp12 + 0x100) - ((func_80033634_ovl_01() & 0xFF) * 2);
    func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 4) + 0x1F40) | 0x040F0000, M2C_FIELD(arg0, s16 *, 0x66), temp_s0_2, &sp10);
    sp14 = sp14 - 0x364 + ((func_80033634_ovl_01() & 0xFF) * 2);
    sp12 = (sp12 + 0x100) - ((func_80033634_ovl_01() & 0xFF) * 2);
    func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 4) + 0x1770) | 0x040F0000, M2C_FIELD(arg0, s16 *, 0x66), temp_s0_2, &sp10);
    sp14 = (sp14 + 0x100) - ((func_80033634_ovl_01() & 0xFF) * 2);
    sp12 = (sp12 + 0x100) - ((func_80033634_ovl_01() & 0xFF) * 2);
    func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 4) + 0x1770) | 0x040F0000, M2C_FIELD(arg0, s16 *, 0x66), temp_s0_2, &sp10);
}
