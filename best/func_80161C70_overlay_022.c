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

s32 func_80036038_ovl_01();
extern char D_801663D8_overlay_022[];
extern char D_801664A8_overlay_022[];
extern char D_80166578_overlay_022[];
extern char D_801665B8_overlay_022[];
extern char D_801665F8_overlay_022[];

void func_80161C70_overlay_022(s32 *arg0, s32 *arg1) {
    func_80036038_ovl_01(arg0, M2C_FIELD(arg0, s32 **, 0x234), &D_801665F8_overlay_022, func_80036038_ovl_01(arg0, M2C_FIELD(arg0, s32 **, 0x234), &D_801665B8_overlay_022, func_80036038_ovl_01(arg0, M2C_FIELD(arg0, s32 **, 0x234), &D_80166578_overlay_022, func_80036038_ovl_01(arg0, M2C_FIELD(arg0, s32 **, 0x234), &D_801664A8_overlay_022, func_80036038_ovl_01(M2C_FIELD(arg0, s32 **, 0x234), &D_801663D8_overlay_022, arg1)))));
}
