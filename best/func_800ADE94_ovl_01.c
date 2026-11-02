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

s32 *func_800AB3DC_ovl_01(M2C_UNK *, M2C_UNK *, s32, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK D_800AE104_ovl_01;
extern M2C_UNK D_8014E0C8;
extern s32 *D_8014E0D0;
extern s32 D_8014E170;
extern M2C_UNK D_8014E180;

s32 func_800ADE94_ovl_01(s16 arg0) {
    s32 *temp_v0;

    M2C_FIELD(&D_8014E0C8, s16 *, 4) = arg0;
    temp_v0 = func_800AB3DC_ovl_01(&D_8014E0C8, &D_8014E180, D_8014E170, 8, &D_800AE104_ovl_01);
    D_8014E0D0 = temp_v0;
    if (temp_v0 == NULL) {
        return 0;
    }
    return *temp_v0;
}
