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

M2C_UNK func_80004CFC(u16, s32, M2C_UNK, M2C_UNK *); /* extern */
s8 func_8007530C_ovl_01(u16, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_80075638_ovl_01(M2C_UNK, M2C_UNK);     /* extern */
extern M2C_UNK D_800B9A08_ovl_01;
extern s32 D_800C527C_ovl_01;
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_80115FA0_ovl_01;
extern M2C_UNK D_801160EC_ovl_01;
extern s8 D_80119E48_ovl_01;
extern s32 D_80119E6C_ovl_01;
extern void *D_8011A234_ovl_01;
extern s16 D_8011A318_ovl_01;
extern M2C_UNK func_80116010_ovl_01;

void func_800789BC_ovl_01(void) {
    s32 temp_s1;
    s32 temp_v1;
    s8 temp_v0;
    u8 temp_s2;

    temp_s1 = (D_800C527C_ovl_01 + 0x300F) & ~0xF;
    temp_s2 = M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x184A8), u8 *, 0xC);
    if (D_80119E48_ovl_01 >= 0) {
        func_80075638_ovl_01(0, 1);
        D_80119E48_ovl_01 = -1;
        D_80119E6C_ovl_01 = temp_s1;
    }
    temp_v1 = temp_s2 * 2;
    do {
        func_80004CFC(*(temp_v1 + &D_80115FA0_ovl_01), temp_s1, 1, &D_800B9A08_ovl_01);
        temp_v0 = func_8007530C_ovl_01(*(temp_v1 + &D_801160EC_ovl_01), 0, 1);
        D_80119E48_ovl_01 = temp_v0;
        D_8011A234_ovl_01 = (temp_s2 * 4) + &func_80116010_ovl_01;
    } while (temp_v0 == -1);
    D_8011A318_ovl_01 = 1;
}
