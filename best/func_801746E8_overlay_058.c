/* Partial candidate from function #265370 in project #68; rechecked locally. */
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

M2C_UNK func_800662B8_ovl_01(void *, void *);  /* extern */

void func_801746E8_overlay_058(void *arg0, s32 arg1, s32 arg2, s16 arg3) {
    void *temp_a1;
    void *temp_a2;

    temp_a1 = M2C_FIELD(arg0, s32 *, 0x234) + (arg1 * 0x178);
    temp_a2 = (arg2 * 4) + M2C_FIELD(temp_a1, s32 *, 0x120);
    M2C_FIELD(temp_a2, s16 *, 0xC) = arg3;
    func_800662B8_ovl_01(temp_a1, temp_a2);
}
