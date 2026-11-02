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

void func_8004F664_ovl_01(void *arg0, void *arg1, u32 arg3) {
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_t0;
    s32 temp_t0_2;
    s32 temp_t1;
    s32 var_a1;
    s32 var_a3_2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_4;
    u32 var_a3;
    u32 var_v0_3;
    u32 var_v1;

    var_a3 = arg3;
    if (!(M2C_FIELD(arg0, s32 *, 0) & 0x40) && !(M2C_FIELD(arg1, s32 *, 0) & 2)) {
        temp_a2 = M2C_FIELD(arg1, s32 *, 0x120) - M2C_FIELD(arg0, s32 *, 0x120);
        temp_a0 = M2C_FIELD(arg1, s32 *, 0x128) - M2C_FIELD(arg0, s32 *, 0x128);
        temp_t0 = -(s32) ((u16) M2C_FIELD(arg0, u16 *, 0x12C) >> 1);
        temp_t1 = temp_t0 + M2C_FIELD(arg1, u16 *, 0x12C);
        temp_t0_2 = temp_t0 + M2C_FIELD(arg1, u16 *, 0x12E);
        var_a1 = (u32) (temp_t1 * 2) < (u32) (temp_a2 + temp_t1);
        if ((u32) (temp_t0_2 * 2) < (u32) (temp_a0 + temp_t0_2)) {
            var_a1 |= 2;
        }
        if (var_a1 != 0) {
            var_v1 = var_a3;
            if (var_a1 & 1) {
                var_v0 = temp_a2;
                if (temp_a2 < 0) {
                    var_v0 = -temp_a2;
                }
                if ((u32) (var_v0 - temp_t1) < var_a3) {
                    var_v0_2 = temp_a2;
                    if (temp_a2 < 0) {
                        var_v0_2 = -temp_a2;
                    }
                    var_v1 = var_v0_2 - temp_t1;
                }
                var_v0_3 = var_v1;
                if (temp_a2 >= 0) {
                    var_v0_3 = (u32) -(s32) var_v0_3;
                }
                M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) - var_v0_3);
                M2C_FIELD(arg0, s32 *, 0x120) = (s32) (M2C_FIELD(arg0, s32 *, 0x120) - var_v0_3);
            }
            if (var_a1 & 2) {
                var_v0_4 = temp_a0;
                if (temp_a0 < 0) {
                    var_v0_4 = -temp_a0;
                }
                if ((u32) (var_v0_4 - temp_t0_2) < var_a3) {
                    var_a3_2 = temp_a0;
                    if (temp_a0 < 0) {
                        var_a3_2 = -temp_a0;
                    }
                    var_a3 = var_a3_2 - temp_t0_2;
                }
                if (temp_a0 >= 0) {
                    var_a3 = (u32) -(s32) var_a3;
                }
                M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) - var_a3);
                M2C_FIELD(arg0, s32 *, 0x128) = (s32) (M2C_FIELD(arg0, s32 *, 0x128) - var_a3);
            }
        }
    }
}
