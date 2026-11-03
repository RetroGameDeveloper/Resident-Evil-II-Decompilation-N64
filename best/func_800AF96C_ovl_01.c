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

extern M2C_UNK D_80136AD0_ovl_01;

s32 func_800AF96C_ovl_01(void *arg0, u32 *arg1) {
    s32 var_a1;
    s32 var_a1_2;
    u16 *var_v1_2;
    u16 *var_v1_4;
    u16 temp_a0_2;
    u16 temp_a0_3;
    u32 temp_a0;
    u32 temp_a1;
    u32 temp_lo;
    u32 temp_lo_2;
    u32 temp_lo_3;
    u32 temp_lo_4;
    u32 temp_v1;
    u32 var_a0;
    u32 var_a0_2;
    u32 var_v1;
    u32 var_v1_3;

    temp_a1 = M2C_FIELD(arg0, u32 *, 0x5C);
    temp_a0 = ((u32) *arg1 >> 8) & 0xFFFF;
    temp_v1 = temp_a1 & 0xFFFFFF;
    if (temp_v1 != temp_a0) {
        if (temp_v1 < temp_a0) {
            temp_lo = (u32) (temp_a0 << 0xC) / temp_v1;
            var_a0 = 0;
            var_v1 = 1;
loop_6:
            if (((u32) (temp_lo >> 0xC) >> var_v1) != 0) {
                var_a0 = var_v1;
                var_v1 = var_a0 + 1;
                if (var_v1 < 0xBU) {
                    goto loop_6;
                }
            }
            var_a1 = 0xB;
            var_v1_2 = &D_80136AD0_ovl_01 + 0x16;
            temp_lo_2 = temp_lo / (u32) (1 << var_a0);
loop_9:
            var_v1_2 -= 2;
            if ((u16) *var_v1_2 >= temp_lo_2) {
                var_a1 -= 1;
                goto loop_9;
            }
            M2C_FIELD(arg0, s16 *, 0x50) = (s16) ((u8) M2C_FIELD(arg0, u32 *, 0x5C) + (var_a0 * 0xC) + var_a1);
            temp_a0_2 = *((var_a1 * 2) + &D_80136AD0_ovl_01);
            M2C_FIELD(arg0, s8 *, 0xC0) = (s8) ((u32) ((temp_lo_2 - temp_a0_2) * 0x64) / (u32) (*(((var_a1 + 1) * 2) + &D_80136AD0_ovl_01) - temp_a0_2));
        } else {
            temp_lo_3 = (u32) (temp_v1 << 0xC) / temp_a0;
            var_a0_2 = 0;
            var_v1_3 = 1;
loop_13:
            if (((u32) (temp_lo_3 >> 0xC) >> var_v1_3) != 0) {
                var_a0_2 = var_v1_3;
                var_v1_3 = var_a0_2 + 1;
                if (var_v1_3 < 0xBU) {
                    goto loop_13;
                }
            }
            var_a1_2 = 0xB;
            var_v1_4 = &D_80136AD0_ovl_01 + 0x16;
            temp_lo_4 = temp_lo_3 / (u32) (1 << var_a0_2);
loop_16:
            var_v1_4 -= 2;
            if ((u16) *var_v1_4 >= temp_lo_4) {
                var_a1_2 -= 1;
                goto loop_16;
            }
            M2C_FIELD(arg0, s16 *, 0x50) = (s16) (((u8) M2C_FIELD(arg0, u32 *, 0x5C) - (var_a0_2 * 0xC)) - var_a1_2);
            temp_a0_3 = *((var_a1_2 * 2) + &D_80136AD0_ovl_01);
            M2C_FIELD(arg0, s8 *, 0xC0) = (s8) -(s8) ((u32) ((temp_lo_4 - temp_a0_3) * 0x64) / (u32) (*(((var_a1_2 + 1) * 2) + &D_80136AD0_ovl_01) - temp_a0_3));
        }
    } else {
        M2C_FIELD(arg0, s16 *, 0x50) = (s16) (temp_a1 >> 0x18);
        M2C_FIELD(arg0, s8 *, 0xC0) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) | 0x100);
    return 0;
}
