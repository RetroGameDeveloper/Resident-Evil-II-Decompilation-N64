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

s8 func_80033634_ovl_01();                          /* extern */
M2C_UNK func_800377B0_ovl_01(M2C_UNK, s32, M2C_UNK *, s16 *); /* extern */
extern M2C_UNK D_800E8FC8;

void func_80172C10_overlay_041(void *arg0) {
    s16 sp10;
    s16 sp12;
    s16 sp14;

    sp10 = M2C_FIELD(arg0, u16 *, 0x2A) + func_80033634_ovl_01();
    sp12 = M2C_FIELD(arg0, u16 *, 0x2E) + func_80033634_ovl_01();
    sp14 = M2C_FIELD(arg0, u16 *, 0x32) + func_80033634_ovl_01();
    func_800377B0_ovl_01(0x12800, (func_80033634_ovl_01() & 0xFF) * 0x10, &D_800E8FC8, &sp10);
}
