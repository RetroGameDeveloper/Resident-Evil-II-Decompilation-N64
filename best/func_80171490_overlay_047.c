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

M2C_UNK func_80040E88_ovl_01(s16 *, M2C_UNK *);     /* extern */
M2C_UNK func_8004279C_ovl_01(M2C_UNK *, s16 *, s16 *); /* extern */
extern M2C_UNK D_800C7650;

void func_80171490_overlay_047(void *arg0, s16 arg1, s16 arg2) {
    s16 sp10;
    s16 sp12;
    s16 sp14;
    M2C_UNK sp18;

    sp10 = 0;
    sp12 = arg2;
    sp14 = 0;
    func_80040E88_ovl_01(&sp10, &sp18);
    sp10 = arg1;
    sp12 = 0;
    sp14 = 0;
    func_8004279C_ovl_01(&sp18, &sp10, &sp10);
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (sp10 + M2C_FIELD(&D_800C7650, s32 *, 0x19AA8));
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (sp14 + M2C_FIELD(&D_800C7650, s32 *, 0x19AB0));
}
