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

s32 func_80040BE4_ovl_01(s32);                      /* extern */
extern s32 D_80139B30;
extern s32 D_80139B34;
extern s32 D_80139B38;

s32 func_8004D3D0_ovl_01(void *arg0, void *arg1) {
    s16 temp_a0_4;
    s16 temp_a0_5;
    s32 temp_a0;
    s32 temp_a0_3;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s2;
    s32 temp_s4;
    s32 temp_t0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 var_a1;
    s32 var_a3;
    s32 var_lo;
    s32 var_lo_2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v0_7;
    u16 temp_s6;
    u32 temp_a0_2;
    void *var_s1;
    void *var_s5;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0);
    temp_v1 = M2C_FIELD(arg1, s32 *, 0);
    var_v0 = 0;
    if (!((temp_a0 | temp_v1) & 2)) {
        if (temp_a0 & temp_v1 & 0x1000) {
            return 0;
        }
        var_v0 = 0;
        if (!(temp_v1 & 4)) {
            var_s5 = arg0 + 0x120;
            D_80139B30 = 0;
            D_80139B34 = M2C_FIELD(arg0, s32 *, 0x284);
loop_5:
            temp_v0 = D_80139B34 - 1;
            D_80139B34 = temp_v0;
            if (temp_v0 >= 0) {
                var_s1 = arg1 + 0x120;
                temp_s6 = M2C_FIELD(var_s5, u16 *, 0x16);
                D_80139B38 = M2C_FIELD(arg1, s32 *, 0x284);
loop_7:
                temp_v0_2 = D_80139B38 - 1;
                D_80139B38 = temp_v0_2;
                if (temp_v0_2 >= 0) {
                    temp_s0 = temp_s6 + M2C_FIELD(var_s1, u16 *, 0x16);
                    temp_s2 = M2C_FIELD(var_s1, s32 *, 0) - M2C_FIELD(var_s5, s32 *, 0);
                    temp_a0_2 = temp_s0 * 2;
                    if (temp_a0_2 < (u32) (temp_s2 + temp_s0)) {
                        var_s1 += 0x20;
                    } else {
                        temp_s4 = M2C_FIELD(var_s1, s32 *, 8) - M2C_FIELD(var_s5, s32 *, 8);
                        if (temp_a0_2 < (u32) (temp_s4 + temp_s0)) {
                            var_s1 += 0x20;
                        } else {
                            temp_v0_3 = func_80040BE4_ovl_01((temp_s2 * temp_s2) + (temp_s4 * temp_s4));
                            temp_s0_2 = temp_s0 - temp_v0_3;
                            if (temp_s0_2 <= 0) {
                                var_s1 += 0x20;
                            } else {
                                temp_a1 = M2C_FIELD(var_s5, s32 *, 4);
                                temp_v1_2 = M2C_FIELD(var_s1, s32 *, 4) - temp_a1;
                                temp_a0_3 = M2C_FIELD(var_s1, u16 *, 0x1A) + M2C_FIELD(var_s5, u16 *, 0x1A);
                                temp_t0 = -temp_a0_3;
                                if ((temp_t0 < temp_v1_2) && (temp_v1_2 < temp_a0_3)) {
                                    temp_a2 = temp_v0_3 + 1;
                                    var_a3 = (s32) (temp_s2 * temp_s0_2) / temp_a2;
                                    temp_v1_3 = (M2C_FIELD(arg1, s16 *, 0x36) + M2C_FIELD(var_s1, s16 *, 0x14)) - temp_a1;
                                    var_a1 = (s32) (temp_s4 * temp_s0_2) / temp_a2;
                                    if ((temp_t0 >= temp_v1_3) || (temp_v1_3 >= temp_a0_3)) {
                                        temp_a0_4 = M2C_FIELD(arg1, s16 *, 0x34);
                                        temp_v1_4 = M2C_FIELD(arg0, s32 *, 0x28);
                                        var_v0_2 = temp_v1_4 < temp_a0_4;
                                        if (temp_a0_4 < temp_v1_4) {
                                            var_lo = temp_s2 * temp_s0_2;
                                            if (temp_v1_4 >= M2C_FIELD(arg1, s32 *, 0x28)) {
                                                var_v0_2 = temp_v1_4 < temp_a0_4;
                                                goto block_24;
                                            }
                                            goto block_26;
                                        }
block_24:
                                        if (var_v0_2 != 0) {
                                            var_lo = temp_s2 * temp_s0_2;
                                            if (M2C_FIELD(arg1, s32 *, 0x28) < temp_v1_4) {
block_26:
                                                temp_lo = (s32) -var_lo / temp_a2;
                                                var_v0_3 = temp_s6 * 2;
                                                if (temp_lo <= 0) {
                                                    var_v0_3 = -var_v0_3;
                                                }
                                                var_a3 = var_v0_3 - temp_lo;
                                            }
                                        }
                                        temp_a0_5 = M2C_FIELD(arg1, s16 *, 0x38);
                                        temp_v1_5 = M2C_FIELD(arg0, s32 *, 0x30);
                                        var_v0_4 = temp_v1_5 < temp_a0_5;
                                        if (temp_a0_5 < temp_v1_5) {
                                            var_lo_2 = temp_s4 * temp_s0_2;
                                            if (temp_v1_5 >= M2C_FIELD(arg1, s32 *, 0x30)) {
                                                var_v0_4 = temp_v1_5 < temp_a0_5;
                                                goto block_32;
                                            }
                                            goto block_34;
                                        }
block_32:
                                        if (var_v0_4 != 0) {
                                            var_lo_2 = temp_s4 * temp_s0_2;
                                            if (M2C_FIELD(arg1, s32 *, 0x30) < temp_v1_5) {
block_34:
                                                temp_lo_2 = (s32) -var_lo_2 / temp_a2;
                                                var_v0_5 = temp_s6 * 2;
                                                if (temp_lo_2 <= 0) {
                                                    var_v0_5 = -var_v0_5;
                                                }
                                                var_a1 = var_v0_5 - temp_lo_2;
                                            }
                                        }
                                    }
                                    if (!(M2C_FIELD(arg0, s32 *, 0) & 0x100000)) {

                                    } else {
                                        var_v0_6 = var_a3;
                                        if (var_a3 < 0) {
                                            var_v0_6 = -var_a3;
                                        }
                                        if (var_v0_6 >= 0x65) {
                                            if (var_a3 >= 0) {
                                                var_a1 = 0x64;
                                            } else {
                                                var_a3 = -0x64;
                                            }
                                        }
                                        var_v0_7 = var_a1;
                                        if (var_a1 < 0) {
                                            var_v0_7 = -var_a1;
                                        }
                                        if (var_v0_7 >= 0x65) {
                                            var_a1 = 0x64;
                                            if (var_a1 < 0) {
                                                var_a1 = -0x64;
                                            }
                                        }
                                    }
                                    D_80139B30 = 1;
                                    M2C_FIELD(arg1, s32 *, 0x28) = (s32) (M2C_FIELD(arg1, s32 *, 0x28) + var_a3);
                                    M2C_FIELD(arg1, s32 *, 0x30) = (s32) (M2C_FIELD(arg1, s32 *, 0x30) + var_a1);
                                    M2C_FIELD(var_s1, s32 *, 0) = (s32) (M2C_FIELD(var_s1, s32 *, 0) + var_a3);
                                    M2C_FIELD(var_s1, s32 *, 8) = (s32) (M2C_FIELD(var_s1, s32 *, 8) + var_a1);
                                    M2C_FIELD(arg1, u8 *, 0xD) = (u8) M2C_FIELD(arg0, u8 *, 0xC);
                                }
                                var_s1 += 0x20;
                            }
                        }
                    }
                    goto loop_7;
                }
                var_s5 += 0x20;
                goto loop_5;
            }
            var_v0 = D_80139B30;
        }
        /* Duplicate return node #56. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
