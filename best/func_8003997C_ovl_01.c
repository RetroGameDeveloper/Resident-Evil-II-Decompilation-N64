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

extern s32 D_800C7650_ovl_01;
extern M2C_UNK D_801607F0_ovl_03;

void func_8003997C_ovl_01(u16 *arg0, u16 *arg1, s32 arg2) {
    s32 var_a2;
    u16 *var_a0;
    u16 *var_a1;
    u16 temp_a3;
    u16 temp_a3_2;

    var_a0 = arg0;
    var_a1 = arg1;
    var_a2 = arg2;
    if (D_800C7650_ovl_01 == M2C_FIELD(&D_801607F0_ovl_03, s32 *, 0)) {
        if (var_a2 != 0) {
            do {
                var_a1 -= 2;
                var_a0 -= 2;
                temp_a3 = *var_a1;
                var_a2 -= 1;
                *var_a0 = (temp_a3 >> 0xA) | ((temp_a3 << 0xA) & ~0x7FF) | (temp_a3 & 0x7C1);
            } while (var_a2 != 0);
        }
        return;
    }
    if (D_800C7650_ovl_01 == M2C_FIELD(&D_801607F0_ovl_03, s32 *, 4)) {
        if (var_a2 != 0) {
            do {
                var_a1 -= 2;
                var_a0 -= 2;
                temp_a3_2 = *var_a1;
                var_a2 -= 1;
                *var_a0 = (temp_a3_2 >> 5) | ((temp_a3_2 << 5) & 0x7C0) | (temp_a3_2 & 0x3F);
            } while (var_a2 != 0);
        }
    } else if (var_a2 != 0) {
        do {
            var_a1 -= 2;
            var_a0 -= 2;
            var_a2 -= 1;
            *var_a0 = *var_a1;
        } while (var_a2 != 0);
    }
}
