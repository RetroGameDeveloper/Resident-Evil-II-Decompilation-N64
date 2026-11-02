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

M2C_UNK func_80078F14_ovl_01(s8, M2C_UNK, u8);      /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern s8 D_80119E10_ovl_01;
extern u8 D_80119E11_ovl_01;
extern s8 D_80119E12_ovl_01;
extern M2C_UNK D_80119E84_ovl_01;

void func_80077460_ovl_01(u8 arg0, s8 arg1) {
    if (!(M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) & 0x2000)) {
        D_80119E12_ovl_01 = arg1;
        D_80119E10_ovl_01 = 1;
        D_80119E11_ovl_01 = arg0;
        if (M2C_FIELD(&D_80119E84_ovl_01, u8 *, 0) == 1) {
            func_80078F14_ovl_01(M2C_FIELD(&D_80119E84_ovl_01, s8 *, 2), 0x7F, D_80119E11_ovl_01);
        }
        if (M2C_FIELD(&D_80119E84_ovl_01, u8 *, 8) == 1) {
            func_80078F14_ovl_01(M2C_FIELD(&D_80119E84_ovl_01, s8 *, 0xA), 0x7F, D_80119E11_ovl_01);
        }
        if (M2C_FIELD(&D_80119E84_ovl_01, u8 *, 0x10) == 1) {
            func_80078F14_ovl_01(M2C_FIELD(&D_80119E84_ovl_01, s8 *, 0x12), 0x7F, D_80119E11_ovl_01);
        }
    }
}
