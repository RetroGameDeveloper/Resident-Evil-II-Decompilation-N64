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

M2C_UNK func_80002F80(void *, u32, s32, M2C_UNK);   /* extern */

s32 func_800037BC(void *arg0) {
    s32 temp_s0;
    s32 temp_s1;
    s32 var_a2;
    u32 var_a1;
    u8 *temp_v1_3;
    u8 *var_a0;
    u8 temp_v1_2;
    void *temp_v1;

    if ((arg0 == NULL) || (temp_v1 = M2C_FIELD(arg0, void **, 0x1C), (temp_v1 == NULL))) {
        return -2;
    }
    if (M2C_FIELD(temp_v1, s32 *, 0) != 0xD) {
        M2C_FIELD(temp_v1, s32 *, 0) = 0xD;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), u32 *, 4) = 0U;
    }
    var_a2 = M2C_FIELD(arg0, s32 *, 4);
    if (var_a2 == 0) {
        return -5;
    }
    var_a0 = M2C_FIELD(arg0, u8 **, 0);
    var_a1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), u32 *, 4);
loop_8:
    if (var_a1 < 4U) {
        temp_v1_2 = *var_a0;
        if (var_a1 >= 2U) {
            if (temp_v1_2 == 0xFF) {
                var_a1 += 1;
            } else {
                goto block_16;
            }
        } else if (temp_v1_2 == 0) {
            var_a1 += 1;
        } else {
block_16:
            var_a1 = 4 - var_a1;
            if (*var_a0 != 0) {
                var_a1 = 0;
            }
        }
        var_a2 -= 1;
        var_a0 += 1;
        if (var_a2 != 0) {
            goto loop_8;
        }
    }
    temp_v1_3 = M2C_FIELD(arg0, u8 **, 0);
    M2C_FIELD(arg0, u8 **, 0) = var_a0;
    M2C_FIELD(arg0, s32 *, 4) = var_a2;
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + (var_a0 - temp_v1_3));
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), u32 *, 4) = var_a1;
    if (var_a1 == 4) {
        temp_s0 = M2C_FIELD(arg0, s32 *, 8);
        temp_s1 = M2C_FIELD(arg0, s32 *, 0x14);
        func_80002F80(arg0, var_a1, var_a2, 4);
        M2C_FIELD(arg0, s32 *, 8) = temp_s0;
        M2C_FIELD(arg0, s32 *, 0x14) = temp_s1;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), s32 *, 0) = 7;
        return 0;
    }
    return -3;
}
