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
M2C_UNK func_800377B0_ovl_01(s32, s16, M2C_UNK *, u16 *); /* extern */
M2C_UNK func_8004251C_ovl_01(void *, s32, s32);     /* extern */
extern M2C_UNK D_800E8FC8_ovl_01;

void func_8005C418_ovl_01(void *arg0) {
    u16 sp10;
    u16 sp12;
    u16 sp14;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_s0_5;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x234);
    func_8004251C_ovl_01(arg0 + 0x14, temp_s0 + 8, temp_s0 + 0x38);
    sp10 = M2C_FIELD(temp_s0, u16 *, 0x4E);
    sp12 = M2C_FIELD(arg0, u16 *, 0x1A8);
    sp14 = M2C_FIELD(temp_s0, u16 *, 0x56);
    temp_s0_2 = (((func_80033634_ovl_01() & 0xFF) * 4) + 0x818) | 0x1A000000;
    func_800377B0_ovl_01(temp_s0_2, (s16) (M2C_FIELD(arg0, u16 *, 0x66) - ((func_80033634_ovl_01() & 0xFF) * 4)), &D_800E8FC8_ovl_01, &sp10);
    temp_s0_3 = (((func_80033634_ovl_01() & 0xFF) * 4) + 0x818) | 0x1A000000;
    func_800377B0_ovl_01(temp_s0_3, (s16) (M2C_FIELD(arg0, u16 *, 0x66) - (((func_80033634_ovl_01() & 0xFF) * 4) - 0x400)), &D_800E8FC8_ovl_01, &sp10);
    temp_s0_4 = (((func_80033634_ovl_01() & 0xFF) * 4) + 0xC00) | 0x1A000000;
    func_800377B0_ovl_01(temp_s0_4, (s16) (M2C_FIELD(arg0, u16 *, 0x66) - (((func_80033634_ovl_01() & 0xFF) * 4) - 0x800)), &D_800E8FC8_ovl_01, &sp10);
    temp_s0_5 = (((func_80033634_ovl_01() & 0xFF) * 4) + 0xC00) | 0x1A000000;
    func_800377B0_ovl_01(temp_s0_5, (s16) (M2C_FIELD(arg0, u16 *, 0x66) - (((func_80033634_ovl_01() & 0xFF) * 4) - 0xC00)), &D_800E8FC8_ovl_01, &sp10);
}
