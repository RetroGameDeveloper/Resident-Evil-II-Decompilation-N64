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
M2C_UNK func_80173E84_overlay_058(void *, u8, u8, u32); /* extern */
extern M2C_UNK D_801748A8_overlay_058;
extern M2C_UNK D_801748C0_overlay_058;

void func_80171F34_overlay_058(void *arg0) {
    func_80173E84_overlay_058(arg0, *((((M2C_FIELD(arg0, u8 *, 0x26E) % 3) & 0xFF) * 4) + (func_80033634_ovl_01() & 3) + &D_801748C0_overlay_058), M2C_FIELD((M2C_FIELD(arg0, u8 *, 5) + &D_801748A8_overlay_058), u8 *, -1), MULTU_HI(M2C_FIELD(arg0, u8 *, 0x26E), 0xAAAAAAAB));
}
