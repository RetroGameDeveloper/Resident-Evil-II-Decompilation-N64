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

M2C_UNK func_80034C0C_ovl_01(void *, s32 *, s16 *, s16); /* extern */
M2C_UNK func_80040E88_ovl_01(void *, void *, u16);  /* extern */
extern M2C_UNK D_800C7650_ovl_01;

void func_800342B0_ovl_01(void *arg0, s16 arg1) {
    s16 sp10;
    u16 sp12;
    u16 sp14;                                       /* compiler-managed */
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s16 temp_a1_2;
    s16 temp_v0;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s32 temp_a2;
    s32 temp_v0_2;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_v0_2;
    u16 temp_a0_2;
    u16 temp_a0_3;
    u16 temp_a0_4;
    u16 temp_a0_5;
    u16 temp_a2_2;
    u16 temp_a2_3;
    u16 temp_s2;
    u16 var_a1;
    u16 var_a1_2;
    u16 var_v0;
    void *temp_a0;
    void *temp_a1;
    void *temp_s0;
    void *temp_s4;
    void *temp_v1;
    void *var_a0;
    void *var_a0_2;
    void *var_v1;

    if (!(M2C_FIELD(arg0, u8 *, 0x25C) & 1)) {
        temp_s4 = M2C_FIELD(arg0, void **, 0x254);
        temp_a1 = M2C_FIELD(arg0, void **, 0x234);
        temp_s2 = M2C_FIELD(temp_a1, u16 *, 0x5A);
        temp_v1 = M2C_FIELD(temp_s4, s32 *, 0x234) + (M2C_FIELD(temp_s4, u8 *, 0x25D) * 0x178);
        sp18 = M2C_FIELD(temp_v1, s32 *, 0x4C);
        sp1C = M2C_FIELD(temp_v1, s32 *, 0x50);
        sp20 = M2C_FIELD(temp_v1, s32 *, 0x54);
        sp24 = M2C_FIELD(temp_v1, s32 *, 0x58);
        temp_s0 = temp_a1 + (M2C_FIELD(arg0, u8 *, 0x25D) * 0x178);
        if (M2C_FIELD(arg0, u8 *, 0x25C) & 4) {
            temp_v0 = M2C_FIELD(arg0, s16 *, 0x20E);
            sp1C = (s32) temp_v0;
            temp_a1_2 = M2C_FIELD(arg0, s16 *, 0x20C);
            sp18 = (s32) temp_a1_2;
            sp20 = (s32) M2C_FIELD(arg0, s16 *, 0x210);
            var_a0 = temp_s0 + 0x4C;
            if ((temp_v0 & 0xFFFF) == 0x8000) {
                temp_a0 = M2C_FIELD(((temp_a1_2 * 4) + &D_800C7650_ovl_01 + (0x10000 | 0x8000)), void **, 0x1D38);
                var_v1 = M2C_FIELD(temp_a0, s32 *, 0x234) + (M2C_FIELD(temp_a0, u8 *, 0x25D) * 0x178);
                if (temp_a1_2 == 0x15) {
                    var_v1 = M2C_FIELD(arg0, void **, 0x234) + (M2C_FIELD(arg0, u8 *, 0x25D) * 0x178);
                }
                sp18 = M2C_FIELD(var_v1, s32 *, 0x4C);
                sp1C = M2C_FIELD(var_v1, s32 *, 0x50);
                sp20 = M2C_FIELD(var_v1, s32 *, 0x54);
                sp24 = M2C_FIELD(var_v1, s32 *, 0x58);
                goto block_6;
            }
        } else {
block_6:
            var_a0 = temp_s0 + 0x4C;
        }
        func_80034C0C_ovl_01(var_a0, &sp18, &sp10, (s16) (arg1 + temp_s2));
        if (M2C_FIELD(arg0, u8 *, 0x25C) & 8) {
            sp10 = 0;
            sp12 = temp_s2 + ((u16) M2C_FIELD(arg0, s16 *, 0x20E) + arg1);
            sp14 = (u16) M2C_FIELD(arg0, s16 *, 0x210);
        }
        if (M2C_FIELD(arg0, u8 *, 0x25C) & 0x40) {
            if (M2C_FIELD(arg0, s16 *, 0x210) == 0) {
                M2C_FIELD(arg0, s16 *, 0x210) = 1;
                M2C_FIELD(arg0, s16 *, 0x20E) = (s16) (temp_s2 + (M2C_FIELD(temp_s0, u16 *, 0x138) + (arg1 - 0x80)));
            }
            sp12 = (u16) M2C_FIELD(arg0, s16 *, 0x20E);
        }
        if (M2C_FIELD(arg0, u8 *, 0x25C) & 2) {
            sp12 = temp_s2 + (arg1 + M2C_FIELD(temp_s0, u16 *, 0x5A));
        }
        if (M2C_FIELD(arg0, u8 *, 0x25C) & 0x10) {
            sp14 = M2C_FIELD(temp_s0, u16 *, 0x5C);
        }
        if ((arg0 == temp_s4) && !(M2C_FIELD(arg0, u8 *, 0x25C) & 0x80)) {
            sp12 = temp_s2 + (arg1 + M2C_FIELD(temp_s0, u16 *, 0x5A));
            sp14 = M2C_FIELD(temp_s0, u16 *, 0x5C);
        }
        var_a1 = M2C_FIELD(temp_s0, u16 *, 0x134);
        temp_a0_2 = M2C_FIELD(temp_s0, u16 *, 0x138);
        if (M2C_FIELD(arg0, u8 *, 0x25C) & 0x80) {
            var_a1 = (u16) M2C_FIELD(temp_s0, u8 *, 0x13C);
        }
        temp_a2 = ((s16) sp12 - arg1) - (s16) temp_s2;
        if (((s16) temp_a0_2 * 2) < ((temp_a2 + (s16) temp_a0_2) & 0xFFF)) {
            temp_v0_2 = arg1 + temp_s2;
            if (temp_a2 & 0x800) {
                var_v0 = temp_v0_2 - temp_a0_2;
            } else {
                var_v0 = temp_a0_2 + temp_v0_2;
            }
            sp12 = var_v0;
        }
        temp_a0_3 = M2C_FIELD(temp_s0, u16 *, 0x130);
        temp_a2_2 = temp_a0_3 - var_a1;
        temp_v1_2 = var_a1 + (sp12 - (temp_a0_3 + (temp_s2 + (arg1 + M2C_FIELD(temp_s0, u16 *, 0x5A)))));
        M2C_FIELD(temp_s0, u16 *, 0x130) = temp_a2_2;
        if (!(temp_v1_2 & 0x800)) {
            M2C_FIELD(temp_s0, u16 *, 0x130) = (u16) (temp_a2_2 + (var_a1 * 2));
        }
        if ((temp_v1_2 & 0xFFF) < ((s32) (var_a1 << 0x10) >> 0xF)) {
            M2C_FIELD(temp_s0, u16 *, 0x130) = (u16) (sp12 - (temp_s2 + (arg1 + M2C_FIELD(temp_s0, u16 *, 0x5A))));
            if (M2C_FIELD(arg0, u8 *, 0x25C) & 0x40) {
                temp_v0_3 = (u16) M2C_FIELD(arg0, s16 *, 0x20C) - 1;
                M2C_FIELD(arg0, s16 *, 0x20C) = temp_v0_3;
                var_v0_2 = arg1 << 0x10;
                if ((temp_v0_3 << 0x10) == 0) {
                    M2C_FIELD(arg0, u8 *, 0x25C) = 0x12U;
                    var_v0_2 = arg1 << 0x10;
                }
                M2C_FIELD(arg0, s16 *, 0x20E) = (s16) (temp_s2 + (arg1 + ((s16) temp_s2 - (M2C_FIELD(arg0, s16 *, 0x20E) - ((var_v0_2 >> 0x10) + 0x80)))));
            }
        }
        M2C_FIELD(temp_s0, u16 *, 0x5A) = (u16) (M2C_FIELD(temp_s0, u16 *, 0x5A) + M2C_FIELD(temp_s0, u16 *, 0x130));
        if (M2C_FIELD(arg0, u8 *, 0x25C) & 0x20) {
            if (M2C_FIELD(arg0, s16 *, 0x210) == 0) {
                M2C_FIELD(arg0, s16 *, 0x210) = 1;
                M2C_FIELD(arg0, s16 *, 0x20E) = (s16) M2C_FIELD(temp_s0, u16 *, 0x13A);
            }
            sp14 = (u16) M2C_FIELD(arg0, s16 *, 0x20E);
        }
        var_a1_2 = M2C_FIELD(temp_s0, u16 *, 0x136);
        temp_a0_4 = M2C_FIELD(temp_s0, u16 *, 0x13A);
        if (M2C_FIELD(arg0, u8 *, 0x25C) & 0x80) {
            var_a1_2 = (u16) M2C_FIELD(temp_s0, u8 *, 0x13D);
        }
        if (((s16) temp_a0_4 * 2) < (((s16) sp14 + (s16) temp_a0_4) & 0xFFF)) {
            if (sp14 & 0x800) {
                sp14 = -(s16) temp_a0_4;
            } else {
                sp14 = temp_a0_4;
            }
        }
        temp_a0_5 = M2C_FIELD(temp_s0, u16 *, 0x132);
        temp_a2_3 = temp_a0_5 - var_a1_2;
        temp_v1_3 = var_a1_2 + (sp14 - (M2C_FIELD(temp_s0, u16 *, 0x5C) + temp_a0_5));
        M2C_FIELD(temp_s0, u16 *, 0x132) = temp_a2_3;
        if (!(temp_v1_3 & 0x800)) {
            M2C_FIELD(temp_s0, u16 *, 0x132) = (u16) (temp_a2_3 + (var_a1_2 * 2));
        }
        if ((temp_v1_3 & 0xFFF) >= ((s32) (var_a1_2 << 0x10) >> 0xF)) {
            var_a0_2 = temp_s0 + 0x58;
        } else {
            M2C_FIELD(temp_s0, u16 *, 0x132) = (u16) (sp14 - M2C_FIELD(temp_s0, u16 *, 0x5C));
            if (!(M2C_FIELD(arg0, u8 *, 0x25C) & 0x20)) {
                var_a0_2 = temp_s0 + 0x58;
            } else {
                if ((s16) sp14 != 0) {
                    temp_v0_4 = (u16) M2C_FIELD(arg0, s16 *, 0x20C) - 1;
                    M2C_FIELD(arg0, s16 *, 0x20C) = temp_v0_4;
                    if ((temp_v0_4 << 0x10) == 0) {
                        M2C_FIELD(arg0, u8 *, 0x25C) = 0x12U;
                    }
                    M2C_FIELD(arg0, s16 *, 0x20E) = 0;
                }
                var_a0_2 = temp_s0 + 0x58;
                if ((M2C_FIELD(arg0, u8 *, 0x25C) & 0x20) && ((s16) sp14 == 0)) {
                    M2C_FIELD(arg0, s16 *, 0x20E) = (s16) M2C_FIELD(temp_s0, u16 *, 0x13A);
                }
            }
        }
        M2C_FIELD(temp_s0, u16 *, 0x5C) = (u16) (M2C_FIELD(temp_s0, u16 *, 0x5C) + M2C_FIELD(temp_s0, u16 *, 0x132));
        func_80040E88_ovl_01(var_a0_2, temp_s0 + 8, temp_a2_3);
        M2C_FIELD(temp_s0, u16 *, 0x5A) = (u16) (M2C_FIELD(temp_s0, u16 *, 0x5A) - M2C_FIELD(temp_s0, u16 *, 0x130));
        M2C_FIELD(temp_s0, u16 *, 0x5C) = (u16) (M2C_FIELD(temp_s0, u16 *, 0x5C) - M2C_FIELD(temp_s0, u16 *, 0x132));
    }
}
