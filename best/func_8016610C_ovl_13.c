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

M2C_UNK func_800377B0_ovl_01(M2C_UNK, s16, M2C_UNK *, u16 *); /* extern */
extern M2C_UNK D_800E8FC8_ovl_01;

void func_8016610C_ovl_13(void *arg0) {
    u16 sp10;
    u16 sp12;
    u16 sp14;

    sp10 = M2C_FIELD(arg0, u16 *, 0x2A);
    sp12 = M2C_FIELD(arg0, u16 *, 0x2E);
    sp14 = M2C_FIELD(arg0, u16 *, 0x32);
    func_800377B0_ovl_01(0x50C00, M2C_FIELD(arg0, s16 *, 0x66), &D_800E8FC8_ovl_01, &sp10);
}
