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

s32 func_80040BE4_ovl_01(s32, u32);                 /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern s32 D_80139B40;

s32 func_8004D7CC_ovl_01(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_v0;
    u32 temp_a1;
    void **var_s2;
    void *temp_v1;
    void *var_s1;

    var_s2 = &D_800C7650_ovl_01 + 0x19D38;
    if (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x1828C) != var_s2) {
loop_2:
        temp_v1 = *var_s2;
        temp_a0 = M2C_FIELD(temp_v1, s32 *, 0);
        if ((temp_a0 & 1) && (var_s1 = temp_v1 + 0x120, ((temp_a0 & 2) == 0))) {
            D_80139B40 = M2C_FIELD(temp_v1, s32 *, 0x284);
loop_5:
            temp_v0 = D_80139B40 - 1;
            D_80139B40 = temp_v0;
            if (temp_v0 >= 0) {
                temp_s0 = arg1 + M2C_FIELD(var_s1, u16 *, 0x16);
                temp_a0_2 = M2C_FIELD(var_s1, s32 *, 0) - M2C_FIELD(arg0, s16 *, 0);
                temp_a1 = temp_s0 * 2;
                if (temp_a1 < (u32) (temp_a0_2 + temp_s0)) {
                    var_s1 += 0x20;
                    goto loop_5;
                }
                temp_v1_2 = M2C_FIELD(var_s1, s32 *, 8) - M2C_FIELD(arg0, s16 *, 4);
                if (temp_a1 < (u32) (temp_v1_2 + temp_s0)) {
                    var_s1 += 0x20;
                    goto loop_5;
                }
                if ((temp_s0 - func_80040BE4_ovl_01((temp_a0_2 * temp_a0_2) + (temp_v1_2 * temp_v1_2), temp_a1)) <= 0) {
                    var_s1 += 0x20;
                    goto loop_5;
                }
                temp_v1_3 = M2C_FIELD(var_s1, u16 *, 0x1A) + arg2;
                temp_a0_3 = M2C_FIELD(var_s1, s32 *, 4) - M2C_FIELD(arg0, s16 *, 2);
                if ((-temp_v1_3 >= temp_a0_3) || (var_v0 = 1, ((temp_a0_3 < temp_v1_3) == 0))) {
                    var_s1 += 0x20;
                    goto loop_5;
                }
            } else {
                goto block_18;
            }
        } else {
block_18:
            var_s2 += 4;
            if (var_s2 == M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x1828C)) {
                goto block_19;
            }
            goto loop_2;
        }
    } else {
block_19:
        var_v0 = 0;
    }
    return var_v0;
}
