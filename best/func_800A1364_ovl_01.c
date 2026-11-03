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

M2C_UNK func_800A7B04_ovl_01(s32, s32, u8, s32, s32); /* extern */
extern M2C_UNK D_8013BC30;

void func_800A1364_ovl_01(s8 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK *var_a0;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_v0;
    s32 var_a2;
    s32 var_v0;
    s8 var_v0_2;
    u32 var_s0;
    u32 var_v1;
    u8 temp_v1;
    void *temp_v0_2;
    void *var_v1_2;

    var_v1 = 0;
    var_a0 = &D_8013BC30;
loop_1:
    if ((M2C_FIELD(var_a0, u8 *, 0xFC1) != 0) || (M2C_FIELD(var_a0, s32 *, 0) != (arg2 & 0x7FFFFFFF))) {
        var_v1 += 1;
        var_a0 += 0xFF8;
        if (var_v1 >= 8U) {
            var_a2 = -1;
        } else {
            goto loop_1;
        }
    } else {
        var_a2 = var_v1 | (arg2 & 0x80000000);
    }
    if (var_a2 != -1) {
        if (var_a2 >= 0) {
            var_s0 = 0;
            temp_v0 = var_a2 * 0xFF8;
            temp_v0_2 = temp_v0 + &D_8013BC30;
            func_800A7B04_ovl_01(arg0 & 0xFF, arg1 & 0xFFFF, M2C_FIELD(temp_v0_2, u8 *, 0xFC4), arg3 & 0xFF, arg2);
            var_v0 = var_a2 * 0xFF8;
            do {
                temp_v1 = M2C_FIELD((var_v0 + &D_8013BC30), u8 *, 0x528);
                if (temp_v1 != M2C_FIELD(temp_v0_2, u8 *, 0xFC4)) {
                    func_800A7B04_ovl_01(arg0 & 0xFF, arg1 & 0xFFFF, temp_v1, 0, 0);
                }
                var_s0 += 1;
                var_v0 = var_s0 + temp_v0;
            } while (var_s0 < 0x40U);
            return;
        }
        temp_a2 = var_a2 & 0x7FFFFFFF;
        temp_a3 = arg3 & 0xF;
        switch (temp_a3) {                          /* irregular */
        case 0:
            M2C_FIELD(((temp_a2 * 0xFF8) + &D_8013BC30), s8 *, 0xFE0) = arg0;
            return;
        case 1:
            M2C_FIELD(((temp_a2 * 0xFF8) + &D_8013BC30), s32 *, 0xFF0) = 0;
            return;
        case 2:
            var_v1_2 = (temp_a2 * 0xFF8) + &D_8013BC30;
            M2C_FIELD(var_v1_2, s8 *, 0xFE0) = arg0;
            var_v0_2 = M2C_FIELD(var_v1_2, u8 *, 0xFEE) | 8;
block_26:
            M2C_FIELD(var_v1_2, s8 *, 0xFEE) = var_v0_2;
            break;
        case 3:
            var_v1_2 = (temp_a2 * 0xFF8) + &D_8013BC30;
            M2C_FIELD(var_v1_2, s8 *, 0xFE0) = arg0;
            var_v0_2 = M2C_FIELD(var_v1_2, u8 *, 0xFEE) | 0x80;
            goto block_26;
        }
    }
}
