/* identical to func_8016283C_overlay_018 (matched), with its names changed by decompdecomp */
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

s32 func_80074D94_ovl_01(s32, s32);                 /* extern */
M2C_UNK func_8016F448_overlay_046(void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_8016F4E0_overlay_046(void *, M2C_UNK, M2C_UNK); /* extern */

void func_8016F3CC_overlay_046(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    if ((func_80074D94_ovl_01(M2C_FIELD(arg0, s32 *, 0x28), M2C_FIELD(arg0, s32 *, 0x30)) >= M2C_FIELD(arg0, s16 *, 0x25E)) || (M2C_FIELD(arg0, u8 *, 0x2BE) != 0)) {
        func_8016F448_overlay_046(arg0, arg1, arg2);
        return;
    }
    func_8016F4E0_overlay_046(arg0, arg1, arg2);
}
