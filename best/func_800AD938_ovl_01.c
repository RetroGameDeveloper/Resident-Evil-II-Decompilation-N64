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

s32 *func_800AB3DC_ovl_01(M2C_UNK *, void *, u16, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK D_800AE0E4_ovl_01;
extern s32 D_8014E080;
extern u32 D_8014E084;
extern M2C_UNK D_8014E088;
extern s32 *D_8014E090;
extern M2C_UNK D_801535B0;
extern M2C_UNK D_80153DB0;

s32 func_800AD938_ovl_01(s16 arg0) {
    s32 *temp_v0;
    u16 temp_v1;
    u32 temp_a0;
    void *temp_a1;

    temp_a0 = (u32) (arg0 & 0xFFFF) >> 6;
    temp_a1 = (temp_a0 * 4) + &D_801535B0;
    D_8014E084 = temp_a0;
    if (M2C_FIELD(temp_a1, u16 *, 0) != 0) {
        temp_v1 = M2C_FIELD(temp_a1, u16 *, 2);
        M2C_FIELD(&D_8014E088, s16 *, 4) = arg0;
        D_8014E080 = (s32) temp_v1;
        temp_v0 = func_800AB3DC_ovl_01(&D_8014E088, (temp_v1 * 8) + &D_80153DB0, M2C_FIELD(temp_a1, u16 *, 0), 8, &D_800AE0E4_ovl_01);
        D_8014E090 = temp_v0;
        if (temp_v0 != NULL) {
            return *temp_v0;
        }
    }
    return 0;
}
