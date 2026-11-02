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

M2C_UNK func_80083800_ovl_01(s16, u16 *, u16 *);    /* extern */

void func_80083A7C_ovl_01(void *arg0) {
    u16 sp10;
    u16 sp14;

    sp14 = 0;
    sp10 = (u16) ((s32) (M2C_FIELD(arg0, u16 *, 0x12C) * 0xB3) >> 7);
    func_80083800_ovl_01(M2C_FIELD(arg0, s16 *, 0x66), &sp10, &sp10);
    M2C_FIELD(arg0, s16 *, 0x1F8) = (s16) (M2C_FIELD(arg0, u16 *, 0x2A) + sp10);
    M2C_FIELD(arg0, s16 *, 0x1FC) = (s16) (M2C_FIELD(arg0, u16 *, 0x32) + sp14);
}
