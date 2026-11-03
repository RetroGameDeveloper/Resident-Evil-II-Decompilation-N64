/* identical to func_80165014_ovl_30 (matched), with its names changed by decompdecomp */
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

M2C_UNK func_80170EE0_overlay_040();                     /* extern */
M2C_UNK func_80171040_overlay_043(void *);               /* extern */
M2C_UNK jtbl_80172FE8_overlay_041(void *);               /* extern */

void func_80170E94_overlay_040(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 6) == 0) {
        func_80170EE0_overlay_040();
    } else {
        func_80171040_overlay_043(arg0);
    }
    jtbl_80172FE8_overlay_041(arg0);
}
