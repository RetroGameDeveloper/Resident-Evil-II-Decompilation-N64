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

M2C_UNK func_800AC63C_ovl_01(s32, s32, M2C_UNK, s32); /* extern */
M2C_UNK func_800AC6D4_ovl_01(s32, s32, M2C_UNK);    /* extern */
extern M2C_UNK D_80148C20;
extern M2C_UNK D_8014CF20;

void func_800ABA74_ovl_01(s32 arg0, s32 arg1, s32 arg3) {
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a2_3;
    s32 var_a2_4;
    s32 var_a2_5;
    s32 var_a3;
    s32 var_v0;
    s32 var_v0_2;
    u32 var_a0;
    u32 var_a0_2;

    var_a3 = arg3;
    temp_a2 = arg1 & 0xFF;
    if (temp_a2 != 0xFF) {
        var_a0 = 0;
        temp_v1 = arg0 & 0xFF;
        var_a3 = temp_v1 * 0x86;
        var_v0 = temp_v1 * 0x86;
        do {
            *(var_v0 + (temp_a2 * 0x860) + &D_80148C20) = 0;
            var_a0 += 1;
            var_v0 = var_a0 + var_a3;
        } while (var_a0 < 0x86U);
        var_a2 = arg1 & 0xFF;
    } else {
        var_a0_2 = 0;
        temp_v1_2 = arg0 & 0xFF;
        var_v0_2 = temp_v1_2 * 0x86;
        do {
            *(var_v0_2 + &D_8014CF20) = 0;
            var_a0_2 += 1;
            var_v0_2 = var_a0_2 + (temp_v1_2 * 0x86);
        } while (var_a0_2 < 0x86U);
        var_a2 = arg1 & 0xFF;
    }
    if (var_a2 != 0xFF) {
        *(((arg0 & 0xFF) * 0x86) + 7 + (var_a2 * 0x860) + &D_80148C20) = 0x7F;
    } else {
        M2C_FIELD((((arg0 & 0xFF) * 0x86) + &D_8014CF20), s8 *, 7) = 0x7F;
    }
    var_a2_2 = arg1 & 0xFF;
    if (var_a2_2 != 0xFF) {
        *(((arg0 & 0xFF) * 0x86) + 0xA + (var_a2_2 * 0x860) + &D_80148C20) = 0x40;
    } else {
        M2C_FIELD((((arg0 & 0xFF) * 0x86) + &D_8014CF20), s8 *, 0xA) = 0x40;
        var_a2_2 = arg1 & 0xFF;
    }
    if (var_a2_2 != 0xFF) {
        *(((arg0 & 0xFF) * 0x86) + 0x80 + (var_a2_2 * 0x860) + &D_80148C20) = 0x40;
    } else {
        M2C_FIELD((((arg0 & 0xFF) * 0x86) + &D_8014CF20), s8 *, 0x80) = 0x40;
    }
    var_a2_3 = arg1 & 0xFF;
    if (var_a2_3 != 0xFF) {
        *(((arg0 & 0xFF) * 0x86) + 0x81 + (var_a2_3 * 0x860) + &D_80148C20) = 0;
    } else {
        M2C_FIELD((((arg0 & 0xFF) * 0x86) + &D_8014CF20), s8 *, 0x81) = 0;
        var_a2_3 = arg1 & 0xFF;
    }
    if (var_a2_3 != 0xFF) {
        *(((arg0 & 0xFF) * 0x86) + 0x40 + (var_a2_3 * 0x860) + &D_80148C20) = 0;
    } else {
        M2C_FIELD((((arg0 & 0xFF) * 0x86) + &D_8014CF20), s8 *, 0x40) = 0;
    }
    var_a2_4 = arg1 & 0xFF;
    if (var_a2_4 != 0xFF) {
        *(((arg0 & 0xFF) * 0x86) + 0x41 + (var_a2_4 * 0x860) + &D_80148C20) = 0;
    } else {
        M2C_FIELD((((arg0 & 0xFF) * 0x86) + &D_8014CF20), s8 *, 0x41) = 0;
        var_a2_4 = arg1 & 0xFF;
    }
    if (var_a2_4 != 0xFF) {
        *(((arg0 & 0xFF) * 0x86) + 0x5B + (var_a2_4 * 0x860) + &D_80148C20) = 0;
    } else {
        M2C_FIELD((((arg0 & 0xFF) * 0x86) + &D_8014CF20), s8 *, 0x5B) = 0;
    }
    var_a2_5 = arg1 & 0xFF;
    if (var_a2_5 != 0xFF) {
        *(((arg0 & 0xFF) * 0x86) + 0x83 + (var_a2_5 * 0x860) + &D_80148C20) = 0;
    } else {
        M2C_FIELD((((arg0 & 0xFF) * 0x86) + &D_8014CF20), s8 *, 0x83) = 0;
        var_a2_5 = arg1 & 0xFF;
    }
    if (var_a2_5 != 0xFF) {
        *(((arg0 & 0xFF) * 0x86) + 0x84 + (var_a2_5 * 0x860) + &D_80148C20) = 0x40;
    } else {
        M2C_FIELD((((arg0 & 0xFF) * 0x86) + &D_8014CF20), s8 *, 0x84) = 0x40;
    }
    temp_a2_2 = arg1 & 0xFF;
    if (temp_a2_2 != 0xFF) {
        *(((arg0 & 0xFF) * 0x86) + 0x85 + (temp_a2_2 * 0x860) + &D_80148C20) = 0;
    } else {
        M2C_FIELD((((arg0 & 0xFF) * 0x86) + &D_8014CF20), s8 *, 0x85) = 0;
    }
    temp_s1 = arg0 & 0xFF;
    temp_s0 = arg1 & 0xFF;
    func_800AC63C_ovl_01(temp_s1, temp_s0, 0xFF, var_a3);
    func_800AC6D4_ovl_01(temp_s1, temp_s0, 0);
}
