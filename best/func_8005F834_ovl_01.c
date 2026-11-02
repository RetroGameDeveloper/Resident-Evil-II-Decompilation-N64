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

M2C_UNK func_8004251C_ovl_01(s32, void *, void *, u16 *); /* extern */
extern u16 D_800E8FE8_ovl_01;

s32 func_8005F834_ovl_01(void *arg0, s32 arg1) {
    s32 *var_s1;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_t1;
    s32 var_v1;
    u16 *var_a1;
    u16 *var_a2;
    u16 *var_a2_2;
    u16 *var_a3;
    u16 *var_a3_2;
    u16 *var_t0;
    u16 *var_t0_2;
    u16 *var_v1_2;
    u16 *var_v1_3;
    u16 temp_v0_2;
    u16 temp_v0_4;
    u16 temp_v0_5;
    u16 var_s3;
    void *temp_s1;
    void *temp_s4;
    void *var_s0;

    var_v1 = 6;
    var_s3 = 0;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x234);
    var_s1 = temp_v0 + 0x1D60;
    temp_s4 = temp_v0 + 0x1028;
    var_s0 = temp_v0 + 0x1E8C;
loop_1:
    if (M2C_FIELD(var_s0, u8 *, 4) != 0xFF) {
        var_s0 += 0x2F0;
        var_s1 += 0x2F0;
        var_v1 -= 1;
        var_s3 += 1;
        if (var_v1 == 0) {
            temp_v0_2 = M2C_FIELD(temp_s4, u16 *, 0x11C) + 1;
            M2C_FIELD(temp_s4, u16 *, 0x11C) = temp_v0_2;
            if ((s16) temp_v0_2 >= 3) {
                M2C_FIELD(temp_s4, u16 *, 0x11C) = 0U;
            }
            var_t1 = 2;
            var_t0 = &D_800E8FE8_ovl_01;
            temp_s1 = M2C_FIELD(arg0, s32 *, 0x234) + (((s16) M2C_FIELD(temp_s4, u16 *, 0x11C) * 0x2F0) + 0x1D60);
            M2C_FIELD(temp_s1, s8 *, 0x130) = 0;
            M2C_FIELD(temp_s1, s32 *, 0) = 1;
            M2C_FIELD(temp_s1, s32 *, 0x178) = 1;
            var_a3 = temp_s1 + 8;
            M2C_FIELD(temp_s1, u16 *, 0x116) = (u16) M2C_FIELD(arg0, u16 *, 0x66);
            temp_v0_3 = M2C_FIELD(arg0, s32 *, 0x234);
            M2C_FIELD(temp_s1, s32 *, 0) = (s32) (1 | 0x40);
            M2C_FIELD(temp_s1, s32 *, 0x64) = (s32) (temp_v0_3 + 0x1060);
            M2C_FIELD(temp_s1, s32 *, 0x12C) = (s32) (temp_v0_3 + 0x1028);
            do {
                var_a2 = var_a3;
                var_a0 = 2;
                var_v1_2 = var_t0;
loop_18:
                temp_v0_4 = *var_v1_2;
                var_v1_2 += 2;
                var_a0 -= 1;
                *var_a2 = temp_v0_4;
                var_a2 += 2;
                if (var_a0 != -1) {
                    goto loop_18;
                }
                var_a3 += 6;
                var_t1 -= 1;
                var_t0 += 6;
            } while (var_t1 != -1);
            M2C_FIELD(temp_s1, s32 *, 0x1C) = 0xC8;
            M2C_FIELD(temp_s1, s32 *, 0x20) = 0x390;
            M2C_FIELD(temp_s1, s32 *, 0x24) = 0;
            if (arg1 == 1) {
                M2C_FIELD(temp_s1, s32 *, 0x24) = 0x64;
            }
            if (arg1 == 2) {
                M2C_FIELD(temp_s1, s32 *, 0x24) = -0x64;
            }
            func_8004251C_ovl_01(M2C_FIELD(temp_s1, s32 *, 0x64), temp_s1 + 8, temp_s1 + 0x38, var_a3);
            return 0;
        }
        goto loop_1;
    }
    M2C_FIELD(var_s0, u8 *, 4) = 0U;
    *var_s1 = 1;
    M2C_FIELD(var_s0, s32 *, -0x110) = 0xC8;
    M2C_FIELD(var_s0, s32 *, 0x4C) = 1;
    M2C_FIELD(var_s0, s32 *, -0x10C) = 0x390;
    M2C_FIELD(var_s0, s32 *, -0x108) = 0;
    if (arg1 == 1) {
        M2C_FIELD(var_s0, s32 *, -0x108) = 0x64;
    }
    var_t0_2 = var_s1 + 8;
    if (arg1 == 2) {
        M2C_FIELD(var_s0, s32 *, -0x108) = -0x64;
    }
    var_a3_2 = (u16 *)2;
    var_a2_2 = &D_800E8FE8_ovl_01;
    do {
        var_a1 = var_t0_2;
        var_a0_2 = 2;
        var_v1_3 = var_a2_2;
loop_10:
        temp_v0_5 = *var_v1_3;
        var_v1_3 += 2;
        var_a0_2 -= 1;
        *var_a1 = temp_v0_5;
        var_a1 += 2;
        if (var_a0_2 != -1) {
            goto loop_10;
        }
        var_t0_2 += 6;
        var_a3_2 -= 1;
        var_a2_2 += 6;
    } while (var_a3_2 != (u16 *)-1);
    func_8004251C_ovl_01(M2C_FIELD(var_s0, s32 *, -0xC8), var_s1 + 8, var_s1 + 0x38, var_a3_2);
    M2C_FIELD(var_s0, u16 *, -0x16) = (u16) M2C_FIELD(arg0, u16 *, 0x66);
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x234);
    *var_s1 = 1;
    M2C_FIELD(var_s0, s32 *, -0xC8) = (s32) (temp_v1 + 0x1060);
    M2C_FIELD(var_s0, s32 *, 0) = (s32) (temp_v1 + 0x1028);
    M2C_FIELD(temp_s4, u16 *, 0x11C) = var_s3;
    return 1;
}
