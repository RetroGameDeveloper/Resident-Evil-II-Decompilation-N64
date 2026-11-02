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

extern M2C_UNK D_80148C20;
extern M2C_UNK D_8014CF20;

s32 func_800AC068_ovl_01(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0_2;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    s32 var_v1_2;
    u32 temp_a1;
    u32 temp_a1_2;
    u8 *var_a0;
    u8 *var_a1;
    u8 var_v0;

    temp_a3 = arg2 & 0xFF;
    if (temp_a3 != 0xFF) {
        temp_a1_2 = arg0 & 0xFF;
        if (temp_a1_2 < 0x40U) {
            var_a0_2 = arg0 & 0x1F;
            temp_v1 = (arg1 & 0xFF) * 0x86;
            var_v0_2 = temp_a3 * 0x860;
            var_a1 = var_a0_2 + temp_v1 + var_v0_2 + &D_80148C20;
            var_v1_2 = temp_v1 + 0x20;
            goto block_3;
        }
        if ((u32) ((arg0 + 0x80) & 0xFF) < 2U) {
            var_a0_2 = arg0 & 0xFE;
            temp_v1_2 = (arg1 & 0xFF) * 0x86;
            var_v0_2 = temp_a3 * 0x860;
            var_a1 = var_a0_2 + temp_v1_2 + var_v0_2 + &D_80148C20;
            var_v1_2 = temp_v1_2 + 1;
block_3:
            var_a0 = var_a0_2 + var_v1_2 + var_v0_2 + &D_80148C20;
            var_v0 = *var_a1;
            /* Duplicate return node #4. Try simplifying control flow for better match */
            return *var_a0 | (var_v0 << 7);
        }
        if (temp_a1_2 < 0x46U) {
            var_v0_3 = (u8) *(temp_a1_2 + ((arg1 & 0xFF) * 0x86) + (temp_a3 * 0x860) + &D_80148C20) < 0x40U;
            goto block_9;
        }
        if ((u32) ((arg0 - 0x60) & 0xFF) < 6U) {
            return 0;
        }
        return *(temp_a1_2 + ((arg1 & 0xFF) * 0x86) + (temp_a3 * 0x860) + &D_80148C20) << 7;
    }
    temp_a1 = arg0 & 0xFF;
    if (temp_a1 >= 0x40U) {
        if ((u32) ((arg0 + 0x80) & 0xFF) >= 2U) {
            if (temp_a1 < 0x46U) {
                var_v0_3 = (u8) *(temp_a1 + ((arg1 & 0xFF) * 0x86) + &D_8014CF20) < 0x40U;
block_9:
                var_v1 = 0;
                if (var_v0_3 == 0) {
                    var_v1 = 0x3FFF;
                }
                return var_v1;
            }
            if ((u32) ((arg0 - 0x60) & 0xFF) >= 6U) {
                return *(temp_a1 + ((arg1 & 0xFF) * 0x86) + &D_8014CF20) << 7;
            }
            return 0;
        }
        temp_a0 = arg0 & 0xFE;
        temp_v0 = (arg1 & 0xFF) * 0x86;
        var_v0 = *(temp_a0 + temp_v0 + &D_8014CF20);
        var_a0 = temp_a0 + (temp_v0 + 1) + &D_8014CF20;
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return *var_a0 | (var_v0 << 7);
    }
    temp_a0_2 = arg0 & 0x1F;
    temp_v0_2 = (arg1 & 0xFF) * 0x86;
    var_v0 = *(temp_a0_2 + temp_v0_2 + &D_8014CF20);
    var_a0 = temp_a0_2 + (temp_v0_2 + 0x20) + &D_8014CF20;
    return *var_a0 | (var_v0 << 7);
}
