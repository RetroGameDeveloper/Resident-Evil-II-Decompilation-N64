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

s32 func_800AB3DC_ovl_01(s16 *, s32, u16, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK D_800AE124_ovl_01;
extern s16 D_8014E100;
extern s32 D_80157DB0;
extern M2C_UNK D_80157DC0;

s32 func_800ADFD4_ovl_01(s16 arg0) {
    M2C_UNK *var_s0;
    s32 var_s1;
    s32 var_v0;

    var_s1 = 0;
    D_8014E100 = arg0;
    if (D_80157DB0 > 0) {
        var_s0 = &D_80157DC0;
loop_2:
        var_v0 = func_800AB3DC_ovl_01(&D_8014E100, M2C_FIELD(var_s0, s32 *, 4), M2C_FIELD(var_s0, u16 *, 2), 0xC, &D_800AE124_ovl_01);
        var_s1 += 1;
        if (var_v0 == 0) {
            var_s0 += 8;
            if (var_s1 >= D_80157DB0) {
                goto block_4;
            }
            goto loop_2;
        }
    } else {
block_4:
        var_v0 = 0;
    }
    return var_v0;
}
