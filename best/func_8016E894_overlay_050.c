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

s32 func_800362C0_ovl_01();
s32 func_80036764_ovl_01();
extern char D_80172F68_overlay_050[];
extern char D_80173038_overlay_050[];
extern char D_80173108_overlay_050[];
extern char D_80173148_overlay_050[];
extern char D_80173188_overlay_050[];

void func_8016E894_overlay_050(s32 *arg0) {
    func_800362C0_ovl_01(arg0, M2C_FIELD(arg0, s32 **, 0x234), &D_80172F68_overlay_050);
    func_800362C0_ovl_01(arg0, M2C_FIELD(arg0, s32 **, 0x234), &D_80173038_overlay_050);
    func_800362C0_ovl_01(arg0, M2C_FIELD(arg0, s32 **, 0x234), &D_80173108_overlay_050);
    func_800362C0_ovl_01(arg0, M2C_FIELD(arg0, s32 **, 0x234), &D_80173148_overlay_050);
    func_800362C0_ovl_01(arg0, M2C_FIELD(arg0, s32 **, 0x234), &D_80173188_overlay_050);
    func_80036764_ovl_01(arg0, M2C_FIELD(arg0, s32 **, 0x234));
}
