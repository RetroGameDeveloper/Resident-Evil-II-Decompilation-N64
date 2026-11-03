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
M2C_UNK func_8004279C_ovl_01(M2C_UNK *, void *, s16 *); /* extern */

void func_801737CC_overlay_045(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 sp10;
    s16 sp12;
    s16 sp14;
    M2C_UNK sp18;

    sp10 = M2C_FIELD(arg0, u16 *, 0x64) + arg1;
    sp12 = M2C_FIELD(arg0, u16 *, 0x66) + arg2;
    sp14 = M2C_FIELD(arg0, u16 *, 0x68) + arg3;
    func_80040E88_ovl_01(&sp10, &sp18);
    func_8004279C_ovl_01(&sp18, arg0 + 0x1E0, &sp10);
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) + sp10);
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) + sp12);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) + sp14);
}
