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

extern M2C_UNK D_800119C0;

s32 func_80006100(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a1_4;
    s32 temp_a2;
    s32 temp_a2_3;
    s32 temp_a2_6;
    s32 temp_a2_8;
    s32 temp_t0;
    s32 temp_t0_2;
    s32 temp_t1;
    s32 var_t2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    s32 var_v1_3;
    s32 var_v1_7;
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
    u32 var_a0;
    u32 var_a0_2;
    u32 var_a2;
    u32 var_a2_2;
    u32 var_t0;
    u32 var_t1;
    u32 var_t2_2;
    u32 var_t3;
    u32 var_v1_2;
    u32 var_v1_4;
    u32 var_v1_5;
    u32 var_v1_6;
    u32 var_v1_8;
    u32 var_v1_9;

    var_a0 = arg0;
    var_t1 = arg3;
    var_t3 = arg1;
    if (arg2 == 0) {
        if (var_a0 < var_t1) {
            if (var_t1 <= 0xFFFFU) {
                var_v1 = (var_t1 >= 0x100U) * 8;
            } else {
                var_v1 = 0x18;
                if (var_t1 <= 0xFFFFFFU) {
                    var_v1 = 0x10;
                }
            }
            temp_a2 = 0x20 - (*(&D_800119C0 + (arg3 >> var_v1)) + var_v1);
            if (temp_a2 != 0) {
                var_t1 <<= temp_a2;
                var_a0 = (var_a0 << temp_a2) | (var_t3 >> (0x20 - temp_a2));
                var_t3 <<= temp_a2;
            }
            temp_a2_2 = var_t1 >> 0x10;
            temp_t0 = var_t1 & 0xFFFF;
            temp_lo = (var_a0 / temp_a2_2) * temp_t0;
            var_v1_2 = ((var_a0 % temp_a2_2) << 0x10) | (var_t3 >> 0x10);
            if (var_v1_2 < temp_lo) {
                var_v1_2 += var_t1;
                if ((var_v1_2 >= var_t1) && (var_v1_2 < temp_lo)) {
                    var_v1_2 += var_t1;
                }
            }
            temp_v1 = var_v1_2 - temp_lo;
            temp_lo_2 = (temp_v1 / temp_a2_2) * temp_t0;
            temp_v1_2 = ((temp_v1 % temp_a2_2) << 0x10) | (var_t3 & 0xFFFF);
            if (temp_v1_2 < temp_lo_2) {
                temp_v1_3 = temp_v1_2 + var_t1;
                if ((temp_v1_3 >= var_t1) && (temp_v1_3 < temp_lo_2)) {

                }
            }
            goto block_71;
        }
        var_v0 = var_t1 > 0xFFFFU;
        if (var_t1 == 0) {
            var_t1 = 1U / arg2;
            var_v0 = var_t1 > 0xFFFFU;
        }
        if (var_v0 == 0) {
            var_v1_3 = (var_t1 >= 0x100U) * 8;
        } else {
            var_v1_3 = 0x18;
            if (var_t1 <= 0xFFFFFFU) {
                var_v1_3 = 0x10;
            }
        }
        temp_a2_3 = 0x20 - (*(&D_800119C0 + (var_t1 >> var_v1_3)) + var_v1_3);
        temp_a1 = 0x20 - temp_a2_3;
        if (temp_a2_3 == 0) {
            var_a0_2 = var_a0 - var_t1;
            var_t2 = 1;
        } else {
            var_t1 <<= temp_a2_3;
            temp_a3 = var_a0 >> temp_a1;
            temp_a0 = (var_a0 << temp_a2_3) | (var_t3 >> temp_a1);
            var_t3 <<= temp_a2_3;
            temp_a2_4 = var_t1 >> 0x10;
            var_t0 = temp_a3 / temp_a2_4;
            temp_a1_2 = var_t1 & 0xFFFF;
            temp_lo_3 = var_t0 * temp_a1_2;
            var_v1_4 = ((temp_a3 % temp_a2_4) << 0x10) | (temp_a0 >> 0x10);
            if (var_v1_4 < temp_lo_3) {
                var_v1_4 += var_t1;
                var_t0 -= 1;
                if ((var_v1_4 >= var_t1) && (var_v1_4 < temp_lo_3)) {
                    var_t0 -= 1;
                    var_v1_4 += var_t1;
                }
            }
            temp_v1_4 = var_v1_4 - temp_lo_3;
            var_a2 = temp_v1_4 / temp_a2_4;
            temp_lo_4 = var_a2 * temp_a1_2;
            var_v1_5 = ((temp_v1_4 % temp_a2_4) << 0x10) | (temp_a0 & 0xFFFF);
            var_v0_2 = var_t0 << 0x10;
            if (var_v1_5 < temp_lo_4) {
                var_v1_5 += var_t1;
                var_a2 -= 1;
                if (var_v1_5 >= var_t1) {
                    var_v0_2 = var_t0 << 0x10;
                    if (var_v1_5 < temp_lo_4) {
                        var_a2 -= 1;
                        var_v1_5 += var_t1;
                        goto block_34;
                    }
                } else {
block_34:
                    var_v0_2 = var_t0 << 0x10;
                }
            }
            var_t2 = var_v0_2 | var_a2;
            var_a0_2 = var_v1_5 - temp_lo_4;
        }
        temp_a2_5 = var_t1 >> 0x10;
        temp_t0_2 = var_t1 & 0xFFFF;
        temp_lo_5 = (var_a0_2 / temp_a2_5) * temp_t0_2;
        var_v1_6 = ((var_a0_2 % temp_a2_5) << 0x10) | (var_t3 >> 0x10);
        if (var_v1_6 < temp_lo_5) {
            var_v1_6 += var_t1;
            if ((var_v1_6 >= var_t1) && (var_v1_6 < temp_lo_5)) {
                var_v1_6 += var_t1;
            }
        }
        temp_v1_5 = var_v1_6 - temp_lo_5;
        temp_lo_6 = (temp_v1_5 / temp_a2_5) * temp_t0_2;
        temp_v1_6 = ((temp_v1_5 % temp_a2_5) << 0x10) | (var_t3 & 0xFFFF);
        if (temp_v1_6 < temp_lo_6) {
            temp_v1_7 = temp_v1_6 + var_t1;
            if ((temp_v1_7 >= var_t1) && (temp_v1_7 < temp_lo_6)) {

            }
        }
    } else {
        if (var_a0 < arg2) {
            goto block_71;
        }
        if (arg2 <= 0xFFFFU) {
            var_v1_7 = (arg2 >= 0x100U) * 8;
        } else {
            var_v1_7 = 0x18;
            if (arg2 <= 0xFFFFFFU) {
                var_v1_7 = 0x10;
            }
        }
        temp_a2_6 = 0x20 - (*(&D_800119C0 + (arg2 >> var_v1_7)) + var_v1_7);
        if (temp_a2_6 != 0) {
            temp_a1_3 = 0x20 - temp_a2_6;
            temp_t0_3 = (arg2 << temp_a2_6) | (var_t1 >> temp_a1_3);
            temp_t1 = var_t1 << temp_a2_6;
            temp_a3_2 = var_a0 >> temp_a1_3;
            temp_a0_2 = (var_a0 << temp_a2_6) | (var_t3 >> temp_a1_3);
            temp_a2_7 = temp_t0_3 >> 0x10;
            var_t2_2 = temp_a3_2 / temp_a2_7;
            temp_a1_4 = temp_t0_3 & 0xFFFF;
            temp_lo_7 = var_t2_2 * temp_a1_4;
            var_v1_8 = ((temp_a3_2 % temp_a2_7) << 0x10) | (temp_a0_2 >> 0x10);
            if (var_v1_8 < temp_lo_7) {
                var_v1_8 += temp_t0_3;
                var_t2_2 -= 1;
                if ((var_v1_8 >= temp_t0_3) && (var_v1_8 < temp_lo_7)) {
                    var_t2_2 -= 1;
                    var_v1_8 += temp_t0_3;
                }
            }
            temp_v1_8 = var_v1_8 - temp_lo_7;
            var_a2_2 = temp_v1_8 / temp_a2_7;
            temp_lo_8 = var_a2_2 * temp_a1_4;
            var_v1_9 = ((temp_v1_8 % temp_a2_7) << 0x10) | (temp_a0_2 & 0xFFFF);
            var_v0_3 = var_t2_2 << 0x10;
            if (var_v1_9 < temp_lo_8) {
                var_v1_9 += temp_t0_3;
                var_a2_2 -= 1;
                if (var_v1_9 >= temp_t0_3) {
                    var_v0_3 = var_t2_2 << 0x10;
                    if (var_v1_9 < temp_lo_8) {
                        var_a2_2 -= 1;
                        var_v1_9 += temp_t0_3;
                        goto block_66;
                    }
                } else {
block_66:
                    var_v0_3 = var_t2_2 << 0x10;
                }
            }
            temp_a2_8 = var_v0_3 | var_a2_2;
            temp_a0_3 = var_v1_9 - temp_lo_8;
            temp_hi = MULTU_HI(temp_a2_8, temp_t1);
            if (temp_a0_3 >= temp_hi) {
                var_t2 = 0;
                if (temp_hi == temp_a0_3) {
                    if ((u32) (var_t3 << temp_a2_6) < (u32) (temp_a2_8 * temp_t1)) {
                        goto block_70;
                    }
                }
            } else {
block_70:
                goto block_71;
            }
        } else {
            if ((arg2 >= var_a0) && (var_t3 >= var_t1)) {

            }
block_71:
            var_t2 = 0;
        }
    }
    return var_t2;
}
