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

M2C_UNK func_80006650(s32, M2C_UNK);                /* extern */
s32 func_8000C9E0(void *, M2C_UNK, M2C_UNK);        /* extern */
M2C_UNK func_800B5394_ovl_01(void *, s32);          /* extern */

void func_800B49A4_ovl_01(void *arg0) {
    s32 temp_a1;
    s32 temp_v1_3;
    s32 temp_v1_5;
    s32 var_a2;
    u16 temp_a0;
    u32 temp_v1;
    u32 temp_v1_4;
    u32 var_a0;
    u8 temp_v1_2;
    u8 var_s1;

    var_s1 = M2C_FIELD(arg0, u8 *, 0x11DE);
    if (M2C_FIELD(arg0, u8 *, 0x11DC) != 0) {
        if (func_8000C9E0(arg0 + 0x11AC, 0, 0) >= 0) {
            if (M2C_FIELD(arg0, s32 *, 0x11D0) == 0) {
                M2C_FIELD(arg0, u32 *, 0x11C8) = 0x60U;
                M2C_FIELD(arg0, u16 *, 0x11A0) = (u16) M2C_FIELD(arg0, u16 *, 0x1A4);
                M2C_FIELD(arg0, s16 *, 0x11A2) = (s16) (s32) M2C_FIELD(arg0, u16 *, 0x1A4);
                M2C_FIELD(arg0, u32 *, 0x11A4) = (u32) (M2C_FIELD(arg0, s32 *, 0x1A8) & 0xFFFFFF);
            }
            temp_v1 = M2C_FIELD(arg0, u32 *, 0x11A4);
            M2C_FIELD(arg0, s32 *, 0x11D0) = (s32) (M2C_FIELD(arg0, s32 *, 0x11D0) + 0x400);
            if (temp_v1 < 0x101U) {
                M2C_FIELD(arg0, u32 *, 0x11A4) = 0U;
            } else {
                M2C_FIELD(arg0, u32 *, 0x11A4) = (u32) (temp_v1 - 0x100);
            }
            M2C_FIELD(arg0, u8 *, 0x11DC) = 0U;
        }
        if (M2C_FIELD(arg0, u8 *, 0x11DC) == 0) {
            goto block_10;
        }
    } else {
block_10:
        temp_v1_2 = M2C_FIELD(arg0, u8 *, 0x11DD);
        if (((u32) (temp_v1_2 - 1) < 2U) || ((temp_v1_2 & 0xFF) == 3)) {
            temp_v1_3 = M2C_FIELD(arg0, s32 *, 0x11D0);
            if ((u32) (temp_v1_3 - M2C_FIELD(arg0, s32 *, 0x11CC)) < 0xC01U) {
                if (temp_v1_3 == 0) {
                    var_a2 = 0x400;
                } else {
                    temp_v1_4 = M2C_FIELD(arg0, u32 *, 0x11A4);
                    var_a2 = 0x400;
                    if (temp_v1_4 < 0x101U) {
                        var_a2 = temp_v1_4 * 4;
                    }
                }
                if (var_a2 > 0) {
                    temp_a1 = M2C_FIELD(arg0, s32 *, 0x11D0);
                    M2C_FIELD(arg0, u8 *, 0x11DC) = 1U;
                    M2C_FIELD(arg0, M2C_UNK (**)(s32, void *, s32, void *), 0x190)(M2C_FIELD(arg0, s32 *, 0x194) + temp_a1, arg0 + ((temp_a1 & 0xFF8) + 0x1A0), var_a2, arg0 + 0x11AC);
                }
            }
        }
    }
    if ((u32) (M2C_FIELD(arg0, u32 *, 0x11D8) - M2C_FIELD(arg0, s32 *, 0x11D4)) < (u32) (M2C_FIELD(arg0, u32 *, 0x19C) - 0xA0)) {
loop_21:
        if (((M2C_FIELD(arg0, u8 *, 0x11DD) == 1) || (M2C_FIELD(arg0, u16 *, 0x11A0) != 0)) && (((temp_v1_5 = M2C_FIELD(arg0, s32 *, 0x11D0), (temp_v1_5 != 0)) && (M2C_FIELD(arg0, u32 *, 0x11A4) == 0)) || ((u32) (temp_v1_5 - M2C_FIELD(arg0, s32 *, 0x11CC)) >= 0x25U)) && ((s32) var_s1 > 0)) {
            func_800B5394_ovl_01(arg0, M2C_FIELD(arg0, s32 *, 0x198) + (((u32) ((u32) M2C_FIELD(arg0, u32 *, 0x11D8) % (u32) M2C_FIELD(arg0, u32 *, 0x19C)) >> 2) * 8));
            temp_a0 = M2C_FIELD(arg0, u16 *, 0x11A0) - 1;
            M2C_FIELD(arg0, u16 *, 0x11A0) = temp_a0;
            M2C_FIELD(arg0, s32 *, 0x11CC) = (s32) (((u32) M2C_FIELD(arg0, u32 *, 0x11C8) >> 3) & ~3);
            M2C_FIELD(arg0, u32 *, 0x11D8) = (u32) (M2C_FIELD(arg0, u32 *, 0x11D8) + 0xA0);
            if (!(temp_a0 & 0xFFFF)) {
                M2C_FIELD(arg0, u32 *, 0x11A8) = (u32) M2C_FIELD(arg0, u32 *, 0x19C);
            }
            var_s1 -= 1;
            if ((u32) (M2C_FIELD(arg0, u32 *, 0x11D8) - M2C_FIELD(arg0, s32 *, 0x11D4)) < (u32) (M2C_FIELD(arg0, u32 *, 0x19C) - 0xA0)) {
                goto loop_21;
            }
        }
    }
    if (((u32) (M2C_FIELD(arg0, u8 *, 0x11DD) - 3) < 2U) && (M2C_FIELD(arg0, u16 *, 0x11A0) == 0)) {
        var_a0 = M2C_FIELD(arg0, u32 *, 0x11D8);
        if (((u32) (var_a0 - M2C_FIELD(arg0, s32 *, 0x11D4)) < (u32) (M2C_FIELD(arg0, u32 *, 0x19C) - 0xA0)) & ((s32) var_s1 > 0)) {
            do {
                var_s1 -= 1;
                func_80006650(M2C_FIELD(arg0, s32 *, 0x198) + (((u32) (var_a0 % M2C_FIELD(arg0, u32 *, 0x19C)) >> 2) * 8), 0x140);
                var_a0 = M2C_FIELD(arg0, u32 *, 0x11D8) + 0xA0;
                M2C_FIELD(arg0, u32 *, 0x11D8) = var_a0;
            } while (((u32) (var_a0 - M2C_FIELD(arg0, s32 *, 0x11D4)) < (u32) (M2C_FIELD(arg0, u32 *, 0x19C) - 0xA0)) & ((s32) var_s1 > 0));
        }
    }
    if ((M2C_FIELD(arg0, u8 *, 0x11DD) == 1) && ((u32) (M2C_FIELD(arg0, u32 *, 0x11D8) - M2C_FIELD(arg0, s32 *, 0x11D4)) >= (u32) (M2C_FIELD(arg0, u32 *, 0x19C) - 0x140))) {
        M2C_FIELD(arg0, u8 *, 0x11DD) = 2U;
    }
}
