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

M2C_UNK func_80032DEC_ovl_01(void *, s16, s16, M2C_UNK); /* extern */
M2C_UNK func_80083800_ovl_01(s16, s16 *, s16 *);    /* extern */
s16 func_80162144_ovl_22(void *);                   /* extern */
extern M2C_UNK D_800C7650_ovl_01;

void func_8016333C_ovl_22(void *arg0) {
    s16 sp10;
    s16 sp14;
    s32 sp18;
    s32 sp20;
    s16 temp_v0;
    s16 var_v0_2;
    s16 var_v0_3;
    s16 var_v0_4;
    s16 var_v0_5;
    s16 var_v0_7;
    s16 var_v0_8;
    s16 var_v1;
    s32 temp_s2;
    s32 var_a1;
    s32 var_v0;
    u16 var_v0_6;
    u32 temp_a0;

    if (((M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x19A84) != 5) || (M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x19A85) != 1)) && (M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19C72) >= 0)) {
        temp_s2 = func_80032D44_ovl_01(M2C_FIELD(arg0, s16 *, 0x2A), M2C_FIELD(arg0, s16 *, 0x32), M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19AAA), M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19AB2));
        temp_v0 = func_80162144_ovl_22(arg0);
        var_v1 = temp_v0;
        if (var_v1 < 0) {
            var_v1 = -var_v1;
        }
        if ((var_v1 < 0x2AA) && ((u32) M2C_FIELD(arg0, u32 *, 0x28C) < 0x7D0U)) {
            if ((M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19C72) >= 0x47) || (sp14 = 0, sp10 = M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19BB6) + 0x12C, func_80083800_ovl_01((s16) temp_s2, &sp10, &sp10), sp20 = sp14 + M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19AB0), sp18 = sp10 + M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19AA8), var_v0 = 0x01060000, (func_80066804_ovl_01((s32) &sp18, 0, 1 << M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x19C22), 0x8000) == 0))) {
                goto block_10;
            }
            goto block_60;
        }
block_10:
        if ((M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19C72) < 0x33) && (M2C_FIELD(arg0, u8 *, 0x2C9) == 0)) {
            var_v0_2 = temp_v0;
            if (var_v0_2 < 0) {
                var_v0_2 = -var_v0_2;
            }
            if ((var_v0_2 >= 0x2AA) || (var_v0 = 0x01030000, (((u32) M2C_FIELD(arg0, u32 *, 0x28C) < 0x898U) == 0))) {
                goto block_16;
            }
            goto block_60;
        }
block_16:
        if ((M2C_FIELD(arg0, u8 *, 0x2C6) != 0) && (M2C_FIELD(arg0, u8 *, 0x2C8) == 0)) {
            var_v0_3 = temp_v0;
            if (var_v0_3 < 0) {
                var_v0_3 = -var_v0_3;
            }
            if (var_v0_3 < 0x2AA) {
                var_v0 = 0x01060000;
                if ((u32) M2C_FIELD(arg0, u32 *, 0x28C) >= 0x898U) {
                    goto block_23;
                }
                goto block_60;
            }
            goto block_23;
        }
block_23:
        if (M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19C72) >= 0x29) {
            if (M2C_FIELD(arg0, u8 *, 0x2C6) == 0) {
                temp_a0 = M2C_FIELD(arg0, u32 *, 0x28C);
                var_a1 = 0;
                if (temp_a0 < 0x898U) {
                    var_v0_4 = temp_v0;
                    if (temp_v0 < 0) {
                        var_v0_4 = -temp_v0;
                    }
                    var_v0_5 = temp_v0;
                    if (var_v0_4 < 0x320) {
                        if (var_v0_5 < 0) {
                            var_v0_5 = -var_v0_5;
                        }
                        if ((var_v0_5 >= 0x24) || (temp_a0 < 0x640U)) {
                            var_a1 = 1;
                        }
                    }
                    if (var_a1 == 0) {
                        goto block_50;
                    }
                    if ((M2C_FIELD(arg0, u16 *, 0x2C0) & 0x40) && (func_80033634_ovl_01() & 2)) {
                        var_v0_6 = M2C_FIELD(arg0, u16 *, 0x2C0) & 0xFFDF;
                    } else {
                        var_v0_6 = M2C_FIELD(arg0, u16 *, 0x2C0) | 0x20;
                    }
                    M2C_FIELD(arg0, u16 *, 0x2C0) = var_v0_6;
                    var_v0 = 0x01040000;
                    if ((temp_v0 << 0x10) <= 0) {
                        var_v0 = 0x01050000;
                    }
                    goto block_60;
                }
            }
            goto block_51;
        }
        if ((M2C_FIELD(arg0, u8 *, 0x2C6) == 0) && ((u32) M2C_FIELD(arg0, u32 *, 0x28C) < 0x7D0U)) {
            var_v0_7 = temp_v0;
            if (temp_v0 < 0) {
                var_v0_7 = -temp_v0;
            }
            if (var_v0_7 < 0x1F4) {
                M2C_FIELD(arg0, u16 *, 0x2C0) = (u16) (M2C_FIELD(arg0, u16 *, 0x2C0) | 0x20);
                var_v0 = 0x01040000;
                if (temp_v0 <= 0) {
                    var_v0 = 0x01050000;
                }
                goto block_60;
            }
block_50:
            func_80032DEC_ovl_01(arg0, M2C_FIELD(arg0, s16 *, 0x260), M2C_FIELD(arg0, s16 *, 0x262), 0x20);
            goto block_51;
        }
block_51:
        if ((M2C_FIELD(arg0, u8 *, 0x2C7) == 0) && ((M2C_FIELD(arg0, u16 *, 0x1AA) & 0x300) != 0x100) && (M2C_FIELD(arg0, u8 *, 5) != 2) && (M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19C72) >= 0x51) && ((func_80033634_ovl_01() & 0x1F) == 8) && ((u32) (M2C_FIELD(arg0, u32 *, 0x28C) - 0xC81) < 0x1F3U)) {
            var_v0_8 = temp_v0;
            if (var_v0_8 < 0) {
                var_v0_8 = -var_v0_8;
            }
            var_v0 = 0x01080000;
            if (var_v0_8 < 0xC8) {
block_60:
                M2C_FIELD(arg0, s32 *, 4) = var_v0;
            }
        }
    }
}
