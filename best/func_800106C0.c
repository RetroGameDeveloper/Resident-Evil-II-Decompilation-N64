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

extern char D_80011F00[];

s32 func_800106C0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a1_4;
    s32 temp_a2;
    s32 temp_a2_3;
    s32 temp_a2_6;
    s32 temp_t0;
    s32 temp_t0_2;
    s32 temp_t1;
    s32 temp_t1_2;
    s32 temp_t3;
    s32 var_a0;
    s32 var_a1;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a3;
    s32 var_t0;
    s32 var_t1;
    s32 var_t2;
    s32 var_t3;
    s32 var_t7;
    s32 var_t8;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v1_2;
    s32 var_v1_6;
    u32 temp_a0;
    u32 temp_a0_2;
    u32 temp_a0_3;
    u32 temp_a2_2;
    u32 temp_a2_4;
    u32 temp_a2_5;
    u32 temp_a2_7;
    u32 temp_a3;
    u32 temp_a3_2;
    u32 temp_hi;
    u32 temp_lo;
    u32 temp_lo_2;
    u32 temp_lo_3;
    u32 temp_lo_4;
    u32 temp_lo_5;
    u32 temp_lo_6;
    u32 temp_lo_7;
    u32 temp_lo_8;
    u32 temp_t0_3;
    u32 temp_v1;
    u32 temp_v1_2;
    u32 temp_v1_3;
    u32 temp_v1_4;
    u32 temp_v1_5;
    u32 temp_v1_6;
    u32 temp_v1_7;
    u32 temp_v1_8;
    u32 var_a0_2;
    u32 var_a0_3;
    u32 var_a0_4;
    u32 var_a2_3;
    u32 var_a2_4;
    u32 var_a3_2;
    u32 var_a3_3;
    u32 var_t0_2;
    u32 var_t2_2;
    u32 var_v1;
    u32 var_v1_3;
    u32 var_v1_4;
    u32 var_v1_5;
    u32 var_v1_7;
    u32 var_v1_8;

    var_a0 = arg0;
    var_a1 = arg1;
    var_a2 = arg2;
    var_a3 = arg3;
    var_t8 = 0;
    if (var_a0 < 0) {
        var_t8 = -1;
        temp_t1 = -var_a1;
        var_a0 = -var_a0 - (temp_t1 != 0);
        var_a1 = temp_t1;
    }
    var_t1 = var_a3;
    if (var_a2 < 0) {
        var_t8 = ~var_t8;
        temp_t3 = -var_a3;
        var_a2 = -var_a2 - (temp_t3 != 0);
        var_a3 = temp_t3;
        var_t1 = var_a3;
    }
    var_t3 = var_a1;
    if (var_a2 == 0) {
        if ((u32) var_a0 < (u32) var_t1) {
            if ((u32) var_t1 <= 0xFFFFU) {
                var_t0 = ((u32) var_t1 >= 0x100U) * 8;
            } else {
                var_t0 = 0x18;
                if ((u32) var_t1 <= 0xFFFFFFU) {
                    var_t0 = 0x10;
                }
            }
            temp_a2 = 0x20 - (*(D_80011F00 + ((u32) var_a3 >> var_t0)) + var_t0);
            if (temp_a2 != 0) {
                var_t1 <<= temp_a2;
                var_a0 = (var_a0 << temp_a2) | ((u32) var_t3 >> (0x20 - temp_a2));
                var_t3 <<= temp_a2;
            }
            temp_a2_2 = (u32) var_t1 >> 0x10;
            var_a3_2 = (u32) var_a0 / temp_a2_2;
            temp_t0 = var_t1 & 0xFFFF;
            temp_lo = var_a3_2 * temp_t0;
            var_v1 = (((u32) var_a0 % temp_a2_2) << 0x10) | ((u32) var_t3 >> 0x10);
            if (var_v1 < temp_lo) {
                var_v1 += var_t1;
                var_a3_2 -= 1;
                if ((var_v1 >= (u32) var_t1) && (var_v1 < temp_lo)) {
                    var_a3_2 -= 1;
                    var_v1 += var_t1;
                }
            }
            temp_v1 = var_v1 - temp_lo;
            var_a0_2 = temp_v1 / temp_a2_2;
            temp_lo_2 = var_a0_2 * temp_t0;
            temp_v1_2 = ((temp_v1 % temp_a2_2) << 0x10) | (var_t3 & 0xFFFF);
            temp_v1_3 = temp_v1_2 + var_t1;
            if (temp_v1_2 < temp_lo_2) {
                var_a0_2 -= 1;
                if ((temp_v1_3 >= (u32) var_t1) && (temp_v1_3 < temp_lo_2)) {
                    var_a0_2 -= 1;
                }
            }
            var_a2_2 = (var_a3_2 << 0x10) | var_a0_2;
            goto block_73;
        }
        var_v0_2 = (u32) var_t1 > 0xFFFFU;
        if (var_t1 == 0) {
            var_t1 = (s32) (1U / (u32) var_a2);
            var_v0_2 = (u32) var_t1 > 0xFFFFU;
        }
        if (var_v0_2 == 0) {
            var_v1_2 = ((u32) var_t1 >= 0x100U) * 8;
        } else {
            var_v1_2 = 0x18;
            if ((u32) var_t1 <= 0xFFFFFFU) {
                var_v1_2 = 0x10;
            }
        }
        temp_a2_3 = 0x20 - (*(D_80011F00 + ((u32) var_t1 >> var_v1_2)) + var_v1_2);
        temp_a1 = 0x20 - temp_a2_3;
        if (temp_a2_3 == 0) {
            var_a0_3 = var_a0 - var_t1;
            var_t2 = 1;
        } else {
            var_t1 <<= temp_a2_3;
            temp_a3 = (u32) var_a0 >> temp_a1;
            temp_a0 = (var_a0 << temp_a2_3) | ((u32) var_t3 >> temp_a1);
            var_t3 <<= temp_a2_3;
            temp_a2_4 = (u32) var_t1 >> 0x10;
            var_t0_2 = temp_a3 / temp_a2_4;
            temp_a1_2 = var_t1 & 0xFFFF;
            temp_lo_3 = var_t0_2 * temp_a1_2;
            var_v1_3 = ((temp_a3 % temp_a2_4) << 0x10) | (temp_a0 >> 0x10);
            if (var_v1_3 < temp_lo_3) {
                var_v1_3 += var_t1;
                var_t0_2 -= 1;
                if ((var_v1_3 >= (u32) var_t1) && (var_v1_3 < temp_lo_3)) {
                    var_t0_2 -= 1;
                    var_v1_3 += var_t1;
                }
            }
            temp_v1_4 = var_v1_3 - temp_lo_3;
            var_a2_3 = temp_v1_4 / temp_a2_4;
            temp_lo_4 = var_a2_3 * temp_a1_2;
            var_v1_4 = ((temp_v1_4 % temp_a2_4) << 0x10) | (temp_a0 & 0xFFFF);
            var_v0_3 = var_t0_2 << 0x10;
            if (var_v1_4 < temp_lo_4) {
                var_v1_4 += var_t1;
                var_a2_3 -= 1;
                if (var_v1_4 >= (u32) var_t1) {
                    var_v0_3 = var_t0_2 << 0x10;
                    if (var_v1_4 < temp_lo_4) {
                        var_a2_3 -= 1;
                        var_v1_4 += var_t1;
                        goto block_37;
                    }
                } else {
block_37:
                    var_v0_3 = var_t0_2 << 0x10;
                }
            }
            var_t2 = var_v0_3 | var_a2_3;
            var_a0_3 = var_v1_4 - temp_lo_4;
        }
        temp_a2_5 = (u32) var_t1 >> 0x10;
        var_a3_3 = var_a0_3 / temp_a2_5;
        temp_t0_2 = var_t1 & 0xFFFF;
        temp_lo_5 = var_a3_3 * temp_t0_2;
        var_v1_5 = ((var_a0_3 % temp_a2_5) << 0x10) | ((u32) var_t3 >> 0x10);
        if (var_v1_5 < temp_lo_5) {
            var_v1_5 += var_t1;
            var_a3_3 -= 1;
            if ((var_v1_5 >= (u32) var_t1) && (var_v1_5 < temp_lo_5)) {
                var_a3_3 -= 1;
                var_v1_5 += var_t1;
            }
        }
        temp_v1_5 = var_v1_5 - temp_lo_5;
        var_a0_4 = temp_v1_5 / temp_a2_5;
        temp_lo_6 = var_a0_4 * temp_t0_2;
        temp_v1_6 = ((temp_v1_5 % temp_a2_5) << 0x10) | (var_t3 & 0xFFFF);
        temp_v1_7 = temp_v1_6 + var_t1;
        if (temp_v1_6 < temp_lo_6) {
            var_a0_4 -= 1;
            if ((temp_v1_7 >= (u32) var_t1) && (temp_v1_7 < temp_lo_6)) {
                var_a0_4 -= 1;
            }
        }
        var_a2_2 = (var_a3_3 << 0x10) | var_a0_4;
        goto block_74;
    }
    if ((u32) var_a0 < (u32) var_a2) {
        var_a2_2 = 0;
        goto block_73;
    }
    if ((u32) var_a2 <= 0xFFFFU) {
        var_v1_6 = ((u32) var_a2 >= 0x100U) * 8;
    } else {
        var_v1_6 = 0x18;
        if ((u32) var_a2 <= 0xFFFFFFU) {
            var_v1_6 = 0x10;
        }
    }
    temp_a2_6 = 0x20 - (*(D_80011F00 + ((u32) var_a2 >> var_v1_6)) + var_v1_6);
    if (temp_a2_6 != 0) {
        temp_a1_3 = 0x20 - temp_a2_6;
        temp_t0_3 = (var_a2 << temp_a2_6) | ((u32) var_t1 >> temp_a1_3);
        temp_t1_2 = var_t1 << temp_a2_6;
        temp_a3_2 = (u32) var_a0 >> temp_a1_3;
        temp_a0_2 = (var_a0 << temp_a2_6) | ((u32) var_t3 >> temp_a1_3);
        temp_a2_7 = temp_t0_3 >> 0x10;
        var_t2_2 = temp_a3_2 / temp_a2_7;
        temp_a1_4 = temp_t0_3 & 0xFFFF;
        temp_lo_7 = var_t2_2 * temp_a1_4;
        var_v1_7 = ((temp_a3_2 % temp_a2_7) << 0x10) | (temp_a0_2 >> 0x10);
        if (var_v1_7 < temp_lo_7) {
            var_v1_7 += temp_t0_3;
            var_t2_2 -= 1;
            if ((var_v1_7 >= temp_t0_3) && (var_v1_7 < temp_lo_7)) {
                var_t2_2 -= 1;
                var_v1_7 += temp_t0_3;
            }
        }
        temp_v1_8 = var_v1_7 - temp_lo_7;
        var_a2_4 = temp_v1_8 / temp_a2_7;
        temp_lo_8 = var_a2_4 * temp_a1_4;
        var_v1_8 = ((temp_v1_8 % temp_a2_7) << 0x10) | (temp_a0_2 & 0xFFFF);
        var_v0_4 = var_t2_2 << 0x10;
        if (var_v1_8 < temp_lo_8) {
            var_v1_8 += temp_t0_3;
            var_a2_4 -= 1;
            if (var_v1_8 >= temp_t0_3) {
                var_v0_4 = var_t2_2 << 0x10;
                if (var_v1_8 < temp_lo_8) {
                    var_a2_4 -= 1;
                    var_v1_8 += temp_t0_3;
                    goto block_68;
                }
            } else {
block_68:
                var_v0_4 = var_t2_2 << 0x10;
            }
        }
        var_a2_2 = var_v0_4 | var_a2_4;
        temp_a0_3 = var_v1_8 - temp_lo_8;
        temp_hi = MULTU_HI(var_a2_2, temp_t1_2);
        if (temp_a0_3 >= temp_hi) {
            var_t2 = 0;
            if (temp_hi == temp_a0_3) {
                var_t7 = var_a2_2;
                if ((u32) (var_t3 << temp_a2_6) < (u32) (var_a2_2 * temp_t1_2)) {
                    goto block_72;
                }
            } else {
                goto block_74;
            }
        } else {
block_72:
            var_a2_2 -= 1;
            goto block_73;
        }
    } else {
        var_a2_2 = 1;
        if ((u32) var_a2 >= (u32) var_a0) {
            var_a2_2 = 0;
            if ((u32) var_t3 >= (u32) var_t1) {
                var_a2_2 = 1;
            }
        }
block_73:
        var_t2 = 0;
block_74:
        var_t7 = var_a2_2;
    }
    var_v0 = var_t2;
    if (var_t8 != 0) {
        var_v0 = -var_v0 - (-var_t7 != 0);
    }
    return var_v0;
}
