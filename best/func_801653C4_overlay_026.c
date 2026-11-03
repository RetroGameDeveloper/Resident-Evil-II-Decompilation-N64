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
M2C_UNK func_80164E08_overlay_026(void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80166B18_overlay_026(void *, u8, M2C_UNK); /* extern */
extern M2C_UNK D_801671B0_overlay_026;

void func_801653C4_overlay_026(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_80166B18_overlay_026(arg0, *((func_80033634_ovl_01() & 0xF) + &D_801671B0_overlay_026), 0xA);
    func_80166B18_overlay_026(arg0, *((func_80033634_ovl_01() & 0xF) + &D_801671B0_overlay_026), 0xA);
    M2C_FIELD(arg0, s8 *, 0x2D8) = 0xF;
    func_80164E08_overlay_026(arg0, arg1, arg2);
}
