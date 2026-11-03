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

extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E10D0_ovl_01;

M2C_UNK *func_801665C4_ovl_26(void *arg0) {
    M2C_UNK *var_t0;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a3;

    var_t0 = &D_800E10D0_ovl_01;
    temp_a3 = M2C_FIELD(arg0, s32 *, 0x290);
    temp_a1 = M2C_FIELD(arg0, s32 *, 0x28C);
    M2C_FIELD(arg0, s8 *, 0x2B4) = 0;
    temp_a2 = temp_a3 & 0x3FFFFFFF;
    if ((M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A5C) & 0x10000000) && ((temp_a1 >= 0x1771) || (temp_a2 >= 0x1771)) && ((temp_a3 & 0xC0000000) == 0x40000000) && (temp_a2 < temp_a1)) {
        var_t0 = M2C_FIELD(&D_800C7650_ovl_01, M2C_UNK **, 0x19D3C);
        M2C_FIELD(arg0, s8 *, 0x2B4) = 1;
    }
    return var_t0;
}
