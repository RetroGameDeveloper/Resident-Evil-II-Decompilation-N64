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

M2C_UNK func_80004CFC(u16, s32, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_8004CDB8_ovl_01(M2C_UNK);              /* extern */
s8 func_8007530C_ovl_01(u16, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_80075638_ovl_01(M2C_UNK, M2C_UNK);     /* extern */
extern M2C_UNK D_800B99CC_ovl_01;
extern s32 D_800C527C_ovl_01;
extern M2C_UNK D_80115F00_ovl_01;
extern M2C_UNK D_80115F28_ovl_01;
extern M2C_UNK D_80115F78_ovl_01;
extern M2C_UNK D_80119E48_ovl_01;
extern s32 D_80119E7C_ovl_01;
extern M2C_UNK D_8011A234_ovl_01;

void func_800760BC_ovl_01(s32 arg0) {
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_v1;

    func_8004CDB8_ovl_01(1);
    if (M2C_FIELD(&D_80119E48_ovl_01, s8 *, 4) >= 0) {
        func_80075638_ovl_01(4, 1);
        M2C_FIELD(&D_80119E48_ovl_01, s8 *, 4) = -1;
    }
    temp_a0 = arg0 & 0xFF;
    temp_v1 = temp_a0 * 2;
    temp_s0 = (D_800C527C_ovl_01 + 0x3210) & ~0xF;
    D_80119E7C_ovl_01 = temp_s0;
    do {
        func_80004CFC(*(temp_v1 + &D_80115F78_ovl_01), temp_s0, 1, &D_800B99CC_ovl_01);
        M2C_FIELD(&D_80119E48_ovl_01, s8 *, 4) = func_8007530C_ovl_01(*(temp_v1 + &D_80115F00_ovl_01), 4, 1);
        M2C_FIELD(&D_8011A234_ovl_01, s32 *, 0x10) = (s32) *((temp_a0 * 4) + &D_80115F28_ovl_01);
        func_8004CDB8_ovl_01(1);
    } while (M2C_FIELD(&D_80119E48_ovl_01, s8 *, 4) == -1);
}
