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

void func_800AB780_ovl_01(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK *var_a1;
    s32 temp_a0;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a1_4;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a2_3;
    s32 temp_t1;
    s32 temp_t1_2;
    s32 var_a0;
    s32 var_v0;
    s8 temp_a3;
    u32 temp_a1;
    u32 temp_a3_2;
    u32 temp_t2;
    u32 temp_t2_2;
    u32 temp_v0;

    temp_a1 = arg0 & 0xFF;
    if (temp_a1 < 0x40U) {
        temp_t2 = (u32) (arg3 & 0xFFFF) >> 7;
        temp_a1_2 = arg2 & 0xFF;
        temp_t1 = arg0 & 0x1F;
        if (temp_a1_2 != 0xFF) {
            *(temp_t1 + ((arg1 & 0xFF) * 0x86) + (temp_a1_2 * 0x860) + &D_80148C20) = temp_t2 & 0x7F;
        } else {
            *(temp_t1 + ((arg1 & 0xFF) * 0x86) + &D_8014CF20) = temp_t2 & 0x7F;
        }
        temp_a1_3 = (arg0 & 0x1F) | 0x20;
        temp_a2 = arg2 & 0xFF;
        temp_a3 = arg3 & 0x7F;
        if (temp_a2 != 0xFF) {
            *(temp_a1_3 + ((arg1 & 0xFF) * 0x86) + (temp_a2 * 0x860) + &D_80148C20) = temp_a3;
            return;
        }
        *(temp_a1_3 + ((arg1 & 0xFF) * 0x86) + &D_8014CF20) = temp_a3;
        return;
    }
    temp_v0 = arg3 & 0xFFFF;
    if ((u32) ((arg0 + 0x80) & 0xFF) < 2U) {
        temp_t2_2 = temp_v0 >> 7;
        temp_a1_4 = arg2 & 0xFF;
        temp_t1_2 = arg0 & 0xFE;
        if (temp_a1_4 != 0xFF) {
            *(temp_t1_2 + ((arg1 & 0xFF) * 0x86) + (temp_a1_4 * 0x860) + &D_80148C20) = temp_t2_2 & 0x7F;
        } else {
            *(temp_t1_2 + ((arg1 & 0xFF) * 0x86) + &D_8014CF20) = temp_t2_2 & 0x7F;
        }
        temp_a0 = arg0 | 1;
        temp_a2_2 = arg2 & 0xFF;
        if (temp_a2_2 != 0xFF) {
            var_a1 = &D_80148C20;
            var_a0 = (temp_a0 & 0xFF) + ((arg1 & 0xFF) * 0x86);
            var_v0 = temp_a2_2 * 0x860;
        } else {
            var_a1 = &D_8014CF20;
            var_a0 = temp_a0 & 0xFF;
            var_v0 = (arg1 & 0xFF) * 0x86;
        }
        *(var_a0 + var_v0 + var_a1) = arg3 & 0x7F;
        return;
    }
    temp_a3_2 = temp_v0 >> 7;
    temp_a2_3 = arg2 & 0xFF;
    if (temp_a2_3 != 0xFF) {
        *(temp_a1 + ((arg1 & 0xFF) * 0x86) + (temp_a2_3 * 0x860) + &D_80148C20) = temp_a3_2 & 0x7F;
        return;
    }
    *(temp_a1 + ((arg1 & 0xFF) * 0x86) + &D_8014CF20) = temp_a3_2 & 0x7F;
}
