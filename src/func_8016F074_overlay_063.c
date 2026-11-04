/* identical to func_8015A3D4_overlay_035 in Resident Evil II (matched), with its names changed by decompdecomp */
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

s32 func_80172EB4_overlay_063();

void func_8016F074_overlay_063(s32 arg0) {
    func_80172EB4_overlay_063(arg0, 0x86, 1);
    func_80172EB4_overlay_063(arg0, 0x86, 8);
    func_80172EB4_overlay_063(arg0, 0x86, 3);
    func_80172EB4_overlay_063(arg0, 0x86, 0xA);
    func_80172EB4_overlay_063(arg0, 0x86, 6);
    func_80172EB4_overlay_063(arg0, 0x86, 7);
}
