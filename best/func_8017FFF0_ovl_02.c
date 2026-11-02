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

extern M2C_UNK D_801853E0_ovl_02;
extern s32 D_801853E4_ovl_02;
extern s32 D_801853E8_ovl_02;

s32 func_8017FFF0_ovl_02(s32 arg0) {
    s32 temp_v0;
    s32 var_a1;

    var_a1 = arg0;
    if (var_a1 & 0x3F) {
        var_a1 = (var_a1 + 0x40) & ~0xBF;
    }
    if ((u32) (var_a1 + D_801853E4_ovl_02) > 0x25800U) {
        D_801853E4_ovl_02 = 0;
        D_801853E8_ovl_02 += 1;
    }
    temp_v0 = D_801853E4_ovl_02;
    D_801853E4_ovl_02 = temp_v0 + var_a1;
    return *((D_801853E8_ovl_02 * 4) + &D_801853E0_ovl_02) + temp_v0;
}
