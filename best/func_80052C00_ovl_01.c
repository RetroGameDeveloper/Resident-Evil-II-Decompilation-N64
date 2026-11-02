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

s8 *func_80052F1C_ovl_01(M2C_UNK *);                /* extern */
u32 func_80052F40_ovl_01(M2C_UNK *);                /* extern */
extern s32 D_800E9098_ovl_01;
extern s8 *D_8010BF40_ovl_01;
extern M2C_UNK D_8010BF78_ovl_01;

void func_80052C00_ovl_01(s16 arg0, s16 arg1) {
    s8 *temp_v0;

    D_800E9098_ovl_01 = 1;
    if ((func_80052F40_ovl_01(&D_8010BF78_ovl_01) < 0x20U) && (arg0 != 0)) {
        temp_v0 = func_80052F1C_ovl_01(&D_8010BF78_ovl_01);
        D_8010BF40_ovl_01 = temp_v0;
        *temp_v0 = 1;
        M2C_FIELD(D_8010BF40_ovl_01, s8 *, 1) = (s8) (arg0 != 0);
        M2C_FIELD(D_8010BF40_ovl_01, s16 *, 4) = arg0;
        M2C_FIELD(D_8010BF40_ovl_01, s16 *, 2) = arg1;
        M2C_FIELD(D_8010BF40_ovl_01, s16 *, 6) = 0;
    }
}
