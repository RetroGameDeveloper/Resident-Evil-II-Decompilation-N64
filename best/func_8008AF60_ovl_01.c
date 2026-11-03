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

s32 func_800072E0();                                /* extern */
M2C_UNK func_80007300(s32, u32, s32 *);             /* extern */
extern u32 D_8012BD20_ovl_01;
extern s32 D_8012BD24_ovl_01;

s32 func_8008AF60_ovl_01(s32 arg0) {
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_v1;
    s32 var_v0;

    temp_a0 = func_800072E0();
    temp_v1 = D_8012BD24_ovl_01 - arg0;
    D_8012BD24_ovl_01 = temp_v1;
    switch (D_8012BD20_ovl_01) {                    /* irregular */
    case 1:
        var_v0 = -4;
block_9:
        D_8012BD24_ovl_01 = temp_v1 & var_v0;
        break;
    case 2:
        var_v0 = -8;
        goto block_9;
    case 3:
        var_v0 = -0xF;
        goto block_9;
    }
    temp_s0 = D_8012BD24_ovl_01;
    func_80007300(temp_a0, D_8012BD20_ovl_01, &D_8012BD24_ovl_01);
    return temp_s0;
}
