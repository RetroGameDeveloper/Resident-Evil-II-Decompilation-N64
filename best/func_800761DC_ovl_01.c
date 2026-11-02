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
extern M2C_UNK D_800B99D8_ovl_01;
extern s32 D_800C527C_ovl_01;
extern M2C_UNK D_80115D90_ovl_01;
extern M2C_UNK D_80115DB8_ovl_01;
extern M2C_UNK D_80115E04_ovl_01;
extern M2C_UNK D_80119E48_ovl_01;
extern M2C_UNK D_8011A234_ovl_01;

void func_800761DC_ovl_01(s32 arg0) {
    s32 temp_a0;
    s32 temp_s3;
    s32 temp_v1;
    s8 temp_v0;

    temp_s3 = D_800C527C_ovl_01 + 0x3100;
    if (M2C_FIELD(&D_80119E48_ovl_01, s8 *, 1) >= 0) {
        func_80075638_ovl_01(5, 1);
        M2C_FIELD(&D_80119E48_ovl_01, s8 *, 1) = -1;
    }
    temp_v1 = arg0 & 0xFF;
    temp_a0 = temp_v1 * 2;
    do {
        func_80004CFC(*(temp_a0 + &D_80115E04_ovl_01), temp_s3, 1, &D_800B99D8_ovl_01);
        temp_v0 = func_8007530C_ovl_01(*(temp_a0 + &D_80115D90_ovl_01), 5, 1);
        M2C_FIELD(&D_80119E48_ovl_01, s8 *, 1) = temp_v0;
        M2C_FIELD(&D_8011A234_ovl_01, s32 *, 4) = (s32) *((temp_v1 * 4) + &D_80115DB8_ovl_01);
    } while (temp_v0 == -1);
}
