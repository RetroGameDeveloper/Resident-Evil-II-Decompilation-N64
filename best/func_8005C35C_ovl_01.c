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

M2C_UNK func_80040E88_ovl_01(void *, void *);       /* extern */

void func_8005C35C_ovl_01(void *arg0) {
    s32 temp_v1;
    u16 temp_v0;
    u16 temp_v0_2;
    void *var_a0;
    void *var_s0;

    if ((M2C_FIELD(arg0, u16 *, 0x1AA) & 0xFFF) == 0x12) {
        temp_v1 = M2C_FIELD(arg0, s32 *, 0x234);
        var_s0 = temp_v1 + 0x1780;
        if (M2C_FIELD(arg0, u8 *, 8) & 1) {
            var_s0 = temp_v1 + 0x1D60;
        }
        if (M2C_FIELD(var_s0, s8 *, 0x112) == 0) {
            temp_v0 = M2C_FIELD(var_s0, u16 *, 0x11E) - 8;
            M2C_FIELD(var_s0, u16 *, 0x11E) = temp_v0;
            if (temp_v0 & 0x8000) {
                M2C_FIELD(var_s0, u16 *, 0x11E) = 0U;
                goto block_10;
            }
            var_a0 = var_s0 + 0x58;
        } else {
            temp_v0_2 = M2C_FIELD(var_s0, u16 *, 0x11E) + 0x20;
            M2C_FIELD(var_s0, u16 *, 0x11E) = temp_v0_2;
            var_a0 = var_s0 + 0x58;
            if ((s16) temp_v0_2 >= 0x201) {
                M2C_FIELD(var_s0, u16 *, 0x11E) = 0x200U;
block_10:
                var_a0 = var_s0 + 0x58;
            }
        }
        M2C_FIELD(var_s0, u16 *, 0x5A) = (u16) (M2C_FIELD(var_s0, u16 *, 0x5A) + M2C_FIELD(var_s0, u16 *, 0x11E));
        func_80040E88_ovl_01(var_a0, var_s0 + 8);
        M2C_FIELD(var_s0, s8 *, 0x112) = 0;
    }
}
