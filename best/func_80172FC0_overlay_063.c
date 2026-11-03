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

M2C_UNK func_800377B0_ovl_01(s32, s16, M2C_UNK *, u16 *); /* extern */
M2C_UNK func_80040E88_ovl_01(s32, M2C_UNK *);       /* extern */
M2C_UNK func_8004279C_ovl_01(M2C_UNK *, M2C_UNK, u16 *); /* extern */
extern M2C_UNK D_800E8FC8;
extern M2C_UNK D_80173368_overlay_063;

void func_80172FC0_overlay_063(void *arg0, s32 arg1, void *arg2, M2C_UNK arg3) {
    u16 sp10;
    u16 sp12;
    u16 sp14;
    M2C_UNK sp18;
    void *temp_s0;

    temp_s0 = ((arg1 & 0x7F) * 6) + &D_80173368_overlay_063;
    func_80040E88_ovl_01(arg0 + 0x64, &sp18);
    func_8004279C_ovl_01(&sp18, arg3, &sp10);
    sp10 += M2C_FIELD(arg2, u16 *, 0);
    sp12 += M2C_FIELD(arg2, u16 *, 2);
    sp14 += M2C_FIELD(arg2, u16 *, 4);
    func_800377B0_ovl_01(((M2C_FIELD(temp_s0, u8 *, 0) & 0x7F) << 0x18) | ((M2C_FIELD(temp_s0, u8 *, 1) + M2C_FIELD(temp_s0, u16 *, 2)) << 0x10) | M2C_FIELD(temp_s0, u16 *, 4), M2C_FIELD(arg0, s16 *, 0x66), &D_800E8FC8, &sp10);
}
