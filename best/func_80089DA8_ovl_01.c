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

M2C_UNK func_80040E88_ovl_01(void *, void *);       /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_8012BD10_ovl_01;

s32 func_80089DA8_ovl_01(void *arg0, s32 arg1, s32 *arg2, s32 arg3) {
    s16 temp_a0;
    s16 temp_a0_4;
    s16 temp_a2_9;
    s16 temp_v1_5;
    s16 var_v0_2;
    s16 var_v0_4;
    s16 var_v0_5;
    s32 *var_s0;
    s32 *var_s0_2;
    s32 *var_t0;
    s32 temp_a0_5;
    s32 temp_a1;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_s1_4;
    s32 temp_s1_5;
    s32 temp_s1_6;
    s32 temp_s1_7;
    s32 temp_v1;
    s32 var_t1;
    s32 var_v0;
    s32 var_v0_3;
    u16 temp_a1_2;
    u16 temp_s3;
    u16 var_s1;
    u16 var_s1_2;
    u16 var_t2;
    u32 temp_a0_2;
    u32 temp_a0_3;
    u32 temp_a1_3;
    u32 temp_a3;
    u32 temp_v0;
    u32 temp_v0_2;
    u32 temp_v1_2;
    u32 temp_v1_3;
    u32 temp_v1_4;
    u8 temp_t4;
    u8 temp_v0_3;
    void *temp_a2;
    void *temp_a2_2;
    void *temp_a2_3;
    void *temp_a2_4;
    void *temp_a2_5;
    void *temp_a2_6;
    void *temp_a2_7;
    void *temp_a2_8;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_s0_5;
    void *temp_s0_6;
    void *temp_s0_7;
    void *temp_s2;
    void *var_a2;

    temp_s2 = M2C_FIELD(&D_800C7650_ovl_01, void **, 0x18288);
    var_s0 = M2C_FIELD(temp_s2, s32 **, 0x234);
    temp_s3 = M2C_FIELD(((M2C_FIELD(temp_s2, u8 *, 0x1E8) * 4) + arg1), u16 *, 2);
    temp_a2 = arg0 + M2C_FIELD(arg0, u16 *, 0) + (((u32) M2C_FIELD(arg0, u32 *, 4) >> 0x12) * (*arg2 & 0xFFF) * 4);
    M2C_FIELD(var_s0, s32 *, 0x1C) = (s32) M2C_FIELD(temp_a2, s16 *, 2);
    var_t1 = M2C_FIELD(temp_a2, s16 *, 0) * M2C_FIELD(temp_s2, s16 *, 0x27A);
    M2C_FIELD(var_s0, s32 *, 0x20) = (s32) (var_t1 >> 0xC);
    var_t0 = var_s0;
    M2C_FIELD(var_s0, s32 *, 0x24) = (s32) M2C_FIELD(temp_a2, s16 *, 6);
    var_s1 = M2C_FIELD(arg0, u16 *, 6);
    temp_t4 = M2C_FIELD(temp_s2, u8 *, 0x1EA);
    var_t2 = var_s1;
    if (temp_t4 != 0) {
        temp_a0 = M2C_FIELD(var_s0, s16 *, 0x28);
        M2C_FIELD(&D_8012BD10_ovl_01, s32 *, 0) = (s32) temp_a0;
        M2C_FIELD(&D_8012BD10_ovl_01, s32 *, 4) = (s32) M2C_FIELD(var_s0, s16 *, 0x2A);
        M2C_FIELD(&D_8012BD10_ovl_01, s32 *, 8) = (s32) M2C_FIELD(var_s0, s16 *, 0x2C);
        var_t1 = (arg3 & 0xFFFF) * temp_t4;
        temp_a1 = 0x1000 - var_t1;
        M2C_FIELD(var_s0, s32 *, 0x1C) = (s32) ((s32) ((M2C_FIELD(var_s0, s32 *, 0x1C) * temp_a1) + (temp_a0 * var_t1)) >> 0xC);
        M2C_FIELD(var_s0, s32 *, 0x20) = (s32) ((s32) ((M2C_FIELD(var_s0, s32 *, 0x20) * temp_a1) + (M2C_FIELD(&D_8012BD10_ovl_01, s32 *, 4) * var_t1)) >> 0xC);
        M2C_FIELD(var_s0, s32 *, 0x24) = (s32) ((s32) ((M2C_FIELD(var_s0, s32 *, 0x24) * temp_a1) + (M2C_FIELD(&D_8012BD10_ovl_01, s32 *, 8) * var_t1)) >> 0xC);
    }
    var_a2 = temp_a2 + 0xC;
    M2C_FIELD(var_s0, s16 *, 0x28) = (s16) M2C_FIELD(var_s0, u16 *, 0x1E);
    M2C_FIELD(var_s0, s16 *, 0x2A) = (s16) M2C_FIELD(var_s0, u16 *, 0x22);
    M2C_FIELD(var_s0, s16 *, 0x2C) = (s16) M2C_FIELD(var_s0, u16 *, 0x26);
loop_3:
    temp_v1 = M2C_FIELD(var_a2, s32 *, 0);
    M2C_FIELD(var_s0, s32 *, 0x114) = (s32) (((temp_v1 & 0xFFF) << 0x10) | ((u32) (temp_v1 & 0xFFF000) >> 0xC));
    temp_a2_2 = var_a2 + 4;
    temp_s1 = var_s1 - 1;
    M2C_FIELD(var_s0, s16 *, 0x118) = (s16) ((u8) M2C_FIELD(var_a2, s32 *, 0) | ((M2C_FIELD(temp_a2_2, u16 *, 2) & 0xF) << 8));
    temp_s0 = var_s0 + 0x178;
    if (temp_s1 != 0) {
        temp_s1_2 = temp_s1 - 1;
        temp_v0 = M2C_FIELD(var_a2, u32 *, 4);
        M2C_FIELD(temp_s0, s32 *, 0x114) = (s32) (((temp_v0 & 0xFFF0) << 0xC) | ((u32) (temp_v0 & 0x0FFF0000) >> 0x10));
        temp_a2_3 = temp_a2_2 + 4;
        M2C_FIELD(temp_s0, s16 *, 0x118) = (s16) (((u32) M2C_FIELD(var_a2, u32 *, 4) >> 0x1C) | (M2C_FIELD(temp_a2_3, u8 *, 3) * 0x10));
        temp_s0_2 = temp_s0 + 0x178;
        if (temp_s1_2 != 0) {
            temp_v0_2 = M2C_FIELD(temp_a2_2, u32 *, 4);
            temp_a2_4 = temp_a2_3 + 4;
            M2C_FIELD(temp_s0_2, s32 *, 0x114) = (s32) (((temp_v0_2 & 0xFFF00) << 8) | (temp_v0_2 >> 0x14));
            temp_s1_3 = temp_s1_2 - 1;
            M2C_FIELD(temp_s0_2, s16 *, 0x118) = (s16) (M2C_FIELD(temp_a2_4, u16 *, 2) & 0xFFF);
            temp_s0_3 = temp_s0_2 + 0x178;
            if (temp_s1_3 != 0) {
                temp_v1_2 = M2C_FIELD(temp_a2_3, u32 *, 4);
                temp_a2_5 = temp_a2_4 + 4;
                M2C_FIELD(temp_s0_3, s32 *, 0x114) = (s32) (((temp_v1_2 & 0xFFF000) * 0x10) | ((temp_v1_2 >> 0x18) | ((M2C_FIELD(temp_a2_4, u32 *, 4) & 0xF) << 8)));
                temp_s1_4 = temp_s1_3 - 1;
                M2C_FIELD(temp_s0_3, s16 *, 0x118) = (s16) ((u32) (M2C_FIELD(temp_a2_4, u32 *, 4) & 0xFFF0) >> 4);
                temp_s0_4 = temp_s0_3 + 0x178;
                if (temp_s1_4 != 0) {
                    temp_v1_3 = M2C_FIELD(temp_a2_4, u32 *, 4);
                    temp_a2_6 = temp_a2_5 + 4;
                    M2C_FIELD(temp_s0_4, s32 *, 0x114) = (s32) ((temp_v1_3 & 0x0FFF0000) | ((temp_v1_3 >> 0x1C) | (M2C_FIELD(temp_a2_6, u8 *, 3) * 0x10)));
                    temp_s1_5 = temp_s1_4 - 1;
                    M2C_FIELD(temp_s0_4, s16 *, 0x118) = (s16) ((u32) (M2C_FIELD(temp_a2_5, u32 *, 4) & 0xFFF00) >> 8);
                    temp_s0_5 = temp_s0_4 + 0x178;
                    if (temp_s1_5 != 0) {
                        temp_a2_7 = temp_a2_6 + 4;
                        M2C_FIELD(temp_s0_5, s32 *, 0x114) = (s32) ((((u32) M2C_FIELD(temp_a2_5, u32 *, 4) >> 4) & 0x0FFF0000) | (M2C_FIELD(temp_a2_6, u32 *, 4) & 0xFFF));
                        temp_s1_6 = temp_s1_5 - 1;
                        M2C_FIELD(temp_s0_5, s16 *, 0x118) = (s16) ((u32) (M2C_FIELD(temp_a2_6, u32 *, 4) & 0xFFF000) >> 0xC);
                        temp_s0_6 = temp_s0_5 + 0x178;
                        if (temp_s1_6 != 0) {
                            temp_a2_8 = temp_a2_7 + 4;
                            temp_a0_2 = M2C_FIELD(temp_a2_7, u32 *, 4);
                            M2C_FIELD(temp_s0_6, s32 *, 0x114) = (s32) ((((u32) M2C_FIELD(temp_a2_6, u32 *, 4) >> 8) & 0x0FFF0000) | ((temp_a0_2 & 0xF) << 0x18) | ((u32) (temp_a0_2 & 0xFFF0) >> 4));
                            temp_s1_7 = temp_s1_6 - 1;
                            M2C_FIELD(temp_s0_6, s16 *, 0x118) = (s16) ((u32) (M2C_FIELD(temp_a2_7, u32 *, 4) & 0x0FFF0000) >> 0x10);
                            temp_s0_7 = temp_s0_6 + 0x178;
                            if (temp_s1_7 != 0) {
                                var_s1 = temp_s1_7 - 1;
                                temp_a0_3 = M2C_FIELD(temp_a2_8, u32 *, 4);
                                M2C_FIELD(temp_s0_7, s32 *, 0x114) = (s32) ((((u32) M2C_FIELD(temp_a2_7, u32 *, 4) >> 0xC) & 0x0FFF0000) | ((temp_a0_3 & 0xFF) << 0x14) | ((u32) (temp_a0_3 & 0xFFF00) >> 8));
                                var_a2 = temp_a2_8 + 4 + 4;
                                M2C_FIELD(temp_s0_7, s16 *, 0x118) = (s16) ((u32) M2C_FIELD(temp_a2_8, u32 *, 4) >> 0x14);
                                var_s0 = temp_s0_7 + 0x178;
                                if (var_s1 != 0) {
                                    goto loop_3;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    var_s1_2 = var_t2;
    var_s0_2 = var_t0;
    if (temp_t4 == 0) {
        do {
            var_t2 -= 1;
            M2C_FIELD(var_t0, s32 *, 0x58) = (s32) M2C_FIELD(var_t0, s32 *, 0x114);
            M2C_FIELD(var_t0, u16 *, 0x5C) = (u16) M2C_FIELD(var_t0, u16 *, 0x118);
            var_t0 += 0x178;
        } while (var_t2 != 0);
    } else {
        M2C_FIELD(temp_s2, u8 *, 0x1EA) = (u8) (M2C_FIELD(temp_s2, u8 *, 0x1EA) - 1);
        do {
            temp_a2_9 = M2C_FIELD(var_t0, s16 *, 0x114);
            M2C_FIELD(var_t0, s32 *, 0x58) = (s32) (M2C_FIELD(var_t0, s32 *, 0x58) & 0x0FFF0FFF);
            temp_a1_2 = M2C_FIELD(var_t0, u16 *, 0x5C) & 0xFFF;
            M2C_FIELD(var_t0, u16 *, 0x5C) = temp_a1_2;
            temp_a3 = (temp_a2_9 - (s16) M2C_FIELD(var_t0, s32 *, 0x58)) + 0x800;
            temp_a1_3 = (M2C_FIELD(var_t0, s16 *, 0x118) - temp_a1_2) + 0x800;
            temp_v1_4 = (M2C_FIELD(var_t0, s16 *, 0x116) - M2C_FIELD(var_t0, s16 *, 0x5A)) + 0x800;
            if (temp_a3 >= 0x1001U) {
                var_v0_2 = temp_a2_9 + 0x1000;
                if (!(temp_a3 & 0x8000)) {
                    var_v0_2 = temp_a2_9 - 0x1000;
                }
                M2C_FIELD(var_t0, s16 *, 0x114) = var_v0_2;
            }
            var_v0_3 = temp_a1_3 < 0x1001U;
            if (temp_v1_4 >= 0x1001U) {
                temp_a0_4 = M2C_FIELD(var_t0, s16 *, 0x116);
                var_v0_4 = temp_a0_4 + 0x1000;
                if (!(temp_v1_4 & 0x8000)) {
                    var_v0_4 = temp_a0_4 - 0x1000;
                }
                M2C_FIELD(var_t0, s16 *, 0x116) = var_v0_4;
                var_v0_3 = temp_a1_3 < 0x1001U;
            }
            if (var_v0_3 == 0) {
                temp_v1_5 = M2C_FIELD(var_t0, s16 *, 0x118);
                var_v0_5 = temp_v1_5 + 0x1000;
                if (!(temp_a1_3 & 0x8000)) {
                    var_v0_5 = temp_v1_5 - 0x1000;
                }
                M2C_FIELD(var_t0, s16 *, 0x118) = var_v0_5;
            }
            temp_a0_5 = 0x1000 - var_t1;
            var_t2 -= 1;
            M2C_FIELD(var_t0, s32 *, 0x58) = (s16) ((s32) (((s16) M2C_FIELD(var_t0, s32 *, 0x58) * var_t1) + (M2C_FIELD(var_t0, s16 *, 0x114) * temp_a0_5)) >> 0xC);
            M2C_FIELD(var_t0, s16 *, 0x5A) = (s16) ((s32) ((M2C_FIELD(var_t0, s16 *, 0x5A) * var_t1) + (M2C_FIELD(var_t0, s16 *, 0x116) * temp_a0_5)) >> 0xC);
            M2C_FIELD(var_t0, u16 *, 0x5C) = (u16) ((s32) (((s16) M2C_FIELD(var_t0, u16 *, 0x5C) * var_t1) + (M2C_FIELD(var_t0, s16 *, 0x118) * temp_a0_5)) >> 0xC);
            var_t0 += 0x178;
        } while (var_t2 != 0);
    }
    do {
        if (!(*var_s0_2 & 0x200)) {
            func_80040E88_ovl_01(var_s0_2 + 0x58, var_s0_2 + 8);
        }
        var_s1_2 -= 1;
        var_s0_2 += 0x178;
    } while (var_s1_2 != 0);
    temp_v0_3 = M2C_FIELD(temp_s2, u8 *, 0x1E9) + 1;
    M2C_FIELD(temp_s2, u8 *, 0x1E9) = temp_v0_3;
    var_v0 = 0;
    if ((u32) (temp_v0_3 & 0xFF) >= temp_s3) {
        M2C_FIELD(temp_s2, u8 *, 0x1E9) = 0U;
        var_v0 = 1;
    }
    return var_v0;
}
