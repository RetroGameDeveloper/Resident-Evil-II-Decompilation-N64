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

extern M2C_UNK D_80158AC0;
extern s32 D_8015AF10;

s32 func_800B35E0_ovl_01(s32 arg0) {
    M2C_UNK *var_a0;
    s32 temp_v1;
    s32 temp_v1_2;
    u32 var_v1;
    void *temp_a0;

loop_1:
    var_v1 = 0;
    var_a0 = &D_80158AC0;
loop_2:
    if ((M2C_FIELD(var_a0, u8 *, 0x1200) == 0) || (var_v1 == arg0) || (M2C_FIELD(var_a0, s32 *, 0x1224) != D_8015AF10)) {
        var_v1 += 1;
        var_a0 += 0x1228;
        if (var_v1 >= 2U) {

        } else {
            goto loop_2;
        }
    }
    if (var_v1 != 2) {
        temp_v1 = D_8015AF10 + 1;
        D_8015AF10 = temp_v1;
        if (temp_v1 == -1) {
            D_8015AF10 = 0;
        }
        goto loop_1;
    }
    temp_a0 = (arg0 * 0x1228) + &D_80158AC0;
    M2C_FIELD(temp_a0, s32 *, 0x1224) = (s32) D_8015AF10;
    temp_v1_2 = D_8015AF10 + 1;
    D_8015AF10 = temp_v1_2;
    if (temp_v1_2 == -1) {
        D_8015AF10 = 0;
    }
    return M2C_FIELD(temp_a0, s32 *, 0x1224);
}
