/* Partial candidate from function #264335 in project #68; rechecked locally. */
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

s32 func_80033634_ovl_01();                    /* extern */
M2C_UNK func_8017186C_overlay_040(void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80173490_overlay_040(void *, s32, M2C_UNK); /* extern */

void func_80172368_overlay_040(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_a1;

    temp_a1 = func_80033634_ovl_01() & 0xF;
    M2C_FIELD(((temp_a1 * 0x178) + M2C_FIELD(arg0, s32 *, 0x234)), s32 *, 0x60) = 0x3F2F;
    M2C_FIELD(arg0, s8 *, 0x2BB) = 1;
    func_80173490_overlay_040(arg0, temp_a1, 9);
    M2C_FIELD(arg0, s8 *, 5) = 1;
    func_8017186C_overlay_040(arg0, arg1, arg2);
}
