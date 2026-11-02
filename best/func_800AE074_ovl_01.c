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

M2C_UNK func_800A5C7C_ovl_01(s32);                  /* extern */
extern s32 D_8014E10C;
extern s32 D_8014E170;
extern s32 D_80152180;
extern s32 D_80152990;
extern s32 D_801535A0;
extern M2C_UNK D_801535B0;
extern s32 D_80157DB0;

void func_800AE074_ovl_01(void) {
    M2C_UNK *var_v1;
    s32 var_a0;

    var_a0 = 0;
    var_v1 = &D_801535B0;
    D_8014E10C = 0;
    D_8014E170 = 0;
    D_80152180 = 0;
    D_80152990 = 0;
    D_80157DB0 = 0;
    D_801535A0 = 0;
    do {
        M2C_FIELD(var_v1, s16 *, 0) = 0;
        M2C_FIELD(var_v1, s16 *, 2) = 0;
        var_a0 += 1;
        var_v1 += 4;
    } while (var_a0 < 0x200);
    func_800A5C7C_ovl_01(var_a0);
}
