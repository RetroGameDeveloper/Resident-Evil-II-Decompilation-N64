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

M2C_UNK func_80026948_overlay_001(s32);             /* extern */
M2C_UNK func_800269B8_overlay_001(s32);             /* extern */
M2C_UNK func_80026AC0_overlay_001();                /* extern */
extern s32 D_800C5680_overlay_001;
extern s32 D_800E91F0_overlay_001;

void func_80025DBC(void) {
    func_800269B8_overlay_001(D_800C5680_overlay_001);
    func_80026948_overlay_001(D_800E91F0_overlay_001);
    func_80026AC0_overlay_001();
}
