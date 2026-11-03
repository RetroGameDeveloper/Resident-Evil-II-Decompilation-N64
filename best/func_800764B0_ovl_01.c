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
extern M2C_UNK D_800B99E4_ovl_01;
extern s32 D_800C527C_ovl_01;
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_80116E78_ovl_01;
extern M2C_UNK D_80116F08_ovl_01;
extern M2C_UNK D_80116F98_ovl_01;
extern M2C_UNK D_80119E48_ovl_01;
extern s32 D_80119E78_ovl_01;
extern M2C_UNK D_8011A234_ovl_01;

void func_800764B0_ovl_01(void) {
    s32 temp_a1;
    s32 temp_s2;
    s8 temp_v0;
    u8 temp_s1;

    temp_s1 = M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x20F6F);
    if (temp_s1 != 0xFF) {
        temp_s2 = temp_s1 * 2;
        temp_a1 = (D_800C527C_ovl_01 + 0x3310) & ~0xF;
        D_80119E78_ovl_01 = temp_a1;
        func_80004CFC(*(temp_s2 + &D_80116F08_ovl_01), temp_a1, 1, &D_800B99E4_ovl_01);
        func_8004CDB8_ovl_01(1);
        if (M2C_FIELD(&D_80119E48_ovl_01, s8 *, 3) >= 0) {
            func_80075638_ovl_01(7, 1);
            M2C_FIELD(&D_80119E48_ovl_01, s8 *, 3) = -1;
        }
        do {
            temp_v0 = func_8007530C_ovl_01(*(temp_s2 + &D_80116E78_ovl_01), 7, 1);
            M2C_FIELD(&D_80119E48_ovl_01, s8 *, 3) = temp_v0;
            M2C_FIELD(&D_8011A234_ovl_01, s32 *, 0xC) = (s32) *((temp_s1 * 4) + &D_80116F98_ovl_01);
        } while (temp_v0 == -1);
    }
}
