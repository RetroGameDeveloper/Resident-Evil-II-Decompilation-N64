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

s16 func_80032D44_ovl_01(s16, s16, s16, s16);       /* extern */
s32 func_8005B960_ovl_01(void *, s16, void *, void *); /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern void *D_800E1390_ovl_01;
extern M2C_UNK D_801104D8_ovl_01;

void *func_80060A0C_ovl_01(void *arg0, u16 arg1, void *arg2, u8 arg3) {
    u16 sp16;
    s32 sp18;
    s32 sp1C;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_5;
    s32 temp_v1_2;
    s32 temp_v1_4;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    u16 temp_v1;
    u32 temp_s4;
    u8 temp_a0_4;
    u8 temp_v1_3;
    void **var_s2;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_s0;
    void *var_s1;
    void *var_v0;

    var_s1 = NULL;
    sp16 = arg1;
    if (M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x19A76) != 0) {
        var_s2 = &D_800E1390_ovl_01;
        sp18 = arg3 & 0x10000;
        temp_s4 = arg3 >> 0x1C;
        sp1C = temp_s4 * 3;
loop_2:
        temp_s0 = *var_s2;
        if ((M2C_FIELD(temp_s0, s32 *, 0) & 1) && (M2C_FIELD(temp_s0, u8 *, 0x26F) == 0) && (M2C_FIELD(temp_s0, s16 *, 0x1F2) >= 0) && !(M2C_FIELD(temp_s0, u16 *, 0x1AA) & 0xC000)) {
            M2C_FIELD(temp_s0, u16 *, 0x26C) = (u16) (M2C_FIELD(temp_s0, u16 *, 0x26C) & 0xFF00);
            temp_v1 = M2C_FIELD(temp_s0, u16 *, 0x13A);
            if ((u32) ((M2C_FIELD(temp_s0, s32 *, 0x2C) + M2C_FIELD(temp_s0, s16 *, 0x134) + 0x64 + temp_v1) - M2C_FIELD(arg0, s32 *, 4)) < (u32) ((temp_v1 + 0x64) * 2)) {
                M2C_FIELD(arg2, u16 *, 6) = (u16) (M2C_FIELD(arg2, u16 *, 6) + ((s32) (M2C_FIELD(temp_s0, u16 *, 0x28A) << 0x10) >> 0x12));
                M2C_FIELD(arg2, u16 *, 4) = (u16) (M2C_FIELD(arg2, u16 *, 4) + ((s32) (M2C_FIELD(temp_s0, u16 *, 0x28A) << 0x10) >> 0x12));
                if (func_8005B960_ovl_01(arg0, (s16) sp16, temp_s0 + 0x120, arg2) != 0) {
                    var_s1 = temp_s0;
                    M2C_FIELD(var_s1, u16 *, 0x26C) = (u16) (M2C_FIELD(temp_s0, u16 *, 0x26C) | 1);
                    if (sp18 != 0) {
                        temp_a1 = *(((M2C_FIELD(var_s1, u8 *, 8) - 0x10) * 4) + &D_801104D8_ovl_01) + (((arg3 & 0xFFFF) * 0x14) - 0x14);
                        temp_v1_2 = M2C_FIELD(var_s1, s32 *, 4);
                        M2C_FIELD(var_s1, s16 *, 0x1F2) = (s16) ((u16) M2C_FIELD(var_s1, s16 *, 0x1F2) - (((u32) M2C_FIELD(temp_a1, u32 *, 0) >> (temp_s4 * 0xA)) & 0x3FF));
                        if (temp_v1_2 != 0x020C0000) {
                            M2C_FIELD(var_s1, s32 *, 0x298) = temp_v1_2;
                        }
                        M2C_FIELD(var_s1, s32 *, 4) = 0x02000000;
                        if (M2C_FIELD(var_s1, s16 *, 0x1F2) < 0) {
                            M2C_FIELD(var_s1, s32 *, 4) = 0x03000000;
                        }
                        M2C_FIELD(var_s1, u8 *, 0x26E) = 1U;
                        if (arg3 & 0x20000) {
                            temp_a0 = (s32) ((u16) M2C_FIELD(var_s1, s16 *, 0x134) << 0x10) >> 0x11;
                            if ((M2C_FIELD(var_s1, s32 *, 0x2C) + temp_a0) < M2C_FIELD(arg0, s32 *, 4)) {
                                M2C_FIELD(var_s1, u8 *, 0x26E) = 0U;
                            }
                            if ((M2C_FIELD(var_s1, s32 *, 0) & 0x10000000) && (M2C_FIELD(arg0, s32 *, 4) < (M2C_FIELD(var_s1, s32 *, 0x2C) + (temp_a0 * 2) + temp_a0))) {
                                M2C_FIELD(var_s1, u8 *, 0x26E) = 2U;
                            }
                        }
                        M2C_FIELD(var_s1, u8 *, 5) = arg3;
                        temp_v1_3 = M2C_FIELD(var_s1, u8 *, 0x26F) & 0x80;
                        M2C_FIELD(var_s1, u8 *, 0x26E) = (u8) (M2C_FIELD(var_s1, u8 *, 0x26E) + sp1C);
                        M2C_FIELD(var_s1, u8 *, 0x26F) = temp_v1_3;
                        M2C_FIELD(var_s1, u8 *, 0x26F) = (u8) (temp_v1_3 | (((u32) M2C_FIELD(temp_a1, u32 *, 4) >> 9) & 0x7F));
                        temp_a0_2 = func_80032D44_ovl_01(M2C_FIELD(arg0, s16 *, 2), M2C_FIELD(arg0, s16 *, 0xA), M2C_FIELD(var_s1, s16 *, 0x2A), M2C_FIELD(var_s1, s16 *, 0x32)) - M2C_FIELD(var_s1, s16 *, 0x66);
                        var_v0_2 = temp_a0_2 + 0x600;
                        if (((temp_a0_2 + 0x400) & 0xFFF) < 0x800) {
                            M2C_FIELD(var_s1, u16 *, 0x26C) = (u16) (M2C_FIELD(var_s1, u16 *, 0x26C) | 0x20);
                            var_v0_2 = temp_a0_2 + 0x600;
                        }
                        var_v0_3 = temp_a0_2 - 0x200;
                        if ((var_v0_2 & 0xFFF) < 0x400) {
                            M2C_FIELD(var_s1, u16 *, 0x26C) = (u16) (M2C_FIELD(var_s1, u16 *, 0x26C) | 0x40);
                            var_v0_3 = temp_a0_2 - 0x200;
                        }
                        if ((var_v0_3 & 0xFFF) < 0x400) {
                            M2C_FIELD(var_s1, u16 *, 0x26C) = (u16) (M2C_FIELD(var_s1, u16 *, 0x26C) | 0x80);
                        }
                        goto block_26;
                    }
                    goto block_29;
                }
                M2C_FIELD(arg2, u16 *, 6) = (u16) (M2C_FIELD(arg2, u16 *, 6) - ((s32) (M2C_FIELD(temp_s0, u16 *, 0x28A) << 0x10) >> 0x12));
                M2C_FIELD(arg2, u16 *, 4) = (u16) (M2C_FIELD(arg2, u16 *, 4) - ((s32) (M2C_FIELD(temp_s0, u16 *, 0x28A) << 0x10) >> 0x12));
                goto block_26;
            }
        }
block_26:
        var_s2 += 4;
        if (var_s2 == M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x1828C)) {
            if (arg3 & 0x10000) {
                goto block_28;
            }
block_29:
            if (var_s1 != NULL) {
                temp_a1_2 = *(((M2C_FIELD(var_s1, u8 *, 8) - 0x10) * 4) + &D_801104D8_ovl_01) + (((arg3 & 0xFFFF) * 0x14) - 0x14);
                temp_v1_4 = M2C_FIELD(var_s1, s32 *, 4);
                M2C_FIELD(var_s1, u16 *, 0x1F2) = (u16) (M2C_FIELD(var_s1, u16 *, 0x1F2) - (((u32) M2C_FIELD(temp_a1_2, u32 *, 0) >> (temp_s4 * 0xA)) & 0x3FF));
                if ((temp_v1_4 != 0x020C0000) && (temp_v1_4 != 0x30C00000)) {
                    M2C_FIELD(var_s1, s32 *, 0x298) = temp_v1_4;
                }
                M2C_FIELD(var_s1, s32 *, 4) = 0x02000000;
                if ((s16) M2C_FIELD(var_s1, u16 *, 0x1F2) < 0) {
                    M2C_FIELD(var_s1, s32 *, 4) = 0x03000000;
                }
                M2C_FIELD(var_s1, u8 *, 0x26E) = 1U;
                if (arg3 & 0x20000) {
                    temp_a0_3 = (s32) (M2C_FIELD(var_s1, u16 *, 0x134) << 0x10) >> 0x11;
                    if ((M2C_FIELD(var_s1, s32 *, 0x2C) + temp_a0_3) < M2C_FIELD(arg0, s32 *, 4)) {
                        M2C_FIELD(var_s1, u8 *, 0x26E) = 0U;
                    }
                    if ((M2C_FIELD(var_s1, s32 *, 0) & 0x10000000) && (M2C_FIELD(arg0, s32 *, 4) < (M2C_FIELD(var_s1, s32 *, 0x2C) + (temp_a0_3 * 2) + temp_a0_3))) {
                        M2C_FIELD(var_s1, u8 *, 0x26E) = 2U;
                    }
                }
                if ((arg3 & 0x40000) && (M2C_FIELD(var_s1, u8 *, 0x1A2) == M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x18288), u8 *, 0x1A2))) {
                    M2C_FIELD(var_s1, u8 *, 0x26E) = 0U;
                }
                M2C_FIELD(var_s1, u8 *, 5) = arg3;
                temp_a0_4 = M2C_FIELD(var_s1, u8 *, 0x26F) & 0x80;
                M2C_FIELD(var_s1, u8 *, 0x26E) = (u8) (M2C_FIELD(var_s1, u8 *, 0x26E) + (temp_s4 * 3));
                M2C_FIELD(var_s1, u8 *, 0x26F) = temp_a0_4;
                M2C_FIELD(var_s1, u8 *, 0x26F) = (u8) (temp_a0_4 | (((u32) M2C_FIELD(temp_a1_2, u32 *, 4) >> 9) & 0x7F));
                temp_a0_5 = func_80032D44_ovl_01(M2C_FIELD(arg0, s16 *, 2), M2C_FIELD(arg0, s16 *, 0xA), M2C_FIELD(var_s1, s16 *, 0x2A), M2C_FIELD(var_s1, s16 *, 0x32)) - M2C_FIELD(var_s1, s16 *, 0x66);
                var_v0_4 = temp_a0_5 + 0x600;
                if (((temp_a0_5 + 0x400) & 0xFFF) < 0x800) {
                    M2C_FIELD(var_s1, u16 *, 0x26C) = (u16) (M2C_FIELD(var_s1, u16 *, 0x26C) | 0x20);
                    var_v0_4 = temp_a0_5 + 0x600;
                }
                var_v0_5 = temp_a0_5 - 0x200;
                if ((var_v0_4 & 0xFFF) < 0x400) {
                    M2C_FIELD(var_s1, u16 *, 0x26C) = (u16) (M2C_FIELD(var_s1, u16 *, 0x26C) | 0x40);
                    var_v0_5 = temp_a0_5 - 0x200;
                }
                var_v0 = var_s1;
                if ((var_v0_5 & 0xFFF) < 0x400) {
                    M2C_FIELD(var_s1, u16 *, 0x26C) = (u16) (M2C_FIELD(var_s1, u16 *, 0x26C) | 0x80);
block_28:
                    return var_s1;
                }
                /* Duplicate return node #52. Try simplifying control flow for better match */
                return var_v0;
            }
            goto block_51;
        }
        goto loop_2;
    }
block_51:
    var_v0 = NULL;
    return var_v0;
}
