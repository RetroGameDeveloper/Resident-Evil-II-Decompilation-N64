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

s32 func_80083E44_ovl_01(s32 *, void *);            /* extern */
extern M2C_UNK D_800C7650_ovl_01;

u8 func_80074EB4_ovl_01(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp10;
    s32 sp18;
    s16 *temp_s1;
    s16 temp_s2;
    s16 temp_v1;
    s32 var_s2;
    void *var_s0;
    void *var_s1;

    temp_s1 = M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x1827C), s16 **, 0x34);
    temp_s2 = *temp_s1;
    sp10 = arg0;
    var_s1 = temp_s1 + 2 + (temp_s2 * 0xC);
    var_s2 = temp_s2 - 1;
    sp18 = arg1;
    if (var_s2 != -1) {
        var_s0 = (var_s1 + 9) - 0xC;
loop_2:
        temp_v1 = M2C_FIELD(var_s0, s16 *, 1);
        var_s1 -= 0xC;
        if (!(temp_v1 & 0x80) && (arg2 == (temp_v1 & 0x7F))) {
            var_s2 -= 1;
            if (func_80083E44_ovl_01(&sp10, var_s1) != 0) {
                return M2C_FIELD(var_s0, u8 *, 0);
            }
            goto block_7;
        }
        var_s2 -= 1;
block_7:
        var_s0 -= 0xC;
        if (var_s2 == -1) {
            goto block_8;
        }
        goto loop_2;
    }
block_8:
    return 0x1DU;
}
