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

M2C_UNK func_80040E88_ovl_01(u16 *, M2C_UNK *, void *); /* extern */
M2C_UNK func_8004279C_ovl_01(M2C_UNK *, s16 *, u16 *); /* extern */

void func_801739B0_overlay_054(void *arg0, void *arg1, s16 arg2) {
    u16 sp10;
    s16 sp12;
    u16 sp14;
    s16 sp18;
    s16 sp1A;
    s16 sp1C;
    M2C_UNK sp20;
    void *temp_a2;

    sp10 = M2C_FIELD(arg1, u16 *, 0x64);
    temp_a2 = M2C_FIELD(arg1, s32 *, 0x234) + (M2C_FIELD(arg1, u8 *, 0x25D) * 0x178);
    sp12 = (M2C_FIELD(temp_a2, u16 *, 0x130) + (M2C_FIELD(arg1, u16 *, 0x66) + M2C_FIELD(temp_a2, u16 *, 0x5A)) + (M2C_FIELD(arg1, u8 *, 0x2CD) << 0xB)) & 0xFFF;
    sp14 = M2C_FIELD(arg1, u16 *, 0x68);
    func_80040E88_ovl_01(&sp10, &sp20, temp_a2);
    sp18 = arg2;
    sp1C = 0;
    sp1A = 0;
    func_8004279C_ovl_01(&sp20, &sp18, &sp10);
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg1, s32 *, 0x28) + (s16) sp10);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg1, s32 *, 0x30) + (s16) sp14);
}
