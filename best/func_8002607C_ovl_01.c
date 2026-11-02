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

extern s32 D_800C4E68_ovl_01;
extern s32 D_800C4EB8_ovl_01;
extern s32 D_800C5688_ovl_01;
extern M2C_UNK D_800C7650_ovl_01;
extern s32 D_8010B698_ovl_01;
extern s32 D_80113778_ovl_01;

void func_8002607C_ovl_01(s32 arg0) {
    D_800C5688_ovl_01 = arg0;
    D_800C4EB8_ovl_01 = D_8010B698_ovl_01;
    D_800C4E68_ovl_01 = arg0 - (M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x21270) * (D_80113778_ovl_01 * 2));
}
