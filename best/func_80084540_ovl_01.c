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

M2C_UNK func_800845AC_ovl_01(void *);               /* extern */
extern M2C_UNK D_800C7650_ovl_01;

void func_80084540_ovl_01(void) {
    if (!(M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A80) & 0x80000) || ((M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) & 0x04000100) != 0x04000000)) {
        func_800845AC_ovl_01(&D_800C7650_ovl_01 + 0x18000);
    }
}
