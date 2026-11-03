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

M2C_UNK func_8004CCD8_ovl_01(M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_8004CDB8_ovl_01(M2C_UNK);              /* extern */
M2C_UNK func_8015B204_ovl_03(M2C_UNK);              /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern s8 D_800E91E3_ovl_01;
extern s8 D_80160B9C_ovl_03;

void func_8015D664_ovl_03(void) {
    M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) = (s32) (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) | 0x08000000);
    func_8004CCD8_ovl_01(1, 4);
    func_8004CDB8_ovl_01(1);
    D_800E91E3_ovl_01 = 1;
    M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) = (s32) (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) & 0xF7FFFFFF);
    func_8015B204_ovl_03(0xF7FFFFFF);
    D_80160B9C_ovl_03 = 1;
}
