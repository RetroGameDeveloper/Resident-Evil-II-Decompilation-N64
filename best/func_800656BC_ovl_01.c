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

extern M2C_UNK D_800C7650_ovl_01;

s32 func_800656BC_ovl_01(s32 arg0, s32 arg1) {
    s32 var_v0;
    u16 *temp_v1;
    u16 *var_t0;
    u16 temp_v1_3;
    u16 temp_v1_4;
    u16 var_a3;
    void *temp_v1_2;
    void *var_a2;

    temp_v1 = M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x1827C), u16 **, 0x38);
    var_a3 = *temp_v1;
    temp_v1_2 = temp_v1 + (var_a3 * 0xC);
    var_t0 = temp_v1_2 + 4;
    var_a2 = (temp_v1_2 + 6) - 0xC;
loop_1:
    var_t0 -= 0xC;
    temp_v1_3 = *var_t0;
    var_a3 -= 1;
    if ((u32) ((arg0 - temp_v1_3) & 0xFFFF) < (u32) ((M2C_FIELD(var_a2, u16 *, 2) - temp_v1_3) & 0xFFFF)) {
        temp_v1_4 = M2C_FIELD(var_a2, u16 *, 0);
        var_v0 = var_a3 & 0xFFFF;
        if ((u32) ((arg1 - temp_v1_4) & 0xFFFF) < (u32) ((M2C_FIELD(var_a2, u16 *, 4) - temp_v1_4) & 0xFFFF)) {
            return var_v0;
        }
        goto block_5;
    }
    var_v0 = var_a3 & 0xFFFF;
block_5:
    var_a2 -= 0xC;
    if (var_v0 == 0) {
        return 0xFF;
    }
    goto loop_1;
}
