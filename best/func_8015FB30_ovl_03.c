/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2 -mcpu=r4600, tried by autopilot */
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

s32 func_800439B8_ovl_01(s32, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_8015FC80_ovl_03();                     /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_80161270_ovl_03;

void func_8015FB30_ovl_03(void) {
    M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18204) = func_800439B8_ovl_01(M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18204), &D_80161270_ovl_03, 0, 0);
    func_8015FC80_ovl_03();
}
