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

s16 func_800844FC_ovl_01(s16);                      /* extern */
extern M2C_UNK D_800FE1F4_ovl_01;
extern M2C_UNK D_800FE228_ovl_01;
extern M2C_UNK D_8010B1F0_ovl_01;

s32 func_8004A824_ovl_01(s16 arg0, s16 arg1, s16 arg2, u8 **arg3) {
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_lo;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a3;
    s32 var_s3;
    s32 var_t0;
    s32 var_t1;
    s32 var_v1;
    s32 var_v1_2;
    u32 temp_s0_2;
    u32 temp_v0;
    u8 *var_a1;
    u8 *var_s0;
    u8 *var_s1;
    u8 *var_s1_2;
    u8 temp_a0;
    u8 temp_v0_2;
    u8 temp_v1;
    u8 var_v0;
    u8 var_v0_2;
    void *temp_s0;
    void *var_s2;

    var_s1 = *arg3;
    var_s2 = arg3 + 4;
    var_s3 = 0;
    if ((*var_s1 == 0) || (temp_s0_2 = M2C_FIELD(&D_800FE228_ovl_01, u32 *, 0xD008), ((temp_s0_2 < (u32) &D_8010B1F0_ovl_01) == 0))) {
        return 0;
    }
    M2C_FIELD(temp_s0_2, s16 *, 0) = func_800844FC_ovl_01(arg0);
    M2C_FIELD(temp_s0_2, s16 *, 2) = func_800844FC_ovl_01(arg1);
    M2C_FIELD(temp_s0_2, s16 *, 4) = func_800844FC_ovl_01(arg2);
    var_s0 = temp_s0_2 + 6;
    do {
        if (M2C_FIELD(var_s1, u8 *, 0) == 0x25) {
            var_s3 += 1;
            var_s2 += 4;
            var_s1_2 = var_s1 + 1;
            var_v0 = M2C_FIELD(var_s1, u8 *, 1);
            var_a1 = M2C_FIELD(var_s2, u8 **, -4);
            var_a3 = 0;
loop_7:
            if ((u32) (var_v0 - 0x30) < 0xAU) {
                temp_a0 = *var_s1_2;
                var_s1_2 += 1;
                var_v0 = *var_s1_2;
                var_a3 = (var_a3 * 0xA) - 0x30 + temp_a0;
                goto loop_7;
            }
            temp_v1 = *var_s1_2;
            var_s1 = var_s1_2 + 1;
            if (temp_v1 != 0x64) {
                if ((s32) temp_v1 < 0x65) {
                    if (temp_v1 == 0x63) {
                        *var_s0 = (u8) var_a1;
                    } else {
                        var_s2 = arg3 + 4;
                        goto block_36;
                    }
                    goto block_40;
                }
                if (temp_v1 != 0x73) {
                    var_s2 = arg3 + 4;
block_36:
                    var_s3 -= 1;
                    var_a2 = 0;
                    if (var_s3 > 0) {
                        do {
                            var_a2 += 1;
                            var_s2 += 4;
                        } while (var_a2 < var_s3);
                    }
                    var_s1 = (u8 *) var_a2;
                    goto block_39;
                }
                var_v0_2 = *var_a1;
                if (var_v0_2 != 0) {
                    do {
                        var_a1 += 1;
                        *var_s0 = var_v0_2;
                        var_v0_2 = *var_a1;
                        var_s0 += 1;
                    } while (var_v0_2 != 0);
                }
            } else {
                var_t1 = 1;
                if ((s32) var_a1 < 0) {
                    var_t1 = -1;
                    *var_s0 = 0x2D;
                    var_s0 += 1;
                }
                temp_lo = (s32) var_a1 * var_t1;
                var_t0 = 1;
                var_a2_2 = 1;
                if (temp_lo >= 0xA) {
                    do {
                        var_a2_2 *= 0xA;
                        var_t0 += 1;
                    } while ((temp_lo / var_a2_2) >= 0xA);
                }
                if (var_a3 != 0) {
                    var_v1 = var_a3 - var_t0;
                    if (var_t1 == -1) {
                        var_v1_2 = var_v1 - 1;
                        var_a3 -= 1;
                        if (var_v1_2 > 0) {
                            do {
                                M2C_FIELD(var_s0, u8 *, 0) = 0x2D;
                                M2C_FIELD(var_s0, s8 *, -1) = 0x20;
                                var_s0 += 1;
                                var_v1_2 -= 1;
                                var_a3 -= 1;
                            } while (var_v1_2 > 0);
                        }
                    } else if (var_v1 > 0) {
                        do {
                            *var_s0 = 0x20;
                            var_s0 += 1;
                            var_v1 -= 1;
                            var_a3 -= 1;
                        } while (var_v1 > 0);
                    }
                    if (var_a3 != 0) {
                        do {
                            temp_a0_2 = (s32) var_a1 / var_a2_2;
                            var_a1 = (u8 *) ((s32) var_a1 % var_a2_2);
                            var_a2_2 /= 0xA;
                            var_a3 -= 1;
                            *var_s0 = *(&D_800FE1F4_ovl_01 + ((temp_a0_2 % 10) * var_t1));
                            var_s0 += 1;
                        } while (var_a3 != 0);
                    }
                } else {
                    do {
                        temp_a0_3 = (s32) var_a1 / var_a2_2;
                        var_a1 = (u8 *) ((s32) var_a1 % var_a2_2);
                        var_a2_2 /= 0xA;
                        var_t0 -= 1;
                        *var_s0 = *(&D_800FE1F4_ovl_01 + ((temp_a0_3 % 10) * var_t1));
                        var_s0 += 1;
                    } while (var_t0 != 0);
                }
            }
        } else {
block_39:
            temp_v0_2 = *var_s1;
            var_s1 += 1;
            *var_s0 = temp_v0_2;
block_40:
            var_s0 += 1;
        }
    } while (*var_s1 != 0);
    *var_s0 = 0;
    temp_s0 = var_s0 + 1;
    temp_v0 = M2C_FIELD(&D_800FE228_ovl_01, u32 *, 0xD008);
    M2C_FIELD(&D_800FE228_ovl_01, u32 *, 0xD008) = (u32) (((u32) (temp_s0 + 1) >> 1) * 2);
    return (temp_s0 - temp_v0) - 7;
}
